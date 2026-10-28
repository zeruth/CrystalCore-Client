#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00576890 */
GEN_FRAME uint GEN_THISCALL F_00576890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
  F_00570910(*(undefined * PTR32 *)((int)this + 0x13c) GEN_EDX_FWD,param_1,this,0,param_2,param_3,param_4,0);
  return (uint)param_1;
}

/* ref: FUN_005768e0 */
GEN_FRAME uint GEN_THISCALL F_005768e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 0x24))))(iVar2 + 0x144 GEN_EDX_FWD,this,param_2);
    *(int *)(iVar2 + 0x1fc) = param_3 + 1;
    *(undefined1 *)(iVar2 + 0x2a8) = 1;
    *(undefined4 *)(iVar2 + 0x1f8) = 0;
    if ((((*((byte *)GEN_TOP((*(int *)(iVar2 + 0x14c) + 0x148))) & 2) != 0) &&
        (bVar1 = *((byte *)GEN_TOP((*(int *)(iVar2 + 0x150) + 0x6e))), (bVar1 & 1) != 0)) && ((bVar1 & 2) != 0)
       ) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 4))))(iVar2 + 0x144 GEN_EDX_ARG);
      F_005662b0((undefined *)(iVar2 + 0x144) GEN_EDX_ARG,param_2);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 8))))(iVar2 + 0x144 GEN_EDX_ARG);
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
GEN_FRAME uint GEN_THISCALL F_005769d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 4) + 0x24))))(iVar2 + 4 GEN_EDX_FWD,this,param_1);
  *(undefined4 *)(iVar2 + 0xb8) = 0;
  *(undefined4 *)(iVar2 + 0xbc) = uVar3;
  if ((((*((byte *)GEN_TOP((*(int *)(iVar2 + 0xc) + 0x148))) & 2) != 0) &&
      (bVar1 = *((byte *)GEN_TOP((*(int *)(iVar2 + 0x10) + 0x6e))), (bVar1 & 1) != 0)) && ((bVar1 & 2) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 4) + 4))))(iVar2 + 4 GEN_EDX_ARG);
    F_005662b0((undefined *)(iVar2 + 4) GEN_EDX_ARG,param_1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 4) + 8))))(iVar2 + 4 GEN_EDX_ARG);
  }
  return *(uint *)(iVar2 + 0xa8);
}

/* ref: FUN_00576a60 */
GEN_FRAME uint GEN_THISCALL F_00576a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 4) + 0x24))))(iVar2 + 4 GEN_EDX_FWD,this,param_1);
  *(undefined4 *)(iVar2 + 0xb8) = 0;
  *(undefined4 *)(iVar2 + 0xbc) = uVar3;
  if ((((*((byte *)GEN_TOP((*(int *)(iVar2 + 0xc) + 0x148))) & 2) != 0) &&
      (bVar1 = *((byte *)GEN_TOP((*(int *)(iVar2 + 0x10) + 0x6e))), (bVar1 & 1) != 0)) && ((bVar1 & 2) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 4) + 4))))(iVar2 + 4 GEN_EDX_ARG);
    F_00566640((undefined *)(iVar2 + 4) GEN_EDX_ARG,param_1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 4) + 8))))(iVar2 + 4 GEN_EDX_ARG);
  }
  return *(uint *)(iVar2 + 0xa8);
}

/* ref: FUN_00576af0 */
GEN_FRAME ushort GEN_THISCALL F_00576af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x576af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (((*(uint *)((int)this + 0x9c) & 0x2000000) != 0) && ((*(byte *)((int)this + 0x148) & 2) != 0))
  {
    iVar1 = *(int *)((int)this + 0x13c);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7d4) + 0x14))))(iVar1 + 0x7d4 GEN_EDX_FWD,this,param_1);
    if ((*((byte *)GEN_TOP((*(int *)(iVar1 + 0x7dc) + 0x148))) & 2) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7d4) + 4))))(iVar1 + 0x7d4 GEN_EDX_ARG);
      F_00567030((undefined *)(iVar1 + 0x7d4) GEN_EDX_ARG,param_1);
    }
    return *(ushort *)(iVar1 + 0x7e0);
  }
  return 0;
}

/* ref: FUN_00576b70 */
GEN_FRAME uint GEN_THISCALL F_00576b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x576b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (((*(uint *)((int)this + 0x9c) & 0x2000000) != 0) && ((*(byte *)((int)this + 0x148) & 2) != 0))
  {
    iVar1 = *(int *)((int)this + 0x13c);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7d4) + 0x14))))(iVar1 + 0x7d4 GEN_EDX_FWD,this,param_1);
    if ((*((byte *)GEN_TOP((*(int *)(iVar1 + 0x7dc) + 0x148))) & 2) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7d4) + 4))))(iVar1 + 0x7d4 GEN_EDX_ARG);
      F_00567170((undefined *)(iVar1 + 0x7d4) GEN_EDX_ARG,param_1);
    }
    return (uint)*(ushort *)(iVar1 + 0x7e0);
  }
  return 0;
}

/* ref: FUN_00576bf0 */
GEN_FRAME uint GEN_THISCALL F_00576bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x576bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (((*(uint *)((int)this + 0x9c) & 0x2000000) != 0) && ((*(byte *)((int)this + 0x148) & 2) != 0))
  {
    iVar1 = *(int *)((int)this + 0x13c);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7e4) + 0x14))))(iVar1 + 0x7e4 GEN_EDX_FWD,this,param_1);
    if ((*((byte *)GEN_TOP((*(int *)(iVar1 + 0x7ec) + 0x148))) & 2) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7e4) + 4))))(iVar1 + 0x7e4 GEN_EDX_ARG);
      F_00567030((undefined *)(iVar1 + 0x7e4) GEN_EDX_ARG,param_1);
    }
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = *(undefined2 *)(iVar1 + 0x7f4);
    }
    return *(uint *)(iVar1 + 0x7f0);
  }
  return 0;
}

/* ref: FUN_00576c80 */
GEN_FRAME uint GEN_THISCALL F_00576c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x576c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (((*(uint *)((int)this + 0x9c) & 0x2000000) != 0) && ((*(byte *)((int)this + 0x148) & 2) != 0))
  {
    iVar1 = *(int *)((int)this + 0x13c);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7e4) + 0x14))))(iVar1 + 0x7e4 GEN_EDX_FWD,this,param_1);
    if ((*((byte *)GEN_TOP((*(int *)(iVar1 + 0x7ec) + 0x148))) & 2) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7e4) + 4))))(iVar1 + 0x7e4 GEN_EDX_ARG);
      F_00567170((undefined *)(iVar1 + 0x7e4) GEN_EDX_ARG,param_1);
    }
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = *(undefined2 *)(iVar1 + 0x7f4);
    }
    return *(uint *)(iVar1 + 0x7f0);
  }
  return 0;
}

/* ref: FUN_00576d10 */
GEN_FRAME uint GEN_THISCALL F_00576d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
      ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 4))(piVar9 GEN_EDX_ARG);
      F_005662b0(piVar9 GEN_EDX_ARG,uVar10);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 8))(piVar9 GEN_EDX_ARG);
    }
    local_3c = *(float *)(iVar8 + 0x284);
    local_38 = *(float *)(iVar8 + 0x288);
  }
  fVar11 = F_005580e0((*(int *)&gen_args[0]) GEN_EDX_ARG,*(float *)((*(int *)&gen_args[0]) + 0x74),1);
  fVar12 = F_005581b0((*(int *)&gen_args[0]) GEN_EDX_ARG,*(float *)((*(int *)&gen_args[0]) + 0x74),0);
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
        ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 4))(piVar9 GEN_EDX_ARG);
        F_00567030(piVar9 GEN_EDX_ARG,uVar10);
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
                ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 4))(piVar9 GEN_EDX_ARG);
                F_00567030(piVar9 GEN_EDX_ARG,uVar10);
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
                ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 4))(piVar9 GEN_EDX_ARG);
                F_005662b0(piVar9 GEN_EDX_ARG,_Dst);
                ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 8))(piVar9 GEN_EDX_ARG);
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
            ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 4))(piVar9 GEN_EDX_ARG);
            F_005662b0(piVar9 GEN_EDX_ARG,_Dst);
            ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 8))(piVar9 GEN_EDX_ARG);
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
    uVar10 = F_00570990(*(undefined4 *)((*(int *)&gen_args[0]) + 0x13c) GEN_EDX_ARG,(int)&(*(float * PTR32 *)&gen_args[1]) + 3,(*(int *)&gen_args[0]),1,local_c,
                          local_8,uVar10,(*(uint *)&gen_args[3]),(*(int *)&gen_args[4]),0,REFG(undefined4, 0x108cc50));
    if ((*((undefined1 *)GEN_TOP(((char *)&(*(float * PTR32 *)&gen_args[1]) + 3)))) != '\0') {
      return uVar10;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_005772f0 */
GEN_FRAME uint GEN_THISCALL F_005772f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
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
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x654) + 0x24))))(iVar2 + 0x654 GEN_EDX_FWD,param_1,param_4);
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
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x654) + 4))))(iVar2 + 0x654 GEN_EDX_ARG);
    F_005662b0((undefined *)(iVar2 + 0x654) GEN_EDX_ARG,param_4);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x654) + 8))))(iVar2 + 0x654 GEN_EDX_ARG);
  }
  if (*(char *)(iVar2 + 0x7d1) != '\0') {
    return *(uint *)(iVar2 + 0x7cc);
  }
  return 0xffffffff;
}

/* ref: FUN_00577400 */
GEN_FRAME uint GEN_THISCALL F_00577400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x577400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((*(byte *)((int)this + 0x148) & 2) == 0) {
    return 0;
  }
  uVar1 = F_00570b20(*(undefined * PTR32 *)((int)this + 0x13c) GEN_EDX_FWD,this,param_1,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf5 */
GEN_FRAME uint GEN_THISCALL F_00577430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x577430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = *(uint *)(this + 0xbc);
  uVar2 = *(uint *)(this + 0xb4);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  F_0056fd70(this GEN_EDX_FWD,param_1,(uint)&(*(undefined * PTR32 *)(gen_frame + 0x8)),(uint)(uVar1 < uVar2));
  if (*(int *)(this + 0x18) == 1) {
    fVar3 = (float10)*(float *)(this + 0x280) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))));
  }
  else {
    fVar3 = (float10)*(float *)(this + 0x24) + (float10)*(float *)(this + 0x280);
  }
  *(float *)(this + 0x280) = (float)fVar3;
  if (*(uint *)(this + 0xb4) <= *(uint *)(this + 0xbc)) {
    *(int *)(this + 0xa4) = *(int *)(this + 0xa4) + 1;
    *(int *)(this + 0xac) = *(int *)(this + 0xac) + 1;
    if ((*(uint *)(this + 0x50) >> 0x14 & 1) != 0) {
      *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 1;
    }
  }
  uVar2 = *(uint *)(this + 0xbc) + 1;
  *(uint *)(this + 0xbc) = uVar2;
  return uVar2;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf6 */
GEN_FRAME uint GEN_THISCALL F_005774c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5774c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = *(uint *)(this + 0xbc);
  uVar2 = *(uint *)(this + 0xb4);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  F_00570050(this GEN_EDX_FWD,param_1,param_2,&(*(undefined * PTR32 *)(gen_frame + 0x8)),(uint)(uVar1 < uVar2));
  if (*(int *)(this + 0x18) == 1) {
    fVar3 = (float10)*(float *)(this + 0x280) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))));
  }
  else {
    fVar3 = (float10)*(float *)(this + 0x24) + (float10)*(float *)(this + 0x280);
  }
  *(float *)(this + 0x280) = (float)fVar3;
  uVar2 = F_005668c0((undefined *)this GEN_EDX_ARG,param_1,param_2);
  return uVar2;
}

/* ref: FUN_00577530 */
GEN_FRAME uint GEN_THISCALL F_00577530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x577530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  int iVar1;
  int * piVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  char cVar8;
  ulonglong uVar9;
  
  iVar1 = param_2;
  if (param_2 != 0) {
    F_0042ccf0((undefined *)((int)this + 0x22270) GEN_EDX_FWD,param_1);
  }
  param_2 = REFG(undefined4, 0x108cc50);
  uVar6 = REFG(undefined4, 0x108cc50);
  if (iVar1 != 0) {
    uVar5 = 0;
    cVar8 = '\x02';
    if (param_3 != 0) {
      do {
        if (cVar8 == '\x01') {
          if (*(char *)(uVar5 + iVar1) != '\x01') {
            cVar8 = *(char *)(uVar5 + iVar1);
            param_2 = uVar5;
          }
        }
        else if (*(char *)(uVar5 + iVar1) == '\x01') {
          uVar6 = uVar5;
          cVar8 = '\x01';
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_3);
    }
  }
  uVar5 = uVar6;
  if (uVar6 == param_2) {
    uVar5 = param_4;
  }
  sVar7 = *(short *)((int)this + 0x22266) + (short)uVar5;
  uVar6 = F_00572770((undefined *)((int)this + 0x22244) GEN_EDX_ARG,param_1,uVar6,param_2);
  this_00 = (undefined *)((int)this + 0x22b38);
  F_0042aca0(this_00 GEN_EDX_ARG);
  iVar1 = (int)this + 0x22ae4;
  F_0042aca0(iVar1 GEN_EDX_ARG);
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  iVar3 = *piVar2;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,iVar1);
  ((code *)*(gen_code32 *)(iVar3 + 0xc))(piVar2,uVar6,uVar5);
  uVar6 = F_0042e360(this_00 GEN_EDX_ARG,iVar1);
  if (*(int *)((int)this + 0x22248) != 0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x109ce7f),REFG(undefined4, 0x108cc50));
    if (*(int *)((int)this + 0x22a78) == 0) {
      uVar6 = F_0042a970((int)this + 0x2276c GEN_EDX_ARG);
      uVar4 = (undefined2)uVar6;
    }
    else {
      uVar6 = F_0055c170((int)this + 0x2276c,0xffffffff);
      uVar4 = (undefined2)uVar6;
    }
    uVar6 = F_0056a520((undefined *)((int)this + 0x22244) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    piVar2 = *(int * PTR32 *)((int)this + 0x22248);
    (*(undefined2 *)(gen_frame + 0x5c)) = 0xffff;
    (*(short *)(gen_frame + 0x5e)) = sVar7;
    (*(short *)(gen_frame + 0x60)) = sVar7;
    (*(uint *)(gen_frame + 0x68)) = uVar6;
    (*(undefined2 *)(gen_frame + 0x62)) = uVar4;
    (*(undefined * PTR32 *)(gen_frame + 0x64)) = this_00;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x5c)));
    uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar6 = (uint)uVar9;
  }
  return uVar6;
}

/* ref: FUN_00577690 */
GEN_FRAME uint F_00577690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x577690u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint * puVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  
  uVar3 = (*(uint *)&gen_args[1]);
  puVar2 = (*(uint * PTR32 *)&gen_args[0]);
  uVar4 = REFG(undefined4, 0x1302354);
  if (((*(uint *)&gen_args[1]) & 0xf0) - 0x10 < 0x31) {
                    
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x57794c) + ((*(uint *)&gen_args[1]) & 0xf0)))))) {
    case 0: ;
      uVar4 = REFG(undefined4, 0x1302354) & 0xfffffffe;
      break;
    case 1: ;
      uVar4 = REFG(undefined4, 0x1302354) & 0xfffff1ff | 0x100;
      break;
    case 2: ;
      uVar4 = REFG(undefined4, 0x1302354) & 0xfffff1f5 | 0x104;
      break;
    case 3: ;
      uVar4 = REFG(undefined4, 0x1302354) & 0xfffff20f | 0x200;
    }
  }
  *(*(uint * PTR32 *)&gen_args[0]) = uVar4 & 0x7ffffff;
  (*(uint * PTR32 *)&gen_args[0])[3] = ((((*(uint *)&gen_args[1]) >> 10 & 1) * 2 | (*(uint *)&gen_args[1]) >> 9 & 1) * 2 | (*(uint *)&gen_args[1]) >> 8 & 1) << 5 |
               (*(uint *)&gen_args[1]) >> 3 & 0x100 | (*(uint * PTR32 *)&gen_args[0])[3] & 0xfffffe1f;
  uVar4 = (*(uint *)&gen_args[1]) & 0xf000;
  if (uVar4 == 0) {
    (*(uint *)&gen_args[1]) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
    (*(uint * PTR32 *)&gen_args[0]) = (uint *)0x1ff;
    piVar5 = (int *)&(*(uint *)&gen_args[1]);
    if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
      piVar5 = (int *)&(*(uint * PTR32 *)&gen_args[0]);
    }
    iVar1 = *piVar5;
    (*(uint *)&gen_args[1]) = iVar1;
    (*(uint * PTR32 *)&gen_args[0]) = (uint *)0xfffffe00;
    puVar7 = (uint *)&(*(uint * PTR32 *)&gen_args[0]);
    if (-0x201 < iVar1) {
      puVar7 = &(*(uint *)&gen_args[1]);
    }
    uVar6 = (*puVar7 & 0x3ff) << 10 | 0x240;
    goto LAB_00577923;
  }
  if (uVar4 == 0x1000) {
    puVar7 = (uint *)F_004d4af0(&(*(uint *)&gen_args[1]) GEN_EDX_ARG,0,0,0,9,REFG(float, 0x1090708),0,0,0);
    uVar6 = *puVar7 & 0xfffffff;
    goto LAB_00577923;
  }
  if (uVar4 == 0x2000) {
LAB_00577875: ;
    uVar10 = 2;
    uVar9 = 2;
    fVar11 = REFG(float, 0x1090708);
  }
  else {
    if (uVar4 == 0x3000) {
      puVar7 = (uint *)F_004d4af0(&(*(uint *)&gen_args[1]) GEN_EDX_ARG,0,0,0,9,(float)(float10)0,0,0,0);
      uVar6 = *puVar7 & 0xfffffff;
      goto LAB_00577923;
    }
    if (uVar4 == 0x4000) {
      puVar7 = (uint *)F_004d4af0(&(*(uint *)&gen_args[1]) GEN_EDX_ARG,1,1,1,9,(float)(float10)0,0,0,0);
      uVar6 = *puVar7 & 0xfffffff;
      goto LAB_00577923;
    }
    if (uVar4 == 0x5000) {
      puVar7 = (uint *)F_004d4af0(&(*(uint *)&gen_args[1]) GEN_EDX_ARG,1,1,1,9,REFG(float, 0x1090708),0,0,0);
      uVar6 = *puVar7 & 0xfffffff;
      goto LAB_00577923;
    }
    if (uVar4 == 0x6000) {
      fVar11 = (float)(float10)0;
      uVar10 = 2;
      uVar9 = 2;
    }
    else {
      if (uVar4 == 0x7000) goto LAB_00577875;
      if (uVar4 == 0x8000) {
        fVar8 = (float10)0;
      }
      else {
        if (uVar4 == 0x9000) {
          puVar7 = (uint *)F_004d4af0(&(*(uint *)&gen_args[1]) GEN_EDX_ARG,0,2,0,9,(float)(float10)0,0,0,0);
          uVar6 = *puVar7 & 0xfffffff;
          goto LAB_00577923;
        }
        if (uVar4 != 0xa000) {
          uVar6 = (*(uint *)&gen_args[1]);
          if (uVar4 == 0xb000) {
            puVar7 = (uint *)F_004d4af0(&(*(uint *)&gen_args[1]) GEN_EDX_ARG,0,2,0,9,(float)(float10)1,0,0,0);
            uVar6 = *puVar7 & 0xfffffff;
          }
          goto LAB_00577923;
        }
        fVar8 = (float10)REFG(float, 0x1090708);
      }
      fVar11 = (float)fVar8;
      uVar10 = 0;
      uVar9 = 0;
    }
  }
  puVar7 = (uint *)F_004d4af0(&(*(uint *)&gen_args[1]) GEN_EDX_ARG,2,uVar9,uVar10,9,fVar11,0,0,0);
  uVar6 = *puVar7 & 0xfffffff;
LAB_00577923: ;
  puVar2[2] = uVar6 & 0xfffffff;
  puVar2[3] = puVar2[3] ^ (puVar2[3] ^ uVar3 >> 0x10) & 0x1f;
  puVar2[1] = (*(uint *)&gen_args[2]);
  return uVar3 >> 0x10;
}

/* ref: FUN_00577990 */
GEN_FRAME uint GEN_THISCALL F_00577990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x577990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  undefined4 * puVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0x100000;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x1800000;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x600000;
  uVar4 = F_00404270();
  pvVar5 = (undefined *)F_00406bd0(0x4390,0,uVar4,0);
  if (pvVar5 == (undefined *)0x0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = (undefined *)F_0055b240(pvVar5 GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)this = pvVar5;
  if (pvVar5 == (undefined *)0x0) {
    return 0xfffffffd;
  }
  bVar3 = F_00571a10(pvVar5 GEN_EDX_ARG,0x1f,0xe,8,2,&(*(undefined4 *)(gen_frame + 0x0)));
  if (bVar3 == 0) {
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      F_0055b460(*(undefined * PTR32 *)this GEN_EDX_ARG);
      puVar2 = *(undefined4 * PTR32 *)this;
      if (puVar2 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
        *(undefined4 *)this = 0;
      }
    }
    return 0xfffffffc;
  }
  *(undefined4 *)((int)this + 8) = 0x10;
  puVar1 = (uint *)((int)this + 0xc);
  uVar4 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (*(uint *)((int)this + 8) <= uVar4) {
    return 0xfffffffb;
  }
  *(uint *)((int)this + 4) = uVar4 * 0xb0 + *(int *)(*(int *)this + 0x2a8);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  F_00577690((int)this + 0x14,0,0);
  *(undefined4 *)((int)this + 0x28) = 0;
  return 0;
}

/* ref: FUN_00577aa0 */
GEN_FRAME unsigned int GEN_THISCALL F_00577aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x577aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  if ((this != (undefined *)0x0) && (this_00 = *(undefined * PTR32 *)((int)this + 0x1c), this_00 != (undefined *)0x0)) {
    *(ushort *)((int)this_00 + 0x22) = *(ushort *)((int)this_00 + 0x22) & 0x7fff;
    *(undefined4 *)((int)this_00 + 0x18) = param_1;
    F_00573430(this_00 GEN_EDX_FWD,param_1);
  }
  return;
}

/* ref: FUN_00577ad0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00577ad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x577ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  if ((this != (undefined *)0x0) && (this_00 = *(undefined * PTR32 *)((int)this + 0x1c), this_00 != (undefined *)0x0)) {
    *(ushort *)((int)this_00 + 0x22) = *(ushort *)((int)this_00 + 0x22) & 0x7fff;
    F_00573430(this_00 GEN_EDX_FWD,*(undefined4 *)((int)this_00 + 0x18));
  }
  return;
}

/* ref: FUN_00577af0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00577af0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x577af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  if ((this != (undefined *)0x0) && (*(undefined * PTR32 *)((int)this + 0x80) != (undefined *)0x0)) {
    F_005653d0(*(undefined * PTR32 *)((int)this + 0x80) GEN_EDX_FWD);
    piVar1 = *(int * PTR32 *)((int)this + 0x80);
    if (piVar1 != (int *)0x0) {
      iVar3 = *piVar1;
      while (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0x10);
        F_00406ad0(iVar3);
        iVar3 = iVar2;
      }
      *piVar1 = 0;
      F_00406ad0(piVar1);
      *(undefined4 *)((int)this + 0x80) = 0;
    }
  }
  return;
}

/* ref: FUN_00577b50 */
GEN_NOFRAME byte GEN_THISCALL F_00577b50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x577b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (((this != (undefined *)0x0) &&
      (iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) +
                       (uint)*(ushort *)((int)this + 0x90) * 0xc))), iVar1 != 0)) &&
     (*(int *)(iVar1 + 8) == 0)) {
    if ((*(int *)(iVar1 + 0xc) != 0) && (uVar2 = F_00572c50(*(int *)(iVar1 + 0xc)), uVar2 == 2)) {
      return 1;
    }
    if (((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0xc) != 0)) &&
       (uVar2 = F_00572c50(*(int *)(iVar1 + 0xc)), uVar2 == 3)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00577bc0 */
GEN_FRAME uint GEN_THISCALL F_00577bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x577bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  double dVar5;
  uint local_c;
  
  if (this == (undefined *)0x0) {
    return 0;
  }
  this_00 = (undefined *)F_005684e0(this GEN_EDX_FWD,param_4);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  if (param_1 == 0) {
    uVar1 = F_0042a990((int)this + 0x9c GEN_EDX_ARG);
    dVar5 = F_00576610(this_00 GEN_EDX_ARG,uVar1,param_2,param_3);
    local_c = (uint)(longlong)TRUNC(dVar5);
    uVar1 = local_c;
  }
  else {
    dVar5 = F_00576610(this_00 GEN_EDX_ARG,param_1,param_2,param_3);
    local_c = (uint)(longlong)TRUNC(dVar5);
    uVar1 = local_c;
  }
  puVar3 = (undefined4 *)((int)this_00 + 0xa8);
  puVar4 = (undefined4 *)((int)this_00 + 100);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return uVar1;
}

/* ref: FUN_00577c70 */
GEN_FRAME uint GEN_THISCALL F_00577c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x577c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  if (this != (undefined *)0x0) {
    switch((unsigned int)(uintptr_t)(*(byte *)((int)this + 0xfc) & 0xf)) {
    case 0: ;
    case 3: ;
    case 6: ;
      uVar2 = F_00577bc0(this GEN_EDX_FWD,param_1,param_2,param_3,0);
      return uVar2;
    case 1: ;
    case 4: ;
    case 7: ;
      uVar2 = F_00577bc0(this GEN_EDX_ARG,param_1,0,REFG(undefined4, 0x108cc50),0);
      uVar1 = *(ushort *)((int)this + 0x7c);
      uVar3 = F_00577bc0(this GEN_EDX_ARG,param_1,param_2,param_3,0);
      return uVar3 + (uVar1 - uVar2 >> 1);
    case 2: ;
    case 5: ;
    case 8: ;
      return (uint)*(ushort *)((int)this + 0x7c);
    }
  }
  return 0;
}

/* ref: FUN_00577d20 */
GEN_FRAME uint GEN_THISCALL F_00577d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x577d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  undefined * this_00;
  uint uVar3;
  float * pfVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (this == (undefined *)0x0) {
    *param_2 = 0;
    *param_1 = 0;
    return (uint)param_1;
  }
  this_00 = (undefined *)F_005684e0(this GEN_EDX_FWD,param_6);
  if (this_00 != (undefined *)0x0) {
    uVar3 = param_3;
    uVar8 = param_4;
    uVar9 = param_5;
    if (param_3 == 0) {
      uVar3 = F_0042a990((int)this + 0x9c GEN_EDX_ARG);
      uVar8 = param_4;
      uVar9 = param_5;
    }
    pfVar4 = (float *)F_005767f0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),uVar3,uVar8,uVar9);
    fVar1 = *pfVar4;
    fVar2 = pfVar4[1];
    (*(float *)(gen_frame + 0x14)) = fVar1;
    puVar6 = (undefined4 *)((int)this_00 + 0xa8);
    puVar7 = (undefined4 *)((int)this_00 + 100);
    for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *param_1 = (short)(int)fVar1;
    (*(float *)(gen_frame + 0x18)) = fVar2;
    *param_2 = (short)(int)fVar2;
    return (uint)param_2;
  }
  *param_2 = 0;
  *param_1 = 0;
  return (uint)param_2;
}

/* ref: FUN_00577de0 */
GEN_FRAME uint GEN_THISCALL F_00577de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x577de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  float * pfVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (this == (undefined *)0x0) {
    *param_2 = 0;
    *param_1 = 0;
    return (uint)param_1;
  }
  this_00 = (undefined *)F_005684e0(this GEN_EDX_FWD,0);
  if (this_00 == (undefined *)0x0) {
    *param_2 = 0;
    *param_1 = 0;
    return 0;
  }
  if (param_3 == 0) {
    uVar2 = F_0042a990((int)this + 0x9c GEN_EDX_ARG);
    pfVar1 = (float *)F_005768e0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),uVar2,param_4);
    (*(float *)(gen_frame + 0x14)) = *pfVar1;
    (*(float *)(gen_frame + 0x18)) = pfVar1[1];
  }
  else {
    pfVar1 = (float *)F_005768e0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),param_3,param_4);
    (*(float *)(gen_frame + 0x14)) = *pfVar1;
    (*(float *)(gen_frame + 0x18)) = pfVar1[1];
  }
  puVar4 = (undefined4 *)((int)this_00 + 0xa8);
  puVar5 = (undefined4 *)((int)this_00 + 100);
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *param_1 = (short)(int)(*(float *)(gen_frame + 0x14));
  *param_2 = (short)(int)(*(float *)(gen_frame + 0x18));
  return (int)(*(float *)(gen_frame + 0x18));
}

/* ref: FUN_00577ea0 */
GEN_NOFRAME uint GEN_THISCALL F_00577ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x577ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  float10 fVar7;
  
  if (this == (undefined *)0x0) {
    return 0;
  }
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x20) * (float10)*(float *)((int)this + 0x20) +
                 (float10)*(float *)((int)this + 0x24) * (float10)*(float *)((int)this + 0x24))));
  (*(float *)(gen_frame + 0x3c)) = fVar2;
  fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
  (*(float *)(gen_frame + 0x3c)) = fVar2;
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x28) * (float10)*(float *)((int)this + 0x28) +
                 (float10)*(float *)((int)this + 0x2c) * (float10)*(float *)((int)this + 0x2c))));
  (*(float *)(gen_frame + 0x3c)) = fVar2;
  fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
  (*(float *)(gen_frame + 0x3c)) = fVar2;
  (*(float *)(gen_frame + 0x24)) = fVar2;
  uVar6 = F_005684e0(this GEN_EDX_FWD,1);
  fVar2 = *(float *)((int)this + 0x30);
  uVar4 = *(ushort *)((int)this + 0x7e);
  uVar5 = *(ushort *)((int)this + 0x7c);
  (*(byte *)(gen_frame + 0x1c)) = (*(byte *)(gen_frame + 0x1c)) & 0xfe;
  (*(float *)(gen_frame + 0x3c)) = gen_bits2f((uint)uVar5);
  bVar3 = *(byte *)((int)this + 0xfc);
  (*(float *)(gen_frame + 0x38)) = fVar2;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  fVar1 = *(float *)((int)this + 0x34);
  fVar7 = (float10)fVar2;
  (*(float *)(gen_frame + 0x38)) = gen_bits2f((uint)uVar4);
  (*(float *)(gen_frame + 0x34)) = fVar1;
  (*(uint *)(gen_frame + 0x18)) = bVar3 & 0xf;
  (*(float *)(gen_frame + 0x10)) = (float)(fVar7 + (float10)uVar5 * (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = (float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x24)) + (float10)fVar1);
  if (param_3 != 0) {
    if ((*(byte *)((int)this + 0xff) & 1) != 0) {
      (*(float *)(gen_frame + 0x34)) = gen_bits2f((int)*(short *)((int)this + 0x10e));
      fVar2 = ((float)GEN_TOF(((float10)(int)*(short *)((int)this + 0x10e) +
                     (float10)*(float *)((int)this + 0x34))));
      (*(float *)(gen_frame + 0x34)) = fVar2;
      (*(float *)(gen_frame + 0x34)) = gen_bits2f((int)*(short *)((int)this + 0x10c));
      fVar1 = ((float)GEN_TOF(((float10)(int)*(short *)((int)this + 0x10c) + fVar7)));
      (*(float *)(gen_frame + 0x34)) = fVar1;
      uVar6 = F_005772f0(uVar6 GEN_EDX_ARG,fVar1,fVar2,param_3,param_1,param_2);
      return uVar6;
    }
    uVar6 = F_00576d10(uVar6 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x8)),param_3,param_1,param_2);
    return uVar6;
  }
  if ((*(byte *)((int)this + 0xff) & 1) != 0) {
    (*(float *)(gen_frame + 0x34)) = gen_bits2f((int)*(short *)((int)this + 0x10e));
    fVar2 = ((float)GEN_TOF(((float10)(int)*(short *)((int)this + 0x10e) +
                   (float10)*(float *)((int)this + 0x34))));
    (*(float *)(gen_frame + 0x34)) = fVar2;
    (*(float *)(gen_frame + 0x34)) = gen_bits2f((int)*(short *)((int)this + 0x10c));
    fVar1 = ((float)GEN_TOF(((float10)(int)*(short *)((int)this + 0x10c) + fVar7)));
    (*(float *)(gen_frame + 0x34)) = fVar1;
    uVar6 = F_005772f0(uVar6 GEN_EDX_ARG,fVar1,fVar2,*(undefined4 *)((int)this + 0xf0),param_1,param_2);
    return uVar6;
  }
  uVar6 = F_00576d10(uVar6 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x8)),*(uint *)((int)this + 0xf0),param_1,param_2);
  return uVar6;
}

/* ref: FUN_00578070 */
GEN_FRAME uint GEN_THISCALL F_00578070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x578070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  byte bVar1;
  int iVar2;
  char cVar3;
  uint in_EAX = 0;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  float fVar9;
  float fVar10;
  
  if (this != (undefined *)0x0) {
    uVar4 = F_005684e0(this GEN_EDX_FWD,1);
    iVar6 = REFG(int, 0x108cc50);
    in_EAX = 0;
    if (uVar4 != 0) {
      iVar2 = *(int *)((int)this + 0xf0);
      iVar5 = REFG(int, 0x108cc50);
      fVar9 = REFG(float, 0x10a0da0);
      fVar10 = REFG(float, 0x10a0da0);
      if ((*(byte *)(uVar4 + 0x148) & 2) != 0) {
        iVar5 = *(int *)(uVar4 + 0x13c);
        if (iVar2 == 0) {
          fVar9 = 0.0;
          fVar10 = fVar9;
        }
        else {
          this_00 = (int *)(iVar5 + 0x144);
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar5 + 0x144) + 0x24))))(this_00,uVar4,iVar2);
          *(undefined1 *)(iVar5 + 0x2a8) = 0;
          *(undefined4 *)(iVar5 + 0x1f8) = 0;
          *(int *)(iVar5 + 0x1fc) = iVar6;
          if ((((*((byte *)GEN_TOP((*(int *)(iVar5 + 0x14c) + 0x148))) & 2) != 0) &&
              (bVar1 = *((byte *)GEN_TOP((*(int *)(iVar5 + 0x150) + 0x6e))), (bVar1 & 1) != 0)) &&
             ((bVar1 & 2) != 0)) {
            ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 4))(this_00 GEN_EDX_ARG);
            F_005662b0(this_00 GEN_EDX_ARG,iVar2);
            ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 8))(this_00 GEN_EDX_ARG);
          }
          fVar9 = *(float *)(iVar5 + 0x284);
          fVar10 = *(float *)(iVar5 + 0x288);
        }
      }
      in_EAX = CONCAT31((int3)((uint)iVar5 >> 8),*(undefined1 *)((int)this + 0xfc)) & 0xffffff0f;
      cVar3 = (char)in_EAX;
      if (((cVar3 == '\x03') || (cVar3 == '\0')) || (cVar3 == '\x06')) {
        *(short *)((int)this + 0x7c) = (short)(int)fVar9;
      }
      if (((cVar3 == '\x01') || (cVar3 == '\0')) || (cVar3 == '\x02')) {
        *(short *)((int)this + 0x7e) = (short)(int)fVar10;
      }
      puVar7 = (undefined4 *)(uVar4 + 0xa8);
      puVar8 = (undefined4 *)(uVar4 + 100);
      for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
  }
  return in_EAX;
}

/* ref: Component::GUI2::AtkImageNodeRenderer::vf3 */
GEN_FRAME uint GEN_THISCALL F_005781a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5781a0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  byte bVar3;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if ((*(int *)(in_ecx + 4) == 0) || (*(int *)(in_ecx + 8) == 0)) {
    return 0xfffffffe;
  }
  if (*(int *)(param_2 + 0x8c) == 0) {
    return 0xfffffffd;
  }
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 0x8c) + 8))) + (uint)*(ushort *)(param_2 + 0x90) * 0xc)))
  ;
  if (piVar1 == (int *)0x0) {
    return 0xfffffffc;
  }
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    return 0xfffffffb;
  }
  bVar3 = F_00572cc0(iVar2 + 4 GEN_EDX_FWD);
  return (-(uint)(bVar3 != 0) & 6) - 6;
}

/* ref: FUN_00578220 */
GEN_FRAME uint GEN_THISCALL F_00578220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x578220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_004d6970(*(undefined * PTR32 *)((int)this + 0x9c) GEN_EDX_FWD);
  uVar1 = F_005725c0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  *(uint *)((int)this + 0x2a0) = uVar1;
  *(undefined * PTR32 *)((int)this + 0x2a4) = (*(undefined * PTR32 *)(gen_frame + 0x8));
  return uVar1;
}

/* ref: FUN_00578260 */
GEN_FRAME uint GEN_STDCALL F_00578260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x578260u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  uVar3 = param_1;
  this = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  if (param_1 == 0x10) {
    param_1 = 2;
  }
  else {
    if (param_1 != 0x20) {
      return param_1;
    }
    param_1 = 5;
  }
  if (param_2 != 0) {
    puVar2 = (undefined4 *)F_004d4760(this GEN_EDX_ARG,0x54);
    uVar3 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 5;
      puVar2[1] = param_1;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = param_3;
      puVar2[5] = param_4;
      puVar2[6] = param_2;
      bVar1 = F_004dc830(this GEN_EDX_ARG,puVar2 + 7);
      uVar3 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar3 = F_004d4810(this GEN_EDX_ARG,puVar2);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_005782f0 */
GEN_FRAME uint GEN_STDCALL F_005782f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5782f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * this;
  undefined4 * puVar1;
  uint uVar2;
  
  this = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  puVar1 = (undefined4 *)F_004d4760(this GEN_EDX_ARG,0x14);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 2;
    puVar1[1] = *param_1;
    puVar1[2] = param_1[1];
    puVar1[3] = param_1[2];
    puVar1[4] = param_1[3];
    uVar2 = F_004d4810(this GEN_EDX_ARG,puVar1);
  }
  return uVar2;
}

/* ref: FUN_00578350 */
GEN_FRAME uint GEN_THISCALL F_00578350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x578350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = *(uint *)((int)this + 0x4334);
  if (uVar2 < 8) {
    uVar2 = uVar2 + 1;
    *(uint *)((int)this + 0x4334) = uVar2;
    if (uVar2 < 2) {
      puVar1 = (undefined4 *)((int)this + uVar2 * 0x10 + 0x42b4);
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      puVar1[3] = param_1[3];
    }
    else {
      F_004e28b0((int)this + uVar2 * 0x10 + 0x42b4,(int)this + uVar2 * 0x10 + 0x42a4,param_1);
    }
    puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x4334) * 0x10 + 0x42b4)));
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
    puVar3 = (undefined4 *)F_004d4760(this_00 GEN_EDX_ARG,0x14);
    uVar2 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 2;
      puVar3[1] = *puVar1;
      puVar3[2] = puVar1[1];
      puVar3[3] = puVar1[2];
      puVar3[4] = puVar1[3];
      uVar2 = F_004d4810(this_00 GEN_EDX_ARG,puVar3);
    }
  }
  return uVar2;
}

/* ref: FUN_00578410 */
GEN_NOFRAME uint GEN_THISCALL F_00578410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x578410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined * this_00;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)((int)this + 0x4334) != 0) {
    iVar2 = *(int *)((int)this + 0x4334) - 1;
    *(int *)((int)this + 0x4334) = iVar2;
    puVar1 = (undefined4 *)((int)this + iVar2 * 0x10 + 0x42b4);
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
    puVar3 = (undefined4 *)F_004d4760(this_00 GEN_EDX_FWD,0x14);
    uVar4 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 2;
      puVar3[1] = *puVar1;
      puVar3[2] = puVar1[1];
      puVar3[3] = puVar1[2];
      puVar3[4] = puVar1[3];
      uVar4 = F_004d4810(this_00 GEN_EDX_ARG,puVar3);
    }
  }
  return uVar4;
}

/* ref: FUN_00578480 */
GEN_NOFRAME uint GEN_THISCALL F_00578480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x578480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  int iVar1;
  undefined * this_00;
  undefined * this_01;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  undefined4 * puVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cab8)));
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  this_00 = *(undefined * PTR32 *)(iVar1 + 0x1a8);
  (*(int *)(gen_frame + 0xc)) = param_2;
  if ((char)param_1 == '\0') {
    *(uint *)((int)this_00 + 8) =
         *(uint *)((int)this_00 + 8) ^
         (*(uint *)((int)this + 0x248) ^ *(uint *)((int)this_00 + 8)) & 0x7ffff;
    *(undefined1 *)((int)this + 0x4380) = 0;
    uVar6 = F_00572240(this GEN_EDX_FWD,0);
  }
  else {
    fVar2 = (float10)0;
    *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xfff80001 | 1;
    *(undefined1 *)((int)this + 0x4380) = 1;
    iVar7 = *(int *)(param_2 + 0x1c);
    (*(undefined4 *)(gen_frame + 0x110)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x114)) = 0;
    fVar9 = (float10)*(int *)(param_2 + 0x1c);
    (*(undefined4 *)(gen_frame + 0x118)) = 0;
    (*(undefined4 *)(gen_frame + 0x11c)) = 0;
    (*(undefined4 *)(gen_frame + 0x120)) = 0;
    (*(undefined4 *)(gen_frame + 0x124)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x128)) = 0;
    (*(undefined4 *)(gen_frame + 0x12c)) = 0;
    (*(undefined4 *)(gen_frame + 0x130)) = 0;
    (*(undefined4 *)(gen_frame + 0x134)) = 0;
    (*(undefined4 *)(gen_frame + 0x138)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x13c)) = 0;
    (*(undefined4 *)(gen_frame + 0x140)) = uVar4;
    (*(undefined4 *)(gen_frame + 0x144)) = uVar4;
    (*(undefined4 *)(gen_frame + 0x148)) = 0;
    (*(undefined4 *)(gen_frame + 0x14c)) = uVar3;
    if (iVar7 < 0) {
      fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar10 = (float10)*(int *)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x18) < 0) {
      fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    F_004f08f0(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_ARG,(float)fVar2,(float)fVar10,(float)fVar9,(float)fVar2,(float)fVar2,
                 (float)(float10)1,(float)fVar2,(float)fVar2);
    puVar5 = (undefined4 *)F_004f0e10(((undefined1 *)(gen_frame + 0x10)),(uint)&(*(undefined4 *)(gen_frame + 0x110)),param_3);
    puVar8 = ((undefined4 *)(gen_frame + 0x90));
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 - 1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined4 *)F_004f0e10(((undefined1 *)(gen_frame + 0x50)),(uint)((undefined4 *)(gen_frame + 0x90)),(uint)((undefined1 *)(gen_frame + 0xd0)));
    puVar8 = (undefined4 *)((int)this + 0x4340);
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 - 1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    F_00572240(this GEN_EDX_ARG,0);
    this_01 = *(undefined * PTR32 *)(iVar1 + 0x1a8);
    F_004daa40(this_01 GEN_EDX_ARG,1,&(*(int *)(gen_frame + 0xc)),0,0,0);
    puVar5 = (undefined4 *)F_004d4760(this_00 GEN_EDX_ARG,0x28);
    uVar6 = 0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 3;
      puVar5[2] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[1] = 1;
      puVar5[3] = 0;
      uVar6 = F_004d4810(this_00 GEN_EDX_ARG,puVar5);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x15c)) ^ (uint)(uint)(gen_frame + 0x160) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_005786b0 */
GEN_FRAME uint GEN_THISCALL F_005786b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5786b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  float * pfVar5;
  float10 fVar6;
  uint * local_8;
  
  puVar3 = (*(uint * PTR32 *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *(uint *)(iVar1 + 0x38) = *(*(uint * PTR32 *)&gen_args[1]) & 0x7ffffff;
  *(uint *)(iVar1 + 0x50) = ((*(uint * PTR32 *)&gen_args[1])[3] >> 6 & 1) * 2 | (*(uint * PTR32 *)&gen_args[1])[3] >> 5 & 1 | 0xc;
  puVar4 = (uint *)F_004d4a30(&(*(uint * PTR32 *)&gen_args[1]) GEN_EDX_FWD,3,(uint)((byte)((*(uint * PTR32 *)&gen_args[1])[3] >> 7) & 1),(*(uint * PTR32 *)&gen_args[1])[3] >> 8 & 1,1
                                ,(float)(float10)0,(float)(float10)0);
  *(uint *)(iVar1 + 0x3c) = *puVar4 & 0x7fffffff;
  (*(uint * PTR32 *)&gen_args[1]) = (uint *)puVar3[1];
  local_8 = puVar3 + 2;
  if ((*(uint * PTR32 *)&gen_args[1]) == (uint *)0x0) {
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4381))) == '\0') {
      (*(uint * PTR32 *)&gen_args[1]) = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x214)));
    }
    else {
      (*(uint * PTR32 *)&gen_args[1]) = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x210)));
    }
    local_8 = &REFG(undefined4, 0x1375a5c);
  }
  *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x218))) * 4))) =
       *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((puVar3[3] & 7) + (puVar3[3] >> 3 & 3) * 8) * 4 + 0x108)));
  *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21c))) * 4))) =
       *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((puVar3[3] & 7) + (puVar3[3] >> 3 & 3) * 8) * 4 + 0x188)));
  *((uint * PTR32 *)GEN_TOP((iVar1 + 0x2a8 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) * 8))) = (*(uint * PTR32 *)&gen_args[1]);
  *((uint *)GEN_TOP((iVar1 + 0x2ac + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) * 8))) = *local_8 & 0xfffffff;
  pfVar5 = (float *)F_004d9920(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x280))) GEN_EDX_ARG,0,0,2);
  if (pfVar5 != (float *)0x0) {
    fVar6 = (float10)*((int *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[1]) + 0x18)));
    if (*((int *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[1]) + 0x18))) < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *pfVar5 = (float)fVar6;
    fVar6 = (float10)*((int *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[1]) + 0x1c)));
    if (*((int *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[1]) + 0x1c))) < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    pfVar5[1] = (float)fVar6;
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x280))) + 0x24))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x27c)));
  *(undefined4 *)(iVar1 + 0xa8 + uVar2 * 4) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x280)));
  return uVar2;
}

/* ref: FUN_00578840 */
GEN_FRAME uint GEN_THISCALL F_00578840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x578840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  
  ((uint *)(gen_frame + 0x68))[0x10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = this;
  uVar7 = 0;
  (*(uint * PTR32 *)(gen_frame + 0x44)) = param_1;
  (*(uint *)(gen_frame + 0x60)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x11ac);
  pvVar4 = (undefined *)F_00a1abd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x11ac) GEN_EDX_FWD);
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = pvVar4;
  iVar8 = 0;
  do {
    puVar1 = ((uint *)(gen_frame + 0x68)) + iVar8;
    if ((*(undefined * PTR32 *)(gen_frame + 0x5c)) == (undefined *)0x0) {
      uVar5 = F_0056f570(((undefined *)GEN_TOP((*(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x2a8) + uVar7))) GEN_EDX_ARG,puVar1);
    }
    else {
      uVar5 = F_005763d0(((undefined *)GEN_TOP((*(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x2a8) + uVar7))) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x5c)),puVar1,
                           iVar8 + 1U & 7);
    }
    (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0x60)) + *puVar1;
    ((uint *)(gen_frame + 0x4))[(int)(iVar8)] = uVar5;
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x5c));
    uVar7 = uVar7 + 0xb0;
    iVar8 = iVar8 + 1;
  } while (uVar7 < 0xb00);
  if ((*(undefined * PTR32 *)(gen_frame + 0x5c)) != (undefined *)0x0) {
    F_00b1af80((*(undefined * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  }
  puVar9 = ((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x290) + *(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x284) + (*(uint *)(gen_frame + 0x60)) * -8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = puVar9;
  if ((*(uint *)(gen_frame + 0x60)) != 0) {
    do {
      iVar8 = 0;
      uVar7 = 0xffffffff;
      uVar5 = 0;
      do {
        iVar6 = 0xf - uVar5;
        if ((((uint *)(gen_frame + 0x68))[(int)(iVar6)] != 0) && (*(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)] <= uVar7)) {
          uVar7 = *(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)];
          iVar8 = iVar6;
        }
        iVar6 = 0xe - uVar5;
        if ((((uint *)(gen_frame + 0x68))[(int)(iVar6)] != 0) && (*(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)] <= uVar7)) {
          uVar7 = *(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)];
          iVar8 = iVar6;
        }
        iVar6 = 0xd - uVar5;
        if ((((uint *)(gen_frame + 0x68))[(int)(iVar6)] != 0) && (*(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)] <= uVar7)) {
          uVar7 = *(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)];
          iVar8 = iVar6;
        }
        iVar6 = 0xc - uVar5;
        if ((((uint *)(gen_frame + 0x68))[(int)(iVar6)] != 0) && (*(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)] <= uVar7)) {
          uVar7 = *(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)];
          iVar8 = iVar6;
        }
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x10);
      piVar3 = (int *)((uint *)(gen_frame + 0x4))[(int)(iVar8)];
      uVar7 = ((uint *)(gen_frame + 0x68))[(int)(iVar8)];
      uVar5 = 0;
      (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)(gen_frame + 0x4)) + iVar8;
      (*(uint * PTR32 *)(gen_frame + 0x48)) = ((uint *)(gen_frame + 0x68)) + iVar8;
      do {
        uVar5 = uVar5 + 1;
        if (uVar5 == uVar7) break;
      } while (*piVar3 == piVar3[uVar5 * 2]);
      if (uVar5 != 0) {
        if (((*(undefined * PTR32 *)(gen_frame + 0x5c)) == (undefined *)0x0) || (uVar5 < 0x401)) {
          if (0 < (int)uVar5) {
            (*(uint *)(gen_frame + 0x4c)) = uVar5;
            puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x64));
            do {
              *puVar9 = *((undefined4 *)GEN_TOP((((int)piVar3 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))) + (int)puVar9)));
              puVar9[1] = *((undefined4 *)GEN_TOP((((int)piVar3 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))) + 4 + (int)puVar9)));
              puVar9 = puVar9 + 2;
              uVar2 = (*(uint *)(gen_frame + 0x4c)) - 1;
              (*(uint *)(gen_frame + 0x4c)) = uVar2;
            } while (uVar2 != 0);
          }
        }
        else {
          F_00a1a5d0((*(undefined * PTR32 *)(gen_frame + 0x5c)),(*(undefined4 * PTR32 *)(gen_frame + 0x64)),piVar3,uVar5 * 8);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = (*(undefined4 * PTR32 *)(gen_frame + 0x64)) + uVar5 * 2;
        *(*(uint * PTR32 *)(gen_frame + 0x48)) = uVar7 - uVar5;
        *(*(uint * PTR32 *)(gen_frame + 0x50)) = (uint)(piVar3 + uVar5 * 2);
      }
      pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x5c));
    } while ((uint)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x58))) >> 3) < (*(uint *)(gen_frame + 0x60)));
  }
  puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x58));
  *(*(uint * PTR32 *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x60));
  if (pvVar4 != (undefined *)0x0) {
    F_00b1af80(pvVar4 GEN_EDX_ARG);
    F_00a1ac10((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,pvVar4);
  }
  F_00c47745(((uint *)(gen_frame + 0x68))[0x10] ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return (uint)puVar9;
}

/* ref: FUN_00578a90 */
GEN_NOFRAME uint GEN_THISCALL F_00578a90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x578a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 *)((int)this + 0xa8) = this;
  uVar1 = F_00573d50((undefined *)((int)this + 0xe0) GEN_EDX_FWD,this);
  *(undefined * PTR32 *)((int)this + 0x1c0) = this;
  *(undefined * PTR32 *)((int)this + 0x1e4) = this;
  *(undefined * PTR32 *)((int)this + 0x1ec) = this;
  *(undefined1 *)((int)this + 0x1fa) = 0;
  *(undefined1 *)((int)this + 0x230) = 1;
  return uVar1;
}

/* ref: FUN_00578ad0 */
GEN_FRAME unsigned int GEN_THISCALL F_00578ad0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x578ad0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  F_00573c50((undefined *)(param_1 + 0x1c4) GEN_EDX_FWD);
  F_005603a0((undefined *)(param_1 + 0x3c) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  return;
}

/* ref: FUN_00578b00 */
GEN_NOFRAME uint GEN_THISCALL F_00578b00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x578b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(short *)((int)this + 0x7c8) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x3c))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x34))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,0);
      return uVar1;
    }
  }
  else {
    uVar1 = F_00572a00(this GEN_EDX_ARG,1);
  }
  return uVar1;
}

/* ref: FUN_00578b40 */
GEN_FRAME uint GEN_THISCALL F_00578b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x578b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_0042b630(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_FWD);
  F_0042b630(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))
                    (*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x7d4),param_1,((undefined1 *)(gen_frame + 0xb4)),
                     ((undefined1 *)(gen_frame + 0x60)));
  if (uVar1 != 0xfffffffd) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3 GEN_EDX_ARG);
    if (((int)uVar1 < -2) || (-1 < (int)uVar1)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x18))))
                        (*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,*(int *)((int)this + 0x7d4) + param_1 * 4);
      if (0 < (int)uVar2) {
        *(short *)((int)this + 0x7ce) = (short)param_1;
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xc))))
                                  (*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar1,(int)this + 0x7d4)));
        *(int * PTR32 *)((int)this + 2000) = piVar3;
        *(undefined2 *)((int)this + 0x7cc) = 0;
        if (piVar3[1] - *piVar3 >> 2 == 0) {
                    
          F_00c457e7("invalid vector<T> subscript");
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,*(undefined4 *)*piVar3,REFG(undefined4, 0x108cc50));
        piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0,0,0);
        F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))
                  (piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 2000),(int)*(short *)((int)this + 0x7cc));
        *(short *)((int)this + 0x7c8) = *(short *)((int)this + 0x7c8) + 1;
      }
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x34))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,2);
      F_00572a00(this GEN_EDX_ARG,1);
      piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)));
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return (uint)uVar4;
}

/* ref: FUN_00578cc0 */
GEN_FRAME byte GEN_THISCALL F_00578cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x578cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 8: ;
  case 0x1b: ;
    F_00572a00(this GEN_EDX_FWD,0);
    break;
  case 9: ;
  case 0x20: ;
    F_00572b60(this GEN_EDX_ARG,(uint)(*(char *)(param_2 + 1) == '\0') * 2 - 1,1);
    return 1;
  case 0xd: ;
    F_00578b40(this GEN_EDX_ARG,(int)*(short *)((int)this + 0x7cc));
    *(undefined1 *)((int)this + 0x7ca) = 1;
    return 1;
  case 0x21: ;
  case 0x25: ;
    F_00572b60(this GEN_EDX_ARG,0xfffffff7,1);
    return 1;
  case 0x22: ;
  case 0x27: ;
    F_00572b60(this GEN_EDX_ARG,9,1);
    return 1;
  case 0x26: ;
    F_00572b60(this GEN_EDX_ARG,0xffffffff,1);
    return 1;
  case 0x28: ;
    F_00572b60(this GEN_EDX_ARG,1,1);
    return 1;
  case 0x31: ;
  case 0x32: ;
  case 0x33: ;
  case 0x34: ;
  case 0x35: ;
  case 0x36: ;
  case 0x37: ;
  case 0x38: ;
  case 0x39: ;
    F_00578b40(this GEN_EDX_ARG,((int)*(short *)((int)this + 0x7cc) / 9) * 9 - 0x31 + param_1);
    *(undefined1 *)((int)this + 0x7cb) = 1;
    return 1;
  case 0x61: ;
  case 0x62: ;
  case 99: ;
  case 100: ;
  case 0x65: ;
  case 0x66: ;
  case 0x67: ;
  case 0x68: ;
  case 0x69: ;
    F_00578b40(this GEN_EDX_ARG,((int)*(short *)((int)this + 0x7cc) / 9) * 9 - 0x61 + param_1);
    *(undefined1 *)((int)this + 0x7cb) = 1;
    return 1;
  }
  return 1;
}

/* ref: FUN_00578e70 */
GEN_FRAME unsigned int GEN_THISCALL F_00578e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x578e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((((*(byte *)((int)this + 0x5c) & 1) != 0) && (*(int *)((int)this + 0x20) == 3)) &&
      (*(int *)((int)this + 8) != 0)) && (*((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) != 0)) {
    F_005715d0(*(undefined * PTR32 *)((int)this + 0x34) GEN_EDX_FWD,this,param_1);
  }
  return;
}

/* ref: FUN_00578ee0 */
GEN_FRAME uint GEN_THISCALL F_00578ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x578ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  if ((*(byte *)((int)this + 0x5c) & 1) == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 != 0) {
    if (param_1 < *(uint *)(iVar1 + 4)) {
      return *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + param_1 * 4)));
    }
    iVar1 = param_1 - *(uint *)(iVar1 + 4);
    for (piVar3 = *(int * PTR32 *)((int)this + 0x48); piVar3 != *(int * PTR32 *)((int)this + 0x4c);
        piVar3 = piVar3 + 1) {
      iVar2 = iVar1 - ((int *)*piVar3)[1];
      if (iVar2 < 0) {
        return iVar1 * 0x90 + *(int *)*piVar3;
      }
      iVar1 = iVar2;
    }
  }
  return 0;
}

/* ref: FUN_00578f50 */
GEN_FRAME uint GEN_THISCALL F_00578f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x578f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1;
  if ((param_2 != 0) &&
     (iVar3 = param_1 * 10000 + param_2 + param_3,
     (*(int *)((int)this + 0x4c) - *(int *)((int)this + 0x48) & 0xfffffffcU) != 0)) {
    for (puVar1 = *(uint * PTR32 *)((int)this + 0x38); puVar1 != *(uint * PTR32 *)((int)this + 0x3c);
        puVar1 = puVar1 + 1) {
      if (*(int *)(*puVar1 + 4) == iVar3) {
        return *puVar1;
      }
    }
  }
  uVar2 = F_0055d920(this GEN_EDX_FWD,iVar3);
  return uVar2;
}

/* ref: FUN_00578fb0 */
GEN_FRAME uint GEN_THISCALL F_00578fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x578fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  uint local_8;
  
  uVar3 = 0;
  if ((*(byte *)((int)this + 0x5c) & 1) == 0) {
    return uVar3;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x38);
  piVar1 = *(int * PTR32 *)((int)this + 0x3c);
  local_8 = 0;
  if (((int)piVar1 - (int)piVar5 & 0xfffffffcU) == 0) {
    iVar2 = *(int *)((int)this + 8);
    if (((iVar2 != 0) && (uVar3 = *(uint *)(iVar2 + 4), uVar3 != 0)) && (uVar6 = 0, uVar3 != 0)) {
      piVar5 = *(int * PTR32 *)(iVar2 + 8);
      do {
        iVar4 = *piVar5;
        if (*(short *)(iVar4 + 0x18) == 8) {
          if ((iVar4 == 0) || (*(short *)(iVar4 + 0x18) != 8)) {
            iVar4 = 0;
          }
          if (*(ushort *)(iVar4 + 0x8e) == param_1) {
            if (local_8 == param_2) {
              return *((uint *)GEN_TOP(((*(int * PTR32 *)(iVar2 + 8))[uVar6] + 4)));
            }
            local_8 = local_8 + 1;
          }
        }
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar6 < uVar3);
      return 0;
    }
  }
  else if (piVar5 != piVar1) {
    do {
      iVar2 = *piVar5;
      if ((*(short *)(iVar2 + 0x18) == 8) && (*(ushort *)(iVar2 + 0x8e) == param_1)) {
        if (uVar3 == param_2) {
          return *(uint *)(iVar2 + 4);
        }
        uVar3 = uVar3 + 1;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar1);
    return 0;
  }
  return 0;
}

/* ref: FUN_005790b0 */
GEN_FRAME uint GEN_THISCALL F_005790b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5790b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((*(byte *)((int)this + 0x5c) & 1) == 0) {
    return 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x38);
  if (piVar2 != *(int * PTR32 *)((int)this + 0x3c)) {
    do {
      iVar1 = *piVar2;
      if (((*(byte *)(iVar1 + 0x87) & 1) != 0) ||
         ((*(short *)(iVar1 + 0x18) == 8 && (*(short *)(iVar1 + 0x8e) == 0)))) {
        if (iVar3 == param_1) {
          return *(uint *)(iVar1 + 4);
        }
        iVar3 = iVar3 + 1;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int * PTR32 *)((int)this + 0x3c));
    return 0;
  }
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf39 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00579170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x579170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (((((byte)this[0xfa] & 4) != 0) && (uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, 1 < uVar1))
     && (uVar1 < 5)) {
    *(undefined2 *)(this + 0x50) = *(undefined2 *)(this + 0x128);
    if (((((byte)this[0x80] & 1) != 0) && (*(int *)(this + 0x44) == 3)) &&
       ((*(int *)(this + 0x2c) != 0 && (*((int *)GEN_TOP((*(int *)(this + 0x2c) + 4))) != 0)))) {
      F_005715d0(*(undefined * PTR32 *)(this + 0x58) GEN_EDX_FWD,this + 0x24,0);
    }
  }
  return;
}

/* ref: FUN_005791d0 */
GEN_FRAME uint GEN_THISCALL F_005791d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5791d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int extraout_ECX;
  int * piVar6;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x140);
  if ((((piVar1 != (int *)0x0) && (*piVar1 != piVar1[1])) && ((((*(byte *)((int)this + 0xf8) & 0x10) != 0 && (((*(byte *)((int)this + 0xf8) & 4) != 0 && ((*(ushort *)((int)this + 0x126) & 0xfff) == 0)) )) || ((*(byte *)((int)this + 0xfb) & 4) != 0)))) && ((uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_FWD), (char)uVar3 == '\0' && ((*(uint *)((int)this + 0x120) >> 0xc & 1) == 0)))) {
    piVar1 = ((int *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x140))[1]));
    piVar6 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x140)));
    do {
      if (piVar6 == piVar1) {
        return 0;
      }
      iVar2 = *piVar6;
      if ((((*(uint *)(iVar2 + 0x84) & 0x2000000) != 0) && ((*(uint *)(iVar2 + 0x84) & 0x20000000) != 0)) && ((*(uint *)(iVar2 + 0x88) & 0x60000) == 0)) {
        piVar4 = (int *)F_00559c20(iVar2 GEN_EDX_ARG);
        if (piVar4 == (int *)0x0) {
          uVar3 = F_005c8430(((undefined *)(uint)(iVar2)) GEN_EDX_ARG,param_1,param_2);
        }
        else {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4 GEN_EDX_ARG,param_1,param_2);
        }
        if (uVar3 != 0) {
          iVar2 = *(int *)(uVar3 + 8);
          while( true ) {
            if (iVar2 == 0) {
              return uVar3;
            }
            uVar5 = F_0055a2d0(iVar2 GEN_EDX_ARG);
            extraout_ECX = ((int)(uint)(iVar2));
            if ((char)uVar5 == '\0') break;
            iVar2 = *(int *)(extraout_ECX + 8);
          }
        }
      }
      piVar6 = piVar6 + 1;
    } while( true );
  }
  return 0;
}

/* ref: FUN_005792f0 */
GEN_FRAME uint GEN_THISCALL F_005792f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5792f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint * puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x140);
  if ((((piVar1 != (int *)0x0) && (*piVar1 != piVar1[1])) &&
      ((((*(byte *)((int)this + 0xf8) & 0x10) != 0 &&
        (((*(byte *)((int)this + 0xf8) & 4) != 0 && ((*(ushort *)((int)this + 0x126) & 0xfff) == 0))
        )) || ((*(byte *)((int)this + 0xfb) & 4) != 0)))) &&
     ((uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_FWD), (char)uVar4 == '\0' &&
      ((*(uint *)((int)this + 0x120) >> 0xc & 1) == 0)))) {
    puVar6 = ((uint *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x140)));
    puVar2 = ((uint *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x140))[1]));
    while( true ) {
      if (puVar6 == puVar2) {
        return 0;
      }
      uVar4 = *puVar6;
      if ((((uVar4 != 0) && (999 < *(ushort *)(uVar4 + 0x18))) &&
          (piVar1 = *(int * PTR32 *)(uVar4 + 0x8c), piVar1 != (int *)0x0)) &&
         ((uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG,param_1,param_2), uVar5 != 0 &&
          ((*(uint *)(uVar5 + 0x84) & 0x8000000) != 0)))) {
        uVar4 = uVar5;
      }
      if ((((*(uint *)(uVar4 + 0x84) & 0x200000) != 0) &&
          ((*(uint *)(uVar4 + 0x84) & 0x8000000) != 0)) &&
         (bVar3 = F_00570d10(uVar4 GEN_EDX_ARG,param_1,param_2,0), bVar3 != 0)) break;
      puVar6 = puVar6 + 1;
    }
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00579400 */
GEN_FRAME uint GEN_THISCALL F_00579400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x579400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00578ee0((undefined *)((int)this + 0x24) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00579410 */
GEN_FRAME byte GEN_THISCALL F_00579410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x579410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  undefined4 * puVar5;
  bool bVar6;
  
  if ((*(uint *)((int)this + 0x120) >> 9 & 1) != 0) {
    return 1;
  }
  if (*(int *)((int)this + 0xe8) - *(int *)((int)this + 0xe4) >> 2 != 0) {
    for (puVar5 = *(undefined4 * PTR32 *)((int)this + 0xe4); puVar5 != *(undefined4 * PTR32 *)((int)this + 0xe8);
        puVar5 = puVar5 + 1) {
      pbVar2 = (byte *)*puVar5;
      pbVar4 = param_1;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00579474: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00579479;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00579474;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00579479: ;
      if (iVar3 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005794a0 */
GEN_NOFRAME uint GEN_THISCALL F_005794a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5794a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  piVar2 = *(int * PTR32 *)((int)this + 0xc0);
  piVar1 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0xc0) + 4))) = *(int *)((int)this + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = 0;
  piVar2 = piVar1;
  if (piVar1 != *(int * PTR32 *)((int)this + 0xc0)) {
    do {
      piVar2 = (int *)*piVar1;
      F_00429760(piVar1,0xc,400);
      piVar1 = piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0xc0));
  }
  return (uint)piVar2;
}

/* ref: FUN_00579500 */
GEN_FRAME uint GEN_THISCALL F_00579500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x579500u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_005c4950(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00579520 */
GEN_FRAME byte GEN_THISCALL F_00579520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x579520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0xc)) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 1;
  }
  return 1;
}

/* ref: FUN_00579550 */
GEN_FRAME unsigned int GEN_THISCALL F_00579550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x579550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  float fVar10;
  int * local_c;
  
  *(int * PTR32 *)((int)this + 0x34) = param_1;
  if ((param_1 != (int *)0x0) && (iVar2 = *param_1, *(int *)((int)this + 0x38) != 0)) {
    puVar9 = (undefined4 *)(iVar2 + 100);
    puVar7 = puVar9;
    puVar8 = (undefined4 *)(iVar2 + 0xa8);
    for (iVar5 = 0x11; puVar6 = REFG(undefined * PTR32, 0x131dbac), iVar5 != 0; iVar5 = iVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    local_c = (int *)((int)this + 0x40);
    *puVar9 = 1;
    param_1 = (int *)0x0;
    do {
      *(float *)(iVar2 + 0x6c) = (float)((int)param_1 + 8);
      *(float *)(iVar2 + 0x68) = (float)((int)param_1 + 8);
      uVar4 = REFG(undefined4, 0x108cc50);
      iVar5 = *(int *)((int)this + 0x38);
      fVar10 = REFG(float, 0x10a0da0);
      if ((*(byte *)(iVar5 + 0x148) & 2) != 0) {
        iVar3 = *(int *)(iVar5 + 0x13c);
        if (puVar6 == (undefined *)0x0) {
          fVar10 = 0.0;
        }
        else {
          this_00 = (int *)(iVar3 + 0x144);
          ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x24))(this_00 GEN_EDX_FWD,iVar5,puVar6);
          *(undefined1 *)(iVar3 + 0x2a8) = 0;
          *(undefined4 *)(iVar3 + 0x1f8) = 0;
          *(undefined4 *)(iVar3 + 0x1fc) = uVar4;
          if ((((*((byte *)GEN_TOP((*(int *)(iVar3 + 0x14c) + 0x148))) & 2) != 0) &&
              (bVar1 = *((byte *)GEN_TOP((*(int *)(iVar3 + 0x150) + 0x6e))), (bVar1 & 1) != 0)) &&
             ((bVar1 & 2) != 0)) {
            ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 4))(this_00 GEN_EDX_ARG);
            F_005662b0(this_00 GEN_EDX_ARG,puVar6);
            ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 8))(this_00 GEN_EDX_ARG);
          }
          fVar10 = *(float *)(iVar3 + 0x284);
          puVar6 = REFG(undefined * PTR32, 0x131dbac);
        }
      }
      param_1 = (int *)((int)param_1 + 1);
      *local_c = (int)fVar10;
      local_c = local_c + 1;
    } while ((int)param_1 < 0xd);
    puVar7 = (undefined4 *)(iVar2 + 0xa8);
    for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  return 0;
}

/* ref: FUN_005796b0 */
GEN_FRAME uint GEN_THISCALL F_005796b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5796b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x34))) == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00576bf0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x34))) GEN_EDX_FWD,param_1,param_2);
  return uVar1 - param_1;
}

/* ref: FUN_005796e0 */
GEN_FRAME uint GEN_THISCALL F_005796e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5796e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  double dVar7;
  
  iVar2 = (uint)*(byte *)(param_1 + 8) * 0x150 + **(int * PTR32 *)((int)this + 0x34);
  *(int *)((int)this + 0x38) = iVar2;
  uVar3 = 0;
  if (iVar2 != 0) {
    if ((char)param_2 == '\0') {
      puVar5 = (undefined4 *)(iVar2 + 100);
      puVar6 = (undefined4 *)(iVar2 + 0xa8);
      for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar2 = *(int *)((int)this + 0x38);
      *(undefined4 *)(iVar2 + 100) = 1;
      bVar1 = *(byte *)(param_1 + 9);
      *(float *)(iVar2 + 0x6c) = (float)bVar1;
      *(float *)(iVar2 + 0x68) = (float)bVar1;
    }
    uVar3 = (uint)*(byte *)(param_1 + 9);
    *(uint *)((int)this + 0x98) = uVar3;
    if (*(char *)(param_1 + 10) != '\0') {
      if (((*(char *)(param_1 + 8) == '\0') && (bVar1 = *(byte *)(param_1 + 9), 7 < bVar1)) &&
         (bVar1 < 0x15)) {
        *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)((int)this + (uint)bVar1 * 4 + 0x20);
        return uVar3;
      }
      dVar7 = F_00576610(*(undefined * PTR32 *)((int)this + 0x38) GEN_EDX_FWD,REFG(undefined * PTR32, 0x131dbac),0,REFG(undefined4, 0x108cc50));
      uVar3 = (uint)dVar7;
      *(uint *)((int)this + 0x3c) = uVar3;
      *(uint *)((int)this + 0xb8) = uVar3;
      return uVar3;
    }
    *(undefined4 *)((int)this + 0xb8) = 0;
  }
  return uVar3;
}

/* ref: FUN_005797b0 */
GEN_FRAME uint GEN_THISCALL F_005797b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5797b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  
  uVar4 = F_005772f0(*(undefined4 *)((int)this + 0x38) GEN_EDX_FWD,(float)(float10)0,(float)(float10)0,param_1
                       ,param_2,1);
  uVar5 = 0;
  param_2 = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  if (param_3 < 1) {
    param_3 = 0x7fffffff;
  }
  cVar2 = *param_1;
  pcVar6 = param_1;
  param_1 = (char *)uVar4;
  iVar1 = param_2;
  while (uVar3 = (uint)param_1, cVar2 != '\0') {
    if (*pcVar6 == '\x02') {
      uVar4 = F_00a24d30(this GEN_EDX_ARG,pcVar6 + 2,(int)this + 0x350,&(*(int *)(gen_frame + 0x4)),1);
      uVar4 = uVar4 + 3 + (*(int *)(gen_frame + 0x4));
      if ((pcVar6[1] == '\x12') || (pcVar6[1] == '\x1e')) goto LAB_00579838;
      param_1 = (char *)((int)param_1 + 1);
    }
    else {
      uVar4 = F_0042acc0(CONCAT31((int3)(uVar4 >> 8),*pcVar6));
      if (uVar4 == 0) break;
LAB_00579838: ;
      uVar5 = uVar5 + 1;
    }
    iVar1 = iVar1 + 1;
    uVar3 = (uint)param_1;
    if (((int)param_1 < iVar1) || (uVar3 = uVar5, param_3 < (int)uVar5)) break;
    if (0 < (int)uVar4) {
      pcVar6 = pcVar6 + uVar4;
    }
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + uVar4;
    cVar2 = *pcVar6;
  }
  param_1 = (char *)uVar3;
  if (param_4 != (int *)0x0) {
    *param_4 = (*(int *)(gen_frame + 0x8));
  }
  return (uint)param_1;
}

/* ref: FUN_00579880 */
GEN_FRAME uint GEN_THISCALL F_00579880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x579880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_005797b0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00579890 */
GEN_FRAME uint GEN_THISCALL F_00579890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x579890u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0)));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4)));
  uVar4 = F_0042a990((*(uint *)&gen_args[4]) GEN_EDX_FWD);
  (*(uint *)&gen_args[4]) = F_005797b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar4,(*(undefined4 *)&gen_args[1]),iVar1 - iVar2,0);
  iVar1 = (*(int *)&gen_args[3]);
  if ((int)(*(uint *)&gen_args[4]) < 0) {
    return 0;
  }
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1370))) == '\0') {
    uVar4 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x1c))) GEN_EDX_ARG,(*(int *)&gen_args[3]),1);
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1368))) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x368;
    if (0x3ff < uVar4) {
      uVar5 = F_00404270();
      lVar3 = (ulonglong)(uVar4 + 1) * 4;
      uVar5 = F_00406c00(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,uVar5,0);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1368))) = uVar5;
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1371))) = 1;
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1368))) + uVar4 * 4))) = 0;
    pcVar6 = (char *)F_0042a990(iVar1 GEN_EDX_ARG);
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        if (*pcVar6 == '\x02') {
          if ((pcVar6[1] == '\x12') || (pcVar6[1] == '\x1e')) {
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1368))) + uVar5 * 4))) = 3;
          }
          else {
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1368))) + uVar5 * 4))) = 2;
          }
          uVar7 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,pcVar6 + 2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350,&(*(int *)&gen_args[3]),1);
          uVar7 = (*(int *)&gen_args[3]) + uVar7 + 3;
        }
        else {
          uVar7 = F_0055fb10(pcVar6,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1368))) + uVar5 * 4);
        }
        pcVar6 = pcVar6 + uVar7;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1370))) = 1;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x136c)));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1368)));
  uVar4 = (*(uint *)&gen_args[4]);
  if (*((int *)GEN_TOP((iVar2 + (iVar1 + (*(uint *)&gen_args[4])) * 4))) == 0x20) {
    uVar4 = (*(uint *)&gen_args[4]) + 1;
  }
  pcVar6 = *((char * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c)));
  if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
    uVar4 = F_0055f8e0(iVar2 + iVar1 * 4,uVar4,pcVar6,(*(undefined4 *)&gen_args[5]));
    return uVar4;
  }
  if (0 < (int)uVar4) {
    uVar4 = F_0055fa40(iVar2 + iVar1 * 4,uVar4,(*(undefined4 *)&gen_args[5]));
  }
  return uVar4;
}

/* ref: FUN_00579a30 */
GEN_FRAME uint GEN_THISCALL F_00579a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x579a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_ECX = 0;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar5 = 0;
  uVar7 = REFG(undefined4, 0x108cc50);
  uVar2 = F_0042a990(param_2 GEN_EDX_FWD);
  fVar4 = F_00576700(*(undefined * PTR32 *)((int)this + 0x38) GEN_EDX_ARG,uVar2,uVar5,uVar7);
  iVar1 = (int)fVar4;
  uVar2 = extraout_ECX;
  if (*(int *)((int)this + 0x90) + iVar1 <= *(int *)((int)this + 0xbc)) {
    uVar7 = 1;
    iVar6 = iVar1;
    uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
    uVar3 = F_005772f0(*(undefined4 *)((int)this + 0x38) GEN_EDX_ARG,(float)(float10)0,(float)(float10)0,uVar2 ,iVar6,uVar7);
    uVar2 = *(int *)((int)this + 0xc4) + uVar3;
    if ((int)uVar2 <= *(int *)((int)this + 0xc0)) {
      F_0042e360((undefined *)((int)this + 0xcc) GEN_EDX_ARG,param_2);
      *(int *)((int)this + 0x90) = *(int *)((int)this + 0x90) + iVar1;
      *(int *)((int)this + 0xc4) = *(int *)((int)this + 0xc4) + uVar3;
      goto LAB_00579ad7;
    }
  }
  iVar6 = *(int *)((int)this + 0x90);
  if ((iVar6 == 0) || (iVar6 == *(int *)((int)this + 0xb8))) {
    uVar2 = 1;
  }
  else {
    uVar2 = uVar2 & 0xffffff00;
  }
  uVar2 = F_00579890(this GEN_EDX_ARG,*(int *)((int)this + 0xbc) - iVar6,iVar1,param_1,param_2,uVar2);
  if ((*(int *)((int)this + 0x90) != *(int *)((int)this + 0xb8)) || (uVar2 != 0)) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,param_2);
    F_00a26db0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x1c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)),0,uVar2);
    this_00 = (undefined *)((int)this + 0xcc);
    F_0042e360(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
    *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + *(int *)((int)this + 0x98);
    *(int *)((int)this + 0x9c) = *(int *)((int)this + 0x9c) + 1;
    *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0xb8);
    *(undefined4 *)((int)this + 0xc4) = 0;
    F_0042e360(this_00 GEN_EDX_ARG,(int)this + 0x2fc);
    F_0042e360(*(undefined * PTR32 *)((int)this + 200) GEN_EDX_ARG,this_00);
    if (*(int *)((int)this + 0xb8) == 0) {
      F_0042aca0(this_00 GEN_EDX_ARG);
    }
    else {
      F_0042e430(this_00 GEN_EDX_ARG,REFG(undefined * PTR32, 0x131dbac));
      *(undefined4 *)((int)this + 0xc4) = 1;
    }
    if (*(int *)((int)this + 0xa0) <= *(int *)((int)this + 0x9c)) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,0,0,(int)this + 0x350,this_00);
      if (uVar3 != 0) {
        F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
        return 0xffffffff;
      }
    }
    F_0042ccf0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,param_2);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
    F_00a26db0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x1c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)),uVar2,REFG(undefined4, 0x108cc50));
    F_00a26db0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x1c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar2,REFG(undefined4, 0x108cc50));
    *(int *)((int)this + 0x136c) = *(int *)((int)this + 0x136c) + uVar2;
    uVar2 = F_00579a30(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x54)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
    return uVar2;
  }
LAB_00579ad7: ;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00579cb0 */
GEN_NOFRAME uint GEN_THISCALL F_00579cb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x579cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  uint uVar1;
  
  in_ecx = (int)this + 0x120;
  uVar1 = 0;
  if (**(char * PTR32 *)((int)this + 0x120) != '\0') {
    F_0042ccf0((undefined *)((int)this + 0x174) GEN_EDX_FWD,in_ecx);
    F_00a26ec0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x1c))) GEN_EDX_ARG,in_ecx,0x1d,0x20);
    F_00a26ec0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x1c))) GEN_EDX_ARG,in_ecx,0x1e,0x2d);
    *(undefined4 *)((int)this + 0x136c) = 0;
    *(undefined2 *)((int)this + 0x1370) = 0;
    uVar1 = F_00579a30(this GEN_EDX_ARG,(undefined *)((int)this + 0x174),in_ecx);
    F_0042aca0(in_ecx GEN_EDX_ARG);
    if (*(char *)((int)this + 0x1371) != '\0') {
      F_00406b30(*(undefined4 *)((int)this + 0x1368));
    }
  }
  return uVar1;
}

/* ref: FUN_00579d40 */
GEN_FRAME uint GEN_THISCALL F_00579d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x579d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  byte bVar2;
  byte bVar3;
  code * pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte * pbVar8;
  byte * pbVar9;
  
  F_0042aca0((int)this + 0x120 GEN_EDX_FWD);
  bVar2 = *param_1;
  pbVar9 = param_1;
  do {
    if (bVar2 == 0) {
      uVar5 = F_00579cb0(this GEN_EDX_ARG);
      if (-1 < (int)uVar5) {
        uVar5 = (int)pbVar9 - (int)param_1;
      }
      return uVar5;
    }
    bVar2 = *pbVar9;
    if (((bVar2 == 2) && (bVar3 = pbVar9[1], bVar3 != 0x1d)) && (bVar3 != 0x1f)) {
      pcVar4 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + (uint)bVar3 * 4)));
      pbVar8 = pbVar9 + 2;
      if (pcVar4 == (code *)0x0) {
        uVar5 = F_00a24d30(this GEN_EDX_ARG,pbVar8,(int)this + 0x350,&(*(int *)(gen_frame + 0x8)),1);
        for (iVar7 = uVar5 + 3 + (*(int *)(gen_frame + 0x8)); 0 < iVar7; iVar7 = iVar7 - 1) {
          F_0042d160((undefined *)((int)this + 0x120) GEN_EDX_ARG,(uint)*pbVar9);
          pbVar9 = pbVar9 + 1;
        }
        pbVar9 = pbVar9 - 1;
      }
      else {
        uVar5 = F_00a24d30(this GEN_EDX_ARG,pbVar8,(int)this + 0x350,&(*(int *)(gen_frame + 0x8)),1);
        uVar6 = (*pcVar4)(this,pbVar8 + uVar5,(*(int *)(gen_frame + 0x8)),(int)this + 0x350,(int)this + 0x120);
        if ((int)uVar6 < 0) {
          if (uVar6 == 0xfffffffe) {
            F_00579cb0(this GEN_EDX_ARG);
          }
          return uVar6;
        }
        pbVar9 = pbVar8 + uVar5 + (*(int *)(gen_frame + 0x8));
      }
    }
    else if ((bVar2 == 0xd) && (pbVar9[1] == 10)) {
      uVar5 = F_00579cb0(this GEN_EDX_ARG);
      if ((int)uVar5 < 0) {
LAB_00579ece: ;
        pbVar9 = pbVar9 + 1;
      }
      else {
        *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + *(int *)((int)this + 0x98);
        *(int *)((int)this + 0x9c) = *(int *)((int)this + 0x9c) + 1;
        pvVar1 = (undefined *)((int)this + 0xcc);
        *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0xb8);
        *(undefined4 *)((int)this + 0xc4) = 0;
        F_0042e370(pvVar1 GEN_EDX_ARG,&REFG(undefined, 0x10a0000));
        F_0042e360(*(undefined * PTR32 *)((int)this + 200) GEN_EDX_ARG,pvVar1);
        if (*(int *)((int)this + 0xb8) == 0) {
          F_0042aca0(pvVar1 GEN_EDX_ARG);
        }
        else {
          F_0042e430(pvVar1 GEN_EDX_ARG,REFG(undefined * PTR32, 0x131dbac));
          *(undefined4 *)((int)this + 0xc4) = 1;
        }
        if (*(int *)((int)this + 0x9c) < *(int *)((int)this + 0xa0)) {
          uVar5 = 0;
          goto LAB_00579ece;
        }
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,0,0,(int)this + 0x350,pvVar1);
        pbVar9 = pbVar9 + 1;
      }
LAB_00579fc8: ;
      if ((int)uVar5 < 0) {
        return uVar5;
      }
    }
    else if ((bVar2 == 10) || (bVar2 == 0xd)) {
      uVar5 = F_00579cb0(this GEN_EDX_ARG);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + *(int *)((int)this + 0x98);
      *(int *)((int)this + 0x9c) = *(int *)((int)this + 0x9c) + 1;
      pvVar1 = (undefined *)((int)this + 0xcc);
      *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0xb8);
      *(undefined4 *)((int)this + 0xc4) = 0;
      F_0042e370(pvVar1 GEN_EDX_ARG,&REFG(undefined, 0x10a0004));
      F_0042e360(*(undefined * PTR32 *)((int)this + 200) GEN_EDX_ARG,pvVar1);
      if (*(int *)((int)this + 0xb8) == 0) {
        F_0042aca0(pvVar1 GEN_EDX_ARG);
      }
      else {
        F_0042e430(pvVar1 GEN_EDX_ARG,REFG(undefined * PTR32, 0x131dbac));
        *(undefined4 *)((int)this + 0xc4) = 1;
      }
      if (*(int *)((int)this + 0xa0) <= *(int *)((int)this + 0x9c)) {
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,0,0,(int)this + 0x350,pvVar1);
        goto LAB_00579fc8;
      }
    }
    else {
      uVar5 = F_00a297a0(this GEN_EDX_ARG,pbVar9,(int)this + 0x174,&(*(int *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x8c),
                           1);
      F_0042e360((undefined *)((int)this + 0x120) GEN_EDX_ARG,(int)this + 0x174);
      if ((uVar5 != 4) && (uVar5 = F_00579cb0(this GEN_EDX_ARG), (int)uVar5 < 0)) {
        return uVar5;
      }
      pbVar9 = pbVar9 + (*(int *)(gen_frame + 0x8)) - 1;
    }
    pbVar9 = pbVar9 + 1;
    bVar2 = *pbVar9;
  } while( true );
}

/* ref: Component::GUI2::AtkFontCodeModule::vf11 */
GEN_FRAME uint GEN_THISCALL F_0057a010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x57a010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if ((*(char * PTR32 *)(this + 0x8c) != (char *)0x0) && (**(char * PTR32 *)(this + 0x8c) != '\0')) {
    F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
    uVar1 = F_00a297a0(this GEN_EDX_ARG,param_1 + 1,((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)(this + 0x8c),0);
    if (uVar1 == 2) {
      F_0042e370(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x10a0008));
    }
    uVar3 = 0;
    uVar4 = REFG(undefined4, 0x108cc50);
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    fVar2 = F_00576700(*(undefined * PTR32 *)(this + 0x38) GEN_EDX_ARG,uVar1,uVar3,uVar4);
    if (*(int *)(this + 0xbc) < (int)fVar2 + *(int *)(this + 0x90)) {
      uVar1 = F_00579cb0(this GEN_EDX_ARG);
      if (-1 < (int)uVar1) {
        *(int *)(this + 0x94) = *(int *)(this + 0x94) + *(int *)(this + 0x98);
        *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
        *(undefined4 *)(this + 0x90) = *(undefined4 *)(this + 0xb8);
        this_00 = this + 0xcc;
        *(undefined4 *)(this + 0xc4) = 0;
        F_0042e370(this_00 GEN_EDX_ARG,&REFG(undefined, 0x10a000c));
        F_0042e360(*(undefined * PTR32 *)(this + 200) GEN_EDX_ARG,this_00);
        if (*(int *)(this + 0xb8) == 0) {
          F_0042aca0(this_00 GEN_EDX_ARG);
        }
        else {
          F_0042e430(this_00 GEN_EDX_ARG,REFG(undefined * PTR32, 0x131dbac));
          *(undefined4 *)(this + 0xc4) = 1;
        }
        if (*(int *)(this + 0x9c) < *(int *)(this + 0xa0)) {
          F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
          F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
          return 0;
        }
        uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,0,0,this + 0x350,this_00);
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return uVar1;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0057a190 */
GEN_FRAME byte GEN_THISCALL F_0057a190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x57a190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  byte bVar1;
  
  bVar1 = F_00573b10(this GEN_EDX_FWD,param_1,param_3 * 0x10 + param_2);
  return bVar1;
}

/* ref: FUN_0057a1b0 */
GEN_FRAME uint GEN_THISCALL F_0057a1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57a1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x1c))) + 4)));
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_005792f0(this_00 GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0057a1d0 */
GEN_FRAME byte GEN_THISCALL F_0057a1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57a1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8)));
  while( true ) {
    if (puVar2 == *(undefined4 * PTR32 *)((int)this + 8)) {
      return 0;
    }
    if (*(int *)(puVar2[4] + 0xc) == param_1) break;
    if (*(char *)((int)puVar2 + 0x15) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x15);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x15);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x15);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x15);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  return 1;
}

/* ref: Component::GUI2::AtkComponentBase::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_0057a240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57a240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pAVar1;
  
  pAVar1 = this + 4;
  if ((((((byte)this[0x60] & 1) != 0) && (*(int *)(this + 0x24) == 3)) &&
      (*(int *)(this + 0xc) != 0)) && (*((int *)GEN_TOP((*(int *)(this + 0xc) + 4))) != 0)) {
    pAVar1 = (undefined *)F_005715d0(*(undefined * PTR32 *)(this + 0x38) GEN_EDX_FWD,pAVar1,this);
  }
  return (uint)pAVar1;
}

/* ref: Component::GUI2::AtkComponentBase::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_0057a270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57a270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD);
  if (uVar2 == 0) {
    if (*(int *)(this + 0xc) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(ushort *)(this + 0x1a) + *((int *)GEN_TOP((*(int *)(this + 0xc) + 4)));
    }
    uVar4 = 1;
    if (1 < uVar2) {
      do {
        uVar3 = F_00578ee0(this + 4 GEN_EDX_ARG,uVar4);
        if ((((uVar3 != 0) && (999 < *(ushort *)(uVar3 + 0x18))) &&
            (piVar1 = *(int * PTR32 *)(uVar3 + 0x8c), piVar1 != (int *)0x0)) &&
           (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1 GEN_EDX_ARG), uVar3 != 0)) {
          return uVar3;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentIcon::vf16 */
GEN_FRAME unsigned int GEN_THISCALL F_0057a2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57a2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
      *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
      this[0x80] = *(undefined *)(param_1 + 8);
    }
    uVar4 = F_0055d920(this + 4 GEN_EDX_FWD,*(undefined4 *)(param_1 + 0x14));
    *(uint *)(this + 0x9c) = uVar4;
    uVar4 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x20));
    *(uint *)(this + 0xa0) = uVar4;
    uVar4 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x10));
    *(uint *)(this + 0xa4) = uVar4;
    uVar4 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0xc));
    *(uint *)(this + 0xac) = uVar4;
    uVar4 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x24));
    *(uint *)(this + 0xb0) = uVar4;
    uVar4 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x28));
    *(uint *)(this + 0xb4) = uVar4;
    if (uVar4 != 0) {
      *(undefined2 *)(uVar4 + 0x5a) = 0;
      *(undefined1 *)(uVar4 + 0x5c) = 0;
    }
    uVar4 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x18));
    *(uint *)(this + 0xb8) = uVar4;
    uVar4 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x1c));
    *(uint *)(this + 0xbc) = uVar4;
    iVar3 = *(int *)(this + 0xac);
    if (((iVar3 != 0) && (*(int *)(iVar3 + 0x8c) != 0)) &&
       (puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 0x8c) + 8))) + (uint)*(ushort *)(iVar3 + 0x90) * 0xc))),
       puVar2 != (undefined4 *)0x0)) {
      *(undefined4 *)(this + 0x98) = *puVar2;
    }
  }
  if ((this != (undefined *)0x0) && (*(int *)(this + 0x70) != 0)) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84)));
    *puVar1 = *puVar1 & 0xfdffffff;
  }
  for (uVar4 = 0;
      (*(int *)(this + 0xc) != 0 &&
      (uVar4 < (uint)*(ushort *)(this + 0x1a) + *((int *)GEN_TOP((*(int *)(this + 0xc) + 4)))));
      uVar4 = uVar4 + 1) {
    uVar5 = F_00578ee0(this + 4 GEN_EDX_ARG,uVar4);
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 0x84) = *(uint *)(uVar5 + 0x84) & 0xfdffffff;
    }
    if ((*(byte *)(uVar5 + 0x87) & 1) != 0) {
      *(uint *)(this + 0xa8) = uVar5;
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentIcon::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_0057a440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57a440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pAVar1;
  
  if (this[0x95] != (undefined1)0x0) {
    *(undefined2 *)(this + 0x30) = *((undefined2 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x14) + 0x19e)));
  }
  pAVar1 = this + 4;
  if ((((((byte)this[0x60] & 1) != 0) && (*(int *)(this + 0x24) == 3)) &&
      (*(int *)(this + 0xc) != 0)) && (*((int *)GEN_TOP((*(int *)(this + 0xc) + 4))) != 0)) {
    pAVar1 = (undefined *)F_005715d0(*(undefined * PTR32 *)(this + 0x38) GEN_EDX_FWD,pAVar1,this);
  }
  return (uint)pAVar1;
}

/* ref: FUN_0057a490 */
GEN_FRAME uint GEN_THISCALL F_0057a490(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x57a490u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this;
  undefined * this_00;
  ushort uVar1;
  float * in_EAX = 0;
  
  this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0xa4);
  if (this != (undefined *)0x0) {
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x10)) = 0.0;
    in_EAX = &(*(float *)&gen_args[1]);
    if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
      in_EAX = &(*(float *)(gen_frame + 0x14));
    }
    if (!(0.0 < *in_EAX)) {
      in_EAX = &(*(float *)(gen_frame + 0x10));
    }
    (*(float *)&gen_args[1]) = *in_EAX;
    this_00 = *(undefined * PTR32 *)((int)this + 0x1c);
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00567f90(this GEN_EDX_FWD,0x18);
      (*(uint *)(gen_frame + 0x18)) = (uint)uVar1;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)) = gen_x87_cw;
      (*(uint *)(gen_frame + 0x18)) = CONCAT22(gen_x87_cw,uVar1);
      (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)
                 (longlong)
                 TRUNC((float10)(*(float *)&gen_args[1]) * (float10)*(double *)&REFG(undefined, 0x10a0da8) + (float10)uVar1);
      *(ushort *)((int)this_00 + 0x22) = *(ushort *)((int)this_00 + 0x22) & 0x7fff;
      *(undefined4 *)((int)this_00 + 0x18) = (*(undefined4 *)(gen_frame + 0x8));
      in_EAX = (float *)F_00573430(this_00 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x8)));
    }
  }
  return (uint)in_EAX;
}

/* ref: Component::GUI2::AtkComponentButton::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_0057a540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57a540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(this + 0x74) = 1;
  if (*(int *)(this + 0x70) != 0) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84)));
    *puVar1 = *puVar1 & 0xfdffffff;
  }
  uVar5 = 0;
LAB_0057a560: ;
  do {
    if ((*(int *)(this + 0xc) == 0) ||
       ((uint)*(ushort *)(this + 0x1a) + *((int *)GEN_TOP((*(int *)(this + 0xc) + 4))) <= uVar5)) {
      iVar2 = *(int *)(this + 0x68);
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 0x84) =
             *(uint *)(iVar2 + 0x84) ^
             ((uint)(byte)this[0x86] << 0x1a ^ *(uint *)(iVar2 + 0x84)) & 0x4000000;
      }
      if (*(int *)(this + 0x68) != 0) {
        puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x68) + 0x84)));
        *puVar1 = *puVar1 | 0x2000000;
      }
      iVar2 = *(int *)(this + 0x68);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,6,0x100,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x68);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,7,0x101,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x68);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,3,0x102,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x68);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,4,0x103,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x68);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,9,0x104,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x68);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,0xc,0x200,0,iVar2,this,0);
      }
      if (*(int *)(this + 0xac) == 0) {
        uVar6 = 0;
        uVar5 = F_00404270();
        puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
        }
        *(undefined4 * PTR32 *)(this + 0xac) = puVar4;
      }
      F_00565340(*(undefined * PTR32 *)(this + 0xac) GEN_EDX_ARG,0x3b,0,0,this + 0xa8,this,0);
      if (*(int *)(this + 0xd4) == 0) {
        uVar6 = 0;
        uVar5 = F_00404270();
        puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
        }
        *(undefined4 * PTR32 *)(this + 0xd4) = puVar4;
      }
      uVar5 = F_00565340(*(undefined * PTR32 *)(this + 0xd4) GEN_EDX_ARG,0x3a,1,0,this + 0xd0,this,0);
      return uVar5;
    }
    uVar3 = F_00578ee0(this + 4 GEN_EDX_ARG,uVar5);
    if (uVar3 != 0) {
      if (((*(uint *)(uVar3 + 0x84) & 0x1000000) != 0) && (*(int *)(this + 0x68) == 0)) {
        *(uint *)(this + 0x68) = uVar3;
        uVar5 = uVar5 + 1;
        goto LAB_0057a560;
      }
      *(uint *)(uVar3 + 0x84) = *(uint *)(uVar3 + 0x84) & 0xfdffffff;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}

/* ref: FUN_0057a850 */
GEN_FRAME uint GEN_THISCALL F_0057a850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57a850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_10;
  
  uVar7 = REFG(undefined4, 0x108cc50);
  this_00 = *(undefined * PTR32 *)((int)this + 0x104);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined *)F_005684e0(this_00 GEN_EDX_FWD,0);
  if (this_01 == (undefined *)0x0) {
    return 0;
  }
  uVar6 = 0;
  uVar1 = F_0042a990((int)this_00 + 0x9c GEN_EDX_ARG);
  dVar5 = F_00576610(this_01 GEN_EDX_ARG,uVar1,uVar6,uVar7);
  puVar3 = (undefined4 *)((int)this_01 + 0xa8);
  puVar4 = (undefined4 *)((int)this_01 + 100);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_10 = (uint)(longlong)TRUNC(dVar5);
  return local_10;
}

/* ref: Component::GUI2::AtkComponentRadioButton::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_0057a8e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57a8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0057a540((undefined *)this GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,REFG(int, 0x1379860) + 0xc0);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentList::vf16 */
GEN_FRAME uint GEN_THISCALL F_0057a900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57a900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
    this[0x80] = *(undefined *)(param_1 + 8);
  }
  if (this == (undefined *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this + 0x70);
  }
  *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) | 0x1000000;
  *(undefined2 *)(this + 0xf6) = *(undefined2 *)(param_1 + 0x1a);
  sVar1 = *(short *)(param_1 + 0x1c);
  *(short *)(this + 0xf4) = sVar1;
  this[0x112] = (undefined1)(sVar1 != 0);
  if ((sVar1 != 0) && (*(short *)(this + 0xf6) != 0)) {
    this[0x112] = (undefined1)(param_1[0x19] != '\0');
  }
  uVar3 = F_0055d920(this + 4 GEN_EDX_FWD,*(undefined4 *)(param_1 + 0xc));
  if (uVar3 != 0) {
    if ((((*(ushort *)(uVar3 + 0x18) < 1000) || (iVar2 = *(int *)(uVar3 + 0x8c), iVar2 == 0)) ||
        ((*(byte *)(iVar2 + 0x60) & 1) == 0)) ||
       ((((*(byte *)(iVar2 + 0x60) & 4) == 0 || (*(char *)(iVar2 + 0x1c) != '\x01')) ||
        (*((char *)GEN_TOP((*(int *)(iVar2 + 0xc) + 0xf))) != '\x0e')))) {
      iVar2 = 0;
    }
    *(int *)(this + 0x84) = iVar2;
  }
  uVar3 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x10));
  if (uVar3 != 0) {
    if (this[0x112] != (undefined1)0x0) {
      *(uint *)(uVar3 + 0x84) = *(uint *)(uVar3 + 0x84) | 0x50000;
    }
    if (((*(ushort *)(uVar3 + 0x18) < 1000) || (iVar2 = *(int *)(uVar3 + 0x8c), iVar2 == 0)) ||
       (((*(byte *)(iVar2 + 0x60) & 1) == 0 ||
        ((((*(byte *)(iVar2 + 0x60) & 4) == 0 || (*(char *)(iVar2 + 0x1c) != '\x01')) ||
         (*((char *)GEN_TOP((*(int *)(iVar2 + 0xc) + 0xf))) != '\r')))))) {
      iVar2 = 0;
    }
    *(int *)(this + 0x88) = iVar2;
  }
  this[0x111] = *(undefined *)(param_1 + 0x18);
  uVar3 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x14));
  *(uint *)(this + 0x8c) = uVar3;
  uVar3 = F_00578fb0(this + 4 GEN_EDX_ARG,0,0);
  uVar3 = F_0055d920(this + 4 GEN_EDX_ARG,uVar3);
  *(uint *)(this + 0x90) = uVar3;
  uVar4 = (uint)(char)this[0x80];
  uVar3 = uVar4;
  if (((uVar4 == 0) || (uVar3 = 0, uVar4 == 1)) || (uVar3 = uVar4 - 2, uVar3 == 0)) {
    this[0x111] = (undefined1)0x2;
  }
  return uVar3;
}

/* ref: Component::GUI2::AtkComponentList::vf19 */
GEN_FRAME byte GEN_THISCALL F_0057aa80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57aa80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  int iVar2;
  undefined * pAVar3;
  short sVar4;
  
  if ((*(undefined * PTR32 *)&gen_args[0])[0x114] != (undefined1)0x0) {
    sVar4 = (short)(*(undefined4 *)&gen_args[1]);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(int)sVar4,1);
    if ((char)uVar1 == '\0') {
      if (sVar4 < 0) {
        sVar4 = 0;
      }
      iVar2 = (int)sVar4;
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = 0;
      if (iVar2 < (int)(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb0))) * (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xee))))) {
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb0))) = (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xee))) * iVar2;
      }
      else {
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb0))) = (iVar2 - (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xe8)))) + 1;
        *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = (int)*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10e)));
      }
      iVar2 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb0)));
      pAVar3 = (*(undefined * PTR32 *)&gen_args[0]) + 0xbc;
      (*(undefined4 *)&gen_args[1]) = 0;
      if (iVar2 < *(int *)pAVar3) {
        pAVar3 = (*(undefined * PTR32 *)&gen_args[0]) + 0xb0;
      }
      if (*(int *)pAVar3 < 1) {
        pAVar3 = (undefined *)&(*(undefined4 *)&gen_args[1]);
      }
      iVar2 = *(int *)pAVar3;
      *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb0))) = iVar2;
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))) != 0) {
        if ((*(undefined * PTR32 *)&gen_args[0])[0x112] == (undefined1)0x0) {
          sVar4 = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10a)));
        }
        else {
          sVar4 = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10c)));
        }
        F_00574c80(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))) GEN_EDX_ARG,sVar4 * iVar2 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))),1,1);
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      (*(undefined * PTR32 *)&gen_args[0])[0x11d] = (undefined1)0x1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0057ab90 */
GEN_FRAME unsigned int GEN_THISCALL F_0057ab90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57ab90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  *(undefined4 *)((int)this + 0xb8) = 0;
  if ((*(char *)((int)this + 0x114) == '\0') ||
     (*(int *)((int)this + 0xc0) < (int)(uint)*(ushort *)((int)this + 0xe8))) {
    *(undefined4 *)((int)this + 0xb0) = 0;
  }
  else {
    *(uint *)((int)this + 0xb0) = ((int)(short)param_1 - (uint)*(ushort *)((int)this + 0xe8)) + 1;
  }
  iVar1 = *(int *)((int)this + 0x88);
  if (iVar1 != 0) {
    F_00574c80(iVar1 GEN_EDX_FWD,(int)(short)(int)(((float10)*(int *)((int)this + 0xb0) /
                                         (float10)*(int *)((int)this + 0xbc)) *
                                        (float10)*(int *)(iVar1 + 0xa8)),1,1);
  }
  if ((char)param_2 != '\0') {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_ARG);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)((int)this + 0xb0);
  }
  return;
}

/* ref: FUN_0057ac30 */
GEN_FRAME uint GEN_THISCALL F_0057ac30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57ac30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  code * pcVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  short sVar6;
  
  uVar3 = (*(uint *)&gen_args[1]);
  uVar1 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc)));
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
  sVar6 = (short)(*(uint *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffff;
  puVar4 = &(*(uint *)&gen_args[1]);
  if ((short)uVar1 <= sVar6) {
    puVar4 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((short)*puVar4 < 1) {
    puVar4 = &(*(uint *)(gen_frame + 0x4));
  }
  sVar6 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10e)));
  uVar5 = (uint)(short)*puVar4;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0))) = uVar5;
  if ((int)uVar3 < 1) {
    if ((uVar5 == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)))) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) != 0)) {
      pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x80)));
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = 0;
      uVar5 = (*pcVar2)((*(undefined * PTR32 *)&gen_args[0]));
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = 0;
  }
  else if ((int)(short)(ushort)(sVar6 != 0) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))) <= (int)uVar3) {
    if ((uVar5 == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)))) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) != (int)sVar6)) {
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = (int)sVar6;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
    }
    uVar5 = (uint)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10e)));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = uVar5;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) != 0) {
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x112))) == '\0') {
      sVar6 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10a)));
    }
    else {
      sVar6 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10c)));
    }
    uVar5 = F_00574c80(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) GEN_EDX_ARG,
                         (int)sVar6 * *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))),1,1);
  }
  return uVar5;
}

/* ref: Component::GUI2::AtkComponentList::vf33 */
GEN_FRAME uint GEN_THISCALL F_0057ad40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57ad40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a2;
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort local_8;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_FWD,(*(int *)&gen_a1),0);
  if ((*(short *)(this + 0x10e) == 0) || ((int)*(short *)(this + 0x10e) == *(int *)(this + 0xb8))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  uVar6 = (uint)*(ushort *)(this + 0xee);
  iVar5 = ((int)(short)uVar2 * uVar6 - (int)*(short *)(this + 0xf8)) + (*(int *)&gen_a1);
  if (this[0x114] != (undefined1)0x0) {
    iVar3 = (*(int *)&gen_a1) / (int)uVar6;
    local_8 = (ushort)(*(int *)(this + 0xb8) != 0);
    uVar4 = (uint)(short)local_8;
    if (iVar3 < (int)(*(int *)(this + 0xb0) + uVar4)) {
      *(uint *)(this + 0xb0) = iVar3 - uVar4;
      if ((int)(iVar3 - uVar4) < 1) {
        *(undefined4 *)(this + 0xb0) = 0;
        *(undefined4 *)(this + 0xb8) = 0;
      }
      if (((char)param_2 == '\0') && ((*(int *)&gen_a1) < (int)uVar6)) {
        *(undefined4 *)(this + 0xb8) = 0;
      }
    }
    else {
      if (iVar5 < 0) {
        return uVar4;
      }
      uVar4 = iVar5 / (int)uVar6;
      if ((int)(uVar4 + (int)(short)uVar2) < *(int *)(this + 0xb0)) {
        return uVar4;
      }
      *(uint *)(this + 0xb0) = uVar4 + 1;
      if (((char)param_2 == '\0') && (iVar3 == (*(int *)(this + 0xac) - 1) / (int)uVar6)) {
        *(int *)(this + 0xb8) = (int)*(short *)(this + 0x10e);
      }
      if (*(int *)(this + 0xbc) <= (int)(uVar4 + 1)) {
        *(int *)(this + 0xb0) = *(int *)(this + 0xbc);
      }
    }
    if (*(int *)(this + 0x88) != 0) {
      if (this[0x112] == (undefined1)0x0) {
        sVar1 = *(short *)(this + 0x10a);
      }
      else {
        sVar1 = *(short *)(this + 0x10c);
      }
      F_00574c80(*(int *)(this + 0x88) GEN_EDX_ARG,(int)sVar1 * *(int *)(this + 0xb0) + *(int *)(this + 0xb8),
                   1,1);
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentListItemRenderer::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0057aea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57aea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((((this != (undefined *)0x0) && (*(int *)(this + 0x70) != 0)) &&
      ((*((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x1d & 1) != 0)) &&
     (((((byte)this[0x60] & 1) != 0 && (*(int *)(this + 0x24) == 3)) &&
      ((*(int *)(this + 0xc) != 0 && (*((int *)GEN_TOP((*(int *)(this + 0xc) + 4))) != 0)))))) {
    F_005715d0(*(undefined * PTR32 *)(this + 0x38) GEN_EDX_FWD,this + 4,this);
  }
  return;
}

/* ref: Component::GUI2::AtkComponentListItemRenderer::vf8 */
GEN_FRAME uint GEN_THISCALL F_0057aee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57aee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int * piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  uint local_10;
  
  *(undefined4 *)(this + 0x74) = 1;
  *(undefined2 *)(this + 0x20a) = 1;
  for (uVar9 = 0;
      (*(int *)(this + 0xc) != 0 &&
      (uVar9 < (uint)*(ushort *)(this + 0x1a) + *((int *)GEN_TOP((*(int *)(this + 0xc) + 4)))));
      uVar9 = uVar9 + 1) {
    uVar5 = F_00578ee0(this + 4 GEN_EDX_FWD,uVar9);
    if ((uVar5 != 0) &&
       ((999 < *(ushort *)(uVar5 + 0x18) && (iVar11 = *(int *)(uVar5 + 0x8c), iVar11 != 0)))) {
      *(short *)(this + 0x20a) = *(short *)(this + 0x20a) + 1;
      cVar1 = *(char *)(iVar11 + 0x78);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        this[0x220] = (undefined1)((byte)this[0x220] | 8);
      }
    }
  }
  for (local_10 = 0;
      (iVar11 = *(int *)(this + 0xc), iVar11 != 0 &&
      (uVar9 = *(uint *)(iVar11 + 4), local_10 < *(ushort *)(this + 0x1a) + uVar9));
      local_10 = local_10 + 1) {
    if (((byte)this[0x60] & 1) == 0) {
LAB_0057afb2: ;
      iVar11 = 0;
    }
    else {
      if (uVar9 <= local_10) {
        iVar11 = local_10 - uVar9;
        for (piVar10 = *(int * PTR32 *)(this + 0x4c); piVar10 != *(int * PTR32 *)(this + 0x50);
            piVar10 = piVar10 + 1) {
          iVar8 = iVar11 - ((int *)*piVar10)[1];
          if (iVar8 < 0) {
            iVar11 = iVar11 * 0x90 + *(int *)*piVar10;
            goto LAB_0057afb4;
          }
          iVar11 = iVar8;
        }
        goto LAB_0057afb2;
      }
      iVar11 = *((int *)GEN_TOP((*(int *)(iVar11 + 8) + local_10 * 4)));
    }
LAB_0057afb4: ;
    if (((*(uint *)(iVar11 + 0x84) & 0x1000000) != 0) && (*(ushort *)(iVar11 + 0x18) < 1000)) {
      uVar4 = *(undefined4 *)(iVar11 + 4);
      *(uint *)(iVar11 + 0x84) = *(uint *)(iVar11 + 0x84) | 0x6000000;
      if (*(int *)(iVar11 + 0x80) == 0) {
        uVar14 = 0;
        uVar9 = F_00404270();
        puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = 0;
        }
        *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
      }
      F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,6,uVar4,0,iVar11,this,0);
      uVar4 = *(undefined4 *)(iVar11 + 4);
      if (*(int *)(iVar11 + 0x80) == 0) {
        uVar14 = 0;
        uVar9 = F_00404270();
        puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = 0;
        }
        *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
      }
      F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,7,uVar4,0,iVar11,this,0);
      uVar4 = *(undefined4 *)(iVar11 + 4);
      if (*(int *)(iVar11 + 0x80) == 0) {
        uVar14 = 0;
        uVar9 = F_00404270();
        puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = 0;
        }
        *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
      }
      F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,3,uVar4,0,iVar11,this,0);
      uVar4 = *(undefined4 *)(iVar11 + 4);
      if (*(int *)(iVar11 + 0x80) == 0) {
        uVar14 = 0;
        uVar9 = F_00404270();
        puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = 0;
        }
        *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
      }
      F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,4,uVar4,0,iVar11,this,0);
      uVar4 = *(undefined4 *)(iVar11 + 4);
      if (*(int *)(iVar11 + 0x80) == 0) {
        uVar14 = 0;
        uVar9 = F_00404270();
        puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = 0;
        }
        *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
      }
      F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,9,uVar4,0,iVar11,this,0);
      uVar4 = *(undefined4 *)(iVar11 + 4);
      if (*(int *)(iVar11 + 0x80) == 0) {
        uVar14 = 0;
        uVar9 = F_00404270();
        puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = 0;
        }
        *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
      }
      F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,10,uVar4,0,iVar11,this,0);
      uVar4 = *(undefined4 *)(iVar11 + 4);
      if (*(int *)(iVar11 + 0x80) == 0) {
        uVar14 = 0;
        uVar9 = F_00404270();
        puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = 0;
        }
        *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
      }
      F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0xc,uVar4,0,iVar11,this,0);
      uVar4 = *(undefined4 *)(iVar11 + 4);
      if (*(int *)(iVar11 + 0x80) == 0) {
        uVar14 = 0;
        uVar9 = F_00404270();
        puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = 0;
        }
        *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
      }
      F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0x31,uVar4,0,iVar11,this,0);
      uVar4 = *(undefined4 *)(iVar11 + 4);
      if (*(int *)(iVar11 + 0x80) == 0) {
        uVar14 = 0;
        uVar9 = F_00404270();
        puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = 0;
        }
        *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
      }
      F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0x12,uVar4,0,iVar11,this,0);
      uVar4 = *(undefined4 *)(iVar11 + 4);
      if (*(int *)(iVar11 + 0x80) == 0) {
        uVar14 = 0;
        uVar9 = F_00404270();
        puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = 0;
        }
        *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
      }
      F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0x11,uVar4,0,iVar11,this,0);
      if (*(int *)(this + 0x1e4) == 0) {
        *(int *)(this + 0x1e4) = iVar11;
      }
    }
  }
  if (*(int *)(this + 0x1e4) != 0) {
    *(uint *)(this + 100) = *(uint *)(this + 100) | 0x20000;
  }
  local_10 = 0;
LAB_0057b2f0: ;
  iVar11 = *(int *)(this + 0xc);
  if ((iVar11 == 0) || (uVar9 = *(uint *)(iVar11 + 4), *(ushort *)(this + 0x1a) + uVar9 <= local_10)
     ) {
    iVar11 = *(int *)(this + 0x70);
    fVar12 = 0.0;
    fVar13 = 0.0;
    if (iVar11 != 0) {
      fVar12 = *(float *)(iVar11 + 0x38);
      fVar13 = *(float *)(iVar11 + 0x3c);
    }
    *(short *)(this + 0x200) = (short)(int)fVar12;
    *(short *)(this + 0x202) = (short)(int)fVar13;
    if (iVar11 != 0) {
      *(undefined2 *)(this + 0x204) = *(undefined2 *)(iVar11 + 0x7c);
      *(undefined2 *)(this + 0x206) = *(undefined2 *)(iVar11 + 0x7e);
    }
    uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x130) + 0x10))))(this + 0x130 GEN_EDX_ARG,iVar11);
    return uVar9;
  }
  if (((byte)this[0x60] & 1) != 0) {
    if (uVar9 <= local_10) {
      iVar11 = local_10 - uVar9;
      piVar10 = *(int * PTR32 *)(this + 0x4c);
      if (piVar10 == *(int * PTR32 *)(this + 0x50)) goto LAB_0057bab7;
      do {
        iVar8 = iVar11 - ((int *)*piVar10)[1];
        if (iVar8 < 0) {
          iVar11 = iVar11 * 0x90 + *(int *)*piVar10;
          goto LAB_0057b362;
        }
        piVar10 = piVar10 + 1;
        iVar11 = iVar8;
      } while (piVar10 != *(int * PTR32 *)(this + 0x50));
      local_10 = local_10 + 1;
      goto LAB_0057b2f0;
    }
    iVar11 = *((int *)GEN_TOP((*(int *)(iVar11 + 8) + local_10 * 4)));
LAB_0057b362: ;
    if ((iVar11 != 0) && ((uVar3 = *(ushort *)(iVar11 + 0x18), 999 < uVar3 || (uVar3 == 10000)))) {
      if (uVar3 < 1000) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = *(int * PTR32 *)(iVar11 + 0x8c);
      }
      uVar4 = *(undefined4 *)(iVar11 + 4);
      uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0x38))(piVar10 GEN_EDX_ARG);
      if (uVar9 != 0) {
        if (*(int *)(uVar9 + 0x80) == 0) {
          uVar14 = 0;
          uVar5 = F_00404270();
          puVar6 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar14);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            *puVar6 = 0;
          }
          *(undefined4 * PTR32 *)(uVar9 + 0x80) = puVar6;
        }
        F_00565340(*(undefined * PTR32 *)(uVar9 + 0x80) GEN_EDX_ARG,0x12,uVar4,0,uVar9,this,0);
      }
      uVar4 = *(undefined4 *)(iVar11 + 4);
      uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0x38))(piVar10 GEN_EDX_ARG);
      if (uVar9 != 0) {
        if (*(int *)(uVar9 + 0x80) == 0) {
          uVar14 = 0;
          uVar5 = F_00404270();
          puVar6 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar14);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            *puVar6 = 0;
          }
          *(undefined4 * PTR32 *)(uVar9 + 0x80) = puVar6;
        }
        F_00565340(*(undefined * PTR32 *)(uVar9 + 0x80) GEN_EDX_ARG,0x11,uVar4,0,uVar9,this,0);
      }
      bVar2 = *(byte *)(piVar10 + 0x18);
      bVar7 = bVar2 & 1;
      if ((((bVar7 != 0) && ((bVar2 & 4) != 0)) && ((char)piVar10[7] == '\x01')) &&
         (*(char *)(piVar10[3] + 0xf) == '\x01')) {
LAB_0057b8ff: ;
        uVar4 = *(undefined4 *)(iVar11 + 4);
        if (*(int *)(iVar11 + 0x80) == 0) {
          uVar14 = 0;
          uVar9 = F_00404270();
          puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            *puVar6 = 0;
          }
          *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
        }
        F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,6,uVar4,0,iVar11,this,0);
        uVar4 = *(undefined4 *)(iVar11 + 4);
        if (*(int *)(iVar11 + 0x80) == 0) {
          uVar14 = 0;
          uVar9 = F_00404270();
          puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            *puVar6 = 0;
          }
          *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
        }
        F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,7,uVar4,0,iVar11,this,0);
        uVar4 = *(undefined4 *)(iVar11 + 4);
        if (*(int *)(iVar11 + 0x80) == 0) {
          uVar14 = 0;
          uVar9 = F_00404270();
          puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            *puVar6 = 0;
          }
          *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
        }
        F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0x16,uVar4,0,iVar11,this,0);
        uVar4 = *(undefined4 *)(iVar11 + 4);
        if (*(int *)(iVar11 + 0x80) == 0) {
          uVar14 = 0;
          uVar9 = F_00404270();
          puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            *puVar6 = 0;
          }
          *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
        }
        F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0x17,uVar4,0,iVar11,this,0);
        uVar4 = *(undefined4 *)(iVar11 + 4);
        uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0x38))(piVar10 GEN_EDX_ARG);
        if (uVar9 != 0) {
          if (*(int *)(uVar9 + 0x80) == 0) {
            uVar14 = 0;
            uVar5 = F_00404270();
            puVar6 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar14);
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              *puVar6 = 0;
            }
            *(undefined4 * PTR32 *)(uVar9 + 0x80) = puVar6;
          }
          F_00565340(*(undefined * PTR32 *)(uVar9 + 0x80) GEN_EDX_ARG,0xc,uVar4,0,uVar9,this,0);
        }
        if (((this[0x80] == (undefined1)0x2) && ((char)piVar10[0x1e] != '\0')) &&
           ((char)piVar10[0x1e] != -1)) {
          this[0x220] = (undefined1)((byte)this[0x220] & 0xf7);
          *(int * PTR32 *)(this + 0x1dc) = piVar10;
        }
        if (*(int *)(this + 0x1e4) == 0) {
          *(int *)(this + 0x1e4) = iVar11;
        }
        goto LAB_0057bab7;
      }
      if (bVar7 != 0) {
        if ((((bVar2 & 4) != 0) && ((char)piVar10[7] == '\x01')) &&
           (*(char *)(piVar10[3] + 0xf) == '\x03')) goto LAB_0057b8ff;
        if (bVar7 != 0) {
          if ((((bVar2 & 4) != 0) && ((char)piVar10[7] == '\x01')) &&
             (*(char *)(piVar10[3] + 0xf) == '\x04')) goto LAB_0057b8ff;
          if (bVar7 != 0) {
            if ((((bVar2 & 4) == 0) || ((char)piVar10[7] != '\x01')) ||
               (*(char *)(piVar10[3] + 0xf) != '\x0f')) {
              if (bVar7 != 0) {
                if ((((bVar2 & 4) != 0) && ((char)piVar10[7] == '\x01')) &&
                   (*(char *)(piVar10[3] + 0xf) == '\b')) {
                  uVar4 = *(undefined4 *)(iVar11 + 4);
                  if (*(int *)(iVar11 + 0x80) == 0) {
                    uVar14 = 0;
                    uVar9 = F_00404270();
                    puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
                    if (puVar6 == (undefined4 *)0x0) {
                      puVar6 = (undefined4 *)0x0;
                    }
                    else {
                      *puVar6 = 0;
                    }
                    *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
                  }
                  F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0x19,uVar4,0,iVar11,this,0);
                  local_10 = local_10 + 1;
                  goto LAB_0057b2f0;
                }
                if ((((bVar7 != 0) && ((bVar2 & 4) != 0)) && ((char)piVar10[7] == '\x01')) &&
                   (*(char *)(piVar10[3] + 0xf) == '\x11')) {
                  uVar4 = *(undefined4 *)(iVar11 + 4);
                  if (*(int *)(iVar11 + 0x80) == 0) {
                    uVar14 = 0;
                    uVar9 = F_00404270();
                    puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
                    if (puVar6 == (undefined4 *)0x0) {
                      puVar6 = (undefined4 *)0x0;
                    }
                    else {
                      *puVar6 = 0;
                    }
                    *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
                  }
                  F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0x2d,uVar4,0,iVar11,this,0);
                  uVar4 = *(undefined4 *)(iVar11 + 4);
                  if (*(int *)(iVar11 + 0x80) == 0) {
                    uVar14 = 0;
                    uVar9 = F_00404270();
                    puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
                    if (puVar6 == (undefined4 *)0x0) {
                      puVar6 = (undefined4 *)0x0;
                    }
                    else {
                      *puVar6 = 0;
                    }
                    *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
                  }
                  F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0x2e,uVar4,0,iVar11,this,0);
                  uVar4 = *(undefined4 *)(iVar11 + 4);
                  if (*(int *)(iVar11 + 0x80) == 0) {
                    uVar14 = 0;
                    uVar9 = F_00404270();
                    puVar6 = (undefined4 *)F_00406bd0(4,0,uVar9,uVar14);
                    if (puVar6 == (undefined4 *)0x0) {
                      puVar6 = (undefined4 *)0x0;
                    }
                    else {
                      *puVar6 = 0;
                    }
                    *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar6;
                  }
                  F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0x34,uVar4,0,iVar11,this,0);
                  if (((*(ushort *)(iVar11 + 0x18) < 1000) ||
                      (iVar8 = *(int *)(iVar11 + 0x8c), iVar8 == 0)) ||
                     ((((*(byte *)(iVar8 + 0x60) & 1) == 0 ||
                       (((*(byte *)(iVar8 + 0x60) & 4) == 0 || (*(char *)(iVar8 + 0x1c) != '\x01')))
                       ) || (*((char *)GEN_TOP((*(int *)(iVar8 + 0xc) + 0xf))) != '\x11')))) {
                    iVar8 = 0;
                  }
                  *(byte *)(iVar8 + 0xaa) = *(byte *)(iVar8 + 0xaa) | 4;
                  uVar4 = *(undefined4 *)(iVar11 + 4);
                  uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar8 + 0x84) + 0x14))))(iVar8 + 0x84 GEN_EDX_ARG);
                  if (uVar9 != 0) {
                    if (*(int *)(uVar9 + 0x80) == 0) {
                      uVar14 = 0;
                      uVar5 = F_00404270();
                      puVar6 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar14);
                      if (puVar6 == (undefined4 *)0x0) {
                        puVar6 = (undefined4 *)0x0;
                      }
                      else {
                        *puVar6 = 0;
                      }
                      *(undefined4 * PTR32 *)(uVar9 + 0x80) = puVar6;
                    }
                    F_00565340(*(undefined * PTR32 *)(uVar9 + 0x80) GEN_EDX_ARG,9,uVar4,0,uVar9,this,0);
                  }
                  this[0x220] = (undefined1)((byte)this[0x220] & 0xf7);
                  local_10 = local_10 + 1;
                  *(int * PTR32 *)(this + 0x1dc) = piVar10;
                  goto LAB_0057b2f0;
                }
              }
            }
            else {
              uVar4 = *(undefined4 *)(iVar11 + 4);
              uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0x38))(piVar10 GEN_EDX_ARG);
              if (uVar9 != 0) {
                if (*(int *)(uVar9 + 0x80) == 0) {
                  uVar14 = 0;
                  uVar5 = F_00404270();
                  puVar6 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar14);
                  if (puVar6 == (undefined4 *)0x0) {
                    puVar6 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar6 = 0;
                  }
                  *(undefined4 * PTR32 *)(uVar9 + 0x80) = puVar6;
                }
                F_00565340(*(undefined * PTR32 *)(uVar9 + 0x80) GEN_EDX_ARG,9,uVar4,0,uVar9,this,0);
              }
              uVar4 = *(undefined4 *)(iVar11 + 4);
              uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0x38))(piVar10 GEN_EDX_ARG);
              if (uVar9 != 0) {
                if (*(int *)(uVar9 + 0x80) == 0) {
                  uVar14 = 0;
                  uVar5 = F_00404270();
                  puVar6 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar14);
                  if (puVar6 == (undefined4 *)0x0) {
                    puVar6 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar6 = 0;
                  }
                  *(undefined4 * PTR32 *)(uVar9 + 0x80) = puVar6;
                }
                F_00565340(*(undefined * PTR32 *)(uVar9 + 0x80) GEN_EDX_ARG,3,uVar4,0,uVar9,this,0);
              }
              uVar4 = *(undefined4 *)(iVar11 + 4);
              uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0x38))(piVar10 GEN_EDX_ARG);
              if (uVar9 != 0) {
                if (*(int *)(uVar9 + 0x80) == 0) {
                  uVar14 = 0;
                  uVar5 = F_00404270();
                  puVar6 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar14);
                  if (puVar6 == (undefined4 *)0x0) {
                    puVar6 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar6 = 0;
                  }
                  *(undefined4 * PTR32 *)(uVar9 + 0x80) = puVar6;
                }
                F_00565340(*(undefined * PTR32 *)(uVar9 + 0x80) GEN_EDX_ARG,7,uVar4,0,uVar9,this,0);
              }
              uVar4 = *(undefined4 *)(iVar11 + 4);
              uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0x38))(piVar10 GEN_EDX_ARG);
              if (uVar9 != 0) {
                if (*(int *)(uVar9 + 0x80) == 0) {
                  uVar14 = 0;
                  uVar5 = F_00404270();
                  puVar6 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar14);
                  if (puVar6 == (undefined4 *)0x0) {
                    puVar6 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar6 = 0;
                  }
                  *(undefined4 * PTR32 *)(uVar9 + 0x80) = puVar6;
                }
                F_00565340(*(undefined * PTR32 *)(uVar9 + 0x80) GEN_EDX_ARG,6,uVar4,0,uVar9,this,0);
              }
              uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0x38))(piVar10 GEN_EDX_ARG);
              if (uVar9 != 0) {
                *(uint *)(uVar9 + 0x84) = *(uint *)(uVar9 + 0x84) | 0x2000000;
              }
              uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0x38))(piVar10 GEN_EDX_ARG);
              if (uVar9 != 0) {
                *(uint *)(uVar9 + 0x84) = *(uint *)(uVar9 + 0x84) | 0x4000000;
              }
              piVar10[0x19] = piVar10[0x19] | 0x20000;
              if (((this[0x80] == (undefined1)0x2) &&
                  ((char)piVar10[0x1e] != '\0')) && ((char)piVar10[0x1e] != -1)) {
                this[0x220] = (undefined1)((byte)this[0x220] & 0xf7);
                local_10 = local_10 + 1;
                *(int * PTR32 *)(this + 0x1dc) = piVar10;
                goto LAB_0057b2f0;
              }
            }
          }
        }
      }
    }
  }
LAB_0057bab7: ;
  local_10 = local_10 + 1;
  goto LAB_0057b2f0;
}

/* ref: Component::GUI2::AtkComponentListItemRenderer::vf16 */
GEN_FRAME uint GEN_THISCALL F_0057bb30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57bb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  code * pcVar1;
  char * pcVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  
  pcVar2 = param_1;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
    this[0x80] = *(undefined *)(param_1 + 8);
  }
  param_1 = (char *)F_0055d920(this + 4 GEN_EDX_FWD,*(undefined4 *)(param_1 + 0xc));
  if ((param_1 == (char *)0x0) || (*(short *)((int)param_1 + 0x18) != 3)) {
    param_1 = (char *)0x0;
  }
  *(char * PTR32 *)(this + 0x104) = param_1;
  uVar4 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(pcVar2 + 0x10));
  if ((uVar4 == 0) || (*(short *)(uVar4 + 0x18) != 2)) {
    uVar4 = 0;
  }
  *(uint *)(this + 0x1e0) = uVar4;
  if (uVar4 == 0) {
    uVar4 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(pcVar2 + 0x10));
    if ((((uVar4 == 0) || (*(ushort *)(uVar4 + 0x18) < 1000)) ||
        (iVar5 = *(int *)(uVar4 + 0x8c), iVar5 == 0)) ||
       ((((*(byte *)(iVar5 + 0x60) & 1) == 0 || ((*(byte *)(iVar5 + 0x60) & 4) == 0)) ||
        ((*(char *)(iVar5 + 0x1c) != '\x01' || (*((char *)GEN_TOP((*(int *)(iVar5 + 0xc) + 0xf))) != '\x0f'))))
       )) {
      iVar5 = 0;
    }
    *(int *)(this + 0x1e0) = iVar5;
    this[0x220] = (undefined1)
                  ((byte)this[0x220] ^ ((iVar5 != 0) * '\x04' ^ (byte)this[0x220]) & 4);
  }
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(this + 0x1e0);
  if (param_1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined2 *)((int)param_1 + 0x7e);
  }
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x50);
  *(undefined2 *)(this + 0x208) = uVar3;
  (*pcVar1)(this,(uint)(byte)pcVar2[0x1c]);
  uVar4 = F_00578fb0(this + 4 GEN_EDX_ARG,0,0);
  uVar4 = F_0055d920(this + 4 GEN_EDX_ARG,uVar4);
  *(uint *)(this + 0x68) = uVar4;
  return uVar4;
}

/* ref: FUN_0057bc60 */
GEN_FRAME uint GEN_THISCALL F_0057bc60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57bc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = F_005b8730(param_1 GEN_EDX_FWD);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = F_00578ee0(param_1 GEN_EDX_ARG,uVar3);
      if (uVar2 != 0) {
        if (((*(uint *)(uVar2 + 0x84) & 0x1000000) != 0) &&
           ((*(uint *)(uVar2 + 0x84) >> 0x19 & 1) != 0)) {
          *((uint *)GEN_TOP((*(int *)((int)this + 0x1e8) + (uint)*(ushort *)((int)this + 0x20c) * 4))) = uVar2;
          *(short *)((int)this + 0x20c) = *(short *)((int)this + 0x20c) + 1;
        }
        *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) & 0xdfffffff;
        if ((999 < *(ushort *)(uVar2 + 0x18)) || (*(ushort *)(uVar2 + 0x18) == 10000)) {
          F_0057bc60(this GEN_EDX_ARG,((undefined *)GEN_TOP((*(int *)(uVar2 + 0x8c) + 4))));
        }
      }
      uVar3 = uVar3 + 1;
      uVar2 = F_005b8730(param_1 GEN_EDX_ARG);
    } while (uVar3 < uVar2);
  }
  return uVar2;
}

/* ref: FUN_0057bd00 */
GEN_FRAME ushort GEN_THISCALL F_0057bd00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57bd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = 0;
  uVar3 = F_005b8730(param_1 GEN_EDX_FWD);
  if (uVar3 != 0) {
    do {
      uVar3 = F_00578ee0(param_1 GEN_EDX_ARG,uVar4);
      if (uVar3 != 0) {
        if (((*(uint *)(uVar3 + 0x84) & 0x1000000) != 0) &&
           ((*(uint *)(uVar3 + 0x84) >> 0x19 & 1) != 0)) {
          uVar1 = uVar1 + 1;
        }
        if ((999 < *(ushort *)(uVar3 + 0x18)) || (*(ushort *)(uVar3 + 0x18) == 10000)) {
          uVar2 = F_0057bd00(this GEN_EDX_ARG,((undefined *)GEN_TOP((*(int *)(uVar3 + 0x8c) + 4))));
          uVar1 = uVar1 + uVar2;
        }
      }
      uVar4 = uVar4 + 1;
      uVar3 = F_005b8730(param_1 GEN_EDX_ARG);
    } while (uVar4 < uVar3);
  }
  return uVar1;
}

/* ref: FUN_0057bda0 */
GEN_NOFRAME uint GEN_THISCALL F_0057bda0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57bda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  for (uVar4 = 0;
      (*(int *)((int)this + 0xc) != 0 &&
      (uVar4 < (uint)*(ushort *)((int)this + 0x1a) + *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4)))));
      uVar4 = uVar4 + 1) {
    uVar2 = F_00578ee0((undefined *)((int)this + 4) GEN_EDX_FWD,uVar4);
    if ((((uVar2 != 0) && (999 < *(ushort *)(uVar2 + 0x18))) &&
        (uVar2 = *(uint *)(uVar2 + 0x8c), uVar2 != 0)) &&
       (((bVar1 = *(byte *)(uVar2 + 0x78), bVar1 != 0 && (bVar1 != 0xff)) &&
        ((uVar3 == 0 || (bVar1 < *(byte *)(uVar3 + 0x78))))))) {
      uVar3 = uVar2;
    }
  }
  return uVar3;
}

/* ref: FUN_0057be10 */
GEN_FRAME uint GEN_THISCALL F_0057be10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57be10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  for (uVar3 = 0;
      (iVar1 != 0 && (uVar3 < (uint)*(ushort *)((int)this + 0x1a) + *(int *)(iVar1 + 4)));
      uVar3 = uVar3 + 1) {
    uVar2 = F_00578ee0((undefined *)((int)this + 4) GEN_EDX_FWD,uVar3);
    if ((*(byte *)(uVar2 + 0x87) & 1) != 0) {
      return uVar2;
    }
  }
  if (this != (undefined *)0x0) {
    return *(uint *)((int)this + 0x70);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf7 */
GEN_FRAME unsigned int GEN_THISCALL F_0057be60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57be60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int iVar2;
  undefined * this_00;
  int * piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int * piVar11;
  float10 fVar12;
  float fVar13;
  float local_18;
  float local_14;
  
  if (((byte)this[0x66] & 1) != 0) {
    pvVar1 = *(undefined * PTR32 *)(this + 0x70);
    if (pvVar1 != (undefined *)0x0) {
      local_18 = *(float *)((int)pvVar1 + 0x30);
      local_14 = *(float *)((int)pvVar1 + 0x34);
    }
    fVar13 = REFG(float, 0x1087f04);
    if (this[0x125] != (undefined1)0x0) {
      fVar13 = REFG(float, 0x10928e4);
    }
    uVar7 = F_00568270(pvVar1 GEN_EDX_FWD);
    fVar12 = (float10)uVar7 * (float10)fVar13 + (float10)local_18;
    uVar7 = F_005682d0(pvVar1 GEN_EDX_ARG);
    iVar2 = *(int *)(REFG(int, 0x1379860) + 4);
    iVar10 = (*(ushort *)(this + 0x30) & 0x3ff) * -0x40 + 0xffff;
    *((int *)GEN_TOP((*(int *)(iVar2 + 4) + 0x70))) = iVar10;
    this_00 = *(undefined * PTR32 *)(iVar2 + 4);
    uVar8 = F_005bfe10(this_00 GEN_EDX_ARG,2,0x1c,0);
    if (uVar8 != 0) {
      *(byte *)((int)this_00 + 0xa4) = *(byte *)((int)this_00 + 0xa4) | 2;
      *(int *)(uVar8 + 0xc) = (int)local_18;
      *(int *)(uVar8 + 0x10) = (int)local_14;
      *(int *)(uVar8 + 0x14) = (int)fVar12;
      *(int *)(uVar8 + 0x18) = (int)((float10)uVar7 + (float10)local_14);
      *(undefined4 *)(uVar8 + 8) = 1;
      F_005bfeb0(this_00 GEN_EDX_ARG,uVar8);
    }
    piVar3 = *(int * PTR32 *)(this + 0x130);
    bVar6 = false;
    iVar2 = -*(int *)(this + 0xb8);
    for (piVar11 = *(int * PTR32 *)(this + 300); piVar11 != piVar3; piVar11 = piVar11 + 1) {
      iVar4 = *piVar11;
      iVar5 = *(int *)(iVar4 + 0x20);
      iVar9 = iVar2;
      if (bVar6) {
LAB_0057c00c: ;
        if ((*(byte *)(iVar4 + 0x2b) & 1) != 0) {
          bVar6 = false;
        }
      }
      else {
        iVar9 = (uint)*(ushort *)(iVar4 + 0x28) + iVar2;
        if (iVar9 < 0) {
          if (((*(byte *)(iVar4 + 0x2b) & 2) != 0) && (*(char *)(iVar4 + 0x2a) == '\0')) {
            bVar6 = true;
          }
          goto LAB_0057c00c;
        }
        *(undefined2 *)(iVar5 + 0x30) = *(undefined2 *)(this + 0x30);
        if (((((*(byte *)(iVar5 + 0x60) & 1) != 0) && (*(int *)(iVar5 + 0x24) == 3)) &&
            (*(int *)(iVar5 + 0xc) != 0)) && (*((int *)GEN_TOP((*(int *)(iVar5 + 0xc) + 4))) != 0)) {
          F_005715d0(*(undefined * PTR32 *)(iVar5 + 0x38) GEN_EDX_ARG,iVar5 + 4,iVar5);
        }
        iVar9 = iVar2 + (uint)*(ushort *)(iVar4 + 0x28);
        if ((int)(uint)*(ushort *)((int)pvVar1 + 0x7e) < iVar9) break;
        if (((*(byte *)(iVar4 + 0x2b) & 2) != 0) && (*(char *)(iVar4 + 0x2a) == '\0')) {
          bVar6 = true;
        }
      }
      iVar2 = iVar9;
    }
    iVar2 = *(int *)(REFG(int, 0x1379860) + 4);
    *((int *)GEN_TOP((*(int *)(iVar2 + 4) + 0x70))) = iVar10;
    pvVar1 = *(undefined * PTR32 *)(iVar2 + 4);
    uVar8 = F_005bfe10(pvVar1 GEN_EDX_ARG,2,0x1c,0);
    if (uVar8 != 0) {
      *(byte *)((int)pvVar1 + 0xa4) = *(byte *)((int)pvVar1 + 0xa4) & 0xfd;
      *(int *)(uVar8 + 0xc) = (int)local_18;
      *(int *)(uVar8 + 0x10) = (int)local_14;
      *(int *)(uVar8 + 0x14) = (int)fVar12;
      *(int *)(uVar8 + 0x18) = (int)((float10)uVar7 + (float10)local_14);
      *(undefined4 *)(uVar8 + 8) = 0;
      F_005bfeb0(pvVar1 GEN_EDX_ARG,uVar8);
    }
    if (((((byte)this[0x60] & 1) != 0) && (*(int *)(this + 0x24) == 3)) &&
       ((*(int *)(this + 0xc) != 0 && (*((int *)GEN_TOP((*(int *)(this + 0xc) + 4))) != 0)))) {
      F_005715d0(*(undefined * PTR32 *)(this + 0x38) GEN_EDX_ARG,this + 4,this);
    }
  }
  return;
}

/* ref: FUN_0057c0b0 */
GEN_FRAME uint GEN_THISCALL F_0057c0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57c0b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  int * piVar2;
  int * piVar3;
  ushort uVar4;
  int * piVar5;
  
  *param_1 = 0;
  *param_2 = 0;
  piVar2 = *(int * PTR32 *)((int)this + 0x130);
  piVar5 = *(int * PTR32 *)((int)this + 300);
  *(undefined4 *)((int)this + 0xac) = 0;
  uVar4 = 0;
  piVar3 = piVar2;
  for (; piVar5 != piVar2; piVar5 = piVar5 + 1) {
    piVar3 = (int *)*piVar5;
    if (*(byte *)(piVar3 + 0xb) == uVar4) {
      *param_1 = *param_1 + (uint)*(ushort *)(piVar3 + 10);
      *param_2 = *param_2 + 1;
      bVar1 = *(byte *)((int)piVar3 + 0x2b);
      if (((bVar1 & 2) == 0) || ((*(byte *)((int)piVar3 + 0x2a) & 1) == 0)) {
        if ((bVar1 & 1) != 0) {
          uVar4 = uVar4 - 1;
        }
      }
      else {
        uVar4 = uVar4 + 1;
      }
      if ((bVar1 & 4) == 0) {
        *(int *)((int)this + 0xac) = *(int *)((int)this + 0xac) + 1;
      }
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_0057c130 */
GEN_FRAME ushort GEN_THISCALL F_0057c130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57c130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  bool bVar2;
  int * piVar3;
  int iVar4;
  ushort uVar5;
  
  piVar3 = *(int * PTR32 *)((int)this + 300);
  iVar4 = 0;
  bVar2 = false;
  if (piVar3 == *(int * PTR32 *)((int)this + 0x130)) {
    return 0;
  }
  uVar5 = 0;
  do {
    if (param_1 == iVar4) {
      return uVar5;
    }
    iVar1 = *piVar3;
    iVar4 = iVar4 + 1;
    if (bVar2) {
      if ((*(byte *)(iVar1 + 0x2b) & 1) != 0) {
        bVar2 = false;
      }
    }
    else {
      uVar5 = uVar5 + *(short *)(iVar1 + 0x28);
      if (((*(byte *)(iVar1 + 0x2b) & 2) != 0) && (*(char *)(iVar1 + 0x2a) == '\0')) {
        bVar2 = true;
      }
    }
    piVar3 = piVar3 + 1;
  } while (piVar3 != *(int * PTR32 *)((int)this + 0x130));
  return uVar5;
}

/* ref: FUN_0057c1a0 */
GEN_FRAME uint GEN_THISCALL F_0057c1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57c1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  uint local_c;
  
  uVar4 = 0;
  if (param_1 < 0) {
    return 0xffffffff;
  }
  piVar5 = *(int * PTR32 *)((int)this + 300);
  iVar6 = 0;
  uVar3 = 0;
  local_c = 0;
  if (piVar5 != *(int * PTR32 *)((int)this + 0x130)) {
    while (uVar4 = local_c, param_1 != iVar6) {
      iVar2 = *piVar5;
      if (*(byte *)(iVar2 + 0x2c) == uVar3) {
        bVar1 = *(byte *)(iVar2 + 0x2b);
        if ((bVar1 & 4) == 0) {
          local_c = local_c + 1;
        }
        if (((bVar1 & 2) == 0) || ((*(byte *)(iVar2 + 0x2a) & 1) == 0)) {
          if ((bVar1 & 1) != 0) {
            uVar3 = uVar3 - 1;
          }
        }
        else {
          uVar3 = uVar3 + 1;
        }
      }
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + 1;
      if (piVar5 == *(int * PTR32 *)((int)this + 0x130)) {
        return 0;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_0057c230 */
GEN_FRAME unsigned int GEN_THISCALL F_0057c230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57c230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort * puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  int * piVar8;
  
  if (*(int *)((int)this + 0x94) != 0) {
    *(undefined4 *)((int)this + 0x170) = 0;
    *(undefined4 *)((int)this + 0x174) = 0;
    *(undefined4 *)((int)this + 0x178) = 0;
    *(undefined4 *)((int)this + 0x17c) = 0;
    *(undefined4 *)((int)this + 0x180) = 0;
    *(undefined4 *)((int)this + 0x184) = 0;
    *(undefined4 *)((int)this + 0x188) = 0;
    *(undefined2 *)((int)this + 0x18c) = 0;
    piVar8 = *(int * PTR32 *)((int)this + 0x130);
    (*(int * PTR32 *)(gen_frame + 0x14)) = *(int * PTR32 *)((int)this + 300);
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar8;
    (*(char *)(gen_frame + 0x1b)) = '\0';
    if (*(int * PTR32 *)((int)this + 300) != piVar8) {
      do {
        iVar7 = *(*(int * PTR32 *)(gen_frame + 0x14));
        (*(int *)(gen_frame + 0x10)) = iVar7;
        if ((*(char *)(gen_frame + 0x1b)) == '\0') {
          *(undefined1 *)(iVar7 + 0x2d) = 0;
          iVar2 = *(int *)((int)this + 0x94);
          (*(undefined4 *)(gen_frame + 0x0)) = 0;
          (*(int *)(gen_frame + 0x4)) = iVar7;
          if (iVar2 == 0) {
            uVar5 = *(uint *)((int)this + 0x84);
          }
          else {
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x94) + 8))))
                              (*(int * PTR32 *)((int)this + 0x94) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
          }
          *(uint *)(iVar7 + 0x20) = uVar5;
          puVar6 = *(uint * PTR32 *)((int)this + 0xa0);
          bVar4 = 0;
          if (*(byte *)((int)this + 0x110) != 0) {
            do {
              if (*puVar6 == uVar5) {
                puVar1 = (ushort *)((int)this + (uint)bVar4 * 2 + 0x170);
                (*(ushort * PTR32 *)(gen_frame + 0xc)) = puVar1;
                lVar3 = (longlong)(ulonglong)*puVar1 % (longlong)((short)puVar6[2] + 1);
                if (((short)lVar3 != 0) &&
                   (((((iVar7 = (puVar6[1] - 0x90) + ((uint)lVar3 & 0xffff) * 0x90, iVar7 == 0 ||
                       (*(ushort *)(iVar7 + 0x18) < 1000)) ||
                      (uVar5 = *(uint *)(iVar7 + 0x8c), uVar5 == 0)) ||
                     (((*(byte *)(uVar5 + 0x60) & 1) == 0 || ((*(byte *)(uVar5 + 0x60) & 4) == 0))))
                    || ((*(char *)(uVar5 + 0x1c) != '\x01' ||
                        (*((char *)GEN_TOP((*(int *)(uVar5 + 0xc) + 0xf))) != '\x0e')))))) {
                  uVar5 = 0;
                }
                *(uint *)((*(int *)(gen_frame + 0x10)) + 0x20) = uVar5;
                *puVar1 = *puVar1 + 1;
                iVar7 = (*(int *)(gen_frame + 0x10));
                break;
              }
              bVar4 = bVar4 + 1;
              puVar6 = puVar6 + 3;
            } while (bVar4 < *(byte *)((int)this + 0x110));
          }
          if (((*(byte *)(iVar7 + 0x2b) & 2) != 0) && (*(char *)(iVar7 + 0x2a) == '\0')) {
            (*(char *)(gen_frame + 0x1b)) = '\x01';
          }
          (*(int * PTR32 *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0x14)) + 1;
          piVar8 = (*(int * PTR32 *)(gen_frame + 0x8));
        }
        else {
          *(undefined1 *)(iVar7 + 0x2d) = 1;
          if ((*(byte *)(iVar7 + 0x2b) & 1) != 0) {
            (*(char *)(gen_frame + 0x1b)) = '\0';
          }
          (*(int * PTR32 *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0x14)) + 1;
        }
      } while ((*(int * PTR32 *)(gen_frame + 0x14)) != piVar8);
    }
  }
  return;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf19 */
GEN_FRAME byte GEN_THISCALL F_0057c3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57c3c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint * puVar5;
  short sVar6;
  uint uVar7;
  float10 fVar8;
  
  uVar7 = (uint)(short)(*(uint *)&gen_args[1]);
  if (((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x158))) <= uVar7) ||
      (iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 300))) + uVar7 * 4))), iVar2 == 0)) ||
     ((*(undefined * PTR32 *)&gen_args[0])[0x114] == (undefined1)0x0)) {
    return 0;
  }
  uVar4 = F_0057c130((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,uVar7,0);
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb0))) < (int)uVar7) {
    if ((int)uVar7 < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x164))) - 1) {
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x70))) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x70))) + 0x7e)));
      }
      if ((int)(((uint)*(ushort *)(iVar2 + 0x28) - *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8)))) + (uint)uVar4) <
          (int)uVar7) {
        return 0;
      }
    }
    uVar1 = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154)));
    iVar3 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x70)));
    (*(uint *)(gen_frame + 0x4)) = (uint)uVar1;
    (*(uint *)(gen_frame + 0x8)) = 0;
    if (iVar3 == 0) {
      sVar6 = 0;
    }
    else {
      sVar6 = *(short *)(iVar3 + 0x7e);
    }
    uVar4 = (*(short *)(iVar2 + 0x28) - sVar6) + uVar4;
    (*(uint *)&gen_args[1]) = (uint)uVar4;
    puVar5 = &(*(uint *)&gen_args[1]);
    if ((short)uVar1 <= (short)uVar4) {
      puVar5 = &(*(uint *)(gen_frame + 0x4));
    }
    if ((short)*puVar5 < 1) {
      puVar5 = &(*(uint *)(gen_frame + 0x8));
    }
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) != (int)(short)*puVar5) {
      *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = (int)(short)*puVar5;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    }
  }
  else {
    uVar1 = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154)));
    (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
    (*(uint *)(gen_frame + 0x4)) = 0;
    (*(uint *)&gen_args[1]) = (uint)uVar4;
    puVar5 = &(*(uint *)&gen_args[1]);
    if ((short)uVar1 <= (short)uVar4) {
      puVar5 = &(*(uint *)(gen_frame + 0x8));
    }
    if ((short)*puVar5 < 1) {
      puVar5 = &(*(uint *)(gen_frame + 0x4));
    }
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) != (int)(short)*puVar5) {
      *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = (int)(short)*puVar5;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    }
  }
  iVar2 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88)));
  if (iVar2 != 0) {
    fVar8 = (float10)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154)));
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154))) < 0) {
      fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    F_00574c80(iVar2 GEN_EDX_ARG,(int)(((float10)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) / fVar8) *
                            (float10)*(int *)(iVar2 + 0xa8)),0,1);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  (*(undefined * PTR32 *)&gen_args[0])[0x11d] = (undefined1)0x1;
  return 1;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf28 */
GEN_FRAME unsigned int GEN_THISCALL F_0057c560(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57c560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  bool bVar4;
  int * piVar5;
  int iVar6;
  int local_14;
  int local_10;
  
  if (this == (undefined *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = *(int *)(this + 0x70);
  }
  piVar5 = *(int * PTR32 *)(this + 300);
  piVar2 = *(int * PTR32 *)(this + 0x130);
  iVar6 = -*(int *)(this + 0xb8);
  bVar4 = false;
  local_10 = -1;
  iVar1 = local_10;
  do {
    if (piVar5 == piVar2) {
      return;
    }
    iVar1 = iVar1 + 1;
    iVar3 = *piVar5;
    if (bVar4) {
LAB_0057c606: ;
      if ((*(byte *)(iVar3 + 0x2b) & 1) != 0) {
        bVar4 = false;
      }
    }
    else {
      if ((int)(iVar6 + (uint)*(ushort *)(iVar3 + 0x28) * 2) < 0) {
        iVar6 = iVar6 + (uint)*(ushort *)(iVar3 + 0x28);
        if (((*(byte *)(iVar3 + 0x2b) & 2) != 0) && (*(char *)(iVar3 + 0x2a) == '\0')) {
          bVar4 = true;
        }
        goto LAB_0057c606;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_FWD,iVar1,0,0);
      if ((int)(uint)*(ushort *)(local_14 + 0x7e) < iVar6) {
        return;
      }
      iVar6 = iVar6 + (uint)*(ushort *)(iVar3 + 0x28);
      if (((*(byte *)(iVar3 + 0x2b) & 2) != 0) && (*(char *)(iVar3 + 0x2a) == '\0')) {
        bVar4 = true;
      }
    }
    piVar5 = piVar5 + 1;
  } while( true );
}

/* ref: FUN_0057c630 */
GEN_FRAME uint GEN_THISCALL F_0057c630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57c630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  for (piVar2 = *(int * PTR32 *)((int)this + 300);
      (piVar2 != *(int * PTR32 *)((int)this + 0x130) && (*piVar2 != param_1)); piVar2 = piVar2 + 1) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_0057c670 */
GEN_FRAME uint GEN_THISCALL F_0057c670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57c670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  int iVar2;
  
  puVar1 = *(uint * PTR32 *)((int)this + 300);
  iVar2 = 0;
  do {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x130)) {
      return 0;
    }
    if ((*(byte *)(*puVar1 + 0x2b) & 2) != 0) {
      if (iVar2 == param_1) {
        return *puVar1;
      }
      iVar2 = iVar2 + 1;
    }
    puVar1 = puVar1 + 1;
  } while( true );
}

/* ref: FUN_0057c6c0 */
GEN_FRAME uint GEN_THISCALL F_0057c6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57c6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  if (((param_1 != 0) && ((*(byte *)(param_1 + 0x2b) & 2) == 0)) &&
     (*(char *)(param_1 + 0x2c) != '\0')) {
    puVar3 = *(uint * PTR32 *)((int)this + 300);
    uVar2 = 0;
    while( true ) {
      if (puVar3 == *(uint * PTR32 *)((int)this + 0x130)) {
        return 0;
      }
      uVar1 = *puVar3;
      if ((*(byte *)(uVar1 + 0x2b) & 2) != 0) {
        uVar2 = uVar1;
      }
      if (uVar1 == param_1) break;
      puVar3 = puVar3 + 1;
    }
    return uVar2;
  }
  return param_1;
}

/* ref: FUN_0057c720 */
GEN_FRAME uint GEN_THISCALL F_0057c720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57c720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x2b) & 2) != 0)) {
    uVar3 = 1;
    uVar1 = F_0057c630(this GEN_EDX_FWD,param_1);
    uVar1 = uVar1 + 1;
    if (uVar1 < *(uint *)((int)this + 0x158)) {
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 300) + uVar1 * 4)));
      do {
        if ((*(byte *)(*piVar2 + 0x2b) & 1) != 0) {
          return uVar3;
        }
        uVar1 = uVar1 + 1;
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar1 < *(uint *)((int)this + 0x158));
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_0057c780 */
GEN_FRAME uint GEN_THISCALL F_0057c780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57c780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)((int)this + 0x88) != 0) &&
     (uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x88) + 0x70))), uVar1 != 0)) {
    *(uint *)(uVar1 + 0x84) =
         *(uint *)(uVar1 + 0x84) ^ ((param_1 & 0xff) << 0x14 ^ *(uint *)(uVar1 + 0x84)) & 0x100000;
    *(uint *)(uVar1 + 0x88) =
         *(uint *)(uVar1 + 0x88) ^
         ((uint)((char)param_1 == '\0') << 7 ^ *(uint *)(uVar1 + 0x88)) & 0x80;
  }
  if ((char)param_1 != '\0') {
    F_0057ab90(*(undefined * PTR32 *)((int)this + 0x88) GEN_EDX_FWD,
                 (uint)*((ushort *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x88) + 0xc0))),1);
    uVar1 = F_0056d400(*(undefined * PTR32 *)((int)this + 0x88) GEN_EDX_ARG,1,0,0);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentWindow::vf16 */
GEN_FRAME uint GEN_THISCALL F_0057c800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57c800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  char * pcVar3;
  undefined * pAVar4;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
      *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
      this[0x80] = *(undefined *)(param_1 + 8);
    }
    if (param_1[0x34] != '\0') {
      this[0xbc] = (undefined1)((byte)this[0xbc] | 2);
    }
    if (param_1[0x35] != '\0') {
      this[0xbc] = (undefined1)((byte)this[0xbc] | 4);
    }
    iVar2 = 8;
    if (param_1[0x36] != '\0') {
      this[0xbc] = (undefined1)((byte)this[0xbc] | 8);
    }
    if (param_1[0x37] != '\0') {
      this[0xbc] = (undefined1)((byte)this[0xbc] | 0x10);
    }
    *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0x30);
    pcVar3 = param_1 + 0xc;
    pAVar4 = this + 0x88;
    for (; iVar2 != 0; iVar2 = iVar2 - 1) {
      *(undefined4 *)pAVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pAVar4 = pAVar4 + 4;
    }
  }
  uVar1 = F_00578fb0(this + 4 GEN_EDX_FWD,0,0);
  uVar1 = F_0055d920(this + 4 GEN_EDX_ARG,uVar1);
  *(uint *)(this + 0xa8) = uVar1;
  uVar1 = F_00578fb0(this + 4 GEN_EDX_ARG,2,0);
  uVar1 = F_0055d920(this + 4 GEN_EDX_ARG,uVar1);
  *(uint *)(this + 0xac) = uVar1;
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentIconText::vf16 */
GEN_FRAME uint GEN_THISCALL F_0057c8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57c8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
      *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
      this[0x80] = *(undefined *)(param_1 + 8);
    }
    uVar2 = F_0055d920(this + 4 GEN_EDX_FWD,*(undefined4 *)(param_1 + 0xc));
    if ((uVar2 == 0) || (*(short *)(uVar2 + 0x18) != 2)) {
      uVar2 = 0;
    }
    *(uint *)(this + 0x84) = uVar2;
    uVar3 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x10));
    if ((uVar3 == 0) || (*(short *)(uVar3 + 0x18) != 3)) {
      uVar3 = 0;
    }
    uVar5 = 0;
    *(uint *)(this + 0x8c) = uVar3;
    if (uVar2 == 0) {
      uVar5 = 0;
    }
    else if ((*(int *)(uVar2 + 0x8c) != 0) &&
            (puVar4 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar2 + 0x8c) + 8))) + (uint)*(ushort *)(uVar2 + 0x90) * 0xc)))
            , puVar4 != (undefined4 *)0x0)) {
      uVar5 = *puVar4;
    }
    *(undefined4 *)(this + 0x88) = uVar5;
  }
  uVar2 = 0;
  do {
    while( true ) {
      if ((*(int *)(this + 0xc) == 0) ||
         ((uint)*(ushort *)(this + 0x1a) + *((int *)GEN_TOP((*(int *)(this + 0xc) + 4))) <= uVar2)) {
        iVar1 = *(int *)(this + 0x68);
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 0x80) == 0) {
            uVar5 = 0;
            uVar2 = F_00404270();
            puVar4 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar5);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              *puVar4 = 0;
            }
            *(undefined4 * PTR32 *)(iVar1 + 0x80) = puVar4;
          }
          F_00565340(*(undefined * PTR32 *)(iVar1 + 0x80) GEN_EDX_ARG,6,0,0,iVar1,this,0);
        }
        iVar1 = *(int *)(this + 0x68);
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 0x80) == 0) {
            uVar5 = 0;
            uVar2 = F_00404270();
            puVar4 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar5);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              *puVar4 = 0;
            }
            *(undefined4 * PTR32 *)(iVar1 + 0x80) = puVar4;
          }
          F_00565340(*(undefined * PTR32 *)(iVar1 + 0x80) GEN_EDX_ARG,7,0,0,iVar1,this,0);
        }
        iVar1 = *(int *)(this + 0x68);
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 0x80) == 0) {
            uVar5 = 0;
            uVar2 = F_00404270();
            puVar4 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar5);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              *puVar4 = 0;
            }
            *(undefined4 * PTR32 *)(iVar1 + 0x80) = puVar4;
          }
          F_00565340(*(undefined * PTR32 *)(iVar1 + 0x80) GEN_EDX_ARG,9,0,0,iVar1,this,0);
        }
        iVar1 = *(int *)(this + 0x68);
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 0x80) == 0) {
            uVar5 = 0;
            uVar2 = F_00404270();
            puVar4 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar5);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              *puVar4 = 0;
            }
            *(undefined4 * PTR32 *)(iVar1 + 0x80) = puVar4;
          }
          F_00565340(*(undefined * PTR32 *)(iVar1 + 0x80) GEN_EDX_ARG,0xc,0,0,iVar1,this,0);
        }
        uVar2 = *(uint *)(this + 0x68);
        if (uVar2 != 0) {
          *(uint *)(uVar2 + 0x84) =
               *(uint *)(uVar2 + 0x84) ^
               ((uint)(byte)this[0xa1] << 0x1a ^ *(uint *)(uVar2 + 0x84)) & 0x4000000;
        }
        iVar1 = *(int *)(this + 0x84);
        if (iVar1 != 0) {
          *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
          *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
        }
        return uVar2;
      }
      uVar3 = F_00578ee0(this + 4 GEN_EDX_ARG,uVar2);
      if (uVar3 != 0) break;
LAB_0057c9af: ;
      uVar2 = uVar2 + 1;
    }
    if ((*(uint *)(uVar3 + 0x84) & 0x1000000) == 0) {
      *(uint *)(uVar3 + 0x84) = *(uint *)(uVar3 + 0x84) & 0xfdffffff;
      goto LAB_0057c9af;
    }
    *(uint *)(this + 0x68) = uVar3;
    uVar2 = uVar2 + 1;
  } while( true );
}

/* ref: Component::GUI2::AtkComponentDragDrop::vf8 */
GEN_FRAME uint GEN_THISCALL F_0057cb40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57cb40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  undefined4 uVar7;
  int * local_c;
  
  piVar6 = (int *)0x0;
  if (*(int *)(this + 0xc) == 0) {
    local_c = (int *)0x0;
  }
  else {
    local_c = ((int *)GEN_TOP(((uint)*(ushort *)(this + 0x1a) + *((int *)GEN_TOP((*(int *)(this + 0xc) + 4))))));
  }
  if (*(int *)(this + 0xa4) == 0) {
    piVar1 = (int *)0x0;
    if (local_c != (int *)0x0) {
      do {
        piVar1 = (int *)F_00578ee0(this + 4 GEN_EDX_FWD,piVar6);
        if (((((piVar1 != (int *)0x0) && (999 < *(ushort *)(piVar1 + 6))) &&
             (iVar4 = piVar1[0x23], iVar4 != 0)) &&
            (((*(byte *)(iVar4 + 0x60) & 1) != 0 && ((*(byte *)(iVar4 + 0x60) & 4) != 0)))) &&
           ((*(char *)(iVar4 + 0x1c) == '\x01' && (*((char *)GEN_TOP((*(int *)(iVar4 + 0xc) + 0xf))) == '\x0f')
            ))) goto LAB_0057cbc7;
        piVar6 = (int *)((int)piVar6 + 1);
      } while (piVar6 < local_c);
    }
  }
  else {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xa4) + 0x70)));
LAB_0057cbc7: ;
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x84) + 0x10))))(this + 0x84 GEN_EDX_ARG,piVar1)));
  }
  piVar6 = (int *)0x0;
  if (local_c == (int *)0x0) {
    return (uint)piVar1;
  }
  do {
    if ((((byte)this[0x60] & 1) != 0) && (iVar4 = *(int *)(this + 0xc), iVar4 != 0)) {
      piVar1 = *(int * PTR32 *)(iVar4 + 4);
      if (piVar6 < piVar1) {
        iVar4 = *((int *)GEN_TOP((*(int *)(iVar4 + 8) + (int)((int)(uintptr_t)piVar6) * 4)));
LAB_0057cc3f: ;
        if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x87) & 1) != 0)) {
          *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) | 0x6000000;
          *(int *)(this + 0x8c) = iVar4;
          *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) | 0x8000000;
          if (*(int *)(iVar4 + 0x80) == 0) {
            uVar7 = 0;
            uVar2 = F_00404270();
            puVar3 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar7);
            if (puVar3 == (undefined4 *)0x0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              *puVar3 = 0;
            }
            *(undefined4 * PTR32 *)(iVar4 + 0x80) = puVar3;
          }
          F_00565340(*(undefined * PTR32 *)(iVar4 + 0x80) GEN_EDX_ARG,3,0,0,iVar4,this,0);
          if (*(int *)(iVar4 + 0x80) == 0) {
            uVar7 = 0;
            uVar2 = F_00404270();
            puVar3 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar7);
            if (puVar3 == (undefined4 *)0x0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              *puVar3 = 0;
            }
            *(undefined4 * PTR32 *)(iVar4 + 0x80) = puVar3;
          }
          F_00565340(*(undefined * PTR32 *)(iVar4 + 0x80) GEN_EDX_ARG,0x31,0,0,iVar4,this,0);
          if (*(int *)(iVar4 + 0x80) == 0) {
            uVar7 = 0;
            uVar2 = F_00404270();
            puVar3 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar7);
            if (puVar3 == (undefined4 *)0x0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              *puVar3 = 0;
            }
            *(undefined4 * PTR32 *)(iVar4 + 0x80) = puVar3;
          }
          F_00565340(*(undefined * PTR32 *)(iVar4 + 0x80) GEN_EDX_ARG,6,0,0,iVar4,this,0);
          if (*(int *)(iVar4 + 0x80) == 0) {
            uVar7 = 0;
            uVar2 = F_00404270();
            puVar3 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar7);
            if (puVar3 == (undefined4 *)0x0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              *puVar3 = 0;
            }
            *(undefined4 * PTR32 *)(iVar4 + 0x80) = puVar3;
          }
          F_00565340(*(undefined * PTR32 *)(iVar4 + 0x80) GEN_EDX_ARG,7,0,0,iVar4,this,0);
          if (*(int *)(iVar4 + 0x80) == 0) {
            uVar7 = 0;
            uVar2 = F_00404270();
            puVar3 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar7);
            if (puVar3 == (undefined4 *)0x0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              *puVar3 = 0;
            }
            *(undefined4 * PTR32 *)(iVar4 + 0x80) = puVar3;
          }
          uVar2 = F_00565340(*(undefined * PTR32 *)(iVar4 + 0x80) GEN_EDX_ARG,0xc,0,0,iVar4,this,0);
          return uVar2;
        }
      }
      else {
        iVar4 = (int)piVar6 - (int)piVar1;
        for (piVar1 = *(int * PTR32 *)(this + 0x4c); piVar1 != *(int * PTR32 *)(this + 0x50); piVar1 = piVar1 + 1)
        {
          iVar5 = iVar4 - ((int *)*piVar1)[1];
          if (iVar5 < 0) {
            iVar4 = iVar4 * 0x90 + *(int *)*piVar1;
            goto LAB_0057cc3f;
          }
          iVar4 = iVar5;
        }
      }
    }
    piVar6 = (int *)((int)piVar6 + 1);
    if (local_c <= piVar6) {
      return (uint)piVar1;
    }
  } while( true );
}

/* ref: FUN_0057cde0 */
GEN_FRAME uint GEN_THISCALL F_0057cde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57cde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x90);
  if ((char)param_1 == '\0') {
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x1c) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar1 + 0x1c) + 0x10)));
    }
    if ((iVar1 != 0) && (this_00 = *(undefined * PTR32 *)(iVar1 + 0x1c), this_00 != (undefined *)0x0)) {
      *(ushort *)((int)this_00 + 0x22) = *(ushort *)((int)this_00 + 0x22) & 0x7fff;
      *(uint *)((int)this_00 + 0x18) = uVar2 - 1;
      F_00573430(this_00 GEN_EDX_FWD,uVar2 - 1);
    }
  }
  else if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x1c), iVar1 != 0)) {
    *(ushort *)(iVar1 + 0x22) = *(ushort *)(iVar1 + 0x22) | 0x8000;
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  uVar2 = *(uint *)((int)this + 0x90);
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) =
         *(uint *)(uVar2 + 0x84) ^ ((param_1 & 0xff) << 0x14 ^ *(uint *)(uVar2 + 0x84)) & 0x100000;
    *(uint *)(uVar2 + 0x88) =
         *(uint *)(uVar2 + 0x88) ^
         ((uint)((char)param_1 == '\0') << 7 ^ *(uint *)(uVar2 + 0x88)) & 0x80;
  }
  return uVar2;
}

/* ref: FUN_0057ce90 */
GEN_FRAME uint GEN_THISCALL F_0057ce90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57ce90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  undefined * this_00;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  short sVar12;
  bool bVar13;
  float10 fVar14;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x8c);
  uVar11 = 0;
  if (this_00 != (undefined *)0x0) {
    fVar1 = *(float *)((int)this_00 + 0x38);
    uVar2 = *(ushort *)((int)this_00 + 0x7c);
    uVar3 = *(ushort *)((int)this_00 + 0x7e);
    sVar12 = *(short *)((int)this_00 + 0x10c);
    uVar9 = *(ushort *)((int)this_00 + 0x10e);
    uVar11 = (uint)uVar9;
    F_00577de0(this_00 GEN_EDX_FWD,((short *)(gen_frame + 0x14)),((short *)(gen_frame + 0x18)),0,*(undefined4 *)((int)this + 0x154));
    F_00577d20(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0xc)),&REFG(undefined, 0x10a0828),0,REFG(undefined4, 0x108cc50),0);
    while ((int)sVar12 + (int)((short *)(gen_frame + 0x14))[0] < 0) {
      sVar12 = sVar12 + 100;
      if (0 < sVar12) {
        sVar12 = 0;
      }
    }
    for (; (int)(uint)uVar2 < (int)sVar12 + (int)((short *)(gen_frame + 0x14))[0]; sVar12 = sVar12 - 100) {
    }
    if (*(char *)((int)this + 0x1fb) != '\0') {
      while ((int)(short)uVar9 + (int)((short *)(gen_frame + 0x18))[0] < 0) {
        uVar11 = uVar11 + (*(uint *)(gen_frame + 0xc));
        if (0 < (short)uVar11) {
          uVar11 = 0;
        }
        uVar9 = (ushort)uVar11;
      }
      do {
        sVar10 = (short)uVar11;
        if ((int)(((*(uint *)(gen_frame + 0xc)) & 0xffff) + (int)((short *)(gen_frame + 0x18))[0] + (int)sVar10) <= (int)(uint)uVar3) {
          if (*(int *)((int)this + 0x90) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x90) + 0x7e)));
          }
          if ((int)(uVar8 + (int)sVar10 + (int)((short *)(gen_frame + 0x18))[0]) <= (int)(uint)uVar3) goto LAB_0057cfa7;
        }
        uVar11 = uVar11 - (*(uint *)(gen_frame + 0xc));
      } while( true );
    }
    sVar10 = 0;
LAB_0057cfa7: ;
    iVar4 = *(int *)((int)this + 0x8c);
    *(short *)(iVar4 + 0x10c) = sVar12;
    *(short *)(iVar4 + 0x10e) = sVar10;
    iVar4 = *(int *)((int)this + 0x90);
    if (iVar4 != 0) {
      (*(short *)(gen_frame + 0x0)) = (short)(int)fVar1;
      iVar6 = (int)(short)((((short *)(gen_frame + 0x14))[0] - (short)(int)*(float *)(iVar4 + 0x74)) + sVar12 + (*(short *)(gen_frame + 0x0)));
      iVar7 = (int)(short)(*(short *)((int)this + 0x1f2) + ((short *)(gen_frame + 0x18))[0] + sVar10);
      if (((*(uint *)(iVar4 + 0x88) & 1) == 0) &&
         ((fVar14 = (float10)iVar6, bVar13 = GEN_ISNAN((float10)*(float *)(iVar4 + 0x38)) || GEN_ISNAN(fVar14),
          bVar13 == (bVar13 || (float10)*(float *)(iVar4 + 0x38) == fVar14) ||
          (fVar14 = (float10)iVar7, bVar13 = GEN_ISNAN((float10)*(float *)(iVar4 + 0x3c)) || GEN_ISNAN(fVar14),
          bVar13 == (bVar13 || (float10)*(float *)(iVar4 + 0x3c) == fVar14))))) {
        *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 1;
      }
      *(float *)(iVar4 + 0x38) = (float)iVar6;
      *(float *)(iVar4 + 0x3c) = (float)iVar7;
    }
    iVar4 = *(int *)((int)this + 0x90);
    if (iVar4 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)*(ushort *)(iVar4 + 0x7e);
    }
    iVar6 = *(int *)((int)this + 0x8c);
    if (iVar6 == 0) {
      (*(float *)(gen_frame + 0x10)) = 0.0;
      (*(uint *)(gen_frame + 0xc)) = 0;
    }
    else {
      (*(float *)(gen_frame + 0x10)) = *(float *)(iVar6 + 0x3c);
      (*(uint *)(gen_frame + 0xc)) = (uint)*(ushort *)(iVar6 + 0x7e);
    }
    uVar11 = (*(uint *)(gen_frame + 0xc));
    if ((float10)(*(uint *)(gen_frame + 0xc)) + (float10)(*(float *)(gen_frame + 0x10)) <
        (float10)(int)((int)*(short *)((int)this + 0x1f2) + uVar8 + (int)((short *)(gen_frame + 0x18))[0] + (int)sVar10))
    {
      if (((*(char *)((int)this + 0x1fb) == '\0') && (iVar6 != 0)) &&
         (cVar5 = -(*(char *)(iVar6 + 0xfe) >> 7),
         uVar11 = (uint)CONCAT11((char)((*(uint *)(gen_frame + 0xc)) >> 8),cVar5), cVar5 != '\0')) {
        uVar11 = F_0057cde0(this GEN_EDX_ARG,0);
        return uVar11;
      }
    }
    else if ((((iVar4 == 0) || ((*(uint *)(iVar4 + 0x84) & 0x100000) == 0)) ||
             ((*(uint *)(iVar4 + 0x88) & 0x20000) != 0)) && (*(char *)((int)this + 0x84) != '\0')) {
      if ((iVar4 != 0) && (uVar11 = *(uint *)(iVar4 + 0x1c), uVar11 != 0)) {
        *(ushort *)(uVar11 + 0x22) = *(ushort *)(uVar11 + 0x22) | 0x8000;
        *(undefined4 *)(uVar11 + 0x18) = 0;
      }
      iVar4 = *(int *)((int)this + 0x90);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) | 0x100000;
        *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) & 0xffffff7f;
      }
    }
  }
  return uVar11;
}

/* ref: Component::GUI2::AtkComponentNumericInput::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_0057d150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57d150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if (*(undefined * PTR32 *)(this + 0x170) != (undefined *)0x0) {
    F_005c4390(*(undefined * PTR32 *)(this + 0x170) GEN_EDX_FWD,0x17,0x500,this,0);
    *((undefined1 *)GEN_TOP((*(int *)(this + 0x170) + 0x85))) = 1;
  }
  if (*(undefined * PTR32 *)(this + 0x174) != (undefined *)0x0) {
    F_005c4390(*(undefined * PTR32 *)(this + 0x174) GEN_EDX_ARG,0x17,0x501,this,0);
    *((undefined1 *)GEN_TOP((*(int *)(this + 0x174) + 0x85))) = 1;
  }
  if (*(int *)(this + 0x70) != 0) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84)));
    *puVar1 = *puVar1 & 0xfdffffff;
  }
  uVar5 = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x68) = 0;
LAB_0057d1c0: ;
  do {
    if ((*(int *)(this + 0xc) == 0) ||
       ((uint)*(ushort *)(this + 0x1a) + *((int *)GEN_TOP((*(int *)(this + 0xc) + 4))) <= uVar5)) {
      if (*(int *)(this + 0x68) == 0) {
        *(int *)(this + 0x68) = *(int *)(this + 0x8c);
        puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x8c) + 0x84)));
        *puVar1 = *puVar1 | 0x1000000;
        if (*(int *)(this + 0x68) != 0) {
          puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x68) + 0x84)));
          *puVar1 = *puVar1 | 0x4000000;
        }
      }
      if (*(int *)(this + 0x98) == 0) {
        *(int *)(this + 0x98) = *(int *)(this + 0x8c);
        puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x8c) + 0x84)));
        *puVar1 = *puVar1 | 0x1000000;
      }
      if (*(int *)(this + 0x98) != 0) {
        puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x98) + 0x84)));
        *puVar1 = *puVar1 | 0x2000000;
      }
      if (*(int *)(this + 0x98) != 0) {
        puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x98) + 0x84)));
        *puVar1 = *puVar1 | 0x4000000;
      }
      iVar2 = *(int *)(this + 0x98);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,6,0x100,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x98);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,7,0x101,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x98);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,0x11,0x200,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x98);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,0x12,0x201,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x98);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,0xc,0x300,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x98);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,8,0x302,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x98);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,0xf,0,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x98);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,3,0x400,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x68);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,0xc,0x301,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x68);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,0x11,0x301,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x68);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,0x12,0x301,0,iVar2,this,0);
      }
      if (((this[0x80] == (undefined1)0x1) &&
          (this[0x78] == (undefined1)0x1)) &&
         (iVar2 = *(int *)(this + 0x70), iVar2 != 0)) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          uVar6 = 0;
          uVar5 = F_00404270();
          puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar6);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
          }
          *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
        }
        F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,0x46,0,0,iVar2,this,0);
      }
      iVar2 = *(int *)(this + 0x90);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 0x1c) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar2 + 0x1c) + 0x10)));
      }
      if ((iVar2 != 0) && (this_00 = *(undefined * PTR32 *)(iVar2 + 0x1c), this_00 != (undefined *)0x0)) {
        *(ushort *)((int)this_00 + 0x22) = *(ushort *)((int)this_00 + 0x22) & 0x7fff;
        *(uint *)((int)this_00 + 0x18) = uVar5 - 1;
        F_00573430(this_00 GEN_EDX_ARG,uVar5 - 1);
      }
      iVar2 = *(int *)(this + 0x90);
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) & 0xffefffff;
        *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x80;
      }
      uVar5 = *(uint *)(this + 0x8c);
      if (uVar5 != 0) {
        *(undefined4 *)(this + 0x188) = *(undefined4 *)(uVar5 + 0x90);
        *(undefined4 *)(uVar5 + 0x98) = *(undefined4 *)(this + 0x88);
      }
      return uVar5;
    }
    uVar3 = F_00578ee0(this + 4 GEN_EDX_ARG,uVar5);
    if (uVar3 != 0) {
      if ((*(uint *)(uVar3 + 0x84) & 0x1000000) != 0) {
        *(uint *)(this + 0x98) = uVar3;
        uVar5 = uVar5 + 1;
        goto LAB_0057d1c0;
      }
      *(uint *)(uVar3 + 0x84) = *(uint *)(uVar3 + 0x84) & 0xfdffffff;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}

/* ref: Component::GUI2::AtkComponentJournalCanvas::vf16 */
GEN_FRAME ushort GEN_THISCALL F_0057d6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57d6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  ushort uVar1;
  int iVar2;
  undefined2 uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int local_18;
  undefined * local_14;
  int local_c;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (*param_1 != '\0') {
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
    this[0x80] = *(undefined *)(param_1 + 8);
  }
  local_14 = this + 0xc0;
  piVar4 = (int *)(param_1 + 0xc);
  local_18 = 0x1f;
  do {
    if ((((byte)this[0x60] & 1) == 0) || (*piVar4 == 0)) {
      iVar11 = 0;
    }
    else {
      iVar8 = *(int *)(this + 0xc);
      iVar11 = 0;
      if (((iVar8 != 0) && (uVar6 = *(uint *)(iVar8 + 4), uVar6 != 0)) && (uVar5 = 0, uVar6 != 0)) {
        piVar7 = *(int * PTR32 *)(iVar8 + 8);
        do {
          if (*(int *)(*piVar7 + 4) == *piVar4) {
            iVar11 = (*(int * PTR32 *)(iVar8 + 8))[uVar5];
            goto LAB_0057d76e;
          }
          uVar5 = uVar5 + 1;
          piVar7 = piVar7 + 1;
        } while (uVar5 < uVar6);
        iVar11 = 0;
      }
    }
LAB_0057d76e: ;
    *(int *)local_14 = iVar11;
    piVar4 = piVar4 + 1;
    local_14 = local_14 + 4;
    local_18 = local_18 - 1;
  } while (local_18 != 0);
  iVar11 = *(int *)(this + 0xd8);
  if (((((iVar11 == 0) || (*(ushort *)(iVar11 + 0x18) < 1000)) ||
       ((local_c = *(int *)(iVar11 + 0x8c), local_c == 0 ||
        (((*(byte *)(local_c + 0x60) & 1) == 0 || ((*(byte *)(local_c + 0x60) & 4) == 0)))))) ||
      (*(char *)(local_c + 0x1c) != '\x01')) || (*((char *)GEN_TOP((*(int *)(local_c + 0xc) + 0xf))) != '\x15')
     ) {
    local_c = 0;
  }
  iVar11 = *(int *)(this + 0x118);
  if (((((iVar11 == 0) || (*(ushort *)(iVar11 + 0x18) < 1000)) ||
       (local_14 = *(undefined * PTR32 *)(iVar11 + 0x8c),
       local_14 == (undefined *)0x0)) ||
      (((*(byte *)((int)local_14 + 0x60) & 1) == 0 || ((*(byte *)((int)local_14 + 0x60) & 4) == 0)))
      ) || ((*(char *)((int)local_14 + 0x1c) != '\x01' ||
            (*((char *)GEN_TOP((*(int *)((int)local_14 + 0xc) + 0xf))) != '\x15')))) {
    local_14 = (undefined *)0x0;
  }
  if (((*(byte *)(local_c + 0x60) & 1) == 0) || (*(int *)(local_c + 0x94) == 0)) {
LAB_0057d87e: ;
    uVar3 = 0;
  }
  else {
    iVar11 = *(int *)(local_c + 0xc);
    iVar8 = 0;
    if ((iVar11 != 0) && ((uVar6 = *(uint *)(iVar11 + 4), uVar6 != 0 && (uVar5 = 0, uVar6 != 0)))) {
      piVar4 = *(int * PTR32 *)(iVar11 + 8);
      do {
        if (*(int *)(*piVar4 + 4) == *(int *)(local_c + 0x94)) {
          iVar8 = (*(int * PTR32 *)(iVar11 + 8))[uVar5];
          goto LAB_0057d86d;
        }
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar5 < uVar6);
      iVar8 = 0;
    }
LAB_0057d86d: ;
    if ((iVar8 == 0) || (*(short *)(iVar8 + 0x18) != 3)) goto LAB_0057d87e;
    uVar3 = *(undefined2 *)(iVar8 + 0x7e);
  }
  *(undefined2 *)(this + 0xa0) = uVar3;
  if (((*(byte *)(local_c + 0x60) & 1) == 0) || (*(int *)(local_c + 0x98) == 0)) {
LAB_0057d8ef: ;
    uVar3 = 0;
  }
  else {
    iVar11 = *(int *)(local_c + 0xc);
    iVar8 = 0;
    if ((iVar11 != 0) && ((uVar6 = *(uint *)(iVar11 + 4), uVar6 != 0 && (uVar5 = 0, uVar6 != 0)))) {
      piVar4 = *(int * PTR32 *)(iVar11 + 8);
      do {
        if (*(int *)(*piVar4 + 4) == *(int *)(local_c + 0x98)) {
          iVar8 = (*(int * PTR32 *)(iVar11 + 8))[uVar5];
          goto LAB_0057d8da;
        }
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar5 < uVar6);
      iVar8 = 0;
    }
LAB_0057d8da: ;
    if ((iVar8 == 0) || (*(short *)(iVar8 + 0x18) != 3)) goto LAB_0057d8ef;
    uVar3 = (undefined2)(int)*(float *)(iVar8 + 0x3c);
  }
  *(undefined2 *)(this + 0xa8) = uVar3;
  iVar11 = *(int *)(this + 0xd8);
  if (iVar11 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined2)(int)*(float *)(iVar11 + 0x3c);
  }
  *(undefined2 *)(this + 0xa2) = uVar3;
  if (iVar11 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined2 *)(iVar11 + 0x7e);
  }
  *(undefined2 *)(this + 0xa4) = uVar3;
  if (*(int *)(this + 0xd4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined2 *)GEN_TOP((*(int *)(this + 0xd4) + 0x7e)));
  }
  *(undefined2 *)(this + 0xa6) = uVar3;
  iVar11 = *(int *)(this + 0xd0);
  if (iVar11 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined2)(int)*(float *)(iVar11 + 0x3c);
  }
  *(undefined2 *)(this + 0xaa) = uVar3;
  if (iVar11 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined2 *)(iVar11 + 0x7e);
  }
  *(undefined2 *)(this + 0xac) = uVar3;
  if (*(int *)(this + 200) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined2 *)GEN_TOP((*(int *)(this + 200) + 0x7e)));
  }
  *(undefined2 *)(this + 0xae) = uVar3;
  if (*(int *)(this + 300) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined2 *)GEN_TOP((*(int *)(this + 300) + 0x7e)));
  }
  *(undefined2 *)(this + 0xb0) = uVar3;
  if (*(int *)(this + 0x128) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined2 *)GEN_TOP((*(int *)(this + 0x128) + 0x7e)));
  }
  *(undefined2 *)(this + 0xb2) = uVar3;
  if (*(int *)(this + 0x134) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined2 *)GEN_TOP((*(int *)(this + 0x134) + 0x7e)));
  }
  *(undefined2 *)(this + 0xb4) = uVar3;
  if (*(int *)(this + 0x130) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined2 *)GEN_TOP((*(int *)(this + 0x130) + 0x7e)));
  }
  *(undefined2 *)(this + 0xb6) = uVar3;
  if (((*(byte *)((int)local_14 + 0x60) & 1) != 0) && (*(int *)((int)local_14 + 0x90) != 0)) {
    iVar11 = *(int *)((int)local_14 + 0xc);
    iVar8 = 0;
    if ((iVar11 != 0) && ((uVar6 = *(uint *)(iVar11 + 4), uVar6 != 0 && (uVar5 = 0, uVar6 != 0)))) {
      piVar4 = *(int * PTR32 *)(iVar11 + 8);
      do {
        if (*(int *)(*piVar4 + 4) == *(int *)((int)local_14 + 0x90)) {
          iVar8 = (*(int * PTR32 *)(iVar11 + 8))[uVar5];
          goto LAB_0057da3a;
        }
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar5 < uVar6);
      iVar8 = 0;
    }
LAB_0057da3a: ;
    if ((iVar8 != 0) && (*(short *)(iVar8 + 0x18) == 3)) {
      uVar3 = *(undefined2 *)(iVar8 + 0x7e);
      goto LAB_0057da4d;
    }
  }
  uVar3 = 0;
LAB_0057da4d: ;
  *(undefined2 *)(this + 0xb8) = uVar3;
  iVar11 = *(int *)(this + 0x118);
  if (iVar11 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined2)(int)*(float *)(iVar11 + 0x3c);
  }
  *(undefined2 *)(this + 0xba) = uVar3;
  if (iVar11 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined2 *)(iVar11 + 0x7e);
  }
  *(undefined2 *)(this + 0xbc) = uVar3;
  if (*(int *)(this + 0x114) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined2 *)GEN_TOP((*(int *)(this + 0x114) + 0x7e)));
  }
  *(undefined2 *)(this + 0xbe) = uVar3;
  *(undefined4 *)(this + 0x21c) = 0;
  this[0x220] = (undefined1)0x0;
  *(undefined2 *)(this + 0x222) = *(undefined2 *)(param_1 + 0x8a);
  *(undefined2 *)(this + 0x224) = *(undefined2 *)(param_1 + 0x88);
  *(undefined2 *)(this + 0x226) = *(undefined2 *)(param_1 + 0x8c);
  if ((((byte)this[0x60] & 1) == 0) || (*(int *)(param_1 + 0x38) == 0)) {
    iVar11 = 0;
  }
  else {
    iVar8 = *(int *)(this + 0xc);
    iVar11 = 0;
    if (((iVar8 != 0) && (uVar6 = *(uint *)(iVar8 + 4), uVar6 != 0)) && (uVar5 = 0, uVar6 != 0)) {
      piVar4 = *(int * PTR32 *)(iVar8 + 8);
      do {
        if (*(int *)(*piVar4 + 4) == *(int *)(param_1 + 0x38)) {
          iVar11 = (*(int * PTR32 *)(iVar8 + 8))[uVar5];
          goto LAB_0057db3a;
        }
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar5 < uVar6);
      iVar11 = 0;
    }
  }
LAB_0057db3a: ;
  if ((((byte)this[0x60] & 1) == 0) || (*(int *)(param_1 + 0x3c) == 0)) {
    iVar8 = 0;
  }
  else {
    iVar2 = *(int *)(this + 0xc);
    iVar8 = 0;
    if (((iVar2 != 0) && (uVar6 = *(uint *)(iVar2 + 4), uVar6 != 0)) && (uVar5 = 0, uVar6 != 0)) {
      piVar4 = *(int * PTR32 *)(iVar2 + 8);
      do {
        if (*(int *)(*piVar4 + 4) == *(int *)(param_1 + 0x3c)) {
          iVar8 = (*(int * PTR32 *)(iVar2 + 8))[uVar5];
          goto LAB_0057db93;
        }
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar5 < uVar6);
      iVar8 = 0;
    }
  }
LAB_0057db93: ;
  if (iVar11 != 0) {
    *(uint *)(iVar11 + 0x84) = *(uint *)(iVar11 + 0x84) & 0xfdffffff;
  }
  if (iVar8 != 0) {
    *(uint *)(iVar8 + 0x84) = *(uint *)(iVar8 + 0x84) & 0xfdffffff;
  }
  if (iVar11 != 0) {
    *(uint *)(iVar11 + 0x84) = *(uint *)(iVar11 + 0x84) & 0xffefffff;
    *(uint *)(iVar11 + 0x88) = *(uint *)(iVar11 + 0x88) | 0x80;
  }
  if (iVar8 != 0) {
    *(uint *)(iVar8 + 0x84) = *(uint *)(iVar8 + 0x84) & 0xffefffff;
    *(uint *)(iVar8 + 0x88) = *(uint *)(iVar8 + 0x88) | 0x80;
  }
  if (iVar11 == 0) {
    sVar9 = 0;
  }
  else {
    sVar9 = (short)(int)*(float *)(iVar11 + 0x38);
  }
  *(short *)(this + 0x228) = sVar9;
  if (iVar11 == 0) {
    sVar10 = 0;
  }
  else {
    sVar10 = *(short *)(iVar11 + 0x7c);
  }
  *(short *)(this + 0x22a) = sVar10 + sVar9;
  if (iVar11 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined2)(int)*(float *)(iVar11 + 0x3c);
  }
  *(undefined2 *)(this + 0x22c) = uVar3;
  if (iVar8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined2)(int)*(float *)(iVar8 + 0x3c);
  }
  *(undefined2 *)(this + 0x22e) = uVar3;
  *(undefined2 *)(this + 0x8c) = *(undefined2 *)(param_1 + 0x40);
  *(undefined2 *)(this + 0x8e) = *(undefined2 *)(param_1 + 0x44);
  *(undefined2 *)(this + 0x90) = *(undefined2 *)(param_1 + 0x4c);
  *(undefined2 *)(this + 0x92) = *(undefined2 *)(param_1 + 0x58);
  *(undefined2 *)(this + 0x94) = *(undefined2 *)(param_1 + 0x5c);
  if (*(int *)(this + 0xf4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined2 *)GEN_TOP((*(int *)(this + 0xf4) + 0x7c)));
  }
  *(undefined2 *)(this + 0x230) = uVar3;
  if (*(int *)(this + 0xf8) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined2 *)GEN_TOP((*(int *)(this + 0xf8) + 0x7c)));
  }
  *(undefined2 *)(this + 0x232) = uVar3;
  if (*(int *)(this + 0xfc) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined2 *)GEN_TOP((*(int *)(this + 0xfc) + 0x7c)));
  }
  *(undefined2 *)(this + 0x234) = uVar3;
  if (*(int *)(this + 0x108) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined2 *)GEN_TOP((*(int *)(this + 0x108) + 0x7c)));
  }
  *(undefined2 *)(this + 0x236) = uVar3;
  iVar11 = *(int *)(this + 0x128);
  if (iVar11 != 0) {
    *(uint *)(iVar11 + 0x84) = *(uint *)(iVar11 + 0x84) & 0xffefffff;
    *(uint *)(iVar11 + 0x88) = *(uint *)(iVar11 + 0x88) | 0x80;
  }
  iVar11 = *(int *)(this + 0x130);
  if (iVar11 != 0) {
    *(uint *)(iVar11 + 0x84) = *(uint *)(iVar11 + 0x84) & 0xffefffff;
    *(uint *)(iVar11 + 0x88) = *(uint *)(iVar11 + 0x88) | 0x80;
  }
  iVar11 = *(int *)(this + 0xf4);
  if ((iVar11 == 0) || (*(ushort *)(iVar11 + 0x18) < 1000)) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(iVar11 + 0x8c);
  }
  uVar6 = F_00578fb0((undefined *)(iVar11 + 4) GEN_EDX_FWD,0,0);
  *(short *)(this + 0x238) = (short)uVar6;
  uVar1 = *(ushort *)(param_1 + 0x24);
  *(ushort *)(this + 0x96) = uVar1;
  *(undefined2 *)(this + 0x98) = *(undefined2 *)(param_1 + 100);
  return uVar1;
}

/* ref: FUN_0057dd60 */
GEN_NOFRAME uint GEN_THISCALL F_0057dd60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57dd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
LAB_0057dd70: ;
  do {
    if ((*(int *)((int)this + 0xc) == 0) ||
       ((uint)*(ushort *)((int)this + 0x1a) + *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) <= uVar3)) {
      if (uVar2 != 0) {
        *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) | 0x2000000;
      }
      return uVar2;
    }
    uVar1 = F_00578ee0((undefined *)((int)this + 4) GEN_EDX_FWD,uVar3);
    if (uVar1 != 0) {
      if ((*(uint *)(uVar1 + 0x84) & 0x1000000) != 0) {
        uVar3 = uVar3 + 1;
        uVar2 = uVar1;
        goto LAB_0057dd70;
      }
      *(uint *)(uVar1 + 0x84) = *(uint *)(uVar1 + 0x84) & 0xfdffffff;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

/* ref: Component::GUI2::AtkComponentMap::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_0057ddd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57ddd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined * pvVar10;
  float fVar11;
  float fVar12;
  float * pfVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  
  iVar8 = *(int *)(REFG(int, 0x1379860) + 4);
  iVar16 = *(int *)(this + 0x6c);
  pfVar13 = (float *)(iVar16 + 0x30);
  fVar12 = ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0x20) * (float10)*(float *)(iVar16 + 0x20) +
                  (float10)*(float *)(iVar16 + 0x24) * (float10)*(float *)(iVar16 + 0x24))));
  (*(float *)(gen_frame + 0xc)) = fVar12;
  fVar12 = ((float)GEN_TOF(SQRT((float10)fVar12)));
  (*(float *)(gen_frame + 0xc)) = fVar12;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0x28) * (float10)*(float *)(iVar16 + 0x28) +
                 (float10)*(float *)(iVar16 + 0x2c) * (float10)*(float *)(iVar16 + 0x2c))));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  if (iVar16 == 0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = gen_bits2f((uint)*(ushort *)(iVar16 + 0x7c));
  }
  (*(float *)(gen_frame + 0xc)) = fVar11;
  fVar17 = (float10)fVar12;
  if (iVar16 == 0) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = gen_bits2f((uint)*(ushort *)(iVar16 + 0x7e));
  }
  uVar5 = *(ushort *)(this + 0x294);
  uVar6 = *(ushort *)(this + 0x296);
  (*(float *)(gen_frame + 0xc)) = fVar12;
  iVar9 = *(int *)(this + 0x88);
  (*(float *)(gen_frame + 0xc)) = gen_bits2f((uint)uVar5);
  fVar18 = (float10)fVar1;
  sVar7 = *(short *)(this + 0x290);
  (*(float *)(gen_frame + 0xc)) = gen_bits2f((uint)uVar6);
  (*(float *)(gen_frame + 0xc)) = gen_bits2f((int)sVar7);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar9 + 0x30) - (float10)(int)sVar7)));
  (*(float *)(gen_frame + 0x8)) = fVar1;
  fVar19 = (float10)*pfVar13;
  if (!((float10)fVar1 < fVar19)) {
    pfVar13 = &(*(float *)(gen_frame + 0x8));
  }
  fVar1 = *pfVar13;
  pfVar13 = (float *)(iVar16 + 0x34);
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar9 + 0x34) - (float10)(int)*(short *)(this + 0x292))));
  (*(float *)(gen_frame + 0x8)) = fVar2;
  if (!((float10)fVar2 < (float10)*(float *)(iVar16 + 0x34))) {
    pfVar13 = &(*(float *)(gen_frame + 0x8));
  }
  fVar2 = *pfVar13;
  pfVar13 = &(*(float *)(gen_frame + 0x8));
  fVar3 = ((float)GEN_TOF((fVar19 + (float10)(float)((float10)uVar5 * fVar17))));
  (*(float *)(gen_frame + 0xc)) = fVar3;
  fVar11 = ((float)GEN_TOF((fVar19 + (float10)(float)(fVar17 * (float10)(int)gen_fl2bits(fVar11)))));
  (*(float *)(gen_frame + 0x8)) = fVar11;
  if (!((float10)fVar11 < (float10)fVar3)) {
    pfVar13 = &(*(float *)(gen_frame + 0xc));
  }
  fVar3 = *(float *)(iVar16 + 0x34);
  fVar11 = *pfVar13;
  pfVar13 = &(*(float *)(gen_frame + 0xc));
  fVar4 = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)((float10)uVar6 * fVar18))));
  (*(float *)(gen_frame + 0x8)) = fVar4;
  fVar12 = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar18 * (float10)(int)gen_fl2bits(fVar12)))));
  (*(float *)(gen_frame + 0xc)) = fVar12;
  if (!((float10)fVar12 < (float10)fVar4)) {
    pfVar13 = &(*(float *)(gen_frame + 0x8));
  }
  fVar12 = *pfVar13;
  iVar16 = (*(ushort *)(this + 0x30) & 0x3ff) * -0x40 + 0xffff;
  *((int *)GEN_TOP((*(int *)(iVar8 + 4) + 0x70))) = iVar16;
  pvVar10 = *(undefined * PTR32 *)(iVar8 + 4);
  uVar14 = F_005bfe10(pvVar10 GEN_EDX_FWD,2,0x1c,0);
  if (uVar14 != 0) {
    *(byte *)((int)pvVar10 + 0xa4) = *(byte *)((int)pvVar10 + 0xa4) | 2;
    *(int *)(uVar14 + 0xc) = (int)fVar1;
    *(int *)(uVar14 + 0x10) = (int)fVar2;
    *(int *)(uVar14 + 0x14) = (int)fVar11;
    *(undefined4 *)(uVar14 + 8) = 1;
    *(int *)(uVar14 + 0x18) = (int)fVar12;
    F_005bfeb0(pvVar10 GEN_EDX_ARG,uVar14);
  }
  if ((((((byte)this[0x60] & 1) != 0) && (*(int *)(this + 0x24) == 3)) &&
      (*(int *)(this + 0xc) != 0)) && (*((int *)GEN_TOP((*(int *)(this + 0xc) + 4))) != 0)) {
    F_005715d0(*(undefined * PTR32 *)(this + 0x38) GEN_EDX_ARG,this + 4,this);
  }
  *((int *)GEN_TOP((*(int *)(iVar8 + 4) + 0x70))) = iVar16;
  pvVar10 = *(undefined * PTR32 *)(iVar8 + 4);
  uVar15 = F_005bfe10(pvVar10 GEN_EDX_ARG,2,0x1c,0);
  uVar14 = 0;
  if (uVar15 != 0) {
    *(byte *)((int)pvVar10 + 0xa4) = *(byte *)((int)pvVar10 + 0xa4) & 0xfd;
    *(int *)(uVar15 + 0xc) = (int)fVar1;
    *(int *)(uVar15 + 0x10) = (int)fVar2;
    *(int *)(uVar15 + 0x14) = (int)fVar11;
    *(int *)(uVar15 + 0x18) = (int)fVar12;
    *(undefined4 *)(uVar15 + 8) = 0;
    uVar14 = F_005bfeb0(pvVar10 GEN_EDX_ARG,uVar15);
  }
  return uVar14;
}

/* ref: FUN_0057e0a0 */
GEN_FRAME unsigned int GEN_THISCALL F_0057e0a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x57e0a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  bool bVar1;
  
  bVar1 = GEN_ISNAN((float10)*(float *)((int)param_1 + 0x274)) || GEN_ISNAN((float10)param_2);
  if (bVar1 == (bVar1 || (float10)*(float *)((int)param_1 + 0x274) == (float10)param_2)) {
    *(float *)((int)param_1 + 0x2d0) = param_2;
    *(float *)((int)param_1 + 0x2d4) = param_2;
    *(float *)((int)param_1 + 0x274) = param_2;
    F_00575b20(param_1 GEN_EDX_FWD);
  }
  return;
}

/* ref: FUN_0057e0e0 */
GEN_FRAME unsigned int GEN_THISCALL F_0057e0e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x57e0e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  bool bVar1;
  
  bVar1 = GEN_ISNAN((float10)*(float *)((int)param_1 + 0x288)) || GEN_ISNAN((float10)param_2);
  if ((bVar1 == (bVar1 || (float10)*(float *)((int)param_1 + 0x288) == (float10)param_2)) ||
     (bVar1 = GEN_ISNAN((float10)*(float *)((int)param_1 + 0x28c)) || GEN_ISNAN((float10)param_3),
     bVar1 == (bVar1 || (float10)*(float *)((int)param_1 + 0x28c) == (float10)param_3))) {
    *(float *)((int)param_1 + 0x288) = param_2;
    *(float *)((int)param_1 + 0x28c) = param_3;
    F_00575b20(param_1 GEN_EDX_FWD);
  }
  return;
}

/* ref: FUN_0057e130 */
GEN_FRAME unsigned int GEN_THISCALL F_0057e130(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x57e130u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  bool bVar1;
  
  bVar1 = GEN_ISNAN((float10)*(float *)((int)param_1 + 0x280)) || GEN_ISNAN((float10)param_2);
  if ((bVar1 == (bVar1 || (float10)*(float *)((int)param_1 + 0x280) == (float10)param_2)) ||
     (bVar1 = GEN_ISNAN((float10)*(float *)((int)param_1 + 0x284)) || GEN_ISNAN((float10)param_3),
     bVar1 == (bVar1 || (float10)*(float *)((int)param_1 + 0x284) == (float10)param_3))) {
    *(float *)((int)param_1 + 0x280) = param_2;
    *(float *)((int)param_1 + 0x284) = param_3;
    F_00575b20(param_1 GEN_EDX_FWD);
  }
  return;
}

/* ref: FUN_0057e180 */
GEN_NOFRAME uint GEN_THISCALL F_0057e180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57e180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if ((((this != (undefined *)0x0) && (iVar1 = *(int *)((int)this + 0x1c), iVar1 != 0)) &&
      (999 < *(ushort *)(iVar1 + 0x18))) && (*(int *)(iVar1 + 0x8c) != 0)) {
    uVar2 = F_00578ee0(((undefined *)GEN_TOP((*(int *)(iVar1 + 0x8c) + 4))) GEN_EDX_FWD,0);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_0057e1b0 */
GEN_NOFRAME uint GEN_THISCALL F_0057e1b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57e1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this != (undefined *)0x0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x20))) {
    case 2: ;
      if (*(int *)this != 0) {
        uVar1 = F_00578ee0((undefined *)(*(int *)this + 4) GEN_EDX_FWD,0);
        return uVar1;
      }
    case 0: ;
    case 1: ;
    case 3: ;
      return *(uint *)this;
    }
  }
  return 0;
}

/* ref: FUN_0057e1f0 */
GEN_FRAME uint GEN_THISCALL F_0057e1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57e1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  undefined * this_00;
  uint in_EAX = 0;
  uint uVar3;
  
  if (this == (undefined *)0x0) {
    return in_EAX;
  }
  cVar1 = *(char *)((int)this + 0x20);
  if (cVar1 == '\0') {
    uVar3 = *(uint *)((int)this + 0xc);
  }
  else if (cVar1 == '\x02') {
    uVar3 = *(uint *)((int)this + 0x10);
  }
  else {
    if (cVar1 != '\x03') {
      uVar3 = 0;
      goto LAB_0057e24a;
    }
    uVar3 = *(uint *)((int)this + 4);
  }
  if (uVar3 != 0) {
    *(uint *)(uVar3 + 0x84) =
         *(uint *)(uVar3 + 0x84) ^ ((param_1 & 0xff) << 0x14 ^ *(uint *)(uVar3 + 0x84)) & 0x100000;
    *(uint *)(uVar3 + 0x88) =
         *(uint *)(uVar3 + 0x88) ^
         ((uint)((char)param_1 == '\0') << 7 ^ *(uint *)(uVar3 + 0x88)) & 0x80;
  }
LAB_0057e24a: ;
  if ((char)param_1 == '\0') {
    if (uVar3 != 0) {
      this_00 = *(undefined * PTR32 *)(uVar3 + 0x1c);
      uVar3 = 0;
      if (this_00 != (undefined *)0x0) {
        *(ushort *)((int)this_00 + 0x22) = *(ushort *)((int)this_00 + 0x22) & 0x7fff;
        uVar3 = F_00573430(this_00 GEN_EDX_FWD,*(undefined4 *)((int)this_00 + 0x18));
      }
    }
  }
  else if (uVar3 != 0) {
    uVar2 = *(uint *)(uVar3 + 0x1c);
    uVar3 = 0;
    if (uVar2 != 0) {
      *(ushort *)(uVar2 + 0x22) = *(ushort *)(uVar2 + 0x22) | 0x8000;
      return uVar2;
    }
  }
  return uVar3;
}

/* ref: FUN_0057e2a0 */
GEN_FRAME unsigned int GEN_THISCALL F_0057e2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57e2a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  switch((unsigned int)(uintptr_t)((char)param_1[8])) {
  case '\0': ;
  case '\x01': ;
    this = (undefined *)param_1[1];
    break;
  case '\x02': ;
    if (*param_1 == 0) goto switchD_0057e2bf_caseD_3;
    this = *(undefined * PTR32 *)(*param_1 + 0x84);
    break;
  case '\x03': ;
switchD_0057e2bf_caseD_3: ;
    this = (undefined *)param_1[2];
    break;
  default: ;
    return;
  }
  if (this == (undefined *)0x0) {
    return;
  }
  F_00577d20(this GEN_EDX_FWD,&(*(float *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x4)),0,0,REFG(undefined4, 0x108cc50),0);
  uVar1 = (int)gen_fl2bits((*(float *)(gen_frame + 0x8))) + 5;
  uVar2 = (*(int *)(gen_frame + 0x4)) + 5;
  *(short *)((int)this + 0x7c) = (short)uVar1;
  *(short *)((int)this + 0x7e) = (short)uVar2;
  if (param_2 == 0) {
    param_2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    (*(float *)(gen_frame + 0x8)) = 0.0;
  }
  else {
    uVar4 = (uint)*(ushort *)(param_2 + 0x7c);
    uVar3 = (uint)*(ushort *)(param_2 + 0x7e);
    (*(float *)(gen_frame + 0x8)) = *(float *)(param_2 + 0x38);
    param_2 = *(uint *)(param_2 + 0x3c);
  }
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)(int)(uVar4 - (uVar1 & 0xffff)) * (float10)REFG(double, 0x1088108))));
    fVar5 = (float10)REFG(double, 0x1088108) * (float10)(int)(uVar3 - (uVar2 & 0xffff));
    break;
  case 1: ;
    (*(float *)(gen_frame + 0x8)) = (float)((float10)uVar4 + (float10)(*(float *)(gen_frame + 0x8)));
    fVar5 = (float10)(int)(uVar3 - (uVar2 & 0xffff)) * (float10)REFG(double, 0x1088108) +
            ((float10)GEN_TOD(gen_bits2f(param_2)));
    break;
  case 2: ;
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)(uVar1 & 0xffff))));
    fVar5 = (float10)(int)(uVar3 - (uVar2 & 0xffff)) * (float10)REFG(double, 0x1088108) +
            ((float10)GEN_TOD(gen_bits2f(param_2)));
    break;
  case 3: ;
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)(int)(uVar4 - (uVar1 & 0xffff)) * (float10)REFG(double, 0x1088108) +
                     (float10)(*(float *)(gen_frame + 0x8)))));
    fVar5 = (float10)uVar3 + ((float10)GEN_TOD(gen_bits2f(param_2)));
    break;
  case 4: ;
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)(int)(uVar4 - (uVar1 & 0xffff)) * (float10)REFG(double, 0x1088108) +
                     (float10)(*(float *)(gen_frame + 0x8)))));
    fVar5 = ((float10)GEN_TOD(gen_bits2f(param_2))) - (float10)(uVar2 & 0xffff);
    break;
  default: ;
    goto switchD_0057e358_default;
  }
  param_2 = (uint)gen_fl2bits((float)fVar5);
switchD_0057e358_default: ;
  switch((unsigned int)(uintptr_t)((char)param_1[8])) {
  case '\0': ;
  case '\x01': ;
  case '\x03': ;
    fVar6 = (*(float *)(gen_frame + 0x8));
    uVar1 = F_005647a0(param_1 GEN_EDX_ARG);
    F_00559da0(uVar1 GEN_EDX_ARG,fVar6,GEN_TOF(gen_bits2f(param_2)));
    return;
  case '\x02': ;
    F_005c0450(*param_1 GEN_EDX_ARG,(int)(*(float *)(gen_frame + 0x8)) & 0xffff,(int)gen_bits2f(param_2) & 0xffff);
  }
  return;
}

/* ref: FUN_0057e4d0 */
GEN_FRAME byte GEN_THISCALL F_0057e4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57e4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 8)) {
      return 0;
    }
    if (param_1 == *piVar1) break;
    piVar1 = piVar1 + 1;
  }
  *(byte *)((int)this + 0x14) = (byte)(*(uint *)(*piVar1 + 0x14) >> 0x11) & 1;
  F_00c46e20(piVar1,piVar1 + 1,((int)*(int * PTR32 *)((int)this + 8) - (int)(piVar1 + 1) >> 2) * 4);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) - 4;
  return 1;
}

/* ref: FUN_0057e530 */
GEN_FRAME unsigned int GEN_THISCALL F_0057e530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57e530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)this;
  if (piVar3 == *(int * PTR32 *)((int)this + 4)) {
    return;
  }
  do {
    iVar1 = *piVar3;
    for (piVar2 = *(int * PTR32 *)(iVar1 + 4); piVar2 != *(int * PTR32 *)(iVar1 + 8); piVar2 = piVar2 + 1) {
      if (param_1 == *piVar2) {
        *(byte *)(iVar1 + 0x14) = (byte)(*(uint *)(*piVar2 + 0x14) >> 0x11) & 1;
        F_00c46e20(piVar2,piVar2 + 1,((int)*(int * PTR32 *)(iVar1 + 8) - (int)(piVar2 + 1) >> 2) * 4);
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) - 4;
        return;
      }
    }
    piVar3 = piVar3 + 1;
  } while (piVar3 != *(int * PTR32 *)((int)this + 4));
  return;
}

/* ref: FUN_0057e5a0 */
GEN_NOFRAME uint GEN_THISCALL F_0057e5a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57e5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  puVar1 = (undefined4 *)((int)this + 0xf4);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,400);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  puVar1 = (undefined4 *)((int)this + 0x10c);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,400);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x124);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,400);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(byte *)((int)this + 0x148) = *(byte *)((int)this + 0x148) & 0xf4;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  return (uint)this;
}

/* ref: FUN_0057e680 */
GEN_NOFRAME uint GEN_THISCALL F_0057e680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57e680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_005c5100((undefined *)((int)this + 0x124) GEN_EDX_FWD);
  F_00429760(*(undefined4 *)((int)this + 0x124),8,400);
  *(undefined4 *)((int)this + 0x124) = 0;
  F_005c4fe0((undefined *)((int)this + 0x10c) GEN_EDX_ARG);
  F_00429760(*(undefined4 *)((int)this + 0x10c),8,400);
  *(undefined4 *)((int)this + 0x10c) = 0;
  F_005c4fe0((undefined *)((int)this + 0xf4) GEN_EDX_ARG);
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0xf4),8,400);
  *(undefined4 *)((int)this + 0xf4) = 0;
  return (uint)uVar1;
}

/* ref: FUN_0057e710 */
GEN_FRAME float GEN_THISCALL F_0057e710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x57e710u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 0x24))))(iVar2 + 0x144 GEN_EDX_FWD,this,param_1);
    *(undefined1 *)(iVar2 + 0x2a8) = 0;
    *(undefined4 *)(iVar2 + 0x1f8) = param_2;
    *(undefined4 *)(iVar2 + 0x1fc) = param_3;
    if ((((*((byte *)GEN_TOP((*(int *)(iVar2 + 0x14c) + 0x148))) & 2) != 0) &&
        (bVar1 = *((byte *)GEN_TOP((*(int *)(iVar2 + 0x150) + 0x6e))), (bVar1 & 1) != 0)) && ((bVar1 & 2) != 0)
       ) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 4))))(iVar2 + 0x144 GEN_EDX_ARG);
      F_00566640((undefined *)(iVar2 + 0x144) GEN_EDX_ARG,param_1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 8))))(iVar2 + 0x144 GEN_EDX_ARG);
    }
    return *(float *)(iVar2 + 0x284);
  }
  return 0.0;
}

/* ref: FUN_0057e800 */
GEN_FRAME uint GEN_THISCALL F_0057e800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57e800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005769d0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0057e810 */
GEN_FRAME ushort GEN_THISCALL F_0057e810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57e810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = F_00576af0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0057e820 */
GEN_FRAME uint GEN_THISCALL F_0057e820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57e820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00576bf0(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerBase::vf8 */
GEN_FRAME uint GEN_THISCALL F_0057e830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57e830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 4) = param_1;
  *(undefined4 *)(this + 0x10) = param_2;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x14] = (undefined1)0x0;
  F_005c4fe0(this + 0x5c GEN_EDX_FWD);
  F_005c4fe0(this + 0x74 GEN_EDX_ARG);
  uVar1 = F_005c5100(this + 0x8c GEN_EDX_ARG);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerCount::vf8 */
GEN_FRAME uint GEN_THISCALL F_0057e870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57e870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  
  *(undefined4 *)(this + 0x10) = param_2;
  *(undefined4 *)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x14] = (undefined1)0x0;
  F_005c4fe0(this + 0x5c GEN_EDX_FWD);
  F_005c4fe0(this + 0x74 GEN_EDX_ARG);
  F_005c5100(this + 0x8c GEN_EDX_ARG);
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  pvVar1 = F_00c48350(this + 0xc0,0,0x80);
  return (uint)pvVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerDrawSize::vf8 */
GEN_FRAME uint GEN_THISCALL F_0057e8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57e8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  this[0x164] = (undefined1)0x0;
  *(undefined4 *)(this + 0x160) = 0;
  uVar1 = F_0057e870((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf8 */
GEN_FRAME uint GEN_THISCALL F_0057e950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57e950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x140) + 0x20))))(this + 0x140 GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x284) = 0;
  *(undefined4 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x28c) = 0;
  *(undefined4 *)(this + 0x290) = 0;
  *(undefined4 *)(this + 0x298) = 0;
  *(undefined4 *)(this + 0x29c) = 0;
  F_00c48350(this + 0x2a0,0,0x100);
  *(undefined4 *)(this + 0x3a0) = 0;
  *(undefined4 *)(this + 0x3a4) = 0;
  uVar1 = F_0057e870((undefined *)this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf62 */
GEN_FRAME uint GEN_THISCALL F_0057e9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57e9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xf4))(this GEN_EDX_FWD,param_1);
  F_005c91a0(this + 0x22228 GEN_EDX_ARG);
  this[0x22be8] = (undefined1)0x3;
  *(undefined4 *)(this + 0x20dc0) = 0;
  *(undefined4 *)(this + 0x20dc4) = 0;
  this[0x20ddc] = (undefined1)0x0;
  return 0;
}

/* ref: FUN_0057ea30 */
GEN_FRAME uint GEN_THISCALL F_0057ea30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57ea30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if ((*(uint *)((int)this + 0x10) != param_1) ||
     (uVar1 = param_1, *(int *)((int)this + 0x24) != param_2)) {
    *(uint *)((int)this + 0x10) = param_1;
    *(int *)((int)this + 0x24) = param_2;
    uVar1 = F_00577690((int)this + 0x14,param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_0057ea60 */
GEN_FRAME uint GEN_THISCALL F_0057ea60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57ea60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    F_004d6970(*(undefined * PTR32 *)((int)this_00 + 0x9c) GEN_EDX_FWD);
    uVar1 = F_005725c0(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    *(uint *)((int)this_00 + 0x2a0) = uVar1;
    *(undefined * PTR32 *)((int)this_00 + 0x2a4) = (*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  return 0;
}

/* ref: FUN_0057eaa0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0057eaa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57eaa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return;
}

/* ref: FUN_0057eac0 */
GEN_FRAME uint GEN_THISCALL F_0057eac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57eac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  undefined * this_00;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (this == (undefined *)0x0) {
    return 0;
  }
  this_00 = (undefined *)F_005684e0(this GEN_EDX_FWD,1);
  uVar1 = F_00576af0(this_00 GEN_EDX_ARG,param_1);
  puVar3 = (undefined4 *)((int)this_00 + 0xa8);
  puVar4 = (undefined4 *)((int)this_00 + 100);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return uVar1 + 1;
}

/* ref: FUN_0057eb00 */
GEN_FRAME unsigned int GEN_THISCALL F_0057eb00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57eb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((this != (undefined *)0x0) &&
     (*(byte *)((int)this + 0xfe) =
           *(byte *)((int)this + 0xfe) ^ (*(byte *)((int)this + 0xfe) ^ (byte)param_1) & 1,
     (byte)param_1 != 0)) {
    F_00578070(this GEN_EDX_FWD);
  }
  return;
}

/* ref: FUN_0057eb30 */
GEN_FRAME uint GEN_THISCALL F_0057eb30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x57eb30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(uint *)(gen_frame + 0x68)) = uVar3;
  if (this == (undefined *)0x0) goto LAB_0057eced;
  if (((byte)param_4 == 0) || (bVar2 = (byte)param_4, 10 < (byte)param_4)) {
    bVar2 = 10;
  }
  *(byte *)((int)this + 0xf4) =
       (((byte)param_2 & 1 | (char)param_3 * '\x02') * '\x02' | (byte)param_5 & 1) << 5 |
       bVar2 & 0x1f;
  this_00 = (undefined *)((int)this + 0x9c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_FWD,this_00);
  F_0042aca0(this_00 GEN_EDX_ARG);
  if (param_1 < 0) {
    uVar9 = 0x2d;
LAB_0057ebb7: ;
    F_0042d160(this_00 GEN_EDX_ARG,uVar9);
  }
  else if (((*(byte *)((int)this + 0xf4) & 0x80) != 0) && (0 < param_1)) {
    uVar9 = 0x2b;
    goto LAB_0057ebb7;
  }
  bVar2 = *(byte *)((int)this + 0xf4);
  bVar4 = 0;
  iVar6 = 1;
  if ((bVar2 & 0x1f) != 1 && -1 < (int)((bVar2 & 0x1f) - 1)) {
    do {
      bVar4 = bVar4 + 1;
      iVar6 = iVar6 * 10;
    } while ((int)(uint)bVar4 < (int)((bVar2 & 0x1f) - 1));
  }
  (*(byte *)(gen_frame + 0x13)) = bVar2 & 0x1f;
  bVar1 = false;
  if ((*(byte *)(gen_frame + 0x13)) != 0) {
    (*(uint *)(gen_frame + 0x8)) = (uint)(*(byte *)(gen_frame + 0x13));
    iVar7 = param_1;
    do {
      iVar5 = (iVar7 / iVar6) % 10;
      if (iVar5 == 0) {
        if (((bVar1) || (iVar6 == 1)) || ((*(byte *)((int)this + 0xf4) & 0x20) != 0))
        goto LAB_0057ec36;
      }
      else {
        bVar1 = true;
LAB_0057ec36: ;
        F_0042d160((undefined *)((int)this + 0x9c) GEN_EDX_ARG,iVar5 + 0x30U & 0xff);
        if (((REFG(undefined1, 0x137996c) != 0) && ((*(byte *)((int)this + 0xf4) & 0x40) != 0)) &&
           ((3 < (*(byte *)(gen_frame + 0x13)) && ((int)(*(uint *)(gen_frame + 0x8)) % 3 == 1)))) {
          F_0042d160((undefined *)((int)this + 0x9c) GEN_EDX_ARG,(uint)REFG(undefined1, 0x137996c));
        }
      }
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) - 1;
      iVar5 = iVar5 * iVar6;
      iVar6 = iVar6 / 10;
      (*(byte *)(gen_frame + 0x13)) = (*(byte *)(gen_frame + 0x13)) - 1;
      iVar7 = iVar7 - iVar5;
    } while ((*(byte *)(gen_frame + 0x13)) != 0);
  }
  uVar3 = F_0042a990((int)this + 0x9c GEN_EDX_ARG);
  *(uint *)((int)this + 0xf0) = uVar3;
  *(uint *)((int)this + 0x84) = *(uint *)((int)this + 0x84) | 0x100000;
  if ((*(byte *)((int)this + 0xfe) & 1) != 0) {
    F_00578070(this GEN_EDX_ARG);
  }
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  uVar3 = (uint)uVar8;
LAB_0057eced: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_0057ed00 */
GEN_FRAME uint GEN_THISCALL F_0057ed00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57ed00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (this == (undefined *)0x0) {
    return 0;
  }
  this_00 = (undefined *)F_005684e0(this GEN_EDX_FWD,1);
  if (this_00 != (undefined *)0x0) {
    iVar2 = param_1;
    if (param_1 == 0) {
      iVar2 = *(int *)((int)this + 0xf0);
    }
    uVar1 = F_005769d0(this_00 GEN_EDX_ARG,iVar2);
    puVar3 = (undefined4 *)((int)this_00 + 0xa8);
    puVar4 = (undefined4 *)((int)this_00 + 100);
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0057ed60 */
GEN_FRAME unsigned int GEN_THISCALL F_0057ed60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57ed60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if ((this != (undefined *)0x0) && (*(int *)((int)this + 0xf8) != 0)) {
    puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 0xf8)));
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      if (*(short *)(puVar2[2] + 0x1a) == (short)param_1) {
        *(undefined2 *)(puVar2[2] + 0x1c) = (undefined2)param_2;
      }
    }
  }
  return;
}

/* ref: FUN_0057edb0 */
GEN_FRAME uint GEN_THISCALL F_0057edb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57edb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  if ((this != (undefined *)0x0) && (*(int *)((int)this + 0xf8) != 0)) {
    uVar2 = 0;
    for (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(**(int * PTR32 *)((int)this + 0xf8)));
        puVar1 != ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 0xf8))); puVar1 = (undefined4 *)*puVar1) {
      if ((*(short *)(puVar1[2] + 0x1c) == (short)param_1) && (*(short *)(puVar1[2] + 0x1e) != 1)) {
        uVar2 = uVar2 + 1;
      }
    }
    return uVar2;
  }
  return 0;
}

/* ref: FUN_0057ee00 */
GEN_FRAME uint GEN_THISCALL F_0057ee00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57ee00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  short sVar3;
  
  if ((this != (undefined *)0x0) && (*(int *)((int)this + 0xf8) != 0)) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(**(int * PTR32 *)((int)this + 0xf8)));
    sVar3 = 0;
    do {
      if (puVar1 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 0xf8)))) {
        return 0;
      }
      uVar2 = puVar1[2];
      if ((*(short *)(uVar2 + 0x1c) == (short)param_1) && (*(short *)(uVar2 + 0x1e) != 1)) {
        if (sVar3 == (short)param_2) {
          return uVar2;
        }
        sVar3 = sVar3 + 1;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while( true );
  }
  return 0;
}

/* ref: FUN_0057ee60 */
GEN_FRAME uint GEN_THISCALL F_0057ee60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57ee60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x1c))) == 2) {
    uVar1 = F_005ca370(this GEN_EDX_FWD,param_1);
    return uVar1;
  }
  uVar1 = F_005caac0(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_0057ee80 */
GEN_FRAME uint GEN_THISCALL F_0057ee80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57ee80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(short *)((int)this + 0x7c8) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x18))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_FWD,param_1);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x34))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,0);
    return uVar1;
  }
  uVar1 = F_00578b40(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_0057eec0 */
GEN_FRAME uint GEN_THISCALL F_0057eec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57eec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (*(short *)((int)this + 0x7c8) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x3c))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_FWD);
    if ((char)uVar1 == '\0') {
      if (((param_1 == 7) && (*(char *)((int)this + 0x849) != '\0')) &&
         (*(int *)((int)this + 0x10) != 0)) {
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
        return uVar1;
      }
    }
    else {
      uVar1 = param_1;
      switch((unsigned int)(uintptr_t)(param_1)) {
      case 0: ;
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x34))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,0);
        return uVar1;
      case 1: ;
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x34))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,1);
        return uVar1;
      case 2: ;
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x34))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,2);
        return uVar1;
      case 3: ;
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488338) + 8) + 0x18))))
                          (*(int * PTR32 *)(REFG(int, 0x1488338) + 8) GEN_EDX_ARG,0x26,0);
        return uVar1;
      case 4: ;
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488338) + 8) + 0x18))))
                          (*(int * PTR32 *)(REFG(int, 0x1488338) + 8) GEN_EDX_ARG,0x28,0);
        return uVar1;
      }
    }
  }
  else {
    uVar1 = param_1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar1 = F_00578b40(this GEN_EDX_ARG,(int)*(short *)((int)this + 0x7cc));
      return uVar1;
    case 1: ;
    case 2: ;
      uVar1 = F_00572a00(this GEN_EDX_ARG,0);
      return uVar1;
    case 3: ;
      uVar1 = F_00572b60(this GEN_EDX_ARG,0xffffffff,1);
      return uVar1;
    case 4: ;
      uVar1 = F_00572b60(this GEN_EDX_ARG,1,1);
      return uVar1;
    case 5: ;
      uVar1 = F_00572b60(this GEN_EDX_ARG,0xfffffff7,1);
      return uVar1;
    case 6: ;
      uVar1 = F_00572b60(this GEN_EDX_ARG,9,1);
    }
  }
  return uVar1;
}

/* ref: FUN_0057f060 */
GEN_FRAME byte GEN_THISCALL F_0057f060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57f060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  char * pcVar3;
  uint uVar4;
  int * piVar5;
  byte bVar6;
  
  bVar6 = 0;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,param_1,(int)pcVar3 - (int)(param_1 + 1));
  uVar4 = F_00408810(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar2 = *(int * PTR32 *)this;
  piVar5 = (int *)*piVar2;
  if (piVar5 != piVar2) {
    while (*(uint *)piVar5[2] != uVar4) {
      piVar5 = (int *)*piVar5;
      if (piVar5 == piVar2) {
        F_004087f0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        return 0;
      }
    }
    bVar6 = 1;
  }
  F_004087f0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return bVar6;
}

/* ref: FUN_0057f0d0 */
GEN_FRAME uint GEN_THISCALL F_0057f0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x57f0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  int iVar1;
  undefined * this_01;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      F_0057f0d0(this GEN_EDX_FWD,iVar1,param_2,param_3);
    }
  }
  if (((((char)param_3 == '\0') || ((*(uint *)(param_1 + 0x84) & 0x100000) != 0)) || ((*(byte *)(param_1 + 0x88) & 1) != 0)) || ((param_2 != 0 && ((*(byte *)(param_2 + 0x88) & 2) != 0)))) {
    if ((999 < *(ushort *)(param_1 + 0x18)) && (*(int *)(param_1 + 0x8c) != 0)) {
      this_00 = ((undefined *)GEN_TOP((*(int *)(param_1 + 0x8c) + 4)));
      this_01 = (undefined *)F_00578ee0(this_00 GEN_EDX_ARG,0);
      if (this_01 != (undefined *)0x0) {
        F_0055a960(this_01 GEN_EDX_ARG,param_1);
        F_0057f0d0(this_00 GEN_EDX_ARG,((undefined4)(uint)(this_01)),param_2,param_3);
      }
    }
    F_0056a9b0(param_1,param_2);
    F_0055d660(param_1,param_2);
    if (*(int *)(param_1 + 0x14) != 0) {
      F_0057f0d0(this GEN_EDX_ARG,*(int *)(param_1 + 0x14),param_1,param_3);
    }
  }
  return 0;
}

/* ref: FUN_0057f1a0 */
GEN_FRAME uint F_0057f1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x57f1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uVar9;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  if ((short)param_2 != 0) {
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)(param_4 & 0xffff) / (float10)(param_2 & 0xffff))));
  }
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  if ((short)param_3 != 0) {
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)(param_5 & 0xffff) / (float10)(param_3 & 0xffff))));
  }
  uVar6 = *(uint *)(param_1 + 0x84);
  if (((uVar6 & 0x800000) != 0) || ((char)param_6 != '\0')) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x7c);
    uVar6 = (uint)*(ushort *)(param_1 + 0x7e);
    *(undefined2 *)(param_1 + 0x7c) = (undefined2)param_4;
    *(undefined2 *)(param_1 + 0x7e) = (undefined2)param_5;
    goto LAB_0057f39c;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 0x7c);
  uVar1 = uVar6 >> 0x11 & 1;
  if (uVar1 == 0) {
    if ((uVar6 & 0x80000) == 0) goto LAB_0057f2a1;
    fVar8 = (float10)(int)((param_4 & 0xffff) - (param_2 & 0xffff)) +
            (float10)*(float *)(param_1 + 0x38);
LAB_0057f2b1: ;
    F_00559910(param_1 GEN_EDX_ARG,(float)fVar8);
  }
  else if ((uVar6 & 0x80000) == 0) {
LAB_0057f2a1: ;
    if (uVar1 == 0) {
      fVar8 = (float10)*(float *)(param_1 + 0x38) * (float10)(*(float *)(gen_frame + 0x8));
      goto LAB_0057f2b1;
    }
  }
  else {
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0)) =
         (undefined2)
         (int)TRUNC((float10)(int)(((int)((float10)uVar5 + (float10)*(float *)(param_1 + 0x38)) -
                                   (param_2 & 0xffff)) + (param_4 & 0xffff)) -
                    (float10)*(float *)(param_1 + 0x38));
    *(undefined2 *)(param_1 + 0x7c) = (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0));
  }
  uVar1 = *(uint *)(param_1 + 0x84);
  uVar6 = (uint)*(ushort *)(param_1 + 0x7e);
  uVar2 = uVar1 >> 0x10 & 1;
  if (uVar2 == 0) {
    if ((uVar1 & 0x40000) != 0) {
      F_00559950(param_1 GEN_EDX_ARG,((float)GEN_TOF(((float10)(int)((param_5 & 0xffff) - (param_3 & 0xffff)) +
                                  (float10)*(float *)(param_1 + 0x3c)))));
      goto LAB_0057f39c;
    }
  }
  else if ((uVar1 & 0x40000) != 0) {
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x4)) + 0)) =
         (undefined2)
         (int)TRUNC((float10)(int)((param_5 & 0xffff) -
                                  ((param_3 & 0xffff) -
                                  (int)((float10)uVar6 + (float10)*(float *)(param_1 + 0x3c)))) -
                    (float10)*(float *)(param_1 + 0x3c));
    *(undefined2 *)(param_1 + 0x7e) = (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x4)) + 0));
    goto LAB_0057f39c;
  }
  if (uVar2 == 0) {
    F_00559950(param_1 GEN_EDX_ARG,((float)GEN_TOF(((float10)*(float *)(param_1 + 0x3c) * (float10)(*(float *)(gen_frame + 0x4))))));
  }
LAB_0057f39c: ;
  if (999 < *(ushort *)(param_1 + 0x18)) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x7e);
    uVar7 = (uint)*(ushort *)(param_1 + 0x7c);
    uVar9 = 0;
    uVar1 = uVar5;
    uVar2 = uVar6;
    uVar4 = F_00578ee0(((undefined *)GEN_TOP((*(int *)(param_1 + 0x8c) + 4))) GEN_EDX_ARG,0);
    F_0057f1a0(uVar4,uVar1,uVar2,uVar7,uVar3,uVar9);
  }
  if (*(uint *)(param_1 + 0x14) != 0) {
    F_0057f1a0(*(uint *)(param_1 + 0x14),uVar5,uVar6,(uint)*(ushort *)(param_1 + 0x7c),
                 (uint)*(ushort *)(param_1 + 0x7e),0);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    for (uVar6 = *(uint *)(param_1 + 0xc); uVar6 != 0; uVar6 = *(uint *)(uVar6 + 0xc)) {
      F_0057f1a0(uVar6,param_2,param_3,param_4,param_5,0);
    }
  }
  return 0;
}

/* ref: FUN_0057f460 */
GEN_NOFRAME uint GEN_THISCALL F_0057f460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57f460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 0x48);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x50) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  iVar1 = *(int *)((int)this + 0x38);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0x40) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  return uVar2;
}

/* ref: FUN_0057f4c0 */
GEN_FRAME uint F_0057f4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57f4c0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = F_0057f1a0(param_1,(uint)*(ushort *)(param_1 + 0x7c),(uint)*(ushort *)(param_1 + 0x7e),
                       param_2,param_3,1);
  return uVar1;
}

/* ref: FUN_0057f4f0 */
GEN_FRAME uint GEN_THISCALL F_0057f4f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x57f4f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_00578ee0(param_1 GEN_EDX_FWD,0);
  uVar1 = F_0055d7f0(param_1 GEN_EDX_ARG,uVar1,param_2);
  return uVar1;
}

/* ref: FUN_0057f520 */
GEN_FRAME uint GEN_THISCALL F_0057f520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57f520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[32])REFP(0x10a0f54));
  F_00a4b300((undefined *)((int)this + 4) GEN_EDX_FWD,0x100);
  puVar2 = (uint *)((int)this + 0x18);
  local_8 = 0xc;
  do {
    puVar2[1] = 0;
    uVar1 = F_004296a0(0xc,0,400);
    *puVar2 = uVar1;
    *(uint *)uVar1 = uVar1;
    uVar1 = *puVar2;
    puVar2 = puVar2 + 3;
    local_8 = local_8 - 1;
    *(uint *)(uVar1 + 4) = uVar1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0xb8) = 0;
  uVar1 = F_004296a0(0xc,0,400);
  *(uint *)((int)this + 0xb4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0xb4) + 4))) = *(int *)((int)this + 0xb4);
  *(undefined4 *)((int)this + 0xc4) = 0;
  uVar1 = F_004296a0(0xc,0,400);
  *(uint *)((int)this + 0xc0) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0xc0) + 4))) = *(int *)((int)this + 0xc0);
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x100) = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  F_00a4b410((undefined *)((int)this + 4) GEN_EDX_ARG,0);
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined2 *)((int)this + 0x118) = 1;
  if ((undefined4 *)((int)this + 0x100) != (undefined4 *)0x0) {
    *(uint *)((int)this + 0x184) = *(uint *)((int)this + 0x184) | 0x4000000;
  }
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined2 *)((int)this + 0x1ac) = 0;
  return (uint)this;
}

/* ref: FUN_0057f6a0 */
GEN_FRAME unsigned int GEN_THISCALL F_0057f6a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57f6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  iVar5 = 0xc;
  if ((*(byte *)((int)this + 0x1b0) & 4) != 0) {
    piVar4 = (int *)((int)this + 0xa8);
    do {
      puVar1 = (undefined4 *)*piVar4;
      for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
        piVar3 = (int *)puVar2[2];
        if ((((*(byte *)(piVar3 + 0x3e) & 0x10) != 0) && ((*(byte *)(piVar3 + 0x3e) & 4) != 0)) &&
           (((*(ushort *)((int)piVar3 + 0x126) & 0xfff) == 0 && (((uint)piVar3[0x48] >> 4 & 1) != 0)
            ))) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x9c))(piVar3 GEN_EDX_FWD);
        }
      }
      piVar4 = piVar4 - 3;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
    return;
  }
  piVar4 = (int *)((int)this + 0xa8);
  do {
    puVar1 = (undefined4 *)*piVar4;
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      piVar3 = (int *)puVar2[2];
      if ((((*(byte *)(piVar3 + 0x3e) & 0x10) != 0) && ((*(byte *)(piVar3 + 0x3e) & 4) != 0)) &&
         ((*(ushort *)((int)piVar3 + 0x126) & 0xfff) == 0)) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x9c))(piVar3 GEN_EDX_ARG);
      }
    }
    piVar4 = piVar4 - 3;
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  return;
}

/* ref: FUN_0057f790 */
GEN_FRAME uint GEN_THISCALL F_0057f790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57f790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 in_EAX = 0;
  byte bVar3;
  int * piVar4;
  uint local_c;
  ushort * local_8;
  
  bVar3 = *(byte *)((int)this + 0x1b0);
  local_c = CONCAT31((int3)((uint)in_EAX >> 8),bVar3);
  if ((bVar3 & 1) != 0) {
    *(byte *)((int)this + 0x1b0) = bVar3 & 0xfe;
    local_8 = (ushort *)((int)this + 0x1ac);
    bVar3 = 10;
    local_c = 0xc;
    piVar4 = (int *)((int)this + 0xa8);
    do {
      *local_8 = (ushort)bVar3;
      puVar1 = (undefined4 *)*piVar4;
      for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
        *(ushort *)(puVar2[2] + 0x128) = (ushort)bVar3;
        bVar3 = bVar3 + 1;
      }
      local_8 = local_8 - 1;
      local_c = local_c - 1;
      piVar4 = piVar4 - 3;
    } while (-1 < (int)local_c);
  }
  return local_c;
}

/* ref: FUN_0057f810 */
GEN_FRAME uint GEN_THISCALL F_0057f810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57f810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 0xb4)) {
      return 0;
    }
    if (*(byte *)(puVar1[2] + 0x13a) == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[2];
}

/* ref: FUN_0057f860 */
GEN_FRAME uint GEN_THISCALL F_0057f860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57f860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined4 * puVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  bool bVar6;
  
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
  do {
    if (puVar2 == *(undefined4 * PTR32 *)((int)this + 0xb4)) {
      return 0;
    }
    pbVar3 = (byte *)(puVar2[2] + 4);
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0057f8a0: ;
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0057f8a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0057f8a0;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0057f8a5: ;
    if (iVar4 == 0) {
      return puVar2[2];
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

/* ref: FUN_0057f8d0 */
GEN_FRAME uint GEN_THISCALL F_0057f8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57f8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
  do {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 0xb4)) {
      return 0;
    }
    iVar3 = param_1;
    iVar2 = *(int *)(puVar1[2] + 0x90);
    while (iVar2 != 0) {
      if (iVar3 == *(int *)(puVar1[2] + 0x90)) {
        return puVar1[2];
      }
      iVar3 = *(int *)(iVar3 + 8);
      iVar2 = iVar3;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

/* ref: FUN_0057f930 */
GEN_FRAME uint GEN_THISCALL F_0057f930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57f930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
  while( true ) {
    if (puVar2 == *(undefined4 * PTR32 *)((int)this + 0xb4)) {
      return 0;
    }
    cVar1 = *(char *)(puVar2[2] + 0x13d);
    if ((cVar1 != '\0') &&
       ((cVar1 == *(char *)(param_1 + 0x13a) || (cVar1 == *(char *)(param_1 + 0x13c))))) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return puVar2[2];
}

/* ref: Component::GUI2::AtkUnitManager::vf7 */
GEN_FRAME uint GEN_THISCALL F_0057f990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x57f990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * this_00;
  uint uVar3;
  undefined * pAVar4;
  int local_8;
  
  pAVar4 = this + 0xa8;
  local_8 = 0xc;
  do {
    if (*(int *)(pAVar4 + 4) != 0) {
      puVar1 = *(undefined4 * PTR32 *)pAVar4;
      for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
        this_00 = (int *)puVar2[2];
        if (((((*(byte *)((int)this_00 + 0xfb) & 0x80) == 0) &&
             (((uVar3 = (uint)this_00[0x3d] >> 0x14 & 0xf, uVar3 == 3 || (uVar3 == 2)) &&
              ((*(ushort *)((int)this_00 + 0x126) & 0xfff) == 0)))) &&
            (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xa8))(this_00 GEN_EDX_FWD,param_2,param_3), (char)uVar3 != '\0'))
           && ((uVar3 = F_005791d0(this_00 GEN_EDX_ARG,param_2,param_3),
               (*(byte *)((int)this_00 + 0xfb) & 0x40) == 0 ||
               (((this_00[0x25] != 0 && (uVar3 != 0)) && (this_00[0x25] != uVar3)))))) {
          *param_1 = this_00;
          param_1[1] = uVar3;
          return uVar3;
        }
      }
    }
    local_8 = local_8 - 1;
    pAVar4 = pAVar4 - 0xc;
    if (local_8 < 0) {
      return (uint)pAVar4;
    }
  } while( true );
}

/* ref: FUN_0057fa80 */
GEN_FRAME byte GEN_THISCALL F_0057fa80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57fa80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if ((((param_1 != 0) && ((*(byte *)(param_1 + 0xf8) & 0x10) == 0)) &&
      (iVar1 = (*(ushort *)(param_1 + 0xf6) & 0xf) * 3 + 6, *(int *)((int)this + iVar1 * 4 + 4) != 0
      )) && (*((int *)GEN_TOP((**(int * PTR32 *)((int)this + iVar1 * 4) + 8))) == param_1)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0057fac0 */
GEN_FRAME uint GEN_THISCALL F_0057fac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57fac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if ((param_1 != (int *)0x0) && ((*(int *)&gen_a2) != 0)) {
    uVar1 = F_00a4b3a0((undefined *)((int)this + 4) GEN_EDX_FWD);
    if (uVar1 != 0) {
      uVar2 = F_0057f810(this GEN_EDX_ARG,uVar1);
      if (uVar2 == 0) {
        *(char *)((int)param_1 + 0x13a) = (char)uVar1;
        F_00c49908(param_1 + 1,0x20,(*(int *)&gen_a2));
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_ARG,param_1);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_ARG,param_1);
        ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xac))(param_1 GEN_EDX_ARG,(int)(short)param_1[0x4e],param_1[0x38]);
        ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x90))(param_1 GEN_EDX_ARG);
        param_1[0x3d] = param_1[0x3d] & 0xff1fffffU | 0x100000;
        *(undefined1 *)(param_1 + 0x3d) = 1;
        return (uint)*(byte *)((int)param_1 + 0x13a);
      }
    }
    return 0;
  }
  return 0;
}

/* ref: Component::GUI2::AtkUnitManager::vf8 */
GEN_FRAME byte GEN_THISCALL F_0057fb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57fb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    for (puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)(this + 0xb4)));
        puVar1 != *(undefined4 * PTR32 *)(this + 0xb4); puVar1 = (undefined4 *)*puVar1) {
      if (*(byte *)(puVar1[2] + 0x13a) == param_1) {
        if ((int *)puVar1[2] == (int *)0x0) {
          return 0;
        }
        iVar2 = *(int *)puVar1[2];
        if ((char)param_2 == '\0') {
          ((code *)*(gen_code32 *)(iVar2 + 0x18))(0,0);
          return 1;
        }
        ((code *)*(gen_code32 *)(iVar2 + 0x14))(0);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkUnitManager::vf9 */
GEN_FRAME uint GEN_THISCALL F_0057fc00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57fc00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    piVar1 = *(int * PTR32 *)(this + 0xb4);
    piVar2 = (int *)*piVar1;
    if (piVar2 != piVar1) {
      while (*(byte *)(piVar2[2] + 0x13a) != param_1) {
        piVar2 = (int *)*piVar2;
        if (piVar2 == piVar1) {
          return 0;
        }
      }
      if (piVar2[2] != 0) {
        uVar3 = *(uint *)(piVar2[2] + 0xf4) >> 0x14 & 0xf;
        if ((uVar3 != 3) && (uVar3 != 2)) {
          return 8;
        }
        return 4;
      }
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkUnitManager::vf11 */
GEN_FRAME unsigned int GEN_THISCALL F_0057fc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x57fc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    piVar1 = *(int * PTR32 *)(this + 0xb4);
    piVar2 = (int *)*piVar1;
    if (piVar2 != piVar1) {
      while (*(byte *)(piVar2[2] + 0x13a) != param_1) {
        piVar2 = (int *)*piVar2;
        if (piVar2 == piVar1) {
          return;
        }
      }
      piVar1 = (int *)piVar2[2];
      if ((piVar1 != (int *)0x0) &&
         ((((char)param_4 != '\0' || (((byte)((uint)piVar1[0x3d] >> 0x14) & 0xf) != 5)) ||
          ((*(byte *)((int)piVar1 + 0xfa) & 0x10) != 0)))) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xbc))(piVar1 GEN_EDX_FWD,param_2,param_3);
      }
    }
  }
  return;
}

/* ref: Component::GUI2::AtkUnitManager::vf12 */
GEN_FRAME uint GEN_THISCALL F_0057fd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x57fd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    for (puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)(this + 0xb4)));
        puVar1 != *(undefined4 * PTR32 *)(this + 0xb4); puVar1 = (undefined4 *)*puVar1) {
      if (*(byte *)(puVar1[2] + 0x13a) == param_1) {
        piVar2 = (int *)puVar1[2];
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc0))(piVar2 GEN_EDX_FWD,param_2,param_3);
        return uVar3;
      }
    }
  }
  return 0;
}

/* ref: FUN_0057fd70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0057fd70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x57fd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if ((*(byte *)((int)this + 0x1b0) & 8) != 0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0xb4);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)puVar2[2] + 0x7c))((int *)puVar2[2] GEN_EDX_FWD,0);
    }
  }
  return;
}

/* ref: FUN_0057fda0 */
GEN_FRAME unsigned int GEN_THISCALL F_0057fda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57fda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  if (param_1 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xb4);
    piVar3 = (int *)*piVar1;
    if (piVar3 != piVar1) {
      while (*(byte *)(piVar3[2] + 0x13a) != param_1) {
        piVar3 = (int *)*piVar3;
        if (piVar3 == piVar1) {
          return;
        }
      }
      iVar2 = piVar3[2];
      if (iVar2 != 0) {
        *(byte *)(iVar2 + 0xf9) = *(byte *)(iVar2 + 0xf9) | 4;
        *(undefined1 *)(iVar2 + 0x13b) = (undefined1)param_2;
      }
    }
  }
  return;
}

/* ref: FUN_0057fe00 */
GEN_FRAME unsigned int GEN_THISCALL F_0057fe00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x57fe00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int * piVar5;
  uint in_ecx;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xb4);
  piVar5 = (int *)*piVar1;
  if (piVar5 == piVar1) {
    return;
  }
  while (*(byte *)(piVar5[2] + 0x13a) != param_1) {
    piVar5 = (int *)*piVar5;
    if (piVar5 == piVar1) {
      return;
    }
  }
  iVar2 = piVar5[2];
  if (iVar2 == 0) {
    return;
  }
  bVar4 = false;
  if ((*(char *)(iVar2 + 0x10c) == '2') && ((*(int *)&gen_a3) == 0x50)) {
    bVar4 = true;
  }
  if ((*(byte *)(iVar2 + 0xfb) & 1) == 0) {
    if (((*(byte *)(iVar2 + 0x13c) != 0) && ((*(byte *)(iVar2 + 0xfb) & 2) == 0)) &&
       (in_ecx = F_0057f810(this GEN_EDX_FWD,(uint)*(byte *)(iVar2 + 0x13c)), in_ecx != 0)) {
      if ((*(char *)(in_ecx + 0x10c) == '2') && ((*(int *)&gen_a3) == 0x50)) {
        bVar4 = true;
      }
      if ((char)param_2 == '\0') {
        F_005b8b40(in_ecx GEN_EDX_ARG);
        *(ushort *)(in_ecx + 0x126) = *(ushort *)(in_ecx + 0x126) & 0xfffd;
        goto LAB_0057ff56;
      }
      *(char *)(in_ecx + 0x10d) = *(char *)(in_ecx + 0x10d) + '\x01';
      if (bVar4) {
        *(ushort *)(in_ecx + 0x126) = *(ushort *)(in_ecx + 0x126) | 2;
      }
    }
  }
  else {
    for (piVar5 = (int *)*piVar1; piVar5 != piVar1; piVar5 = (int *)*piVar5) {
      iVar3 = piVar5[2];
      if (((iVar3 != iVar2) && (*(byte *)(iVar3 + 0x13c) == param_1)) &&
         ((*(byte *)(iVar3 + 0xfb) & 2) == 0)) {
        if ((char)param_2 == '\0') {
          if ('\0' < *(char *)(iVar3 + 0x10d)) {
            *(char *)(iVar3 + 0x10d) = *(char *)(iVar3 + 0x10d) - 1;
          }
          *(ushort *)(iVar3 + 0x126) = *(ushort *)(iVar3 + 0x126) & 0xfffd;
        }
        else {
          *(char *)(iVar3 + 0x10d) = *(char *)(iVar3 + 0x10d) + '\x01';
          if (bVar4) {
            *(ushort *)(iVar3 + 0x126) = *(ushort *)(iVar3 + 0x126) | 2;
          }
        }
      }
    }
  }
  if ((char)param_2 != '\0') {
    *(char *)(iVar2 + 0x10d) = *(char *)(iVar2 + 0x10d) + '\x01';
    if (!bVar4) {
      return;
    }
    *(ushort *)(iVar2 + 0x126) = *(ushort *)(iVar2 + 0x126) | 2;
    return;
  }
LAB_0057ff56: ;
  if ('\0' < *(char *)(iVar2 + 0x10d)) {
    *(char *)(iVar2 + 0x10d) = *(char *)(iVar2 + 0x10d) - 1;
  }
  *(ushort *)(iVar2 + 0x126) = *(ushort *)(iVar2 + 0x126) & 0xfffd;
  return;
}

/* ref: FUN_0057ff80 */
GEN_FRAME unsigned int GEN_THISCALL F_0057ff80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57ff80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte * pbVar1;
  int * piVar2;
  int * piVar3;
  
  if (param_1 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0xb4);
    piVar3 = (int *)*piVar2;
    if (piVar3 != piVar2) {
      while (*(byte *)(piVar3[2] + 0x13a) != param_1) {
        piVar3 = (int *)*piVar3;
        if (piVar3 == piVar2) {
          return;
        }
      }
      if (piVar3[2] != 0) {
        pbVar1 = (byte *)(piVar3[2] + 0xfa);
        *pbVar1 = *pbVar1 | 0x80;
      }
    }
  }
  return;
}

/* ref: FUN_0057ffd0 */
GEN_FRAME byte GEN_THISCALL F_0057ffd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x57ffd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  if (*(int *)((int)this + 0xf4) - *(int *)((int)this + 0xf0) >> 2 == 0) {
    return 1;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xf0);
  do {
    if (piVar1 == *(int * PTR32 *)((int)this + 0xf4)) {
LAB_00580034: ;
      return 1 - (*(int *)((int)this + 0xf4) - *(int *)((int)this + 0xf0) >> 2 != 0);
    }
    if (*piVar1 == param_1) {
      F_00c46e20(piVar1,piVar1 + 1,(*(int *)((int)this + 0xf4) - (int)(piVar1 + 1) >> 2) * 4);
      *(int *)((int)this + 0xf4) = *(int *)((int)this + 0xf4) - 4;
      goto LAB_00580034;
    }
    piVar1 = piVar1 + 1;
  } while( true );
}

/* ref: FUN_00580050 */
GEN_FRAME byte GEN_THISCALL F_00580050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x580050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  if (param_1 != 0) {
    for (puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
        puVar1 != *(undefined4 * PTR32 *)((int)this + 0xb4); puVar1 = (undefined4 *)*puVar1) {
      if (*(byte *)(puVar1[2] + 0x13a) == param_1) {
        if (puVar1[2] == 0) {
          return 0;
        }
        return *(byte *)(puVar1[2] + 0xf9) & 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005800a0 */
GEN_FRAME byte GEN_THISCALL F_005800a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5800a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  byte bVar2;
  int * piVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xb4);
  piVar3 = (int *)*piVar1;
  bVar2 = 1;
  if (piVar3 != piVar1) {
    while ((*(byte *)(piVar3[2] + 0x13b) != param_1 || ((*(byte *)(piVar3[2] + 0xf9) & 1) != 0))) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar1) {
        return bVar2;
      }
    }
    bVar2 = 0;
  }
  return bVar2;
}

/* ref: FUN_005800f0 */
GEN_FRAME byte GEN_THISCALL F_005800f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5800f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int * in_ecx;
  byte bVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    for (puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
        puVar1 != *(undefined4 * PTR32 *)((int)this + 0xb4); puVar1 = (undefined4 *)*puVar1) {
      if (*(byte *)(puVar1[2] + 0x13a) == param_1) {
        in_ecx = (int *)puVar1[2];
        if (in_ecx == (int *)0x0) {
          return 0;
        }
        if ((*(byte *)((int)in_ecx + 0xf9) & 1) == 0) {
          return 0;
        }
        if ((*(byte *)(in_ecx + 0x3e) & 0x80) != 0) {
          return 0;
        }
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0x74))(in_ecx GEN_EDX_FWD);
        if ((char)uVar3 != '\0') {
          return 0;
        }
        bVar2 = F_005b89f0(in_ecx GEN_EDX_ARG);
        if (bVar2 == 0) {
          return 0;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0x8c))(in_ecx GEN_EDX_ARG);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00580170 */
GEN_FRAME byte GEN_THISCALL F_00580170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x580170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    for (puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
        puVar1 != *(undefined4 * PTR32 *)((int)this + 0xb4); puVar1 = (undefined4 *)*puVar1) {
      if (*(byte *)(puVar1[2] + 0x13a) == param_1) {
        iVar2 = puVar1[2];
        if (iVar2 == 0) {
          return 0;
        }
        if ((char)param_2 == '\0') {
          *(uint *)(iVar2 + 0x120) = *(uint *)(iVar2 + 0x120) & 0xffffefff;
          return 1;
        }
        *(uint *)(iVar2 + 0x120) = *(uint *)(iVar2 + 0x120) | 0x1000;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005801e0 */
GEN_FRAME uint GEN_THISCALL F_005801e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5801e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xb4);
  puVar2 = (undefined4 *)*puVar1;
  uVar3 = 0;
  do {
    if (puVar2 == puVar1) {
      return uVar3;
    }
    if (*(byte *)(puVar2[2] + 0x13b) == param_2) {
      if (param_3 <= (int)uVar3) {
        return uVar3;
      }
      *(undefined4 *)(param_1 + uVar3 * 4) = puVar2[2];
      uVar3 = uVar3 + 1;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

/* ref: FUN_00580230 */
GEN_FRAME uint GEN_THISCALL F_00580230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x580230u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  char cVar2;
  int * piVar3;
  uint in_EAX = 0;
  uint3 extraout_var = 0;
  uint uVar4;
  int * piVar5;
  
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    return in_EAX;
  }
  if ((char)(*(undefined * PTR32 *)&gen_args[2]) != '\0') {
    F_005730d0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_FWD);
    in_EAX = (uint)extraout_var << 8;
  }
  bVar1 = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0xfb)));
  uVar4 = CONCAT31((int3)(in_EAX >> 8),bVar1);
  if ((bVar1 & 1) == 0) {
    cVar2 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x13c)));
    if (((cVar2 == '\0') || ((bVar1 & 2) != 0)) ||
       (uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x120))) >> 10, (uVar4 & 1) != 0)) goto LAB_005802ea;
  }
  else {
    cVar2 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x13a)));
  }
  if (cVar2 != '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
    piVar5 = (int *)*piVar3;
    if (piVar5 == piVar3) {
      return uVar4;
    }
    do {
      uVar4 = piVar5[2];
      if ((((*(char *)(uVar4 + 0x13c) != '\0') && ((*(byte *)(uVar4 + 0xfb) & 2) == 0)) &&
          (*(char *)(uVar4 + 0x13c) == cVar2)) ||
         (((*(byte *)(uVar4 + 0xfb) & 1) != 0 && (*(char *)(uVar4 + 0x13a) == cVar2)))) {
        (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)uVar4;
        uVar4 = F_005c4950(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[2]));
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != piVar3);
    return uVar4;
  }
LAB_005802ea: ;
  (*(undefined * PTR32 *)&gen_args[2]) = (*(undefined * PTR32 *)&gen_args[1]);
  uVar4 = F_005c4950(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[2]));
  return uVar4;
}

/* ref: FUN_00580310 */
GEN_FRAME byte GEN_THISCALL F_00580310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x580310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc0)));
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 0xc0)) {
      return 0;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}

/* ref: FUN_00580360 */
GEN_FRAME uint GEN_THISCALL F_00580360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x580360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  bool bVar6;
  uint local_8;
  
  *param_2 = 0;
  local_8 = 0;
  *param_3 = 0;
  puVar4 = (uint *)0x0;
  if (param_1 != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + ((*(ushort *)(param_1 + 0xf6) & 0xf) * 3 + 6) * 4)));
    puVar2 = (undefined4 *)*puVar1;
    bVar6 = false;
    uVar3 = 0;
    while ((uVar5 = local_8, puVar2 != puVar1 &&
           (uVar5 = (uint)*(byte *)(puVar2[2] + 0x13a), !bVar6))) {
      bVar6 = uVar5 == *(byte *)(param_1 + 0x13a);
      if (bVar6) {
        uVar5 = uVar3;
      }
      puVar2 = (undefined4 *)*puVar2;
      uVar3 = uVar5;
    }
    local_8 = uVar5;
    *param_2 = uVar3;
    *param_3 = local_8;
    puVar4 = param_3;
  }
  return (uint)puVar4;
}

/* ref: FUN_005803e0 */
GEN_FRAME uint GEN_THISCALL F_005803e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5803e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint in_EAX = 0;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    in_EAX = puVar2[2];
    if (*(char *)(in_EAX + 0x13c) == '\0') {
      if (((*(uint *)&gen_args[1]) != 0) && ((*(uint *)(in_EAX + 0x108) & (*(uint *)&gen_args[1])) != 0)) {
        if ((char)(*(undefined4 *)&gen_args[4]) == '\0') {
          *(ushort *)(in_EAX + 0x126) = *(ushort *)(in_EAX + 0x126) & ~(ushort)(*(undefined4 *)&gen_args[3]);
        }
        else {
          *(ushort *)(in_EAX + 0x126) = *(ushort *)(in_EAX + 0x126) | (ushort)(*(undefined4 *)&gen_args[3]);
        }
      }
      if (((*(uint *)&gen_args[2]) != 0) && ((*(uint *)(in_EAX + 0x120) & (*(uint *)&gen_args[2])) != 0)) {
        if ((char)(*(undefined4 *)&gen_args[4]) == '\0') {
          *(ushort *)(in_EAX + 0x126) = *(ushort *)(in_EAX + 0x126) & ~(ushort)(*(undefined4 *)&gen_args[3]);
        }
        else {
          *(ushort *)(in_EAX + 0x126) = *(ushort *)(in_EAX + 0x126) | (ushort)(*(undefined4 *)&gen_args[3]);
        }
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00580470 */
GEN_FRAME uint GEN_THISCALL F_00580470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x580470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar3 = (int *)*piVar1;
  uVar2 = 0;
  if (piVar3 != piVar1) {
    while (uVar2 = piVar3[2], *(int *)(uVar2 + 0x1c) != param_1) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar1) {
        return 0;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_005804a0 */
GEN_NOFRAME uint GEN_THISCALL F_005804a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5804a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0x10) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return uVar2;
}

/* ref: FUN_005804e0 */
GEN_FRAME uint GEN_THISCALL F_005804e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5804e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != *(int * PTR32 *)((int)this + 0xc)) {
    while (param_1 != *piVar1) {
      piVar1 = piVar1 + 1;
      if (piVar1 == *(int * PTR32 *)((int)this + 0xc)) {
        return (uint)piVar1;
      }
    }
    piVar1 = (int *)F_00c46e20(piVar1,piVar1 + 1,
                               (*(int *)((int)this + 0xc) - (int)(piVar1 + 1) >> 2) * 4);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) - 4;
  }
  return (uint)piVar1;
}

/* ref: FUN_00580530 */
GEN_FRAME uint GEN_THISCALL F_00580530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x580530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (*(int *)((int)this + 0x34) != 0) {
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0x94) = 0;
    *(undefined4 *)((int)this + 0x9c) = 0;
    uVar2 = (uint)*(byte *)(param_3 + 0xb);
    if (*(byte *)(param_3 + 0xb) == 0) {
      uVar2 = 10000;
    }
    *(uint *)((int)this + 0xa0) = uVar2;
    *(uint *)((int)this + 0xa4) = (uint)*(ushort *)(param_3 + 6);
    *(uint *)((int)this + 0xa8) = (uint)*(byte *)(param_3 + 0xc);
    uVar2 = (uint)*(ushort *)(param_3 + 4);
    if (*(ushort *)(param_3 + 4) == 0) {
      uVar2 = 60000;
    }
    *(uint *)((int)this + 0xbc) = uVar2;
    uVar2 = (uint)*(ushort *)(param_3 + 0xe);
    if (*(ushort *)(param_3 + 0xe) == 0) {
      uVar2 = 0x7fffffff;
    }
    *(uint *)((int)this + 0xc0) = uVar2;
    *(undefined4 *)((int)this + 0xc4) = 0;
    F_0042aca0((int)this + 0xcc GEN_EDX_FWD);
    *(undefined * PTR32 *)((int)this + 200) = param_1;
    *(undefined1 *)((int)this + 0xac) = 1;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0xc))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG)));
    *(bool *)((int)this + 0xad) = 3 < *piVar3;
    *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)this + 0xa8);
    *(uint *)((int)this + 0xb4) = (uint)*(byte *)(param_3 + 0xd);
    F_005796e0(this GEN_EDX_ARG,param_3,param_4);
    uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
    uVar2 = F_00579d40(this GEN_EDX_ARG,uVar2);
    iVar1 = *(int *)((int)this + 0x38);
    if (iVar1 != 0) {
      if ((char)param_4 == '\0') {
        puVar5 = (undefined4 *)(iVar1 + 0xa8);
        puVar6 = (undefined4 *)(iVar1 + 100);
        for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      *(undefined4 *)((int)this + 0x38) = 0;
    }
    F_0042e360(param_1 GEN_EDX_ARG,(int)this + 0xcc);
    *(int *)((int)this + 0x9c) = *(int *)((int)this + 0x9c) + 1;
    if (-1 < (int)uVar2) {
      uVar2 = *(uint *)((int)this + 0x9c);
    }
    return uVar2;
  }
  return 0xffffd8f0;
}

/* ref: FUN_00580670 */
GEN_FRAME byte GEN_THISCALL F_00580670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x580670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  undefined * pvVar9;
  undefined4 * puVar10;
  float fVar11;
  undefined * PTR32 * ppvVar12;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = param_1;
  (*(undefined1 *)(gen_frame + 0x15)) = *(undefined1 *)(param_3 + 9);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = param_2;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined1 *)(gen_frame + 0x14)) = *(undefined1 *)(param_3 + 8);
  pvVar9 = (undefined *)((int)this + 0x2a8);
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  (*(undefined2 *)(gen_frame + 0x10)) = 0xffff;
  (*(undefined2 *)(gen_frame + 0x12)) = 0xffff;
  (*(undefined2 *)(gen_frame + 0x16)) = 0xff01;
  (*(undefined2 *)(gen_frame + 0x1a)) = 0xffff;
  F_0042aca0(pvVar9 GEN_EDX_FWD);
  uVar2 = F_00580530(this GEN_EDX_ARG,pvVar9,(*(undefined * PTR32 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0xc)),param_4);
  if ((int)uVar2 < 0) {
    pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x20));
  }
  F_005796e0(this GEN_EDX_ARG,param_3,param_4);
  uVar2 = (uint)*(ushort *)(param_3 + 0xe);
  uVar4 = (uint)*(ushort *)(param_3 + 4);
  ppvVar12 = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  uVar3 = F_0042a990(pvVar9 GEN_EDX_ARG);
  F_005797b0(this GEN_EDX_ARG,uVar3,uVar4,uVar2,ppvVar12);
  uVar2 = F_0042a970(pvVar9 GEN_EDX_ARG);
  if ((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) < (int)uVar2) {
    fVar11 = F_00576700(*(undefined * PTR32 *)((int)this + 0x38) GEN_EDX_ARG,
                          *((undefined4 *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x38) + 0x14c))),0,REFG(undefined4, 0x108cc50))
    ;
    uVar3 = (uint)*(ushort *)(param_3 + 0xe);
    ppvVar12 = &(*(undefined * PTR32 *)(gen_frame + 0x20));
    iVar5 = (uint)*(ushort *)(param_3 + 4) - (int)fVar11;
    uVar2 = F_0042a990(pvVar9 GEN_EDX_ARG);
    F_005797b0(this GEN_EDX_ARG,uVar2,iVar5,uVar3,ppvVar12);
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x20));
    if (0 < (int)(*(undefined * PTR32 *)(gen_frame + 0x20))) {
      uVar2 = F_0042a990(pvVar9 GEN_EDX_ARG);
      cVar1 = *((char *)GEN_TOP(((uVar2 - 1) + (int)pvVar7)));
      while ((cVar1 == ' ' && (0 < (int)pvVar7))) {
        pvVar7 = (undefined *)((int)pvVar7 - 1);
        uVar2 = F_0042a990(pvVar9 GEN_EDX_ARG);
        cVar1 = *((char *)GEN_TOP(((uVar2 - 1) + (int)pvVar7)));
      }
    }
    uVar2 = F_0042d2c0(pvVar9 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x24)),0,pvVar7);
    pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
    F_0042d540(pvVar9 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x38) + 0x14c))));
    iVar5 = *(int *)((int)this + 0x38);
    if (iVar5 != 0) {
      if ((char)param_4 == '\0') {
        puVar8 = (undefined4 *)(iVar5 + 0xa8);
        puVar10 = (undefined4 *)(iVar5 + 100);
        for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      *(undefined4 *)((int)this + 0x38) = 0;
    }
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return 0;
  }
  F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,pvVar9);
  iVar5 = *(int *)((int)this + 0x38);
  if (iVar5 != 0) {
    if ((char)param_4 == '\0') {
      puVar8 = (undefined4 *)(iVar5 + 0xa8);
      puVar10 = (undefined4 *)(iVar5 + 100);
      for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00580840 */
GEN_FRAME uint GEN_THISCALL F_00580840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x580840u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar2 = (*(uint *)&gen_args[2]);
  F_005796e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)&gen_args[2]),0);
  F_005797b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(uint)*(ushort *)(uVar2 + 4),(uint)*(ushort *)(uVar2 + 0xe),&(*(uint *)&gen_args[2]));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)(iVar1 + 0xa8);
    puVar5 = (undefined4 *)(iVar1 + 100);
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  }
  return (*(uint *)&gen_args[2]);
}

/* ref: FUN_005808a0 */
GEN_FRAME uint GEN_THISCALL F_005808a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5808a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar2 = (*(uint *)&gen_args[2]);
  F_005796e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)&gen_args[2]),0);
  F_005797b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(uint)*(ushort *)(uVar2 + 4),(uint)*(ushort *)(uVar2 + 0xe),&(*(uint *)&gen_args[2]));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)(iVar1 + 0xa8);
    puVar5 = (undefined4 *)(iVar1 + 100);
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  }
  return (*(uint *)&gen_args[2]);
}

/* ref: FUN_00580900 */
GEN_NOFRAME uint GEN_THISCALL F_00580900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x580900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005c8bd0((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x10),0,*(int *)((int)this + 0xc) * 4);
  *(undefined4 *)((int)this + 8) = 0;
  F_00a4b410(this GEN_EDX_ARG,0);
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x40) = 0xffffffff;
  return 0xffffffff;
}

/* ref: FUN_005809c0 */
GEN_FRAME uint GEN_THISCALL F_005809c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5809c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined * this_00;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  (*(uint *)(gen_frame + 0x198)) = uVar3;
  if (((*(int *)((int)this + 0xc) == 0) || (*(int *)((int)this + 0x10) == 0)) ||
     (*(int *)((int)this + 0x14) == 0)) {
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x19c) GEN_EDX_FWD);
    return 0;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x18)));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = this_00;
  if (this_00 == (undefined *)0x0) {
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x19c) GEN_EDX_ARG);
    return 0;
  }
  ((byte *)(gen_frame + 0x0))[0x14] = 0;
  ((byte *)(gen_frame + 0x0))[0x15] = 0;
  ((byte *)(gen_frame + 0x0))[0x16] = 0;
  ((byte *)(gen_frame + 0x0))[0x17] = 0;
  uVar3 = F_004d6dd0(this_00 GEN_EDX_ARG,0,((byte *)(gen_frame + 0x0)) + 4,2);
  if (uVar3 != 0) {
    iVar5 = *(int *)((int)this + 0xc);
    uVar3 = (uint)(*(ulonglong *)(iVar5 + 0x10) >> 0x20);
    ((byte *)(gen_frame + 0x0))[0] = 0;
    ((byte *)(gen_frame + 0x0))[1] = 0;
    ((byte *)(gen_frame + 0x0))[2] = 0;
    ((byte *)(gen_frame + 0x0))[3] = 0;
    F_00573b10(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x58)),(uVar3 >> 4 & 0xf) * 0x10 + (uVar3 & 0xf));
    bVar2 = F_0056c1b0(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_ARG,
                         (uint)((byte)((uint)*(undefined4 *)(iVar5 + 0x10) >> 8) & 0x3f));
    if (bVar2 != 0) {
      uVar3 = *(uint *)((int)this + 0x30);
      ((byte *)(gen_frame + 0x0))[0x14] = (char)uVar3;
      ((byte *)(gen_frame + 0x0))[0x15] = (char)(uVar3 >> 8);
      ((byte *)(gen_frame + 0x0))[0x16] = (char)(uVar3 >> 0x10);
      ((byte *)(gen_frame + 0x0))[0x17] = (char)(uVar3 >> 0x18);
      if (uVar3 < *(int *)((int)this + 0x34) + uVar3) {
        do {
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = uVar3;
          if (*(uint *)((int)this_00 + 0x1c) <= uVar3) break;
          F_00573bb0(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_ARG,((byte *)(gen_frame + 0x18)),uVar3);
          uVar1 = *(uint *)((int)this_00 + 0x18);
          uVar4 = 0;
          if (uVar1 != 0) {
            do {
              ((undefined4 *)(gen_frame + 0x98))[(int)(uVar4)] = ((undefined4 *)(gen_frame + 0x58))[(int)(((byte *)(gen_frame + 0x18))[(int)((int)(uVar4))] >> 4)];
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar1);
          }
          puVar6 = ((undefined4 *)(gen_frame + 0x98));
          puVar7 = ((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) * uVar3 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)))));
          for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) + 1;
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = uVar3;
          this_00 = (undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
        } while (uVar3 < (uint)(*(int *)((int)this + 0x30) + *(int *)((int)this + 0x34)));
      }
      *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + *(int *)((int)this + 0x34);
      F_0056c230(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_ARG);
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = 2 - (uint)(*(uint *)((int)this + 0x30) < *(uint *)((int)this_00 + 0x1c));
    }
    F_004d6e60(this_00 GEN_EDX_ARG,0);
  }
  (*(undefined1 *)((char *)&uVar3 + 0)) = ((byte *)(gen_frame + 0x0))[0x14];
  (*(undefined1 *)((char *)&uVar3 + 1)) = ((byte *)(gen_frame + 0x0))[0x15];
  (*(undefined1 *)((char *)&uVar3 + 2)) = ((byte *)(gen_frame + 0x0))[0x16];
  (*(undefined1 *)((char *)&uVar3 + 3)) = ((byte *)(gen_frame + 0x0))[0x17];
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00580b80 */
GEN_NOFRAME uint GEN_THISCALL F_00580b80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x580b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0fd8));
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0xc,0,400);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = F_004296a0(0xc,0,400);
  *(uint *)((int)this + 0x10) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  return (uint)this;
}

/* ref: FUN_00580bd0 */
GEN_FRAME byte GEN_THISCALL F_00580bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x580bd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_005c8b30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
}

/* ref: FUN_00580c00 */
GEN_FRAME uint GEN_THISCALL F_00580c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x580c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  char * pcVar2;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x14)));
  if (param_1 == 1) {
    pcVar2 = "Tooltip";
  }
  else {
    if (param_1 == 2) {
      uVar1 = F_0057f860(this_00 GEN_EDX_FWD,"ItemDetail");
      goto joined_r0x00580c2f;
    }
    if (param_1 != 3) {
      return 0;
    }
    pcVar2 = "ActionDetail";
  }
  uVar1 = F_0057f860(this_00 GEN_EDX_ARG,pcVar2);
joined_r0x00580c2f: ;
  if (uVar1 == 0) {
    return 0;
  }
  return uVar1 + 0x180;
}

/* ref: FUN_00580c50 */
GEN_FRAME uint GEN_THISCALL F_00580c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x580c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  char * pcVar6;
  int * piVar7;
  float fVar8;
  
  if (*(char *)((int)this + 0xe) == '\0') {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x6c))(piVar3 GEN_EDX_ARG);
    if ((char)uVar4 == '\0') {
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar4;
    }
  }
  iVar2 = *(int *)this;
  uVar4 = *((uint *)GEN_TOP((*(int *)(iVar2 + 0x14) + 0xcc)));
  if (*(uint *)((int)this + 4) != uVar4) {
    *(undefined4 *)((int)this + 8) = 0;
    if ((uVar4 == 0) || ((*(byte *)(uVar4 + 0xf9) & 1) == 0)) {
      *(undefined4 *)((int)this + 4) = 0;
      return uVar4 & 0xffffff00;
    }
    *(uint *)((int)this + 4) = uVar4;
    do {
      iVar5 = 0;
      pcVar6 = (char *)(uVar4 + 0x144);
      do {
        if (*pcVar6 != -1) goto LAB_00580cda;
        iVar5 = iVar5 + 1;
        pcVar6 = pcVar6 + 0xc;
      } while (iVar5 < 5);
      uVar4 = F_0057f810(*(undefined * PTR32 *)(iVar2 + 0x14) GEN_EDX_ARG,(uint)*(byte *)(uVar4 + 0x13c));
    } while (uVar4 != 0);
LAB_00580cda: ;
    *(uint *)((int)this + 8) = uVar4;
  }
  piVar3 = *(int * PTR32 *)((int)this + 8);
  if (piVar3 != (int *)0x0) {
    uVar4 = 0;
    piVar7 = piVar3 + 0x51;
    do {
      if ((char)*piVar7 != -1) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG,((short *)(gen_frame + 0x14)),((short *)(gen_frame + 0x10)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x48))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,((short *)(gen_frame + 0x18)),((short *)(gen_frame + 0xc)),0)
        ;
        uVar4 = *(uint *)((int)this + 8);
        (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
        if (*(int *)(uVar4 + 0x90) != 0) {
          (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP((*(int *)(uVar4 + 0x90) + 0x40)));
        }
        fVar8 = *(float *)(uVar4 + 0x118);
        fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x0)) / (float10)*(float *)(uVar4 + 0x118))));
        if ((((((short *)(gen_frame + 0x14))[0] == *(short *)((int)this + 0x10)) &&
             (((short *)(gen_frame + 0x10))[0] == *(short *)((int)this + 0x12))) &&
            (uVar4 = CONCAT22((short)(uVar4 >> 0x10),((short *)(gen_frame + 0x18))[0]),
            ((short *)(gen_frame + 0x18))[0] == *(short *)((int)this + 0x14))) &&
           (((short *)(gen_frame + 0xc))[0] == *(short *)((int)this + 0x16))) {
          uVar4 = F_005608a0(fVar8,*(float *)((int)this + 0x1c));
          if ((char)uVar4 != '\0') {
            uVar4 = F_005608a0(fVar1,*(float *)((int)this + 0x18));
            if ((char)uVar4 != '\0') goto LAB_00580df5;
          }
        }
        *(undefined1 *)((int)this + 0xd) = 1;
        *(short *)((int)this + 0x10) = ((short *)(gen_frame + 0x14))[0];
        *(short *)((int)this + 0x12) = ((short *)(gen_frame + 0x10))[0];
        *(short *)((int)this + 0x14) = ((short *)(gen_frame + 0x18))[0];
        *(short *)((int)this + 0x16) = ((short *)(gen_frame + 0xc))[0];
        *(float *)((int)this + 0x18) = fVar1;
        *(float *)((int)this + 0x1c) = fVar8;
LAB_00580df5: ;
        return CONCAT31((int3)(uVar4 >> 8),1);
      }
      uVar4 = uVar4 + 1;
      piVar7 = piVar7 + 3;
    } while ((int)uVar4 < 5);
  }
  return uVar4 & 0xffffff00;
}

/* ref: FUN_00580e00 */
GEN_NOFRAME uint GEN_THISCALL F_00580e00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x580e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  iVar1 = *(int *)(REFG(int, 0x1379860) + 0x24);
  piVar4 = *(int * PTR32 *)(iVar1 + 8);
  do {
    if (piVar4 == *(int * PTR32 *)(iVar1 + 0xc)) {
LAB_00580e4b: ;
      piVar2 = *(int * PTR32 *)((int)this + 4);
      *(undefined1 *)((int)this + 0x20) = 0;
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        while (iVar1 != 0) {
          iVar3 = *(int *)(iVar1 + 0x10);
          F_00406ad0(iVar1);
          iVar1 = iVar3;
        }
        *piVar2 = 0;
        piVar4 = (int *)F_00406ad0(piVar2);
        *(undefined4 *)((int)this + 4) = 0;
      }
      *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
      return (uint)piVar4;
    }
    if (this == (undefined *)*piVar4) {
      piVar4 = (int *)F_00c46e20(piVar4,piVar4 + 1,
                                 (*(int *)(iVar1 + 0xc) - (int)(piVar4 + 1) >> 2) * 4);
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) - 4;
      goto LAB_00580e4b;
    }
    piVar4 = piVar4 + 1;
  } while( true );
}

/* ref: FUN_00580ea0 */
GEN_NOFRAME uint GEN_THISCALL F_00580ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x580ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0ff0));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x10a0fe0));
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0xc,0,400);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = REFG(undefined4, 0x1379860);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0;
  return (uint)this;
}

/* ref: FUN_00580f60 */
GEN_FRAME unsigned int GEN_THISCALL F_00580f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x580f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    if (*(int *)(puVar2[2] + 4) != 0) {
      piVar3 = *(int * PTR32 *)(puVar2[2] + 4);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_FWD,param_1);
    }
  }
  return;
}

/* ref: FUN_00580fa0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00580fa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x580fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    if (*(int *)(puVar2[2] + 4) != 0) {
      piVar3 = *(int * PTR32 *)(puVar2[2] + 4);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 100))(piVar3 GEN_EDX_FWD);
    }
  }
  return;
}

/* ref: FUN_00580fd0 */
GEN_NOFRAME uint GEN_THISCALL F_00580fd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x580fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8)));
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      return 0;
    }
    uVar2 = puVar1[2];
    if (((*(byte *)(uVar2 + 0x2e) & 8) != 0) && ((*(byte *)(uVar2 + 0x2c) & 8) != 0)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return uVar2;
}

/* ref: FUN_00581000 */
GEN_FRAME uint GEN_THISCALL F_00581000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x581000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8)));
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      return 0;
    }
    if (*(int *)(puVar1[2] + 4) == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[2];
}

/* ref: FUN_00581030 */
GEN_FRAME uint GEN_THISCALL F_00581030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x581030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8)));
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      return 0;
    }
    if (*(int *)(puVar1[2] + 0x14) == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[2];
}

/* ref: FUN_00581060 */
GEN_FRAME uint GEN_THISCALL F_00581060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x581060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8)));
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      return 0;
    }
    if (*(int *)(puVar1[2] + 0x18) == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[2];
}

/* ref: FUN_00581090 */
GEN_FRAME uint GEN_THISCALL F_00581090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x581090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8)));
  iVar2 = 0;
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      return 0;
    }
    if (iVar2 == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
    iVar2 = iVar2 + 1;
  }
  return puVar1[2];
}

/* ref: FUN_005810f0 */
GEN_FRAME unsigned int GEN_THISCALL F_005810f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5810f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
  for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    bVar1 = *(byte *)(puVar3[2] + 0x2c);
    if (((bVar1 & 1) != 0) && (((bVar1 & 8) != 0 || ((char)param_3 != '\0')))) {
      piVar4 = *(int * PTR32 *)(puVar3[2] + 4);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4 GEN_EDX_FWD,param_1,param_2);
    }
  }
  return;
}

/* ref: FUN_00581150 */
GEN_NOFRAME uint GEN_THISCALL F_00581150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x581150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: FUN_005811a0 */
GEN_NOFRAME uint GEN_THISCALL F_005811a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5811a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_005811c0 */
GEN_NOFRAME uint GEN_THISCALL F_005811c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5811c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a104c));
  return (uint)this;
}

/* ref: FUN_00581210 */
GEN_NOFRAME uint GEN_THISCALL F_00581210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x581210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00581230 */
GEN_NOFRAME uint GEN_THISCALL F_00581230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x581230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a109c));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = uVar1;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = uVar1;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = uVar1;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 100;
  *(undefined4 *)((int)this + 0xe4) = 0x32;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined2 *)((int)this + 0xec) = 0;
  *(undefined2 *)((int)this + 0xee) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0x32;
  return (uint)this;
}

/* ref: FUN_00581350 */
GEN_NOFRAME uint GEN_THISCALL F_00581350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x581350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00581370 */
GEN_FRAME uint GEN_THISCALL F_00581370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x581370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0xe4) != param_1) {
    *(uint *)((int)this + 0xe4) = param_1;
    uVar1 = F_0057eb30(*(undefined * PTR32 *)((int)this + 0x9c) GEN_EDX_FWD,param_1,0,0,0,0);
  }
  return uVar1;
}

/* ref: FUN_005813a0 */
GEN_NOFRAME uint GEN_THISCALL F_005813a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5813a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a10ec));
  *(undefined4 *)((int)this + 0x9c) = 100;
  *(undefined4 *)((int)this + 0xa0) = 0x32;
  *(undefined4 *)((int)this + 0xa4) = 1;
  *(undefined2 *)((int)this + 0xa8) = 0;
  *(undefined2 *)((int)this + 0xaa) = 0;
  *(undefined2 *)((int)this + 0xac) = 0;
  *(undefined1 *)((int)this + 0xae) = 1;
  return (uint)this;
}

/* ref: FUN_00581470 */
GEN_NOFRAME uint GEN_THISCALL F_00581470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x581470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x84) == 0) {
    uVar1 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x6c));
    *(uint *)((int)this + 0x84) = uVar1;
  }
  return *(uint *)((int)this + 0x84);
}

/* ref: FUN_005814a0 */
GEN_NOFRAME uint GEN_THISCALL F_005814a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5814a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10a113c));
  *(undefined4 *)((int)this + 0x84) = 0x10000;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x8c) = 0;
  *(undefined1 *)((int)this + 0xa4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined1 *)((int)this + 200) = 1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined1 *)((int)this + 0xf0) = 1;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xf8) = 500;
  *(undefined4 *)((int)this + 0xfc) = 200;
  *(undefined1 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined2 *)((int)this + 0x8d) = 1;
  *(undefined1 *)((int)this + 0x8f) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined2 *)((int)this + 0x90) = 0;
  *(undefined1 *)((int)this + 0x92) = 0;
  return (uint)this;
}

/* ref: FUN_00581600 */
GEN_NOFRAME uint GEN_THISCALL F_00581600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x581600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10a113c));
  F_00580e00((undefined *)((int)this + 0xd0) GEN_EDX_FWD);
  F_00580e00((undefined *)((int)this + 0xa8) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00581640 */
GEN_FRAME unsigned int GEN_THISCALL F_00581640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x581640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined * this_01;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined4 * puVar5;
  short sVar6;
  undefined4 * puVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint local_14;
  uint uStack_10;
  float local_c;
  
  uVar13 = REFG(undefined4, 0x108cc50);
  this_00 = *(undefined * PTR32 *)((int)this + 0x104);
  if (this_00 == (undefined *)0x0) {
    return;
  }
  if (*(int *)((int)this + 0x70) == 0) {
    local_c = 0.0;
  }
  else {
    local_c = gen_bits2f((uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x70) + 0x7c))));
  }
  fVar10 = local_c;
  this_01 = (undefined *)F_005684e0(this_00 GEN_EDX_FWD,0);
  uVar2 = 0;
  if (this_01 != (undefined *)0x0) {
    uVar12 = 0;
    uVar2 = F_0042a990((int)this_00 + 0x9c GEN_EDX_ARG);
    dVar11 = F_00576610(this_01 GEN_EDX_ARG,uVar2,uVar12,uVar13);
    puVar5 = (undefined4 *)((int)this_01 + 0xa8);
    puVar7 = (undefined4 *)((int)this_01 + 100);
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    local_14 = (uint)(longlong)TRUNC(dVar11);
    uVar2 = local_14;
  }
  uVar4 = *(short *)((int)this + 0x9c) + *(short *)((int)this + 0x94) + (short)uVar2;
  if (*(int *)((int)this + 0x70) == 0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = *((float *)GEN_TOP((*(int *)((int)this + 0x70) + 0x38)));
  }
  iVar3 = *(int *)((int)this + 0x104);
  if (iVar3 == 0) {
    local_c = 0.0;
  }
  else {
    local_c = *(float *)(iVar3 + 0x38);
  }
  sVar6 = (short)(int)fVar9;
  switch((unsigned int)(uintptr_t)(*(byte *)(iVar3 + 0xfc) & 0xf)) {
  case 1: ;
  case 4: ;
  case 7: ;
    uStack_10 = uVar2 & 0xffff;
    F_005c0500(this GEN_EDX_ARG,(int)(((float10)(float)((float10)(int)gen_fl2bits(fVar10) *
                                              (float10)REFG(double, 0x1088108) + (float10)(int)sVar6) -
                            (float10)uStack_10 * (float10)REFG(double, 0x1088108)) -
                           (float10)*(int *)((int)this + 0x94)) & 0xffff);
    if (*(int *)((int)this + 0x70) == 0) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = *((float *)GEN_TOP((*(int *)((int)this + 0x70) + 0x38)));
    }
    fVar8 = ((float10)local_c + (float10)(int)sVar6) - (float10)(int)(short)(int)fVar10;
    break;
  case 2: ;
  case 5: ;
  case 8: ;
    F_005c0500(this GEN_EDX_ARG,((int)gen_fl2bits(fVar10) - (uint)uVar4) + ((int)fVar9 & 0xffffU));
    if (*(int *)((int)this + 0x70) == 0) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = *((float *)GEN_TOP((*(int *)((int)this + 0x70) + 0x38)));
    }
    fVar8 = ((float10)(int)sVar6 + (float10)local_c) - (float10)(int)(short)(int)fVar10;
    break;
  default: ;
    goto switchD_0058173d_caseD_3;
  }
  F_00559e70(*(undefined4 *)((int)this + 0x104) GEN_EDX_ARG,(float)fVar8);
switchD_0058173d_caseD_3: ;
  iVar3 = *(int *)((int)this + 0x70);
  if (iVar3 != 0) {
    *(ushort *)(iVar3 + 0x7c) = uVar4;
    *(undefined2 *)(iVar3 + 0x7e) = *(undefined2 *)(iVar3 + 0x7e);
  }
  if (*(int *)((int)this + 0x70) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x70) + 0x7e)));
  }
  uVar1 = *(uint *)((int)this + 0x6c);
  if (uVar1 != 0) {
    F_0057f1a0(uVar1,(uint)*(ushort *)(uVar1 + 0x7c),(uint)*(ushort *)(uVar1 + 0x7e),(uint)uVar4,
                 uVar2,1);
  }
  return;
}

/* ref: Component::GUI2::AtkComponentButton::vf22 */
GEN_FRAME unsigned int GEN_THISCALL F_00581880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x581880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 0x104);
  if ((this_00 != (undefined *)0x0) && ((*(byte *)((int)this_00 + 0xfc) & 0xf) < 3)) {
    F_00577d20(this_00 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)),((short *)(gen_frame + 0x8)),0,0,REFG(undefined4, 0x108cc50),0);
    uVar1 = *(uint *)(this + 0x70);
    if (uVar1 != 0) {
      F_0057f1a0(uVar1,(uint)*(ushort *)(uVar1 + 0x7c),(uint)*(ushort *)(uVar1 + 0x7e),
                   (uint)*(ushort *)(uVar1 + 0x7c),
                   (uint)(ushort)(*(short *)(this + 0xa0) + *(short *)(this + 0x98) + ((short *)(gen_frame + 0x8))[0]),1)
      ;
    }
  }
  return;
}

/* ref: FUN_00581900 */
GEN_NOFRAME uint GEN_THISCALL F_00581900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x581900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005814a0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10a119c));
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  return (uint)this;
}

/* ref: FUN_00581950 */
GEN_NOFRAME uint GEN_THISCALL F_00581950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x581950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10a113c));
  F_00580e00((undefined *)((int)this + 0xd0) GEN_EDX_FWD);
  F_00580e00((undefined *)((int)this + 0xa8) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00581990 */
GEN_NOFRAME uint GEN_THISCALL F_00581990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x581990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005814a0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined1 *)((int)this + 0x136) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10a1204));
  *(undefined2 *)((int)this + 0x134) = 0;
  return (uint)this;
}

/* ref: FUN_005819c0 */
GEN_NOFRAME uint GEN_THISCALL F_005819c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5819c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
  *(undefined4 *)((int)this + 200) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xdc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe4) = 0xffffffff;
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined2 *)((int)this + 0xf6) = 0;
  *(undefined2 *)((int)this + 0xf8) = 0;
  *(undefined2 *)((int)this + 0xfa) = 1;
  *(undefined2 *)((int)this + 0xfc) = 1;
  *(undefined2 *)((int)this + 0xfe) = 0;
  *(undefined2 *)((int)this + 0x100) = 0;
  *(undefined2 *)((int)this + 0x102) = 0;
  *(undefined2 *)((int)this + 0x104) = 0;
  *(undefined2 *)((int)this + 0x106) = 0;
  *(undefined2 *)((int)this + 0x108) = 0;
  *(undefined2 *)((int)this + 0x10a) = 1;
  *(undefined2 *)((int)this + 0x10c) = 1;
  *(undefined4 *)((int)this + 0x10e) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[36])REFP(0x10a126c));
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
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0xfffffffe;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0x112) = 0x101;
  *(undefined4 *)((int)this + 0x116) = 0x1010101;
  *(undefined4 *)((int)this + 0x11a) = 0;
  *(undefined4 *)((int)this + 0x11e) = 0;
  *(undefined4 *)((int)this + 0x122) = 0;
  *(undefined2 *)((int)this + 0x126) = 0;
  *(undefined1 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  return (uint)this;
}

/* ref: FUN_00581b60 */
GEN_NOFRAME uint GEN_THISCALL F_00581b60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x581b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00581b80 */
GEN_FRAME uint GEN_THISCALL F_00581b80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x581b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  byte bVar1;
  short sVar2;
  ushort uVar3;
  undefined * this_01;
  int iVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar7 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0;
  if (((*(int *)((int)this + 0x84) != 0) &&
      (iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x84) + 0x70))), iVar4 != 0)) &&
     (uVar7 = *(uint *)(iVar4 + 4), 10000 < uVar7)) {
    uVar7 = uVar7 / 10000;
  }
  iVar4 = *(int *)((int)this + 0xa0);
  bVar1 = 0;
  if (*(byte *)((int)this + 0x110) != 0) {
    do {
      if ((int)*(short *)(iVar4 + 10) == uVar7) {
        sVar2 = *(short *)(iVar4 + 8) + 1;
        goto LAB_00581bf5;
      }
      bVar1 = bVar1 + 1;
      iVar4 = iVar4 + 0xc;
    } while (bVar1 < *(byte *)((int)this + 0x110));
  }
  sVar2 = 1;
LAB_00581bf5: ;
  uVar3 = sVar2 - 1;
  if (uVar3 < 0x8000) {
    do {
      uVar12 = REFG(undefined4, 0x108cc50);
      iVar4 = *(int *)((int)this + 0x84);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x70) == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = *((uint *)GEN_TOP((*(int *)(iVar4 + 0x70) + 4)));
        if (10000 < uVar7) {
          uVar7 = uVar7 / 10000;
        }
      }
      iVar5 = *(int *)((int)this + 0xa0);
      bVar1 = 0;
      if (*(byte *)((int)this + 0x110) != 0) {
        do {
          if ((int)*(short *)(iVar5 + 10) == uVar7) goto LAB_00581c6d;
          bVar1 = bVar1 + 1;
          iVar5 = iVar5 + 0xc;
        } while (bVar1 < *(byte *)((int)this + 0x110));
      }
      iVar5 = 0;
LAB_00581c6d: ;
      if (((iVar5 != 0) &&
          (sVar2 = (short)((longlong)(ulonglong)uVar3 % (longlong)(*(short *)(iVar5 + 8) + 1)),
          sVar2 != 0)) &&
         (((iVar4 = sVar2 * 0x90 - 0x90 + *(int *)(iVar5 + 4), iVar4 == 0 ||
           ((((*(ushort *)(iVar4 + 0x18) < 1000 || (iVar4 = *(int *)(iVar4 + 0x8c), iVar4 == 0)) ||
             ((*(byte *)(iVar4 + 0x60) & 1) == 0)) ||
            (((*(byte *)(iVar4 + 0x60) & 4) == 0 || (*(char *)(iVar4 + 0x1c) != '\x01')))))) ||
          (*((char *)GEN_TOP((*(int *)(iVar4 + 0xc) + 0xf))) != '\x0e')))) {
        iVar4 = 0;
      }
      if (((iVar4 != 0) && (this_00 = *(undefined * PTR32 *)(iVar4 + 0x104), this_00 != (undefined *)0x0)) &&
         (this_01 = (undefined *)F_005684e0(this_00 GEN_EDX_FWD,0), this_01 != (undefined *)0x0)) {
        uVar11 = 0;
        uVar7 = F_0042a990((int)this_00 + 0x9c GEN_EDX_ARG);
        dVar10 = F_00576610(this_01 GEN_EDX_ARG,uVar7,uVar11,uVar12);
        puVar8 = (undefined4 *)((int)this_01 + 0xa8);
        puVar9 = (undefined4 *)((int)this_01 + 100);
        for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        (*(uint *)(gen_frame + 0x4)) = (uint)(longlong)TRUNC(dVar10);
        if ((ushort)(*(uint *)(gen_frame + 0xc)) < (ushort)(longlong)TRUNC(dVar10)) {
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x4)) & 0xffff;
        }
      }
      uVar3 = uVar3 - 1;
    } while (-1 < (short)uVar3);
  }
  iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x84) + 0x104)));
  if (iVar4 == 0) {
    sVar2 = 0;
  }
  else {
    sVar2 = (short)(int)*(float *)(iVar4 + 0x38);
  }
  uVar3 = *((short *)GEN_TOP((*(int *)((int)this + 0x84) + 0x200))) * 3 + sVar2 + (ushort)(*(uint *)(gen_frame + 0xc));
  uVar7 = *(uint *)((int)this + 0x70);
  if (uVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(uVar7 + 0x7c);
  }
  if ((uVar6 < uVar3) || (*(ushort *)((int)this + 0x102) <= uVar3)) {
    if (uVar7 != 0) {
      *(ushort *)(uVar7 + 0x7c) = uVar3;
    }
    uVar7 = *(uint *)((int)this + 0x70);
    if (uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = F_0057f1a0(uVar7,(uint)*(ushort *)(uVar7 + 0x7c),(uint)*(ushort *)(uVar7 + 0x7e),
                           (uint)*(ushort *)(uVar7 + 0x7c),(uint)*(ushort *)(uVar7 + 0x7e),1);
    }
  }
  return uVar7;
}

/* ref: FUN_00581e10 */
GEN_FRAME unsigned int GEN_THISCALL F_00581e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x581e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (this != (undefined *)0x0) {
    iVar1 = *(int *)((int)this + 0x70);
    if (iVar1 != 0) {
      uVar3 = (uint)*(ushort *)(iVar1 + 0x7e);
      *(short *)(iVar1 + 0x7c) = (short)param_1;
      *(ushort *)(iVar1 + 0x7e) = *(ushort *)(iVar1 + 0x7e);
    }
    uVar2 = *(uint *)((int)this + 0x70);
    if (uVar2 != 0) {
      F_0057f1a0(uVar2,(uint)*(ushort *)(uVar2 + 0x7c),(uint)*(ushort *)(uVar2 + 0x7e),param_1,
                   uVar3,1);
    }
  }
  return;
}

/* ref: FUN_00581e60 */
GEN_FRAME unsigned int GEN_THISCALL F_00581e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x581e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(byte *)((int)this + 0x220) & 4) != 0) && (*(int *)((int)this + 0x1e0) != 0)) {
    F_0057eb30(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1e0) + 0xbc))) GEN_EDX_FWD,param_1,0,0,0,0);
  }
  return;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf33 */
GEN_FRAME unsigned int GEN_THISCALL F_00581ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x581ea0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int * piVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint * puVar6;
  undefined * PTR32 * ppAVar7;
  int * piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float10 fVar12;
  
  if ((int)(*(uint *)&gen_args[1]) < 0) {
    return;
  }
  uVar11 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if ((char)(*(uint *)&gen_args[2]) == '\0') {
    iVar9 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xac)));
    piVar8 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 300)));
    piVar2 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x130)));
    (*(uint *)&gen_args[2]) = 0;
    (*(uint *)(gen_frame + 0x4)) = 0;
    if ((iVar9 != 0) && (iVar9 <= (int)(*(uint *)&gen_args[1]))) {
      (*(uint *)&gen_args[1]) = iVar9 - 1;
    }
    if (piVar8 != piVar2) {
      do {
        iVar9 = *piVar8;
        bVar1 = *(byte *)(iVar9 + 0x2c);
        if (bVar1 == (ushort)(*(uint *)&gen_args[2])) {
          bVar1 = *(byte *)(iVar9 + 0x2b);
          if ((bVar1 & 4) == 0) {
            if ((*(uint *)&gen_args[1]) == (*(uint *)(gen_frame + 0x4))) break;
            (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
          }
          if (((bVar1 & 2) == 0) || ((*(byte *)(iVar9 + 0x2a) & 1) == 0)) {
            if ((bVar1 & 1) != 0) {
              (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) - 1;
            }
          }
          else {
            (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 1;
          }
        }
        piVar8 = piVar8 + 1;
        uVar11 = uVar11 + 1;
      } while (piVar8 != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x130))));
      (*(uint *)(gen_frame + 0x8)) = uVar11;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)&gen_args[1]);
  }
  uVar11 = (*(uint *)(gen_frame + 0x8));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)(gen_frame + 0x8)),0);
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) = uVar11;
  if (uVar11 < *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x158)))) {
    iVar9 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 300))) + uVar11 * 4)));
  }
  else {
    iVar9 = 0;
  }
  *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x148))) = iVar9;
  if (iVar9 == 0) {
    return;
  }
  if ((*(undefined * PTR32 *)&gen_args[0])[0x114] == (undefined1)0x0) {
    return;
  }
  uVar3 = F_0057c130((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar11,0);
  iVar9 = *(int *)(iVar9 + 0x20);
  (*(uint *)(gen_frame + 0x4)) = iVar9;
  if (((*(uint *)(gen_frame + 0x8)) == 0) && (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) != 0)) {
    F_00562160((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0);
    F_00574c80(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))) GEN_EDX_ARG,0,1,1);
    return;
  }
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xac))) != 0) && ((*(uint *)&gen_args[1]) == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xac))) - 1U)) {
    F_00562160((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154))));
    F_00574c80(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))) GEN_EDX_ARG,*((uint *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))) + 0xa8))),1,1);
    return;
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb0))) < (int)(*(uint *)(gen_frame + 0x8))) {
    iVar10 = (uint)uVar3 - *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)&gen_args[0]) + 0xb8;
    if (-1 < iVar10) {
      if ((int)(*(uint *)(gen_frame + 0x8)) < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x164)))) {
        if (iVar9 == 0) {
          return;
        }
        uVar4 = F_005c0650(iVar9 GEN_EDX_ARG);
        (*(uint *)&gen_args[2]) = (uint)uVar4 + iVar10;
        uVar4 = F_005c0650((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        if ((int)(*(uint *)&gen_args[2]) < (int)(uint)uVar4) {
          return;
        }
      }
      (*(uint *)&gen_args[2]) = (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154)));
      (*(uint *)(gen_frame + 0x8)) = 0;
      uVar4 = F_005c0650((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      uVar5 = F_005c0650((*(uint *)(gen_frame + 0x4)) GEN_EDX_ARG);
      uVar5 = (uVar3 - uVar4) + uVar5;
      (*(uint *)&gen_args[1]) = (uint)uVar5;
      puVar6 = &(*(uint *)&gen_args[1]);
      if ((short)(ushort)(*(uint *)&gen_args[2]) <= (short)uVar5) {
        puVar6 = &(*(uint *)&gen_args[2]);
      }
      if ((short)*puVar6 < 1) {
        puVar6 = &(*(uint *)(gen_frame + 0x8));
      }
      F_00562160((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(int)(short)*puVar6);
      iVar10 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154)));
      iVar9 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0x0));
      goto LAB_00582103;
    }
  }
  uVar4 = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154)));
  (*(uint *)&gen_args[1]) = (uint)uVar4;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = (undefined *)0x0;
  (*(uint *)&gen_args[2]) = (uint)uVar3;
  ppAVar7 = (undefined * PTR32 *)&(*(uint *)&gen_args[2]);
  if ((short)uVar4 <= (short)uVar3) {
    ppAVar7 = (undefined * PTR32 *)&(*(uint *)&gen_args[1]);
  }
  if (*(short *)ppAVar7 < 1) {
    ppAVar7 = &(*(undefined * PTR32 *)(gen_frame + 0x0));
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) != (int)*(short *)ppAVar7) {
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = (int)*(short *)ppAVar7;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  }
  iVar10 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154)));
  iVar9 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8)));
LAB_00582103: ;
  fVar12 = (float10)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154)));
  if (iVar10 < 0) {
    fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  F_00574c80(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))) GEN_EDX_ARG,
               (int)(((float10)iVar9 / fVar12) * (float10)*((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))) + 0xa8)))),0,
               1);
  return;
}

/* ref: FUN_00582140 */
GEN_NOFRAME uint GEN_THISCALL F_00582140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x582140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined2 *)((int)this + 0xb8) = 0;
  *(undefined2 *)((int)this + 0xba) = 0;
  *(undefined2 *)((int)this + 0xbc) = 1;
  *(undefined2 *)((int)this + 0xbe) = 1;
  *(undefined2 *)((int)this + 0xc0) = 0;
  *(undefined2 *)((int)this + 0xc2) = 1;
  *(undefined2 *)((int)this + 0xc4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a1304));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 100;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xc6) = 0x10000;
  *(undefined4 *)((int)this + 0xca) = 0x1000001;
  *(undefined1 *)((int)this + 0xce) = 0;
  return (uint)this;
}

/* ref: FUN_00582240 */
GEN_NOFRAME uint GEN_THISCALL F_00582240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x582240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00582260 */
GEN_NOFRAME uint GEN_THISCALL F_00582260(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x582260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a1354));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0x10000;
  *(undefined1 *)((int)this + 0x94) = 0;
  return (uint)this;
}

/* ref: FUN_005822d0 */
GEN_NOFRAME uint GEN_THISCALL F_005822d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5822d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00582350 */
GEN_NOFRAME uint GEN_THISCALL F_00582350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x582350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00582370 */
GEN_NOFRAME uint GEN_THISCALL F_00582370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x582370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a140c));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0xffffffff;
  *(undefined4 *)((int)this + 0x9c) = 0xffffffff;
  *(undefined2 *)((int)this + 0xa0) = 0x100;
  return (uint)this;
}

/* ref: FUN_005823f0 */
GEN_NOFRAME uint GEN_THISCALL F_005823f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5823f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00582410 */
GEN_FRAME byte GEN_THISCALL F_00582410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x582410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  iVar1 = REFG(int, 0x1379860);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x68);
  F_005c8b30((undefined *)(REFG(int, 0x1379860) + 0xe4) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
  return (*(int *)(gen_frame + 0x4)) != *(int *)(iVar1 + 0xe8);
}

/* ref: FUN_00582450 */
GEN_NOFRAME uint GEN_THISCALL F_00582450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x582450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[15])REFP(0x10a0b24));
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x98) = 0xffffffff;
  *(undefined1 *)((int)this + 0x9e) = 0;
  *(undefined2 *)((int)this + 0x94) = 0;
  *(undefined2 *)((int)this + 0x96) = 0;
  *(undefined2 *)((int)this + 0x9c) = 0;
  *(byte *)((int)this + 0xaa) = *(byte *)((int)this + 0xaa) & 0x80;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a149c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[15])REFP(0x10a145c));
  *(undefined4 *)((int)this + 0xa0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined2 *)((int)this + 0xa8) = 0x101;
  return (uint)this;
}

/* ref: FUN_00582510 */
GEN_NOFRAME uint GEN_THISCALL F_00582510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x582510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a14ec));
  *(undefined1 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  F_0042b630((int)this + 0x9c GEN_EDX_FWD);
  F_0042b630((int)this + 0xf0 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0xffffffff;
  *(undefined4 *)((int)this + 0x154) = 0xffffffff;
  *(undefined4 *)((int)this + 0x158) = 0xffffffff;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  F_0042e430((undefined *)((int)this + 0xf0) GEN_EDX_ARG,"");
  F_0042e430((undefined *)((int)this + 0x9c) GEN_EDX_ARG,"");
  *(undefined4 *)((int)this + 0x88) = 0xa000d268;
  return (uint)this;
}

/* ref: FUN_00582610 */
GEN_NOFRAME uint GEN_THISCALL F_00582610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x582610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a14ec));
  F_0042c880((undefined *)((int)this + 0xf0) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x9c) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00582650 */
GEN_FRAME uint GEN_THISCALL F_00582650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x582650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  undefined * this_00;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (*(undefined * PTR32 *)((int)this + 0x8c) != (undefined *)0x0) {
    this_00 = (undefined *)F_005684e0(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_FWD,1);
    uVar1 = F_00576af0(this_00 GEN_EDX_ARG,param_1);
    puVar3 = (undefined4 *)((int)this_00 + 0xa8);
    puVar4 = (undefined4 *)((int)this_00 + 100);
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return uVar1 + 1;
  }
  return 0;
}

/* ref: FUN_005826a0 */
GEN_NOFRAME uint GEN_THISCALL F_005826a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5826a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x144) == 0) {
    uVar1 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x6c));
    *(uint *)((int)this + 0x144) = uVar1;
  }
  return *(uint *)((int)this + 0x144);
}

/* ref: Component::GUI2::AtkComponentTextInput::vf8 */
GEN_FRAME uint GEN_THISCALL F_005826d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5826d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  byte * pbVar2;
  float fVar3;
  int iVar4;
  undefined * this_00;
  ushort uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined2 uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined * local_c;
  float local_8;
  
  uVar10 = 0;
  if ((this != (undefined *)0x0) && (*(int *)(this + 0x70) != 0)) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84)));
    *puVar1 = *puVar1 & 0xfdffffff;
  }
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  do {
    while( true ) {
      if ((*(int *)(this + 0xc) == 0) ||
         ((uint)*(ushort *)(this + 0x1a) + *((int *)GEN_TOP((*(int *)(this + 0xc) + 4))) <= uVar10)) {
        if (*(int *)(this + 0x68) == 0) {
          *(int *)(this + 0x68) = *(int *)(this + 0x6c);
          puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x6c) + 0x84)));
          *puVar1 = *puVar1 | 0x1000000;
          if (*(int *)(this + 0x68) != 0) {
            puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x68) + 0x84)));
            *puVar1 = *puVar1 | 0x4000000;
          }
        }
        if (*(int *)(this + 0x98) == 0) {
          *(int *)(this + 0x98) = *(int *)(this + 0x8c);
          puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x8c) + 0x84)));
          *puVar1 = *puVar1 | 0x1000000;
        }
        if (*(int *)(this + 0x300) != 0) {
          *(undefined2 *)(this + 0x336) = 4;
          if ((*(int *)(this + 0x30c) == 0) ||
             (iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x30c) + 0x70))), iVar11 == 0)) {
            fVar14 = 0.0;
          }
          else {
            fVar14 = *(float *)(iVar11 + 0x3c);
          }
          iVar11 = *(int *)(this + 0x308);
          if ((iVar11 == 0) || (*(int *)(iVar11 + 0x70) == 0)) {
            fVar15 = 0.0;
          }
          else {
            fVar15 = *((float *)GEN_TOP((*(int *)(iVar11 + 0x70) + 0x3c)));
          }
          iVar4 = *(int *)(this + 0x330);
          *(short *)(this + 0x334) = (short)(int)fVar14 - (short)(int)fVar15;
          if (iVar4 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined2 *)(iVar4 + 0x7e);
          }
          *(undefined2 *)(this + 0x338) = uVar8;
          if ((iVar11 == 0) || (*(int *)(iVar11 + 0x70) == 0)) {
            fVar14 = 0.0;
          }
          else {
            fVar14 = *((float *)GEN_TOP((*(int *)(iVar11 + 0x70) + 0x38)));
          }
          if (iVar4 == 0) {
            local_c = (undefined *)0x0;
          }
          else {
            local_c = *(undefined * PTR32 *)(iVar4 + 0x38);
          }
          *(int *)(this + 0x33c) = (int)((float10)(int)(short)(int)fVar14 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(local_c))))
          ;
          if (iVar4 == 0) {
            fVar14 = 0.0;
            uVar9 = 0;
          }
          else {
            fVar14 = *(float *)(iVar4 + 0x38);
            uVar9 = *(ushort *)(iVar4 + 0x7c);
          }
          iVar11 = *(int *)(this + 0x32c);
          if (iVar11 == 0) {
            fVar15 = 0.0;
            uVar5 = 0;
          }
          else {
            fVar15 = *(float *)(iVar11 + 0x38);
            uVar5 = *(ushort *)(iVar11 + 0x7c);
          }
          *(int *)(this + 0x344) =
               (int)((((float10)uVar9 + (float10)fVar14) - (float10)fVar15) - (float10)uVar5);
          *(int *)(this + 0x340) = (int)*((float *)GEN_TOP((*(int *)(this + 0x300) + 0x3c)));
          if (iVar4 == 0) {
            fVar14 = 0.0;
            uVar9 = 0;
          }
          else {
            fVar14 = *(float *)(iVar4 + 0x3c);
            uVar9 = *(ushort *)(iVar4 + 0x7e);
          }
          if (iVar11 == 0) {
            local_8 = 0.0;
            uVar5 = 0;
          }
          else {
            local_8 = *(float *)(iVar11 + 0x3c);
            uVar5 = *(ushort *)(iVar11 + 0x7e);
          }
          *(int *)(this + 0x348) =
               (int)((((float10)uVar9 + (float10)fVar14) - (float10)local_8) - (float10)uVar5);
          if (*((int *)GEN_TOP((*(int *)(this + 0x308) + 0x104))) == 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x308) + 0x104))) + 0x50)));
          }
          *(undefined4 *)(this + 0x34c) = uVar16;
          F_0056e5a0(this GEN_EDX_FWD);
          local_c = this + 0x308;
          iVar11 = 0;
          do {
            if ((*(int *)local_c != 0) && (iVar4 = *(int *)(*(int *)local_c + 0x70), iVar4 != 0)) {
              if (*(int *)(iVar4 + 0x80) == 0) {
                uVar16 = 0;
                uVar10 = F_00404270();
                puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
                if (puVar7 == (undefined4 *)0x0) {
                  puVar7 = (undefined4 *)0x0;
                }
                else {
                  *puVar7 = 0;
                }
                *(undefined4 * PTR32 *)(iVar4 + 0x80) = puVar7;
              }
              F_00565340(*(undefined * PTR32 *)(iVar4 + 0x80) GEN_EDX_ARG,0x17,iVar11,0,iVar4,this,0);
            }
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)local_c + 0x30))))(*(int * PTR32 *)local_c GEN_EDX_ARG,0);
            iVar11 = iVar11 + 1;
            local_c = local_c + 4;
          } while (iVar11 < 9);
        }
        if (*(int *)(this + 0x98) != 0) {
          puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x98) + 0x84)));
          *puVar1 = *puVar1 | 0x2000000;
        }
        if (*(int *)(this + 0x98) != 0) {
          puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x98) + 0x84)));
          *puVar1 = *puVar1 | 0x4000000;
        }
        iVar11 = *(int *)(this + 0x98);
        if (iVar11 != 0) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0x11,0x200,0,iVar11,this,0);
        }
        iVar11 = *(int *)(this + 0x98);
        if (iVar11 != 0) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0x12,0x201,0,iVar11,this,0);
        }
        iVar11 = *(int *)(this + 0x98);
        if (iVar11 != 0) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0xc,0x300,0,iVar11,this,0);
        }
        iVar11 = *(int *)(this + 0x98);
        if (iVar11 != 0) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,3,0x400,0,iVar11,this,0);
        }
        iVar11 = *(int *)(this + 0x98);
        if (iVar11 != 0) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0xf,0,0,iVar11,this,0);
        }
        iVar11 = *(int *)(this + 0x98);
        if (iVar11 != 0) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,9,0,0,iVar11,this,0);
        }
        iVar11 = *(int *)(this + 0x68);
        if (iVar11 != 0) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0xc,0x301,0,iVar11,this,0);
        }
        if ((this[0x80] == (undefined1)0x1) &&
           (iVar11 = *(int *)(this + 0x70), iVar11 != 0)) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80) GEN_EDX_ARG,0x46,0,0,iVar11,this,0);
        }
        if (*(int *)(this + 0x8c) != 0) {
          pbVar2 = ((byte *)GEN_TOP((*(int *)(this + 0x8c) + 0xfe)));
          *pbVar2 = *pbVar2 & 0xfe;
        }
        if (*(int *)(this + 0x8c) != 0) {
          pbVar2 = ((byte *)GEN_TOP((*(int *)(this + 0x8c) + 0xff)));
          *pbVar2 = *pbVar2 | 1;
        }
        iVar11 = *(int *)(this + 0x8c);
        if (iVar11 != 0) {
          local_c = *(undefined * PTR32 *)(iVar11 + 0x38);
          local_8 = *(float *)(iVar11 + 0x3c);
        }
        iVar11 = *(int *)(this + 0x90);
        if (iVar11 == 0) {
          fVar14 = 0.0;
        }
        else {
          fVar14 = *(float *)(iVar11 + 0x74);
        }
        if (iVar11 == 0) {
          fVar15 = 0.0;
        }
        else {
          fVar15 = *(float *)(iVar11 + 0x78);
        }
        fVar3 = (float)((float10)local_8 - (float10)fVar15);
        if (iVar11 != 0) {
          if (((*(uint *)(iVar11 + 0x88) & 1) == 0) &&
             ((fVar13 = (float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(local_c))) - (float10)fVar14),
              bVar12 = GEN_ISNAN((float10)*(float *)(iVar11 + 0x38)) || GEN_ISNAN(fVar13),
              bVar12 == (bVar12 || (float10)*(float *)(iVar11 + 0x38) == fVar13) ||
              (fVar13 = (float10)fVar3,
              bVar12 = GEN_ISNAN((float10)*(float *)(iVar11 + 0x3c)) || GEN_ISNAN(fVar13),
              bVar12 == (bVar12 || (float10)*(float *)(iVar11 + 0x3c) == fVar13))))) {
            *(uint *)(iVar11 + 0x88) = *(uint *)(iVar11 + 0x88) | 1;
          }
          *(float *)(iVar11 + 0x38) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(local_c))) - (float10)fVar14);
          *(float *)(iVar11 + 0x3c) = fVar3;
        }
        iVar11 = *(int *)(this + 0x90);
        if ((iVar11 == 0) || (*(int *)(iVar11 + 0x1c) == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar11 + 0x1c) + 0x10)));
        }
        if ((iVar11 != 0) && (this_00 = *(undefined * PTR32 *)(iVar11 + 0x1c), this_00 != (undefined *)0x0)) {
          *(ushort *)((int)this_00 + 0x22) = *(ushort *)((int)this_00 + 0x22) & 0x7fff;
          *(uint *)((int)this_00 + 0x18) = uVar10 - 1;
          F_00573430(this_00 GEN_EDX_ARG,uVar10 - 1);
        }
        iVar11 = *(int *)(this + 0x90);
        if (iVar11 != 0) {
          *(uint *)(iVar11 + 0x84) = *(uint *)(iVar11 + 0x84) & 0xffefffff;
          *(uint *)(iVar11 + 0x88) = *(uint *)(iVar11 + 0x88) | 0x80;
        }
        *(short *)(this + 0x1f2) = (short)(int)((float10)local_8 - (float10)fVar15);
        uVar10 = *(uint *)(this + 0x8c);
        if (uVar10 != 0) {
          *(undefined4 *)(uVar10 + 0x98) = *(undefined4 *)(this + 0x88);
        }
        return uVar10;
      }
      uVar6 = F_00578ee0(this + 4 GEN_EDX_ARG,uVar10);
      if (uVar6 != 0) break;
LAB_00582742: ;
      uVar10 = uVar10 + 1;
    }
    if ((*(uint *)(uVar6 + 0x84) & 0x1000000) == 0) {
      *(uint *)(uVar6 + 0x84) = *(uint *)(uVar6 + 0x84) & 0xfdffffff;
      goto LAB_00582742;
    }
    *(uint *)(this + 0x98) = uVar6;
    uVar10 = uVar10 + 1;
  } while( true );
}

/* ref: FUN_00582dd0 */
GEN_FRAME uint GEN_THISCALL F_00582dd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x582dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00582510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x16c) =
       (*(undefined * PTR32 (*)[3])REFP(0x10a0b14));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a154c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x16c) = (*(undefined * PTR32 (*)[3])REFP(0x10a153c));
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x184) = 0x101;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 1;
  *(undefined2 *)((int)this + 400) = 1;
  *(undefined4 *)((int)this + 0x194) = 0;
  F_0042b630((int)this + 0x198 GEN_EDX_ARG);
  F_0042b630((int)this + 0x1ec GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined1 *)((int)this + 0x248) = 0;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x30) + 0x20))))
                    (*(int * PTR32 *)(REFG(int, 0x1379860) + 0x30) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),"<color(0xffffc050)>");
  F_0042ccf0((undefined *)((int)this + 0x198) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x30) + 0x20))))
                    (*(int * PTR32 *)(REFG(int, 0x1379860) + 0x30) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),"<color(stackcolor)>");
  F_0042ccf0((undefined *)((int)this + 0x1ec) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00582ed0 */
GEN_NOFRAME uint GEN_THISCALL F_00582ed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x582ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a154c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x16c) = (*(undefined * PTR32 (*)[3])REFP(0x10a153c));
  F_0042c880((undefined *)((int)this + 0x1ec) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x198) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x16c) =
       (*(undefined * PTR32 (*)[3])REFP(0x10a0b14));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a14ec));
  F_0042c880((undefined *)((int)this + 0xf0) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x9c) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentNumericInput::vf16 */
GEN_FRAME uint GEN_THISCALL F_00582f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x582f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  byte * pbVar1;
  uint uVar2;
  int iVar3;
  char * pcVar4;
  undefined * pAVar5;
  
  pcVar4 = param_1;
  pAVar5 = this + 0x240;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 - 1) {
    *(undefined4 *)pAVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pAVar5 = pAVar5 + 4;
  }
  if (*param_1 != '\0') {
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
    this[0x80] = *(undefined *)(param_1 + 8);
  }
  *(undefined4 *)(this + 0x15c) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x160) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 0xc);
  uVar2 = F_0055d920(this + 4 GEN_EDX_FWD,*(undefined4 *)(this + 0x250));
  if ((uVar2 == 0) || (*(short *)(uVar2 + 0x18) != 3)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x8c) = uVar2;
  uVar2 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x254));
  *(uint *)(this + 0x94) = uVar2;
  uVar2 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 600));
  *(uint *)(this + 0x90) = uVar2;
  uVar2 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x25c));
  if ((((uVar2 == 0) || (*(ushort *)(uVar2 + 0x18) < 1000)) ||
      (iVar3 = *(int *)(uVar2 + 0x8c), iVar3 == 0)) ||
     ((((*(byte *)(iVar3 + 0x60) & 1) == 0 || ((*(byte *)(iVar3 + 0x60) & 4) == 0)) ||
      ((*(char *)(iVar3 + 0x1c) != '\x01' || (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01'))))))
  {
    iVar3 = 0;
  }
  *(int *)(this + 0x170) = iVar3;
  uVar2 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x260));
  if ((((uVar2 == 0) || (*(ushort *)(uVar2 + 0x18) < 1000)) ||
      ((iVar3 = *(int *)(uVar2 + 0x8c), iVar3 == 0 ||
       ((((*(byte *)(iVar3 + 0x60) & 1) == 0 || ((*(byte *)(iVar3 + 0x60) & 4) == 0)) ||
        (*(char *)(iVar3 + 0x1c) != '\x01')))))) ||
     (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01')) {
    iVar3 = 0;
  }
  *(int *)(this + 0x174) = iVar3;
  iVar3 = *(int *)(this + 0x264);
  if (*(int *)(this + 0x264) < *(int *)(this + 0x268)) {
    iVar3 = *(int *)(this + 0x268);
  }
  if (*(int *)(this + 0x26c) < iVar3) {
    iVar3 = *(int *)(this + 0x26c);
  }
  *(int *)(this + 0x178) = iVar3;
  F_0056e6e0(this GEN_EDX_ARG);
  if (*(int *)(this + 0x8c) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)(this + 0x8c) + 0xfe)));
    *pbVar1 = *pbVar1 & 0xfe;
  }
  uVar2 = F_0057eb30(*(undefined * PTR32 *)(this + 0x8c) GEN_EDX_ARG,*(undefined4 *)(this + 0x178),(uint)(byte)this[0x278]
                       ,0,(uint)(byte)this[0x180],0);
  if (*(int *)(this + 0x270) < 1) {
    *(undefined4 *)(this + 0x270) = 1;
  }
  return uVar2;
}

/* ref: FUN_00583100 */
GEN_NOFRAME uint GEN_THISCALL F_00583100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x583100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  *(undefined1 *)((int)this + 0x191) = 0;
  if (*(int *)((int)this + 0x144) == 0) {
    uVar2 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x6c));
    *(uint *)((int)this + 0x144) = uVar2;
  }
  F_0056b780(*(undefined * PTR32 *)((int)this + 0x144) GEN_EDX_ARG,3);
  if (*(int *)((int)this + 0x144) == 0) {
    uVar2 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c));
    *(uint *)((int)this + 0x144) = uVar2;
  }
  bVar1 = F_0056b780(*(undefined * PTR32 *)((int)this + 0x144) GEN_EDX_ARG,4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00583170 */
GEN_FRAME uint GEN_THISCALL F_00583170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x583170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  if ((*(char *)((int)this + 0x186) != (char)param_1) &&
     (*(char *)((int)this + 0x186) = (char)param_1, (char)param_2 != '\0')) {
    if ((char)param_1 == '\0') {
      *(undefined1 *)((int)this + 0x191) = 1;
      return uVar1;
    }
    *(undefined1 *)((int)this + 0x191) = 0;
    uVar1 = F_00583100(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_005831b0 */
GEN_NOFRAME uint GEN_THISCALL F_005831b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5831b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a159c));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  return (uint)this;
}

/* ref: FUN_00583230 */
GEN_NOFRAME uint GEN_THISCALL F_00583230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x583230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00583250 */
GEN_NOFRAME uint GEN_THISCALL F_00583250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x583250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a15ec));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  return (uint)this;
}

/* ref: FUN_005832c0 */
GEN_NOFRAME uint GEN_THISCALL F_005832c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5832c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_005832e0 */
GEN_FRAME uint GEN_THISCALL F_005832e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5832e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  undefined * this_00;
  int iVar4;
  uint in_EAX = 0;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float local_8;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x84);
  if (this_00 == (undefined *)0x0) {
    return in_EAX;
  }
  iVar4 = *(int *)((int)this + 0x88);
  if (iVar4 == 0) {
    return 0;
  }
  local_8 = *(float *)(iVar4 + 0x38);
  uVar7 = (uint)*(ushort *)(iVar4 + 0x7c);
  uVar2 = *(ushort *)((int)this_00 + 0x7c);
  fVar1 = *(float *)(iVar4 + 0x3c);
  uVar3 = *(ushort *)(iVar4 + 0x7e);
  uVar5 = F_00577bc0(this_00 GEN_EDX_FWD,0,0,REFG(undefined4, 0x108cc50),0);
  uVar8 = uVar5 + (uVar7 - uVar2) & 0xffff;
  uVar5 = *(uint *)((int)this + 0x88);
  if (uVar5 != 0) {
    F_0057f1a0(uVar5,(uint)*(ushort *)(uVar5 + 0x7c),(uint)*(ushort *)(uVar5 + 0x7e),uVar8,
                 (uint)uVar3,1);
  }
  uVar5 = *((byte *)GEN_TOP((*(int *)((int)this + 0x84) + 0xfc))) & 0xf;
  uVar6 = uVar5 - 1;
  if (uVar6 < 8) {
    uVar6 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x5833f4) + uVar5 + 3)));
    switch((unsigned int)(uintptr_t)(uVar5)) {
    default: ;
      uVar6 = (int)(uVar8 - uVar7) / 2;
      fVar9 = (float10)local_8 - (float10)(int)uVar6;
      break;
    case 2: ;
    case 5: ;
    case 8: ;
      fVar9 = (float10)local_8 - (float10)(int)(uVar8 - uVar7);
      break;
    case 3: ;
    case 6: ;
      goto switchD_00583386_caseD_3;
    }
    local_8 = (float)fVar9;
  }
switchD_00583386_caseD_3: ;
  *(float *)((int)this + 0x8c) = local_8;
  if ((*(byte *)((int)this + 0x90) & 1) != 0) {
    uVar6 = F_00559da0(*(undefined4 *)((int)this + 0x88) GEN_EDX_ARG,local_8,fVar1);
  }
  return uVar6;
}

/* ref: FUN_00583400 */
GEN_NOFRAME uint GEN_THISCALL F_00583400(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x583400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a163c));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  F_00c48350((undefined *)((int)this + 0x23c),0,0x60);
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  return (uint)this;
}

/* ref: FUN_00583530 */
GEN_NOFRAME uint GEN_THISCALL F_00583530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x583530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00583550 */
GEN_FRAME unsigned int GEN_STDCALL F_00583550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x583550u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((((param_1 != (int *)0x0) && (param_2 != (undefined *)0x0)) &&
      (uVar1 = F_0057dd60(param_2 GEN_EDX_ARG), param_1[0x2a] == 0)) && (uVar1 != 0)) {
    param_1[0x1a] = uVar1;
    *(uint *)(uVar1 + 0x84) = *(uint *)(uVar1 + 0x84) | 0x4000000;
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x30))(param_1 GEN_EDX_ARG,1);
    if (*(short *)(uVar1 + 0x18) == 8) {
      *(int * PTR32 *)(uVar1 + 0x98) = param_1;
    }
  }
  return;
}

/* ref: FUN_005835b0 */
GEN_NOFRAME uint GEN_THISCALL F_005835b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5835b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a168c));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x8c) = 0;
  return (uint)this;
}

/* ref: FUN_00583610 */
GEN_NOFRAME uint GEN_THISCALL F_00583610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x583610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00583630 */
GEN_NOFRAME uint GEN_THISCALL F_00583630(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x583630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a16dc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c08));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 200) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b90));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd4) = (*(undefined * PTR32 (*)[5])REFP(0x10a0ba8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[5])REFP(0x10a0bc0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[5])REFP(0x10a0bd8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[5])REFP(0x10a0bf0));
  *(undefined * PTR32 * PTR32 *)((int)this + 300) = (*(undefined * PTR32 (*)[5])REFP(0x10a0c10));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x13c) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c84));
  *(undefined4 *)((int)this + 0x140) = 0;
  F_0055b910((undefined *)((int)this + 0x2c0) GEN_EDX_FWD);
  F_005643c0(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00583700 */
GEN_NOFRAME uint GEN_THISCALL F_00583700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x583700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c0) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c50));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x13c) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c84));
  *(undefined * PTR32 * PTR32 *)((int)this + 300) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c08));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd4) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 200) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00583770 */
GEN_FRAME uint GEN_THISCALL F_00583770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x583770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  uint in_EAX = 0;
  int iVar3;
  uint uVar4;
  undefined4 extraout_EAX = 0;
  undefined * this_00;
  
  this_00 = (undefined *)(REFG(int, 0x1379860) + 0x220);
  uVar4 = in_EAX & 0xffffff00;
  iVar2 = *(int *)this;
joined_r0x0058378d: ;
  do {
    if (iVar2 == 0) {
      return uVar4;
    }
    if (((param_1 == 0x49) ||
        ((((*(uint *)(iVar2 + 0x14) & 0xff) == param_1 && (*(int *)(iVar2 + 0xc) == param_2)) &&
         (((byte)(*(uint *)(iVar2 + 0x14) >> 0x14) & 1) == (byte)param_4)))) &&
       (*(int *)(iVar2 + 8) == param_3)) {
      if ((*(uint *)(iVar2 + 0x14) & 0x40000) == 0) {
        F_0057e530(this_00 GEN_EDX_FWD,iVar2);
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
        uVar4 = F_00406ad0(iVar2);
        uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
        iVar2 = iVar1;
        goto joined_r0x0058378d;
      }
      *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 0x20000;
      F_0057e530(this_00 GEN_EDX_ARG,iVar2);
      uVar4 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
    iVar2 = *(int *)(iVar2 + 0x10);
  } while( true );
}

/* ref: FUN_00583840 */
GEN_FRAME byte GEN_THISCALL F_00583840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x583840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_1 + 8);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_1 + 0xc);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_1 + 0x10);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 0x14);
  iVar4 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
  (*(byte *)(gen_frame + 0x2b)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(param_1 + 0x18);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(param_1 + 0x1c);
  do {
    while( true ) {
      if (iVar4 == 0) {
        iVar4 = *(int *)((int)this + 4);
        if (iVar4 != *(int *)((int)this + 8)) {
          F_00c46e20(iVar4,*(int *)((int)this + 8),0);
          *(int *)((int)this + 8) = iVar4;
        }
        F_0056f680(*(undefined * PTR32 *)this GEN_EDX_ARG);
        return (*(byte *)(gen_frame + 0x2b));
      }
      piVar1 = *(int * PTR32 *)((int)this + 4);
      iVar2 = *piVar1;
      *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xffd4ffff | 0x40000;
      *(undefined1 *)((int)this + 0x14) = 0;
      (*(int * PTR32 *)(gen_frame + 0x24)) = piVar1;
      if ((*(uint *)(iVar2 + 0x14) & 0x100000) == 0) break;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 8) + 4))))
                (*(undefined4 *)(iVar2 + 8),(uint)(*(ushort *)(iVar2 + 0x14) & 0xff),
                 *(undefined4 *)(iVar2 + 0xc),iVar2,&(*(undefined4 *)(gen_frame + 0xc)));
LAB_00583967: ;
      uVar3 = *(uint *)(iVar2 + 0x14) >> 0x15;
      if ((uVar3 & 1) != 0) {
        *(byte *)(param_1 + 2) =
             *(byte *)(param_1 + 2) ^ ((char)uVar3 * '\x02' ^ *(byte *)(param_1 + 2)) & 2;
        *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xffdfffff;
      }
      *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xfffbffff;
      if (((*(byte *)(gen_frame + 0x2b)) == 0) && ((*(uint *)(iVar2 + 0x14) & 0x10000) != 0)) {
        (*(byte *)(gen_frame + 0x2b)) = 1;
      }
      if (iVar4 == *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2) {
        F_00c46e20((*(int * PTR32 *)(gen_frame + 0x24)),(*(int * PTR32 *)(gen_frame + 0x24)) + 1,(*(int *)((int)this + 8) - (int)((*(int * PTR32 *)(gen_frame + 0x24)) + 1) >> 2) * 4);
        *(int *)((int)this + 8) = *(int *)((int)this + 8) - 4;
      }
      iVar4 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 8) + 8))))
              (*(undefined4 *)(iVar2 + 8),(uint)(*(ushort *)(iVar2 + 0x14) & 0xff),
               *(undefined4 *)(iVar2 + 0xc),iVar2,&(*(undefined4 *)(gen_frame + 0xc)));
    if ((*(char *)((int)this + 0x14) == '\0') ||
       (iVar4 == *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2)) {
      if ((*(uint *)(iVar2 + 0x14) & 0x80000) != 0) {
        *(uint *)(param_1 + 4) = (uint)*(byte *)(iVar2 + 0x15);
        *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xfff7ffff;
      }
      goto LAB_00583967;
    }
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
    iVar4 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
    if (((*(byte *)(gen_frame + 0x2b)) == 0) && ((*(byte *)(iVar2 + 0x16) & 1) != 0)) {
      (*(byte *)(gen_frame + 0x2b)) = 1;
    }
  } while( true );
}

/* ref: FUN_00583a30 */
GEN_FRAME uint GEN_THISCALL F_00583a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x583a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  if (piVar3 != piVar2) {
    while (param_1 != *piVar3) {
      piVar3 = piVar3 + 1;
      if (piVar3 == piVar2) {
        return (uint)piVar2;
      }
    }
    piVar2 = (int *)F_00c46e20(piVar3,piVar3 + 1,((int)piVar2 - (int)(piVar3 + 1) >> 2) * 4);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 4;
    if (param_1 != 0) {
      iVar1 = *(int *)(param_1 + 4);
      if (iVar1 != 0) {
        F_00429760(iVar1,(*(int *)(param_1 + 0xc) - iVar1 >> 2) * 4,400);
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      piVar2 = (int *)F_00406ad0(param_1);
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00583ab0 */
GEN_FRAME uint GEN_THISCALL F_00583ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x583ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined * this_00;
  byte bVar6;
  undefined4 * this_01;
  int iVar7;
  
  if (*(int *)((int)this + 4) == 0) {
    piVar2 = (int *)F_00404270();
    pvVar3 = (undefined *)F_00406bd0(0x980,0,piVar2,0);
    if (pvVar3 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = (undefined *)F_005cc9f0(pvVar3 GEN_EDX_ARG);
    }
    *(undefined * PTR32 *)((int)this + 0x24) = pvVar3;
    F_00558c30(pvVar3 GEN_EDX_ARG,this);
    *(ushort *)((int)this + 8) = (ushort)param_1;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,(uint)(ushort)param_1 * 0x74,0x10)));
    *(undefined * PTR32 *)((int)this + 4) = pvVar3;
    F_00c48350(pvVar3,0,(uint)*(ushort *)((int)this + 8) * 0x74);
    puVar4 = (undefined4 *)F_00406c00(0x7e4,0,piVar2,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 6;
      puVar4 = puVar4 + 1;
      param_1 = 5;
      this_01 = puVar4;
      do {
        F_0057e5a0(this_01 GEN_EDX_ARG);
        this_01 = this_01 + 0x54;
        param_1 = param_1 - 1;
      } while (-1 < param_1);
    }
    *(undefined4 * PTR32 *)this = puVar4;
    iVar7 = 0;
    do {
      F_00557cf0((undefined *)(*(int *)this + iVar7) GEN_EDX_ARG,param_2,this,*(undefined4 *)((int)this + 0x24));
      iVar7 = iVar7 + 0x150;
    } while (iVar7 < 0x7e0);
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0x1c,0x10)));
    *(undefined4 * PTR32 *)((int)this + 0xc) = puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    uVar1 = REFG(undefined4, 0x1306878);
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,REFG(undefined4, 0x1306878),0x10);
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0xdc,0x10)));
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0x14,0x10)));
    if (pvVar3 == (undefined *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = F_00405b40(pvVar3 GEN_EDX_ARG,uVar5,uVar1,0,0,0,0,0);
    }
    *(uint *)((int)this + 0x10) = uVar5;
    if (this_00 == (undefined *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = F_004050c0(this_00 GEN_EDX_ARG,uVar5,0,0x10);
    }
    *(uint *)((int)this + 0x14) = uVar5;
    *(undefined4 *)((int)this + 0x20) = param_3;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0xf0,0x10)));
    *(undefined * PTR32 *)((int)this + 0x28) = pvVar3;
    F_00c48350(pvVar3,0,0xf0);
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0x2000,0x10)));
    *(undefined * PTR32 *)((int)this + 0x2c) = pvVar3;
    F_00c48350(pvVar3,0,0x2000);
    piVar2 = &REFG(undefined4, 0x10a1728);
    bVar6 = 0;
    do {
      iVar7 = piVar2[1];
      if (bVar6 < 0x1e) {
        *((int *)GEN_TOP(((uint)bVar6 * 8 + *(int *)((int)this + 0x28)))) = *piVar2;
        *((int *)GEN_TOP(((uint)bVar6 * 8 + 4 + *(int *)((int)this + 0x28)))) = iVar7;
      }
      piVar2 = piVar2 + 2;
      bVar6 = bVar6 + 1;
    } while (*piVar2 != 0);
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00583cc0 */
GEN_FRAME uint GEN_THISCALL F_00583cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x583cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  float fVar2;
  short sVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  iVar1 = param_1 * 0x150 + 100 + *(int *)this;
  fVar2 = *(float *)(iVar1 + 4);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar1 + 0x1c);
  sVar3 = (short)param_4;
  if ((short)param_4 == 0) {
    sVar3 = -1;
  }
  (*(short *)(gen_frame + 0x8)) = sVar3;
  (*(undefined1 *)(gen_frame + 0xc)) = (char)param_1;
  (*(undefined2 *)(gen_frame + 0xa)) = 0xffff;
  (*(undefined2 *)(gen_frame + 0xf)) = 0xffff;
  (*(undefined2 *)(gen_frame + 0x12)) = 0xffff;
  (*(undefined1 *)(gen_frame + 0xd)) = (char)(int)fVar2;
  (*(undefined1 *)(gen_frame + 0xe)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_FWD,param_3,REFG(undefined4, 0x108cc50));
  F_00580530(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,param_2,((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x4)),1);
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (uint)uVar4;
}

/* ref: FUN_00583d70 */
GEN_FRAME uint GEN_THISCALL F_00583d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x583d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    uVar2 = param_2;
    if ((*(uint *)((int)this + 0x50) & 0x4000000) != 0) {
      uVar2 = param_2 | 0x100;
    }
    if ((*(uint *)(param_1 + 0x10) != uVar2) || (*(int *)(param_1 + 0x24) != param_3)) {
      *(uint *)(param_1 + 0x10) = uVar2;
      *(int *)(param_1 + 0x24) = param_3;
      uVar1 = F_00577690(param_1 + 0x14,uVar2,param_3);
    }
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerBuildLink::vf3 */
GEN_FRAME uint GEN_THISCALL F_00583dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x583dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pAVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar6 = 0;
  local_8 = 0;
  local_c = 0;
  uVar2 = 0;
  if (this[0x16e] != (undefined1)0x0) {
    iVar3 = *(int *)(this + 0x174);
    pAVar1 = this + 0x174;
    if (iVar3 != 0) {
      local_8 = *(undefined4 *)(iVar3 + 0x14);
      local_c = *(undefined4 *)(iVar3 + 0x20);
      uVar6 = *(undefined4 *)(iVar3 + 0x10);
      uVar2 = *(undefined2 *)(iVar3 + 0x1e);
      *(int *)(iVar3 + 8) = (int)*(float *)(this + 0x158);
      *(int *)(*(int *)pAVar1 + 0xc) =
           (int)((float10)*(float *)(this + 0x15c) + (float10)*(float *)(this + 0x148));
      F_005cd7d0(*(undefined * PTR32 *)(this + 0x170) GEN_EDX_FWD,pAVar1);
      *(int *)pAVar1 = 0;
    }
  }
  uVar4 = F_005585d0((undefined *)this GEN_EDX_ARG,param_1);
  *(short *)(this + 0x16c) = *(short *)(this + 0x16c) + 1;
  if (this[0x16e] != (undefined1)0x0) {
    uVar4 = F_00404270();
    piVar5 = (int *)F_00406bd0(0x30,0,uVar4,0);
    *(int * PTR32 *)(this + 0x174) = piVar5;
    *piVar5 = (int)*(float *)(this + 0x158);
    *((int *)GEN_TOP((*(int *)(this + 0x174) + 4))) = (int)*(float *)(this + 0x15c);
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x174) + 0x10))) = uVar6;
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x174) + 0x14))) = local_8;
    *((undefined2 *)GEN_TOP((*(int *)(this + 0x174) + 0x18))) = *(undefined2 *)(this + 0x168);
    *((undefined2 *)GEN_TOP((*(int *)(this + 0x174) + 0x1a))) = *(undefined2 *)(this + 0x16c);
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x174) + 0x20))) = local_c;
    *((undefined2 *)GEN_TOP((*(int *)(this + 0x174) + 0x1e))) = uVar2;
    uVar4 = *(uint *)(this + 0x174);
    *(undefined4 *)(uVar4 + 0x2c) = *(undefined4 *)(this + 0x34);
  }
  return uVar4;
}

/* ref: FUN_00583f00 */
GEN_NOFRAME uint GEN_THISCALL F_00583f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x583f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0xbc) != (undefined *)0x0) {
    F_005691b0(*(undefined * PTR32 *)((int)this + 0xbc) GEN_EDX_FWD);
  }
  F_00583ab0((undefined *)((int)this + 0xec) GEN_EDX_ARG,0x1e,(int)this + 0xbc,(int)this + 0x124);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa8))(this GEN_EDX_ARG,1,0);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf23 */
GEN_FRAME uint GEN_THISCALL F_00583f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x583f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_0057f810(*(undefined * PTR32 *)(this + 0x130) GEN_EDX_FWD,param_1);
    if (uVar1 != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x28))))
                        (*(int * PTR32 *)(this + 0x130) GEN_EDX_ARG,uVar1,param_2,param_3);
      return uVar1;
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf26 */
GEN_FRAME byte GEN_THISCALL F_00583f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x583f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  bVar1 = F_00580050(*(undefined * PTR32 *)(this + 0x130) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: Component::GUI2::AtkModule::vf27 */
GEN_FRAME byte GEN_THISCALL F_00583fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x583fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  bVar1 = F_005800f0(*(undefined * PTR32 *)(this + 0x130) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: Component::GUI2::AtkModule::vf28 */
GEN_FRAME byte GEN_THISCALL F_00583fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x583fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  bVar1 = F_00580170(*(undefined * PTR32 *)(this + 0x130) GEN_EDX_FWD,param_1,param_2);
  return bVar1;
}

/* ref: Component::GUI2::AtkModule::vf47 */
GEN_FRAME unsigned int GEN_THISCALL F_00584000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x584000u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((*(int *)&gen_args[1]) != 0) {
    F_005c6630((*(undefined * PTR32 *)&gen_args[0]) + 0x22228 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
    F_005c9de0((*(undefined * PTR32 *)&gen_args[0]) + 0x22228 GEN_EDX_ARG,&(*(int *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  }
  return;
}

/* ref: FUN_00584040 */
GEN_FRAME uint GEN_THISCALL F_00584040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x584040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005cf050(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,0x22,param_1,(int)this + 0x14);
  return uVar1;
}

/* ref: FUN_00584060 */
GEN_FRAME uint GEN_THISCALL F_00584060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x584060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005cf050(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,0x11,param_1,(int)this + 0x14);
  return uVar1;
}

/* ref: FUN_00584080 */
GEN_FRAME uint GEN_THISCALL F_00584080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x584080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005cf050(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,0x10,param_1,(int)this + 0x14);
  return uVar1;
}

/* ref: FUN_005840a0 */
GEN_FRAME uint GEN_THISCALL F_005840a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5840a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((this != (undefined *)0x0) && (*(undefined * PTR32 *)((int)this + 0x80) != (undefined *)0x0)) {
    uVar1 = F_00583770(*(undefined * PTR32 *)((int)this + 0x80) GEN_EDX_FWD,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_005840c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005840c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5840c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0ef4));
  if (this_00 != (undefined *)0x0) {
    F_005c8de0(this_00 GEN_EDX_FWD);
    F_00406ad0(this_00);
    *(undefined4 *)((int)this + 0xf8) = 0;
  }
  F_0042c880((undefined *)((int)this + 0x9c) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return;
}

/* ref: FUN_00584110 */
GEN_FRAME uint GEN_THISCALL F_00584110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x584110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * this_00;
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  char * pcVar4;
  undefined * pvVar5;
  uint uVar6;
  int iVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  pcVar4 = (char *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c));
  (*(char * PTR32 *)(gen_frame + 0x78)) = pcVar4;
  if (this == (undefined *)0x0) goto LAB_0058428c;
  this_00 = (undefined *)((int)this + 0x9c);
  (*(bool *)(gen_frame + 0x23)) = **(char * PTR32 *)((int)this + 0x9c) == '\0';
  if (param_1 == (char *)0x0) {
    pcVar4 = "";
LAB_0058423c: ;
    F_0042e430(this_00 GEN_EDX_FWD,pcVar4);
  }
  else if ((*(byte *)((int)this + 0xfe) & 0x40) == 0) {
    pcVar4 = param_1;
    if ((*(byte *)((int)this + 0xff) & 4) == 0) goto LAB_0058423c;
    sVar3 = *(short *)((int)this + 0x7c) - 5;
    bVar1 = *(byte *)((int)this + 0xfc);
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = *((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 8) + 0x18)));
    uVar2 = *(undefined1 *)((int)this + 0xfd);
    (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
    if (sVar3 == 0) {
      sVar3 = -1;
    }
    (*(byte *)(gen_frame + 0x14)) = bVar1 >> 4;
    (*(short *)(gen_frame + 0x10)) = sVar3;
    (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
    (*(undefined1 *)(gen_frame + 0x15)) = uVar2;
    (*(undefined2 *)(gen_frame + 0x12)) = 0xffff;
    (*(undefined2 *)(gen_frame + 0x16)) = 0xff01;
    (*(undefined2 *)(gen_frame + 0x1a)) = 0xffff;
    F_0042cc20(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
    F_00580670((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,this_00,((undefined1 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0xc)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
  }
  else {
    F_0042aca0(this_00 GEN_EDX_ARG);
    pvVar5 = (undefined *)F_005684e0(this GEN_EDX_ARG,0);
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar5;
    F_00583cc0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 8) GEN_EDX_ARG,(uint)(*(byte *)((int)this + 0xfc) >> 4),this_00,
                 param_1,(uint)*(ushort *)((int)this + 0x7c));
    puVar8 = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0xa8);
    puVar9 = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 100);
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  uVar6 = F_0042a990((int)this + 0x9c GEN_EDX_ARG);
  *(uint *)((int)this + 0xf0) = uVar6;
  pcVar4 = *(char * PTR32 *)((int)this + 0x9c);
  if (*pcVar4 == '\0') {
    *(uint *)((int)this + 0x84) = *(uint *)((int)this + 0x84) & 0xffefffff;
  }
  else if ((*(bool *)(gen_frame + 0x23)) != false) {
    *(uint *)((int)this + 0x84) = *(uint *)((int)this + 0x84) | 0x100000;
  }
  if ((*(byte *)((int)this + 0xfe) & 1) != 0) {
    pcVar4 = (char *)F_00578070(this GEN_EDX_ARG);
  }
LAB_0058428c: ;
  F_00c47745((uint)(*(char * PTR32 *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return (uint)pcVar4;
}

/* ref: FUN_005842a0 */
GEN_FRAME unsigned int GEN_THISCALL F_005842a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5842a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (this != (undefined *)0x0) {
    uVar1 = F_0056c6b0(*(undefined4 *)(REFG(int, 0x1379860) + 0x30),param_1,
                         (uint)*(byte *)((int)this + 0x114));
    F_00584110(this GEN_EDX_ARG,uVar1);
  }
  return;
}

/* ref: FUN_005842e0 */
GEN_FRAME byte GEN_THISCALL F_005842e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5842e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined * this_00;
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined1 uVar4;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (param_1 != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 8) + 0x18)));
    F_0042b630(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_FWD);
    if (this == (undefined *)0x0) {
      sVar2 = 0;
      uVar4 = 0;
    }
    else {
      sVar2 = *(short *)((int)this + 0x7c);
      uVar4 = *(undefined1 *)((int)this + 0xfd);
    }
    sVar2 = sVar2 - 5;
    bVar1 = *(byte *)((int)this + 0xfc);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    if (sVar2 == 0) {
      sVar2 = -1;
    }
    (*(byte *)(gen_frame + 0x8)) = bVar1 >> 4;
    (*(short *)(gen_frame + 0x4)) = sVar2;
    (*(undefined1 *)(gen_frame + 0xc)) = 0xff;
    (*(undefined1 *)(gen_frame + 0x9)) = uVar4;
    (*(undefined2 *)(gen_frame + 0x6)) = 0xffff;
    (*(undefined2 *)(gen_frame + 0xa)) = 0xff01;
    (*(undefined2 *)(gen_frame + 0xe)) = (undefined2)param_2;
    F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
    bVar1 = F_00580670(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x0)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    F_00584110(this GEN_EDX_ARG,uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
    return bVar1 == 0;
  }
  F_0042e430((undefined *)((int)this + 0x9c) GEN_EDX_ARG,"");
  uVar3 = F_0042a990((int)this + 0x9c GEN_EDX_ARG);
  *(uint *)((int)this + 0xf0) = uVar3;
  *(uint *)((int)this + 0x84) = *(uint *)((int)this + 0x84) & 0xffefffff;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00584440 */
GEN_FRAME byte GEN_THISCALL F_00584440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x584440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  byte bVar1;
  short sVar2;
  undefined1 uVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  if (param_1 != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 8) + 0x18)));
    if ((*(uint *)&REFG(undefined, 0x1379b5c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x1379b5c) = *(uint *)&REFG(undefined, 0x1379b5c) | 1;
      F_0042b630(&REFG(undefined, 0x1379b08) GEN_EDX_FWD);
      F_00c47de6(((code *)REFP(0x107be10)));
    }
    if (this == (undefined *)0x0) {
      sVar2 = 0;
      uVar3 = 0;
    }
    else {
      sVar2 = *(short *)((int)this + 0x7c);
      uVar3 = *(undefined1 *)((int)this + 0xfd);
    }
    sVar2 = sVar2 - 5;
    bVar1 = *(byte *)((int)this + 0xfc);
    (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
    if (sVar2 == 0) {
      sVar2 = -1;
    }
    (*(byte *)(gen_frame + 0xc)) = bVar1 >> 4;
    (*(short *)(gen_frame + 0x8)) = sVar2;
    (*(undefined1 *)(gen_frame + 0x10)) = 0xff;
    (*(undefined1 *)(gen_frame + 0xd)) = uVar3;
    (*(undefined2 *)(gen_frame + 0xa)) = 0xffff;
    (*(undefined2 *)(gen_frame + 0xe)) = 0xff01;
    (*(undefined2 *)(gen_frame + 0x12)) = 0xffff;
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
    bVar1 = F_00580670(this_00 GEN_EDX_ARG,&REFG(undefined, 0x1379b08),((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x4)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return bVar1 == 0;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00584550 */
GEN_NOFRAME uint GEN_THISCALL F_00584550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x584550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  ushort uVar2;
  undefined * this_00;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar1 = *(undefined4 *)((int)this + 0xf0);
  this_00 = (undefined *)F_005684e0(this GEN_EDX_FWD,1);
  uVar2 = F_00576af0(this_00 GEN_EDX_ARG,uVar1);
  puVar4 = (undefined4 *)((int)this_00 + 0xa8);
  puVar5 = (undefined4 *)((int)this_00 + 100);
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return uVar2 + 1;
}

/* ref: FUN_00584580 */
GEN_FRAME uint GEN_THISCALL F_00584580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x584580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int in_ecx;
  byte bVar1;
  undefined * this_00;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar3;
  if (((byte)param_1 != 0) &&
     (*(byte *)((int)this + 0xfe) = *(byte *)((int)this + 0xfe) | 0x80,
     *(char *)((int)this + 0x116) == '\0')) {
    cVar2 = *(char *)((int)this + 0xfd) + '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar2);
    *(char *)((int)this + 0x116) = cVar2;
  }
  if (this != (undefined *)0x0) {
    bVar1 = *(byte *)((int)this + 0xfe);
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
    if (((bVar1 >> 6 & 1) != (byte)param_1) &&
       (*(byte *)((int)this + 0xfe) = ((byte)param_1 << 6 ^ bVar1) & 0x40 ^ bVar1,
       (byte)param_1 != 0)) {
      in_ecx = (int)this + 0x9c;
      F_0042cbc0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,in_ecx);
      F_0042aca0(in_ecx GEN_EDX_ARG);
      uVar3 = F_005684e0(this GEN_EDX_ARG,1);
      this_00 = *(undefined * PTR32 *)(REFG(int, 0x1379860) + 8);
      uVar4 = (uint)*(ushort *)((int)this + 0x7c);
      uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      F_00583cc0(this_00 GEN_EDX_ARG,(uint)(*(byte *)((int)this + 0xfc) >> 4),in_ecx,uVar5,uVar4);
      puVar7 = (undefined4 *)(uVar3 + 0xa8);
      puVar8 = (undefined4 *)(uVar3 + 100);
      for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar3 = F_0042a990(in_ecx GEN_EDX_ARG);
      *(uint *)((int)this + 0xf0) = uVar3;
      uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      uVar3 = (uint)uVar9;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00584680 */
GEN_FRAME uint GEN_THISCALL F_00584680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x584680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  undefined * this_00;
  undefined * this_01;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int in_ecx;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  double dVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  uVar3 = param_2;
  if ((this != (undefined *)0x0) && (1 < param_1)) {
    this_01 = (undefined *)F_005684e0(this GEN_EDX_FWD,1);
    uVar3 = 0;
    if (this_01 != (undefined *)0x0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      F_0042b630(((char * PTR32 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
      F_0042b630(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
      uVar3 = (uint)*(ushort *)((int)this + 0x7c);
      uVar6 = 1;
      uVar5 = 1;
      if (1 < param_1) {
        do {
          if ((*(byte *)(param_2 + uVar5 * 8) & 0xf) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined4 *)(param_2 + 4 + uVar5 * 8);
          }
          F_0042d540(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG,uVar1);
          uVar11 = 0;
          uVar1 = REFG(undefined4, 0x108cc50);
          uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
          dVar10 = F_00576610(this_01 GEN_EDX_ARG,uVar2,uVar11,uVar1);
          if ((int)((uVar6 & 0xffff) * uVar3) < (int)((int)TRUNC(dVar10) & 0xffffU)) {
            if (*((char * PTR32 *)(gen_frame + 0xb0))[0] == '\0') {
              uVar6 = uVar6 + 1;
              goto LAB_0058478d;
            }
            uVar6 = F_0042cdb0(((char * PTR32 *)(gen_frame + 0xb0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x109fa28));
            F_0042d4d0(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,uVar6);
            F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
            F_0042e430(((char * PTR32 *)(gen_frame + 0xb0)) GEN_EDX_ARG,&REFG(undefined, 0x109ce7d));
            F_0042e430(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG,&REFG(undefined, 0x109ce7e));
            uVar6 = 1;
          }
          else {
LAB_0058478d: ;
            F_0042ccf0(((char * PTR32 *)(gen_frame + 0xb0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x104)));
            uVar2 = F_004311a0(param_2 GEN_EDX_ARG);
            F_0042d540(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG,uVar2);
            uVar5 = uVar5 + 1;
          }
        } while (uVar5 < param_1);
      }
      F_0042d4d0(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0xb0)));
      in_ecx = (int)this + 0x9c;
      F_0042aca0(in_ecx GEN_EDX_ARG);
      this_00 = *(undefined * PTR32 *)(REFG(int, 0x1379860) + 8);
      uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      F_00583cc0(this_00 GEN_EDX_ARG,(uint)(*(byte *)((int)this + 0xfc) >> 4),in_ecx,uVar5,uVar3);
      puVar7 = (undefined4 *)((int)this_01 + 0xa8);
      puVar8 = (undefined4 *)((int)this_01 + 100);
      for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar3 = F_0042a990(in_ecx GEN_EDX_ARG);
      *(uint *)((int)this + 0xf0) = uVar3;
      F_0042c880(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
      F_0042c880(((char * PTR32 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
      uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      uVar3 = (uint)uVar9;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_005848c0 */
GEN_FRAME unsigned int GEN_THISCALL F_005848c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5848c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 uVar10;
  
  if (this != (undefined *)0x0) {
    if (((char)param_1 != '\0') && (*(int *)((int)this + 0xf8) == 0)) {
      uVar10 = 0;
      uVar5 = F_00404270();
      pvVar6 = (undefined *)F_00406bd0(0xc,0,uVar5,uVar10);
      if (pvVar6 == (undefined *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = F_005c8db0(pvVar6 GEN_EDX_ARG);
      }
      *(uint *)((int)this + 0xf8) = uVar5;
    }
    *(byte *)((int)this + 0xff) =
         *(byte *)((int)this + 0xff) ^ ((char)param_1 * '\x02' ^ *(byte *)((int)this + 0xff)) & 2;
    if (*(int * PTR32 *)((int)this + 0xf8) != (int *)0x0) {
      piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0xf8)));
      piVar4 = (int *)*piVar1;
      while (piVar4 != piVar1) {
        piVar2 = *(int * PTR32 *)((int)this + 0xf8);
        iVar7 = piVar4[2];
        piVar3 = (int *)*piVar4;
        if (piVar4 != (int *)*piVar2) {
          *(int * PTR32 *)piVar4[1] = piVar3;
          *(int *)(*piVar4 + 4) = piVar4[1];
          F_00429760(piVar4,0xc,400);
          piVar2 = piVar2 + 1;
          *piVar2 = *piVar2 - 1;
        }
        piVar4 = piVar3;
        if (iVar7 != 0) {
          F_00406ad0(iVar7);
        }
      }
      F_005c4820(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG);
    }
    if (((*(byte *)((int)this + 0xff) & 2) != 0) && (*(int *)((int)this + 0xf8) != 0)) {
      *(undefined2 *)((int)this + 0x118) = 0xffff;
      pvVar6 = (undefined *)F_005684e0(this GEN_EDX_ARG,1);
      if (pvVar6 != (undefined *)0x0) {
        F_00577400(pvVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xf0),*(undefined4 *)((int)this + 0xf8));
        puVar8 = (undefined4 *)((int)pvVar6 + 0xa8);
        puVar9 = (undefined4 *)((int)pvVar6 + 100);
        for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
    }
  }
  return;
}

/* ref: Component::GUI2::AtkImageNodeRenderer::vf4 */
GEN_FRAME uint GEN_THISCALL F_005849f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5849f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte * pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = (*(int *)&gen_args[1]);
  bVar2 = *(byte *)((*(int *)&gen_args[1]) + 0x93);
  (*(int *)(gen_frame + 0x8)) = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0x8c) + 8))) +
                    (uint)*(ushort *)((*(int *)&gen_args[1]) + 0x90) * 0xc)));
  F_005ba3d0(&(*(int *)&gen_args[1]),&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)),(*(int *)&gen_args[1]),(uint)(bVar2 >> 4 & 7),
               (uint)*(byte *)((*(int *)&gen_args[1]) + 0x92));
  iVar5 = (*(int *)(gen_frame + 0x8));
  if ((bVar2 & 4) == 0) {
    iVar6 = 2;
    if ((bVar2 & 8) == 0) {
      iVar6 = (*(int *)&gen_args[1]);
    }
  }
  else {
    iVar6 = 1;
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) + 0x74))) = iVar6;
  iVar6 = *(int *)((*(int *)(gen_frame + 0x8)) + 8);
  if (iVar6 == 0) {
    if (*(int *)((*(int *)(gen_frame + 0x8)) + 0xc) != 0) {
      iVar6 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x8)) + 0xc) + 0xfc)));
      goto LAB_00584a9a;
    }
  }
  else if (iVar6 == 1) {
    if (*(int *)((*(int *)(gen_frame + 0x8)) + 0xc) != 0) {
      iVar6 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x8)) + 0xc) + 0x18)));
      goto LAB_00584a9a;
    }
  }
  else if (iVar6 == 2) {
    iVar6 = *(int *)((*(int *)(gen_frame + 0x8)) + 0xc);
    goto LAB_00584a9a;
  }
  iVar6 = 0;
LAB_00584a9a: ;
  iVar3 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((*(int *)(iVar3 + 0x10) != (*(int *)(gen_frame + 0x4))) || (*(int *)(iVar3 + 0x24) != iVar6)) {
    *(int *)(iVar3 + 0x10) = (*(int *)(gen_frame + 0x4));
    *(int *)(iVar3 + 0x24) = iVar6;
    F_00577690(iVar3 + 0x14,(*(int *)(gen_frame + 0x4)),iVar6);
  }
  if ((*(uint *)(iVar4 + 0x84) & 0x40000000) == 0) {
    uVar7 = (uint)(ushort)((*((short *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x2c))) -
                           ((ushort)((uint)*(undefined4 *)(iVar4 + 0x88) >> 0x14) & 1)) * 0x40);
    if (uVar7 < 0xffff) {
      uVar7 = 0xffff - uVar7;
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = F_005596f0(*(float *)(iVar4 + 0x60));
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) + 0x70))) = uVar7;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) + 0x78))) = (*(undefined4 *)(gen_frame + 0x0));
  pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) + 0xa4)));
  *pbVar1 = *pbVar1 & 0xfe;
  uVar8 = F_005cf050(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) GEN_EDX_ARG,0x22,4,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x14);
  uVar7 = 0;
  if (uVar8 != 0) {
    uVar7 = F_00571010(uVar8,iVar4,iVar5,1,0);
  }
  return uVar7;
}

/* ref: FUN_00584b60 */
GEN_NOFRAME uint GEN_THISCALL F_00584b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x584b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1c0];
  byte * pbVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  short sVar13;
  short * psVar14;
  short * psVar15;
  
  (*(uint *)(gen_frame + 0x1ac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1b0);
  F_00568720(((undefined1 *)(gen_frame + 0x138)),param_1);
  uVar8 = *(undefined4 *)(param_1 + 0x68);
  (*(uint *)(gen_frame + 0x20)) = (uint)*(uint3 *)(param_1 + 0x6e);
  (*(uint *)(gen_frame + 0x1c)) = (uint)*(ushort *)(param_1 + 0x6c);
  if ((*(uint *)(param_1 + 0x84) & 0x40000000) == 0) {
    uVar9 = *(byte *)(param_1 + 0x9c) | 0x12000;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
  }
  else {
    uVar9 = *(byte *)(param_1 + 0x9c) | 74000;
    (*(undefined4 *)(gen_frame + 0x28)) = 0x10;
  }
  iVar10 = uVar9 << 4;
  if ((*(uint *)&REFG(undefined, 0x1379ba8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1379ba8) = *(uint *)&REFG(undefined, 0x1379ba8) | 1;
    REFG(float, 0x1379b60) = REFG(float, 0x1087f04);
    REFG(float, 0x1379b64) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b68) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379b68), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379b6c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379b6c), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379b70) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379b70), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379b74) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379b74), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379b78) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379b78), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379b7c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379b7c), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379b80) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379b80), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379b84) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379b84), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379b88) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379b88), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379b8c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379b8c), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379b90) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379b90), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379b94) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379b94), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379b98) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379b98), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379b9c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379b9c), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379ba0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379ba0), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379ba4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379ba4), REFG(float, 0x1087f04));
  }
  F_005689b0(&REFG(float, 0x1379b60),param_1,(uint)((undefined1 *)(gen_frame + 0x138)));
  F_00568ac0((uint)((undefined4 *)(gen_frame + 0x30)),&REFG(float, 0x1379b60),((undefined1 *)(gen_frame + 0x138)),param_1,1);
  iVar7 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) + *(int *)(param_1 + 0x90) * 0xc)));
  iVar12 = 0;
  if (iVar7 != 0) {
    iVar12 = *(int *)(iVar7 + 8);
    if (iVar12 == 0) {
      if (*(int *)(iVar7 + 0xc) != 0) {
        iVar12 = *((int *)GEN_TOP((*(int *)(iVar7 + 0xc) + 0xfc)));
        goto LAB_00584d44;
      }
    }
    else if (iVar12 == 1) {
      if (*(int *)(iVar7 + 0xc) != 0) {
        iVar12 = *((int *)GEN_TOP((*(int *)(iVar7 + 0xc) + 0x18)));
        goto LAB_00584d44;
      }
    }
    else if (iVar12 == 2) {
      iVar12 = *(int *)(iVar7 + 0xc);
      goto LAB_00584d44;
    }
    iVar12 = 0;
  }
LAB_00584d44: ;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0x74))) = 0;
  iVar7 = *(int *)((int)this + 4);
  if ((*(int *)(iVar7 + 0x10) != iVar10) || (*(int *)(iVar7 + 0x24) != iVar12)) {
    *(int *)(iVar7 + 0x10) = iVar10;
    *(int *)(iVar7 + 0x24) = iVar12;
    F_00577690(iVar7 + 0x14,iVar10,iVar12);
  }
  if ((*(uint *)(param_1 + 0x84) & 0x40000000) == 0) {
    uVar9 = (uint)(ushort)((*((short *)GEN_TOP((*(int *)((int)this + 8) + 0x2c))) -
                           ((ushort)((uint)*(undefined4 *)(param_1 + 0x88) >> 0x14) & 1)) * 0x40);
    if (uVar9 < 0xffff) {
      uVar9 = 0xffff - uVar9;
    }
    else {
      uVar9 = 0;
    }
  }
  else {
    uVar9 = F_005596f0(*(float *)(param_1 + 0x60));
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0x70))) = uVar9;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0x78))) = (*(undefined4 *)(gen_frame + 0x28));
  pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0xa4)));
  *pbVar1 = *pbVar1 & 0xfe;
  uVar11 = F_005cf050(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) GEN_EDX_ARG,0x22,0x24,
                        *(int *)((int)this + 4) + 0x14);
  uVar9 = 0;
  if (uVar11 != 0) {
    bVar3 = *(byte *)(param_1 + 0xa0);
    psVar14 = ((short *)(gen_frame + 0x13c));
    (*(byte * PTR32 *)(gen_frame + 0x0)) = ((byte *)GEN_TOP(((int)(*(undefined * PTR32 (*)[1])REFP(0x109fa2c)) + 1)));
    (*(float * PTR32 *)(gen_frame + 0xc)) = (float *)&REFG(float, 0x1379b60);
    (*(int *)(gen_frame + 0x4)) = 9;
    psVar15 = (short *)(uVar11 + 0x32);
    do {
      sVar5 = *psVar14;
      (*(short *)(gen_frame + 0x2c)) = psVar14[2] + sVar5;
      sVar6 = psVar14[1];
      sVar13 = psVar14[3] + sVar6;
      if ((bVar3 & 2) == 2) {
        (*(short *)(gen_frame + 0x2c)) = (short)(int)((float10)(int)(*(short *)(gen_frame + 0x2c)) * (float10)*(*(float * PTR32 *)(gen_frame + 0xc)));
        sVar13 = (short)(int)((float10)(int)sVar13 * (float10)(*(float * PTR32 *)(gen_frame + 0xc))[1]);
      }
      psVar15[-0x11] = sVar5;
      psVar15[-0x10] = sVar6;
      *psVar15 = sVar13;
      psVar15[-1] = sVar5;
      psVar15[0x10] = sVar13;
      psVar15[0xf] = (*(short *)(gen_frame + 0x2c));
      psVar15[0x1f] = (*(short *)(gen_frame + 0x2c));
      psVar15[0x20] = sVar6;
      bVar4 = (*(byte * PTR32 *)(gen_frame + 0x0))[-1];
      *(undefined4 *)(psVar15 - 0x15) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(psVar15 - 0x19) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4)];
      *(undefined4 *)(psVar15 - 0x17) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4 + 1)];
      *(undefined4 *)(psVar15 - 0x13) = *(undefined4 *)(param_1 + 100);
      *(uint *)(psVar15 - 0xb) = (*(uint *)(gen_frame + 0x1c));
      *(undefined4 *)(psVar15 - 0xd) = uVar8;
      *(uint *)(psVar15 - 0xf) = (*(uint *)(gen_frame + 0x20));
      bVar4 = *(*(byte * PTR32 *)(gen_frame + 0x0));
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(psVar15 - 9) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4)];
      *(undefined4 *)(psVar15 - 7) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4 + 1)];
      *(undefined4 *)(psVar15 - 5) = uVar2;
      *(undefined4 *)(psVar15 - 3) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(psVar15 + 3) = uVar8;
      *(uint *)(psVar15 + 5) = (*(uint *)(gen_frame + 0x1c));
      *(uint *)(psVar15 + 1) = (*(uint *)(gen_frame + 0x20));
      bVar4 = (*(byte * PTR32 *)(gen_frame + 0x0))[1];
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(psVar15 + 7) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4)];
      *(undefined4 *)(psVar15 + 9) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4 + 1)];
      *(undefined4 *)(psVar15 + 0xb) = uVar2;
      *(undefined4 *)(psVar15 + 0xd) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(psVar15 + 0x13) = uVar8;
      *(uint *)(psVar15 + 0x15) = (*(uint *)(gen_frame + 0x1c));
      *(uint *)(psVar15 + 0x11) = (*(uint *)(gen_frame + 0x20));
      bVar4 = (*(byte * PTR32 *)(gen_frame + 0x0))[2];
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(psVar15 + 0x17) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4)];
      *(undefined4 *)(psVar15 + 0x19) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4 + 1)];
      *(undefined4 *)(psVar15 + 0x1b) = uVar2;
      *(undefined4 *)(psVar15 + 0x1d) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(psVar15 + 0x23) = uVar8;
      *(uint *)(psVar15 + 0x25) = (*(uint *)(gen_frame + 0x1c));
      *(uint *)(psVar15 + 0x21) = (*(uint *)(gen_frame + 0x20));
      psVar14 = psVar14 + 6;
      (*(float * PTR32 *)(gen_frame + 0xc)) = (*(float * PTR32 *)(gen_frame + 0xc)) + 2;
      (*(byte * PTR32 *)(gen_frame + 0x0)) = (*(byte * PTR32 *)(gen_frame + 0x0)) + 4;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) - 1;
      uVar9 = (*(uint *)(gen_frame + 0x20));
      psVar15 = psVar15 + 0x40;
    } while ((*(int *)(gen_frame + 0x4)) != 0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x1ac)) ^ (uint)(uint)(gen_frame + 0x1b0) GEN_EDX_ARG);
  return uVar9;
}

/* ref: FUN_005850a0 */
GEN_NOFRAME uint GEN_THISCALL F_005850a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5850a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  byte * pbVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined * this_00;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 * puVar12;
  short sVar13;
  short * psVar14;
  short sVar15;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  uVar11 = *((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) + *(int *)(param_1 + 0x90) * 0xc;
  uVar9 = *(undefined4 *)(param_1 + 0x68);
  (*(uint *)(gen_frame + 0x24)) = (uint)*(ushort *)(param_1 + 0x6c);
  (*(uint *)(gen_frame + 0x28)) = (uint)*(uint3 *)(param_1 + 0x6e);
  if ((*(uint *)(param_1 + 0x84) & 0x40000000) == 0) {
    uVar10 = *(byte *)(param_1 + 0x9c) | 0x12000;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
  }
  else {
    uVar10 = *(byte *)(param_1 + 0x9c) | 74000;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
  }
  (*(uint *)(gen_frame + 0x38)) = uVar10 << 4;
  if ((*(uint *)&REFG(undefined, 0x1379bf8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1379bf8) = *(uint *)&REFG(undefined, 0x1379bf8) | 1;
    *(undefined4 *)&REFG(undefined, 0x1379bb0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bb0), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379bb4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bb4), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379bb8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bb8), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379bbc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bbc), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379bc0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bc0), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379bc4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bc4), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379bc8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bc8), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379bcc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bcc), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379bd0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bd0), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379bd4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bd4), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379bd8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bd8), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379bdc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bdc), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379be0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379be0), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379be4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379be4), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379be8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379be8), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379bec) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bec), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379bf0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bf0), REFG(float, 0x1087f04));
    *(undefined4 *)&REFG(undefined, 0x1379bf4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379bf4), REFG(float, 0x1087f04));
  }
  F_005689b0(&REFG(undefined, 0x1379bb0),param_1,uVar11);
  F_00568ac0((uint)((undefined4 *)(gen_frame + 0x40)),&REFG(undefined, 0x1379bb0),uVar11,param_1,1);
  if ((*(uint *)(param_1 + 0x84) & 0x40000000) == 0) {
    uVar10 = (uint)(ushort)((*((short *)GEN_TOP((*(int *)((int)this + 8) + 0x2c))) -
                            ((ushort)((uint)*(undefined4 *)(param_1 + 0x88) >> 0x14) & 1)) * 0x40);
    if (uVar10 < 0xffff) {
      (*(uint *)(gen_frame + 0x14)) = 0xffff - uVar10;
    }
    else {
      (*(uint *)(gen_frame + 0x14)) = 0;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x14)) = F_005596f0(*(float *)(param_1 + 0x60));
  }
  bVar3 = *(byte *)(param_1 + 0xa0);
  psVar14 = (short *)(uVar11 + 4);
  (*(uint *)(gen_frame + 0x30)) = 0;
  do {
    iVar7 = *(int *)(psVar14 - 2);
    (*(int *)(gen_frame + 0x2c)) = 0;
    if (iVar7 != 0) {
      iVar8 = *(int *)(iVar7 + 8);
      if (iVar8 == 0) {
        if (*(int *)(iVar7 + 0xc) == 0) goto LAB_0058533d;
        (*(int *)(gen_frame + 0x2c)) = *((int *)GEN_TOP((*(int *)(iVar7 + 0xc) + 0xfc)));
      }
      else if (iVar8 == 1) {
        if (*(int *)(iVar7 + 0xc) == 0) goto LAB_0058533d;
        (*(int *)(gen_frame + 0x2c)) = *((int *)GEN_TOP((*(int *)(iVar7 + 0xc) + 0x18)));
      }
      else if (iVar8 == 2) {
        (*(int *)(gen_frame + 0x2c)) = *(int *)(iVar7 + 0xc);
      }
      else {
LAB_0058533d: ;
        (*(int *)(gen_frame + 0x2c)) = 0;
      }
    }
    switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x30)))) {
    case 0: ;
    case 2: ;
    case 6: ;
    case 8: ;
      uVar10 = (*(uint *)(param_1 + 0x84) >> 0x1e | 6) << 0xc;
      uVar11 = (*(uint *)(gen_frame + 0x38)) & 0xffff6fff;
      break;
    case 1: ;
    case 7: ;
      (*(uint *)(gen_frame + 0x38)) = (*(uint *)(param_1 + 0x84) >> 0x1e & 1) << 0xd | (*(uint *)(gen_frame + 0x38)) & 0xffff9fff | 0x9000;
      goto LAB_005853e2;
    case 3: ;
    case 5: ;
      uVar10 = (*(uint *)(param_1 + 0x84) >> 0x1e & 1 | 4) << 0xd;
      uVar11 = (*(uint *)(gen_frame + 0x38)) & 0xffff8fff;
      break;
    default: ;
      uVar10 = (-(uint)((*(uint *)(param_1 + 0x84) & 0x40000000) != 0) & 0x1100) + 0x120000;
      uVar11 = (*(uint *)(gen_frame + 0x38)) & 0xffff0fff;
    }
    (*(uint *)(gen_frame + 0x38)) = uVar10 | uVar11;
LAB_005853e2: ;
    sVar5 = *psVar14;
    sVar15 = psVar14[2] + sVar5;
    sVar6 = psVar14[1];
    uVar2 = *(undefined4 *)psVar14;
    sVar13 = psVar14[3] + sVar6;
    if ((bVar3 & 2) == 2) {
      sVar15 = (short)(int)((float10)(int)sVar15 *
                           (float10)*(float *)(&REFG(undefined, 0x1379bb0) + (*(uint *)(gen_frame + 0x30)) * 8));
      sVar13 = (short)(int)((float10)(int)sVar13 *
                           (float10)*(float *)(&REFG(undefined, 0x1379bb4) + (*(uint *)(gen_frame + 0x30)) * 8));
    }
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x154)) + 0)) = sVar15;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x158)) + 0)) = sVar15;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14c)) + 2)) = sVar6;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x158)) + 2)) = sVar6;
    (*(undefined4 *)(gen_frame + 0x158)) = CONCAT22(sVar6,sVar15);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x150)) + 2)) = sVar13;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x154)) + 2)) = sVar13;
    (*(undefined4 *)(gen_frame + 0x154)) = CONCAT22(sVar13,sVar15);
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0x74))) = 0;
    iVar7 = *(int *)((int)this + 4);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14c)) + 0)) = sVar5;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x150)) + 0)) = sVar5;
    (*(undefined4 *)(gen_frame + 0x150)) = CONCAT22(sVar13,sVar5);
    (*(undefined4 *)(gen_frame + 0x14c)) = uVar2;
    if ((*(uint *)(iVar7 + 0x10) != (*(uint *)(gen_frame + 0x38))) || (*(int *)(iVar7 + 0x24) != (*(int *)(gen_frame + 0x2c)))) {
      *(uint *)(iVar7 + 0x10) = (*(uint *)(gen_frame + 0x38));
      *(int *)(iVar7 + 0x24) = (*(int *)(gen_frame + 0x2c));
      F_00577690(iVar7 + 0x14,(*(uint *)(gen_frame + 0x38)),(*(int *)(gen_frame + 0x2c)));
    }
    *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0x70))) = (*(uint *)(gen_frame + 0x14));
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0x78))) = (*(undefined4 *)(gen_frame + 0xc));
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0xa4)));
    *pbVar1 = *pbVar1 & 0xfe;
    iVar7 = *(int *)((int)this + 4) + 0x14;
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    if (*(int *)((int)this_00 + 0x74) == 1) {
      uVar11 = F_005bfe10(this_00 GEN_EDX_ARG,0x22,0x50,1);
      puVar12 = (undefined4 *)0x0;
      if (uVar11 != 0) {
        puVar12 = (undefined4 *)F_005c83b0(this_00 GEN_EDX_ARG,uVar11,0x22,4,iVar7);
        *(undefined4 *)(uVar11 + 0x3c) = 1;
        *(undefined4 *)(uVar11 + 0x24) = *(undefined4 *)((int)this_00 + 0x7c);
        *(uint *)(uVar11 + 0x30) = *(uint *)((int)this_00 + 0x88) & 0xfffffff;
        *(undefined4 *)(uVar11 + 0x40) = *(undefined4 *)((int)this_00 + 0x94);
        *(undefined4 *)(uVar11 + 0x44) = *(undefined4 *)((int)this_00 + 0x98);
        *(undefined4 *)(uVar11 + 0x48) = *(undefined4 *)((int)this_00 + 0x9c);
        *(undefined4 *)(uVar11 + 0x4c) = *(undefined4 *)((int)this_00 + 0xa0);
      }
    }
    else if (*(int *)((int)this_00 + 0x74) == 2) {
      uVar11 = F_005bfe10(this_00 GEN_EDX_ARG,0x22,0x50,1);
      if (uVar11 == 0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        puVar12 = (undefined4 *)F_005c83b0(this_00 GEN_EDX_ARG,uVar11,0x22,4,iVar7);
        *(undefined4 *)(uVar11 + 0x3c) = 2;
        *(undefined4 *)(uVar11 + 0x24) = *(undefined4 *)((int)this_00 + 0x7c);
        *(uint *)(uVar11 + 0x30) = *(uint *)((int)this_00 + 0x88) & 0xfffffff;
        *(undefined4 *)(uVar11 + 0x28) = *(undefined4 *)((int)this_00 + 0x80);
        *(uint *)(uVar11 + 0x34) = *(uint *)((int)this_00 + 0x8c) & 0xfffffff;
        *(undefined4 *)(uVar11 + 0x40) = *(undefined4 *)((int)this_00 + 0x94);
        *(undefined4 *)(uVar11 + 0x44) = *(undefined4 *)((int)this_00 + 0x98);
        *(undefined4 *)(uVar11 + 0x48) = *(undefined4 *)((int)this_00 + 0x9c);
        *(undefined4 *)(uVar11 + 0x4c) = *(undefined4 *)((int)this_00 + 0xa0);
      }
    }
    else {
      uVar11 = F_005bfe10(this_00 GEN_EDX_ARG,0x22,0x24,0);
      puVar12 = (undefined4 *)0x0;
      if (uVar11 != 0) {
        puVar12 = (undefined4 *)F_005c83b0(this_00 GEN_EDX_ARG,uVar11,0x22,4,iVar7);
      }
    }
    if (puVar12 != (undefined4 *)0x0) {
      bVar4 = *((byte *)GEN_TOP(((*(undefined * PTR32 (*)[1])REFP(0x109fa2c)) + (*(uint *)(gen_frame + 0x30)))));
      puVar12[2] = *(undefined4 *)(param_1 + 0x60);
      *puVar12 = ((undefined4 *)(gen_frame + 0x40))[(int)((uint)bVar4 * 4)];
      puVar12[1] = ((undefined4 *)(gen_frame + 0x40))[(int)((uint)bVar4 * 4 + 1)];
      puVar12[3] = *(undefined4 *)(param_1 + 100);
      puVar12[4] = (*(undefined4 *)(gen_frame + 0x14c));
      puVar12[6] = uVar9;
      puVar12[7] = (*(uint *)(gen_frame + 0x24));
      puVar12[5] = (*(uint *)(gen_frame + 0x28));
      uVar11 = (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 (*)[1])REFP(0x109fa2c)) + (*(uint *)(gen_frame + 0x30)) * 4 + 1)));
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      puVar12[8] = ((undefined4 *)(gen_frame + 0x40))[(int)(uVar11 * 4)];
      puVar12[9] = ((undefined4 *)(gen_frame + 0x40))[(int)(uVar11 * 4 + 1)];
      puVar12[10] = uVar2;
      puVar12[0xb] = *(undefined4 *)(param_1 + 100);
      puVar12[0xc] = (*(undefined4 *)(gen_frame + 0x150));
      puVar12[0xe] = uVar9;
      puVar12[0xf] = (*(uint *)(gen_frame + 0x24));
      puVar12[0xd] = (*(uint *)(gen_frame + 0x28));
      uVar11 = (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 (*)[1])REFP(0x109fa2c)) + (*(uint *)(gen_frame + 0x30)) * 4 + 2)));
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      puVar12[0x10] = ((undefined4 *)(gen_frame + 0x40))[(int)(uVar11 * 4)];
      puVar12[0x11] = ((undefined4 *)(gen_frame + 0x40))[(int)(uVar11 * 4 + 1)];
      puVar12[0x12] = uVar2;
      puVar12[0x13] = *(undefined4 *)(param_1 + 100);
      puVar12[0x14] = (*(undefined4 *)(gen_frame + 0x154));
      puVar12[0x16] = uVar9;
      puVar12[0x17] = (*(uint *)(gen_frame + 0x24));
      puVar12[0x15] = (*(uint *)(gen_frame + 0x28));
      uVar11 = (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 (*)[1])REFP(0x109fa2c)) + (*(uint *)(gen_frame + 0x30)) * 4 + 3)));
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      puVar12[0x18] = ((undefined4 *)(gen_frame + 0x40))[(int)(uVar11 * 4)];
      puVar12[0x19] = ((undefined4 *)(gen_frame + 0x40))[(int)(uVar11 * 4 + 1)];
      puVar12[0x1a] = uVar2;
      puVar12[0x1b] = *(undefined4 *)(param_1 + 100);
      puVar12[0x1c] = (*(undefined4 *)(gen_frame + 0x158));
      puVar12[0x1e] = uVar9;
      puVar12[0x1f] = (*(uint *)(gen_frame + 0x24));
      puVar12[0x1d] = (*(uint *)(gen_frame + 0x28));
    }
    psVar14 = psVar14 + 6;
    (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x30)) + 1;
    if (8 < (*(uint *)(gen_frame + 0x30))) {
      F_00c47745((*(uint *)(gen_frame + 0x15c)) ^ (uint)(uint)(gen_frame + 0x160) GEN_EDX_ARG);
      return (uint)puVar12;
    }
  } while( true );
}

/* ref: Component::GUI2::AtkCounterNodeRenderer::vf4 */
GEN_FRAME uint GEN_THISCALL F_005857e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5857e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  byte * pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 in_EAX = 0;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char * pcVar10;
  int iVar11;
  int local_8;
  
  iVar5 = param_1;
  pcVar10 = *(char * PTR32 *)(param_1 + 0xf4);
  uVar7 = CONCAT31((int3)((uint)in_EAX >> 8),*pcVar10);
  local_8 = 0;
  if (*pcVar10 != '\0') {
    iVar3 = *(int *)(param_1 + 0x90) * 0xc;
    do {
      if ((((*((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) + iVar3 != 0) &&
           (cVar6 = (char)uVar7, '\x1f' < cVar6)) && (cVar6 < '@')) &&
         (((cVar6 == ' ' || (cVar6 == ',')) || ((cVar6 == '.' || (('/' < cVar6 && (cVar6 < ':'))))))
         )) {
        local_8 = local_8 + 1;
      }
      pcVar1 = pcVar10 + 1;
      uVar7 = CONCAT31((int3)(uVar7 >> 8),*pcVar1);
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 != '\0');
    if (local_8 != 0) {
      iVar3 = *((int *)GEN_TOP((iVar3 + *((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))))));
      if ((*(uint *)(param_1 + 0x84) & 0x40000000) == 0) {
        iVar11 = 0x120000;
        param_1 = 0;
      }
      else {
        iVar11 = 0x121100;
        param_1 = 0x10;
      }
      iVar9 = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 4) + 4))) + 0x74))) = 0;
      iVar4 = *(int *)(iVar3 + 8);
      if (iVar4 == 0) {
        if (*(int *)(iVar3 + 0xc) != 0) {
          iVar9 = *((int *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xfc)));
        }
      }
      else if (iVar4 == 1) {
        if (*(int *)(iVar3 + 0xc) != 0) {
          iVar9 = *((int *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0x18)));
        }
      }
      else if (iVar4 == 2) {
        iVar9 = *(int *)(iVar3 + 0xc);
      }
      iVar4 = *(int *)(this + 4);
      if ((*(int *)(iVar4 + 0x10) != iVar11) || (*(int *)(iVar4 + 0x24) != iVar9)) {
        *(int *)(iVar4 + 0x10) = iVar11;
        *(int *)(iVar4 + 0x24) = iVar9;
        F_00577690(iVar4 + 0x14,iVar11,iVar9);
      }
      uVar7 = F_005c0920(iVar5,*(undefined4 *)(this + 4),*(undefined4 *)(this + 8));
      *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 4) + 4))) + 0x70))) = uVar7;
      *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 4) + 4))) + 0x78))) = param_1;
      pbVar2 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 4) + 4))) + 0xa4)));
      *pbVar2 = *pbVar2 & 0xfe;
      uVar8 = F_005cf050(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 4) + 4))) GEN_EDX_ARG,0x22,local_8 * 4,
                           *(int *)(this + 4) + 0x14);
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = F_00568df0(this GEN_EDX_ARG,uVar8,iVar5,iVar3);
      }
    }
  }
  return uVar7;
}

/* ref: FUN_00585950 */
GEN_FRAME uint GEN_THISCALL F_00585950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x585950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * pvVar7;
  uint uVar8;
  undefined4 * puVar9;
  
  iVar2 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  iVar3 = *(int *)(iVar2 + 0x1a8);
  F_00572240(this GEN_EDX_FWD,0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00572550(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar8 = *(int *)((int)this + 0x23c) << 0x1b | *(uint *)(iVar3 + 8) & 0x7ffffff;
  *(uint *)(iVar3 + 8) = uVar8;
  uVar8 = (*(int *)((int)this + 0x240) << 0x17 ^ uVar8) & 0x7800000 ^ uVar8;
  *(uint *)(iVar3 + 8) = uVar8;
  uVar8 = (*(int *)((int)this + 0x244) << 0x13 ^ uVar8) & 0x780000 ^ uVar8;
  *(uint *)(iVar3 + 8) = uVar8;
  *(uint *)(iVar3 + 8) = (*(uint *)((int)this + 0x248) ^ uVar8) & 0x7ffff ^ uVar8;
  iVar4 = *(int *)((int)this + 0x250);
  uVar5 = *(undefined4 *)((int)this + 0x24c);
  *(undefined4 *)(iVar3 + 0x68) = *(undefined4 *)((int)this + 0x9c);
  *(uint *)(iVar3 + 0x6c) =
       *(uint *)(iVar3 + 0x6c) ^ (iVar4 << 8 ^ *(uint *)(iVar3 + 0x6c)) & 0x7fffff00;
  *(char *)(iVar3 + 0x6c) = (char)uVar5;
  *(uint *)(iVar3 + 0x6c) = *(uint *)(iVar3 + 0x6c) & 0x7fffffff;
  iVar4 = *(int *)((int)this + 0x260);
  uVar5 = *(undefined4 *)((int)this + 0x25c);
  *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)((int)this + 0x9c);
  *(uint *)(iVar3 + 0x74) =
       *(uint *)(iVar3 + 0x74) ^ (iVar4 << 8 ^ *(uint *)(iVar3 + 0x74)) & 0x7fffff00;
  *(char *)(iVar3 + 0x74) = (char)uVar5;
  *(uint *)(iVar3 + 0x74) = *(uint *)(iVar3 + 0x74) & 0x7fffffff;
  iVar4 = *(int *)((int)this + 0x270);
  uVar5 = *(undefined4 *)((int)this + 0x26c);
  *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)((int)this + 0x9c);
  *(uint *)(iVar3 + 0x7c) =
       *(uint *)(iVar3 + 0x7c) ^ (iVar4 << 8 ^ *(uint *)(iVar3 + 0x7c)) & 0x7fffff00;
  *(char *)(iVar3 + 0x7c) = (char)uVar5;
  *(uint *)(iVar3 + 0x7c) = *(uint *)(iVar3 + 0x7c) & 0x7fffffff;
  *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)((int)this + 0xa0);
  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)(iVar3 + 0x60) = 0;
  *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)((int)this + 0x70);
  *(undefined4 *)(iVar3 + 0x60) = 0;
  *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)((int)this + 0x94);
  *(uint *)(iVar3 + 0x38) = REFG(undefined4, 0x1302354) & 0x7ffffff;
  *(uint *)(iVar3 + 0x50) = REFG(undefined4, 0x130235c) & 0x1f;
  uVar8 = REFG(undefined4, 0x1302368);
  *(uint *)(iVar3 + 0x5c) = REFG(undefined4, 0x130236c) & 0xfffffffc;
  *(uint *)(iVar3 + 0x58) = uVar8 & 0xfe000000;
  *(uint *)(iVar3 + 0x3c) = REFG(undefined4, 0x1302370) & 0x7fffffff;
  *((undefined4 *)GEN_TOP((iVar3 + 0xa8 + *(int *)((int)this + 0x220) * 4))) =
       *(undefined4 *)((int)this + 0x208);
  *((undefined4 *)GEN_TOP((iVar3 + 0xa8 + *(int *)((int)this + 0x22c) * 4))) =
       *(undefined4 *)((int)this + 0x20c);
  *((undefined4 *)GEN_TOP((iVar3 + 0x2a8 + *(int *)((int)this + 0x228) * 8))) =
       *(undefined4 *)((int)this + 0x210);
  *((uint *)GEN_TOP((iVar3 + 0x2ac + *(int *)((int)this + 0x228) * 8))) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  *((undefined4 *)GEN_TOP((iVar3 + 0x2a8 + *(int *)((int)this + 0x230) * 8))) =
       *(undefined4 *)((int)this + 0x210);
  *((uint *)GEN_TOP((iVar3 + 0x2ac + *(int *)((int)this + 0x230) * 8))) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  *((undefined4 *)GEN_TOP((iVar3 + 0x2a8 + *(int *)((int)this + 0x234) * 8))) =
       *(undefined4 *)((int)this + 0x210);
  *((uint *)GEN_TOP((iVar3 + 0x2ac + *(int *)((int)this + 0x234) * 8))) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  *((undefined4 *)GEN_TOP((iVar3 + 0x2a8 + *(int *)((int)this + 0x238) * 8))) =
       *(undefined4 *)((int)this + 0x210);
  *((uint *)GEN_TOP((iVar3 + 0x2ac + *(int *)((int)this + 0x238) * 8))) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  *((undefined4 *)GEN_TOP((iVar3 + 0xa8 + *(int *)((int)this + 0x27c) * 4))) =
       *(undefined4 *)((int)this + 0x280);
  *(undefined4 *)((int)this + 0x4334) = 0;
  uVar5 = *(undefined4 *)(REFG(int, 0x1370b90) + 0x90);
  uVar6 = *(undefined4 *)(REFG(int, 0x1370b90) + 0x94);
  *(undefined4 *)((int)this + 0x42b4) = 0;
  *(undefined4 *)((int)this + 0x42b8) = 0;
  *(undefined4 *)((int)this + 0x42bc) = uVar5;
  *(undefined4 *)((int)this + 0x42c0) = uVar6;
  iVar3 = REFG(int, 0x1370b90);
  pvVar7 = *(undefined * PTR32 *)(iVar2 + 0x1a8);
  uVar8 = *(int *)((int)pvVar7 + 0x18) + 0x20;
  if (uVar8 < 0x8001) {
    puVar9 = ((undefined4 *)GEN_TOP((*(int *)((int)pvVar7 + 0xc) + *(int *)((int)pvVar7 + 0x18))));
    *(uint *)((int)pvVar7 + 0x18) = uVar8;
  }
  else {
    piVar1 = (int *)(REFG(int, 0x1370b90) + 0xc0);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
    iVar4 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(0x8000));
    (*(int *)(gen_frame + 0x14)) = iVar4;
    if (*(uint *)(iVar3 + 0xb8) < (uint)(*(int *)(iVar3 + 0xc4) * 3 + *piVar1)) {
      _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-0x8000));
      goto LAB_00585c93;
    }
    puVar9 = ((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0xbc) + iVar4)));
    if (puVar9 == (undefined4 *)0x0) goto LAB_00585c93;
    *(undefined4 * PTR32 *)((int)pvVar7 + 0xc) = puVar9;
    *(undefined4 *)((int)pvVar7 + 0x18) = 0x20;
  }
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 2;
    puVar9[1] = *(undefined4 *)((int)this + 0x42b4);
    puVar9[2] = *(undefined4 *)((int)this + 0x42b8);
    puVar9[3] = *(undefined4 *)((int)this + 0x42bc);
    puVar9[4] = *(undefined4 *)((int)this + 0x42c0);
    F_004d4810(pvVar7 GEN_EDX_ARG,puVar9);
  }
LAB_00585c93: ;
  pvVar7 = *(undefined * PTR32 *)(iVar2 + 0x1a8);
  (*(int *)(gen_frame + 0x14)) = *(int *)(REFG(int, 0x1371288) + 400);
  F_004daa40(pvVar7 GEN_EDX_ARG,1,&(*(int *)(gen_frame + 0x14)),0,0,0);
  if (*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x1c))) == 2) {
    uVar8 = F_005ca370(this GEN_EDX_ARG,param_1);
    return uVar8;
  }
  uVar8 = F_005caac0(this GEN_EDX_ARG,param_1);
  return uVar8;
}

/* ref: FUN_00585cf0 */
GEN_NOFRAME uint GEN_THISCALL F_00585cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x585cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  byte * pbVar1;
  int iVar2;
  int iVar3;
  undefined * puVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  uint uVar8;
  float * pfVar9;
  undefined4 * puVar10;
  float fVar11;
  float fVar12;
  undefined * pvVar13;
  float * pfVar14;
  int * piVar15;
  uint uVar16;
  uint * puVar17;
  float * pfVar18;
  undefined2 * puVar19;
  undefined * pvVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  
  (*(uint *)(gen_frame + 0x12c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  (*(undefined * PTR32 *)(gen_frame + 0xc0)) = param_1;
  if ((*(uint *)((int)this + 0x100) & 0x10) != 0) {
    (*(int *)(gen_frame + 0x14)) = (int)*(float *)((int)this + 0x90);
    (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) ^ (*(uint *)((int)this + 0x100) * 4 ^ (*(uint *)(gen_frame + 0x10))) & 0x7fff800;
    (*(int *)(gen_frame + 0x18)) = (int)*(float *)((int)this + 0x94);
    (*(int *)(gen_frame + 0x1c)) = (int)*(float *)((int)this + 0x98);
    (*(int *)(gen_frame + 0x20)) = (int)*(float *)((int)this + 0x9c);
    *((uint *)GEN_TOP((*(int *)((int)param_1 + 4) + 0x70))) = 0xffff - ((*(uint *)(gen_frame + 0x10)) >> 0xb & 0xffff);
    (*(uint *)(gen_frame + 0xc)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0xc4)) = *(undefined * PTR32 *)((int)param_1 + 4);
    uVar8 = F_005bfe10(*(undefined * PTR32 *)((int)param_1 + 4) GEN_EDX_FWD,2,0x1c,0);
    if (uVar8 != 0) {
      *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc4)) + 0xa4) = *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc4)) + 0xa4) | 2;
      *(int *)(uVar8 + 0xc) = (*(int *)(gen_frame + 0x14));
      *(int *)(uVar8 + 0x10) = (*(int *)(gen_frame + 0x18));
      *(int *)(uVar8 + 0x14) = (*(int *)(gen_frame + 0x1c));
      *(undefined4 *)(uVar8 + 8) = 1;
      *(int *)(uVar8 + 0x18) = (*(int *)(gen_frame + 0x20));
      F_005bfeb0((*(undefined * PTR32 *)(gen_frame + 0xc4)) GEN_EDX_ARG,uVar8);
    }
  }
  fVar12 = *(float *)((int)this + 0xf8);
  piVar15 = *(int * PTR32 *)((int)this + 0xe8);
  (*(int * PTR32 *)(gen_frame + 0xd4)) = piVar15;
  fVar25 = gen_bits2f((uint)piVar15 ^ REFG(uint, 0x10920d0));
  (*(undefined * PTR32 *)(gen_frame + 0xc4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar12)));
  (*(float *)(gen_frame + 0xb8)) = fVar25;
  (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)this + 0xec))));
  fVar26 = gen_bits2f((uint)gen_fl2bits(*(float *)((int)this + 0xec)) ^ REFG(uint, 0x10920d0));
  (*(float *)(gen_frame + 0xbc)) = fVar26;
  fVar11 = *(float *)((int)this + 0xf4);
  (*(float *)(gen_frame + 0xd0)) = fVar11;
  (*(float *)(gen_frame + 0xac)) = (float)((float10)fVar12 * (float10)0);
  (*(float *)(gen_frame + 0xa8)) = fVar11;
  (*(float *)(gen_frame + 0xb4)) = fVar12;
  (*(float *)(gen_frame + 0xb0)) = (float)((float10)fVar11 * (float10)0);
  (*(float *)(gen_frame + 0xb8)) = (float)((float10)fVar11 * (float10)fVar25);
  (*(float *)(gen_frame + 0xbc)) = (float)((float10)fVar12 * (float10)fVar26);
  F_005b7670(&(*(float *)(gen_frame + 0xa8)) GEN_EDX_ARG,*(float *)((int)this + 0xfc));
  fVar21 = (float10)(*(float *)(gen_frame + 0xb8));
  fVar23 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xd4)))));
  (*(float *)(gen_frame + 0xb8)) = (float)(fVar21 + fVar23);
  (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)&REFG(undefined, 0x4);
  fVar22 = (float10)(*(float *)(gen_frame + 0xbc));
  fVar24 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0xcc)))));
  (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = (undefined4 *)((int)((float *)(gen_frame + 0xe0)) - (int)this);
  (*(float *)(gen_frame + 0xbc)) = (float)(fVar22 + fVar24);
  (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)((int)((float *)(gen_frame + 0xe0)) - (int)this + 4);
  fVar12 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xdc) + (float10)(float)(fVar21 + fVar23))));
  (*(float *)(gen_frame + 0xb8)) = fVar12;
  fVar11 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) + (float10)(float)(fVar22 + fVar24))));
  (*(float *)(gen_frame + 0xbc)) = fVar11;
  pfVar14 = (float *)((int)this + 4);
  pfVar18 = ((float *)(gen_frame + 0xe0));
  do {
    fVar25 = *pfVar14;
    (*(float *)(gen_frame + 0xd0)) = fVar25;
    fVar26 = pfVar14[-1];
    pfVar9 = pfVar14 + 4;
    piVar15 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xd4)) - 1);
    (*(int * PTR32 *)(gen_frame + 0xd4)) = piVar15;
    (*(undefined * PTR32 *)(gen_frame + 0xc4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar26)));
    fVar23 = (float10)fVar26;
    fVar24 = (float10)fVar25;
    *pfVar18 = ((float)GEN_TOF(((fVar23 * (float10)(*(float *)(gen_frame + 0xa8)) + (float10)(*(float *)(gen_frame + 0xb0)) * fVar24) + (float10)fVar12)));
    *(float *)((int)&(*(float *)(gen_frame + 0xd0)) - (int)this + (int)pfVar9) =
         ((float)GEN_TOF(((fVar23 * (float10)(*(float *)(gen_frame + 0xac)) + fVar24 * (float10)(*(float *)(gen_frame + 0xb4))) + (float10)fVar11)));
    *(float *)((int)&(*(int * PTR32 *)(gen_frame + 0xd4)) - (int)this + (int)pfVar9) = pfVar14[1];
    pfVar14 = pfVar9;
    pfVar18 = pfVar18 + 4;
  } while (piVar15 != (int *)0x0);
  pbVar1 = ((byte *)GEN_TOP((*(int *)((int)param_1 + 4) + 0xa4)));
  *pbVar1 = *pbVar1 | 1;
  *((uint *)GEN_TOP((*(int *)((int)param_1 + 4) + 0x74))) = *(uint *)((int)this + 0x100) & 0xf;
  iVar2 = *(int *)((int)this + 0xd8);
  iVar3 = *(int *)((int)this + 0xc0);
  if ((*(int *)((int)param_1 + 0x10) != iVar2) || (*(int *)((int)param_1 + 0x24) != iVar3)) {
    *(int *)((int)param_1 + 0x10) = iVar2;
    *(int *)((int)param_1 + 0x24) = iVar3;
    F_00577690((int)param_1 + 0x14,iVar2,iVar3);
  }
  if ((*(uint *)((int)this + 0x100) >> 5 & 0xf) == 1) {
    uVar8 = F_00567770(param_1 GEN_EDX_ARG,4,((float *)(gen_frame + 0xe0)));
  }
  else {
    uVar8 = *(uint *)((int)this + 0x100) >> 9 & 0xffff;
    if (uVar8 < 0xffff) {
      uVar8 = 0xffff - uVar8;
    }
    else {
      uVar8 = 0;
    }
  }
  *((uint *)GEN_TOP((*(int *)((int)param_1 + 4) + 0x70))) = uVar8;
  *((uint *)GEN_TOP((*(int *)((int)param_1 + 4) + 0x78))) = *(uint *)((int)this + 0x100) >> 5 & 0xf;
  if ((*(uint *)((int)this + 0x100) & 0x2000000) != 0) {
    (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)0x0;
    (*(float *)(gen_frame + 0xd0)) = 5.60519e-45;
    pvVar20 = param_1;
    do {
      pvVar20 = *(undefined * PTR32 *)((int)pvVar20 + 4);
      if (*(int *)((int)pvVar20 + 0x74) == 1) {
        pvVar13 = (undefined *)F_005bfe10(pvVar20 GEN_EDX_ARG,0x11,0x50,1);
        (*(undefined * PTR32 *)(gen_frame + 0xdc)) = pvVar13;
        fVar12 = 0.0;
        if (pvVar13 != (undefined *)0x0) {
          fVar12 = gen_bits2f(F_005c83b0(pvVar20 GEN_EDX_ARG,pvVar13,0x11,2,(int)(*(undefined * PTR32 *)(gen_frame + 0xc0)) + 0x14));
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c) = 1;
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x24) = *(undefined4 *)((int)pvVar20 + 0x7c);
          *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x30) = *(uint *)((int)pvVar20 + 0x88) & 0xfffffff;
LAB_005861f7: ;
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x40) = *(undefined4 *)((int)pvVar20 + 0x94);
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x44) = *(undefined4 *)((int)pvVar20 + 0x98);
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x48) = *(undefined4 *)((int)pvVar20 + 0x9c);
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x4c) = *(undefined4 *)((int)pvVar20 + 0xa0);
        }
      }
      else if (*(int *)((int)pvVar20 + 0x74) == 2) {
        pvVar13 = (undefined *)F_005bfe10(pvVar20 GEN_EDX_ARG,0x11,0x50,1);
        (*(undefined * PTR32 *)(gen_frame + 0xdc)) = pvVar13;
        fVar12 = 0.0;
        if (pvVar13 != (undefined *)0x0) {
          fVar12 = gen_bits2f(F_005c83b0(pvVar20 GEN_EDX_ARG,pvVar13,0x11,2,(int)(*(undefined * PTR32 *)(gen_frame + 0xc0)) + 0x14));
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c) = 2;
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x24) = *(undefined4 *)((int)pvVar20 + 0x7c);
          *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x30) = *(uint *)((int)pvVar20 + 0x88) & 0xfffffff;
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x28) = *(undefined4 *)((int)pvVar20 + 0x80);
          *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x34) = *(uint *)((int)pvVar20 + 0x8c) & 0xfffffff;
          goto LAB_005861f7;
        }
      }
      else {
        puVar10 = (undefined4 *)F_005bfe10(pvVar20 GEN_EDX_ARG,0x11,0x24,0);
        (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = puVar10;
        fVar12 = 0.0;
        if (puVar10 != (undefined4 *)0x0) {
          puVar4 = (&REFG(undefined * PTR32, 0x10a0c2c))[(int)(*(int *)((int)pvVar20 + 0x74))];
          iVar2 = *(int *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x24);
          piVar15 = (int *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x3c);
          *piVar15 = *piVar15 + 2;
          pvVar13 = (undefined *)(iVar2 + 2);
          (*(undefined * PTR32 *)(gen_frame + 0xdc)) = pvVar13;
          if (pvVar13 < (undefined *)0x4001) {
            (*(float *)(gen_frame + 0xd8)) = gen_bits2f(*((int *)GEN_TOP(((int)pvVar20 +
                                          (int)(&REFG(undefined * PTR32, 0x10a0c2c))[(int)(*(int *)((int)pvVar20 + 0x74))] * 4 +
                                          0x30))) * iVar2 +
                                  *(int *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x18));
            *(undefined * PTR32 *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x24) = pvVar13;
LAB_005860dc: ;
            if ((*(float *)(gen_frame + 0xd8)) == 0.0) {
LAB_005860e0: ;
              fVar12 = 0.0;
            }
            else {
              F_004d41c0(puVar10 + 2 GEN_EDX_ARG,(int)(*(undefined * PTR32 *)(gen_frame + 0xc0)) + 0x14);
              (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[7] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xd8)));
              (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[6] = 2;
              (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[8] = (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[8] ^ ((*(undefined4 * PTR32 *)(gen_frame + 0xcc))[8] ^ *(uint *)((int)pvVar20 + 0x74)) & 0xf;
              uVar8 = (uint)*(byte *)((int)pvVar20 + 0x78) << 4 | (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[8] & 0xfff0000f;
              (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[8] = uVar8;
              (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[8] = ((uint)*(byte *)((int)pvVar20 + 0xa4) << 0x14 ^ uVar8) & 0x100000 ^
                            uVar8;
              F_005bfeb0(pvVar20 GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0xcc)));
              fVar12 = (*(float *)(gen_frame + 0xd8));
            }
          }
          else {
            fVar12 = *(float *)((int)pvVar20 + 0x10);
            piVar15 = ((int *)GEN_TOP(((int)gen_fl2bits(fVar12) + 0x24cU +
                             (int)(&REFG(undefined * PTR32, 0x10a0c2c))[(int)(*(int *)((int)pvVar20 + 0x74))] * 0x10)));
            (*(float *)(gen_frame + 0xd8)) = fVar12;
            iVar2 = *piVar15;
            fVar11 = gen_bits2f(iVar2 * 0x4000);
            (*(int * PTR32 *)(gen_frame + 0xd4)) = piVar15;
            (*(undefined * PTR32 *)(gen_frame + 0xc4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar11)));
            puVar17 = (uint *)(piVar15 + 3);
            LOCK();
            pvVar13 = (undefined *)*puVar17;
            *puVar17 = *puVar17 + (int)gen_fl2bits(fVar11);
            UNLOCK();
            (*(undefined * PTR32 *)(gen_frame + 0xdc)) = pvVar13;
            puVar17 = (uint *)(piVar15 + 3);
            if (*puVar17 <= (uint)piVar15[2]) {
              (*(float *)(gen_frame + 0xd8)) = gen_bits2f(*(int *)((int)gen_fl2bits(fVar12) + 0x294) + piVar15[1] +
                                    (int)pvVar13);
              if ((*(float *)(gen_frame + 0xd8)) != 0.0) {
                *(float *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x18) = (*(float *)(gen_frame + 0xd8));
                piVar15 = (int *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x3c);
                *piVar15 = *piVar15 + (0x4000 - *(int *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x24));
                *(undefined4 *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x24) = 2;
                goto LAB_005860dc;
              }
              goto LAB_005860e0;
            }
            _InterlockedExchangeAdd((volatile long *)(puVar17), (long)(iVar2 * -0x4000));
            fVar12 = 0.0;
          }
        }
      }
      fVar11 = REFG(float, 0x10a0a58);
      if (fVar12 != 0.0) {
        (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)0x2;
        pfVar14 = (float *)((int)gen_fl2bits(fVar12) + 4);
        pfVar18 = (*(float * PTR32 *)(gen_frame + 0xc8));
        do {
          uVar8 = (uint)pfVar18 & 0x80000003;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
          }
          uVar8 = uVar8 & 0xff;
          pfVar14[1] = fVar11;
          fVar12 = ((float *)(gen_frame + 0xe0))[(int)(uVar8 * 4)];
          pfVar18 = (float *)((int)pfVar18 + 1);
          piVar15 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xd4)) - 1);
          (*(int * PTR32 *)(gen_frame + 0xd4)) = piVar15;
          pfVar14[-1] = fVar12;
          *pfVar14 = ((float *)(gen_frame + 0xe0))[(int)(uVar8 * 4 + 1)];
          pfVar14[2] = *(float *)((int)this + uVar8 * 4 + 0x40);
          pfVar14[5] = REFG(undefined4, 0x13799b0);
          pfVar14[6] = REFG(undefined4, 0x13799b4);
          pfVar14[4] = REFG(undefined4, 0x131de48);
          pfVar14 = pfVar14 + 8;
        } while (piVar15 != (int *)0x0);
      }
      uVar8 = 1;
      (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xc8)) + 1);
      fVar12 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xd0))) - 1);
      (*(float *)(gen_frame + 0xd0)) = fVar12;
      pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0xc0));
    } while (fVar12 != 0.0);
    goto LAB_00586493;
  }
  iVar2 = *(int *)((int)this + 0xc0);
  (*(float *)(gen_frame + 0xd0)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0xd8)) = REFG(float, 0x1087f04);
  if (iVar2 != 0) {
    fVar23 = (float10)*(int *)(iVar2 + 0x18);
    if (*(int *)(iVar2 + 0x18) < 0) {
      fVar23 = fVar23 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    iVar2 = *(int *)(iVar2 + 0x1c);
    (*(float *)(gen_frame + 0xd0)) = (float)fVar23;
    (*(undefined * PTR32 *)(gen_frame + 0xdc)) = (undefined *)iVar2;
    fVar23 = (float10)iVar2;
    if (iVar2 < 0) {
      fVar23 = fVar23 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float *)(gen_frame + 0xd8)) = (float)fVar23;
  }
  pvVar20 = *(undefined * PTR32 *)((int)param_1 + 4);
  (*(undefined * PTR32 *)(gen_frame + 0xdc)) = pvVar20;
  if (*(int *)((int)pvVar20 + 0x74) == 1) {
    uVar27 = 1;
LAB_0058632a: ;
    uVar16 = F_005cc4d0(pvVar20 GEN_EDX_ARG,uVar27,0x22,4,(int)param_1 + 0x14);
  }
  else {
    if (*(int *)((int)pvVar20 + 0x74) == 2) {
      uVar27 = 2;
      goto LAB_0058632a;
    }
    uVar8 = F_005bfe10(pvVar20 GEN_EDX_ARG,0x22,0x24,0);
    uVar16 = 0;
    if (uVar8 != 0) {
      uVar16 = F_005c83b0((*(undefined * PTR32 *)(gen_frame + 0xdc)) GEN_EDX_ARG,uVar8,0x22,4,(int)param_1 + 0x14);
    }
  }
  dVar6 = *(double *)&REFG(undefined, 0x1088118);
  dVar5 = *(double *)&REFG(undefined, 0x1088100);
  uVar8 = 0;
  pvVar20 = param_1;
  if (uVar16 != 0) {
    fVar23 = (float10)(*(float *)(gen_frame + 0xd0));
    fVar24 = (float10)(*(float *)(gen_frame + 0xd8));
    piVar15 = ((int *)(gen_frame + 0xe8));
    (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)((int)this + 0x50);
    (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = (undefined4 *)((int)this + 0x40);
    (*(int * PTR32 *)(gen_frame + 0xd4)) = piVar15;
    (*(undefined * PTR32 *)(gen_frame + 0xc4)) = (undefined *)0x4;
    puVar19 = (undefined2 *)(uVar16 + 0x1a);
    do {
      *(int *)(puVar19 - 0xd) = piVar15[-2];
      *(int *)(puVar19 - 0xb) = piVar15[-1];
      *(int *)(puVar19 - 9) = *piVar15;
      *(undefined4 *)(puVar19 - 7) = *(*(undefined4 * PTR32 *)(gen_frame + 0xcc));
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = ((undefined *)GEN_TOP(((int)((float10)(*(float * PTR32 *)(gen_frame + 0xc8))[1] * fVar24) & 0xffff)));
      (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0)) = (undefined2)(int)((float10)(*(float * PTR32 *)(gen_frame + 0xc8))[1] * fVar24);
      puVar19[-5] = (short)(int)((float10)*(*(float * PTR32 *)(gen_frame + 0xc8)) * fVar23);
      puVar19[-4] = (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0));
      uVar8 = (uint)((double)*(float *)((int)this + 0xb8) * dVar5);
      fVar12 = *(float *)((int)this + 0xb4);
      (*(float *)(gen_frame + 0xd0)) = gen_bits2f(uVar8 & 0xffff);
      fVar25 = (*(float *)(gen_frame + 0xd0));
      uVar16 = (uint)((double)fVar12 * dVar5);
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = (undefined *)(uVar16 & 0xffff);
      (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0)) = (undefined2)uVar16;
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xd8)) + 2)) = gen_x87_cw;
      puVar19[-1] = (short)(int)((double)*(float *)((int)this + 0xb0) * dVar5);
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xd0)) + 0)) = (undefined2)uVar8;
      puVar19[1] = (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xd0)) + 0));
      *puVar19 = (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0));
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = ((undefined *)GEN_TOP((gen_x87_cw | 0xc00)));
      puVar19[2] = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) + 1;
      fVar12 = *(float *)((int)this + 0xa8);
      piVar15 = piVar15 + 4;
      (*(int * PTR32 *)(gen_frame + 0xd4)) = piVar15;
      (*(float * PTR32 *)(gen_frame + 0xc8)) = (*(float * PTR32 *)(gen_frame + 0xc8)) + 2;
      iVar2 = (int)TRUNC((double)fVar12 * dVar6);
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = (undefined *)iVar2;
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0)) = (undefined1)iVar2;
      uVar7 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0));
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = ((undefined *)GEN_TOP((gen_x87_cw | 0xc00)));
      iVar2 = (int)TRUNC((double)*(float *)((int)this + 0xa4) * dVar6);
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = (undefined *)iVar2;
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0)) = (undefined1)iVar2;
      fVar11 = *(float *)((int)this + 0xa0);
      (*(float *)(gen_frame + 0xd8)) = gen_bits2f(CONCAT22(gen_x87_cw,(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xd8)) + 0))));
      *(undefined1 *)((int)puVar19 - 5) = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0));
      *(undefined1 *)(puVar19 - 2) = uVar7;
      fVar12 = gen_bits2f((int)(*(undefined * PTR32 *)(gen_frame + 0xc4)) - 1);
      (*(undefined * PTR32 *)(gen_frame + 0xc4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar12)));
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = ((undefined *)GEN_TOP((gen_x87_cw | 0xc00)));
      *(undefined1 *)((int)puVar19 - 3) = 0;
      pvVar20 = (undefined *)(int)TRUNC((double)fVar11 * dVar6);
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = pvVar20;
      pvVar13 = (*(undefined * PTR32 *)(gen_frame + 0xdc));
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0)) = SUB41(pvVar20,0);
      uVar8 = CONCAT31((int3)((gen_x87_cw | 0xc00) >> 8),(*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0)));
      *(undefined1 *)(puVar19 - 3) = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0));
      pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0xc0));
      puVar19 = puVar19 + 0x10;
      (*(float *)(gen_frame + 0xd0)) = fVar25;
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = pvVar13;
    } while (fVar12 != 0.0);
  }
LAB_00586493: ;
  if (((*(byte *)((int)this + 0x100) & 0x10) != 0) && (((*(uint *)(gen_frame + 0xc)) & 0xf) == 0)) {
    *((uint *)GEN_TOP((*(int *)((int)pvVar20 + 4) + 0x70))) = 0xffff - ((*(uint *)(gen_frame + 0x10)) >> 0xb & 0xffff);
    pvVar20 = *(undefined * PTR32 *)((int)pvVar20 + 4);
    uVar16 = F_005bfe10(pvVar20 GEN_EDX_ARG,2,0x1c,0);
    uVar8 = 0;
    if (uVar16 != 0) {
      *(byte *)((int)pvVar20 + 0xa4) = *(byte *)((int)pvVar20 + 0xa4) & 0xfd;
      *(int *)(uVar16 + 0xc) = (*(int *)(gen_frame + 0x14));
      *(int *)(uVar16 + 0x10) = (*(int *)(gen_frame + 0x18));
      *(int *)(uVar16 + 0x14) = (*(int *)(gen_frame + 0x1c));
      *(undefined4 *)(uVar16 + 8) = 0;
      *(int *)(uVar16 + 0x18) = (*(int *)(gen_frame + 0x20));
      uVar8 = F_005bfeb0(pvVar20 GEN_EDX_ARG,uVar16);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130) GEN_EDX_ARG);
  return uVar8;
}

/* ref: FUN_00586530 */
GEN_NOFRAME uint GEN_THISCALL F_00586530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x586530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  undefined * this_00;
  int iVar7;
  int iVar8;
  uint uVar9;
  float * pfVar10;
  float * pfVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  undefined4 uVar16;
  float local_14;
  
  iVar7 = (uint)*(ushort *)((int)this + 0x22) + (uint)*(ushort *)((int)this + 0x20);
  if (iVar7 == 0) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x74))) = 0;
  if ((*(int *)(param_1 + 0x10) != 0x120000) || (*(int *)(param_1 + 0x24) != 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0x120000;
    *(undefined4 *)(param_1 + 0x24) = 0;
    F_00577690(param_1 + 0x14,0x120000,0);
  }
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x78))) = 0;
  pbVar1 = ((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0xa4)));
  *pbVar1 = *pbVar1 | 1;
  if (*(ushort *)((int)this + 0x2c) < 0xffff) {
    iVar8 = 0xffff - (uint)*(ushort *)((int)this + 0x2c);
  }
  else {
    iVar8 = 0;
  }
  *((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x70))) = iVar8;
  this_00 = *(undefined * PTR32 *)(param_1 + 4);
  iVar8 = iVar7 * 2;
  if (*(int *)((int)this_00 + 0x74) == 1) {
    uVar16 = 1;
  }
  else {
    if (*(int *)((int)this_00 + 0x74) != 2) {
      uVar9 = F_005bfe10(this_00 GEN_EDX_ARG,0x10,0x24,0);
      pfVar10 = (float *)0x0;
      if (uVar9 != 0) {
        pfVar10 = (float *)F_005c83b0(this_00 GEN_EDX_ARG,uVar9,0x10,iVar8,param_1 + 0x14);
      }
      goto LAB_00586611;
    }
    uVar16 = 2;
  }
  pfVar10 = (float *)F_005cc4d0(this_00 GEN_EDX_ARG,uVar16,0x10,iVar8,param_1 + 0x14);
LAB_00586611: ;
  pfVar11 = (float *)0x0;
  if (pfVar10 != (float *)0x0) {
    if (iVar7 != 0) {
      pfVar11 = pfVar10 + 7;
      do {
        pfVar11[-4] = *(float *)((int)this + 0x28);
        *(undefined2 *)(pfVar11 - 3) = 0;
        *(undefined2 *)((int)pfVar11 - 10) = 0;
        pfVar11[-1] = REFG(undefined4, 0x13799b0);
        *pfVar11 = REFG(undefined4, 0x13799b4);
        pfVar11[-2] = REFG(undefined4, 0x131de48);
        pfVar11 = pfVar11 + 8;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    fVar12 = (float10)*(float *)((int)this + 0x10);
    fVar2 = (float)(fVar12 * (float10)REFG(undefined4, 0x131de4c));
    fVar13 = (float10)*(float *)((int)this + 0x14);
    uVar6 = *(ushort *)((int)this + 0x24);
    fVar3 = (float)(fVar13 * (float10)REFG(undefined4, 0x131de50));
    local_14 = 0.0;
    fVar4 = (float)((float10)REFG(undefined4, 0x131de54) * fVar12);
    if (*(int *)((int)this + 4) == 1) {
      local_14 = (float)uVar6;
    }
    fVar14 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0xc) +
                             (float10)(float)(fVar13 * (float10)REFG(undefined4, 0x131de60)))));
    fVar12 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 8) +
                             (float10)(float)((float10)REFG(undefined4, 0x131de5c) * fVar12))));
    iVar7 = 0;
    fVar13 = (float10)(float)((float10)REFG(undefined4, 0x131de58) * fVar13);
    if (*(short *)((int)this + 0x20) != 0) {
      pfVar11 = pfVar10;
      do {
        pfVar11[2] = 0.0;
        fVar15 = (float10)local_14;
        iVar7 = iVar7 + 1;
        pfVar10 = pfVar11 + 0x10;
        *pfVar11 = ((float)GEN_TOF(((fVar15 * (float10)fVar2 + (float10)(double)((float10)fVar4 * (float10)0)
                           ) + fVar12)));
        pfVar11[1] = ((float)GEN_TOF((((float10)(double)((float10)0 * fVar13) + (float10)fVar3 * fVar15) +
                            fVar14)));
        fVar5 = *(float *)((int)this + 0x1c);
        pfVar11[10] = 0.0;
        pfVar11[8] = ((float)GEN_TOF((fVar12 + ((float10)fVar5 * (float10)fVar4 + fVar15 * (float10)fVar2))));
        pfVar11[9] = ((float)GEN_TOF((fVar14 + ((float10)fVar5 * fVar13 + (float10)fVar3 * fVar15))));
        local_14 = (float)(fVar15 + (float10)uVar6);
        pfVar11 = pfVar10;
      } while (iVar7 < (int)(uint)*(ushort *)((int)this + 0x20));
    }
    uVar6 = *(ushort *)((int)this + 0x26);
    local_14 = 0.0;
    if (*(int *)((int)this + 4) == 1) {
      local_14 = (float)uVar6;
    }
    iVar7 = 0;
    if (*(short *)((int)this + 0x22) == 0) {
      return (uint)pfVar10;
    }
    do {
      pfVar10[2] = 0.0;
      fVar15 = (float10)local_14;
      iVar7 = iVar7 + 1;
      pfVar11 = pfVar10 + 0x10;
      *pfVar10 = ((float)GEN_TOF((((float10)((double)fVar2 * 0.0) + fVar15 * (float10)fVar4) + fVar12)));
      pfVar10[1] = ((float)GEN_TOF((((float10)((double)fVar3 * 0.0) + fVar13 * fVar15) + fVar14)));
      fVar5 = *(float *)((int)this + 0x18);
      pfVar10[10] = 0.0;
      pfVar10[8] = ((float)GEN_TOF((fVar12 + ((float10)fVar5 * (float10)fVar2 + fVar15 * (float10)fVar4))));
      pfVar10[9] = ((float)GEN_TOF((fVar14 + ((float10)fVar5 * (float10)fVar3 + fVar13 * fVar15))));
      local_14 = (float)(fVar15 + (float10)uVar6);
      pfVar10 = pfVar11;
    } while (iVar7 < (int)(uint)*(ushort *)((int)this + 0x22));
  }
  return (uint)pfVar11;
}

/* ref: FUN_00586850 */
GEN_FRAME uint GEN_THISCALL F_00586850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x586850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00583770((undefined *)((int)this + 0x23c) GEN_EDX_FWD,param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00586870 */
GEN_FRAME uint GEN_THISCALL F_00586870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x586870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00583770((undefined *)((int)this + 0x23c) GEN_EDX_FWD,0x49,0,param_1,0);
  return uVar1;
}

/* ref: FUN_00586890 */
GEN_FRAME uint GEN_THISCALL F_00586890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x586890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  int in_ecx;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  (*(uint *)(gen_frame + 0x0)) = 0;
  uVar2 = F_0042a970(param_1 GEN_EDX_FWD);
  pvVar5 = (undefined *)((int)this + 0x330);
  F_0042ccf0(pvVar5 GEN_EDX_ARG,param_1);
  pvVar3 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,param_3);
  uVar4 = F_0042e360(pvVar3 GEN_EDX_ARG,pvVar5);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x114)) GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  uVar7 = param_4;
  pvVar5 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x114)));
  uVar4 = F_0042e360(pvVar5 GEN_EDX_ARG,uVar7);
  F_0042cbc0(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
  pvVar5 = (undefined *)((int)this + 0x57c);
  F_0042ccf0(pvVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)) GEN_EDX_ARG);
  in_ecx = (int)this + 0x2dc;
  F_0042aca0(in_ecx GEN_EDX_ARG);
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  iVar8 = *piVar1;
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,in_ecx);
  uVar6 = ((code *)*(gen_code32 *)(iVar8 + 0xc))(*(undefined4 *)((int)this + 0x14),pvVar5,uVar4);
  uVar4 = uVar2;
  while( true ) {
    if ((int)uVar6 < 1) {
      uVar4 = F_0042aca0(param_1 GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c) GEN_EDX_ARG);
      return uVar4;
    }
    F_0042aca0(pvVar5 GEN_EDX_ARG);
    uVar6 = F_00580530(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,pvVar5,in_ecx,param_2,0);
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    if (-1 < (int)uVar6) {
      F_0042ccf0((undefined *)((int)this + 0x330) GEN_EDX_ARG,param_1);
      (*(uint *)(gen_frame + 0x0)) = uVar4;
      (*(uint *)(gen_frame + 0x4)) = uVar2;
    }
    uVar2 = (int)((*(uint *)(gen_frame + 0x4)) - (*(uint *)(gen_frame + 0x0))) / 2 + (*(uint *)(gen_frame + 0x0));
    if ((uVar2 == 0) || (uVar2 == uVar4)) break;
    F_00a26c30(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,(int)this + 0x330,uVar2);
    iVar8 = (int)this + 0x330;
    pvVar3 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,param_3);
    uVar4 = F_0042e360(pvVar3 GEN_EDX_ARG,iVar8);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x114)) GEN_EDX_ARG,uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    uVar7 = param_4;
    pvVar3 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x114)));
    uVar4 = F_0042e360(pvVar3 GEN_EDX_ARG,uVar7);
    F_0042cbc0(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
    F_0042ccf0(pvVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc0)));
    F_0042c880(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x114)) GEN_EDX_ARG);
    F_0042aca0(in_ecx GEN_EDX_ARG);
    iVar8 = **(int * PTR32 *)((int)this + 0x14);
    uVar4 = ((code *)*(gen_code32 *)(iVar8 + 4))(*(int * PTR32 *)((int)this + 0x14),in_ecx);
    uVar6 = ((code *)*(gen_code32 *)(iVar8 + 0xc))(*(undefined4 *)((int)this + 0x14),pvVar5,uVar4);
    uVar4 = uVar2;
    uVar2 = (*(uint *)(gen_frame + 0x4));
  }
  uVar4 = F_00a26c30(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,param_1,(*(uint *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00586b50 */
GEN_FRAME uint GEN_THISCALL F_00586b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x586b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(byte *)(param_4 + 0xb) < 2) {
    uVar1 = F_00a27030(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)),param_1);
    F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    uVar1 = F_0056a610(this GEN_EDX_ARG,param_1,param_2,param_3,param_5,param_6);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return uVar1;
  }
  if (*(short *)(param_4 + 4) == 0) {
    uVar1 = F_0055bea0(this GEN_EDX_ARG,param_1,(uint)*(byte *)(param_4 + 0xb),param_3);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return uVar1;
  }
  F_0056a610(this GEN_EDX_ARG,param_1,param_2,param_3,param_5,param_6);
  uVar1 = F_00586890(this GEN_EDX_ARG,param_1,param_4,param_5,param_6);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00586c30 */
GEN_FRAME ushort GEN_THISCALL F_00586c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x586c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  char cVar1;
  undefined * this_00;
  int iVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  ushort uVar6;
  char * pcVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(int *)(gen_frame + 0x28)) = (int)*(short *)((int)this + 0x22);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_1;
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x3c)) = 1;
  (*(uint *)(gen_frame + 0x38)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0xffffffff;
  if (*(short *)((int)this + 0x83c) == 0) {
    pcVar7 = (char *)F_0042a990(param_1 GEN_EDX_FWD);
    (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar7;
    while( true ) {
      uVar8 = F_00a26f40(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,pcVar7);
      uVar9 = F_0042d2c0((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x44)),(int)pcVar7 - (int)(*(char * PTR32 *)(gen_frame + 0x1c)),uVar8);
      F_0042ccf0((undefined *)((int)this + 0x330) GEN_EDX_ARG,uVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
      uVar9 = F_00a26ce0(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,(int)this + 0x330,0);
      cVar1 = pcVar7[uVar8];
      if (cVar1 != '\0') {
        uVar9 = uVar9 + 1;
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) - uVar9;
      if (((*(int *)(gen_frame + 0x28)) < 0) || (((*(int *)(gen_frame + 0x28)) == 0 && (uVar9 == 0)))) {
        if ((int)(*(uint *)(gen_frame + 0x38)) < 0) {
          (*(uint *)(gen_frame + 0x30)) = uVar9 + (*(int *)(gen_frame + 0x28));
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x3c));
          (*(uint *)(gen_frame + 0x38)) = uVar9;
        }
        else if ((int)(*(uint *)(gen_frame + 0x2c)) < 0) {
          (*(uint *)(gen_frame + 0x2c)) = uVar9;
        }
      }
      else {
        (*(uint *)(gen_frame + 0x18)) = uVar9;
      }
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + uVar8 + 1;
      (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 1;
    }
  }
  else {
    pcVar7 = (char *)F_0042a990(param_1 GEN_EDX_ARG);
    (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar7;
    while( true ) {
      uVar8 = F_00a26f40(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,pcVar7);
      uVar9 = F_0042d2c0((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x44)),(int)pcVar7 - (int)(*(char * PTR32 *)(gen_frame + 0xc)),uVar8);
      F_0042ccf0((undefined *)((int)this + 0x330) GEN_EDX_ARG,uVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
      (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar7 + uVar8;
      pcVar7 = (char *)F_0042a990((int)this + 0x330 GEN_EDX_ARG);
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
      (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar7;
      while( true ) {
        this_00 = *(undefined * PTR32 *)((int)this + 0x1c);
        F_005796e0(this_00 GEN_EDX_ARG,(int)this + 0x838,0);
        F_005797b0(this_00 GEN_EDX_ARG,(*(char * PTR32 *)(gen_frame + 0x34)),(uint)*(ushort *)((int)this + 0x83c),
                     (uint)*(ushort *)((int)this + 0x846),&(*(int *)(gen_frame + 0x4)));
        iVar4 = (*(int *)(gen_frame + 0x4));
        iVar2 = *(int *)((int)this_00 + 0x38);
        if (iVar2 != 0) {
          puVar12 = (undefined4 *)(iVar2 + 0xa8);
          puVar13 = (undefined4 *)(iVar2 + 100);
          for (iVar11 = 0x11; iVar11 != 0; iVar11 = iVar11 - 1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
          *(undefined4 *)((int)this_00 + 0x38) = 0;
          this = (*(undefined * PTR32 *)(gen_frame + 0x10));
        }
        uVar8 = F_0042d2c0((undefined *)((int)this + 0x330) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x44)),(int)(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 *)(gen_frame + 0x8)),
                             (*(int *)(gen_frame + 0x4)));
        F_0042ccf0((undefined *)((int)this + 0x2dc) GEN_EDX_ARG,uVar8);
        F_0042c880(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
        pcVar7 = (*(char * PTR32 *)(gen_frame + 0x20));
        (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x34)) + iVar4;
        (*(char *)(gen_frame + 0x43)) = 0;
        if (*(*(char * PTR32 *)(gen_frame + 0x20)) != '\0') {
          (*(char *)(gen_frame + 0x43)) = 1;
        }
        (*(char *)(gen_frame + 0x43)) = *(*(char * PTR32 *)(gen_frame + 0x20)) != '\0';
        uVar9 = F_00a26ce0(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,(undefined *)((int)this + 0x2dc),0);
        if (((*pcVar7 != '\0') && (*(*(char * PTR32 *)(gen_frame + 0x34)) == '\0')) &&
           ((*pcVar7 != '\x02' || (pcVar7[1] != '\x10')))) {
          uVar9 = uVar9 + 1;
        }
        (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) - uVar9;
        if (((*(int *)(gen_frame + 0x28)) < 0) || (((*(int *)(gen_frame + 0x28)) == 0 && ((*(char *)(gen_frame + 0x43)) == '\0')))) {
          if ((int)(*(uint *)(gen_frame + 0x38)) < 0) {
            (*(uint *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x28)) + uVar9;
            (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x3c));
            (*(uint *)(gen_frame + 0x38)) = uVar9;
          }
          else if ((int)(*(uint *)(gen_frame + 0x2c)) < 0) {
            (*(uint *)(gen_frame + 0x2c)) = uVar9;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x18)) = uVar9;
        }
        if (*(*(char * PTR32 *)(gen_frame + 0x34)) == '\0') break;
        (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 1;
      }
      if (*pcVar7 == '\0') break;
      if ((*pcVar7 == '\x02') && (pcVar7[1] == '\x10')) {
        uVar8 = F_00a24d30(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,pcVar7 + 2,
                             (int)*(undefined * PTR32 *)((int)this + 0x1c) + 0x350,&(*(char * PTR32 *)(gen_frame + 0x1c)),1);
        (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 1;
        pcVar7 = pcVar7 + 3 + (int)((*(char * PTR32 *)(gen_frame + 0x1c)) + uVar8);
        (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar7;
      }
      else {
        pcVar7 = pcVar7 + 1;
        (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 1;
        (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar7;
      }
    }
  }
  if ((*(int *)(gen_frame + 0x28)) == 0) {
    (*(uint *)(gen_frame + 0x30)) = uVar9;
    (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x3c));
    (*(uint *)(gen_frame + 0x38)) = uVar9;
  }
  *(short *)((int)this + 0xd4) = (short)(*(int *)(gen_frame + 0x3c));
  sVar10 = (short)(*(uint *)(gen_frame + 0x30));
  sVar3 = (short)(*(uint *)(gen_frame + 0x38));
  if ((*(int *)(gen_frame + 0x24)) < (*(int *)(gen_frame + 0x3c))) {
    if ((int)(*(uint *)(gen_frame + 0x30)) < (int)(*(uint *)(gen_frame + 0x2c))) {
      *(short *)((int)this + 0xd8) = sVar3;
    }
    else {
      sVar5 = ((short)(*(uint *)(gen_frame + 0x2c)) - sVar10) + sVar3;
      *(short *)((int)this + 0xd8) = sVar5;
      if ((*(int *)(gen_frame + 0x24)) < (*(int *)(gen_frame + 0x3c)) - 1) {
        *(short *)((int)this + 0xd8) = sVar5 - 1;
      }
    }
    uVar6 = *(short *)((int)this + 0x22) - sVar10;
    *(ushort *)((int)this + 0xdc) = (uVar6 - 1) + sVar3;
  }
  else {
    *(short *)((int)this + 0xd8) = sVar3 - sVar10;
    uVar6 = *(short *)((int)this + 0x22) - sVar10;
    *(ushort *)((int)this + 0xdc) = uVar6 + sVar3;
  }
  *(ushort *)((int)this + 0xda) = uVar6;
  uVar8 = (*(uint *)(gen_frame + 0x30));
  if (1 < (*(int *)(gen_frame + 0x24))) {
    if ((int)(*(uint *)(gen_frame + 0x30)) < (int)(*(uint *)(gen_frame + 0x18))) {
      *(short *)((int)this + 0xd6) = (short)(*(uint *)(gen_frame + 0x18));
      F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
      return uVar6;
    }
    uVar8 = (*(uint *)(gen_frame + 0x30)) + 1;
  }
  *(short *)((int)this + 0xd6) = (short)uVar8;
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00586fc0 */
GEN_FRAME unsigned int GEN_THISCALL F_00586fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x586fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  piVar2 = *(int * PTR32 *)this;
  piVar5 = (int *)*piVar2;
joined_r0x00586fd1: ;
  do {
    piVar4 = piVar5;
    if (piVar4 == piVar2) {
      return;
    }
    iVar3 = piVar4[2];
    if ((*(int *)(iVar3 + 8) != 0) && (*(int *)(iVar3 + 0x10) == 1)) {
      piVar5 = ((int *)GEN_TOP((*(int *)(iVar3 + 8) + 0x88)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar5), 0);
      if (iVar1 == 2) {
        *(undefined4 *)(iVar3 + 0x10) = 2;
        piVar5 = ((int *)GEN_TOP((*(int *)(iVar3 + 8) + 0x8c)));
        iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar5), 0);
        if (7 < iVar1) {
          if (piVar4[2] != 0) {
            F_00406ad0(piVar4[2]);
            piVar4[2] = 0;
          }
          piVar5 = (int *)*piVar4;
          if (piVar4 != *(int * PTR32 *)this) {
            *(int * PTR32 *)piVar4[1] = piVar5;
            *(int *)(*piVar4 + 4) = piVar4[1];
            F_00429760(piVar4,0xc,400);
            *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
          }
          goto joined_r0x00586fd1;
        }
        *(undefined4 *)(iVar3 + 0xc) = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 8) + 0xfc)));
      }
    }
    piVar5 = (int *)*piVar4;
  } while( true );
}

/* ref: FUN_00587080 */
GEN_FRAME unsigned int GEN_THISCALL F_00587080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x587080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar3 = (int *)*piVar1;
  while (piVar2 = piVar3, piVar2 != piVar1) {
    if (piVar2[2] != 0) {
      F_00406ad0(piVar2[2]);
      piVar2[2] = 0;
    }
    piVar3 = (int *)*piVar2;
    if (piVar2 != *(int * PTR32 *)this) {
      *(int * PTR32 *)piVar2[1] = piVar3;
      *(int *)(*piVar2 + 4) = piVar2[1];
      F_00429760(piVar2,0xc,400);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
    }
  }
  piVar1 = *(int * PTR32 *)this;
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar3 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar3;
      F_00429760(piVar3,0xc,400);
      piVar3 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return 0;
}

/* ref: FUN_00587110 */
GEN_FRAME uint GEN_THISCALL F_00587110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x587110u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  undefined4 * puVar2;
  char * pcVar3;
  char * pcVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  undefined4 uVar8;
  
  pcVar3 = (*(char * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)&gen_args[0]);
  pcVar4 = (*(char * PTR32 *)&gen_args[1]);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_FWD,(*(char * PTR32 *)&gen_args[1]),(int)pcVar4 - (int)((*(char * PTR32 *)&gen_args[1]) + 1));
  uVar5 = F_00408810(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
  if ((uVar5 != 0) && (uVar5 != 0x7405a171)) {
    for (puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]))); puVar2 != *(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
        puVar2 = (undefined4 *)*puVar2) {
      if (*(uint *)puVar2[2] == uVar5) {
        uVar5 = F_00513f60(((uint *)puVar2[2])[2],0,0);
        F_004087f0(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
        return uVar5;
      }
    }
    uVar8 = 0;
    uVar6 = F_00404270();
    puVar7 = (uint *)F_00406bd0(0x14,0,uVar6,uVar8);
    if (puVar7 != (uint *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0xffffffff;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      (*(uint * PTR32 *)(gen_frame + 0x34)) = puVar7;
      F_004ff310(((undefined1 *)(gen_frame + 0x38)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]),0);
      (*(char * PTR32 *)&gen_args[1]) = (char *)0x746578;
      F_004d4610(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,2,0);
      *puVar7 = uVar5;
      uVar5 = F_00513d20(((undefined1 *)(gen_frame + 0x38)),&(*(char * PTR32 *)&gen_args[1]),pcVar3,((undefined1 *)(gen_frame + 0x0)),0,0);
      puVar7[2] = uVar5;
      puVar7[4] = 1;
      F_005cd300((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,&(*(uint * PTR32 *)(gen_frame + 0x34)));
      uVar5 = puVar7[2];
      F_004087f0(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
      return uVar5;
    }
  }
  F_004087f0(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00587250 */
GEN_FRAME uint GEN_THISCALL F_00587250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x587250u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  char * pcVar2;
  uint uVar3;
  uint * puVar4;
  char * pcVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar6 = (*(uint *)&gen_args[1]);
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0])));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)&gen_args[0]);
  for (; puVar1 != *(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]); puVar1 = (undefined4 *)*puVar1) {
    if (*(uint *)(puVar1[2] + 4) == (*(uint *)&gen_args[1])) {
      uVar6 = F_00513f60(*(undefined4 *)(puVar1[2] + 8),0,0);
      return uVar6;
    }
  }
  uVar7 = 0;
  uVar3 = F_00404270();
  puVar4 = (uint *)F_00406bd0(0x14,0,uVar3,uVar7);
  if (puVar4 != (uint *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    (*(uint * PTR32 *)(gen_frame + 0x34)) = puVar4;
    F_004ff310(((undefined1 *)(gen_frame + 0x38)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[3]),0);
    (*(uint *)&gen_args[1]) = 0x746578;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x18)) = 5000;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0x10100;
    (*(undefined1 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    (*(undefined2 *)(gen_frame + 0x21)) = 0;
    F_0055c510(&REFG(undefined1, 0x1379868),uVar6,(*(undefined4 *)&gen_args[2]));
    pcVar2 = &REFG(undefined1, 0x1379868);
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    F_0040b1a0(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG,&REFG(undefined1, 0x1379868),pcVar5 - 0x1379868);
    uVar3 = F_00408810(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
    puVar4[1] = uVar6;
    *puVar4 = uVar3;
    uVar6 = F_00513d20(((undefined1 *)(gen_frame + 0x38)),&(*(uint *)&gen_args[1]),&REFG(undefined1, 0x1379868),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    puVar4[2] = uVar6;
    puVar4[4] = 1;
    F_005cd300((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,&(*(uint * PTR32 *)(gen_frame + 0x34)));
    uVar6 = puVar4[2];
    F_004087f0(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
    return uVar6;
  }
  return 0;
}

/* ref: FUN_005873b0 */
GEN_FRAME uint GEN_THISCALL F_005873b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5873b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  do {
    if (piVar2 == piVar1) {
LAB_0058742a: ;
      F_0050c620(param_1,0,0);
      return 0;
    }
    iVar3 = piVar2[2];
    iVar4 = *(int *)(iVar3 + 8);
    if (iVar4 == param_1) {
      piVar5 = (int *)(iVar4 + 0x94);
      iVar4 = _InterlockedExchangeAdd((volatile long *)(piVar5), 0);
      if (iVar4 < 2) {
        if (piVar2 != *(int * PTR32 *)this) {
          *(int *)piVar2[1] = *piVar2;
          *(int *)(*piVar2 + 4) = piVar2[1];
          F_00429760(piVar2,0xc,400);
          *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
        }
        F_00406ad0(iVar3);
        goto LAB_0058742a;
      }
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}

/* ref: FUN_00587440 */
GEN_NOFRAME uint GEN_THISCALL F_00587440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x587440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 8);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    uVar3 = 0;
    if (*(int *)(iVar1 + 4) == 0) {
      return 0;
    }
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar1 + 8) + uVar3 * 4)));
      if ((*(short *)((int)this_00 + 0x18) == 3) && (*(int *)((int)this_00 + 0x8c) != 0)) {
        uVar2 = F_0056c6b0(*(undefined4 *)(REFG(int, 0x1379860) + 0x30),*(int *)((int)this_00 + 0x8c),
                             (uint)*(byte *)((int)this_00 + 0x114));
        F_00584110(this_00 GEN_EDX_ARG,uVar2);
      }
      iVar1 = *(int *)((int)this + 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(iVar1 + 4));
    return 0;
  }
  return 0;
}

/* ref: FUN_005874c0 */
GEN_FRAME uint GEN_THISCALL F_005874c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5874c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 != 0) {
    F_0057f0d0(this GEN_EDX_FWD,param_1,*(undefined4 *)(param_1 + 8),param_2);
  }
  return 0;
}

/* ref: FUN_005874e0 */
GEN_NOFRAME uint GEN_THISCALL F_005874e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5874e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined2 *)((int)this + 0x2e) = 0;
  iVar1 = *(int *)((int)this + 0x38);
  if (iVar1 != *(int *)((int)this + 0x3c)) {
    uVar2 = F_00c46e20(iVar1,*(int *)((int)this + 0x3c),0);
    *(int *)((int)this + 0x3c) = iVar1;
  }
  return uVar2;
}

/* ref: FUN_00587550 */
GEN_NOFRAME uint GEN_THISCALL F_00587550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x587550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x14) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar2 = F_005c9280(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005875a0 */
GEN_FRAME byte GEN_THISCALL F_005875a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5875a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  int iVar3;
  char * pcVar4;
  uint uVar5;
  int * piVar6;
  undefined4 uVar7;
  
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar7 = 0;
  uVar5 = F_00404270();
  uVar5 = F_00406c00(pcVar4 + (1 - (int)(param_1 + 1)),0,uVar5,uVar7);
  F_00c49908(uVar5,pcVar4 + (1 - (int)(param_1 + 1)),param_1);
  iVar2 = *(int *)this;
  iVar3 = *(int *)(iVar2 + 4);
  piVar6 = (int *)F_004296a0(0xc,0,400);
  *piVar6 = iVar2;
  piVar6[1] = iVar3;
  if ((uint *)(piVar6 + 2) != (uint *)0x0) {
    piVar6[2] = uVar5;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar2 + 4) = piVar6;
  *(int * PTR32 *)piVar6[1] = piVar6;
  return 1;
}

/* ref: FUN_005876a0 */
GEN_NOFRAME uint GEN_THISCALL F_005876a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5876a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x90);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = F_0057f0d0((undefined *)((int)this + 0x24) GEN_EDX_FWD,iVar1,*(undefined4 *)(iVar1 + 8),0);
  }
  return uVar2;
}

/* ref: FUN_005876c0 */
GEN_NOFRAME uint GEN_THISCALL F_005876c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5876c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x90);
  if ((uVar2 != 0) && ((*(uint *)((int)this + 0x120) >> 7 & 1) == 0)) {
    if (*(undefined * PTR32 *)(uVar2 + 0x80) != (undefined *)0x0) {
      F_00583770(*(undefined * PTR32 *)(uVar2 + 0x80) GEN_EDX_FWD,0xc,0,this,1);
    }
    if ((*(int *)((int)this + 0x90) != 0) &&
       (pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x80))), pvVar1 != (undefined *)0x0)) {
      F_00583770(pvVar1 GEN_EDX_ARG,0xd,0,this,1);
    }
    if ((*(int *)((int)this + 0x90) != 0) &&
       (pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x80))), pvVar1 != (undefined *)0x0)) {
      F_00583770(pvVar1 GEN_EDX_ARG,0x47,0,this,1);
    }
    if ((*(int *)((int)this + 0x90) != 0) &&
       (pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x80))), pvVar1 != (undefined *)0x0)) {
      F_00583770(pvVar1 GEN_EDX_ARG,0x3f,0,this,1);
    }
    uVar2 = *(uint *)((int)this + 0x90);
    if ((uVar2 != 0) && (*(undefined * PTR32 *)(uVar2 + 0x80) != (undefined *)0x0)) {
      uVar2 = F_00583770(*(undefined * PTR32 *)(uVar2 + 0x80) GEN_EDX_ARG,0x40,0,this,1);
    }
  }
  return uVar2;
}

/* ref: FUN_00587780 */
GEN_FRAME unsigned int GEN_THISCALL F_00587780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x587780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd8))(this GEN_EDX_FWD,param_1,param_2);
    iVar1 = *(int *)((int)this + 0x90);
    if (iVar1 != 0) {
      F_0057f0d0((undefined *)((int)this + 0x24) GEN_EDX_ARG,iVar1,*(undefined4 *)(iVar1 + 8),0);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x78))(this GEN_EDX_ARG);
    F_0056b300(this GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_005877e0 */
GEN_FRAME uint GEN_THISCALL F_005877e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5877e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = REFG(int, 0x1379860);
  if (param_1 != 0) {
    iVar1 = param_1;
    iVar5 = *(int *)((int)this + 0x90);
    while (iVar5 != 0) {
      if (iVar1 == *(int *)((int)this + 0x90)) {
        if ((param_1 == *(int *)((int)this + 0xa0)) ||
           (iVar5 = param_1, (*(uint *)(param_1 + 0x84) >> 0x1a & 1) == 0)) {
          iVar5 = *(int *)((int)this + 0xa4);
        }
        goto LAB_00587870;
      }
      iVar1 = *(int *)(iVar1 + 8);
      iVar5 = iVar1;
    }
  }
  iVar5 = *(int *)((int)this + 0xa4);
  if (iVar5 != 0) {
    iVar2 = iVar5;
    iVar1 = *(int *)((int)this + 0x90);
    while( true ) {
      if (iVar1 == 0) {
        this_00 = *(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14);
        uVar4 = F_0057f8d0(this_00 GEN_EDX_FWD,iVar5);
        if (uVar4 == 0) {
          uVar4 = F_0057f8d0(this_00 GEN_EDX_ARG,iVar5);
        }
        uVar4 = F_0059b1c0(*(undefined * PTR32 *)(iVar3 + 0x18) GEN_EDX_ARG,iVar5,uVar4,0);
        return uVar4;
      }
      if (iVar2 == *(int *)((int)this + 0x90)) break;
      iVar2 = *(int *)(iVar2 + 8);
      iVar1 = iVar2;
    }
  }
LAB_00587870: ;
  uVar4 = F_0059b1c0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x18) GEN_EDX_ARG,iVar5,this,0);
  return uVar4;
}

/* ref: FUN_00587890 */
GEN_FRAME uint GEN_THISCALL F_00587890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x587890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
  if ((((uVar2 == 3) || (uVar2 == 2)) || ((char)param_1 != '\0')) &&
     ((*(byte *)((int)this + 0xf8) & 0x80) == 0)) {
    iVar1 = *(int *)(REFG(int, 0x1379860) + 0x18);
    if (*(short *)(iVar1 + 0xc68) == 0) {
      uVar2 = F_005877e0(this GEN_EDX_FWD,*(undefined4 *)(iVar1 + 0xc58));
      return uVar2;
    }
    uVar2 = F_005877e0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0x50 + *(short *)(iVar1 + 0xc68) * 0xc))));
  }
  return uVar2;
}

/* ref: FUN_005878f0 */
GEN_FRAME uint GEN_THISCALL F_005878f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5878f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  bVar2 = F_0056b4e0(param_1 GEN_EDX_FWD,param_2);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 != 0) {
    iVar1 = param_1[0x24];
    if (iVar1 != 0) {
      F_0057f0d0(param_1 + 9 GEN_EDX_ARG,iVar1,*(undefined4 *)(iVar1 + 8),0);
    }
    uVar3 = F_00578ee0(param_1 + 9 GEN_EDX_ARG,0);
    uVar3 = F_0055d7f0(param_1 + 9 GEN_EDX_ARG,uVar3,param_2);
    if ((char)param_3 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x78))(param_1 GEN_EDX_ARG);
      uVar3 = F_0056b300(param_1 GEN_EDX_ARG,0);
    }
  }
  return uVar3;
}

/* ref: FUN_00587960 */
GEN_FRAME uint GEN_THISCALL F_00587960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x587960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(undefined1)param_1);
  *(undefined1 *)((int)this + 0x10c) = (undefined1)param_1;
  if (((*(byte *)((int)this + 0x122) & 1) != 0) && (uVar1 = 0, param_2 != 0)) {
    uVar1 = F_0057f810(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_FWD,param_2);
    if ((uVar1 != 0) && (*(char *)(uVar1 + 0x10c) == '2')) {
      *(undefined1 *)((int)this + 0x10c) = 0x50;
    }
  }
  return uVar1;
}

/* ref: FUN_005879b0 */
GEN_FRAME uint GEN_THISCALL F_005879b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5879b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  int * this_00;
  undefined3 extraout_var_00 = 0;
  
  this_00 = *(int * PTR32 *)(REFG(int, 0x1379860) + 0x14);
  if (*(char *)((int)this + 0x13c) != '\0') {
    piVar1 = *(int * PTR32 *)((int)this_00 + 0xb4);
    this_00 = (int *)*piVar1;
    if (this_00 != piVar1) {
      while (*(char *)(this_00[2] + 0x13a) != *(char *)((int)this + 0x13c)) {
        this_00 = (int *)*this_00;
        if (this_00 == piVar1) {
          return (uint)this_00;
        }
      }
      this_00 = (int *)this_00[2];
      if ((this_00 != (undefined *)0x0) && ((*(byte *)((int)this + 0xfb) & 4) != 0)) {
        if (param_1 != 0) {
          bVar2 = F_0056b630(this_00 GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6);
          return CONCAT31(extraout_var,bVar2);
        }
        bVar2 = F_0056b780(this_00 GEN_EDX_ARG,0);
        this_00 = ((int *)GEN_TOP(CONCAT31(extraout_var_00,bVar2)));
      }
    }
  }
  return (uint)this_00;
}

/* ref: Component::GUI2::AtkUnitManager::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00587a40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x587a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pAVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  pAVar1 = this + 0x100;
  if (pAVar1 != (undefined *)0x0) {
    if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
      F_00583770(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_FWD,0xc,0,this,0);
    }
    if (pAVar1 != (undefined *)0x0) {
      if (*(int *)(this + 0x180) == 0) {
        uVar4 = 0;
        uVar2 = F_00404270();
        puVar3 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar4);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = 0;
        }
        *(undefined4 * PTR32 *)(this + 0x180) = puVar3;
      }
      F_00565340(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,0xc,0,0,pAVar1,this,0);
    }
  }
  return;
}

/* ref: FUN_00587ac0 */
GEN_FRAME unsigned int GEN_THISCALL F_00587ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x587ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  byte bVar4;
  int * piVar5;
  int iVar6;
  
  if (*param_1 != 0) {
    iVar1 = *(int *)((int)this + 0xec);
    if (iVar1 != 0) {
      iVar2 = *(int *)(*param_1 + 0x90);
      iVar6 = iVar2;
      while (iVar6 != 0) {
        if (iVar1 == iVar2) {
          *(undefined4 *)((int)this + 0xec) = 0;
          break;
        }
        iVar1 = *(int *)(iVar1 + 8);
        iVar6 = iVar1;
      }
    }
    iVar1 = *(int *)(REFG(int, 0x1379860) + 0x18);
    iVar2 = *param_1;
    if (iVar2 != 0) {
      if ((*(int *)(iVar1 + 0xc58) != 0) &&
         (bVar4 = F_0055de10(iVar2 GEN_EDX_FWD,*(int *)(iVar1 + 0xc58)), bVar4 != 0)) {
        *(undefined4 *)(iVar1 + 0xc58) = 0;
      }
      iVar6 = 0;
      if (0 < *(short *)(iVar1 + 0xc68)) {
        piVar5 = (int *)(iVar1 + 0x58);
        do {
          if (*piVar5 == iVar2) {
            *piVar5 = 0;
            piVar5[1] = 0;
            piVar5[2] = 0;
          }
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 3;
        } while (iVar6 < *(short *)(iVar1 + 0xc68));
      }
    }
    if ((*param_1 != 0) && (iVar1 = *(int *)(REFG(int, 0x1379860) + 0x1c), *(int *)(iVar1 + 4) == *param_1))
    {
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined1 *)(iVar1 + 0x20) = 0;
    }
    F_00580230(this GEN_EDX_ARG,*param_1,1);
    if (*(int *)((int)this + 0xcc) == *param_1) {
      *(undefined4 *)((int)this + 0xcc) = 0;
    }
    if (*(int *)((int)this + 0xd0) == *param_1) {
      *(undefined4 *)((int)this + 0xd0) = 0;
    }
    F_00a4b450((undefined *)((int)this + 4) GEN_EDX_ARG,(uint)*(byte *)(*param_1 + 0x13a));
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_ARG,*param_1);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_1 + 0x94))((int *)*param_1 GEN_EDX_ARG);
    puVar3 = (undefined4 *)*param_1;
    if (puVar3 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
      *param_1 = 0;
    }
  }
  return;
}

/* ref: FUN_00587c00 */
GEN_FRAME unsigned int GEN_THISCALL F_00587c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x587c00u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * this_00;
  int * piVar1;
  bool bVar2;
  int * piVar3;
  
  if (((*(int *)&gen_args[1]) != 0) && ((*(int *)&gen_args[2]) != 0)) {
    this_00 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
    piVar1 = (int *)*this_00;
    piVar3 = (int *)*piVar1;
    bVar2 = false;
    if (piVar3 != piVar1) {
      do {
        if (piVar3[2] == (*(int *)&gen_args[1])) break;
        if (piVar3[2] == (*(int *)&gen_args[2])) {
          bVar2 = true;
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != piVar1);
      if ((!bVar2) && (piVar3 != piVar1)) {
        F_005c4950(this_00 GEN_EDX_FWD,&(*(int *)&gen_args[2]));
        F_005ce470(this_00 GEN_EDX_ARG,&(*(int *)&gen_args[1]),piVar3,&(*(int *)&gen_args[2]));
      }
    }
  }
  return;
}

/* ref: Component::GUI2::AtkUnitManager::vf31 */
GEN_FRAME uint GEN_THISCALL F_00587c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x587c60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) != 0) && ((*(uint *)((*(int *)&gen_args[1]) + 0x120) >> 5 & 1) == 0)) {
    uVar3 = F_005ce470((*(undefined * PTR32 *)&gen_args[0]) + 0xb4 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb4))) + 4))),&(*(int *)&gen_args[1]));
    return uVar3;
  }
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
  iVar2 = *(int *)(iVar1 + 4);
  piVar4 = (int *)F_004296a0(0xc,0,400);
  *piVar4 = iVar1;
  piVar4[1] = iVar2;
  if (piVar4 + 2 != (int *)0x0) {
    piVar4[2] = (*(int *)&gen_args[1]);
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar4;
  *(int * PTR32 *)piVar4[1] = piVar4;
  return (uint)piVar4;
}

/* ref: FUN_00587d10 */
GEN_FRAME byte GEN_THISCALL F_00587d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x587d10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (((*(int *)&gen_args[1]) != 0) && ((*(byte *)((*(int *)&gen_args[1]) + 0xf8) & 0x10) != 0)) {
    iVar1 = (*(ushort *)((*(int *)&gen_args[1]) + 0xf6) & 0xf) * 3 + 6;
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 * 4)));
    for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
      if (puVar3[2] == (*(int *)&gen_args[1])) {
        *(byte *)((*(int *)&gen_args[1]) + 0xf8) = *(byte *)((*(int *)&gen_args[1]) + 0xf8) & 0xef;
        F_005cda40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 * 4))) GEN_EDX_FWD,&(*(int *)&gen_args[1]),puVar3);
        *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) | 1;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00587d80 */
GEN_FRAME uint GEN_THISCALL F_00587d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x587d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  F_00580230(this GEN_EDX_FWD,param_1,0);
  iVar1 = *(int *)((int)this + 0xc0);
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = param_1;
  }
  if (*(int *)((int)this + 0xc4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 0xc4) = *(int *)((int)this + 0xc4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00587df0 */
GEN_FRAME uint GEN_THISCALL F_00587df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x587df0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * this;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  float fVar7;
  
  uVar5 = param_2;
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0xfb) & 1) == 0) {
      bVar4 = *(byte *)(param_2 + 0x13c);
    }
    else {
      bVar4 = *(byte *)(param_2 + 0x13a);
    }
    uVar6 = (uint)bVar4;
    if (uVar6 == 0) {
      uVar5 = F_005878f0(param_2 GEN_EDX_FWD,param_3,param_4);
      return uVar5;
    }
    puVar1 = *(undefined4 * PTR32 *)(param_1 + 0xb4);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      this = (int *)puVar2[2];
      uVar5 = (uint)*(byte *)(this + 0x4f);
      if ((uVar5 == uVar6) ||
         (((*(byte *)((int)this + 0xfb) & 1) != 0 && (*(byte *)((int)this + 0x13a) == uVar6)))) {
        bVar4 = F_0056b4e0(this GEN_EDX_ARG,param_3);
        uVar5 = CONCAT31(extraout_var,bVar4);
        if (bVar4 != 0) {
          iVar3 = this[0x24];
          if (iVar3 != 0) {
            F_0057f0d0(this + 9 GEN_EDX_ARG,iVar3,*(undefined4 *)(iVar3 + 8),0);
          }
          fVar7 = param_3;
          uVar5 = F_00578ee0(this + 9 GEN_EDX_ARG,0);
          uVar5 = F_0055d7f0(this + 9 GEN_EDX_ARG,uVar5,fVar7);
          if ((char)param_4 != '\0') {
            ((GEN_TCODE *)*(gen_code32 *)(*this + 0x78))(this GEN_EDX_ARG);
            uVar5 = F_0056b300(this GEN_EDX_ARG,0);
          }
        }
      }
    }
  }
  return uVar5;
}

/* ref: FUN_00587ef0 */
GEN_NOFRAME uint GEN_THISCALL F_00587ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x587ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_004296a0(0xc,0,400);
  *(uint *)this = uVar1;
  *(uint *)uVar1 = uVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 1;
  *(undefined4 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_00587f50 */
GEN_FRAME uint GEN_THISCALL F_00587f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x587f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  short sVar1;
  short sVar2;
  short * psVar3;
  int iVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  int * piVar10;
  int iVar11;
  
  uVar6 = 0;
  if (*(short *)((int)this + 0x10) != 0) {
    while (*((uint *)GEN_TOP((*(int *)((int)this + 0xc) + (uint)uVar6 * 0x10))) != (param_1 & 0xffff)) {
      uVar6 = uVar6 + 1;
      if (*(ushort *)((int)this + 0x10) <= uVar6) {
        return 0;
      }
    }
    iVar11 = (uint)uVar6 * 0x10 + *(int *)((int)this + 0xc);
    if (iVar11 != 0) {
      uVar6 = *(ushort *)((int)this + 0x18);
      bVar5 = *(ushort *)((int)this + 0x12) <= uVar6;
      if (bVar5) {
        uVar7 = F_00404270();
        piVar8 = (int *)F_00406bd0(0x24,0,uVar7,0);
      }
      else {
        piVar8 = ((int *)GEN_TOP((*(int *)((int)this + 0x14) + (uint)uVar6 * 0x24)));
        *(ushort *)((int)this + 0x18) = uVar6 + 1;
      }
      piVar10 = (int *)0x0;
      if (piVar8 != (int *)0x0) {
        piVar8[4] = 0;
        piVar8[7] = 0;
        piVar8[6] = 1;
        piVar8[2] = 1;
        *(undefined2 *)((int)piVar8 + 0x12) = 1;
        *piVar8 = iVar11;
        piVar8[1] = 0;
        piVar8[3] = 0;
        piVar8[5] = 0;
        piVar8[8] = 0x7f0000;
        psVar3 = *(short * PTR32 *)(iVar11 + 0xc);
        if (psVar3 != (short *)0x0) {
          *(undefined2 *)((int)piVar8 + 0x22) = 0x807f;
          sVar1 = psVar3[1];
          sVar2 = *psVar3;
          *(short *)((int)piVar8 + 0x12) = sVar1;
          *(short *)(piVar8 + 4) = sVar1 - sVar2;
        }
        piVar10 = piVar8;
        if (bVar5) {
          iVar11 = *(int *)((int)this + 0x1c);
          *(int *)((int)this + 0x1c) = iVar11 + 1;
          piVar8[7] = iVar11;
          iVar11 = *(int *)this;
          iVar4 = *(int *)(iVar11 + 4);
          piVar9 = (int *)F_004296a0(0xc,0,400);
          piVar9[1] = iVar4;
          *piVar9 = iVar11;
          if ((uint *)(piVar9 + 2) != (uint *)0x0) {
            piVar9[2] = (int)piVar8;
          }
          if (*(int *)((int)this + 4) == -2) {
                    
            F_00c4579a("list<T> too long");
          }
          *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
          *(int * PTR32 *)(iVar11 + 4) = piVar9;
          *(int * PTR32 *)piVar9[1] = piVar9;
        }
      }
      return (uint)piVar10;
    }
  }
  return 0;
}

/* ref: FUN_005880a0 */
GEN_FRAME uint GEN_THISCALL F_005880a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5880a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  if ((*(int *)&gen_args[1]) == 0) {
    return 0;
  }
  piVar1 = *(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  piVar4 = (int *)*piVar1;
  piVar3 = piVar4;
  if (piVar4 != piVar1) {
    while (*(int *)(piVar3[2] + 0x1c) != (*(int *)&gen_args[1])) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar1) {
        return 0xffffffff;
      }
    }
    if (piVar3[2] != 0) {
      if (piVar4 != piVar1) {
        while (iVar2 = piVar4[2], *(int *)(iVar2 + 0x1c) != (*(int *)&gen_args[1])) {
          piVar4 = (int *)*piVar4;
          if (piVar4 == piVar1) {
            return 0;
          }
        }
        if (iVar2 != 0) {
          F_00406ad0(iVar2);
          piVar4[2] = 0;
        }
        F_005cddb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(int *)&gen_args[1]),piVar4);
      }
      return 0;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00588130 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00588130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x588130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 != *(int *)((int)this + 0xc)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0xc),0);
    *(int *)((int)this + 0xc) = iVar1;
  }
  return;
}

/* ref: FUN_00588170 */
GEN_FRAME uint GEN_THISCALL F_00588170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x588170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_005c9640((undefined *)((int)this + 0x14) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x18),
               *(undefined4 * PTR32 *)((int)this + 0x18));
  F_00429760(*(undefined4 *)((int)this + 0x18),0x18,400);
  uVar1 = F_00a4b380(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_005881b0 */
GEN_FRAME byte GEN_THISCALL F_005881b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5881b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_005cd5c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
}

/* ref: FUN_005881e0 */
GEN_FRAME uint GEN_THISCALL F_005881e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5881e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int * in_EAX = 0;
  int * piVar6;
  int * piVar7;
  
  iVar4 = (int)(*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    in_EAX = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    pvVar1 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    piVar7 = (int *)*in_EAX;
    if (piVar7 != in_EAX) {
      do {
        if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)piVar7[2]) break;
        piVar7 = (int *)*piVar7;
      } while (piVar7 != in_EAX);
      if (piVar7 != in_EAX) {
        piVar2 = piVar7 + 3;
        *piVar2 = *piVar2 - 1;
        if (*piVar2 == 0) {
          piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
          piVar6 = (int *)*piVar2;
          if (piVar6 != piVar2) {
            do {
              if ((undefined *)piVar6[2] == (*(undefined * PTR32 *)&gen_args[1])) break;
              piVar6 = (int *)*piVar6;
            } while (piVar6 != piVar2);
            if (piVar6 != piVar2) {
              (*(undefined * PTR32 *)&gen_args[1]) = pvVar1;
              F_005cd750(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar6);
              pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
            }
          }
          (*(undefined * PTR32 *)&gen_args[1]) = pvVar1;
          iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
          if (*(int *)(iVar3 + 0xc) == iVar4) {
            *(undefined4 *)(iVar3 + 0xc) = 0;
            *(undefined4 *)(iVar3 + 4) = 0;
          }
          iVar4 = piVar7[2];
          piVar2 = *(int * PTR32 *)(iVar4 + 0x18);
          if (piVar2 != (int *)0x0) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
            *(undefined4 *)(iVar4 + 0x18) = 0;
          }
          *(undefined4 *)(iVar4 + 0x10) = 0;
          *(undefined4 *)(iVar4 + 0x14) = 0;
          *(undefined4 *)(iVar4 + 8) = 0;
          puVar5 = (undefined4 *)piVar7[2];
          if (puVar5 != (undefined4 *)0x0) {
            ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,1);
            piVar7[2] = 0;
          }
          in_EAX = (int *)F_005cd6a0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[1]),piVar7);
        }
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_005882a0 */
GEN_NOFRAME byte GEN_THISCALL F_005882a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5882a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = F_005809c0(this GEN_EDX_FWD);
    if (uVar2 == 2) {
      *(undefined4 *)((int)this + 0x30) = 0;
      *(undefined4 *)((int)this + 8) = 1;
      return 1;
    }
LAB_005882c1: ;
    if (uVar2 != 0) goto LAB_005882d2;
  }
  else {
    if (iVar1 == 1) {
      uVar2 = F_0056bd70(this GEN_EDX_ARG);
      if (uVar2 == 2) {
        *(undefined4 *)((int)this + 0x30) = 0;
        *(undefined4 *)((int)this + 8) = 2;
        return 1;
      }
      goto LAB_005882c1;
    }
    if (iVar1 == 2) {
      uVar2 = F_00573740(this GEN_EDX_ARG);
      if (uVar2 != 2) goto LAB_005882c1;
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 3;
  *(undefined4 *)((int)this + 0x30) = 0;
LAB_005882d2: ;
  return uVar2 != 0;
}

/* ref: FUN_00588320 */
GEN_NOFRAME uint GEN_THISCALL F_00588320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x588320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x6c) != 0) {
    uVar1 = F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x23c))) GEN_EDX_FWD,0x49,0,this,0);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  return uVar1;
}

/* ref: FUN_00588350 */
GEN_NOFRAME uint GEN_THISCALL F_00588350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x588350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x80) = 0;
  uVar1 = 0;
  if (*(int *)((int)this + 0x6c) != 0) {
    F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x23c))) GEN_EDX_FWD,3,0,this,0);
    F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x23c))) GEN_EDX_ARG,4,0,this,0);
    uVar1 = F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x23c))) GEN_EDX_ARG,5,0,this,0);
  }
  return uVar1;
}

/* ref: FUN_005883a0 */
GEN_FRAME uint GEN_THISCALL F_005883a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5883a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  undefined2 uVar2;
  int * this;
  undefined * this_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  this = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0x6c) + 0x14))) + 0xe4)));
  if (this == (int *)0x0) {
    return 0;
  }
  uVar5 = (uint)this[0x3d] >> 0x14 & 0xf;
  if ((uVar5 == 3) || (uVar5 == 2)) {
    F_00573cd0(param_1 GEN_EDX_FWD);
  }
  ((GEN_TCODE *)*(gen_code32 *)(*this + 0x14))(this GEN_EDX_ARG,1);
  *(uint *)((int)param_1 + 0x74) = param_2;
  uVar5 = F_007e8d80(this GEN_EDX_ARG);
  *(uint *)((int)param_1 + 0x78) = uVar5;
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x6c) + 0x14)));
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_2 + 0xc))(param_2 GEN_EDX_ARG);
  uVar5 = F_0057f8d0(this_00 GEN_EDX_ARG,uVar5);
  if ((*(int *)((int)param_1 + 0x78) != 0) && (uVar5 != 0)) {
    iVar3 = *((int *)GEN_TOP((*(int *)((int)param_1 + 0x78) + 0x70)));
    fVar1 = ((float)GEN_TOF((((float10)1 / (float10)*(float *)(uVar5 + 0x11c)) *
                   (float10)*(float *)(uVar5 + 0x118))));
    if (iVar3 != 0) {
      F_00567d00(iVar3 GEN_EDX_ARG,fVar1,fVar1);
    }
  }
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_2 + 0xc))(param_2 GEN_EDX_ARG);
  if (uVar5 != 0) {
    *(uint *)(uVar5 + 0x84) = *(uint *)(uVar5 + 0x84) & 0xffefffff;
    *(uint *)(uVar5 + 0x88) = *(uint *)(uVar5 + 0x88) | 0x80;
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0x78) + 0x84))) + 0xc))))
                    (*(int *)((int)param_1 + 0x78) + 0x84);
  if (uVar5 != 0) {
    *(uint *)(uVar5 + 0x84) = *(uint *)(uVar5 + 0x84) | 0x100000;
    *(uint *)(uVar5 + 0x88) = *(uint *)(uVar5 + 0x88) & 0xffffff7f;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_2 + 4))(param_2 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x4)),&(*(float *)(gen_frame + 0x8)));
  F_005c0450(*(undefined4 *)((int)param_1 + 0x78) GEN_EDX_ARG,(int)(*(float *)(gen_frame + 0x4)) & 0xffff,(int)(*(float *)(gen_frame + 0x8)) & 0xffff);
  uVar2 = *(undefined2 *)(param_2 + 0x12);
  iVar3 = *(int *)((int)param_1 + 0x78);
  *(undefined2 *)(iVar3 + 0x94) = *(undefined2 *)(param_2 + 0x10);
  *(undefined2 *)(iVar3 + 0x96) = uVar2;
  F_0056e340(*(undefined * PTR32 *)((int)param_1 + 0x78) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 0x78) + 0x98))) = *(undefined4 *)(param_2 + 0x14);
  *((undefined2 *)GEN_TOP((*(int *)((int)param_1 + 0x78) + 0x9c))) = *(undefined2 *)(param_2 + 0x18);
  iVar3 = this[0x24];
  if (iVar3 != 0) {
    F_0057f0d0(this + 9 GEN_EDX_ARG,iVar3,*(undefined4 *)(iVar3 + 8),0);
  }
  iVar3 = *((int *)GEN_TOP((*(int *)((int)param_1 + 0x78) + 0xa4)));
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0xb4);
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) & 0xffefffff;
      *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 0x80;
    }
    iVar4 = *(int *)(iVar3 + 0xbc);
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) & 0xffefffff;
      *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 0x80;
    }
    iVar3 = *(int *)(iVar3 + 0xb8);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xffefffff;
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x80;
    }
  }
  return *(uint *)((int)param_1 + 0x78);
}

/* ref: FUN_005885a0 */
GEN_FRAME uint GEN_STDCALL F_005885a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5885a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  uVar3 = F_00404270();
  puVar4 = (undefined4 *)F_00406bd0(8,0,uVar3,0);
  piVar5 = (int *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = param_2;
    puVar4[1] = param_3;
    iVar1 = *param_1;
    iVar2 = *(int *)(iVar1 + 4);
    piVar5 = (int *)F_004296a0(0xc,0,400);
    *piVar5 = iVar1;
    piVar5[1] = iVar2;
    if ((uint *)(piVar5 + 2) != (uint *)0x0) {
      piVar5[2] = (int)puVar4;
    }
    if (param_1[1] == -2) {
                    
      F_00c4579a("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    *(int * PTR32 *)(iVar1 + 4) = piVar5;
    *(int * PTR32 *)piVar5[1] = piVar5;
  }
  return (uint)piVar5;
}

/* ref: FUN_00588630 */
GEN_FRAME uint GEN_STDCALL F_00588630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x588630u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  piVar1 = (int *)*param_1;
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    while (iVar2 = piVar3[2], *(int *)(iVar2 + 4) != param_2) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar1) {
        return (uint)piVar3;
      }
    }
    if (piVar3 != piVar1) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      F_00429760(piVar3,0xc,400);
      param_1[1] = param_1[1] - 1;
    }
    piVar3 = (int *)F_00406ad0(iVar2);
  }
  return (uint)piVar3;
}

/* ref: FUN_00588690 */
GEN_FRAME unsigned int GEN_STDCALL F_00588690(unsigned int gen_a0)
{
  GEN_ENTER(0x588690u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  piVar1 = (int *)*param_1;
  piVar4 = (int *)*piVar1;
  while (piVar4 != piVar1) {
    iVar2 = piVar4[2];
    piVar3 = (int *)*piVar4;
    if (piVar4 != (int *)*param_1) {
      *(int * PTR32 *)piVar4[1] = piVar3;
      *(int *)(*piVar4 + 4) = piVar4[1];
      F_00429760(piVar4,0xc,400);
      param_1[1] = param_1[1] - 1;
    }
    piVar4 = piVar3;
    if (iVar2 != 0) {
      F_00406ad0(iVar2);
    }
  }
  piVar1 = (int *)*param_1;
  piVar4 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  if (piVar4 != (int *)*param_1) {
    do {
      piVar1 = (int *)*piVar4;
      F_00429760(piVar4,0xc,400);
      piVar4 = piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  return 0;
}

/* ref: FUN_00588720 */
GEN_FRAME unsigned int GEN_THISCALL F_00588720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x588720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    if (*(undefined * PTR32 *)(param_1 + 0x80) != (undefined *)0x0) {
      F_00583770(*(undefined * PTR32 *)(param_1 + 0x80) GEN_EDX_FWD,6,0,this,0);
    }
    if (*(undefined * PTR32 *)(param_1 + 0x80) != (undefined *)0x0) {
      F_00583770(*(undefined * PTR32 *)(param_1 + 0x80) GEN_EDX_ARG,7,0,this,0);
    }
    if (*(undefined * PTR32 *)(param_1 + 0x80) != (undefined *)0x0) {
      F_00583770(*(undefined * PTR32 *)(param_1 + 0x80) GEN_EDX_ARG,3,0,this,0);
    }
  }
  return;
}

/* ref: FUN_00588780 */
GEN_FRAME uint GEN_THISCALL F_00588780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x588780u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  code * pcVar2;
  int * piVar3;
  undefined4 * in_ecx;
  ushort uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  ushort uVar8;
  undefined * pvVar9;
  uint uVar10;
  int * piVar11;
  float10 fVar12;
  char * pcVar13;
  
  uVar10 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
    piVar11 = *(int * PTR32 *)(iVar1 + 0x14);
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x34))(piVar11 GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x20)),&(*(undefined4 * PTR32 *)(gen_frame + 0x24)),0);
    if ((char)uVar5 == '\0') {
      uVar5 = *(uint *)(iVar1 + 0x18);
      uVar4 = *(ushort *)(uVar5 + 0xc5c);
      (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (undefined4 *)(uint)uVar4;
      uVar8 = *(ushort *)(uVar5 + 0xc5e);
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)(uint)uVar8;
    }
    else {
      uVar4 = (ushort)(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      uVar8 = (ushort)(*(undefined4 * PTR32 *)(gen_frame + 0x24));
    }
    if ((short)uVar4 < 0) {
      return uVar5;
    }
    if ((short)uVar8 < 0) {
      return uVar5;
    }
    uVar5 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
    if (*(uint *)(uVar5 + 0x234) < (uint)(int)(short)uVar4) {
      return uVar5;
    }
    if (*(uint *)(uVar5 + 0x238) < (uint)(int)(short)uVar8) {
      return uVar5;
    }
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = 0;
  uVar5 = 1;
  (*(uint *)(gen_frame + 0x1c)) = (*(uint *)&gen_args[1]) & 0xff;
  piVar11 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = (undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x50);
  pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x38));
  do {
    if (((((*(uint *)(gen_frame + 0x1c)) & uVar5) == 0) && (-1 < (int)uVar10)) && (uVar10 < 4)) {
      *(*(undefined1 * PTR32 *)(gen_frame + 0x30)) = 0;
      piVar7 = (int *)*piVar11;
      if (piVar7 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG);
        *piVar11 = 0;
        pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x38));
      }
    }
    (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = (*(undefined1 * PTR32 *)(gen_frame + 0x30)) + 0x28;
    uVar10 = uVar10 + 1;
    piVar11 = piVar11 + 1;
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  } while ((int)uVar10 < 4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)((int)pvVar9 + 0x1c);
  puVar6 = (undefined4 *)((int)pvVar9 + 0x3c);
  (*(char *)(gen_frame + 0x4b)) = '\0';
  *(undefined1 *)((int)pvVar9 + 0xdc) = (undefined1)(*(uint *)&gen_args[1]);
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = (undefined1 *)0x1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar6;
  do {
    if ((*(uint *)((int)pvVar9 + 0xd8) & (*(uint *)(gen_frame + 0x1c)) & (uint)(*(undefined1 * PTR32 *)(gen_frame + 0x30))) != 0) {
      if ((*(int *)(gen_frame + 0xc)) == 1) {
        pcVar13 = "Tooltip";
      }
      else if ((*(int *)(gen_frame + 0xc)) == 2) {
        pcVar13 = "ItemDetail";
      }
      else {
        puVar6 = (undefined4 *)((*(int *)(gen_frame + 0xc)) - 3);
        if (puVar6 != (undefined4 *)0x0) goto LAB_00588a24;
        pcVar13 = "ActionDetail";
      }
      puVar6 = (undefined4 *)F_0057f860(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar9 + 0x14) + 0x14))) GEN_EDX_ARG,pcVar13);
      pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x38));
      if (puVar6 != (undefined4 *)0x0) {
        piVar11 = puVar6 + 0x60;
        (*(int * PTR32 *)(gen_frame + 0x34)) = piVar11;
        if (piVar11 != (int *)0x0) {
          piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0xc))(piVar11 GEN_EDX_ARG)));
          in_ecx = (*(undefined4 * PTR32 *)&gen_args[3]);
          puVar6 = (undefined4 *)0x0;
          pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x38));
          if (piVar7 != (int *)0x0) {
            if ((*(undefined1 * PTR32 *)(gen_frame + 0x30)) != (undefined1 *)0x2) {
              *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 5) = 0;
              *(*(undefined4 * PTR32 *)(gen_frame + 0x20)) = 0;
            }
            uVar10 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 4))(piVar11 GEN_EDX_ARG,0,(*(undefined4 *)&gen_args[4]),(*(undefined4 * PTR32 *)&gen_args[3]));
            if ((char)uVar10 != '\0') {
              if ((in_ecx == (undefined4 *)0x0) || ((char)(*(undefined4 *)&gen_args[6]) != '\0')) {
                iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x14);
                piVar3 = *(int * PTR32 *)(iVar1 + 0x14);
                uVar10 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x34))(piVar3 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x14)),0);
                if ((char)uVar10 == '\0') {
                  iVar1 = *(int *)(iVar1 + 0x18);
                  (*(uint *)(gen_frame + 0x10)) = (uint)*(ushort *)(iVar1 + 0xc5c);
                  (*(uint *)(gen_frame + 0x14)) = (uint)*(ushort *)(iVar1 + 0xc5e);
                }
                ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x48))(piVar7 GEN_EDX_ARG,((ushort *)(gen_frame + 0x3c)),((short *)(gen_frame + 0x40)),0);
                iVar1 = *piVar7;
                ((code *)*(gen_code32 *)(iVar1 + 0x2c))
                          (piVar7,(uint)(ushort)((short)(*(uint *)(gen_frame + 0x10)) - (((ushort *)(gen_frame + 0x3c))[0] >> 1)),
                           (uint)(ushort)(((short)(*(uint *)(gen_frame + 0x14)) - ((short *)(gen_frame + 0x40))[0]) - 8));
                F_0056b300(piVar7 GEN_EDX_ARG,1);
              }
              else {
                pcVar2 = *(gen_code32 *)(*piVar7 + 0x48);
                (*(float *)(gen_frame + 0x2c)) = gen_bits2f(in_ecx[0xc]);
                (*(float *)(gen_frame + 0x28)) = gen_bits2f(in_ecx[0xd]);
                (*pcVar2)(piVar7,&(*(uint *)&gen_args[1]),((ushort *)(gen_frame + 0x44)),0);
                if ((*(gen_code32 *)&gen_args[5]) == (code *)0x0) {
                  uVar4 = F_0055a020(in_ecx GEN_EDX_ARG);
                  (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)(uVar4 >> 1));
                  uVar10 = (*(uint *)&gen_args[1]) >> 1 & 0x7fff;
                  (*(float *)(gen_frame + 0x18)) = gen_bits2f(uVar10);
                  fVar12 = (float10)(uVar4 >> 1) + (float10)(*(float *)(gen_frame + 0x2c));
                }
                else {
                  ((code *)(*(gen_code32 *)&gen_args[5]))(&(*(float *)(gen_frame + 0x2c)),&(*(float *)(gen_frame + 0x28)),in_ecx);
                  fVar12 = (float10)(*(float *)(gen_frame + 0x2c));
                  uVar10 = (*(uint *)&gen_args[1]) >> 1 & 0x7fff;
                  (*(float *)(gen_frame + 0x18)) = gen_bits2f(uVar10);
                }
                (*(float *)(gen_frame + 0x18)) = (float)(fVar12 - (float10)uVar10);
                ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x2c))
                          (piVar7 GEN_EDX_ARG,(int)(fVar12 - (float10)uVar10) & 0xffff,
                           (int)(((float10)(*(float *)(gen_frame + 0x28)) - (float10)((ushort *)(gen_frame + 0x44))[0]) -
                                (float10)*(double *)&REFG(undefined, 0x1094788)) & 0xffff);
                uVar10 = F_0056b300(piVar7 GEN_EDX_ARG,1);
                piVar11 = (*(int * PTR32 *)(gen_frame + 0x34));
                if ((uVar10 & 4) != 0) {
                  iVar1 = *piVar7;
                  uVar4 = F_0055a030(in_ecx GEN_EDX_ARG);
                  ((code *)*(gen_code32 *)(iVar1 + 0x34))
                            (piVar7,(int)(((float10)uVar4 + (float10)(*(float *)(gen_frame + 0x28))) +
                                         (float10)*(double *)&REFG(undefined, 0x1094788)) & 0xffff);
                  piVar11 = (*(int * PTR32 *)(gen_frame + 0x34));
                }
              }
            }
            *(*(undefined4 * PTR32 *)(gen_frame + 0x24)) = piVar11;
            (*(char *)(gen_frame + 0x4b)) = '\x01';
            puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
            pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x38));
          }
        }
      }
    }
LAB_00588a24: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)(gen_frame + 0x24)) + 1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 10;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = (undefined1 *)((int)((int)(uintptr_t)(*(undefined1 * PTR32 *)(gen_frame + 0x30))) << 1 | (uint)((int)(*(undefined1 * PTR32 *)(gen_frame + 0x30)) < 0));
    if (3 < (*(int *)(gen_frame + 0xc))) {
      if ((*(char *)(gen_frame + 0x4b)) != '\0') {
        *(undefined4 * PTR32 *)((int)pvVar9 + 0x18) = (*(undefined4 * PTR32 *)&gen_args[3]);
        *(undefined4 *)((int)pvVar9 + 0xd0) = (*(undefined4 *)&gen_args[2]);
        puVar6 = (*(undefined4 * PTR32 *)&gen_args[3]);
      }
      return (uint)puVar6;
    }
  } while( true );
}

/* ref: FUN_00588ae0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00588ae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x588ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (((*(int *)((int)this + 0x24) != 0) && (*(char *)((int)this + 0x46) == '\0')) &&
     (*(int *)((int)this + 0x30) != 0)) {
    *(undefined1 *)((int)this + 0x46) = 1;
    uVar1 = *(uint *)((int)this + 0x20);
    iVar2 = 0;
    if (*(int * PTR32 *)((int)this + 0x14) != (int *)0x0) {
      iVar2 = **(int * PTR32 *)((int)this + 0x14);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
    F_00cb45d0(this GEN_EDX_FWD,0);
    F_00cb4540(this GEN_EDX_ARG,0,*(undefined4 *)(iVar2 + 4));
    F_00cb4650(this GEN_EDX_ARG,iVar2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x48))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,this);
  }
  return;
}

/* ref: FUN_00588b50 */
GEN_NOFRAME uint GEN_THISCALL F_00588b50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x588b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)this != 0) {
    uVar2 = *((uint *)GEN_TOP((*(int *)(*(int *)this + 0x14) + 0xd8)));
    if ((uVar2 != 0) && (piVar1 = (int *)(uVar2 + 0x180), piVar1 != (int *)0x0)) {
      if (*(char *)((int)this + 0xd) != '\0') {
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
      }
      uVar2 = F_00580c50(this GEN_EDX_FWD);
      if ((char)uVar2 == '\0') {
        if (*(char *)((int)this + 0xc) != '\0') {
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,2,0,0);
          *(undefined1 *)((int)this + 0xc) = 0;
          *(undefined1 *)((int)this + 0xd) = 0;
          return uVar2;
        }
      }
      else if ((*(char *)((int)this + 0xc) == '\0') || (*(char *)((int)this + 0xd) != '\0')) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))
                          (piVar1 GEN_EDX_ARG,1,*(int *)((int)this + 8) + 0x144,
                           *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x90))));
        *(undefined1 *)((int)this + 0xc) = 1;
      }
    }
    *(undefined1 *)((int)this + 0xd) = 0;
  }
  return uVar2;
}

/* ref: FUN_00588be0 */
GEN_FRAME unsigned int GEN_THISCALL F_00588be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x588be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00583770(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,param_1,param_2,param_3,0);
  }
  return;
}

/* ref: FUN_00588c10 */
GEN_FRAME unsigned int GEN_THISCALL F_00588c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x588c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * this_00;
  int * piVar3;
  int * piVar4;
  int iVar5;
  code * pcVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    this_00 = (undefined *)puVar2[2];
    if ((((*(byte *)((int)this_00 + 0x2e) & 8) != 0) &&
        (piVar3 = *(int * PTR32 *)((int)this_00 + 4), piVar3 != (int *)0x0)) &&
       ((*(byte *)((int)this_00 + 0x2c) & 8) != 0)) {
      piVar4 = *(int * PTR32 *)((int)this + 0x18);
      if ((*(byte *)(piVar4 + 0x3e) & 8) != 0) {
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4 GEN_EDX_FWD);
        uVar7 = uVar7 & 0xffff;
        uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4 GEN_EDX_ARG);
        F_00560e00(this_00 GEN_EDX_ARG,uVar8 & 0xffff,uVar7);
        iVar5 = piVar3[0x24];
        if (iVar5 != 0) {
          F_0057f0d0(piVar3 + 9 GEN_EDX_ARG,iVar5,*(undefined4 *)(iVar5 + 8),0);
        }
      }
      pcVar6 = *(gen_code32 *)(*piVar3 + 0x9c);
      *(undefined2 *)(piVar3 + 0x4a) = *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x128)));
      (*pcVar6)(piVar3);
    }
  }
  return 0;
}

/* ref: FUN_00588cd0 */
GEN_FRAME uint GEN_THISCALL F_00588cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x588cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int * piVar5;
  undefined * this_00;
  code * pcVar6;
  int * piVar7;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14)));
  puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
  puVar3 = (undefined4 *)*puVar2;
  *param_1 = (int)puVar3;
  while (puVar3 != puVar2) {
    iVar4 = ((undefined4 *)*param_1)[2];
    if (iVar4 == param_2) {
      if (*(uint *)(iVar4 + 0x14) == 0) goto LAB_00588db6;
      piVar5 = *(int * PTR32 *)(iVar1 + 0xb4);
      piVar7 = (int *)*piVar5;
      if (piVar7 == piVar5) goto LAB_00588db6;
      goto LAB_00588d30;
    }
    puVar3 = *(undefined4 * PTR32 *)*param_1;
    *param_1 = (int)puVar3;
  }
  goto LAB_00588de4;
  while (piVar7 = (int *)*piVar7, piVar7 != piVar5) {
LAB_00588d30: ;
    if ((uint)*(byte *)(piVar7[2] + 0x13a) == *(uint *)(iVar4 + 0x14)) {
      piVar5 = (int *)piVar7[2];
      if (piVar5 != (int *)0x0) {
        if (*(int *)(iVar4 + 8) != 0) {
          this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar4 + 8) + 0x80)));
          if (this_00 != (undefined *)0x0) {
            F_00583770(this_00 GEN_EDX_FWD,0x16,(uint)*(byte *)((int)piVar5 + 0x13a),(int)this + 4,0);
          }
        }
        *(undefined1 *)((int)piVar5 + 0x13b) = 0;
        if ((char)param_3 == '\0') {
          piVar5[0x48] = piVar5[0x48] & 0xfffffbff;
        }
        else {
          piVar5[0x48] = piVar5[0x48] | 0x400;
        }
        pcVar6 = *(gen_code32 *)(*piVar5 + 0x18);
        *(byte *)(piVar5 + 0x3e) = *(byte *)(piVar5 + 0x3e) & 0xfe;
        (*pcVar6)(piVar5,1,0);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x10))(piVar5 GEN_EDX_ARG,1);
      }
      break;
    }
  }
LAB_00588db6: ;
  piVar5 = (int *)*param_1;
  iVar1 = *piVar5;
  if (piVar5 != (int *)*(int *)((int)this + 8)) {
    *(int *)piVar5[1] = iVar1;
    *(int *)(*piVar5 + 4) = piVar5[1];
    F_00429760(piVar5,0xc,400);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) - 1;
  }
  *param_1 = iVar1;
LAB_00588de4: ;
  if (param_2 != 0) {
    F_00406ad0(param_2);
  }
  return (uint)param_1;
}

/* ref: FUN_00588e00 */
GEN_FRAME unsigned int GEN_THISCALL F_00588e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x588e00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  uVar3 = (*(undefined4 *)&gen_args[1]);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  for (puVar4 = (undefined4 *)*puVar1; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
    puVar4 = (undefined4 *)F_00588cd0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),puVar4[2],uVar3);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  piVar5 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  if (piVar5 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    do {
      piVar2 = (int *)*piVar5;
      F_00429760(piVar5,0xc,400);
      piVar5 = piVar2;
    } while (piVar2 != (int *)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
  }
  return 0;
}

/* ref: FUN_00588e70 */
GEN_FRAME uint GEN_THISCALL F_00588e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x588e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * _Dst;
  int * piVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  uVar2 = F_00404270();
  _Dst = (undefined4 *)F_00406bd0(0x30,0,uVar2,0);
  if (_Dst == (undefined4 *)0x0) {
    return 0;
  }
  F_00c48350(_Dst,0,0x30);
  _Dst[8] = GEN_FLT_TO(_Dst[8], REFG(float, 0x1087f04));
  puVar5 = param_1;
  puVar6 = _Dst;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar4 = *(int *)((int)this + 8);
  iVar1 = *(int *)(iVar4 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar4;
  piVar3[1] = iVar1;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = (int)_Dst;
  }
  if (*(int *)((int)this + 0xc) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  *(int * PTR32 *)(iVar4 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)_Dst;
}

/* ref: FUN_00588f20 */
GEN_FRAME uint GEN_THISCALL F_00588f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x588f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00583770((undefined *)((int)this + 0x14) GEN_EDX_FWD,param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00588f40 */
GEN_NOFRAME uint GEN_THISCALL F_00588f40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x588f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (this == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + 4;
  }
  F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x23c))) GEN_EDX_FWD,4,0,iVar1,0);
  uVar2 = F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x23c))) GEN_EDX_ARG,5,0,(int)this + 4,0);
  return uVar2;
}

/* ref: FUN_00588f80 */
GEN_FRAME uint GEN_THISCALL F_00588f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x588f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x28) != (undefined *)0x0) {
    uVar1 = F_00583770(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_FWD,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00588fa0 */
GEN_FRAME uint GEN_THISCALL F_00588fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x588fa0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  uint uVar1;
  undefined * this;
  uVar1 = (*(uint *)&gen_args[1]);
  switch((unsigned int)(uintptr_t)((*(uint *)&gen_args[1]))) {
  case 0: ;
    uVar1 = F_00559eb0(*(undefined4 *)((*(int *)&gen_args[0]) + 8) GEN_EDX_FWD,(int)(*(float *)&gen_args[2]) & 0xffff);
    return uVar1;
  case 1: ;
    uVar1 = F_00559f40(*(undefined4 *)((*(int *)&gen_args[0]) + 8) GEN_EDX_ARG,(int)(*(float *)&gen_args[2]) & 0xffff);
    return uVar1;
  case 2: ;
    if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
      uVar1 = F_00567d90(*(int *)((*(int *)&gen_args[0]) + 8) GEN_EDX_ARG,(*(float *)&gen_args[2]));
      return uVar1;
    }
    break;
  case 3: ;
    if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
      uVar1 = F_00567e10(*(int *)((*(int *)&gen_args[0]) + 8) GEN_EDX_ARG,(*(float *)&gen_args[2]));
      return uVar1;
    }
    break;
  case 5: ;
    if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
      (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 0)) = (undefined1)(int)TRUNC((double)(*(float *)&gen_args[2]) * *(double *)&REFG(undefined, 0x1088100));
      *((undefined1 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + 0x53))) = (undefined1)(*(uint *)&gen_args[1]);
      return CONCAT11((char)((ushort)gen_x87_cw >> 8),(undefined1)(*(uint *)&gen_args[1])) | 0xc00;
    }
    break;
  case 6: ;
    if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
      *((short *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + 0x7c))) = (short)(int)(*(float *)&gen_args[2]);
      return (*(uint *)&gen_args[1]);
    }
    break;
  case 7: ;
    if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
      *((short *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + 0x7e))) = (short)(int)(*(float *)&gen_args[2]);
      return (int)(*(float *)&gen_args[2]);
    }
    break;
  case 8: ;
    this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 8);
    if ((this == (undefined *)0x0) || (*(short *)((int)this + 0x18) != 3)) {
      this = (undefined *)0x0;
    }
    uVar1 = F_00560910((int)(*(float *)&gen_args[2]));
    uVar1 = F_00584110(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_005890d0 */
GEN_NOFRAME uint GEN_THISCALL F_005890d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5890d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a10ec));
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_FWD,0x49,0,this,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00589110 */
GEN_FRAME uint GEN_THISCALL F_00589110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x589110u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  
  sVar2 = *(short *)((*(int *)&gen_args[0]) + 0xac);
  if (sVar2 != 0) {
    iVar8 = *(int *)((*(int *)&gen_args[0]) + 0x70);
    if (iVar8 != 0) {
      (*(float *)(gen_frame + 0xc)) = *(float *)(iVar8 + 0x30);
      (*(float *)(gen_frame + 0x8)) = *(float *)(iVar8 + 0x34);
    }
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    if (*(int *)((*(int *)&gen_args[0]) + 0x84) == 0) {
      uVar3 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_FWD,*(undefined4 *)((*(int *)&gen_args[0]) + 0x6c));
      *(uint *)((*(int *)&gen_args[0]) + 0x84) = uVar3;
    }
    if (*(int *)((*(int *)&gen_args[0]) + 0x84) != 0) {
      (*(float *)(gen_frame + 0x18)) = *((float *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x84) + 0x118)));
    }
    iVar4 = (int)*(short *)((*(int *)&gen_args[0]) + 0xa8);
    fVar6 = gen_bits2f(((int)sVar2 - (int)*(short *)((*(int *)&gen_args[0]) + 0xaa)) - iVar4);
    bVar1 = *(byte *)((*(int *)&gen_args[0]) + 0xae);
    (*(float *)(gen_frame + 0x10)) = fVar6;
    (*(int *)(gen_frame + 0x14)) = iVar4;
    fVar6 = (float)((float10)(int)gen_fl2bits(fVar6) * (float10)(*(float *)(gen_frame + 0x18)));
    (*(float *)(gen_frame + 0x10)) = fVar6;
    if ((bVar1 & 0x10) == 0) {
      iVar8 = *(int *)((*(int *)&gen_args[0]) + 0x98);
      iVar7 = *(int *)((*(int *)&gen_args[0]) + 0x9c) - iVar8;
      (*(float *)(gen_frame + 0x18)) = gen_bits2f(iVar7);
      (*(float *)(gen_frame + 0x18)) = (float)iVar7;
      fVar9 = (float10)(int)(short)(*(uint *)&gen_args[1]) - (float10)(*(float *)(gen_frame + 0xc));
    }
    else {
      uVar3 = (*(uint *)&gen_args[1]);
      if (iVar8 != 0) {
        uVar3 = (uint)*(ushort *)(iVar8 + 0x7e);
      }
      iVar8 = *(int *)((*(int *)&gen_args[0]) + 0x98);
      iVar7 = *(int *)((*(int *)&gen_args[0]) + 0x9c) - iVar8;
      (*(float *)(gen_frame + 0xc)) = gen_bits2f(iVar7);
      (*(float *)(gen_frame + 0x18)) = (float)iVar7;
      (*(float *)(gen_frame + 0xc)) = gen_bits2f(uVar3 & 0xffff);
      fVar9 = ((float10)(uVar3 & 0xffff) + (float10)(*(float *)(gen_frame + 0x8))) - (float10)(int)(short)(*(uint *)&gen_args[1]);
    }
    (*(float *)(gen_frame + 0x8)) = 0.0;
    pfVar5 = (float *)&(*(uint *)&gen_args[1]);
    fVar6 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x18)) * (fVar9 - (float10)iVar4)) / (float10)fVar6)));
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar6);
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x18));
    if (!((float10)fVar6 < (float10)(*(float *)(gen_frame + 0x18)))) {
      pfVar5 = &(*(float *)(gen_frame + 0x10));
    }
    if (!(0.0 < *pfVar5)) {
      pfVar5 = &(*(float *)(gen_frame + 0x8));
    }
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(*pfVar5);
    uVar3 = F_0056cef0((*(int *)&gen_args[0]) GEN_EDX_ARG,GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))));
    return uVar3 + iVar8;
  }
  return *(uint *)((*(int *)&gen_args[0]) + 0x98);
}

/* ref: FUN_00589280 */
GEN_FRAME uint GEN_THISCALL F_00589280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x589280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * pbVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x104) != 0) {
    if (param_1 != 0) {
      pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x104) + 0xfe)));
      *pbVar1 = *pbVar1 | 1;
      F_00584110(*(undefined * PTR32 *)((int)this + 0x104) GEN_EDX_FWD,param_1);
      if (*(char *)((int)this + 0x89) != '\0') {
        F_00581640(this GEN_EDX_ARG);
      }
      if (*(char *)((int)this + 0x8a) != '\0') {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG);
      }
    }
    uVar2 = *(uint *)((int)this + 0x104);
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 0x84) =
           *(uint *)(uVar2 + 0x84) ^
           ((uint)(param_1 != 0) << 0x14 ^ *(uint *)(uVar2 + 0x84)) & 0x100000;
      *(uint *)(uVar2 + 0x88) =
           *(uint *)(uVar2 + 0x88) ^ ((uint)(param_1 == 0) << 7 ^ *(uint *)(uVar2 + 0x88)) & 0x80;
    }
  }
  return uVar2;
}

/* ref: FUN_00589320 */
GEN_FRAME byte GEN_THISCALL F_00589320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x589320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * pbVar1;
  int iVar2;
  byte bVar3;
  
  if (*(int *)((int)this + 0x104) != 0) {
    bVar3 = 0;
    if (param_1 != 0) {
      pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x104) + 0xfe)));
      *pbVar1 = *pbVar1 & 0xfe;
      bVar3 = F_005842e0(*(undefined * PTR32 *)((int)this + 0x104) GEN_EDX_FWD,param_1,0);
      if (*(char *)((int)this + 0x89) != '\0') {
        F_00581640(this GEN_EDX_ARG);
      }
      if (*(char *)((int)this + 0x8a) != '\0') {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG);
      }
    }
    iVar2 = *(int *)((int)this + 0x104);
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x84) =
           *(uint *)(iVar2 + 0x84) ^
           ((uint)(param_1 != 0) << 0x14 ^ *(uint *)(iVar2 + 0x84)) & 0x100000;
      *(uint *)(iVar2 + 0x88) =
           *(uint *)(iVar2 + 0x88) ^ ((uint)(param_1 == 0) << 7 ^ *(uint *)(iVar2 + 0x88)) & 0x80;
    }
    return bVar3;
  }
  return 0;
}

/* ref: FUN_005893d0 */
GEN_FRAME unsigned int GEN_THISCALL F_005893d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5893d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(char *)((int)this + 0x89) = (char)param_1;
  if ((char)param_1 != '\0') {
    F_00581640(this GEN_EDX_FWD);
  }
  return;
}

/* ref: Component::GUI2::AtkComponentButton::vf16 */
GEN_FRAME uint GEN_THISCALL F_005893f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5893f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  short sVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
    this[0x80] = *(undefined *)(param_1 + 8);
  }
  *(undefined4 *)(this + 0x114) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x14);
  this_00 = (undefined *)F_0055d920(this + 4 GEN_EDX_FWD,*(undefined4 *)(this + 0x120));
  if ((this_00 == (undefined *)0x0) || (*(short *)((int)this_00 + 0x18) != 3)) {
    this_00 = (undefined *)0x0;
  }
  *(undefined * PTR32 *)(this + 0x104) = this_00;
  uVar4 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x124));
  *(uint *)(this + 0x108) = uVar4;
  if (this_00 == (undefined *)0x0) {
    return uVar4;
  }
  if (*(int *)(this + 0x128) != 0) {
    uVar4 = F_0056c6b0(*(undefined4 *)(REFG(int, 0x1379860) + 0x30),*(int *)(this + 0x128),
                         (uint)*(byte *)((int)this_00 + 0x114));
    F_00584110(this_00 GEN_EDX_ARG,uVar4);
  }
  iVar1 = *(int *)(this + 0x104);
  if (iVar1 == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = (short)(int)*(float *)(iVar1 + 0x38);
  }
  iVar6 = (int)sVar3;
  *(int *)(this + 0x94) = iVar6;
  if (iVar1 == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = (short)(int)*(float *)(iVar1 + 0x3c);
  }
  *(int *)(this + 0x98) = (int)sVar3;
  switch((unsigned int)(uintptr_t)(*(byte *)(iVar1 + 0xfc) & 0xf)) {
  case 0: ;
  case 3: ;
  case 6: ;
    if (*(int *)(this + 0x108) == 0) {
      uVar4 = -iVar6;
    }
    else {
      uVar4 = (short)(int)*((float *)GEN_TOP((*(int *)(this + 0x108) + 0x38))) - iVar6;
    }
    break;
  case 1: ;
  case 4: ;
  case 7: ;
    if (*(int *)(this + 0x108) == 0) {
      uVar4 = -iVar6 >> 0x1f;
      iVar6 = ((-iVar6 ^ uVar4) - uVar4) * 2;
    }
    else {
      uVar4 = (short)(int)*((float *)GEN_TOP((*(int *)(this + 0x108) + 0x38))) - iVar6;
      uVar5 = (int)uVar4 >> 0x1f;
      iVar6 = ((uVar4 ^ uVar5) - uVar5) * 2;
    }
    goto LAB_005895ad;
  case 2: ;
  case 5: ;
  case 8: ;
    iVar2 = *(int *)(this + 0x108);
    if (iVar2 == 0) {
      sVar7 = 0;
      uVar4 = 0;
    }
    else {
      sVar7 = (short)(int)*(float *)(iVar2 + 0x38);
      uVar4 = (uint)*(ushort *)(iVar2 + 0x7c);
    }
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)*(ushort *)(iVar1 + 0x7c);
    }
    uVar4 = ((uVar4 - uVar5) - iVar6) + (int)sVar7;
    break;
  default: ;
    goto switchD_00589513_default;
  }
  iVar6 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
LAB_005895ad: ;
  *(int *)(this + 0x9c) = iVar6;
switchD_00589513_default: ;
  if (*(int *)(this + 0x70) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x70) + 0x7e)));
  }
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x7e);
  }
  *(uint *)(this + 0xa0) = (uVar4 - uVar5) - (int)sVar3;
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0xfe) = *(byte *)(iVar1 + 0xfe) | 1;
  }
  return uVar5;
}

/* ref: Component::GUI2::AtkComponentCheckBox::vf16 */
GEN_FRAME unsigned int GEN_THISCALL F_00589610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x589610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * pAVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar4 = param_1;
    pAVar5 = this + 0x134;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 - 1) {
      *(undefined4 *)pAVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      pAVar5 = pAVar5 + 4;
    }
    uVar2 = F_0055d920(this + 4 GEN_EDX_FWD,*(undefined4 *)(this + 0x148));
    uVar1 = *(undefined4 *)(this + 0x144);
    *(uint *)(this + 0x130) = uVar2;
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + 0x14c);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x140);
    (*(undefined4 *)(gen_frame + 0x4)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x8)) = param_1[1];
    (*(undefined1 *)(gen_frame + 0xc)) = *(undefined1 *)(param_1 + 2);
    F_005893f0((undefined *)this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return;
}

/* ref: Component::GUI2::AtkComponentRadioButton::vf16 */
GEN_FRAME unsigned int GEN_THISCALL F_00589690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x589690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar3 = F_0055d920(this + 4 GEN_EDX_FWD,param_1[5]);
    *(uint *)(this + 0x130) = uVar3;
    *(undefined2 *)(this + 0x134) = *(undefined2 *)(param_1 + 8);
    uVar2 = param_1[4];
    (*(undefined4 *)(gen_frame + 0x10)) = param_1[3];
    (*(undefined4 *)(gen_frame + 0x18)) = param_1[7];
    uVar1 = *(undefined1 *)(param_1 + 2);
    (*(undefined4 *)(gen_frame + 0x4)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
    (*(undefined1 *)(gen_frame + 0xc)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x8)) = param_1[1];
    F_005893f0((undefined *)this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return;
}

/* ref: FUN_00589700 */
GEN_FRAME uint GEN_THISCALL F_00589700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x589700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  if (*(char *)((int)this + 0x11f) != (char)param_1) {
    *(char *)((int)this + 0x11f) = (char)param_1;
    if ((char)param_1 == '\0') {
      *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
      F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_FWD,3,4,this,0);
      uVar1 = F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,5,4,this,0);
    }
    else {
      uVar1 = F_00565340((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,3,4,0,REFG(int, 0x1379860),this,0);
      if (uVar1 != 0) {
        *(uint *)(uVar1 + 0x14) = *(uint *)(uVar1 + 0x14) | 0x400000;
      }
      uVar2 = F_00565340((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,5,4,0,REFG(int, 0x1379860),this,0);
      uVar1 = 0;
      if (uVar2 != 0) {
        *(uint *)(uVar2 + 0x14) = *(uint *)(uVar2 + 0x14) | 0x400000;
        return uVar2;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_005897b0 */
GEN_FRAME unsigned int GEN_THISCALL F_005897b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5897b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * pvVar2;
  
  if (*(char *)((int)this + 0x117) != (char)param_1) {
    iVar1 = *(int *)((int)this + 0x90);
    *(char *)((int)this + 0x117) = (char)param_1;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^
           ((uint)((char)param_1 == '\0') << 0x1b ^ *(uint *)(iVar1 + 0x84)) & 0x8000000;
    }
    if ((char)param_1 == '\0') {
      F_00568380(*(undefined * PTR32 *)((int)this + 0x90) GEN_EDX_FWD,0x31,0,this,0,0);
      F_00568380(*(undefined * PTR32 *)((int)this + 0x90) GEN_EDX_ARG,0x30,0,this,0,0);
    }
    else {
      if ((*(int *)((int)this + 0x90) != 0) &&
         (pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x80))), pvVar2 != (undefined *)0x0)) {
        F_00583770(pvVar2 GEN_EDX_ARG,0x31,0,this,0);
      }
      if ((*(int *)((int)this + 0x90) != 0) &&
         (pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x80))), pvVar2 != (undefined *)0x0)) {
        F_00583770(pvVar2 GEN_EDX_ARG,0x30,0,this,0);
        return;
      }
    }
  }
  return;
}

/* ref: FUN_00589870 */
GEN_NOFRAME uint GEN_THISCALL F_00589870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x589870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_FWD,4,0,this,0);
  uVar1 = F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,5,0,this,0);
  return uVar1;
}

/* ref: FUN_005898b0 */
GEN_FRAME uint GEN_THISCALL F_005898b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5898b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = F_0057bd00(this GEN_EDX_FWD,(int)this + 4);
  if (uVar1 != 0) {
    piVar2 = (int *)F_00404270();
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,(uint)uVar1 * 4,0x10);
    *(uint *)((int)this + 0x1e8) = uVar3;
  }
  *(undefined2 *)((int)this + 0x20c) = 0;
  uVar3 = F_0057bc60(this GEN_EDX_ARG,param_1);
  if ((*(int *)((int)this + 0x68) == 0) && (*(short *)((int)this + 0x20c) != 0)) {
    uVar3 = **(uint * PTR32 *)((int)this + 0x1e8);
    *(uint *)((int)this + 0x68) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00589920 */
GEN_FRAME uint GEN_THISCALL F_00589920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x589920u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x70);
  }
  uVar2 = (uint)(short)param_3;
  fVar8 = (float)(int)uVar2;
  if (iVar3 == 0) goto LAB_00589992;
  if ((*(uint *)(iVar3 + 0x88) & 1) == 0) {
    fVar6 = (float10)(int)(short)param_2;
    fVar7 = (float10)*(float *)(iVar3 + 0x38);
    bVar4 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6);
    bVar5 = bVar4 || fVar7 == fVar6;
    uVar1 = CONCAT22((short)param_3 >> 0xf,
                     CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(fVar6 <= fVar7),(char)param_3));
    if (bVar4 != bVar5) {
      fVar6 = (float10)(int)uVar2;
      fVar7 = (float10)*(float *)(iVar3 + 0x3c);
      bVar4 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6);
      bVar5 = bVar4 || fVar7 == fVar6;
      uVar2 = CONCAT22((short)param_3 >> 0xf,
                       CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(fVar6 <= fVar7),(char)param_3));
      uVar1 = uVar2;
      if (bVar4 != bVar5) goto LAB_00589987;
    }
    uVar2 = uVar1;
    *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 1;
  }
LAB_00589987: ;
  *(float *)(iVar3 + 0x38) = (float)(int)(short)param_2;
  *(float *)(iVar3 + 0x3c) = fVar8;
LAB_00589992: ;
  if ((param_1 != 0) && (iVar3 = *(int *)(param_1 + 0x70), uVar2 = 0, iVar3 != 0)) {
    uVar2 = F_0057f0d0((undefined *)(param_1 + 4) GEN_EDX_FWD,iVar3,*(undefined4 *)(iVar3 + 8),0);
  }
  return uVar2;
}

/* ref: FUN_005899b0 */
GEN_FRAME uint GEN_THISCALL F_005899b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5899b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00589920(this GEN_EDX_FWD,(uint)(ushort)(*(short *)((int)this + 0x200) + (short)param_1),
                       (uint)(ushort)(*(short *)((int)this + 0x202) + (short)param_2));
  return uVar1;
}

/* ref: FUN_005899e0 */
GEN_FRAME unsigned int GEN_THISCALL F_005899e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5899e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(byte *)((int)this + 0x220) & 4) != 0) && (*(int *)((int)this + 0x1e0) != 0)) {
    F_00584110(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1e0) + 0xbc))) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_00589a10 */
GEN_FRAME uint GEN_THISCALL F_00589a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x589a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_FWD,4,0,(int)this - 0x130,0);
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,5,0,(int)this - 0x130,0);
  *(undefined1 *)((int)this + 0x1a) = 0;
  if (((char)param_1 != '\0') && (*(int *)((int)this + 0xe0) != 0)) {
    F_005c0450(*(int *)((int)this + 0xe0) GEN_EDX_ARG,(uint)*(ushort *)((int)this + 0xec),
                 (uint)*(ushort *)((int)this + 0xee));
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00589a90 */
GEN_NOFRAME uint GEN_THISCALL F_00589a90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x589a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(byte *)((int)this + 0xf0) & 4) == 0) {
    uVar3 = 0;
  }
  else if (*(int *)((int)this + 0xb0) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xb0) + 0x70)));
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,uVar3);
  uVar1 = F_005883a0(REFG(int, 0x1379860) + 0x3c GEN_EDX_ARG,-(uint)(this != (undefined *)0x130) & (uint)this);
  if ((*(byte *)((int)this + 0xf0) & 4) == 0) {
    iVar2 = (int)this - 0x130;
    if (iVar2 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG,0);
      return uVar1;
    }
  }
  else {
    iVar2 = *(int *)((int)this + 0xb0);
    if (iVar2 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG,0);
      return uVar1;
    }
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG,*(undefined4 *)(iVar2 + 0x70));
  return uVar1;
}

/* ref: FUN_00589b30 */
GEN_FRAME unsigned int GEN_THISCALL F_00589b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x589b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x104) != (undefined *)0x0) {
    if (param_1 != 0) {
      F_00584110(*(undefined * PTR32 *)((int)this + 0x104) GEN_EDX_FWD,param_1);
      if (*(char *)((int)this + 0x89) != '\0') {
        F_00581640(this GEN_EDX_ARG);
      }
      if (*(char *)((int)this + 0x8a) != '\0') {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG);
      }
    }
    iVar1 = *(int *)((int)this + 0x104);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^
           ((uint)(param_1 != 0) << 0x14 ^ *(uint *)(iVar1 + 0x84)) & 0x100000;
      *(uint *)(iVar1 + 0x88) =
           *(uint *)(iVar1 + 0x88) ^ ((uint)(param_1 == 0) << 7 ^ *(uint *)(iVar1 + 0x88)) & 0x80;
    }
  }
  return;
}

/* ref: Component::GUI2::AtkComponentListItemRenderer::vf22 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00589bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x589bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined * pvVar5;
  int iVar6;
  byte bVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  pvVar5 = *(undefined * PTR32 *)(this + 0x104);
  if ((pvVar5 != (undefined *)0x0) && ((*(byte *)((int)pvVar5 + 0xfc) & 0xf) < 6)) {
    uVar1 = *(undefined4 *)((int)pvVar5 + 0xf0);
    pvVar5 = (undefined *)F_005684e0(pvVar5 GEN_EDX_FWD,1);
    uVar3 = F_00576af0(pvVar5 GEN_EDX_ARG,uVar1);
    puVar8 = (undefined4 *)((int)pvVar5 + 0xa8);
    puVar9 = (undefined4 *)((int)pvVar5 + 100);
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    uVar4 = *(ushort *)(this + 0x206);
    if (1 < uVar3 + 1) {
      if (*(int *)(this + 0x104) == 0) {
        bVar7 = 0;
      }
      else {
        bVar7 = *((byte *)GEN_TOP((*(int *)(this + 0x104) + 0x116)));
      }
      uVar4 = ((short)(uVar3 + 1) - 1) * (ushort)bVar7 + uVar4;
    }
    uVar2 = *(uint *)(this + 0x70);
    if (uVar2 != 0) {
      F_0057f1a0(uVar2,(uint)*(ushort *)(uVar2 + 0x7c),(uint)*(ushort *)(uVar2 + 0x7e),
                   (uint)*(ushort *)(uVar2 + 0x7c),(uint)uVar4,1);
    }
  }
  return;
}

/* ref: FUN_00589c70 */
GEN_NOFRAME uint GEN_THISCALL F_00589c70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x589c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_005819c0(this GEN_EDX_FWD);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[36])REFP(0x10a181c));
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x13c) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0xfffffffe;
  *(undefined4 *)((int)this + 0x16c) = uVar1;
  *(undefined4 *)((int)this + 0x18e) = 0x100;
  *(undefined4 *)((int)this + 0x164) = 0xffffffff;
  *(undefined4 *)((int)this + 0x168) = 0xffffffff;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined2 *)((int)this + 0x18c) = 0;
  return (uint)this;
}

/* ref: FUN_00589d40 */
GEN_NOFRAME uint GEN_THISCALL F_00589d40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x589d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[36])REFP(0x10a181c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x13c) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  iVar1 = *(int *)((int)this + 300);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x134) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar2 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf32 */
GEN_FRAME uint GEN_THISCALL F_00589db0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x589db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int local_14;
  uint local_10;
  int * local_c;
  
  if (this == (undefined *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = *(int *)(this + 0x70);
  }
  piVar2 = *(int * PTR32 *)(this + 300);
  piVar3 = *(int * PTR32 *)(this + 0x130);
  bVar7 = false;
  bVar8 = false;
  local_10 = 0xffffffff;
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  iVar6 = -*(int *)(this + 0xb8);
  while (piVar2 != piVar3) {
    local_10 = local_10 + 1;
    iVar4 = *piVar2;
    iVar5 = *(int *)(iVar4 + 0x20);
    iVar9 = iVar6;
    if (bVar7) {
LAB_00589edf: ;
      if ((*(byte *)(iVar4 + 0x2b) & 1) != 0) {
        bVar7 = false;
      }
    }
    else {
      iVar9 = (uint)*(ushort *)(iVar4 + 0x28) + iVar6;
      if (iVar9 < 0) {
        if (((*(byte *)(iVar4 + 0x2b) & 2) != 0) && (*(char *)(iVar4 + 0x2a) == '\0')) {
          bVar7 = true;
        }
        goto LAB_00589edf;
      }
      if (*(int *)(this + 0xb0) < 0) {
        *(uint *)(this + 0xb0) = local_10;
      }
      F_00589920(iVar5 GEN_EDX_FWD,(uint)*(ushort *)(iVar5 + 0x200),
                   (uint)(ushort)(*(short *)(iVar5 + 0x202) + (short)iVar6));
      if ((int)(uint)*(ushort *)(local_14 + 0x7e) <= iVar6) break;
      if ((this[400] == (undefined1)0x0) || (!bVar8)) {
        iVar9 = iVar6 + (uint)*(ushort *)(iVar4 + 0x28);
      }
      else {
        iVar9 = iVar6 + (int)((float10)*(ushort *)(iVar4 + 0x28) * (float10)*(float *)(this + 0x16c)
                             );
        if ((*(byte *)(iVar4 + 0x2b) & 1) != 0) {
          bVar8 = false;
        }
      }
      if ((*(byte *)(iVar4 + 0x2b) & 2) != 0) {
        bVar1 = *(byte *)(iVar4 + 0x2a);
        if (bVar1 == 0) {
          bVar7 = true;
        }
        else if ((bVar1 & 0x10) != 0) {
          if (this[400] == (undefined1)0x0) {
            *(byte *)(iVar4 + 0x2a) = bVar1 & 0xef;
          }
          bVar8 = true;
        }
      }
    }
    local_c = piVar2 + 1;
    iVar6 = iVar9;
    piVar2 = local_c;
  }
  *(uint *)(this + 0x164) = local_10;
  if (*(int *)(this + 0x168) < 0) {
    *(uint *)(this + 0x168) = local_10;
  }
  return local_10;
}

/* ref: FUN_00589f20 */
GEN_FRAME uint GEN_THISCALL F_00589f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x589f20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  uint * puVar6;
  ushort * puVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  
  sVar8 = 0;
  sVar4 = 0;
  if (((*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) && (iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))), iVar3 != 0)) {
    sVar8 = *(short *)(iVar3 + 0x7c);
    sVar4 = *(short *)(iVar3 + 0x7e);
  }
  cVar1 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200)));
  if (cVar1 == '\0') {
    sVar4 = sVar8;
  }
  sVar4 = sVar4 + *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) * -2;
  *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))) = sVar4;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) = (*(uint *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xca))) != '\0') {
    uVar5 = (int)sVar4 - (int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbe)));
    (*(uint *)(gen_frame + 0x8)) = uVar5;
    (*(uint *)(gen_frame + 0x4)) = 0;
    puVar6 = &(*(uint *)&gen_args[1]);
    if ((int)uVar5 <= (int)(*(uint *)&gen_args[1])) {
      puVar6 = &(*(uint *)(gen_frame + 0x8));
    }
    if ((int)*puVar6 < 1) {
      puVar6 = &(*(uint *)(gen_frame + 0x4));
    }
    uVar5 = *puVar6;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))) = uVar5;
    return uVar5;
  }
  uVar10 = (uint)sVar4;
  (*(uint *)(gen_frame + 0x4)) = uVar10;
  uVar5 = (uint)((float10)(int)uVar10 /
                ((float10)(int)(*(uint *)&gen_args[1]) / (float10)(int)uVar10 + (float10)REFG(double, 0x1088130)));
  puVar7 = ((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbe)));
  (*(uint *)&gen_args[1]) = uVar5 & 0xffff;
  if ((short)*puVar7 <= (short)uVar5) {
    puVar7 = (ushort *)&(*(uint *)&gen_args[1]);
  }
  uVar2 = *puVar7;
  uVar5 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84)));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))) = uVar10 - (int)(short)uVar2;
  if (cVar1 == '\0') {
    if (uVar5 == 0) goto LAB_0058a033;
    uVar9 = (uint)*(ushort *)(uVar5 + 0x7e);
    uVar10 = (uint)uVar2;
  }
  else {
    if (uVar5 == 0) goto LAB_0058a033;
    uVar10 = (uint)*(ushort *)(uVar5 + 0x7c);
    uVar9 = (uint)uVar2;
  }
  F_0057f1a0(uVar5,(uint)*(ushort *)(uVar5 + 0x7c),(uint)*(ushort *)(uVar5 + 0x7e),uVar10,uVar9,1)
  ;
LAB_0058a033: ;
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84)));
  uVar5 = 0;
  if (iVar3 != 0) {
    uVar5 = F_0057f0d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,iVar3,*(undefined4 *)(iVar3 + 8),0);
  }
  return uVar5;
}

/* ref: FUN_0058a060 */
GEN_FRAME unsigned int GEN_THISCALL F_0058a060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58a060u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined * pvVar9;
  undefined4 * puVar10;
  uint uVar11;
  undefined4 * puVar12;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar11 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c)));
  if (uVar11 == 0) {
    return;
  }
  uVar6 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))));
  if (uVar6 != 0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = *(undefined4 *)(uVar6 + 0x118);
  }
  sVar5 = *(short *)(uVar11 + 0x18);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xce))) = 0;
  pvVar9 = ((undefined *)GEN_TOP(((sVar5 != 3) - 1 & uVar11)));
  if (pvVar9 != (undefined *)0x0) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xce))) = 1;
    F_00577d20(pvVar9 GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,0,REFG(undefined4, 0x108cc50),0);
    pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),*(ushort *)((int)pvVar9 + 0x7e) < (ushort)(*(undefined * PTR32 *)(gen_frame + 0x8)));
    F_005c06e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
    bVar1 = *(byte *)((int)pvVar9 + 0xff);
    *(byte *)((int)pvVar9 + 0xff) = *(byte *)((int)pvVar9 + 0xff) ^ (bVar1 ^ (byte)(*(undefined4 *)&gen_args[1])) & 1;
    if ((byte)(*(undefined4 *)&gen_args[1]) == 0) {
      return;
    }
    uVar11 = (int)pvVar3 - (uint)*(ushort *)((int)pvVar9 + 0x7e);
    *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc6))) = (short)uVar11;
    F_00589f20((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar11 & 0xffff);
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcd))) = 1;
    (*(undefined4 *)&gen_args[1]) = *(undefined4 *)((int)pvVar9 + 0xf0);
    pvVar9 = (undefined *)F_005684e0(pvVar9 GEN_EDX_ARG,1);
    uVar4 = F_00576af0(pvVar9 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
    puVar10 = (undefined4 *)((int)pvVar9 + 0xa8);
    puVar12 = (undefined4 *)((int)pvVar9 + 100);
    for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 - 1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc2))) = (short)(((uint)(*(undefined * PTR32 *)(gen_frame + 0x8)) & 0xffff) / (uVar4 + 1));
    goto LAB_0058a216;
  }
  uVar4 = (ushort)(*(undefined4 *)&gen_args[1]);
  if (uVar4 == 0) {
    return;
  }
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),uVar4 < *(ushort *)(uVar11 + 0x7e));
  uVar2 = (*(undefined4 *)&gen_args[1]);
  F_005c06e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar2);
  if ((byte)(*(undefined4 *)&gen_args[1]) == '\0') {
    return;
  }
  iVar8 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c)));
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) == '\0') {
    if (iVar8 == 0) goto LAB_0058a1e6;
    uVar7 = (undefined2)(int)*(float *)(iVar8 + 0x38);
  }
  else if (iVar8 == 0) {
LAB_0058a1e6: ;
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined2)(int)*(float *)(iVar8 + 0x3c);
  }
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = uVar7;
  if (iVar8 == 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = *(short *)(iVar8 + 0x7e);
  }
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc6))) = sVar5 - uVar4;
  F_00589f20((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)(ushort)(sVar5 - uVar4));
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcd))) = 1;
LAB_0058a216: ;
  F_00568380(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) GEN_EDX_ARG,8,5,(*(undefined * PTR32 *)&gen_args[0]),0,0);
  F_00568380(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) GEN_EDX_ARG,8,5,(*(undefined * PTR32 *)&gen_args[0]),0,0);
  return;
}

/* ref: FUN_0058a250 */
GEN_NOFRAME uint GEN_THISCALL F_0058a250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58a250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x10a18b4));
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xbc) = 1;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return (uint)this;
}

/* ref: FUN_0058a300 */
GEN_NOFRAME uint GEN_THISCALL F_0058a300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58a300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_0058a320 */
GEN_FRAME uint GEN_THISCALL F_0058a320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x58a320u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  undefined * pvVar2;
  undefined * this;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  uint local_8;
  
  pvVar2 = (undefined *)F_0055d920((undefined *)(param_1 + 4) GEN_EDX_FWD,*(undefined4 *)(param_1 + 0x88));
  if ((pvVar2 == (undefined *)0x0) || (*(short *)((int)pvVar2 + 0x18) != 3)) {
    pvVar2 = (undefined *)0x0;
  }
  bVar4 = false;
  local_8 = 0;
  if (pvVar2 != (undefined *)0x0) {
    bVar4 = param_2 != 0;
    if (bVar4) {
      F_00584110(pvVar2 GEN_EDX_ARG,param_2);
      local_8 = F_00577bc0(pvVar2 GEN_EDX_ARG,0,0,REFG(undefined4, 0x108cc50),0);
    }
    *(uint *)((int)pvVar2 + 0x84) =
         *(uint *)((int)pvVar2 + 0x84) ^
         ((uint)bVar4 << 0x14 ^ *(uint *)((int)pvVar2 + 0x84)) & 0x100000;
    *(uint *)((int)pvVar2 + 0x88) =
         *(uint *)((int)pvVar2 + 0x88) ^ ((uint)!bVar4 << 7 ^ *(uint *)((int)pvVar2 + 0x88)) & 0x80;
  }
  this = (undefined *)F_0055d920((undefined *)(param_1 + 4) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x8c));
  pvVar2 = this;
  if ((this != (undefined *)0x0) && (*(short *)((int)this + 0x18) == 3)) {
    if ((param_3 == 0) || (!bVar4)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
      F_00584110(this GEN_EDX_ARG,param_3);
      fVar5 = (float10)(int)(local_8 + 4);
      if ((int)(local_8 + 4) < 0) {
        fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar1 = ((float)GEN_TOF((fVar5 + (float10)*(float *)(param_1 + 0xb8))));
      if (((*(uint *)((int)this + 0x88) & 1) == 0) &&
         ((fVar5 = (float10)fVar1, bVar4 = GEN_ISNAN((float10)*(float *)((int)this + 0x38)) || GEN_ISNAN(fVar5),
          bVar4 == (bVar4 || (float10)*(float *)((int)this + 0x38) == fVar5) ||
          (GEN_ISNAN((float10)*(float *)((int)this + 0x3c)) || GEN_ISNAN((float10)*(float *)((int)this + 0x3c)))
          ))) {
        *(uint *)((int)this + 0x88) = *(uint *)((int)this + 0x88) | 1;
      }
      *(float *)((int)this + 0x38) = fVar1;
    }
    pvVar2 = ((undefined *)GEN_TOP(((iVar3 << 0x14 ^ *(uint *)((int)this + 0x84)) & 0x100000)));
    *(uint *)((int)this + 0x84) = *(uint *)((int)this + 0x84) ^ (uint)pvVar2;
    *(uint *)((int)this + 0x88) =
         *(uint *)((int)this + 0x88) ^
         ((uint)((char)iVar3 == '\0') << 7 ^ *(uint *)((int)this + 0x88)) & 0x80;
  }
  return (uint)pvVar2;
}

/* ref: FUN_0058a4b0 */
GEN_FRAME uint GEN_THISCALL F_0058a4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58a4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00584110(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0058a4c0 */
GEN_NOFRAME uint GEN_THISCALL F_0058a4c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58a4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a149c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[15])REFP(0x10a145c));
  if (*(int *)((int)this + 0x90) != 0) {
    F_00406ad0(*(int *)((int)this + 0x90));
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,0x49,0,this,0);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[15])REFP(0x10a0b24));
  if (*(int *)((int)this + 0x90) != 0) {
    F_00406ad0(*(int *)((int)this + 0x90));
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_0058a550 */
GEN_NOFRAME uint GEN_THISCALL F_0058a550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58a550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x20) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x95))) = 0;
  }
  uVar1 = F_005883a0(REFG(int, 0x1379860) + 0x3c GEN_EDX_FWD,-(uint)(this != (undefined *)0x84) & (uint)this);
  return uVar1;
}

/* ref: FUN_0058a580 */
GEN_FRAME uint GEN_STDCALL F_0058a580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58a580u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  
  if (param_2 != (byte *)0x0) {
    pbVar5 = &REFG(undefined1, 0x109d02e);
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0058a5b2: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0058a5b7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0058a5b2;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0058a5b7: ;
    if (iVar3 != 0) {
      iVar3 = 1;
      goto LAB_0058a5c1;
    }
  }
  iVar3 = 0;
LAB_0058a5c1: ;
  if (param_1 != (undefined *)0x0) {
    *(uint *)((int)param_1 + 0x84) =
         *(uint *)((int)param_1 + 0x84) ^
         (iVar3 << 0x14 ^ *(uint *)((int)param_1 + 0x84)) & 0x100000;
    *(uint *)((int)param_1 + 0x88) =
         *(uint *)((int)param_1 + 0x88) ^
         ((uint)((char)iVar3 == '\0') << 7 ^ *(uint *)((int)param_1 + 0x88)) & 0x80;
  }
  if ((char)iVar3 != '\0') {
    uVar4 = F_00584110(param_1 GEN_EDX_ARG,param_2);
    return uVar4;
  }
  uVar4 = F_00584110(param_1 GEN_EDX_ARG,&REFG(undefined1, 0x109d02f));
  return uVar4;
}

/* ref: FUN_0058a660 */
GEN_FRAME uint GEN_THISCALL F_0058a660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58a660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(byte *)((int)this + 0x1df) =
       *(byte *)((int)this + 0x1df) ^ ((char)param_1 * '\x04' ^ *(byte *)((int)this + 0x1df)) & 4;
  uVar1 = F_00584580(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0058a690 */
GEN_FRAME uint GEN_THISCALL F_0058a690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58a690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1 << 4 ^ *(byte *)((int)this + 0x1df)) &
          0xffffff10;
  *(byte *)((int)this + 0x1df) = *(byte *)((int)this + 0x1df) ^ (byte)uVar1;
  uVar1 = CONCAT31((int3)(uVar1 >> 8),*(byte *)((int)this + 0x1df));
  if ((char)param_1 != '\0') {
    *(byte *)((int)this + 0x1df) = *(byte *)((int)this + 0x1df) | 4;
    uVar1 = F_00584580(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_FWD,1);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentTextInput::vf16 */
GEN_FRAME unsigned int GEN_THISCALL F_0058a6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58a6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  undefined1 AVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined * pAVar8;
  int iVar9;
  int * piVar10;
  char * pcVar11;
  
  pcVar11 = param_1;
  pAVar8 = this + 0x174;
  for (iVar7 = 0x1f; iVar7 != 0; iVar7 = iVar7 - 1) {
    *(undefined4 *)pAVar8 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pAVar8 = pAVar8 + 4;
  }
  uVar5 = *(uint *)(this + 0x1d0);
  (*(int *)(gen_frame + 0x0)) = 0xff;
  pAVar8 = this + 0x1d0;
  if (0xfe < uVar5) {
    pAVar8 = (undefined *)&(*(int *)(gen_frame + 0x0));
  }
  *(undefined4 *)(this + 0x1d0) = *(undefined4 *)pAVar8;
  if (*param_1 != '\0') {
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
    this[0x80] = *(undefined *)(param_1 + 8);
  }
  *(undefined4 *)(this + 0x15c) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x160) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 0xc);
  uVar5 = F_0055d920(this + 4 GEN_EDX_FWD,*(undefined4 *)(this + 0x184));
  if ((uVar5 == 0) || (*(short *)(uVar5 + 0x18) != 3)) {
    uVar5 = 0;
  }
  *(uint *)(this + 0x8c) = uVar5;
  uVar5 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x188));
  *(uint *)(this + 0x94) = uVar5;
  uVar5 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x18c));
  *(uint *)(this + 0x90) = uVar5;
  uVar5 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x1c0));
  if ((uVar5 == 0) || (*(short *)(uVar5 + 0x18) != 3)) {
    uVar5 = 0;
  }
  *(uint *)(this + 0x2f8) = uVar5;
  uVar5 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 400));
  *(uint *)(this + 0x300) = uVar5;
  if (uVar5 != 0) {
    *(uint *)(uVar5 + 0x88) = *(uint *)(uVar5 + 0x88) | 0x100000;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0x308;
  (*(int *)(gen_frame + 0x0)) = 9;
  do {
    if ((((byte)this[0x60] & 1) == 0) || (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x4)) - 0x174) == 0)) {
LAB_0058a885: ;
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(this + 0xc);
      iVar9 = 0;
      if ((iVar7 != 0) && ((uVar5 = *(uint *)(iVar7 + 4), uVar5 != 0 && (uVar6 = 0, uVar5 != 0)))) {
        piVar3 = *(int * PTR32 *)(iVar7 + 8);
        (*(int * PTR32 *)(gen_frame + 0x8)) = piVar3;
        piVar10 = piVar3;
        do {
          if (*(int *)(*piVar10 + 4) == *(int *)((*(undefined * PTR32 *)(gen_frame + 0x4)) - 0x174)) {
            iVar9 = piVar3[uVar6];
            goto LAB_0058a84c;
          }
          uVar6 = uVar6 + 1;
          piVar10 = piVar10 + 1;
        } while (uVar6 < uVar5);
        iVar9 = 0;
      }
LAB_0058a84c: ;
      if (iVar9 == 0) goto LAB_0058a885;
      if ((((*(ushort *)(iVar9 + 0x18) < 1000) || (iVar7 = *(int *)(iVar9 + 0x8c), iVar7 == 0)) ||
          ((*(byte *)(iVar7 + 0x60) & 1) == 0)) ||
         ((((*(byte *)(iVar7 + 0x60) & 4) == 0 || (*(char *)(iVar7 + 0x1c) != '\x01')) ||
          (*((char *)GEN_TOP((*(int *)(iVar7 + 0xc) + 0xf))) != '\x01')))) {
        iVar7 = 0;
      }
    }
    *(int *)(*(undefined * PTR32 *)(gen_frame + 0x4)) = iVar7;
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x70) != 0)) {
      puVar1 = ((uint *)GEN_TOP((*(int *)(iVar7 + 0x70) + 0x88)));
      *puVar1 = *puVar1 | 0x100000;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 4;
    iVar7 = (*(int *)(gen_frame + 0x0)) - 1;
    (*(int *)(gen_frame + 0x0)) = iVar7;
  } while (iVar7 != 0);
  if ((((byte)this[0x60] & 1) != 0) && (*(int *)(this + 0x1b8) != 0)) {
    iVar7 = *(int *)(this + 0xc);
    iVar9 = 0;
    if ((iVar7 != 0) && ((uVar5 = *(uint *)(iVar7 + 4), uVar5 != 0 && (uVar6 = 0, uVar5 != 0)))) {
      piVar3 = *(int * PTR32 *)(iVar7 + 8);
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar3;
      piVar10 = piVar3;
      do {
        if (*(int *)(*piVar10 + 4) == *(int *)(this + 0x1b8)) {
          iVar9 = piVar3[uVar6];
          goto LAB_0058a8fa;
        }
        uVar6 = uVar6 + 1;
        piVar10 = piVar10 + 1;
      } while (uVar6 < uVar5);
      iVar9 = 0;
    }
LAB_0058a8fa: ;
    if ((iVar9 != 0) && (*(short *)(iVar9 + 0x18) == 3)) goto LAB_0058a907;
  }
  iVar9 = 0;
LAB_0058a907: ;
  *(int *)(this + 0x32c) = iVar9;
  if (iVar9 != 0) {
    *(uint *)(iVar9 + 0x88) = *(uint *)(iVar9 + 0x88) | 0x100000;
  }
  if ((((byte)this[0x60] & 1) == 0) || (*(int *)(this + 0x1bc) == 0)) {
    iVar7 = 0;
  }
  else {
    iVar9 = *(int *)(this + 0xc);
    iVar7 = 0;
    if (((iVar9 != 0) && (uVar5 = *(uint *)(iVar9 + 4), uVar5 != 0)) && (uVar6 = 0, uVar5 != 0)) {
      piVar3 = *(int * PTR32 *)(iVar9 + 8);
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar3;
      piVar10 = piVar3;
      do {
        if (*(int *)(*piVar10 + 4) == *(int *)(this + 0x1bc)) {
          iVar7 = piVar3[uVar6];
          goto LAB_0058a972;
        }
        uVar6 = uVar6 + 1;
        piVar10 = piVar10 + 1;
      } while (uVar6 < uVar5);
      iVar7 = 0;
    }
  }
LAB_0058a972: ;
  *(int *)(this + 0x330) = iVar7;
  if (iVar7 != 0) {
    *(uint *)(iVar7 + 0x88) = *(uint *)(iVar7 + 0x88) | 0x100000;
  }
  AVar2 = this[0x1df];
  this[0x1df] = (undefined1)
                ((byte)this[0x1df] ^ (((byte)AVar2 >> 4 & 1) << 4 ^ (byte)this[0x1df]) & 0x10);
  if (((byte)AVar2 >> 4 & 1) != 0) {
    this[0x1df] = (undefined1)((byte)this[0x1df] | 4);
    F_00584580(*(undefined * PTR32 *)(this + 0x8c) GEN_EDX_ARG,1);
  }
  if (((byte)this[0x1df] & 8) != 0) {
    this[0x1de] = (undefined1)((byte)this[0x1de] & 0xf7);
  }
  if (((byte)this[0x1df] & 4) != 0) {
    F_00584580(*(undefined * PTR32 *)(this + 0x8c) GEN_EDX_ARG,1);
  }
  iVar7 = *(int *)(this + 0x8c);
  if (((iVar7 != 0) &&
      (bVar4 = ((char)this[0x1df] << 4 ^ *(byte *)(iVar7 + 0xfe)) & 0x7f ^ (char)this[0x1df] << 4,
      *(byte *)(iVar7 + 0xfe) = bVar4, (char)bVar4 < '\0')) && (*(char *)(iVar7 + 0x116) == '\0')) {
    *(char *)(iVar7 + 0x116) = *(char *)(iVar7 + 0xfd) + '\x01';
  }
  AVar2 = this[0x1de];
  *(undefined2 *)(this + 0x1f0) = 0;
  if (((byte)AVar2 & 0x40) != 0) {
    *(undefined2 *)(this + 0x1f0) = 1;
  }
  if ((char)AVar2 < '\0') {
    *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 2;
  }
  if (((byte)this[0x1df] & 1) != 0) {
    *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 4;
  }
  if (((byte)this[0x1df] & 2) != 0) {
    *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 8;
  }
  *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 0x10;
  if (((byte)AVar2 & 0x10) != 0) {
    *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 0x20;
  }
  if (((byte)AVar2 & 4) != 0) {
    *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 0x40;
  }
  if (((byte)AVar2 & 1) != 0) {
    *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 0x80;
  }
  if (((byte)AVar2 & 0x20) != 0) {
    *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 0x100;
  }
  iVar7 = 0;
  do {
    this[iVar7 + 0x1e0] = *(undefined *)(param_1 + iVar7 + 0x6c);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x10);
  return 0;
}

/* ref: FUN_0058aaf0 */
GEN_FRAME uint GEN_THISCALL F_0058aaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58aaf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * this;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int * piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  bool bVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  undefined2 local_18;
  uint local_14;
  float local_10;
  uint local_8;
  
  iVar13 = *(int *)param_2;
  if (((iVar13 < 0) || (piVar9 = *(int * PTR32 *)(param_2 + 4), piVar9 == (int *)0x0)) ||
     ((piVar9[1] - *piVar9 & 0xfffffffcU) == 0)) {
    uVar8 = F_0056e5a0((undefined *)(param_1 - 0x16c) GEN_EDX_FWD);
  }
  else {
    iVar4 = iVar13 / 9;
    iVar11 = piVar9[1] - *piVar9 >> 2;
    iVar5 = (iVar11 - 1) / 9;
    local_8 = iVar4 * 9;
    iVar12 = *(int *)(param_1 + 0x19c);
    *(uint *)(param_1 + 0x198) = local_8;
    if (iVar4 == iVar5) {
      if ((iVar12 == 0) || (*(int *)(iVar12 + 0x70) == 0)) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = *((float *)GEN_TOP((*(int *)(iVar12 + 0x70) + 0x3c)));
      }
      iVar12 = (iVar11 + iVar4 * -9) * (int)*(short *)(param_1 + 0x1c8) + (int)(short)(int)fVar18;
    }
    else {
      if ((iVar12 == 0) || (*(int *)(iVar12 + 0x70) == 0)) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = *((float *)GEN_TOP((*(int *)(iVar12 + 0x70) + 0x3c)));
      }
      iVar12 = *(short *)(param_1 + 0x1c8) * 9 + (int)(short)(int)fVar18;
    }
    F_00559f00(*(undefined4 *)(param_1 + 0x1c0) GEN_EDX_ARG,(float)iVar12);
    uVar8 = F_0055baf0(REFG(int, 0x1379860),"%d/%d(%d/%d)",iVar13 + 1,iVar11,iVar4 + 1,iVar5 + 1);
    F_00584110(*(undefined * PTR32 *)(param_1 + 0x1c0) GEN_EDX_ARG,uVar8);
    iVar12 = *(int *)(param_1 + 0x1c0);
    if (iVar12 != 0) {
      *(uint *)(iVar12 + 0x84) = *(uint *)(iVar12 + 0x84) | 0x100000;
      *(uint *)(iVar12 + 0x88) = *(uint *)(iVar12 + 0x88) & 0xffffff7f;
    }
    local_14 = F_00577bc0(*(undefined * PTR32 *)(param_1 + 0x1c0) GEN_EDX_ARG,0,0,REFG(undefined4, 0x108cc50),0);
    piVar9 = (int *)(param_1 + 0x19c);
    iVar12 = 0;
    do {
      if ((int)local_8 < iVar11) {
        this = (undefined *)*piVar9;
        iVar4 = *(int *)((int)this + 0x104);
        if (iVar12 == iVar13 % 9) {
          if (iVar4 != 0) {
            *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(param_1 + 0x58);
          }
        }
        else if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(param_1 + 0x1e0);
        }
        iVar4 = **(int * PTR32 *)(param_2 + 4);
        if ((uint)((*(int * PTR32 *)(param_2 + 4))[1] - iVar4 >> 2) <= local_8) {
                    
          F_00c457e7("invalid vector<T> subscript");
        }
        uVar8 = F_0055baf0(REFG(int, 0x1379860),"%d : %s",iVar12 + 1,*(undefined4 *)(iVar4 + local_8 * 4))
        ;
        F_00589280(this GEN_EDX_ARG,uVar8);
        iVar4 = *(int *)((int)this + 0x70);
        if (iVar4 != 0) {
          *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) | 0x100000;
          *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) & 0xffffff7f;
        }
        *(undefined1 *)((int)this + 0x89) = 1;
        F_00581640(this GEN_EDX_ARG);
        if (*(int *)((int)this + 0x70) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x70) + 0x7c)));
        }
        if (local_14 < uVar8) {
          local_14 = uVar8;
        }
      }
      else if ((*piVar9 != 0) && (iVar4 = *(int *)(*piVar9 + 0x70), iVar4 != 0)) {
        *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) & 0xffefffff;
        *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 0x80;
      }
      local_8 = local_8 + 1;
      iVar12 = iVar12 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar12 < 9);
    iVar13 = *(int *)(param_1 + 0x198);
    param_2 = iVar13 + 2;
    piVar9 = (int *)(param_1 + 0x1a0);
    local_10 = 4.2039e-45;
    do {
      sVar14 = (short)local_14;
      if (iVar13 < iVar11) {
        if ((piVar9[-1] != 0) && (iVar12 = *(int *)(piVar9[-1] + 0x70), iVar12 != 0)) {
          *(short *)(iVar12 + 0x7c) =
               *(short *)(param_1 + 0x1d8) + *(short *)(param_1 + 0x1d0) + sVar14;
        }
      }
      if ((int)(param_2 - 1) < iVar11) {
        if ((*piVar9 != 0) && (iVar12 = *(int *)(*piVar9 + 0x70), iVar12 != 0)) {
          *(short *)(iVar12 + 0x7c) =
               *(short *)(param_1 + 0x1d8) + *(short *)(param_1 + 0x1d0) + sVar14;
        }
      }
      if ((int)param_2 < iVar11) {
        if ((piVar9[1] != 0) && (iVar12 = *(int *)(piVar9[1] + 0x70), iVar12 != 0)) {
          *(short *)(iVar12 + 0x7c) =
               *(short *)(param_1 + 0x1d8) + *(short *)(param_1 + 0x1d0) + sVar14;
        }
      }
      param_2 = param_2 + 3;
      piVar9 = piVar9 + 3;
      iVar13 = iVar13 + 3;
      local_10 = gen_bits2f((int)gen_fl2bits(local_10) - 1);
    } while (local_10 != 0.0);
    if (*(int *)(param_1 + 0x1c4) != 0) {
      *((short *)GEN_TOP((*(int *)(param_1 + 0x1c4) + 0x7c))) =
           *(short *)(param_1 + 0x1d8) + *(short *)(param_1 + 0x1d0) + sVar14;
    }
    if (*(int *)(param_1 + 0x1c0) == 0) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = *((float *)GEN_TOP((*(int *)(param_1 + 0x1c0) + 0x3c)));
    }
    if (*(int *)(param_1 + 0x1c4) != 0) {
      local_18 = (undefined2)
                 (int)TRUNC(((float10)(int)*(short *)(param_1 + 0x1c8) + (float10)fVar18) +
                            (float10)*(int *)(param_1 + 0x1dc));
      *((undefined2 *)GEN_TOP((*(int *)(param_1 + 0x1c4) + 0x7e))) = local_18;
    }
    if (*(int *)(param_1 + 0x1c4) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x1c4) + 0x7c)));
    }
    iVar13 = *(int *)(param_1 + 0x1c0);
    if (iVar13 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (uint)*(ushort *)(iVar13 + 0x7c);
    }
    iVar12 = (uVar8 - *(int *)(param_1 + 0x1d8)) - uVar10;
    param_2 = (uint)gen_fl2bits((float)iVar12);
    if (iVar13 != 0) {
      if (((*(uint *)(iVar13 + 0x88) & 1) == 0) &&
         (fVar16 = (float10)iVar12, bVar15 = GEN_ISNAN((float10)*(float *)(iVar13 + 0x38)) || GEN_ISNAN(fVar16),
         bVar15 == (bVar15 || (float10)*(float *)(iVar13 + 0x38) == fVar16))) {
        *(uint *)(iVar13 + 0x88) = *(uint *)(iVar13 + 0x88) | 1;
      }
      *(uint *)(iVar13 + 0x38) = param_2;
    }
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      iVar13 = *(int *)(param_1 - 0xdc);
      local_10 = 0.0;
      if (iVar13 != 0) {
        local_10 = *(float *)(iVar13 + 0x38);
        param_2 = *(uint *)(iVar13 + 0x3c);
      }
      fVar18 = *(float *)(iVar13 + 0x30);
      fVar1 = *(float *)(iVar13 + 0x34);
      if (iVar13 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(ushort *)(iVar13 + 0x7e);
      }
      sVar14 = *(short *)(param_1 + 0x1c8);
      iVar13 = *(int *)(param_1 + 0x194);
      fVar16 = (float10)0;
      fVar2 = (float)((float10)local_10 + fVar16);
      fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(int *)(param_1 + 0x1d4) +
                                      ((float10)GEN_TOD(gen_bits2f(param_2)))))) + fVar16)));
      if (iVar13 != 0) {
        if (((*(uint *)(iVar13 + 0x88) & 1) == 0) &&
           ((fVar17 = (float10)fVar2,
            bVar15 = GEN_ISNAN((float10)*(float *)(iVar13 + 0x38)) || GEN_ISNAN(fVar17),
            bVar15 == (bVar15 || (float10)*(float *)(iVar13 + 0x38) == fVar17) ||
            (fVar17 = (float10)fVar3,
            bVar15 = GEN_ISNAN((float10)*(float *)(iVar13 + 0x3c)) || GEN_ISNAN(fVar17),
            bVar15 == (bVar15 || (float10)*(float *)(iVar13 + 0x3c) == fVar17))))) {
          *(uint *)(iVar13 + 0x88) = *(uint *)(iVar13 + 0x88) | 1;
        }
        *(float *)(iVar13 + 0x38) = fVar2;
        *(float *)(iVar13 + 0x3c) = fVar3;
      }
      iVar13 = *(int *)(param_1 + 0x1c4);
      if (iVar13 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(ushort *)(iVar13 + 0x7c);
      }
      iVar12 = *(int *)(REFG(int, 0x1379860) + 0x234);
      fVar17 = (float10)iVar12;
      if (iVar12 < 0) {
        fVar17 = fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      if (fVar17 < (float10)fVar18 + (float10)uVar7) {
        if (iVar13 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (uint)*(ushort *)(iVar13 + 0x7c);
        }
        fVar17 = (float10)(int)(iVar12 - uVar8);
        if ((int)(iVar12 - uVar8) < 0) {
          fVar17 = fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar13 = *(int *)(param_1 + 0x194);
        fVar18 = ((float)GEN_TOF((fVar16 + (float10)((float)GEN_TOF((((float10)local_10 - (float10)fVar18) + fVar17))))));
        if (iVar13 != 0) {
          if (((*(uint *)(iVar13 + 0x88) & 1) == 0) &&
             (fVar16 = (float10)fVar18,
             bVar15 = GEN_ISNAN((float10)*(float *)(iVar13 + 0x38)) || GEN_ISNAN(fVar16),
             bVar15 == (bVar15 || (float10)*(float *)(iVar13 + 0x38) == fVar16))) {
            *(uint *)(iVar13 + 0x88) = *(uint *)(iVar13 + 0x88) | 1;
          }
          *(float *)(iVar13 + 0x38) = fVar18;
        }
      }
      fVar16 = (float10)*(int *)(REFG(int, 0x1379860) + 0x238);
      if (*(int *)(REFG(int, 0x1379860) + 0x238) < 0) {
        fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      if (fVar16 < (float10)(int)*(short *)(param_1 + 0x1cc) +
                   (float10)((float)GEN_TOF(((float10)(int)((uint)uVar6 + (int)sVar14) + (float10)fVar1)))) {
        if (*(int *)(param_1 + 0x1c4) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x1c4) + 0x7e)));
        }
        iVar13 = *(int *)(param_1 + 0x194);
        if (iVar13 != 0) {
          if (((*(uint *)(iVar13 + 0x88) & 1) == 0) &&
             (fVar16 = (float10)(int)(-8 - uVar8),
             bVar15 = GEN_ISNAN((float10)*(float *)(iVar13 + 0x3c)) || GEN_ISNAN(fVar16),
             bVar15 == (bVar15 || (float10)*(float *)(iVar13 + 0x3c) == fVar16))) {
            *(uint *)(iVar13 + 0x88) = *(uint *)(iVar13 + 0x88) | 1;
          }
          *(float *)(iVar13 + 0x3c) = (float)(int)(-8 - uVar8);
        }
      }
      *(undefined1 *)(param_1 + 0x1ce) = 0;
    }
    iVar13 = *(int *)(param_1 + 0x1c4);
    if (iVar13 != 0) {
      *(uint *)(iVar13 + 0x84) = *(uint *)(iVar13 + 0x84) | 0x100000;
      *(uint *)(iVar13 + 0x88) = *(uint *)(iVar13 + 0x88) & 0xffffff7f;
    }
    iVar13 = *(int *)(param_1 + 0x194);
    if (iVar13 != 0) {
      *(uint *)(iVar13 + 0x84) = *(uint *)(iVar13 + 0x84) | 0x100000;
      *(uint *)(iVar13 + 0x88) = *(uint *)(iVar13 + 0x88) & 0xffffff7f;
    }
    uVar10 = *(uint *)(param_1 + 400);
    uVar8 = 0;
    if (uVar10 != 0) {
      *(undefined4 *)(uVar10 + 0x98) = *(undefined4 *)(param_1 + 0x194);
      return uVar10;
    }
  }
  return uVar8;
}

/* ref: FUN_0058b190 */
GEN_FRAME unsigned int GEN_THISCALL F_0058b190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58b190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  char * pcVar8;
  
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x2f8);
  if (pvVar3 == (undefined *)0x0) {
    return;
  }
  iVar5 = *(int *)((int)this + 0x1d8);
  if (iVar5 == 0) {
    if (*(int *)((int)this + 0x1d0) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x8c) + 0xf0)));
      pvVar3 = (undefined *)F_005684e0(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_FWD,1);
      uVar2 = F_00576af0(pvVar3 GEN_EDX_ARG,uVar1);
      puVar6 = (undefined4 *)((int)pvVar3 + 0xa8);
      puVar7 = (undefined4 *)((int)pvVar3 + 100);
      for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      pvVar3 = *(undefined * PTR32 *)((int)this + 0x2f8);
      uVar4 = F_0055baf0(REFG(undefined4, 0x1379860),"%d/%d",uVar2 + 1,*(undefined4 *)((int)this + 0x1d0));
      F_00584110(pvVar3 GEN_EDX_ARG,uVar4);
      goto LAB_0058b25b;
    }
    iVar5 = *(int *)((int)this + 0x1d4);
    if (iVar5 == 0) {
      *(uint *)((int)pvVar3 + 0x84) = *(uint *)((int)pvVar3 + 0x84) & 0xffefffff;
      *(uint *)((int)pvVar3 + 0x88) = *(uint *)((int)pvVar3 + 0x88) | 0x80;
      return;
    }
    pcVar8 = "%d/%d";
  }
  else {
    pcVar8 = "%d/%d";
  }
  uVar4 = F_0055baf0(REFG(undefined4, 0x1379860),pcVar8,param_1,iVar5);
  F_00584110(pvVar3 GEN_EDX_ARG,uVar4);
LAB_0058b25b: ;
  iVar5 = *(int *)((int)this + 0x2f8);
  if (iVar5 == 0) {
    return;
  }
  *(uint *)(iVar5 + 0x84) = *(uint *)(iVar5 + 0x84) | 0x100000;
  *(uint *)(iVar5 + 0x88) = *(uint *)(iVar5 + 0x88) & 0xffffff7f;
  return;
}

/* ref: FUN_0058b2a0 */
GEN_FRAME uint GEN_THISCALL F_0058b2a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58b2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * this_00;
  byte bVar1;
  undefined1 uVar2;
  undefined * this_01;
  short sVar3;
  uint uVar4;
  char * pcVar5;
  undefined * pvVar6;
  int iVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  ulonglong uVar10;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  if ((*(byte *)((int)this + 0x1de) & 2) == 0) {
    uVar4 = F_0042a990((int)this + 0xf0 GEN_EDX_FWD);
    uVar4 = F_00584110(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_ARG,uVar4);
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
    return uVar4;
  }
  uVar4 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 8) + 0x1c))) GEN_EDX_ARG,(int)this + 0xf0,1);
  F_0042b630(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    F_0042dc00(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG,0x2a);
  }
  pcVar5 = (char *)F_0042a990(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
  this_01 = *(undefined * PTR32 *)((int)this + 0x8c);
  if (this_01 == (undefined *)0x0) goto LAB_0058b4a6;
  this_00 = (undefined *)((int)this_01 + 0x9c);
  (*(bool *)(gen_frame + 0x1f)) = **(char * PTR32 *)((int)this_01 + 0x9c) == '\0';
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
LAB_0058b454: ;
    F_0042e430(this_00 GEN_EDX_ARG,pcVar5);
  }
  else if ((*(byte *)((int)this_01 + 0xfe) & 0x40) == 0) {
    if ((*(byte *)((int)this_01 + 0xff) & 4) == 0) goto LAB_0058b454;
    sVar3 = *(short *)((int)this_01 + 0x7c) - 5;
    bVar1 = *(byte *)((int)this_01 + 0xfc);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = *((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 8) + 0x18)));
    uVar2 = *(undefined1 *)((int)this_01 + 0xfd);
    (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
    if (sVar3 == 0) {
      sVar3 = -1;
    }
    (*(byte *)(gen_frame + 0x10)) = bVar1 >> 4;
    (*(short *)(gen_frame + 0xc)) = sVar3;
    (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
    (*(undefined1 *)(gen_frame + 0x11)) = uVar2;
    (*(undefined2 *)(gen_frame + 0xe)) = 0xffff;
    (*(undefined2 *)(gen_frame + 0x12)) = 0xff01;
    (*(undefined2 *)(gen_frame + 0x16)) = 0xffff;
    F_0042cc20(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,pcVar5,REFG(undefined4, 0x108cc50));
    F_00580670((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,this_00,((undefined1 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x8)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  }
  else {
    F_0042aca0(this_00 GEN_EDX_ARG);
    pvVar6 = (undefined *)F_005684e0(this_01 GEN_EDX_ARG,0);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = pvVar6;
    F_00583cc0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 8) GEN_EDX_ARG,(uint)(*(byte *)((int)this_01 + 0xfc) >> 4),this_00,
                 pcVar5,(uint)*(ushort *)((int)this_01 + 0x7c));
    puVar8 = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xa8);
    puVar9 = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 100);
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  uVar4 = F_0042a990((int)this_01 + 0x9c GEN_EDX_ARG);
  *(uint *)((int)this_01 + 0xf0) = uVar4;
  if (**(char * PTR32 *)((int)this_01 + 0x9c) == '\0') {
    *(uint *)((int)this_01 + 0x84) = *(uint *)((int)this_01 + 0x84) & 0xffefffff;
  }
  else if ((*(bool *)(gen_frame + 0x1f)) != false) {
    *(uint *)((int)this_01 + 0x84) = *(uint *)((int)this_01 + 0x84) | 0x100000;
  }
  if ((*(byte *)((int)this_01 + 0xfe) & 1) != 0) {
    F_00578070(this_01 GEN_EDX_ARG);
  }
LAB_0058b4a6: ;
  uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
  return (uint)uVar10;
}

/* ref: FUN_0058b4f0 */
GEN_FRAME unsigned int GEN_THISCALL F_0058b4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58b4f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * pvVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float fVar7;
  float local_c;
  float local_8;
  
  if (((*(char *)(param_1 - 0xe8) != '\0') && (*(char *)(param_1 + 0x19) != '\0')) &&
     (*(char *)(param_1 + 0x1a) == '\0')) {
    if ((*(int *)(param_1 - 0xe0) != 0) && (*((char *)GEN_TOP(**(undefined4 * PTR32 *)(param_2 + 0xc))) != '\0')) {
      pvVar1 = (undefined *)(param_1 - 0xd0);
      F_0042ccf0(pvVar1 GEN_EDX_FWD,*(undefined4 * PTR32 *)(param_2 + 0xc));
      F_0042ccf0((undefined *)(param_1 - 0x7c) GEN_EDX_ARG,pvVar1);
      uVar5 = F_0042a990(pvVar1 GEN_EDX_ARG);
      F_00584110(*(undefined * PTR32 *)(param_1 - 0xe0) GEN_EDX_ARG,uVar5);
    }
    if ((*(undefined * PTR32 *)(param_1 - 0xe0) != (undefined *)0x0) && (*(int *)(param_1 - 0xdc) != 0)) {
      uVar2 = *(ushort *)(param_2 + 2);
      *(int *)(param_1 - 0x1c) = (int)(short)uVar2;
      uVar3 = *(ushort *)(param_2 + 4);
      *(int *)(param_1 - 0x18) = (int)(short)uVar3;
      *(int *)(param_1 - 0x14) = (int)(short)uVar3;
      F_0055ad50(*(undefined * PTR32 *)(param_1 - 0xe0) GEN_EDX_ARG,(uint)uVar2,(uint)uVar3);
      pvVar1 = *(undefined * PTR32 *)(param_1 - 0xe0);
      if (pvVar1 != (undefined *)0x0) {
        param_2 = *(uint *)((int)pvVar1 + 0x38);
        local_c = *(float *)((int)pvVar1 + 0x3c);
      }
      uVar5 = F_00577c70(pvVar1 GEN_EDX_ARG,0,0,*(undefined4 *)(param_1 - 0x14));
      fVar6 = (float10)(int)uVar5;
      if ((int)uVar5 < 0) {
        fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      iVar4 = *(int *)(param_1 - 0xdc);
      fVar7 = 0.0;
      if (iVar4 == 0) {
        local_8 = 0.0;
      }
      else {
        local_8 = *(float *)(iVar4 + 0x74);
      }
      if (iVar4 != 0) {
        fVar7 = *(float *)(iVar4 + 0x78);
      }
      F_00559da0(iVar4 GEN_EDX_ARG,((float)GEN_TOF(((float10)(float)(fVar6 + ((float10)GEN_TOD(gen_bits2f(param_2)))) -
                                (float10)local_8))),(float)((float10)local_c - (float10)fVar7));
    }
  }
  return;
}

/* ref: FUN_0058b640 */
GEN_FRAME uint GEN_THISCALL F_0058b640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58b640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 * puVar11;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if (*(char *)((int)this + 0x84) == '\0') {
    uVar1 = F_0057eb30(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x178),
                         (uint)*(byte *)((int)this + 0x278),0,(uint)*(byte *)((int)this + 0x180),0);
    if (*(int *)((int)this + 0x194) != 0) {
      uVar5 = 0;
      if (*(int *)((int)this + 0x8c) != 0) {
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0xf0)));
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,uVar5,REFG(undefined4, 0x108cc50));
      F_0042e370(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x194));
      uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
      F_00584110(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_ARG,uVar1);
      uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
      uVar1 = (uint)uVar10;
    }
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = F_00563b70(*(undefined4 *)((int)this + 0x178));
  uVar2 = F_00563b70(*(undefined4 *)((int)this + 0x18c));
  F_0042b630(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  iVar8 = 0;
  if (0 < (int)(uVar2 - uVar1)) {
    do {
      if (iVar8 == 0) {
        iVar6 = (int)this + 0x1ec;
        puVar11 = ((undefined1 *)(gen_frame + 0xc));
        pvVar4 = (undefined *)F_0042cdb0((undefined *)((int)this + 0x198) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)),&REFG(undefined, 0x10a0870));
        uVar3 = F_0042cd30(pvVar4 GEN_EDX_ARG,puVar11,iVar6);
        F_0042e360(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,uVar3);
        F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
      }
      else {
        F_0042e370(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,&REFG(undefined, 0x10a086c));
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(uVar2 - uVar1));
  }
  iVar8 = 0;
  if (0 < (int)uVar1) {
    uVar3 = uVar1;
    do {
      uVar3 = uVar3 - 1;
      iVar6 = *(int *)((int)this + 0x178);
      uVar9 = uVar3;
      if (0 < (int)uVar3) {
        do {
          iVar6 = iVar6 / 10;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar7 = (int)((ulonglong)((longlong)iVar6 * -0x66666667) >> 0x20);
      F_00c472af(&REFG(undefined, 0x1379720),0x40,&REFG(undefined, 0x10a00c0),iVar6 + ((iVar7 >> 2) - (iVar7 >> 0x1f)) * 10);
      if (uVar1 - uVar2 == iVar8) {
        iVar6 = (int)this + 0x1ec;
        puVar11 = ((undefined1 *)(gen_frame + 0x60));
        pvVar4 = (undefined *)F_0042cdb0((undefined *)((int)this + 0x198) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x1379720));
        uVar9 = F_0042cd30(pvVar4 GEN_EDX_ARG,puVar11,iVar6);
        F_0042e360(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,uVar9);
        F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      }
      else {
        F_0042e370(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,&REFG(undefined, 0x1379720));
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)uVar1);
  }
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_ARG,uVar1);
  uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return (uint)uVar10;
}

/* ref: FUN_0058b8b0 */
GEN_FRAME uint GEN_THISCALL F_0058b8b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58b8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  uint in_EAX = 0;
  uint uVar7;
  uint uVar8;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  ushort uVar9;
  
  if (*(char *)((int)this + 400) == '\0') {
    uVar7 = F_00583100(this GEN_EDX_FWD);
    return uVar7;
  }
  iVar2 = *(int *)((int)this + 0x170);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x70);
    if (*(int *)((int)this + 0x144) == 0) {
      uVar7 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c));
      *(uint *)((int)this + 0x144) = uVar7;
    }
    if (*(int *)(iVar2 + 0x70) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *((ushort *)GEN_TOP((*(int *)(iVar2 + 0x70) + 0x7c)));
    }
    fVar1 = *(float *)(iVar3 + 0x30);
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x144) + 0x20))))(*(int * PTR32 *)((int)this + 0x144) GEN_EDX_ARG);
    if (*(int *)((int)this + 0x144) == 0) {
      uVar8 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c));
      *(uint *)((int)this + 0x144) = uVar8;
    }
    dVar5 = (double)((float)GEN_TOF(((float10)(uVar9 >> 1) + ((float10)fVar1 - (float10)(int)(short)uVar7)))) -
            *(double *)&REFG(undefined, 0x10944e0);
    fVar1 = *(float *)(iVar3 + 0x34);
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x144) + 0x24))))(*(int * PTR32 *)((int)this + 0x144) GEN_EDX_ARG);
    dVar4 = (double)(float)((float10)fVar1 - (float10)(int)(short)uVar7) - *(double *)&REFG(undefined, 0x10947f0);
    if (*(int *)((int)this + 0x144) == 0) {
      uVar7 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c));
      *(uint *)((int)this + 0x144) = uVar7;
    }
    bVar6 = F_0056b630(*(undefined * PTR32 *)((int)this + 0x144) GEN_EDX_ARG,0xc8e,0,3,9,(int)dVar5 & 0xffff,
                         (int)dVar4 & 0xffff);
    in_EAX = CONCAT31(extraout_var,bVar6);
  }
  iVar2 = *(int *)((int)this + 0x174);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x70);
    if (*(int *)((int)this + 0x144) == 0) {
      uVar7 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c));
      *(uint *)((int)this + 0x144) = uVar7;
    }
    if (*(int *)(iVar2 + 0x70) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *((ushort *)GEN_TOP((*(int *)(iVar2 + 0x70) + 0x7c)));
    }
    fVar1 = *(float *)(iVar3 + 0x30);
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x144) + 0x20))))(*(int * PTR32 *)((int)this + 0x144) GEN_EDX_ARG);
    if (*(int *)((int)this + 0x144) == 0) {
      uVar8 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c));
      *(uint *)((int)this + 0x144) = uVar8;
    }
    dVar4 = (double)((float)GEN_TOF(((float10)(uVar9 >> 1) + ((float10)fVar1 - (float10)(int)(short)uVar7)))) +
            *(double *)&REFG(undefined, 0x1092098);
    fVar1 = *(float *)(iVar3 + 0x34);
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x144) + 0x24))))(*(int * PTR32 *)((int)this + 0x144) GEN_EDX_ARG);
    dVar5 = (double)(float)((float10)fVar1 - (float10)(int)(short)uVar7) - *(double *)&REFG(undefined, 0x10947f0);
    if (*(int *)((int)this + 0x144) == 0) {
      uVar7 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c));
      *(uint *)((int)this + 0x144) = uVar7;
    }
    bVar6 = F_0056b630(*(undefined * PTR32 *)((int)this + 0x144) GEN_EDX_ARG,0xc8d,0,4,9,(int)dVar4 & 0xffff,
                         (int)dVar5 & 0xffff);
    in_EAX = CONCAT31(extraout_var_00,bVar6);
  }
  return in_EAX;
}

/* ref: Component::GUI2::AtkComponentTextNineGrid::vf16 */
GEN_FRAME unsigned int GEN_THISCALL F_0058bb00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58bb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
      *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
      this[0x80] = *(undefined *)(param_1 + 8);
    }
    this_00 = (undefined *)F_0055d920(this + 4 GEN_EDX_FWD,*(undefined4 *)(param_1 + 0xc));
    if ((this_00 == (undefined *)0x0) || (*(short *)((int)this_00 + 0x18) != 3)) {
      this_00 = (undefined *)0x0;
    }
    *(undefined * PTR32 *)(this + 0x84) = this_00;
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x70);
    if ((this_00 != (undefined *)0x0) && (*(int *)(param_1 + 0x14) != 0)) {
      uVar1 = F_0056c6b0(*(undefined4 *)(REFG(int, 0x1379860) + 0x30),*(int *)(param_1 + 0x14),
                           (uint)*(byte *)((int)this_00 + 0x114));
      F_00584110(this_00 GEN_EDX_ARG,uVar1);
    }
  }
  return;
}

/* ref: FUN_0058bba0 */
GEN_FRAME uint GEN_THISCALL F_0058bba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58bba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint in_EAX = 0;
  
  if ((*(undefined * PTR32 *)((int)this + 0x84) != (undefined *)0x0) && (in_EAX = 0, param_1 != 0)) {
    F_00584110(*(undefined * PTR32 *)((int)this + 0x84) GEN_EDX_FWD,param_1);
    in_EAX = F_005832e0(this GEN_EDX_ARG);
  }
  return in_EAX;
}

/* ref: FUN_0058bbd0 */
GEN_FRAME uint GEN_THISCALL F_0058bbd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58bbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x138);
  if ((this_00 == (undefined *)0x0) || (*(short *)((int)this_00 + 0x18) != 3)) {
    this_00 = (undefined *)0x0;
  }
  uVar1 = F_00584110(this_00 GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0058bbf0 */
GEN_FRAME uint GEN_THISCALL F_0058bbf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58bbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x120);
  if ((this_00 == (undefined *)0x0) || (*(short *)((int)this_00 + 0x18) != 3)) {
    this_00 = (undefined *)0x0;
  }
  F_00584110(this_00 GEN_EDX_FWD,param_1);
  uVar1 = *(uint *)((int)this + 0x11c);
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x84) = *(uint *)(uVar1 + 0x84) | 0x100000;
    *(uint *)(uVar1 + 0x88) = *(uint *)(uVar1 + 0x88) & 0xffffff7f;
  }
  return uVar1;
}

/* ref: FUN_0058bc40 */
GEN_FRAME byte GEN_THISCALL F_0058bc40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58bc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 * puVar14;
  byte bVar15;
  undefined4 * puVar16;
  float10 fVar17;
  float10 fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint local_10;
  
  iVar13 = *(int *)((int)this + 0xb4);
  if ((((iVar13 == 0) || (*(int *)(iVar13 + 8) != 0)) || (*(int *)(iVar13 + 0xc) == 0)) ||
     (uVar9 = F_00572c50(*(int *)(iVar13 + 0xc)), uVar9 != 2)) {
    return 0;
  }
  iVar4 = *(int *)(REFG(int, 0x1379860) + 4);
  uVar9 = *(uint *)((int)this + 0x250) >> 9 & 0xffff;
  if (uVar9 < 0xffff) {
    uVar9 = 0xffff - uVar9;
  }
  else {
    uVar9 = 0;
  }
  uVar5 = *(undefined4 *)((int)this + 0x140);
  *((uint *)GEN_TOP((*(int *)(iVar4 + 4) + 0x70))) = uVar9 & 0xffff;
  pvVar6 = *(undefined * PTR32 *)(iVar4 + 4);
  uVar10 = F_005bfe10(pvVar6 GEN_EDX_ARG,1,0x50,2);
  if (uVar10 != 0) {
    *(byte *)((int)pvVar6 + 0xa4) = *(byte *)((int)pvVar6 + 0xa4) | 4;
    *(undefined4 *)(uVar10 + 0xc) = uVar5;
    *(undefined4 *)(uVar10 + 8) = 1;
    puVar14 = &REFG(undefined4, 0x1302d40);
    puVar16 = (undefined4 *)(uVar10 + 0x10);
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 - 1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar16 = puVar16 + 1;
    }
    F_005bfeb0(pvVar6 GEN_EDX_ARG,uVar10);
  }
  iVar12 = *(int *)(iVar13 + 8);
  if (iVar12 == 0) {
    if (*(int *)(iVar13 + 0xc) != 0) {
      iVar13 = *((int *)GEN_TOP((*(int *)(iVar13 + 0xc) + 0xfc)));
      goto LAB_0058bd30;
    }
  }
  else if (iVar12 == 1) {
    if (*(int *)(iVar13 + 0xc) != 0) {
      iVar13 = *((int *)GEN_TOP((*(int *)(iVar13 + 0xc) + 0x18)));
      goto LAB_0058bd30;
    }
  }
  else if (iVar12 == 2) {
    iVar13 = *(int *)(iVar13 + 0xc);
    goto LAB_0058bd30;
  }
  iVar13 = 0;
LAB_0058bd30: ;
  *(int *)((int)this + 0x210) = iVar13;
  if (iVar13 != 0) {
    *(undefined4 *)((int)this + 0x218) = *(undefined4 *)(iVar13 + 0x18);
    *(undefined4 *)((int)this + 0x21c) = *(undefined4 *)(iVar13 + 0x1c);
  }
  local_10 = 0;
  bVar15 = 1;
  do {
    fVar17 = (float10)(int)local_10;
    uVar10 = 0;
    if ((int)local_10 < 0) {
      fVar17 = fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    bVar8 = bVar15 + 0xc;
    fVar1 = (float)(fVar17 * (float10)*(double *)&REFG(undefined, 0x10a1918));
    fVar2 = (float)((float10)fVar1 + (float10)*(double *)&REFG(undefined, 0x10a1918));
    do {
      uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      fVar17 = (float10)*(double *)&REFG(undefined, 0x1094878);
      fVar18 = (float10)(int)uVar10;
      if ((int)uVar10 < 0) {
        fVar18 = fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      *(float *)((int)this + 0x1a4) = fVar1;
      fVar3 = (float)(fVar18 * fVar17);
      uVar11 = 1 << (bVar15 + 1 & 0x1f);
      *(float *)((int)this + 0x1a0) = fVar3;
      *(float *)((int)this + 0x1ac) = fVar2;
      *(float *)((int)this + 0x1a8) = fVar3;
      *(float *)((int)this + 0x1b4) = fVar2;
      fVar3 = (float)((float10)fVar3 + fVar17);
      *(float *)((int)this + 0x1b0) = fVar3;
      *(float *)((int)this + 0x1bc) = fVar1;
      *(float *)((int)this + 0x1b8) = fVar3;
      uVar7 = *(uint *)((int)this + 0x264);
      if ((uVar11 & uVar7) == 0) {
        uVar21 = uVar5;
        if ((*(uint *)((int)this + 0x260) & uVar11) != 0) {
          uVar21 = 0;
        }
      }
      else {
        uVar21 = *(undefined4 *)((int)this + 0x268);
      }
      uVar11 = 1 << (bVar15 & 0x1f);
      if ((uVar11 & uVar7) == 0) {
        uVar20 = uVar5;
        if ((*(uint *)((int)this + 0x260) & uVar11) != 0) {
          uVar20 = 0;
        }
      }
      else {
        uVar20 = *(undefined4 *)((int)this + 0x268);
      }
      uVar11 = 1 << (bVar15 - 1 & 0x1f);
      if ((uVar11 & uVar7) == 0) {
        uVar19 = 0;
        if ((*(uint *)((int)this + 0x260) & uVar11) == 0) {
          uVar19 = uVar5;
        }
      }
      else {
        uVar19 = *(undefined4 *)((int)this + 0x268);
      }
      *(undefined4 *)((int)this + 0x1f0) = uVar19;
      *(undefined4 *)((int)this + 500) = uVar20;
      *(undefined4 *)((int)this + 0x1f8) = uVar21;
      *(undefined4 *)((int)this + 0x1fc) = uVar5;
      F_00585cf0((undefined *)((int)this + 0x150) GEN_EDX_ARG,iVar4);
      uVar10 = uVar10 + 1;
      bVar15 = bVar15 + 3;
    } while (uVar10 < 4);
    local_10 = local_10 + 1;
    bVar15 = bVar8;
  } while (local_10 < 3);
  uVar5 = *(undefined4 *)((int)this + 0x140);
  *((uint *)GEN_TOP((*(int *)(iVar4 + 4) + 0x70))) = uVar9 & 0xffff;
  pvVar6 = *(undefined * PTR32 *)(iVar4 + 4);
  uVar9 = F_005bfe10(pvVar6 GEN_EDX_ARG,1,0x50,2);
  if (uVar9 != 0) {
    *(byte *)((int)pvVar6 + 0xa4) = *(byte *)((int)pvVar6 + 0xa4) & 0xfb;
    *(undefined4 *)(uVar9 + 0xc) = uVar5;
    *(undefined4 *)(uVar9 + 8) = 0;
    puVar14 = &REFG(undefined4, 0x1302d40);
    puVar16 = (undefined4 *)(uVar9 + 0x10);
    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar16 = puVar16 + 1;
    }
    F_005bfeb0(pvVar6 GEN_EDX_ARG,uVar9);
  }
  return 1;
}

/* ref: FUN_0058bf60 */
GEN_FRAME uint GEN_THISCALL F_0058bf60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58bf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  byte bVar2;
  int iVar3;
  uint in_EAX = 0;
  undefined1 * puVar4;
  
  if (*(char *)((int)this + 0xbc) != '\0') {
    bVar2 = *((byte *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x67)));
    ((undefined1 *)(gen_frame + 0x6))[1] = 0xff;
    ((undefined1 *)(gen_frame + 0x6))[0] = 0;
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(CONCAT22(gen_x87_cw,(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0))));
    (*(char *)(gen_frame + 0x0)) = (char)(int)TRUNC(((double)GEN_TOD(((uint)bVar2 * (uint)(*(undefined1 *)((char *)&REFG(undefined4, 0x131de68) + 3))))) /
                                *(double *)&REFG(undefined, 0x1088100));
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8)) + 3)) = (*(char *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(CONCAT13((*(char *)(gen_frame + 0x0)),GEN_PIECE(&(*(float *)(gen_frame + 0x8)), 0, 3)));
    if ((*(char *)(gen_frame + 0x0)) == -1) {
      puVar4 = ((undefined1 *)(gen_frame + 0x6)) + 1;
    }
    else {
      puVar4 = (undefined1 *)((int)&(*(float *)(gen_frame + 0x8)) + 3);
      if ((*(char *)(gen_frame + 0x0)) == '\0') {
        puVar4 = ((undefined1 *)(gen_frame + 0x6));
      }
    }
    *(undefined1 *)((int)this + 0x2eb) = *puVar4;
    iVar3 = *(int *)((int)this + 0x88);
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar3 + 0x34) - (float10)(int)*(short *)((int)this + 0x292))))
    ;
    (*(float *)(gen_frame + 0x8)) = fVar1;
    *(float *)((int)this + 0x2c8) =
         ((float)GEN_TOF(((float10)*(float *)(iVar3 + 0x30) - (float10)(int)*(short *)((int)this + 0x290))));
    *(float *)((int)this + 0x2cc) = fVar1;
    *(short *)((int)this + 0x2ec) = *(short *)((int)this + 0x30) << 6;
    in_EAX = F_00586530((undefined *)((int)this + 0x2c0) GEN_EDX_FWD,*(undefined4 *)(REFG(int, 0x1379860) + 4));
  }
  return in_EAX;
}

/* ref: Component::GUI2::AtkComponentMap::DiscoveryRenderer::vf4 */
GEN_FRAME uint GEN_THISCALL F_0058c050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x58c050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined * this_00;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  this_00 = *(undefined * PTR32 *)(this + 0xc);
  if (*(int *)((int)this_00 + 0x88) != param_1) {
    uVar5 = F_005849f0((undefined *)this GEN_EDX_FWD,param_1,param_2);
    return uVar5;
  }
  if (*(char *)((int)this_00 + 0xb9) == '\0') {
    F_005849f0((undefined *)this GEN_EDX_ARG,param_1,param_2);
    uVar5 = F_0058bf60(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_ARG);
    return uVar5;
  }
  if (*(int *)((int)this_00 + 0xac) != 0) {
    iVar1 = *(int *)((int)this_00 + 0xac) + 4;
    uVar5 = F_0056a740(iVar1 GEN_EDX_ARG);
    if (uVar5 != 0) {
      if (*(char *)((int)this_00 + 0xbb) != '\0') {
        bVar4 = F_0058bc40(this_00 GEN_EDX_ARG);
        if (bVar4 != 0) {
          *((undefined1 *)GEN_TOP((*(int *)(this + 0xc) + 0xbb))) = 0;
        }
      }
      uVar5 = REFG(undefined4, 0x1302378);
      iVar2 = *(int *)(REFG(int, 0x1379860) + 4);
      iVar3 = *(int *)(iVar2 + 4);
      uVar6 = F_0056a740(iVar1 GEN_EDX_ARG);
      *(uint *)(iVar3 + 0x7c) = uVar6;
      *(uint *)(iVar3 + 0x88) = uVar5 & 0xfffffff;
      iVar1 = *(int *)(iVar2 + 4);
      *(undefined4 *)(iVar1 + 0x80) = *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0x140)));
      *(uint *)(iVar1 + 0x8c) = uVar5 & 0xfffffff;
      F_005849f0((undefined *)this GEN_EDX_ARG,param_1,param_2);
    }
  }
  uVar5 = F_0058bf60(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_0058c140 */
GEN_FRAME unsigned int GEN_THISCALL F_0058c140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58c140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  if (this != (undefined *)0x0) {
    if (*(char *)((int)this + 0x20) != '\x02') {
      switch((unsigned int)(uintptr_t)(*(char *)((int)this + 0x20))) {
      case '\0': ;
      case '\x01': ;
        F_00584110(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,(*(int *)&gen_a1));
        return;
      case '\x02': ;
        if (*(int *)this != 0) {
          F_00584110(*(undefined * PTR32 *)(*(int *)this + 0x84) GEN_EDX_ARG,(*(int *)&gen_a1));
          return;
        }
switchD_0058c180_caseD_3: ;
        F_00584110(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,(*(int *)&gen_a1));
        return;
      case '\x03': ;
        goto switchD_0058c180_caseD_3;
      default: ;
        F_00584110((undefined *)0x0 GEN_EDX_ARG,(*(int *)&gen_a1));
        return;
      }
    }
    this_00 = *(undefined * PTR32 *)this;
    if (((this_00 != (undefined *)0x0) && (*(undefined * PTR32 *)((int)this_00 + 0x84) != (undefined *)0x0)) &&
       ((*(int *)&gen_a1) != 0)) {
      F_00584110(*(undefined * PTR32 *)((int)this_00 + 0x84) GEN_EDX_ARG,(*(int *)&gen_a1));
      F_005832e0(this_00 GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_0058c1d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0058c1d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58c1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int * PTR32 *)this;
  *(undefined1 *)((int)this + 0x10) = 0;
  if (piVar1 != *(int * PTR32 *)((int)this + 4)) {
    do {
      do {
        iVar2 = *piVar1;
        F_00c46e20(piVar1,piVar1 + 1,(*(int *)((int)this + 4) - (int)(piVar1 + 1) >> 2) * 4);
        *(int *)((int)this + 4) = *(int *)((int)this + 4) - 4;
      } while (iVar2 == 0);
      iVar3 = *(int *)(iVar2 + 4);
      if (iVar3 != 0) {
        F_00429760(iVar3,(*(int *)(iVar2 + 0xc) - iVar3 >> 2) * 4,400);
      }
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      F_00406ad0(iVar2);
    } while( true );
  }
  return;
}

/* ref: FUN_0058c250 */
GEN_FRAME uint GEN_THISCALL F_0058c250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58c250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined * this_00;
  
  iVar5 = 0;
  if (*(int *)((int)this + 4) != 0) {
    F_00406810(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(int *)this != 0) {
    iVar4 = 6;
    do {
      F_00557e00((undefined *)(iVar5 + *(int *)this) GEN_EDX_ARG);
      iVar5 = iVar5 + 0x150;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    iVar5 = *(int *)this;
    if (iVar5 != 0) {
      iVar4 = *(int *)(iVar5 - 4);
      this_00 = (undefined *)(iVar4 * 0x150 + iVar5);
      while (iVar4 = iVar4 - 1, -1 < iVar4) {
        this_00 = (undefined *)((int)this_00 - 0x150);
        F_0057e680(this_00 GEN_EDX_ARG);
      }
      F_00406b30(iVar5 - 4);
      *(undefined4 *)this = 0;
    }
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406810(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
    if (*(int *)((int)this + 0x14) != 0) {
      F_00406810(*(int *)((int)this + 0x14));
    }
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG);
    if (*(int *)((int)this + 0x10) != 0) {
      F_00406810(*(int *)((int)this + 0x10));
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    if (uVar3 != 0) {
      F_00406810(uVar3);
    }
  }
  if (*(int *)((int)this + 0x28) != 0) {
    F_00406810(*(int *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x2c) != 0) {
    uVar3 = F_00406810(*(int *)((int)this + 0x2c));
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return uVar3;
}

/* ref: FUN_0058c380 */
GEN_FRAME byte GEN_THISCALL F_0058c380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x58c380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int iVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint local_c;
  int * local_8;
  
  iVar3 = (int)param_1 + 0x10;
  *((int *)GEN_TOP((*(int *)(param_2 + 4) + 0x74))) = param_4;
  param_1 = (uint *)((int)((int)(uintptr_t)param_1) * 0x40 + 0x2a0 + (int)this);
  local_c = 0;
  if (*(short *)(param_3 + 0x6c) != 0) {
    local_8 = (int *)(param_3 + 0x24);
    iVar3 = iVar3 * 0x20 - (int)param_1;
    do {
      iVar1 = *(int *)((int)this + iVar3 + (int)param_1);
      if (iVar1 != 0) {
        iVar2 = *local_8;
        iVar4 = 0x122000;
        if ((*(uint *)((int)this + 0x50) & 0x4000000) != 0) {
          iVar4 = 0x122100;
        }
        if ((*(int *)(param_2 + 0x10) != iVar4) || (*(int *)(param_2 + 0x24) != iVar2)) {
          *(int *)(param_2 + 0x10) = iVar4;
          *(int *)(param_2 + 0x24) = iVar2;
          F_00577690(param_2 + 0x14,iVar4,iVar2);
        }
        this_00 = *(undefined * PTR32 *)(param_2 + 4);
        iVar1 = iVar1 * 4;
        if (*(int *)((int)this_00 + 0x74) == 1) {
          uVar7 = 1;
LAB_0058c461: ;
          uVar6 = F_005cc4d0(this_00 GEN_EDX_ARG,uVar7,0x22,iVar1,param_2 + 0x14);
        }
        else {
          if (*(int *)((int)this_00 + 0x74) == 2) {
            uVar7 = 2;
            goto LAB_0058c461;
          }
          uVar5 = F_005bfe10(this_00 GEN_EDX_ARG,0x22,0x24,0);
          uVar6 = 0;
          if (uVar5 != 0) {
            uVar6 = F_005c83b0(this_00 GEN_EDX_ARG,uVar5,0x22,iVar1,param_2 + 0x14);
          }
        }
        if (uVar6 == 0) {
          return 0;
        }
        if ((&REFG(undefined * PTR32, 0x10a0c2c))[(int)(param_4)] == (undefined *)0x1) {
          *param_1 = uVar6;
        }
        else if ((&REFG(undefined * PTR32, 0x10a0c2c))[(int)(param_4)] == (undefined *)0x2) {
          param_1[8] = uVar6;
        }
      }
      local_8 = local_8 + 1;
      param_1 = param_1 + 1;
      local_c = local_c + 1;
    } while (local_c < *(ushort *)(param_3 + 0x6c));
  }
  return 1;
}

/* ref: FUN_0058c4d0 */
GEN_FRAME uint GEN_THISCALL F_0058c4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x58c4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  short sVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042b630(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  sVar1 = (short)param_6;
  if ((short)param_6 == 0) {
    sVar1 = -1;
  }
  (*(short *)(gen_frame + 0x8)) = sVar1;
  (*(undefined1 *)(gen_frame + 0xc)) = (undefined1)param_4;
  (*(undefined2 *)(gen_frame + 0xa)) = 0xffff;
  (*(undefined1 *)(gen_frame + 0xd)) = (undefined1)param_5;
  (*(char *)(gen_frame + 0xf)) = (char)param_7;
  if ((char)param_7 == '\0') {
    (*(char *)(gen_frame + 0xf)) = -1;
  }
  (*(undefined1 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)(gen_frame + 0xe)) = 0;
  (*(undefined2 *)(gen_frame + 0x12)) = 0xffff;
  F_00586b50((undefined *)((int)this + 0x2224c) GEN_EDX_ARG,param_1,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x14)));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: Component::GUI2::AtkNineGridNodeRenderer::vf4 */
GEN_FRAME uint GEN_THISCALL F_0058c5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x58c5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    uVar1 = F_00584b60(this GEN_EDX_FWD,param_1);
  }
  else {
    uVar1 = (*(byte *)(param_1 + 0xa0) & 1) - 1;
    if (uVar1 == 0) {
      uVar1 = F_005850a0(this GEN_EDX_ARG,param_1);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_0058c5d0 */
GEN_NOFRAME uint GEN_THISCALL F_0058c5d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58c5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 8) != 0) {
      uVar3 = F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc) GEN_EDX_FWD,*(int *)((int)this + 8));
      if (uVar3 != 0) {
        return uVar3;
      }
      *(undefined4 *)((int)this + 8) = 0;
      return 0;
    }
  }
  else if (iVar1 == 1) {
    if (*(int *)((int)this + 8) != 0) {
      F_005881e0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x2c) GEN_EDX_ARG,*(int *)((int)this + 8));
      *(undefined4 *)((int)this + 8) = 0;
      return 0;
    }
  }
  else if ((iVar1 == 2) && (piVar2 = *(int * PTR32 *)((int)this + 8), piVar2 != (int *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_0058c640 */
GEN_FRAME unsigned int GEN_THISCALL F_0058c640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58c640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 4) != param_1) {
    F_0058c5d0(this GEN_EDX_FWD);
  }
  *(int *)((int)this + 4) = param_1;
  return;
}

/* ref: FUN_0058c660 */
GEN_FRAME uint GEN_THISCALL F_0058c660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x58c660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint * puVar7;
  uint uVar8;
  int iVar9;
  uint local_c;
  
  uVar5 = 0;
  if (*(int *)(param_2 + 4) != 0) {
    local_c = 0;
    iVar9 = param_3;
    do {
      iVar2 = *((int *)GEN_TOP((*(int *)(param_2 + 8) + local_c * 4)));
      iVar4 = param_3;
      if (((uVar5 != 0) &&
          ((((iVar3 = *((int *)GEN_TOP((*(int *)(param_2 + 8) + local_c * 4 - 4))), iVar3 != 0 &&
             (10000 < *(uint *)(iVar3 + 4))) || (iVar2 == 0)) ||
           (iVar4 = iVar9, *(uint *)(iVar2 + 4) < 0x2711)))) &&
         (((iVar4 = param_3, iVar3 != 0 && (10000 < *(uint *)(iVar3 + 4))) &&
          ((iVar2 == 0 || (*(uint *)(iVar2 + 4) < 0x2711)))))) {
        iVar4 = param_3 + (uint)*(ushort *)(param_3 + 0x18);
      }
      param_3 = iVar4;
      iVar9 = param_3;
      if (*(undefined * PTR32 *)((int)this + 0x28) != (undefined *)0x0) {
        uVar6 = F_00587f50(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_FWD,(uint)*(ushort *)(param_3 + 0x56));
        *(uint *)(iVar2 + 0x1c) = uVar6;
        if (uVar6 != 0) {
          *(int *)(uVar6 + 4) = iVar2;
        }
      }
      uVar1 = *(ushort *)(iVar2 + 0x18);
      if (999 < uVar1) {
        uVar6 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 8 + param_1)));
        if (uVar6 != 0) {
          puVar7 = ((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + param_1 + 0x10)));
          uVar8 = 0;
          if (uVar6 != 0) {
            do {
              if (*puVar7 == (uint)uVar1) {
                F_0058f840(((undefined *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 8) + local_c * 4))) + 0x8c)))
                                     + 4))) GEN_EDX_ARG,param_1,(uint)uVar1,param_4);
                break;
              }
              uVar8 = uVar8 + 1;
              puVar7 = (uint *)((int)puVar7 + (uint)(ushort)puVar7[3]);
            } while ((uVar8 & 0xffff) < uVar6);
          }
        }
      }
      if (*(uint *)(iVar2 + 4) < 0x2711) {
        param_3 = param_3 + (uint)*(ushort *)(param_3 + 0x18);
      }
      uVar5 = uVar5 + 1;
      local_c = (uint)uVar5;
    } while (local_c < *(uint *)(param_2 + 4));
  }
  return 0;
}

/* ref: FUN_0058c7c0 */
GEN_FRAME uint GEN_STDCALL F_0058c7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x58c7c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00404270();
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    uVar1 = F_00406bd0(0x8c,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_00570ce0(uVar1 GEN_EDX_ARG);
      return uVar1;
    }
    break;
  case 2: ;
    uVar1 = F_00406bd0(0x94,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005cccf0(uVar1 GEN_EDX_ARG);
      return uVar1;
    }
    break;
  case 3: ;
    uVar1 = F_00406bd0(0x11c,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005ccd20(uVar1 GEN_EDX_ARG);
      return uVar1;
    }
    break;
  case 4: ;
    uVar1 = F_00406bd0(0xa4,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005ccd60(uVar1 GEN_EDX_ARG);
      return uVar1;
    }
    break;
  case 5: ;
    uVar1 = F_00406bd0(0xf8,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005ccd90(uVar1 GEN_EDX_ARG);
      return uVar1;
    }
    break;
  case 6: ;
    uVar1 = F_00406bd0(0x148,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005cf450(uVar1 GEN_EDX_ARG);
      return uVar1;
    }
    break;
  case 7: ;
    uVar1 = F_00406bd0(0x138,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005cf490(uVar1 GEN_EDX_ARG);
      return uVar1;
    }
    break;
  case 8: ;
    uVar1 = F_00406bd0(0x9c,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005ccdd0(uVar1 GEN_EDX_ARG);
      return uVar1;
    }
    break;
  case 9: ;
    uVar1 = F_00406bd0(0x98,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005cce00(uVar1 GEN_EDX_ARG);
      return uVar1;
    }
    break;
  default: ;
    if (param_1 < 1000) {
      puVar2 = (undefined4 *)F_00406bd0(0x8c,0,uVar1,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
        goto LAB_0058c964;
      }
    }
    else {
      puVar2 = (undefined4 *)F_00406bd0(0x90,0,uVar1,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10a0f44));
LAB_0058c964: ;
        puVar2[2] = 0;
        puVar2[0x22] = 0;
        puVar2[0x21] = 0;
        puVar2[0x20] = 0;
        puVar2[7] = 0;
        return (uint)puVar2;
      }
    }
  }
  return 0;
}

/* ref: FUN_0058c9c0 */
GEN_FRAME uint GEN_THISCALL F_0058c9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58c9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (((*(byte *)((int)this + 0x5c) & 1) != 0) && (*(int *)((int)this + 8) != 0)) {
    iVar1 = **((int * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 8)));
    if (iVar1 != 0) {
      F_0057f0d0(this GEN_EDX_FWD,iVar1,*(undefined4 *)(iVar1 + 8),param_1);
    }
    return 0;
  }
  return 0xffffffff;
}

/* ref: Component::GUI2::AtkUnitBase::vf3 */
GEN_FRAME byte GEN_THISCALL F_0058ca00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x58ca00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  code * pcVar1;
  uint uVar2;
  
  *(uint *)(this + 0x120) = *(uint *)(this + 0x120) & 0xfff7ffff;
  uVar2 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if ((uVar2 != 3) && (uVar2 != 2)) {
    if ((((byte)this[0xf8] & 0x10) != 0) && ((*(uint *)(this + 0xf4) >> 0x10 & 0xf) != param_1)) {
      F_00587d10(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_FWD,this);
    }
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x14);
    *(uint *)(this + 0xf4) =
         *(uint *)(this + 0xf4) ^ (param_1 << 0x10 ^ *(uint *)(this + 0xf4)) & 0xf0000;
    (*pcVar1)(this,0);
    this[0xf8] = (undefined1)((byte)this[0xf8] & 0xbf);
  }
  return 1;
}

/* ref: FUN_0058ca80 */
GEN_FRAME byte GEN_THISCALL F_0058ca80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58ca80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
  if (((uVar1 == 3) || (uVar1 == 2)) && ((*(byte *)((int)this + 0xf8) & 0x80) == 0)) {
    if ((*(byte *)((int)this + 0xf9) & 1) == 0) {
      F_0056b870(this GEN_EDX_FWD);
      return 1;
    }
    F_00587890(this GEN_EDX_ARG,param_1);
    return 1;
  }
  return 0;
}

