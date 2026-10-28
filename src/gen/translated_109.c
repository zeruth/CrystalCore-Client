#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00a17740 */
GEN_FRAME uint F_00a17740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa17740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a16c40(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00a17770 */
GEN_FRAME uint F_00a17770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa17770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a16ce0(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00a177a0 */
GEN_FRAME uint F_00a177a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa177a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a16d40(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00a177d0 */
GEN_NOFRAME uint GEN_THISCALL F_00a177d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa177d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = *(int * PTR32 *)this;
  if ((*((byte *)GEN_TOP((*(int *)(*piVar1 + 4) + 0x14 + (int)piVar1))) & 2) != 0) {
    F_00a16e10(piVar1 GEN_EDX_FWD);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)this + 4))) + 0x38 + (int)*(int * PTR32 *)this)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf7 */
GEN_FRAME uint GEN_THISCALL F_00a17800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa17800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  undefined4 uVar4;
  undefined4 * PTR32 * ppuVar5;
  uint uVar6;
  int iVar7;
  undefined4 * PTR32 * PTR32 * pppuVar8;
  
  ppuVar5 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar6;
  if ((**(uint * PTR32 *)((int)this + 0x20) != 0) &&
     (uVar2 = **(uint * PTR32 *)((int)this + 0x20), uVar2 < **(int * PTR32 *)((int)this + 0x30) + uVar2)) {
    **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) - 1;
    pbVar3 = ((byte *)GEN_TOP(**(int * PTR32 *)((int)this + 0x20)));
    **(int * PTR32 *)((int)this + 0x20) = (int)(pbVar3 + 1);
    bVar1 = *pbVar3;
    F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_FWD);
    return (uint)bVar1;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return 0xffffffff;
  }
  if (**(int * PTR32 *)((int)this + 0x10) == (int)this + 0x48) {
    uVar4 = *(undefined4 *)((int)this + 0x40);
    **(int * PTR32 *)((int)this + 0x10) = *(int *)((int)this + 0x3c);
    **(undefined4 * PTR32 *)((int)this + 0x20) = uVar4;
    **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
  }
  if (*(int *)((int)this + 0x44) == 0) {
    uVar6 = F_00c48aef(*(undefined * PTR32 *)((int)this + 0x54));
    if (uVar6 == 0xffffffff) {
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return 0xffffffff;
    }
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar6 & 0xff;
  }
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 *)((uint)ppuVar5 & 0xffffff00);
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  iVar7 = F_00c48aef(*(undefined * PTR32 *)((int)this + 0x54));
  while (iVar7 != -1) {
    F_00a17030(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,1,iVar7);
    pppuVar8 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      pppuVar8 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 0x10))))
                      (*(int * PTR32 *)((int)this + 0x44) GEN_EDX_ARG,(int)this + 0x4c,pppuVar8,
                       (int)pppuVar8 + (*(int *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0x4)),&(*(byte *)(gen_frame + 0xb)),((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)),&(*(byte * PTR32 *)(gen_frame + 0x0)));
    if ((int)uVar6 < 0) break;
    if ((int)uVar6 < 2) {
      if ((*(byte * PTR32 *)(gen_frame + 0x0)) != &(*(byte *)(gen_frame + 0xb))) {
        pppuVar8 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
          pppuVar8 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
        }
        for (iVar7 = (int)pppuVar8 + ((*(int *)(gen_frame + 0x1c)) - (*(int *)(gen_frame + 0x4))); 0 < iVar7; iVar7 = iVar7 - 1) {
          F_00c50cf0((int)*(char *)(iVar7 - 1 + (*(int *)(gen_frame + 0x4))),*(undefined * PTR32 *)((int)this + 0x54));
        }
        F_00a16de0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
        return (uint)(*(byte *)(gen_frame + 0xb));
      }
      pppuVar8 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
      if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
        pppuVar8 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
      }
      F_00a15ee0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,0,(*(int *)(gen_frame + 0x4)) - (int)pppuVar8);
    }
    else {
      if (uVar6 != 3) break;
      if ((*(int *)(gen_frame + 0x1c)) != 0) {
        pppuVar8 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
          pppuVar8 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
        }
        F_00c4d027(&(*(byte *)(gen_frame + 0xb)),1,pppuVar8,1);
        F_00a16de0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
        return (uint)(*(byte *)(gen_frame + 0xb));
      }
    }
    iVar7 = F_00c48aef(*(undefined * PTR32 *)((int)this + 0x54));
  }
  F_00a16de0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 0xffffffff;
}

/* ref: FUN_00a17a20 */
GEN_FRAME uint GEN_THISCALL F_00a17a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa17a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a17190(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00a17a50 */
GEN_FRAME uint GEN_THISCALL F_00a17a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa17a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a15760(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a17a90 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a17a90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa17a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: FUN_00a17ae0 */
GEN_FRAME byte GEN_THISCALL F_00a17ae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa17ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar2;
  gen_size32 sVar3;
  gen_size32 _Count;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((*(int *)((int)this + 0x44) == 0) || (*(char *)((int)this + 0x49) == '\0')) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_FWD);
    return 1;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,0xffffffff);
  if (uVar1 == 0xffffffff) {
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return 0;
  }
  (*(undefined1 *)((char *)&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) = (undefined4 * PTR32 * PTR32 * PTR32 *)0x0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 8;
  (*(undefined1 *)(gen_frame + 0x14)) = 0;
  do {
    ppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar2 = &(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 0x18))))
                      (*(int * PTR32 *)((int)this + 0x44) GEN_EDX_ARG,(int)this + 0x4c,ppppuVar2,
                       (int)ppppuVar2 + (*(int *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0x8)));
    if (uVar1 == 0) {
      *(undefined1 *)((int)this + 0x49) = 0;
    }
    else if (uVar1 != 1) {
      if (uVar1 != 3) goto LAB_00a17b87;
LAB_00a17c02: ;
      F_00a16de0(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return 1;
    }
    ppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar2 = &(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    _Count = (*(int *)(gen_frame + 0x8)) - (int)ppppuVar2;
    if (_Count != 0) {
      ppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
      if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
        ppppuVar2 = &(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
      }
      sVar3 = F_00c4922b(ppppuVar2,1,_Count,*(undefined * PTR32 *)((int)this + 0x54));
      if (_Count != sVar3) {
LAB_00a17b87: ;
        F_00a16de0(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
        return 0;
      }
    }
    if (*(char *)((int)this + 0x49) == '\0') goto LAB_00a17c02;
    if (_Count == 0) {
      F_00a17030(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,8,0);
    }
  } while( true );
}

/* ref: FUN_00a17c30 */
GEN_FRAME unsigned int GEN_STDCALL F_00a17c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa17c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x594)) {
    F_00a135d0(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a17c60 */
GEN_FRAME unsigned int GEN_THISCALL F_00a17c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa17c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00a16b20(param_1,param_2,(int)this + 0xc,param_2);
  return;
}

/* ref: FUN_00a17c80 */
GEN_FRAME unsigned int GEN_STDCALL F_00a17c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa17c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0xfc)) {
    F_0042c880((undefined *)((int)this + 0xa8) GEN_EDX_ARG);
    F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a17cc0 */
GEN_FRAME uint GEN_THISCALL F_00a17cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa17cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x18,0,400);
    F_00a15810(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,400);
    }
    *(uint *)((int)this + 8) = param_1 * 0x18 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0x18) * 0x18;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a17d90 */
GEN_NOFRAME uint GEN_THISCALL F_00a17d90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa17d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a174c0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a17dc0 */
GEN_FRAME uint F_00a17dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa17dc0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  byte bVar2;
  int * piVar3;
  undefined * this;
  int * piVar4;
  byte * pbVar5;
  char * pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  
  (*(uint *)(gen_frame + 0x18)) = 0;
  pcVar6 = param_2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar7 = (int)pcVar6 - (int)(param_2 + 1);
  iVar9 = *(int *)(*param_1 + 4);
  iVar8 = *(int *)(iVar9 + 0x24 + (int)param_1);
  uVar10 = *(uint *)(iVar9 + 0x20 + (int)param_1);
  if ((iVar8 < 0) ||
     ((((iVar8 < 1 && (uVar10 == 0)) || (iVar8 < 0)) || ((iVar8 < 1 && (uVar10 <= uVar7)))))) {
    iVar8 = 0;
    (*(int *)(gen_frame + 0x10)) = 0;
  }
  else {
    iVar8 = iVar8 - (uint)(uVar10 < uVar7);
    (*(int *)(gen_frame + 0x10)) = uVar10 - uVar7;
  }
  piVar3 = *(int * PTR32 *)(iVar9 + 0x38 + (int)param_1);
  (*(uint *)(gen_frame + 0x14)) = iVar8;
  if (piVar3 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
  }
  if ((*((int *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) == 0) &&
     (this = *((undefined * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x3c + (int)param_1))), this != (undefined *)0x0)) {
    F_00a16e10(this GEN_EDX_ARG);
  }
  if (*((int *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) == 0) {
    if (((*((uint *)GEN_TOP((*(int *)(*param_1 + 4) + 0x14 + (int)param_1))) & 0x1c0) != 0x40) &&
       (-1 < (int)(*(uint *)(gen_frame + 0x14)))) {
      if (0 < (int)(*(uint *)(gen_frame + 0x14))) goto LAB_00a17e72;
      do {
        if ((*(int *)(gen_frame + 0x10)) == 0) break;
LAB_00a17e72: ;
        do {
          piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
          bVar2 = *((byte *)GEN_TOP((*(int *)(*param_1 + 4) + 0x40 + (int)param_1)));
          if ((*(int *)piVar3[9] == 0) || (piVar4 = (int *)piVar3[0xd], *piVar4 < 1)) {
            uVar10 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,(uint)bVar2);
          }
          else {
            *piVar4 = *piVar4 - 1;
            pbVar5 = *(byte * PTR32 *)piVar3[9];
            *(byte * PTR32 *)piVar3[9] = pbVar5 + 1;
            *pbVar5 = bVar2;
            uVar10 = (uint)bVar2;
          }
          if (uVar10 == 0xffffffff) goto LAB_00a17f57;
          bVar11 = (*(int *)(gen_frame + 0x10)) != 0;
          (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) - 1;
          iVar9 = (*(uint *)(gen_frame + 0x14)) - 1 + (uint)bVar11;
          (*(uint *)(gen_frame + 0x14)) = iVar9;
        } while (0 < iVar9);
      } while (-1 < iVar9);
    }
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
    uVar12 = ((gen_lcode *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_2,uVar7,0);
    if (((uint)uVar12 == uVar7) && ((int)((ulonglong)uVar12 >> 0x20) == 0)) {
      if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
        uVar10 = (*(uint *)(gen_frame + 0x14));
        if (0 < (int)(*(uint *)(gen_frame + 0x14))) goto LAB_00a17f00;
        do {
          if ((*(int *)(gen_frame + 0x10)) == 0) break;
LAB_00a17f00: ;
          do {
            piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
            bVar2 = *((byte *)GEN_TOP(((int)param_1 + *(int *)(*param_1 + 4) + 0x40)));
            if ((*(int *)piVar3[9] == 0) || (piVar4 = (int *)piVar3[0xd], *piVar4 < 1)) {
              uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,(uint)bVar2);
            }
            else {
              *piVar4 = *piVar4 - 1;
              pbVar5 = *(byte * PTR32 *)piVar3[9];
              *(byte * PTR32 *)piVar3[9] = pbVar5 + 1;
              *pbVar5 = bVar2;
              uVar7 = (uint)bVar2;
            }
            if (uVar7 == 0xffffffff) goto LAB_00a17f57;
            bVar11 = (*(int *)(gen_frame + 0x10)) != 0;
            (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) - 1;
            uVar10 = uVar10 - 1 + (uint)bVar11;
          } while (0 < (int)uVar10);
        } while (-1 < (int)uVar10);
      }
    }
    else {
LAB_00a17f57: ;
      (*(uint *)(gen_frame + 0x18)) = 4;
    }
    iVar9 = *(int *)(*param_1 + 4);
    *(undefined4 *)(iVar9 + 0x20 + (int)param_1) = 0;
    *(undefined4 *)(iVar9 + 0x24 + (int)param_1) = 0;
    uVar10 = (*(uint *)(gen_frame + 0x18));
  }
  else {
    uVar10 = 4;
  }
  iVar9 = *(int *)(*param_1 + 4);
  if (uVar10 != 0) {
    uVar10 = *(uint *)((int)param_1 + iVar9 + 0xc) | uVar10;
    if (*(int *)((int)param_1 + iVar9 + 0x38) == 0) {
      uVar10 = uVar10 | 4;
    }
    *(uint *)((int)param_1 + iVar9 + 0xc) = uVar10 & 0x17;
    uVar10 = *(uint *)((int)param_1 + iVar9 + 0x10) & uVar10 & 0x17;
    if (uVar10 != 0) {
      if ((uVar10 & 4) == 0) {
        if ((uVar10 & 2) == 0) {
          uVar10 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::eofbit set";
        }
        else {
          uVar10 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::failbit set";
        }
      }
      else {
        uVar10 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::badbit set";
      }
      (*(int *)(gen_frame + 0x10)) = 1;
      (*(uint *)(gen_frame + 0x14)) = uVar10;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)(*param_1 + 4) + 0x14 + (int)param_1))) & 2) != 0) {
    F_00a16e10(param_1 GEN_EDX_ARG);
  }
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar3 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
  }
  return (uint)param_1;
}

/* ref: FUN_00a18020 */
GEN_FRAME uint GEN_STDCALL F_00a18020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa18020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00a140b0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x594);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a18060 */
GEN_FRAME uint GEN_THISCALL F_00a18060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa18060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a16c40(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00a18090 */
GEN_FRAME uint GEN_THISCALL F_00a18090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa18090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a16ce0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00a180c0 */
GEN_FRAME uint GEN_THISCALL F_00a180c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa180c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a16d40(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00a180f0 */
GEN_FRAME uint GEN_THISCALL F_00a180f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa180f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[3]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  this_00 = (*(int * PTR32 *)&gen_args[3]) + 3;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    F_00a168c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]) + 3);
    if (bVar3 != 0) {
      F_00a168c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    bVar3 = F_0042c7c0((undefined *)(piVar1[2] + 0xc) GEN_EDX_ARG,this_00);
    if (bVar3 != 0) {
      F_00a168c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]) + 3);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00a14310(&(*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
      bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[3]) + 3 GEN_EDX_ARG,this_00);
      if (bVar3 != 0) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x65))) == '\0') {
          F_00a168c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00a168c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[2]) + 3 GEN_EDX_ARG,this_00);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00a150f0(&(*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) ||
         (bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[3]) + 3), bVar3 != 0)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x65))) == '\0') {
          F_00a168c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00a168c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar4 = (undefined4 *)F_00a175a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar4;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a18290 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a18290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa18290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf3 */
GEN_FRAME uint GEN_THISCALL F_00a182e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa182e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  char * pcVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar8;
  gen_size32 sVar9;
  char cVar10;
  gen_size32 _Count;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar5;
  uVar6 = 0;
  if (param_1 != 0xffffffff) {
    cVar10 = (char)param_1;
    if ((**(uint * PTR32 *)((int)this + 0x24) != 0) &&
       (piVar1 = *(int * PTR32 *)((int)this + 0x34), uVar6 = **(uint * PTR32 *)((int)this + 0x24),
       uVar6 < *piVar1 + uVar6)) {
      *piVar1 = *piVar1 - 1;
      pcVar2 = ((char *)GEN_TOP(**(int * PTR32 *)((int)this + 0x24)));
      **(int * PTR32 *)((int)this + 0x24) = (int)(pcVar2 + 1);
      *pcVar2 = cVar10;
      F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_FWD);
      return param_1;
    }
    if (*(int *)((int)this + 0x54) != 0) {
      if (**(int * PTR32 *)((int)this + 0x10) == (int)this + 0x48) {
        uVar3 = *(undefined4 *)((int)this + 0x40);
        **(int * PTR32 *)((int)this + 0x10) = *(int *)((int)this + 0x3c);
        **(undefined4 * PTR32 *)((int)this + 0x20) = uVar3;
        **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
      }
      if (*(int *)((int)this + 0x44) == 0) {
        iVar7 = F_00c50a15((int)cVar10,*(undefined * PTR32 *)((int)this + 0x54));
        if (iVar7 != -1) {
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
          return param_1;
        }
      }
      else {
        (*(undefined1 *)((char *)&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) + 0)) = 0;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = cVar10;
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),cVar10);
        (*(uint *)(gen_frame + 0x20)) = 0xf;
        (*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) = (undefined4 * PTR32 * PTR32 * PTR32 *)0x0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = 8;
        (*(undefined1 *)(gen_frame + 0x14)) = 0;
        while( true ) {
          do {
            ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
              ppppuVar8 = &(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            }
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 0x14))))
                              (*(int * PTR32 *)((int)this + 0x44) GEN_EDX_ARG,(int)this + 0x4c,&(*(undefined4 *)(gen_frame + 0x8)),
                               (int)&(*(undefined4 *)(gen_frame + 0x8)) + 1,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),ppppuVar8,(int)ppppuVar8 + (*(uint *)(gen_frame + 0x1c)),
                               &(*(int *)(gen_frame + 0x4)));
            if ((int)uVar5 < 0) goto LAB_00a184e3;
            if (1 < (int)uVar5) {
              if (uVar5 == 3) {
                bVar4 = F_00a15d00((*(undefined4 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x54));
                if (bVar4 != 0) {
                  F_00a16de0(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
                  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
                  return param_1;
                }
                F_00a16de0(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
                F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
                return 0xffffffff;
              }
              goto LAB_00a184e3;
            }
            ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
              ppppuVar8 = &(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            }
            _Count = (*(int *)(gen_frame + 0x4)) - (int)ppppuVar8;
            if (_Count != 0) {
              ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
              if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
                ppppuVar8 = &(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
              }
              sVar9 = F_00c4922b(ppppuVar8,1,_Count,*(undefined * PTR32 *)((int)this + 0x54));
              if (_Count != sVar9) goto LAB_00a184e3;
            }
            *(undefined1 *)((int)this + 0x49) = 1;
            if ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != &(*(undefined4 *)(gen_frame + 0x8))) {
              F_00a16de0(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
              F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
              return param_1;
            }
          } while (_Count != 0);
          if (0x1f < (*(uint *)(gen_frame + 0x1c))) break;
          F_00a17030(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,8,0);
        }
LAB_00a184e3: ;
        F_00a16de0(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      }
    }
    uVar6 = 0xffffffff;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar6;
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf10 */
GEN_FRAME uint GEN_THISCALL F_00a18500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa18500u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (*(int *)&gen_args[2]);
  iVar4 = (*(int *)&gen_args[3]);
  if (((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) == (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48) && ((*(int *)&gen_args[4]) == 1)) &&
     (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) == 0)) {
    iVar3 = (*(int *)&gen_args[2]) - 1;
    iVar4 = (*(int *)&gen_args[3]) - 1 + (uint)((*(int *)&gen_args[2]) != 0);
  }
  if ((((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) != 0) && (bVar2 = F_00a17ae0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD), bVar2 != 0)) &&
      (((iVar3 == 0 && iVar4 == 0 && ((*(int *)&gen_args[4]) == 1)) ||
       (iVar3 = F_00c5112c(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))),iVar3,iVar4,(*(int *)&gen_args[4])), iVar3 == 0)))) &&
     (iVar3 = F_00c51035(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))),(longlong *)&(*(int *)&gen_args[2])), iVar3 == 0)) {
    if (**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) == (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48) {
      uVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)));
      **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
      **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = uVar1;
      **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
    }
    (*(undefined4 * PTR32 *)&gen_args[1])[2] = (*(int *)&gen_args[2]);
    uVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
    (*(undefined4 * PTR32 *)&gen_args[1])[1] = 0;
    (*(undefined4 * PTR32 *)&gen_args[1])[3] = (*(int *)&gen_args[3]);
    (*(undefined4 * PTR32 *)&gen_args[1])[4] = uVar1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  uVar1 = REFG(undefined4, 0x1118760);
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = REFG(undefined4, 0x1118764);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = uVar1;
  (*(undefined4 * PTR32 *)&gen_args[1])[2] = 0;
  (*(undefined4 * PTR32 *)&gen_args[1])[3] = 0;
  (*(undefined4 * PTR32 *)&gen_args[1])[4] = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf11 */
GEN_FRAME uint GEN_THISCALL F_00a185f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa185f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  
  (*(undefined4 *)(gen_frame + 0x8)) = param_5;
  (*(undefined4 *)(gen_frame + 0x4)) = param_4;
  if ((((*(int *)((int)this + 0x54) != 0) && (bVar2 = F_00a17ae0(this GEN_EDX_FWD), bVar2 != 0)) &&
      (iVar3 = F_00c511ab(*(undefined * PTR32 *)((int)this + 0x54),(longlong *)&(*(undefined4 *)(gen_frame + 0x4))), iVar3 == 0)) &&
     (((param_2 == 0 && (*(int *)&gen_a3) == 0 ||
       (iVar3 = F_00c5112c(*(undefined4 *)((int)this + 0x54),param_2,(*(int *)&gen_a3),1), iVar3 == 0)) &&
      (iVar3 = F_00c51035(*(undefined * PTR32 *)((int)this + 0x54),(longlong *)&(*(undefined4 *)(gen_frame + 0x4))), iVar3 == 0)))) {
    *(undefined4 *)((int)this + 0x4c) = param_6;
    F_00a14ea0(this GEN_EDX_ARG);
    param_1[2] = (*(undefined4 *)(gen_frame + 0x4));
    uVar1 = *(undefined4 *)((int)this + 0x4c);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = (*(undefined4 *)(gen_frame + 0x8));
    param_1[4] = uVar1;
    return (uint)param_1;
  }
  *param_1 = REFG(undefined4, 0x1118760);
  param_1[1] = REFG(undefined4, 0x1118764);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a186d0 */
GEN_FRAME uint GEN_THISCALL F_00a186d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa186d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  if (param_2 != param_3) {
    pvVar2 = (undefined *)F_00a15470(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (this_00 = pvVar2; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x594)) {
      F_00a135d0(this_00 GEN_EDX_ARG);
    }
    *(undefined * PTR32 *)((int)this + 4) = pvVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a18740 */
GEN_NOFRAME uint GEN_THISCALL F_00a18740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa18740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x594)) {
      F_00a135d0(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x594) * 0x594,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00a187a0 */
GEN_FRAME uint GEN_THISCALL F_00a187a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa187a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a155e0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_00a16b20(uVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a187f0 */
GEN_FRAME uint GEN_THISCALL F_00a187f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa187f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00a16b20(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x1f8) * 0x1f8,400
                        );
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a18860 */
GEN_FRAME uint GEN_THISCALL F_00a18860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa18860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a15680(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_00a17c80(uVar1,*(undefined4 *)((int)this + 4));
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a188b0 */
GEN_NOFRAME uint GEN_THISCALL F_00a188b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa188b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00a17c80(*(int *)this,*(undefined4 *)((int)this + 4));
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0xfc) * 0xfc,400);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a18910 */
GEN_FRAME uint GEN_THISCALL F_00a18910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa18910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a156e0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_00485e30(uVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a18960 */
GEN_FRAME uint GEN_THISCALL F_00a18960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa18960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a17cc0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a17cc0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a189f0 */
GEN_NOFRAME uint GEN_THISCALL F_00a189f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa189f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined * pvVar4;
  
  if (*(int *)((int)this + 0x54) != 0) {
    bVar2 = F_00a17ae0(this GEN_EDX_FWD);
    pvVar4 = this;
    if (bVar2 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    iVar3 = F_00c49312(*(undefined * PTR32 *)((int)this + 0x54));
    if (iVar3 == 0) goto LAB_00a18a1a;
  }
  pvVar4 = (undefined *)0x0;
LAB_00a18a1a: ;
  *(int *)((int)this + 0x10) = (int)this + 8;
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x49) = 0;
  *(int *)((int)this + 0x20) = (int)this + 0x18;
  *(int *)((int)this + 0x24) = (int)this + 0x1c;
  *(undefined4 * PTR32 *)((int)this + 0x14) = (undefined4 *)((int)this + 0xc);
  *(int *)((int)this + 0x30) = (int)this + 0x28;
  *(int *)((int)this + 0x34) = (int)this + 0x2c;
  *(undefined4 *)((int)this + 0xc) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x24) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x34) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x20) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  uVar1 = REFG(undefined4, 0x14a266c);
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  return (uint)pvVar4;
}

/* ref: FUN_00a18a80 */
GEN_FRAME uint GEN_THISCALL F_00a18a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa18a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x594;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x594,0,400);
    F_00a18020(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x594)) {
        F_00a135d0(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x594) * 0x594,400);
    }
    *(uint *)((int)this + 4) = (((int)pvVar1 - iVar2) / 0x594) * 0x594 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x594 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a18b80 */
GEN_FRAME uint GEN_THISCALL F_00a18b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa18b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x1f8;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x1f8,0,400);
    F_00a16c40(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00a16b20(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x1f8) * 0x1f8,
                   400);
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x1f8) * 0x1f8 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x1f8 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a18c70 */
GEN_FRAME uint GEN_THISCALL F_00a18c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa18c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0xfc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xfc,0,400);
    F_00a16ce0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00a17c80(*(int *)this,*(undefined4 *)((int)this + 4));
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0xfc) * 0xfc,400)
      ;
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0xfc) * 0xfc + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0xfc + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a18d50 */
GEN_FRAME uint GEN_THISCALL F_00a18d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa18d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x150;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x150,0,400);
    F_00a16d40(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00485e30(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x150) * 0x150,400);
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x150) * 0x150 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x150 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a18e30 */
GEN_FRAME uint GEN_THISCALL F_00a18e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa18e30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a174c0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x65) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x65) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x65);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x65);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x65);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x65);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a17260(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a18ef0 */
GEN_FRAME uint GEN_THISCALL F_00a18ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa18ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x68,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x19) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3 GEN_EDX_ARG,param_3);
    puVar1[0x18] = *(undefined4 *)(param_3 + 0x54);
  }
  F_00a180f0(this GEN_EDX_ARG,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00a18f70 */
GEN_FRAME uint GEN_THISCALL F_00a18f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa18f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a186d0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a18fa0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a18fa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa18fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this != iVar1) {
    uVar2 = F_00a155e0(iVar1,iVar1,*(int *)this,this);
    F_00a16b20(uVar2,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    *(uint *)((int)this + 4) = uVar2;
  }
  return;
}

/* ref: FUN_00a18ff0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a18ff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa18ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this != iVar1) {
    uVar2 = F_00a15680(iVar1,iVar1,*(int *)this,this);
    F_00a17c80(uVar2,*(undefined4 *)((int)this + 4));
    *(uint *)((int)this + 4) = uVar2;
  }
  return;
}

/* ref: FUN_00a19030 */
GEN_FRAME unsigned int GEN_THISCALL F_00a19030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa19030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this != iVar1) {
    uVar2 = F_00a156e0(iVar1,iVar1,*(int *)this,this);
    F_00485e30(uVar2,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    *(uint *)((int)this + 4) = uVar2;
  }
  return;
}

/* ref: FUN_00a19070 */
GEN_FRAME uint GEN_THISCALL F_00a19070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa19070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  uVar2 = (int)(uVar1 - *(int *)this) / 0x18;
  if (param_1 < uVar2) {
    uVar2 = *(int *)this + param_1 * 0x18;
    if (uVar2 != uVar1) {
      uVar2 = F_00a15760(uVar1,uVar1,uVar2,param_1);
      *(uint *)((int)this + 4) = uVar2;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00a18960(this GEN_EDX_ARG,param_1 - uVar2);
    F_00a16720(*(int *)((int)this + 4),param_1 - (*(int *)((int)this + 4) - *(int *)this) / 0x18,0
                 ,(int)this + 0xc);
    uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
    *(uint *)((int)this + 4) = *(int *)((int)this + 4) + (param_1 - uVar2) * 0x18;
  }
  return uVar2;
}

/* ref: FUN_00a19120 */
GEN_FRAME unsigned int GEN_THISCALL F_00a19120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa19120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096ef20(this GEN_EDX_FWD,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
      return;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096ef20(this GEN_EDX_ARG,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return;
}

/* ref: FUN_00a191a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a191a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa191a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096ef20(this GEN_EDX_FWD,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
      return;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096ef20(this GEN_EDX_ARG,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return;
}

/* ref: FUN_00a19220 */
GEN_FRAME uint GEN_THISCALL F_00a19220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa19220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  byte bVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  puVar3 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar3 + 0x65);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar2 = F_0042c7c0(puVar3 + 3 GEN_EDX_FWD,param_1);
    if (bVar2 == 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar3;
      puVar3 = (undefined4 *)*puVar3;
    }
    else {
      puVar3 = (undefined4 *)puVar3[2];
    }
    cVar1 = *(char *)((int)puVar3 + 0x65);
  }
  if (((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar2 = F_0042c7c0(param_1 GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 3), bVar2 == 0)) {
    puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x18;
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return (uint)puVar3;
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,param_1);
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  puVar3 = (undefined4 *)F_004296a0(0x68,0,400);
  *puVar3 = *(undefined4 *)((int)this + 4);
  puVar3[1] = *(undefined4 *)((int)this + 4);
  puVar3[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar3 + 0x19) = 0;
  if (puVar3 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar3 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
    puVar3[0x18] = (*(undefined4 *)(gen_frame + 0x64));
  }
  F_00a180f0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc)),puVar3);
  puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (uint)(puVar3 + 0x18);
}

/* ref: FUN_00a19320 */
GEN_NOFRAME uint GEN_THISCALL F_00a19320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa19320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10e3714));
  if ((*(int *)((int)this + 0x54) != 0) && (**(int * PTR32 *)((int)this + 0x10) == (int)this + 0x48)) {
    uVar1 = *(undefined4 *)((int)this + 0x40);
    **(int * PTR32 *)((int)this + 0x10) = *(int *)((int)this + 0x3c);
    **(undefined4 * PTR32 *)((int)this + 0x20) = uVar1;
    **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
  }
  if (*(char *)((int)this + 0x50) != '\0') {
    F_00a189f0(this GEN_EDX_FWD);
  }
  uVar2 = F_00479ae0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a19370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa19370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10e3714));
  if ((*(int *)((int)this + 0x54) != 0) && (**(int * PTR32 *)((int)this + 0x10) == (int)this + 0x48)) {
    uVar1 = *(undefined4 *)((int)this + 0x40);
    **(int * PTR32 *)((int)this + 0x10) = *(int *)((int)this + 0x3c);
    **(undefined4 * PTR32 *)((int)this + 0x20) = uVar1;
    **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
  }
  if (*(char *)((int)this + 0x50) != '\0') {
    F_00a189f0(this GEN_EDX_FWD);
  }
  F_00479ae0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a193d0 */
GEN_FRAME uint GEN_THISCALL F_00a193d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa193d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x594;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x594;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a18a80(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a18a80(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a19460 */
GEN_FRAME uint GEN_THISCALL F_00a19460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa19460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x1f8;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1f8;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a18b80(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a18b80(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a194f0 */
GEN_FRAME uint GEN_THISCALL F_00a194f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa194f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xfc;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xfc;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a18c70(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a18c70(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a19580 */
GEN_FRAME uint GEN_THISCALL F_00a19580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa19580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x150;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x150;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a18d50(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a18d50(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a19610 */
GEN_FRAME uint GEN_THISCALL F_00a19610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa19610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a18e30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a19630 */
GEN_FRAME unsigned int GEN_THISCALL F_00a19630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa19630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a193d0(this GEN_EDX_FWD,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a140b0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x594) * 0x594 + *(int *)this
                  );
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x594;
      return;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a193d0(this GEN_EDX_ARG,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a140b0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x594;
  return;
}

/* ref: FUN_00a196c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a196c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa196c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a19460(this GEN_EDX_FWD,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a141f0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x1f8) * 0x1f8 + *(int *)this
                  );
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x1f8;
      return;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a19460(this GEN_EDX_ARG,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a141f0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x1f8;
  return;
}

/* ref: FUN_00a19750 */
GEN_FRAME unsigned int GEN_THISCALL F_00a19750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa19750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar1 = *(uint *)this, uVar1 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_00a194f0(this GEN_EDX_FWD,1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    uVar2 = ((int)(param_1 - uVar1) / 0xfc) * 0xfc + *(int *)this;
    if (this_00 == (undefined *)0x0) goto LAB_00a197e3;
    F_0042cbc0(this_00 GEN_EDX_ARG,uVar2);
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_00a194f0(this GEN_EDX_ARG,1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    if (this_00 == (undefined *)0x0) goto LAB_00a197e3;
    F_0042cbc0(this_00 GEN_EDX_ARG,param_1);
    uVar2 = param_1;
  }
  F_0042cbc0((undefined *)((int)this_00 + 0x54) GEN_EDX_ARG,uVar2 + 0x54);
  F_0042cbc0((undefined *)((int)this_00 + 0xa8) GEN_EDX_ARG,uVar2 + 0xa8);
LAB_00a197e3: ;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xfc;
  return;
}

/* ref: FUN_00a19800 */
GEN_FRAME unsigned int GEN_THISCALL F_00a19800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa19800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar1 = *(uint *)this, uVar1 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_00a19580(this GEN_EDX_FWD,1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    uVar2 = ((int)(param_1 - uVar1) / 0x150) * 0x150 + *(int *)this;
    if (this_00 == (undefined *)0x0) goto LAB_00a198b2;
    F_0042cbc0(this_00 GEN_EDX_ARG,uVar2);
    F_0042cbc0((undefined *)((int)this_00 + 0x54) GEN_EDX_ARG,uVar2 + 0x54);
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_00a19580(this GEN_EDX_ARG,1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    if (this_00 == (undefined *)0x0) goto LAB_00a198b2;
    F_0042cbc0(this_00 GEN_EDX_ARG,param_1);
    F_0042cbc0((undefined *)((int)this_00 + 0x54) GEN_EDX_ARG,param_1 + 0x54);
    uVar2 = param_1;
  }
  F_0042cbc0((undefined *)((int)this_00 + 0xa8) GEN_EDX_ARG,uVar2 + 0xa8);
  F_0042cbc0((undefined *)((int)this_00 + 0xfc) GEN_EDX_ARG,uVar2 + 0xfc);
LAB_00a198b2: ;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x150;
  return;
}

/* ref: FUN_00a198c0 */
GEN_FRAME uint GEN_THISCALL F_00a198c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa198c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a18e30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x68,400);
  return (uint)uVar1;
}

/* ref: FUN_00a19900 */
GEN_FRAME uint GEN_THISCALL F_00a19900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa19900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if (param_4 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x10e3768);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  this_00 = (undefined4 *)((int)this + 4);
  F_00483f60(((undefined *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))) GEN_EDX_FWD,this_00,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e3764));
  F_00479880(this_00 GEN_EDX_ARG);
  *(int *)((int)this + 0x14) = (int)this + 0xc;
  *this_00 = (*(undefined * PTR32 (*)[15])REFP(0x10e3714));
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x4d) = 0;
  *(int *)((int)this + 0x24) = (int)this + 0x1c;
  *(int *)((int)this + 0x28) = (int)this + 0x20;
  *(undefined4 * PTR32 *)((int)this + 0x18) = (undefined4 *)((int)this + 0x10);
  *(int *)((int)this + 0x34) = (int)this + 0x2c;
  *(int *)((int)this + 0x38) = (int)this + 0x30;
  *(undefined4 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x28) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x38) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x14) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x24) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x14a266c);
  *(undefined4 *)((int)this + 0x48) = 0;
  uVar2 = F_00a170e0(this_00 GEN_EDX_ARG,param_1,param_2 | 2,param_3);
  if (uVar2 == 0) {
    iVar1 = *(int *)(*(int *)this + 4);
    uVar2 = *(uint *)(iVar1 + 0xc + (int)this);
    uVar3 = uVar2 | 2;
    if (*(int *)((int)this + iVar1 + 0x38) == 0) {
      uVar3 = uVar2 | 6;
    }
    *(uint *)((int)this + iVar1 + 0xc) = uVar3 & 0x17;
    uVar2 = *(uint *)((int)this + iVar1 + 0x10) & uVar3 & 0x17;
    if (uVar2 != 0) {
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 2) == 0) {
          uVar2 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::eofbit set";
        }
        else {
          uVar2 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::failbit set";
        }
      }
      else {
        uVar2 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      (*(uint *)(gen_frame + 0x14)) = uVar2;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    }
  }
  return (uint)this;
}

/* ref: FUN_00a19a40 */
GEN_NOFRAME uint GEN_THISCALL F_00a19a40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa19a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this - 0x60) + 4))) - 0x60 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e3764));
  *(undefined * PTR32 * PTR32 *)((int)this - 0x5c) = (*(undefined * PTR32 (*)[15])REFP(0x10e3714));
  if ((*(int *)((int)this - 8) != 0) && (**(int * PTR32 *)((int)this - 0x4c) == (int)this - 0x14)) {
    uVar1 = *(undefined4 *)((int)this - 0x1c);
    **(int * PTR32 *)((int)this - 0x4c) = *(int *)((int)this - 0x20);
    **(undefined4 * PTR32 *)((int)this - 0x3c) = uVar1;
    **(undefined4 * PTR32 *)((int)this - 0x2c) = 0;
  }
  if (*(char *)((int)this - 0xc) != '\0') {
    F_00a189f0((undefined *)((int)this - 0x5c) GEN_EDX_FWD);
  }
  F_00479ae0((undefined *)((int)this - 0x5c) GEN_EDX_ARG);
  uVar2 = *(uint *)((int)this - 0x60);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*(int *)(uVar2 + 4) - 0x60 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  return uVar2;
}

/* ref: FUN_00a19ab0 */
GEN_FRAME uint GEN_THISCALL F_00a19ab0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa19ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a18e30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x68,400);
  return (uint)uVar1;
}

/* ref: FUN_00a19b50 */
GEN_FRAME uint GEN_THISCALL F_00a19b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa19b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a19a40(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0((int)this - 0x60U);
  }
  return (int)this - 0x60U;
}

/* ref: Client::System::Task::SpursJobEntity::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a19ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa19ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00a19bb0 */
GEN_FRAME byte GEN_STDCALL F_00a19bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa19bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  return 1;
}

/* ref: FUN_00a19bd0 */
GEN_FRAME byte GEN_STDCALL F_00a19bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa19bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  return 1;
}

/* ref: FUN_00a19c00 */
GEN_NOFRAME uint GEN_THISCALL F_00a19c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa19c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cefe0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e378c));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0x1c))), (long)(0));
  REFG(undefined4, 0x14a2918) = 1;
  return (uint)this;
}

/* ref: FUN_00a19c40 */
GEN_FRAME unsigned int GEN_THISCALL F_00a19c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa19c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = REFG(int, 0x14a2918);
  iVar4 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e378c));
  if (0 < iVar2) {
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*((int *)GEN_TOP((&REFG(undefined4, 0x14a2920))[(int)(iVar4)])) + 4))(((int *)GEN_TOP((&REFG(undefined4, 0x14a2920))[(int)(iVar4)])) GEN_EDX_FWD);
      iVar4 = iVar4 + 1;
      iVar2 = REFG(int, 0x14a2918);
    } while (iVar4 < REFG(int, 0x14a2918));
  }
  iVar5 = 0;
  iVar4 = 0;
  if (iVar2 != 0) {
    do {
      if ((&REFG(undefined4, 0x14a2920))[(int)(iVar4)] != 0) {
        gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((&REFG(undefined4, 0x14a2920))[(int)(iVar4)] + 0x38))));
        uVar3 = F_004cf030(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a2920))[(int)(iVar4)])) GEN_EDX_ARG);
        if ((char)uVar3 != '\0') {
          puVar1 = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x14a2920))[(int)(iVar4)]));
          if (puVar1 != (undefined4 *)0x0) {
            ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
          }
          (&REFG(undefined4, 0x14a2920))[(int)(iVar4)] = 0;
          iVar5 = iVar5 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      if (iVar4 == REFG(int, 0x14a2918)) {
        iVar4 = 0;
      }
      gen_imp_Sleep(1);
    } while (iVar5 != REFG(int, 0x14a2918));
  }
  F_004cf880(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00a19cf0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a19cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa19cf0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  undefined4 uVar4;
  ulonglong uVar5;
  
  uVar4 = (*(uint *)&gen_args[2]);
  (*(uint *)&gen_args[2]) = F_00406bb0((*(uint *)&gen_args[2]),0,0);
  F_00c46aa0((*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[1]),uVar4);
  piVar1 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(1));
  if (0x10000000 < iVar2) {
    _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-0x10000000));
  }
  iVar2 = (&REFG(undefined4, 0x14a2920))[(int)(iVar2 % REFG(int, 0x14a2918))];
  this_00 = *(undefined * PTR32 *)(iVar2 + 0x40);
  do {
    piVar1 = (int *)(iVar2 + 0x44);
    iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(1));
    while (iVar3 != 0) {
      _InterlockedExchangeAdd((volatile long *)(((int *)(iVar2 + 0x44))), (long)(-1));
      gen_imp_Sleep(1);
      piVar1 = (int *)(iVar2 + 0x44);
      iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(1));
    }
    uVar5 = F_004cf180(this_00 GEN_EDX_ARG,&(*(uint *)&gen_args[2]));
    gen_imp_SetEvent(*(HANDLE *)(iVar2 + 0x38));
    _InterlockedExchangeAdd((volatile long *)(((int *)(iVar2 + 0x44))), (long)(-1));
  } while ((char)uVar5 == '\0');
  return 0;
}

/* ref: Client::System::Task::SpursJobEntity::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a19db0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa19db0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x14) = 1;
  return;
}

/* ref: Client::System::Task::SpursJobEntityWokerThread::vf5 */
GEN_FRAME uint GEN_THISCALL F_00a19dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa19dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x14010];
  int * piVar1;
  int iVar2;
  undefined * this_00;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x14008)) = 0xa19dcd;
  (*(uint *)(gen_frame + 0x14008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  this_00 = *(undefined * PTR32 *)(param_1 + 0x40);
  piVar1 = (int *)(param_1 + 0x44);
  while( true ) {
    while( true ) {
      (*(undefined4 *)(gen_frame + 0x10004)) = 0;
      piVar4 = (int *)F_004cf3c0(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x10004)));
      if (piVar4 == (int *)0x0) break;
      puVar3 = (undefined4 *)*piVar4;
      puVar3[0x12] = ((undefined1 *)(gen_frame + 0x10008));
      (*(code *)*puVar3)(puVar3 + 0x10,puVar3);
      _InterlockedExchangeAdd((volatile long *)(((int *)(puVar3[0x13] + 8))), (long)(1));
      F_004cf410(this_00 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x10004)));
      F_00406b30(puVar3);
      gen_imp_SwitchToThread();
    }
    if (this[0x14] != (undefined1)0x0) break;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(1));
    while (iVar2 != 0) {
      _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));
      gen_imp_Sleep(1);
      iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(1));
    }
    uVar5 = F_004cf460(this_00 GEN_EDX_ARG);
    if (uVar5 == 0) {
      gen_imp_ResetEvent(*(HANDLE *)(this + 0x38));
      _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));
      gen_imp_WaitForSingleObject(*(HANDLE *)(this + 0x38),0xffffffff);
    }
    else {
      _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x14008)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::System::Task::SpursJobEntityWokerThread::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a19ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa19ee0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x14) = 1;
  return;
}

/* ref: FUN_00a19ef0 */
GEN_FRAME uint GEN_THISCALL F_00a19ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa19ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x3c) = param_1;
  F_00a1a180((int)this + 0x18,"FFXIV_WinSpursSub%02x",param_1);
  uVar1 = F_004cf9e0(this GEN_EDX_ARG,0,0,0,(int)this + 0x18);
  return uVar1;
}

/* ref: FUN_00a19f90 */
GEN_NOFRAME uint GEN_THISCALL F_00a19f90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa19f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE pvVar1;
  undefined * this_00;
  uint uVar2;
  
  F_004cefe0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e37a8));
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x38) = pvVar1;
  *(undefined4 *)((int)this + 0x44) = 0;
  this_00 = (undefined *)F_00406b90(0x24,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_004cf0c0(this_00 GEN_EDX_ARG,4,0x1000,0);
    *(uint *)((int)this + 0x40) = uVar2;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  return (uint)this;
}

/* ref: FUN_00a19ff0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a19ff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa19ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x40);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e37a8));
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
  }
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x38));
  F_004cf880(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00a1a020 */
GEN_NOFRAME uint F_00a1a020(void)
{
  GEN_ENTER(0xa1a020u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00406b90(0x48,0,0);
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = (undefined *)F_00a19f90(pvVar1 GEN_EDX_ARG);
  }
  REFG(void * PTR32, 0x14a2920) = pvVar1;
  *(undefined4 *)((int)pvVar1 + 0x3c) = 0;
  F_00a1a180((int)pvVar1 + 0x18,"FFXIV_WinSpursSub%02x",0);
  uVar2 = F_004cf9e0(pvVar1 GEN_EDX_ARG,0,0,0,(int)pvVar1 + 0x18);
  return uVar2;
}

/* ref: FUN_00a1a080 */
GEN_FRAME uint F_00a1a080(unsigned int gen_a0)
{
  GEN_ENTER(0xa1a080u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * this;
  HANDLE pvVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    gen_imp_GetSystemInfo((GEN_LPANY)((byte *)(gen_frame + 0x8)));
    param_1 = (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)) / 2;
    if ((int)param_1 < 3) {
      param_1 = 2;
    }
  }
  iVar3 = 1;
  if ((int)param_1 < 2) {
    REFG(undefined4, 0x14a2918) = param_1;
    return param_1;
  }
  do {
    this = (undefined4 *)F_00406b90(0x48,0,0);
    if (this == (undefined4 *)0x0) {
      this = (undefined4 *)0x0;
    }
    else {
      F_004cefe0(this GEN_EDX_ARG);
      *this = (*(undefined * PTR32 (*)[6])REFP(0x10e37a8));
      pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
      this[0xe] = pvVar1;
      this[0x11] = 0;
      this_00 = (undefined *)F_00406b90(0x24,0,0);
      if (this_00 == (undefined *)0x0) {
        this[0x10] = 0;
      }
      else {
        uVar2 = F_004cf0c0(this_00 GEN_EDX_ARG,4,0x1000,0);
        this[0x10] = uVar2;
      }
    }
    (&REFG(undefined4, 0x14a2920))[(int)(iVar3)] = this;
    this[0xf] = iVar3;
    F_00a1a180(this + 6,"FFXIV_WinSpursSub%02x",iVar3);
    uVar2 = F_004cf9e0(this GEN_EDX_ARG,0,0,0,this + 6);
    iVar3 = iVar3 + 1;
  } while (iVar3 < (int)param_1);
  REFG(undefined4, 0x14a2918) = param_1;
  return uVar2;
}

/* ref: FUN_00a1a180 */
GEN_FRAME uint F_00a1a180(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xa1a180u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c475c9(param_1,0x20,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00a1a1a0 */
GEN_FRAME uint GEN_THISCALL F_00a1a1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1a1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)this;
  *(int *)this = *(int *)this - param_1;
  UNLOCK();
  return iVar1 - param_1;
}

/* ref: FUN_00a1a1e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a1a1e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa1a1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = _InterlockedExchangeAdd((volatile long *)(((int *)this)), (long)(1));
  while (iVar1 != 0) {
    _InterlockedExchangeAdd((volatile long *)(((int *)this)), (long)(-1));
    gen_imp_Sleep(1);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(((int *)this)), (long)(1));
  }
  return 0;
}

/* ref: Client::System::Task::SpursJobEntity::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a1a250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1a250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a19c40(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Task::SpursJobEntityWokerThread::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a1a280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1a280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x40);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e37a8));
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
  }
  gen_imp_CloseHandle(*(HANDLE *)(this + 0x38));
  F_004cf880(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a1a310 */
GEN_FRAME uint GEN_THISCALL F_00a1a310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1a310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b1aec0();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a1a340 */
GEN_FRAME uint GEN_STDCALL F_00a1a340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa1a340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined * PTR32 * ppuVar4;
  int * piVar5;
  undefined4 * puVar6;
  
  puVar1 = *(undefined4 * PTR32 *)(*param_2 + 4);
  ppuVar4 = &REFG(undefined * PTR32, 0x133dcb0);
  puVar6 = puVar1;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar6 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar3 = 0;
  *(undefined2 *)(puVar1 + 6) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0x14] = param_3;
  puVar1[0x15] = 0;
  if (param_3 != 0) {
    piVar5 = puVar1 + 0x16;
    do {
      iVar2 = param_2[uVar3];
      *piVar5 = iVar2;
      piVar5[1] = iVar2 >> 0x1f;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 < param_3);
  }
  uVar3 = F_00b1af30(param_1 GEN_EDX_ARG,puVar1,0xa0,param_4,1);
  return uVar3;
}

/* ref: FUN_00a1a3d0 */
GEN_FRAME uint GEN_THISCALL F_00a1a3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1a3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  uint * puVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e37d4));
  F_00a19c00((undefined *)((int)this + 8) GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x28) = param_1;
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0x2c))), (long)(0));
  pvVar2 = (undefined *)((int)this + 0xa8);
  iVar3 = 2;
  do {
    F_00bc59e0(pvVar2 GEN_EDX_ARG);
    pvVar2 = (undefined *)((int)pvVar2 + 0x78);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  iVar3 = 0;
  puVar4 = (uint *)((int)this + 0x30);
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s%02x",*param_2,iVar3);
    pvVar2 = (undefined *)F_00406b90(0xc,0,0);
    if (pvVar2 == (undefined *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00b1ae90(pvVar2 GEN_EDX_ARG,(int)this + 8,((undefined1 *)(gen_frame + 0x8)));
    }
    puVar4[0xf] = uVar1;
    *puVar4 = uVar1;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 < 0xf);
  F_00a1a020();
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a1a4b0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a1a4b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa1a4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e37d4));
  piVar2 = (int *)((int)this + 0x6c);
  iVar1 = 0xf;
  do {
    iVar3 = iVar1;
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      F_00b1aec0();
      F_00406ad0(iVar1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar3 - 1;
  } while (iVar1 != 0);
  this_00 = (undefined *)((int)this + 0x210);
  iVar3 = iVar3 + 1;
  do {
    this_00 = (undefined *)((int)this_00 - 0x78);
    F_00bc5760(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00a19c40((undefined *)((int)this + 8) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00a1a510 */
GEN_FRAME uint GEN_THISCALL F_00a1a510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa1a510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  undefined3 extraout_var = 0;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  puVar3 = ((undefined4 *)GEN_TOP((&REFG(undefined * PTR32, 0x1333ac0))[(int)(param_2)]));
  puVar4 = ((undefined4 *)(gen_frame + 0x8));
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  (*(undefined2 *)(gen_frame + 0x20)) = 0x10;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_4;
  F_00a19bb0(((undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x58)),param_4,param_3);
  (*(undefined4 *)(gen_frame + 0x60)) = param_4;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = param_5;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = param_6;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  bVar1 = F_00b1aef0(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)),0xa0,0,1);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a1a5d0 */
GEN_FRAME uint GEN_STDCALL F_00a1a5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa1a5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  int iVar3;
  undefined * PTR32 * ppuVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  if (param_4 < 0x30001) {
    ppuVar4 = &REFG(undefined * PTR32, 0x133da80);
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *ppuVar4;
      ppuVar4 = ppuVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(int *)(gen_frame + 0x58)) = param_4;
    (*(int *)(gen_frame + 0x5c)) = param_4 >> 0x1f;
    (*(int *)(gen_frame + 0x60)) = param_3;
    (*(int *)(gen_frame + 0x64)) = param_3 >> 0x1f;
    (*(int *)(gen_frame + 0x6c)) = param_2 >> 0x1f;
    (*(undefined2 *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x68)) = param_2;
    bVar1 = F_00b1aef0(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)),0xa0,0,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) goto LAB_00a1a67f;
  }
  uVar6 = F_00c46aa0(param_2,param_3,param_4);
  uVar2 = (uint)uVar6;
LAB_00a1a67f: ;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a1a690 */
GEN_FRAME uint GEN_STDCALL F_00a1a690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1a690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * PTR32 * ppuVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  uVar1 = *param_2;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  ppuVar5 = &REFG(undefined * PTR32, 0x133dbc0);
  puVar4 = ((undefined4 *)(gen_frame + 0x18));
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar4 = *ppuVar5;
    ppuVar5 = ppuVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar6 = 0;
  (*(uint *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68)) = param_2;
  (*(int *)(gen_frame + 0x6c)) = (int)((int)(uintptr_t)param_2) >> 0x1f;
  if (uVar1 == 0) {
    (*(int *)(gen_frame + 0x14)) = 0;
  }
  else {
    do {
      (*(uint *)(gen_frame + 0x70)) = uVar6;
      uVar6 = uVar6 + 1 + uVar1 / 6;
      if (uVar1 <= uVar6) {
        uVar6 = uVar1;
      }
      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x14));
      (*(int *)(gen_frame + 0x84)) = (*(int *)(gen_frame + 0x14)) >> 0x1f;
      (*(undefined4 *)(gen_frame + 0x74)) = 0;
      (*(uint *)(gen_frame + 0x78)) = uVar6;
      (*(undefined4 *)(gen_frame + 0x7c)) = 0;
      (*(int *)(gen_frame + 0x88)) = param_3;
      (*(int *)(gen_frame + 0x8c)) = param_3 >> 0x1f;
      uVar2 = uVar6;
      if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
        F_00b1aef0(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x18)),0xa0,(*(int *)(gen_frame + 0x4)),1);
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
        uVar2 = (*(uint *)(gen_frame + 0x10));
      }
      (*(uint *)(gen_frame + 0x10)) = uVar2;
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
    } while (uVar6 < uVar1);
    if (5 < (*(int *)(gen_frame + 0x14))) goto LAB_00a1a7ff;
  }
  puVar4 = (undefined4 *)((*(int *)(gen_frame + 0x14)) * 0x10100 + 4 + param_3);
  iVar3 = 6 - (*(int *)(gen_frame + 0x14));
  do {
    *puVar4 = 1;
    puVar4 = puVar4 + 0x4040;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
LAB_00a1a7ff: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return (*(uint *)(gen_frame + 0x10));
}

/* ref: FUN_00a1a820 */
GEN_FRAME uint GEN_STDCALL F_00a1a820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1a820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return *param_2;
}

/* ref: FUN_00a1a830 */
GEN_FRAME uint GEN_STDCALL F_00a1a830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1a830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined * PTR32 * ppuVar4;
  uint * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint * puVar8;
  
  ((uint *)(gen_frame + 0x58))[0x14] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar1 = (uint)*(ushort *)(param_2 + 0x40);
  ppuVar4 = &REFG(undefined * PTR32, 0x133dc60);
  puVar6 = ((undefined4 *)(gen_frame + 0x8));
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar6 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  (*(undefined2 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  ((uint *)(gen_frame + 0x58))[0] = uVar1;
  ((uint *)(gen_frame + 0x58))[1] = 0;
  uVar7 = 1;
  if (uVar1 != 0) {
    uVar3 = *(uint *)(param_2 + 0x4c);
    do {
      ((uint *)(gen_frame + 0x58))[(int)(uVar7 * 2)] = uVar3;
      ((uint *)(gen_frame + 0x58))[(int)(uVar7 * 2 + 1)] = (int)uVar3 >> 0x1f;
      uVar7 = uVar7 + 1;
      uVar3 = uVar3 + 0x120;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    if (9 < uVar7) goto LAB_00a1a8cd;
  }
  ((uint *)(gen_frame + 0x58))[(int)(uVar7 * 2)] = 0;
  ((uint *)(gen_frame + 0x58))[(int)(uVar7 * 2 + 1)] = 0;
  puVar5 = ((uint *)(gen_frame + 0x58)) + uVar7 * 2;
  puVar8 = ((uint *)(gen_frame + 0x58)) + uVar7 * 2 + 2;
  for (iVar2 = (9 - uVar7 & 0x1fffffff) << 1; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
LAB_00a1a8cd: ;
  F_00b1aef0(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)),0xa0,param_3,1);
  F_00c47745(((uint *)(gen_frame + 0x58))[0x14] ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return param_2;
}

/* ref: FUN_00a1a900 */
GEN_FRAME uint GEN_STDCALL F_00a1a900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1a900u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined * PTR32 * ppuVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  ppuVar6 = &REFG(undefined * PTR32, 0x133dad0);
  puVar7 = ((undefined4 *)(gen_frame + 0x8));
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar7 = *ppuVar6;
    ppuVar6 = ppuVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar2 = *(uint *)(param_2 + 0x40);
  (*(int *)(gen_frame + 0x58)) = param_2;
  (*(int *)(gen_frame + 0x5c)) = param_2 >> 0x1f;
  (*(undefined2 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar5 = 1;
    do {
      uVar1 = uVar3 + 1 + uVar2 / 0x1e;
      (*(uint *)(gen_frame + 0x60)) = uVar3;
      uVar3 = uVar1;
      if (uVar2 <= uVar1) {
        uVar3 = uVar2;
      }
      (*(undefined4 *)(gen_frame + 0x64)) = 0;
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      (*(uint *)(gen_frame + 0x68)) = uVar3;
      F_00b1aef0(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)),0xa0,uVar5 & 0xf,1);
      uVar5 = uVar5 + 1;
    } while (uVar3 < uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a1a9d0 */
GEN_FRAME uint GEN_STDCALL F_00a1a9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1a9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  undefined3 extraout_var = 0;
  int iVar2;
  undefined * PTR32 * ppuVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  ppuVar3 = &REFG(undefined * PTR32, 0x133da30);
  puVar4 = ((undefined4 *)(gen_frame + 0x8));
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  (*(undefined2 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x5c)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x60)) = param_2[2];
  (*(undefined4 *)(gen_frame + 0x64)) = param_2[3];
  (*(undefined4 *)(gen_frame + 0x68)) = param_2[4];
  (*(undefined4 *)(gen_frame + 0x6c)) = param_2[5];
  (*(undefined4 *)(gen_frame + 0x70)) = param_2[6];
  (*(undefined4 *)(gen_frame + 0x74)) = param_2[7];
  bVar1 = F_00b1aef0(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)),0xa0,param_3,1);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a1aa70 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00a1aa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1aa70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00a1aa80 */
GEN_FRAME uint GEN_THISCALL F_00a1aa80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1aa80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  int iVar4;
  undefined * PTR32 * ppuVar5;
  undefined4 * puVar6;
  int * piVar3;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  piVar1 = param_2 + *param_2 * 0x820 + 0x20;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  piVar3 = param_2;
  if (0 < *piVar1) {
    ppuVar5 = &REFG(undefined * PTR32, 0x133d9e0);
    puVar6 = ((undefined4 *)(gen_frame + 0x8));
    for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar6 = *ppuVar5;
      ppuVar5 = ppuVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    (*(undefined2 *)(gen_frame + 0x20)) = 8;
    (*(undefined4 *)(gen_frame + 0x28)) = 1;
    (*(uint *)(gen_frame + 0x2c)) = *piVar1 * 0x20 + 0xffU & 0xffffff80;
    F_00a19bb0(((undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x58)),(uint)((short)*piVar1 * 0x20 + 0xffU & 0xff80),piVar1);
    (*(int *)(gen_frame + 0x64)) = (int)((int)(uintptr_t)piVar1) >> 0x1f;
    (*(int * PTR32 *)(gen_frame + 0x60)) = piVar1;
    piVar1[1] = 1;
    bVar2 = F_00b1aef0(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)),0xa0,piVar1[2],1);
    piVar3 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return (uint)piVar3;
}

/* ref: FUN_00a1ab70 */
GEN_FRAME byte GEN_THISCALL F_00a1ab70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa1ab70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  if (*(char *)((int)this + param_1 * 0x78 + 0xc0) != '\0') {
    return 0;
  }
  F_00bc57a0((undefined *)((int)this + param_1 * 0x78 + 0xa8) GEN_EDX_FWD,this,(&REFG(undefined * PTR32, 0x1333b2c))[(int)(param_1)],param_1
               ,param_2 + 0xfU & 0xfffffff0,param_3,param_4 + 0xfU & 0xfffffff0,param_5);
  return 1;
}

/* ref: FUN_00a1abd0 */
GEN_NOFRAME uint GEN_THISCALL F_00a1abd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa1abd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  uVar3 = 0;
  piVar1 = (int *)((int)this + 0x2c);
  do {
    iVar2 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar2 != 0);
  piVar5 = (int *)((int)this + 0x30);
  uVar4 = 0;
  do {
    if (*piVar5 != 0) {
      uVar3 = *(uint *)((int)this + uVar4 * 4 + 0x30);
      *(undefined4 *)((int)this + uVar4 * 4 + 0x30) = 0;
      break;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (uVar4 < 0xf);
  _InterlockedExchange((volatile long *)(piVar1), (long)(0));
  return uVar3;
}

/* ref: FUN_00a1ac10 */
GEN_FRAME uint GEN_THISCALL F_00a1ac10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ac10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  
  puVar1 = (uint *)((int)this + 0x2c);
  do {
    uVar2 = _InterlockedExchange((volatile long *)(puVar1), (long)(1));
  } while (uVar2 != 0);
  piVar3 = (int *)((int)this + 0x30);
  uVar2 = 0;
  do {
    if (*piVar3 == 0) {
      *(undefined4 *)((int)this + uVar2 * 4 + 0x30) = param_1;
      break;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar2 < 0xf);
  uVar2 = _InterlockedExchange((volatile long *)(puVar1), (long)(0));
  return uVar2;
}

/* ref: FUN_00a1ac50 */
GEN_FRAME uint GEN_THISCALL F_00a1ac50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa1ac50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  undefined4 * _Dst;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  undefined * PTR32 * ppuVar8;
  undefined4 * puVar9;
  
  _Dst = (undefined4 *)F_00406bb0(0xa0,0,0x10);
  puVar3 = (undefined4 *)F_00406bb0(0x100,0,0x10);
  puVar4 = (undefined4 *)F_00406bb0(0x100,0,0x10);
  F_00c48350(_Dst,0,0xa0);
  *puVar3 = 0;
  *puVar4 = 0;
  F_00c49908(puVar3,0x100,"aiueo");
  ppuVar8 = &REFG(undefined * PTR32, 0x133d490);
  puVar9 = _Dst;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar9 = *ppuVar8;
    ppuVar8 = ppuVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)(_Dst + 6) = 8;
  _Dst[8] = 0;
  _Dst[9] = 0x100;
  F_00a19bb0(_Dst,_Dst + 0x14,0x100,puVar3);
  _Dst[0x18] = puVar4;
  _Dst[0x16] = 0x100;
  _Dst[0x17] = 0;
  _Dst[0x19] = 0;
  _Dst[0x1a] = 0x100;
  _Dst[0x1b] = 0;
  this_00 = (undefined *)F_004fe750(this GEN_EDX_ARG);
  bVar2 = F_00b1aef0(this_00 GEN_EDX_ARG,_Dst,0xa0,0,1);
  if (bVar2 != 0) {
    F_00b1af80(this_00 GEN_EDX_ARG);
  }
  piVar1 = (int *)((int)this + 0x2c);
  do {
    iVar6 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar6 != 0);
  piVar7 = (int *)((int)this + 0x30);
  uVar5 = 0;
  do {
    if (*piVar7 == 0) {
      *(undefined * PTR32 *)((int)this + uVar5 * 4 + 0x30) = this_00;
      break;
    }
    uVar5 = uVar5 + 1;
    piVar7 = piVar7 + 1;
  } while (uVar5 < 0xf);
  _InterlockedExchange((volatile long *)(piVar1), (long)(0));
  F_00406b30(puVar3);
  F_00406b30(puVar4);
  F_00406b30(_Dst);
  return 0xffffffff;
}

/* ref: FUN_00a1ade0 */
GEN_FRAME uint GEN_THISCALL F_00a1ade0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ade0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  uVar1 = param_1[7];
  *(uint *)((int)this + 0x1c) = uVar1;
  return uVar1;
}

/* ref: Client::System::Task::SpursManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a1ae40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ae40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a1a4b0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a1ae70 */
GEN_FRAME uint F_00a1ae70(void)
{
  GEN_ENTER(0xa1ae70u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  gen_imp_GetTimeZoneInformation(((undefined *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return (*(LONG *)((char *)((undefined *)(gen_frame + 0xc)))) * 0x3c;
}

/* ref: FUN_00a1aeb0 */
GEN_FRAME uint F_00a1aeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1aeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  gen_imp_GetLocalTime((GEN_LPANY)((byte *)(gen_frame + 0x8)));
  uVar1 = F_00c472af(param_1,param_2,"%04d/%02d/%02d %02d:%02d:%02d.%03d",(uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 0))
                     ,(uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 2)),(uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 6)),
                     (uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 10)),
                     (uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 12)),(uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 14)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a1af40 */
GEN_FRAME uint GEN_THISCALL F_00a1af40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa1af40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  BOOL BVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  _Var2 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)this = (int)_Var2;
  uVar3 = F_00427d90();
  *(ulonglong *)((int)this + 8) = uVar3;
  uVar3 = F_00427e30();
  *(ulonglong *)((int)this + 0x10) = uVar3;
  if (REFG(undefined4, 0x14a2af8) == 0 && *(int *)&REFG(undefined, 0x14a2afc) == 0) {
    BVar1 = gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
    if (BVar1 != 0) {
      REFG(undefined4, 0x14a2af8) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
      *(int *)&REFG(undefined, 0x14a2afc) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
      uVar3 = F_00427e30();
      *(ulonglong *)((int)this + 0x10) = uVar3;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a1afb0 */
GEN_FRAME uint F_00a1afb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1afb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  __time64_t _Var3;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    iVar1 = (int)_Var3;
  }
  ((int *)(gen_frame + 0x4))[0] = iVar1;
  ((int *)(gen_frame + 0x4))[1] = 0;
  uVar2 = F_00c4f4ca(&REFG(undefined4, 0x14a2ad4),((int *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: FUN_00a1b070 */
GEN_FRAME uint GEN_THISCALL F_00a1b070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1b070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x48c);
  if (iVar1 == *(int *)((int)this + 0x490)) {
    *(undefined2 *)param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  uVar2 = *(undefined4 *)((int)this + iVar1 * 8 + 0x284);
  uVar3 = *(undefined4 *)((int)this + iVar1 * 8 + 0x288);
  if (((char)param_2 != '\0') && (iVar1 != *(int *)((int)this + 0x490))) {
    *(uint *)((int)this + 0x48c) = iVar1 + 1U & 0x3f;
  }
  param_1[1] = uVar3;
  *param_1 = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00a1b0d0 */
GEN_NOFRAME uint GEN_THISCALL F_00a1b0d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa1b0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined1 *)this = 0;
  iVar2 = 0x3f;
  puVar1 = (undefined4 *)((int)this + 0x288);
  do {
    *(undefined2 *)(puVar1 - 1) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  *(undefined2 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  puVar1 = this;
  for (iVar2 = 0xa0; puVar1 = puVar1 + 1, iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar1 = 0;
  }
  *(undefined4 *)((int)this + 0x48c) = 0;
  *(undefined4 *)((int)this + 0x490) = 0;
  return (uint)this;
}

/* ref: FUN_00a1b170 */
GEN_FRAME uint F_00a1b170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b170u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b8a2f0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a1b180 */
GEN_FRAME unsigned int F_00a1b180(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b180u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b8a310(param_1);
  return;
}

/* ref: FUN_00a1b190 */
GEN_NOFRAME uint GEN_THISCALL F_00a1b190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa1b190u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  *in_ecx = 0;
  in_ecx[8] = 0;
  in_ecx[1] = 0;
  in_ecx[9] = 0;
  in_ecx[2] = 0;
  in_ecx[10] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a1b1c0 */
GEN_FRAME uint GEN_THISCALL F_00a1b1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1b1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = ~param_2;
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & uVar1;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & uVar1;
    *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) & uVar1;
    *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & uVar1;
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a1b200 */
GEN_FRAME byte GEN_THISCALL F_00a1b200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1 - (int)this;
  do {
    if (*(int *)this != *(int *)(iVar2 + (int)this)) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    this = (undefined *)((int)this + 4);
  } while (iVar1 < 3);
  return 0;
}

/* ref: FUN_00a1b230 */
GEN_FRAME byte GEN_THISCALL F_00a1b230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((((*(int *)((int)this + 0xc) == *(int *)(param_1 + 0xc)) &&
       (*(int *)((int)this + 0x10) == *(int *)(param_1 + 0x10))) &&
      (*(int *)((int)this + 0x18) == *(int *)(param_1 + 0x18))) &&
     (*(int *)((int)this + 0x1c) == *(int *)(param_1 + 0x1c))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a1b270 */
GEN_FRAME uint F_00a1b270(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b270u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1,(int)pcVar2 - (int)(param_1 + 1));
  uVar3 = F_00408810(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_004087f0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a1b2b0 */
GEN_FRAME uint F_00a1b2b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xa1b2b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)(fVar1 * (float10)param_2[2]);
  param_1[3] = param_2[3];
  return (uint)param_1;
}

/* ref: FUN_00a1b2e0 */
GEN_FRAME uint F_00a1b2e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xa1b2e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1088100);
  fVar2 = (float10)(*(float *)&gen_args[2]);
  (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0)) = (undefined1)(int)TRUNC((fVar2 * (((float10)GEN_TOD(*(*(byte * PTR32 *)&gen_args[1]))) / fVar1)) * fVar1);
  *(*(undefined1 * PTR32 *)&gen_args[0]) = (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0));
  (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0)) = (undefined1)(int)TRUNC(((((float10)GEN_TOD((*(byte * PTR32 *)&gen_args[1])[1])) / fVar1) * fVar2) * fVar1);
  (*(undefined1 * PTR32 *)&gen_args[0])[1] = (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0));
  (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0)) = (undefined1)(int)TRUNC(fVar1 * ((((float10)GEN_TOD((*(byte * PTR32 *)&gen_args[1])[2])) / fVar1) * fVar2));
  (*(undefined1 * PTR32 *)&gen_args[0])[2] = (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0));
  (*(undefined1 * PTR32 *)&gen_args[0])[3] = (*(byte * PTR32 *)&gen_args[1])[3];
  return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a1b390 */
GEN_FRAME uint F_00a1b390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b390u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_004eeed0(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00a1b3b0 */
GEN_FRAME uint F_00a1b3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_004ef0c0(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00a1b3d0 */
GEN_FRAME uint F_00a1b3d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa1b3d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  double dVar3;
  uint in_EAX = 0;
  float10 fVar4;
  
  fVar1 = (float)((float10)1 / (float10)param_2);
  fVar4 = (float10)REFG(double, 0x1088108) / (float10)fVar1;
  dVar3 = (GEN_X87MATH(((double)((float)GEN_TOF(((fVar4 + (float10)*(float *)param_1) * (float10)fVar1))) ),0xd));
  *(float *)param_1 = (float)((float10)(float)dVar3 / (float10)fVar1);
  dVar3 = (GEN_X87MATH(((double)((float)GEN_TOF((((float10)*(float *)(param_1 + 8) + (float10)(double)fVar4) * (float10)fVar1)))),0xd));
  *(float *)(param_1 + 8) = (float)((float10)(float)dVar3 / (float10)fVar1);
  return in_EAX;
}

/* ref: FUN_00a1b450 */
GEN_FRAME uint F_00a1b450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00a1b470 */
GEN_FRAME uint F_00a1b470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00a1b490 */
GEN_FRAME uint F_00a1b490(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b490u, gen_a0, 0u, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  
  if ((*param_1 & 2) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = *param_1 >> 2;
    uVar2 = uVar1 & 0x3f;
    if ((uVar1 & 0x20) != 0) {
      return uVar2 - 0x40;
    }
  }
  return uVar2;
}

/* ref: FUN_00a1b4c0 */
GEN_FRAME float10 F_00a1b4c0(float gen_a0)
{
  GEN_ENTER(0xa1b4c0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00a1b4e0 */
GEN_FRAME float10 F_00a1b4e0(float gen_a0)
{
  GEN_ENTER(0xa1b4e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                         (float10)*(double *)&REFG(undefined, 0x1080228))));
}

/* ref: FUN_00a1b530 */
GEN_FRAME uint GEN_THISCALL F_00a1b530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  *(undefined4 *)(in_ecx + 8) = 3;
  return param_2;
}

/* ref: FUN_00a1b550 */
GEN_NOFRAME uint GEN_THISCALL F_00a1b550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa1b550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00a1b570 */
GEN_NOFRAME uint GEN_THISCALL F_00a1b570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa1b570u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00a1b580 */
GEN_NOFRAME byte GEN_THISCALL F_00a1b580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa1b580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) == 4;
}

/* ref: FUN_00a1b590 */
GEN_NOFRAME uint GEN_THISCALL F_00a1b590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa1b590u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00a1b5a0 */
GEN_FRAME uint F_00a1b5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b5a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = (int *)*param_1;
  this = (undefined *)piVar1[2];
  if ((this != (undefined *)0x0) && (*(int *)((int)this + 8) == 0xffff)) {
    F_005f0fd0(this GEN_EDX_ARG,piVar1);
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *param_1 = 0;
  }
  return uVar3;
}

/* ref: FUN_00a1b5f0 */
GEN_FRAME uint F_00a1b5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b5f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_1 + 4))((int *)*param_1 GEN_EDX_ARG);
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *param_1 = 0;
  }
  REFG(int, 0x1379cb4) = REFG(int, 0x1379cb4) - 1;
  return uVar2;
}

/* ref: FUN_00a1b620 */
GEN_FRAME uint F_00a1b620(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b620u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_1 + 4))((int *)*param_1 GEN_EDX_ARG);
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *param_1 = 0;
  }
  REFG(int, 0x1379cb8) = REFG(int, 0x1379cb8) - 1;
  return uVar2;
}

/* ref: FUN_00a1b650 */
GEN_FRAME unsigned int F_00a1b650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b650u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = REFG(float, 0x1087f04);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1088100);
  fVar4 = (float10)*(float *)(param_2 + 4);
  *param_1 = ((float)GEN_TOF((fVar4 * ((float10)*param_2 / fVar3))));
  param_1[1] = ((float)GEN_TOF((((float10)param_2[1] / fVar3) * fVar4)));
  bVar1 = param_2[2];
  param_1[3] = fVar2;
  param_1[2] = ((float)GEN_TOF((((float10)bVar1 / fVar3) * fVar4)));
  return 0;
}

/* ref: FUN_00a1b6b0 */
GEN_FRAME uint F_00a1b6b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b6b0u, gen_a0, 0u, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  return CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
}

/* ref: FUN_00a1b6e0 */
GEN_FRAME uint F_00a1b6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *param_1 = (char)(param_2 >> 0x18);
  param_1[1] = (char)(param_2 >> 0x10);
  param_1[2] = (char)(param_2 >> 8);
  param_1[3] = (char)param_2;
  return param_2;
}

/* ref: FUN_00a1b710 */
GEN_NOFRAME uint F_00a1b710(void)
{
  GEN_ENTER(0xa1b710u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1379694);
}

/* ref: FUN_00a1b740 */
GEN_FRAME uint F_00a1b740(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b740u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x14a9a1c))[(int)(uVar1)] == param_1) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 100);
  return 0xffffffff;
}

/* ref: FUN_00a1b770 */
GEN_FRAME uint F_00a1b770(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b770u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a9a1c))[(int)(uVar2)])) != (undefined *)0x0) {
      uVar1 = F_00a5f500(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a9a1c))[(int)(uVar2)])) GEN_EDX_ARG);
      if (uVar1 == param_1) {
        return uVar2;
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 100);
  return 0xffffffff;
}

/* ref: FUN_00a1b7b0 */
GEN_FRAME uint F_00a1b7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b7b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = 0;
  while ((pvVar1 = (undefined *)F_00b79f30(&REFG(undefined, 0x14c5798) GEN_EDX_ARG,iVar3), pvVar1 == (undefined *)0x0 ||
         (uVar2 = F_00a5f500(pvVar1 GEN_EDX_ARG), uVar2 != param_1))) {
    iVar3 = iVar3 + 1;
    if (0x3b < iVar3) {
      puVar4 = &REFG(undefined4, 0x14a9a1c);
      while ((pvVar1 = (undefined *)*puVar4, pvVar1 == (undefined *)0x0 ||
             (uVar2 = F_00a5f500(pvVar1 GEN_EDX_ARG), uVar2 != param_1))) {
        puVar4 = puVar4 + 1;
        if (0x14a9bab < (int)puVar4) {
          return 0;
        }
      }
      return (uint)pvVar1;
    }
  }
  return (uint)pvVar1;
}

/* ref: FUN_00a1b820 */
GEN_FRAME uint F_00a1b820(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b820u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = 0;
  while ((uVar1 = F_00b79f30(&REFG(undefined, 0x14c5798) GEN_EDX_ARG,iVar3), uVar1 == 0 ||
         (*(int *)(uVar1 + 0x78) != param_1))) {
    iVar3 = iVar3 + 1;
    if (0x3b < iVar3) {
      puVar2 = &REFG(undefined4, 0x14a9a1c);
      while ((uVar1 = *puVar2, uVar1 == 0 || (*(int *)(uVar1 + 0x78) != param_1))) {
        puVar2 = puVar2 + 1;
        if (0x14a9bab < (int)puVar2) {
          return 0;
        }
      }
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00a1b870 */
GEN_FRAME uint F_00a1b870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0xc: ;
  case 0x2d: ;
    uVar1 = F_00b79f30(&REFG(undefined, 0x14c5798) GEN_EDX_ARG,param_2);
    return uVar1;
  default: ;
    return 0;
  case 0xe: ;
    uVar1 = F_00ae1300(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,param_2);
    return uVar1;
  case 0x10: ;
    uVar1 = F_00ae1300(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,param_2);
    return uVar1;
  }
}

/* ref: FUN_00a1b920 */
GEN_FRAME byte F_00a1b920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b920u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  *param_1 = *(undefined2 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 1) = *param_2;
  bVar1 = param_2[8];
  *(byte *)((int)param_1 + 3) = bVar1;
  return bVar1;
}

/* ref: FUN_00a1b940 */
GEN_FRAME uint F_00a1b940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b940u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  pcVar4 = param_2;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  *param_1 = (char)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[4] = (char)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[1] = (char)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  for (; ((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (cVar1 != '/'));
      pcVar4 = pcVar4 + 1) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[2] = (char)uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a1ba50 */
GEN_FRAME uint F_00a1ba50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ba50u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar4 = 0;
  for (pcVar3 = param_2; ((cVar1 = *pcVar3, cVar1 != '\0' || (uVar4 < 0x100)) && (cVar1 != '/'));
      pcVar3 = pcVar3 + 1) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar4 = uVar4 + 1;
  }
  *pcVar2 = '\0';
  uVar4 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  *param_1 = (short)uVar4;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00a1bac0 */
GEN_FRAME uint F_00a1bac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1bac0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  pcVar4 = param_2;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  *param_1 = (short)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[1] = (short)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  for (; ((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (cVar1 != '/'));
      pcVar4 = pcVar4 + 1) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[2] = (short)uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a1bba0 */
GEN_FRAME ushort F_00a1bba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1bba0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)(param_2 + 0x54);
  param_1[1] = *(undefined2 *)(param_2 + 0x56);
  uVar1 = *(ushort *)(param_2 + 0x58);
  param_1[2] = uVar1;
  return uVar1;
}

/* ref: FUN_00a1bbd0 */
GEN_FRAME uint F_00a1bbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1bbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  pcVar4 = param_2;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  *param_1 = (short)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[1] = (short)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[2] = (short)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  for (; ((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (cVar1 != '/'));
      pcVar4 = pcVar4 + 1) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[3] = (short)uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a1bce0 */
GEN_FRAME ushort F_00a1bce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1bce0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)(param_2 + 0x54);
  param_1[1] = *(undefined2 *)(param_2 + 0x56);
  param_1[2] = *(undefined2 *)(param_2 + 0x58);
  uVar1 = *(ushort *)(param_2 + 0x5a);
  param_1[3] = uVar1;
  return uVar1;
}

/* ref: FUN_00a1bd10 */
GEN_FRAME ushort F_00a1bd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1bd10u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  ushort uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  param_1[3] = uVar1;
  return uVar1;
}

/* ref: FUN_00a1bd40 */
GEN_FRAME uint F_00a1bd40(unsigned int gen_a0)
{
  GEN_ENTER(0xa1bd40u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  char * pcVar4;
  byte * pbVar5;
  bool bVar6;
  
  pbVar2 = &REFG(undefined1, 0x10e387c);
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00a1bd70: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a1bd75;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00a1bd70;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a1bd75: ;
  if (iVar3 == 0) {
    return 1;
  }
  pcVar4 = "ProxyActor";
  pbVar5 = param_1;
  while( true ) {
    bVar1 = *pcVar4;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pcVar4[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) break;
    pcVar4 = pcVar4 + 2;
    pbVar5 = pbVar5 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (uint)(1 - bVar6 != (uint)(bVar6 != 0));
}

/* ref: FUN_00a1be10 */
GEN_NOFRAME byte F_00a1be10(void)
{
  GEN_ENTER(0xa1be10u, 0u, 0u, 0u, 0u);
  DWORD DVar1;
  DWORD DVar2;
  
  if (REFG(int, 0x1375a1c) != 0) {
    DVar1 = *(DWORD *)(REFG(int, 0x1375a1c) + 4);
    DVar2 = gen_imp_GetCurrentThreadId();
    return DVar1 == DVar2;
  }
  return 0;
}

/* ref: FUN_00a1be30 */
GEN_FRAME byte F_00a1be30(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xa1be30u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  double dVar1;
  
  dVar1 = (double)param_1;
  if (((REFG(double, 0x10909a8) <= dVar1) && (dVar1 <= REFG(double, 0x10909a0))) && (!GEN_ISNAN(dVar1))) {
    dVar1 = (double)param_2;
    if (!(REFG(double, 0x10909a8) <= dVar1)) {
      return 0;
    }
    if ((dVar1 <= REFG(double, 0x10909a0)) && (!GEN_ISNAN(dVar1))) {
      dVar1 = (double)param_3;
      if ((REFG(double, 0x10909a8) <= dVar1) && ((dVar1 <= REFG(double, 0x10909a0) && (!GEN_ISNAN(dVar1))))) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00a1beb0 */
GEN_FRAME byte F_00a1beb0(float gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xa1beb0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  double dVar1;
  byte bVar2;
  
  dVar1 = (double)param_1;
  if (((REFG(double, 0x10909a8) <= dVar1) && (dVar1 <= REFG(double, 0x10909a0))) && (!GEN_ISNAN(dVar1))) {
    dVar1 = (double)param_2;
    if (!(REFG(double, 0x10909a8) <= dVar1)) {
      return 0;
    }
    if ((dVar1 <= REFG(double, 0x10909a0)) && (!GEN_ISNAN(dVar1))) {
      dVar1 = (double)param_3;
      if (((REFG(double, 0x10909a8) <= dVar1) && ((dVar1 <= REFG(double, 0x10909a0) && (!GEN_ISNAN(dVar1))))) &&
         (bVar2 = F_00a200d0(param_4), bVar2 != 0)) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00a1bf40 */
GEN_FRAME uint F_00a1bf40(unsigned int gen_a0)
{
  GEN_ENTER(0xa1bf40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  double dVar1;
  
  dVar1 = (double)*(float *)param_1;
  if (((REFG(double, 0x10909a8) <= dVar1) && (dVar1 <= REFG(double, 0x10909a0))) && (!GEN_ISNAN(dVar1))) {
    dVar1 = (double)*(float *)(param_1 + 4);
    if (!(REFG(double, 0x10909a8) <= dVar1)) {
      return 0;
    }
    if ((dVar1 <= REFG(double, 0x10909a0)) && (!GEN_ISNAN(dVar1))) {
      dVar1 = (double)*(float *)(param_1 + 8);
      if ((REFG(double, 0x10909a8) <= dVar1) && ((dVar1 <= REFG(double, 0x10909a0) && (!GEN_ISNAN(dVar1))))) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00a1bfd0 */
GEN_FRAME uint F_00a1bfd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1bfd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a1bf40(param_1);
  if ((char)uVar2 != '\0') {
    uVar2 = F_00a1bf40(param_1 + 0x20);
    if ((char)uVar2 != '\0') {
      bVar1 = F_00a1beb0(*(float *)(param_1 + 0x10),*(float *)(param_1 + 0x14),
                           *(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a1c030 */
GEN_FRAME uint F_00a1c030(unsigned int gen_a0)
{
  GEN_ENTER(0xa1c030u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00a1be30(*param_1,param_1[1],param_1[2]);
  if (bVar1 != 0) {
    bVar1 = F_00a1be30(param_1[3],param_1[4],param_1[5]);
    if (bVar1 != 0) {
      bVar1 = F_00a1be30(param_1[6],param_1[7],param_1[8]);
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a1c3a0 */
GEN_FRAME uint F_00a1c3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1c3a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float fVar1;
  uint uVar2;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 8) * (float10)*(float *)(param_1 + 8) +
                 ((float10)*(float *)param_1 * (float10)*(float *)param_1 +
                 (float10)*(float *)(param_1 + 4) * (float10)*(float *)(param_1 + 4)))));
  uVar2 = (uint)CONCAT21((short)(param_1 >> 0x10),GEN_ISNAN((float10)fVar1) << 2) << 8 | 0x4200;
  if (!GEN_ISNAN((float10)fVar1)) {
    uVar2 = (uint)gen_fl2bits(fVar1) & 0x7e000000;
    if (uVar2 != 0x7e000000) {
      if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(((float)GEN_TOF((*(float (*)[1])REFP(0x10de524))[0])))) && !(fVar1 <= ((float)GEN_TOF((*(float (*)[1])REFP(0x10de524))[0]))))
      {
        return 1;
      }
      return 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00a1c450 */
GEN_FRAME uint F_00a1c450(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa1c450u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *param_1 = 0;
  param_1[1] = (undefined4)gen_fl2bits(param_2);
  param_1[2] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a1c470 */
GEN_FRAME uint F_00a1c470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1c470u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1080220);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1080228);
  *param_1 = ((float)GEN_TOF((((float10)*param_2 * fVar1) / fVar2)));
  param_1[1] = ((float)GEN_TOF((((float10)param_2[1] * fVar1) / fVar2)));
  param_1[2] = ((float)GEN_TOF(((fVar1 * (float10)param_2[2]) / fVar2)));
  return (uint)param_2;
}

/* ref: FUN_00a1c4b0 */
GEN_FRAME uint F_00a1c4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1c4b0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1080228);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1080220);
  *param_1 = ((float)GEN_TOF((((float10)*param_2 * fVar1) / fVar2)));
  param_1[1] = ((float)GEN_TOF((((float10)param_2[1] * fVar1) / fVar2)));
  param_1[2] = ((float)GEN_TOF(((fVar1 * (float10)param_2[2]) / fVar2)));
  return (uint)param_2;
}

/* ref: FUN_00a1c4f0 */
GEN_NOFRAME uint F_00a1c4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1c4f0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  fVar4 = *param_2;
  fVar1 = param_2[0xc];
  (*(float *)(gen_frame + 0x0)) = fVar4;
  fVar2 = param_2[0xd];
  (*(float *)(gen_frame + 0x4)) = param_2[1];
  fVar3 = param_2[0xe];
  (*(float *)(gen_frame + 0x8)) = param_2[2];
  fVar8 = (float10)param_2[1];
  fVar9 = (float10)fVar4;
  fVar10 = (float10)param_2[2];
  fVar4 = ((float)GEN_TOF((fVar10 * fVar10 + (fVar9 * fVar9 + fVar8 * fVar8))));
  (*(float *)(gen_frame + 0x1c)) = fVar4;
  fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
  (*(float *)(gen_frame + 0x1c)) = fVar4;
  fVar5 = param_2[4];
  (*(float *)(gen_frame + 0x0)) = fVar5;
  (*(float *)(gen_frame + 0x4)) = param_2[5];
  (*(float *)(gen_frame + 0x8)) = param_2[6];
  fVar8 = (float10)param_2[5];
  fVar9 = (float10)fVar5;
  fVar10 = (float10)param_2[6];
  fVar5 = ((float)GEN_TOF((fVar10 * fVar10 + (fVar9 * fVar9 + fVar8 * fVar8))));
  (*(float *)(gen_frame + 0x1c)) = fVar5;
  fVar5 = ((float)GEN_TOF(SQRT((float10)fVar5)));
  (*(float *)(gen_frame + 0x1c)) = fVar5;
  fVar6 = param_2[8];
  (*(float *)(gen_frame + 0x0)) = fVar6;
  (*(float *)(gen_frame + 0x4)) = param_2[9];
  (*(float *)(gen_frame + 0x8)) = param_2[10];
  fVar8 = (float10)param_2[9];
  fVar9 = (float10)fVar6;
  fVar10 = (float10)param_2[10];
  fVar6 = ((float)GEN_TOF((fVar10 * fVar10 + (fVar9 * fVar9 + fVar8 * fVar8))));
  (*(float *)(gen_frame + 0x1c)) = fVar6;
  fVar6 = ((float)GEN_TOF(SQRT((float10)fVar6)));
  (*(float *)(gen_frame + 0x1c)) = fVar6;
  F_00a1fde0((uint)((undefined1 *)(gen_frame + 0x20)),(uint)param_2);
  F_004eeed0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x20)));
  fVar7 = (*(float *)(gen_frame + 0x4));
  *param_1 = fVar1;
  param_1[4] = (*(float *)(gen_frame + 0x0));
  param_1[1] = fVar2;
  param_1[5] = (*(float *)(gen_frame + 0x4));
  param_1[6] = (*(float *)(gen_frame + 0x8));
  param_1[2] = fVar3;
  param_1[7] = (*(float *)(gen_frame + 0xc));
  param_1[10] = fVar6;
  param_1[8] = fVar4;
  param_1[9] = fVar5;
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70) GEN_EDX_ARG);
  return (uint)gen_fl2bits(fVar7);
}

/* ref: FUN_00a1c690 */
GEN_FRAME byte F_00a1c690(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa1c690u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  byte bVar2;
  
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25e0);
  (*(undefined4 *)(gen_frame + 0x54)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x58)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x5c)) = param_1[2];
  (*(undefined4 *)(gen_frame + 0x60)) = param_1[4];
  (*(undefined4 *)(gen_frame + 0x64)) = param_1[5];
  (*(undefined4 *)(gen_frame + 0x68)) = param_1[6];
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
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  bVar2 = F_00551500(uVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x60)),param_2,1);
  if (bVar2 != 0) {
    *param_3 = (*(undefined4 *)(gen_frame + 0x8));
    param_3[1] = (*(undefined4 *)(gen_frame + 0xc));
    param_3[2] = (*(undefined4 *)(gen_frame + 0x10));
    if (param_4 != (undefined4 *)0x0) {
      F_00c9f380(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_4,param_4 + 1,param_4 + 2);
    }
    return 1;
  }
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
    param_4[1] = uVar1;
    param_4[2] = 0;
  }
  return 0;
}

/* ref: FUN_00a1c7d0 */
GEN_FRAME uint F_00a1c7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa1c7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 uVar5;
  uint uVar6;
  float10 fVar7;
  
  uVar3 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25e0);
  (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x58)) = *param_1;
  uVar1 = param_1[2];
  (*(undefined4 *)(gen_frame + 0x64)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = uVar1;
  uVar6 = 0;
  while( true ) {
    (*(float *)(gen_frame + 0x68)) = *(float *)((int)&REFG(float, 0x10e38a8) + uVar6);
    fVar7 = (float10)*(float *)((int)&REFG(float, 0x10e38a8) + uVar6);
    fVar2 = gen_bits2f(param_1[1]);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(float *)(gen_frame + 0x5c)) = (float)(fVar7 + (float10)fVar2);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(float *)(gen_frame + 0x68)) = (float)(fVar7 + fVar7);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    bVar4 = F_00551500((*(undefined4 *)(gen_frame + 0x64)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x58)),&(*(undefined4 *)(gen_frame + 0x4c)),(float)(fVar7 + fVar7),1);
    if (bVar4 != 0) break;
    uVar6 = uVar6 + 4;
    if (0x13 < uVar6) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *param_1;
        param_2[1] = param_1[1];
        param_2[2] = param_1[2];
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *param_1;
        param_3[1] = param_1[1];
        param_3[2] = param_1[2];
      }
      uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
        param_4[1] = uVar1;
        param_4[2] = 0;
      }
      return (uint)param_4 & 0xffffff00;
    }
  }
  param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
  uVar5 = extraout_var;
  if (param_4 != (undefined4 *)0x0) {
    F_00c9f380(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_4,param_4 + 1,param_4 + 2);
    uVar5 = extraout_var_00;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = (*(undefined4 *)(gen_frame + 0x58));
    param_2[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x5c)));
    param_2[2] = (*(undefined4 *)(gen_frame + 0x60));
  }
  if (param_3 == (undefined4 *)0x0) {
    return CONCAT31(uVar5,1);
  }
  *param_3 = (*(undefined4 *)(gen_frame + 0x0));
  param_3[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_3[2] = (*(undefined4 *)(gen_frame + 0x8));
  return CONCAT31(uVar5,1);
}

/* ref: FUN_00a1cb90 */
GEN_NOFRAME uint F_00a1cb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1cb90u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float * pfVar6;
  undefined4 * puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(param_2 + 0x40);
  (*(undefined4 *)(gen_frame + 0x54)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)(param_2 + 0x48);
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  F_004ef9d0(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,param_2);
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
  pfVar6 = (float *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  fVar9 = pfVar6[1];
  fVar10 = pfVar6[2];
  (*(float *)(gen_frame + 0x10)) = *pfVar6;
  (*(float *)(gen_frame + 0x80)) = *pfVar6;
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x14)) = fVar9;
  (*(float *)(gen_frame + 0x18)) = fVar10;
  (*(float *)(gen_frame + 0x84)) = fVar9;
  (*(float *)(gen_frame + 0x88)) = fVar10;
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
  pfVar6 = (float *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  fVar9 = pfVar6[1];
  fVar10 = pfVar6[2];
  ((float *)(gen_frame + 0x90))[0] = *pfVar6;
  ((float *)(gen_frame + 0x90))[1] = fVar9;
  ((float *)(gen_frame + 0x90))[2] = fVar10;
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
  puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  ((float *)(gen_frame + 0x90))[4] = gen_bits2f(*puVar7);
  ((float *)(gen_frame + 0x90))[5] = gen_bits2f(puVar7[1]);
  (*(undefined4 *)(gen_frame + 0xa8)) = puVar7[2];
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
  puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  uVar1 = puVar7[1];
  uVar2 = puVar7[2];
  (*(undefined4 *)(gen_frame + 0xb0)) = *puVar7;
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0xb4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xb8)) = uVar2;
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xc0)) = *puVar7;
  (*(undefined4 *)(gen_frame + 0xc4)) = puVar7[1];
  (*(undefined4 *)(gen_frame + 0xc8)) = puVar7[2];
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  uVar1 = puVar7[1];
  uVar2 = puVar7[2];
  (*(undefined4 *)(gen_frame + 0xd0)) = *puVar7;
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0xd4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xd8)) = uVar2;
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xe0)) = *puVar7;
  (*(undefined4 *)(gen_frame + 0xe4)) = puVar7[1];
  (*(undefined4 *)(gen_frame + 0xe8)) = puVar7[2];
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  fVar11 = (*(float *)(gen_frame + 0x18));
  fVar10 = (*(float *)(gen_frame + 0x14));
  fVar9 = (*(float *)(gen_frame + 0x10));
  (*(undefined4 *)(gen_frame + 0xf0)) = *puVar7;
  (*(undefined4 *)(gen_frame + 0xf4)) = puVar7[1];
  (*(undefined4 *)(gen_frame + 0xf8)) = puVar7[2];
  (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x10));
  (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x18));
  pfVar6 = ((float *)(gen_frame + 0x90)) + 2;
  iVar8 = 7;
  fVar12 = fVar11;
  fVar13 = fVar10;
  fVar14 = fVar9;
  do {
    fVar3 = pfVar6[-2];
    (*(float *)(gen_frame + 0x28)) = fVar3;
    if ((float10)fVar3 < (float10)(*(float *)(gen_frame + 0x10))) {
      (*(float *)(gen_frame + 0x10)) = fVar3;
      fVar9 = fVar3;
    }
    fVar4 = pfVar6[-1];
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    if ((float10)fVar4 < (float10)(*(float *)(gen_frame + 0x14))) {
      (*(float *)(gen_frame + 0x14)) = fVar4;
      fVar10 = fVar4;
    }
    fVar5 = *pfVar6;
    (*(float *)(gen_frame + 0x2c)) = fVar5;
    if ((float10)fVar5 < (float10)(*(float *)(gen_frame + 0x18))) {
      (*(float *)(gen_frame + 0x18)) = fVar5;
      fVar11 = fVar5;
    }
    if ((float10)(*(float *)(gen_frame + 0x30)) < (float10)fVar3) {
      (*(float *)(gen_frame + 0x30)) = fVar3;
      fVar14 = fVar3;
    }
    if ((float10)(*(float *)(gen_frame + 0x34)) < (float10)fVar4) {
      (*(float *)(gen_frame + 0x34)) = fVar4;
      fVar13 = fVar4;
    }
    if ((float10)(*(float *)(gen_frame + 0x38)) < (float10)fVar5) {
      (*(float *)(gen_frame + 0x38)) = fVar5;
      fVar12 = fVar5;
    }
    pfVar6 = pfVar6 + 4;
    iVar8 = iVar8 - 1;
  } while (iVar8 != 0);
  *param_1 = fVar9;
  param_1[1] = fVar10;
  param_1[2] = fVar11;
  param_1[4] = fVar14;
  param_1[5] = fVar13;
  param_1[6] = fVar12;
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110) GEN_EDX_ARG);
  return (uint)puVar7;
}

/* ref: FUN_00a1d0c0 */
GEN_NOFRAME uint GEN_THISCALL F_00a1d0c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa1d0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 8))) {
  case 1: ;
    return *(uint *)((int)this + 0x10);
  case 2: ;
    uVar1 = F_00a1b870((uint)*(byte *)this,*(undefined4 *)((int)this + 0x10));
    return *(uint *)(uVar1 + 0xec);
  default: ;
    return 0;
  }
}

/* ref: FUN_00a1d100 */
GEN_FRAME uint F_00a1d100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa1d100u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  undefined * param_9 = (undefined *)(uintptr_t)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  short sVar1;
  undefined * this;
  undefined * pvVar2;
  uint uVar3;
  
  if ((REFG(char, 0x1379c96) != '\0') &&
     (((((*(int *)&gen_a7) == 4 || ((*(int *)&gen_a7) == 5)) || ((*(int *)&gen_a7) == 6)) ||
      ((((*(int *)&gen_a7) == 7 || ((*(int *)&gen_a7) == 9)) || ((*(int *)&gen_a7) == 8)))))) {
    return 0;
  }
  sVar1 = (short)param_1;
  if (((*(uint *)&gen_a1) == 0) && (sVar1 != 0)) {
    if (sVar1 != -1) {
      return 0;
    }
  }
  else if ((sVar1 != -1) && ((sVar1 != 0 && ((*(uint *)&gen_a1) != 0)))) {
    (*(uint *)(gen_frame + 0x38)) = param_1 & 0xffff;
    this = param_9;
    if (param_9 == (undefined *)0x0) {
      this = (undefined *)F_005eee70(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) GEN_EDX_ARG,param_1);
    }
    goto LAB_00a1d1a7;
  }
  (*(uint *)(gen_frame + 0x38)) = 0xffff;
  this = (undefined *)F_005f2f30(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x10) GEN_EDX_ARG);
LAB_00a1d1a7: ;
  uVar3 = (*(uint *)&gen_a1);
  if ((*(uint *)&gen_a1) == 0) {
    uVar3 = param_7 | 0xfffffc00;
  }
  (*(undefined2 *)(gen_frame + 0x32)) = *(undefined2 *)((int)this + 8);
  (*(uint *)(gen_frame + 0x34)) = uVar3;
  (*(undefined2 *)(gen_frame + 0x30)) = 0x6fe;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined2 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined2 *)(gen_frame + 0x30));
  (*(undefined4 *)(gen_frame + 0x20)) = param_3;
  (*(int *)(gen_frame + 0x24)) = (*(int *)&gen_a7);
  (*(undefined2 *)(gen_frame + 0x28)) = 0x100;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  pvVar2 = (undefined *)F_00406b90(0xf0,0,0);
  if (pvVar2 == (undefined *)0x0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = (undefined *)F_005f3790(pvVar2 GEN_EDX_ARG);
  }
  F_005fcda0(pvVar2 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0xc)),param_4,param_6);
  if ((((short)(*(uint *)(gen_frame + 0x38)) == -1) && ((*(int *)&gen_a7) != 9)) && ((*(int *)&gen_a7) != 8)) {
    F_005f8840(this GEN_EDX_ARG,pvVar2);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00a1d250 */
GEN_FRAME unsigned int F_00a1d250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1d250u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    *(undefined1 *)(param_1 + uVar3) = *((undefined1 *)GEN_TOP((*(int *)(param_2 + 0x5c) + uVar3 + param_2)));
    *(undefined1 *)(param_1 + 1 + uVar3) =
         *((undefined1 *)GEN_TOP((*(int *)(param_2 + 0x5c) + uVar3 + 1 + param_2)));
    uVar3 = uVar3 + 2;
  } while (uVar3 < 0x1a);
  iVar2 = *(int *)(param_2 + 0x54);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(iVar2 + 4 + param_2);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(iVar2 + param_2);
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(iVar2 + 8 + param_2);
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)(param_2 + 0x54) + 0x20 + param_2)));
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x22) = *puVar1;
  *(undefined1 *)(param_1 + 0x23) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)(param_2 + 0x54) + 0x40 + param_2)));
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x26) = *puVar1;
  *(undefined1 *)(param_1 + 0x27) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)(param_2 + 0x54) + 0x60 + param_2)));
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x2a) = *puVar1;
  *(undefined1 *)(param_1 + 0x2b) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)(param_2 + 0x54) + 0x80 + param_2)));
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x2e) = *puVar1;
  *(undefined1 *)(param_1 + 0x2f) = puVar1[8];
  iVar2 = *(int *)(param_2 + 100);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar2 + 4 + param_2);
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(iVar2 + param_2);
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(iVar2 + 8 + param_2);
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x20 + *(int *)(param_2 + 100))));
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x36) = *puVar1;
  *(undefined1 *)(param_1 + 0x37) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x40 + *(int *)(param_2 + 100))));
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x3a) = *puVar1;
  *(undefined1 *)(param_1 + 0x3b) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x80 + *(int *)(param_2 + 100))));
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x42) = *puVar1;
  *(undefined1 *)(param_1 + 0x43) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x60 + *(int *)(param_2 + 100))));
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x3e) = *puVar1;
  *(undefined1 *)(param_1 + 0x3f) = puVar1[8];
  return 0;
}

/* ref: FUN_00a1d3a0 */
GEN_FRAME unsigned int F_00a1d3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1d3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  *param_1 = *(undefined2 *)(param_2 + 0x5c);
  iVar2 = *(int *)(param_2 + 0x54);
  param_1[2] = *(undefined2 *)(iVar2 + 4 + param_2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(iVar2 + param_2);
  *(undefined1 *)((int)param_1 + 7) = *(undefined1 *)(iVar2 + 8 + param_2);
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x20 + *(int *)(param_2 + 0x54))));
  param_1[4] = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 5) = *puVar1;
  *(undefined1 *)((int)param_1 + 0xb) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x40 + *(int *)(param_2 + 0x54))));
  param_1[6] = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 7) = *puVar1;
  *(undefined1 *)((int)param_1 + 0xf) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x60 + *(int *)(param_2 + 0x54))));
  param_1[8] = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 9) = *puVar1;
  *(undefined1 *)((int)param_1 + 0x13) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x80 + *(int *)(param_2 + 0x54))));
  param_1[10] = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0xb) = *puVar1;
  *(undefined1 *)((int)param_1 + 0x17) = puVar1[8];
  return 0;
}

/* ref: FUN_00a1d470 */
GEN_NOFRAME unsigned int F_00a1d470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1d470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  F_004ee9d0(((float *)(gen_frame + 0x0)),&REFG(float, 0x1302c90),in_eax);
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x14)) = ((float *)(gen_frame + 0x0))[0];
  F_0054ca80(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x10)) * (float10)0);
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x14)) * (float10)0);
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  fVar3 = ((float10)GEN_TOD(atan2((float10)fVar1,(float10)fVar2)));
  (*(float *)(gen_frame + 0x2c)) = (float)fVar3;
  *param_2 = (float)fVar3;
  return 0;
}

/* ref: FUN_00a1d4f0 */
GEN_FRAME unsigned int F_00a1d4f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa1d4f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_esi = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = REFG(float, 0x1087f04);
  fVar2 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fcos((float10)param_2)));
  in_esi[1] = 0.0;
  *in_esi = (float)fVar3;
  in_esi[4] = 0.0;
  in_esi[5] = fVar1;
  in_esi[6] = 0.0;
  in_esi[9] = 0.0;
  in_esi[2] = ((float)GEN_TOF(-(float10)(float)fVar2));
  in_esi[0xc] = 0.0;
  in_esi[0xd] = 0.0;
  in_esi[8] = (float)fVar2;
  in_esi[0xe] = 0.0;
  in_esi[10] = (float)fVar3;
  return 0;
}

/* ref: FUN_00a1d570 */
GEN_NOFRAME unsigned int F_00a1d570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1d570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  F_004f4130(((float *)(gen_frame + 0x0)),&REFG(float, 0x1302c90),in_eax);
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x14)) = ((float *)(gen_frame + 0x0))[0];
  F_0054ca80(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x10)) * (float10)0);
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x14)) * (float10)0);
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  fVar3 = ((float10)GEN_TOD(atan2((float10)fVar1,(float10)fVar2)));
  (*(float *)(gen_frame + 0x2c)) = (float)fVar3;
  *param_2 = (float)fVar3;
  return 0;
}

/* ref: FUN_00a1d5f0 */
GEN_FRAME unsigned int F_00a1d5f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa1d5f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  *in_esi = 0;
  fVar1 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * fVar2))));
  in_esi[1] = (undefined4)gen_fl2bits((float)fVar1);
  in_esi[2] = 0;
  fVar2 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * fVar2))));
  in_esi[3] = (undefined4)gen_fl2bits((float)fVar2);
  return 0;
}

/* ref: FUN_00a1d660 */
GEN_FRAME uint F_00a1d660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1d660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = REFG(int, 0x1370b90);
  *param_1 = *(undefined4 *)(REFG(int, 0x1370b90) + 0x90);
  uVar1 = *(uint *)(iVar2 + 0x94);
  *param_2 = uVar1;
  return uVar1;
}

/* ref: FUN_00a1d780 */
GEN_FRAME float10 F_00a1d780(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xa1d780u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar3;
  float10 fVar4;
  
  if (GEN_ISNAN((*(float *)&gen_args[0])) != (GEN_ISNAN((*(float *)&gen_args[0])) || (*(float *)&gen_args[0]) == 0.0)) {
    return (float10)(*(float *)&gen_args[1]);
  }
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar3 = &(*(float *)&gen_args[1]);
  if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
    pfVar3 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar3)) {
    pfVar3 = &(*(float *)(gen_frame + 0x4));
  }
  fVar1 = *pfVar3;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  fVar4 = (float10)fVar1;
  if (0.0 < (*(float *)&gen_args[0])) {
    fVar1 = (float)(fVar4 - (float10)REFG(double, 0x1088130));
    (*(float *)(gen_frame + 0x4)) = fVar1;
    fVar1 = ((float)GEN_TOF(ABS((float10)fVar1)));
    (*(float *)(gen_frame + 0x4)) = fVar1;
    fVar4 = ((float10)GEN_TOD(pow((float10)fVar1,(float10)(*(float *)&gen_args[2]))));
    (*(float *)(gen_frame + 0x4)) = (float)fVar4;
    fVar4 = (float10)1 - (float10)(float)fVar4;
  }
  else {
    fVar4 = ((float10)GEN_TOD(pow(fVar4,(float10)(*(float *)&gen_args[2]))));
    (*(float *)(gen_frame + 0x4)) = (float)fVar4;
    fVar4 = (float10)(float)fVar4;
  }
  (*(float *)(gen_frame + 0x8)) = (float)fVar4;
  return (float10)((float)GEN_TOF((((float10)(float)fVar4 - (float10)(*(float *)&gen_args[1])) *
                          (float10)((float)GEN_TOF(ABS((float10)(*(float *)&gen_args[0])))) + (float10)(*(float *)&gen_args[1]))));
}

/* ref: FUN_00a1d840 */
GEN_FRAME float10 F_00a1d840(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xa1d840u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar3;
  float10 fVar4;
  
  if (GEN_ISNAN((*(float *)&gen_args[0])) != (GEN_ISNAN((*(float *)&gen_args[0])) || (*(float *)&gen_args[0]) == 0.0)) {
    return (float10)(*(float *)&gen_args[1]);
  }
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar3 = &(*(float *)&gen_args[1]);
  if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
    pfVar3 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar3)) {
    pfVar3 = &(*(float *)(gen_frame + 0x4));
  }
  fVar1 = *pfVar3;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  fVar4 = (float10)fVar1;
  if (0.0 < (*(float *)&gen_args[0])) {
    if (fVar1 < REFG(float, 0x1088068)) {
      (*(float *)(gen_frame + 0x4)) = (float)(fVar4 + fVar4);
      fVar4 = ((float10)GEN_TOD(pow((float10)(float)(fVar4 + fVar4),(float10)(*(float *)&gen_args[2]))));
      (*(float *)(gen_frame + 0x4)) = (float)fVar4;
      fVar4 = (float10)(float)fVar4 * (float10)REFG(double, 0x1088108);
      goto LAB_00a1d952;
    }
    fVar1 = ((float)GEN_TOF((((fVar4 - (float10)REFG(double, 0x1088108)) + (fVar4 - (float10)REFG(double, 0x1088108))) -
                   (float10)REFG(double, 0x1088130))));
    (*(float *)(gen_frame + 0x4)) = fVar1;
    fVar1 = ((float)GEN_TOF(ABS((float10)fVar1)));
    (*(float *)(gen_frame + 0x4)) = fVar1;
    fVar4 = ((float10)GEN_TOD(pow((float10)fVar1,(float10)(*(float *)&gen_args[2]))));
    (*(float *)(gen_frame + 0x4)) = (float)fVar4;
    fVar4 = (float10)1 - (float10)(float)fVar4;
  }
  else {
    if (fVar1 < REFG(float, 0x1088068)) {
      fVar1 = ((float)GEN_TOF(((fVar4 + fVar4) - (float10)REFG(double, 0x1088130))));
      (*(float *)(gen_frame + 0x4)) = fVar1;
      fVar1 = ((float)GEN_TOF(ABS((float10)fVar1)));
      (*(float *)(gen_frame + 0x4)) = fVar1;
      fVar4 = ((float10)GEN_TOD(pow((float10)fVar1,(float10)(*(float *)&gen_args[2]))));
      (*(float *)(gen_frame + 0x4)) = (float)fVar4;
      fVar4 = ((float10)1 - (float10)(float)fVar4) * (float10)REFG(double, 0x1088108);
      goto LAB_00a1d952;
    }
    fVar1 = ((float)GEN_TOF(((fVar4 - (float10)REFG(double, 0x1088108)) + (fVar4 - (float10)REFG(double, 0x1088108)))));
    (*(float *)(gen_frame + 0x4)) = fVar1;
    fVar4 = ((float10)GEN_TOD(pow((float10)fVar1,(float10)(*(float *)&gen_args[2]))));
    (*(float *)(gen_frame + 0x4)) = (float)fVar4;
    fVar4 = (float10)(float)fVar4;
  }
  fVar4 = (float10)REFG(double, 0x1088108) + fVar4 * (float10)REFG(double, 0x1088108);
LAB_00a1d952: ;
  (*(float *)(gen_frame + 0x8)) = (float)fVar4;
  return (float10)((float)GEN_TOF((((float10)(float)fVar4 - (float10)(*(float *)&gen_args[1])) *
                          (float10)((float)GEN_TOF(ABS((float10)(*(float *)&gen_args[0])))) + (float10)(*(float *)&gen_args[1]))));
}

/* ref: FUN_00a1d980 */
GEN_FRAME uint F_00a1d980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa1d980u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  uint param_6 = (uint)gen_a5;
  float10 fVar1;
  
  if ((char)param_6 == '\0') {
    fVar1 = F_00a1d780(param_5,param_4,REFG(float, 0x1087ef8));
  }
  else {
    fVar1 = F_00a1d840(param_5,param_4,REFG(float, 0x1087ef8));
  }
  fVar1 = (float10)(float)fVar1;
  *param_1 = ((float)GEN_TOF((fVar1 * ((float10)*param_3 - (float10)*(float *)param_2) +
                    (float10)*(float *)param_2)));
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) +
                      fVar1 * ((float10)param_3[1] - (float10)*(float *)(param_2 + 4)))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) +
                      ((float10)param_3[2] - (float10)*(float *)(param_2 + 8)) * fVar1)));
  return (uint)param_1;
}

/* ref: FUN_00a1da10 */
GEN_FRAME uint F_00a1da10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa1da10u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint param_7 = (uint)gen_a6;
  F_00a1d980(param_1,param_2,param_3,(float)((float10)param_4 / (float10)param_5),param_6,param_7)
  ;
  return param_1;
}

/* ref: FUN_00a1da50 */
GEN_FRAME uint F_00a1da50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa1da50u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  uint param_6 = (uint)gen_a5;
  float10 fVar1;
  
  if ((char)param_6 == '\0') {
    fVar1 = F_00a1d780(param_5,param_4,REFG(float, 0x1087ef8));
  }
  else {
    fVar1 = F_00a1d840(param_5,param_4,REFG(float, 0x1087ef8));
  }
  F_009fac00(param_1,param_2,param_3,(float)fVar1);
  return param_1;
}

/* ref: FUN_00a1dab0 */
GEN_FRAME uint F_00a1dab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa1dab0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint param_7 = (uint)gen_a6;
  float10 fVar1;
  
  if ((char)param_7 == '\0') {
    fVar1 = F_00a1d780(param_6,(float)((float10)param_4 / (float10)param_5),REFG(float, 0x1087ef8));
  }
  else {
    fVar1 = F_00a1d840(param_6,(float)((float10)param_4 / (float10)param_5),REFG(float, 0x1087ef8));
  }
  F_009fac00(param_1,param_2,param_3,(float)fVar1);
  return param_1;
}

/* ref: FUN_00a1db10 */
GEN_NOFRAME uint F_00a1db10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa1db10u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  uint param_6 = (uint)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  float10 fVar2;
  
  puVar1 = (undefined4 *)F_00a1d980(&(*(undefined4 *)(gen_frame + 0x0)),param_2,param_3,param_4,param_5,param_6);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  if ((char)param_6 == '\0') {
    fVar2 = F_00a1d780(param_5,param_4,REFG(float, 0x1087ef8));
  }
  else {
    fVar2 = F_00a1d840(param_5,param_4,REFG(float, 0x1087ef8));
  }
  (*(float *)(gen_frame + 0x1c)) = (float)fVar2;
  F_009fac00(&(*(undefined4 *)(gen_frame + 0x0)),param_2 + 0x10,param_3 + 0x10,(float)fVar2);
  param_1[4] = (*(undefined4 *)(gen_frame + 0x0));
  param_1[5] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[6] = (*(undefined4 *)(gen_frame + 0x8));
  param_1[7] = (*(undefined4 *)(gen_frame + 0xc));
  puVar1 = (undefined4 *)
           F_00a1d980(&(*(undefined4 *)(gen_frame + 0x0)),param_2 + 0x20,param_3 + 0x20,param_4,param_5,param_6);
  param_1[8] = *puVar1;
  param_1[9] = puVar1[1];
  param_1[10] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00a1dc20 */
GEN_FRAME uint F_00a1dc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa1dc20u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  F_00a1db10(param_1,param_2,param_3,(float)((float10)param_4 / (float10)param_5),param_6,param_7)
  ;
  return param_1;
}

/* ref: FUN_00a1e0b0 */
GEN_FRAME uint F_00a1e0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a20110(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00a1e0d0 */
GEN_FRAME uint F_00a1e0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_006b1f20(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00a1e0f0 */
GEN_NOFRAME uint F_00a1e0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  F_004ef0c0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,param_2);
  uVar1 = F_009fad70(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  *param_1 = (*(undefined4 *)(gen_frame + 0x0));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a1e160 */
GEN_FRAME unsigned int F_00a1e160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00a1d570(param_2,param_1);
  return;
}

/* ref: FUN_00a1e180 */
GEN_FRAME unsigned int F_00a1e180(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa1e180u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  *(undefined4 *)param_1 = 0;
  fVar1 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * fVar2))));
  *(float *)(param_1 + 4) = (float)fVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  fVar2 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * fVar2))));
  *(float *)(param_1 + 0xc) = (float)fVar2;
  return 0;
}

/* ref: FUN_00a1e1d0 */
GEN_FRAME unsigned int F_00a1e1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00a1d470(param_2,param_1);
  return;
}

/* ref: FUN_00a1e1f0 */
GEN_FRAME uint F_00a1e1f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa1e1f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = REFG(float, 0x1087f04);
  fVar2 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fcos((float10)param_2)));
  *param_1 = (float)fVar3;
  param_1[1] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = fVar1;
  param_1[6] = 0.0;
  param_1[2] = ((float)GEN_TOF(-(float10)(float)fVar2));
  param_1[9] = 0.0;
  param_1[0xc] = 0.0;
  param_1[8] = (float)fVar2;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[10] = (float)fVar3;
  return (uint)param_1;
}

/* ref: FUN_00a1e2e0 */
GEN_NOFRAME uint F_00a1e2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1e2e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  undefined * this;
  undefined4 * this_00;
  
  if (0xff < REFG(int, 0x1379cb4)) {
    return 0;
  }
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,0xa0,0x10)));
  if (this == (undefined *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = (undefined4 *)F_006973f0(this GEN_EDX_ARG);
  }
  bVar2 = F_00697440(this_00 GEN_EDX_ARG);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10916ec)));
  if (bVar2 == 0) {
    if (this_00 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*this_00)(this_00 GEN_EDX_ARG,1);
    }
    return 0;
  }
  REFG(int, 0x1379cb4) = REFG(int, 0x1379cb4) + 1;
  *(undefined2 *)(this_00 + 0x25) = 0x6402;
  *(undefined1 *)((int)this_00 + 0x96) = 1;
  this_00[0x21] = uVar1;
  F_0068f8f0(this_00 GEN_EDX_ARG);
  this_00[0x22] = GEN_FLT_TO(this_00[0x22], REFG(float, 0x10928e4));
  return (uint)this_00;
}

/* ref: FUN_00a1e380 */
GEN_NOFRAME uint F_00a1e380(unsigned int gen_a0)
{
  GEN_ENTER(0xa1e380u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  undefined * this;
  undefined4 * in_ecx;
  
  if (0x1f < REFG(int, 0x1379cb8)) {
    return 0;
  }
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,0x80,0x10)));
  if (this == (undefined *)0x0) {
    in_ecx = (undefined4 *)0x0;
  }
  else {
    in_ecx = (undefined4 *)F_00697180(this GEN_EDX_ARG);
  }
  bVar1 = F_006971c0(in_ecx GEN_EDX_ARG);
  if (bVar1 == 0) {
    if (in_ecx != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*in_ecx)(in_ecx GEN_EDX_ARG,1);
    }
    return 0;
  }
  REFG(int, 0x1379cb8) = REFG(int, 0x1379cb8) + 1;
  return (uint)in_ecx;
}

/* ref: FUN_00a1e3e0 */
GEN_FRAME uint F_00a1e3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1e3e0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 uVar2;
  undefined * this;
  int * this_00;
  
  this_00 = param_3;
  if (param_3 == (int *)0x0) {
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,0x80,0x10)));
    if (this == (undefined *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      this_00 = (int *)F_00696b10(this GEN_EDX_ARG);
    }
  }
  F_00696b50(this_00 GEN_EDX_ARG);
  F_0068bd00(REFG(void * PTR32, 0x1371294) GEN_EDX_ARG,this_00);
  F_00690620(this_00 GEN_EDX_ARG);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10947a4)));
  if ((*(uint *)&REFG(undefined, 0x14a2b10) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a2b10) = *(uint *)&REFG(undefined, 0x14a2b10) | 1;
    REFG(float, 0x14a2b00) = REFG(float, 0x1087f04);
    REFG(float, 0x14a2b04) = REFG(float, 0x1087f04);
    REFG(float, 0x14a2b08) = REFG(float, 0x1087f04);
    REFG(float, 0x14a2b0c) = REFG(float, 0x1087f04);
  }
  *(uint *)(this_00[0x1c] + 0xc) = param_1 & 0xff;
  iVar1 = this_00[0x1c];
  *(undefined4 *)(iVar1 + 0x14) = GEN_FLT_TO(*(undefined4 *)(iVar1 + 0x14), REFG(float, 0x14a2b00));
  *(undefined4 *)(iVar1 + 0x18) = GEN_FLT_TO(*(undefined4 *)(iVar1 + 0x18), REFG(float, 0x14a2b04));
  *(undefined4 *)(iVar1 + 0x1c) = GEN_FLT_TO(*(undefined4 *)(iVar1 + 0x1c), REFG(float, 0x14a2b08));
  *(undefined4 *)(iVar1 + 0x20) = GEN_FLT_TO(*(undefined4 *)(iVar1 + 0x20), REFG(float, 0x14a2b0c));
  *(undefined4 *)(this_00[0x1c] + 0x74) = uVar2;
  ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x10))(this_00 GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x18))(this_00 GEN_EDX_ARG);
  return (uint)this_00;
}

/* ref: FUN_00a1e4c0 */
GEN_FRAME uint F_00a1e4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,0x2d0,0x10)));
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = (undefined *)F_00698e40(pvVar1 GEN_EDX_ARG);
  }
  F_00699000(pvVar1 GEN_EDX_ARG);
  F_0068bd00(REFG(void * PTR32, 0x1371294) GEN_EDX_ARG,pvVar1);
  F_00690620(pvVar1 GEN_EDX_ARG);
  F_0068fce0(pvVar1 GEN_EDX_ARG,param_1);
  return (uint)pvVar1;
}

/* ref: FUN_00a1e520 */
GEN_FRAME uint F_00a1e520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1e520u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[2]);
  if ((*(undefined * PTR32 *)&gen_args[2]) == (undefined *)0x0) {
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,0xa0,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = (undefined *)F_006955c0(pvVar1 GEN_EDX_ARG);
    }
  }
  F_00695660(pvVar1 GEN_EDX_ARG);
  F_0068bd00(REFG(void * PTR32, 0x1371294) GEN_EDX_ARG,pvVar1);
  F_00690620(pvVar1 GEN_EDX_ARG);
  F_004ff2f0(&(*(undefined * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  uVar2 = F_00503ef0(&(*(undefined * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[0]));
  F_00695b00(pvVar1 GEN_EDX_ARG,uVar2,(*(undefined4 *)&gen_args[0]));
  return (uint)pvVar1;
}

/* ref: FUN_00a1e5a0 */
GEN_FRAME uint F_00a1e5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,0x750,0x10)));
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = (undefined *)F_006ae690(pvVar1 GEN_EDX_ARG);
  }
  F_006ac620(pvVar1 GEN_EDX_ARG,param_1);
  F_0068bd00(REFG(void * PTR32, 0x1371294) GEN_EDX_ARG,pvVar1);
  F_00690620(pvVar1 GEN_EDX_ARG);
  return (uint)pvVar1;
}

/* ref: FUN_00a1e5f0 */
GEN_FRAME unsigned int F_00a1e5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e5f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1088100);
  bVar1 = param_2[2];
  fVar5 = (float10)*(float *)(param_2 + 4);
  iVar2 = *(int *)(param_1 + 0x70);
  fVar6 = (float10)((float)GEN_TOF((fVar5 * ((float10)*param_2 / fVar4))));
  fVar7 = (float10)((float)GEN_TOF((((float10)param_2[1] / fVar4) * fVar5)));
  *(float *)(iVar2 + 0x14) = (float)(fVar6 * fVar6);
  fVar4 = (float10)((float)GEN_TOF((((float10)bVar1 / fVar4) * fVar5)));
  *(float *)(iVar2 + 0x18) = (float)(fVar7 * fVar7);
  *(float *)(iVar2 + 0x1c) = (float)(fVar4 * fVar4);
  *(undefined4 *)(iVar2 + 0x20) = uVar3;
  return 0;
}

/* ref: FUN_00a1e7d0 */
GEN_NOFRAME unsigned int F_00a1e7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float10 fVar10;
  
  uVar1 = *param_2;
  uVar2 = param_2[6];
  uVar3 = param_2[1];
  fVar4 = gen_bits2f(param_2[4]);
  fVar9 = (float)(((float10)GEN_TOD(gen_bits2f(param_2[3]))) * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x1c)) = fVar9;
  uVar5 = param_2[7];
  uVar6 = param_2[2];
  fVar7 = gen_bits2f(param_2[5]);
  uVar8 = param_2[8];
  fVar10 = ((float10)GEN_TOD(fsin((float10)fVar9)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar10;
  (*(float *)(gen_frame + 0x0)) = (float)fVar10;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  fVar10 = ((float10)GEN_TOD(fcos((float10)fVar9)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar10;
  (*(float *)(gen_frame + 0xc)) = (float)fVar10;
  F_0054d030(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,fVar4);
  F_0054d0f0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,fVar7);
  *param_1 = uVar1;
  param_1[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x0)));
  param_1[1] = uVar3;
  param_1[5] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[2] = uVar6;
  param_1[6] = (*(undefined4 *)(gen_frame + 0x8));
  param_1[7] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
  param_1[8] = uVar2;
  param_1[9] = uVar5;
  param_1[10] = uVar8;
  return 0;
}

/* ref: FUN_00a1ea10 */
GEN_NOFRAME uint F_00a1ea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ea10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  F_004ef0c0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)(param_2 + 4));
  uVar2 = F_009fad70(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  *param_1 = *param_2;
  param_1[3] = (*(undefined4 *)(gen_frame + 0x0));
  param_1[6] = param_2[8];
  uVar1 = param_2[1];
  param_1[4] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[1] = uVar1;
  param_1[7] = param_2[9];
  uVar1 = param_2[2];
  param_1[5] = (*(undefined4 *)(gen_frame + 0x8));
  param_1[2] = uVar1;
  param_1[8] = param_2[10];
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a1eab0 */
GEN_NOFRAME uint F_00a1eab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1eab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  float fVar1;
  undefined4 * puVar2;
  uint extraout_EAX = 0;
  float10 fVar3;
  float10 fVar4;
  
  puVar2 = (undefined4 *)F_00a5feb0(param_2 GEN_EDX_ARG);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_2 + 0xb0) * (float10)REFG(double, 0x1088108))));
  fVar4 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  fVar3 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  param_1[4] = 0;
  param_1[5] = (undefined4)gen_fl2bits((float)fVar4);
  param_1[6] = 0;
  param_1[7] = (undefined4)gen_fl2bits((float)fVar3);
  fVar4 = F_00a5f1d0(param_2 GEN_EDX_ARG);
  fVar1 = (float)fVar4;
  param_1[8] = (undefined4)gen_fl2bits(fVar1);
  param_1[9] = (undefined4)gen_fl2bits(fVar1);
  param_1[10] = (undefined4)gen_fl2bits(fVar1);
  return extraout_EAX;
}

/* ref: FUN_00a1eb70 */
GEN_NOFRAME unsigned int F_00a1eb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1eb70u, gen_a0, gen_a1, 0u, 0u);
  float * in_esi = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  F_00a201b0(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,param_2);
  F_004ee9d0(((float *)(gen_frame + 0x0)),&REFG(float, 0x1302c90),((undefined1 *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x14)) = ((float *)(gen_frame + 0x0))[0];
  F_0054ca80(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x10)) * (float10)0);
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x14)) * (float10)0);
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  fVar3 = ((float10)GEN_TOD(atan2((float10)fVar1,(float10)fVar2)));
  (*(float *)(gen_frame + 0x2c)) = (float)fVar3;
  *in_esi = (float)fVar3;
  return (uint)(F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80) GEN_EDX_ARG));
}

/* ref: FUN_00a1ec20 */
GEN_FRAME unsigned int F_00a1ec20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ec20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00a1eb70(param_1,param_2);
  return;
}

/* ref: FUN_00a1ec40 */
GEN_NOFRAME uint F_00a1ec40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1ec40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  fVar5 = (float10)0;
  (*(float *)(gen_frame + 0x70)) = (float)fVar5;
  (*(float *)(gen_frame + 0x74)) = (float)fVar5;
  (*(float *)(gen_frame + 0x78)) = (float)fVar5;
  fVar1 = param_2[9];
  ((float *)(gen_frame + 0x40))[0] = param_2[8];
  ((float *)(gen_frame + 0x40))[1] = 0.0;
  ((float *)(gen_frame + 0x40))[2] = 0.0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(float *)(gen_frame + 0x54)) = fVar1;
  (*(float *)(gen_frame + 0x68)) = param_2[10];
  F_004efe70(((float *)(gen_frame + 0x40)) GEN_EDX_ARG,(uint)(param_2 + 4));
  fVar2 = *param_2;
  fVar1 = param_3[9];
  ((float *)(gen_frame + 0x0))[0] = param_3[8];
  (*(float *)(gen_frame + 0x70)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x70)));
  ((float *)(gen_frame + 0x0))[1] = 0.0;
  ((float *)(gen_frame + 0x0))[2] = 0.0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(float *)(gen_frame + 0x74)) = (float)((float10)param_2[1] + (float10)(*(float *)(gen_frame + 0x74)));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(float *)(gen_frame + 0x78)) = (float)((float10)param_2[2] + (float10)(*(float *)(gen_frame + 0x78)));
  fVar5 = (float10)0;
  (*(float *)(gen_frame + 0x14)) = fVar1;
  (*(float *)(gen_frame + 0x30)) = (float)fVar5;
  (*(float *)(gen_frame + 0x28)) = param_3[10];
  (*(float *)(gen_frame + 0x34)) = (float)fVar5;
  (*(float *)(gen_frame + 0x38)) = (float)fVar5;
  F_004efe70(((float *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)(param_3 + 4));
  (*(float *)(gen_frame + 0x30)) = (float)((float10)*param_3 + (float10)(*(float *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)param_3[1] + (float10)(*(float *)(gen_frame + 0x34)));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)param_3[2] + (float10)(*(float *)(gen_frame + 0x38)));
  F_004ef9d0(((float *)(gen_frame + 0x40)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x0)));
  F_0046f390(((float *)(gen_frame + 0x40)) GEN_EDX_ARG);
  F_0046f390(&(*(undefined4 *)(gen_frame + 0x50)) GEN_EDX_ARG);
  F_0046f390(&(*(undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_005fe8d0(param_1 GEN_EDX_ARG,((float *)(gen_frame + 0x40)));
  fVar1 = param_2[9];
  fVar2 = param_3[9];
  fVar3 = param_3[10];
  fVar4 = param_2[10];
  *(float *)((int)param_1 + 0x20) = (float)((float10)param_3[8] * (float10)param_2[8]);
  *(float *)((int)param_1 + 0x24) = (float)((float10)fVar1 * (float10)fVar2);
  *(float *)((int)param_1 + 0x28) = (float)((float10)fVar3 * (float10)fVar4);
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00a1f090 */
GEN_NOFRAME uint F_00a1f090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa1f090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 * puVar1;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_3;
  param_1[2] = param_4[2];
  F_004ef0c0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,(uint)(param_4 + 4));
  F_009fad70(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  puVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  *param_2 = (*(undefined4 *)(gen_frame + 0x0));
  param_2[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_2[2] = (*(undefined4 *)(gen_frame + 0x8));
  *(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_4[8];
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[1] = param_4[9];
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[2] = param_4[10];
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70) GEN_EDX_ARG);
  return (uint)puVar1;
}

/* ref: FUN_00a1f1d0 */
GEN_NOFRAME uint F_00a1f1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1f1d0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)(param_1 + 0x40) = (*(undefined4 *)(gen_frame + 0x10));
  *(undefined4 *)(param_1 + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)(param_1 + 0x44) = (*(undefined4 *)(gen_frame + 0x14));
  *(undefined4 *)(param_1 + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
  *(undefined4 *)(param_1 + 0x48) = (*(undefined4 *)(gen_frame + 0x18));
  *(undefined4 *)(param_1 + 0x4c) = (*(undefined4 *)(gen_frame + 0x1c));
  *(undefined4 *)(param_1 + 0x50) = (*(undefined4 *)(gen_frame + 0x20));
  *(undefined4 *)(param_1 + 0x54) = (*(undefined4 *)(gen_frame + 0x24));
  *(undefined4 *)(param_1 + 0x58) = (*(undefined4 *)(gen_frame + 0x28));
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
  return param_1;
}

/* ref: FUN_00a1f260 */
GEN_NOFRAME uint F_00a1f260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1f260u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)(param_1 + 0x40) = (*(undefined4 *)(gen_frame + 0x10));
  *(undefined4 *)(param_1 + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)(param_1 + 0x44) = (*(undefined4 *)(gen_frame + 0x14));
  *(undefined4 *)(param_1 + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
  *(undefined4 *)(param_1 + 0x48) = (*(undefined4 *)(gen_frame + 0x18));
  *(undefined4 *)(param_1 + 0x4c) = (*(undefined4 *)(gen_frame + 0x1c));
  *(undefined4 *)(param_1 + 0x50) = (*(undefined4 *)(gen_frame + 0x20));
  *(undefined4 *)(param_1 + 0x54) = (*(undefined4 *)(gen_frame + 0x24));
  *(undefined4 *)(param_1 + 0x58) = (*(undefined4 *)(gen_frame + 0x28));
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
  return param_1;
}

/* ref: FUN_00a1f2f0 */
GEN_NOFRAME uint F_00a1f2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1f2f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  byte bVar5;
  ushort * puVar6;
  ushort * PTR32 * ppuVar7;
  ushort * puVar8;
  uint uVar9;
  uint3 uVar10;
  int iVar11;
  
  F_00a1e7d0(&(*(int *)(gen_frame + 0x0)),param_2 + 0xc);
  param_1[0xc] = (*(int *)(gen_frame + 0x0));
  param_1[0xd] = (*(int *)(gen_frame + 0x4));
  param_1[0xe] = (*(int *)(gen_frame + 0x8));
  param_1[0x10] = (*(int *)(gen_frame + 0x10));
  param_1[0x11] = (*(int *)(gen_frame + 0x14));
  param_1[0x12] = (*(int *)(gen_frame + 0x18));
  param_1[9] = param_1[9] | 2;
  param_1[0x13] = (*(int *)(gen_frame + 0x1c));
  if (*(int *)(param_2 + 0x30) == 5) {
    param_1[0x14] = (*(int *)(gen_frame + 0x20));
    param_1[0x15] = (*(int *)(gen_frame + 0x24));
    param_1[0x16] = (*(int *)(gen_frame + 0x28));
    param_1[9] = param_1[9] | 2;
  }
  F_00a1e5f0(param_1,param_2 + 0x4c);
  puVar8 = (ushort *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar1 = *(float *)(param_2 + 0x34);
  if (fVar1 <= REFG(float, 0x10ac108)) {
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x3c)) = 1;
    if (!(fVar1 <= REFG(float, 0x10e38bc))) {
      (*(undefined4 *)(gen_frame + 0x3c)) = 2;
    }
  }
  puVar6 = *(ushort * PTR32 *)(param_2 + 0x5c);
  iVar11 = param_1[0x1c];
  (*(ushort * PTR32 *)(gen_frame + 0x38)) = puVar6;
  (*(ushort * PTR32 *)(gen_frame + 0x34)) = (ushort *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094884)));
  ppuVar7 = &(*(ushort * PTR32 *)(gen_frame + 0x38));
  if (!(REFG(double, 0x1094800) < (double)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))))) {
    ppuVar7 = &(*(ushort * PTR32 *)(gen_frame + 0x34));
  }
  *(ushort * PTR32 *)(iVar11 + 0x50) = *ppuVar7;
  uVar4 = *(ushort *)(param_1[0x1c] + 8);
  puVar6 = (ushort *)(param_1[0x1c] + 8);
  cVar3 = *(char *)(param_2 + 0x5a);
  (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar6;
  *puVar6 = (ushort)(cVar3 != '\0') * 4 | uVar4 & 0xfffb;
  uVar4 = *(ushort *)(param_1[0x1c] + 8);
  puVar6 = (ushort *)(param_1[0x1c] + 8);
  cVar3 = *(char *)(param_2 + 0x59);
  (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar6;
  *puVar6 = (ushort)(cVar3 != '\0') << 3 | uVar4 & 0xfff7;
  uVar4 = *(ushort *)(param_1[0x1c] + 8);
  puVar6 = (ushort *)(param_1[0x1c] + 8);
  cVar3 = *(char *)(param_2 + 0x58);
  (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar6;
  *puVar6 = (ushort)(cVar3 != '\0') | uVar4 & 0xfffe;
  *(uint *)(param_1[0x1c] + 0xc) = (uint)*(byte *)(param_2 + 0x30);
  *(undefined4 *)(param_1[0x1c] + 0x58) = (*(undefined4 *)(gen_frame + 0x3c));
  iVar11 = param_1[0x1c];
  puVar6 = *(ushort * PTR32 *)(param_2 + 0x38);
  (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar8;
  (*(ushort * PTR32 *)(gen_frame + 0x38)) = puVar6;
  ppuVar7 = &(*(ushort * PTR32 *)(gen_frame + 0x38));
  if (!((float10)1 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))))) {
    ppuVar7 = &(*(ushort * PTR32 *)(gen_frame + 0x34));
  }
  *(ushort * PTR32 *)(iVar11 + 0x70) = *ppuVar7;
  *(undefined4 *)(param_1[0x1c] + 0x78) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1[0x1c] + 0x74) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1[0x1c] + 0x74) = *(undefined4 *)(param_2 + 0x44);
  uVar4 = *(ushort *)(param_1[0x1c] + 8);
  puVar8 = (ushort *)(param_1[0x1c] + 8);
  cVar3 = *(char *)(param_2 + 0x54);
  (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar8;
  *puVar8 = (ushort)(cVar3 != '\0') << 4 | uVar4 & 0xffef;
  iVar11 = param_1[0x1c];
  uVar2 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(iVar11 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(iVar11 + 100) = uVar2;
  *(undefined2 *)(param_1[0x1c] + 10) = *(undefined2 *)(param_2 + 0x68);
  bVar5 = (byte)*(ushort *)(param_1[0x1c] + 8);
  if (((bVar5 >> 3 & 1) == 0) && ((bVar5 >> 2 & 1) == 0)) {
    uVar9 = (uint)(*(ushort *)(param_1[0x1c] + 8) & 0xff00);
  }
  else {
    uVar9 = 1;
  }
  F_0068b3c0(param_1 GEN_EDX_ARG,uVar9);
  puVar8 = ((ushort *)GEN_TOP((*(int *)(param_2 + 0x48) + param_2)));
  (*(ushort * PTR32 *)(gen_frame + 0x38)) = puVar8;
  if ((puVar8 != (ushort *)0x0) && ((char)*puVar8 != '\0')) {
    F_004ff2f0(&(*(undefined4 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
    F_00503ef0(&(*(undefined4 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
    F_0068f510(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
  }
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG);
  uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x18))(param_1 GEN_EDX_ARG);
  uVar10 = (uint3)(uVar9 >> 8);
  if ((*(int *)(param_2 + 0x30) == 1) &&
     ((*(char *)(param_2 + 0x5a) != '\0' || (*(char *)(param_2 + 0x59) != '\0')))) {
    uVar9 = CONCAT31(uVar10,1);
  }
  else {
    uVar9 = (uint)uVar10 << 8;
  }
  if ((char)uVar9 != '\0') {
    iVar11 = param_1[0x1c];
    if ((iVar11 != 0) && (*(int *)(iVar11 + 0xc) != 1)) {
      iVar11 = 0;
    }
    *(int *)(REFG(int, 0x1371284) + 0x14) = iVar11;
    return uVar9;
  }
  uVar9 = *(uint *)(REFG(int, 0x1371284) + 0x14);
  if (uVar9 == param_1[0x1c]) {
    *(undefined4 *)(REFG(int, 0x1371284) + 0x14) = 0;
  }
  return uVar9;
}

/* ref: FUN_00a1f5f0 */
GEN_NOFRAME uint F_00a1f5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1f5f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  uVar1 = F_0068b710(param_1 GEN_EDX_ARG);
  (*(char *)(gen_frame + 0x3f)) = (char)uVar1;
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 200))(param_1 GEN_EDX_ARG);
  }
  F_00a1e7d0(&(*(int *)(gen_frame + 0x0)),param_2 + 0xc);
  param_1[0xc] = (*(int *)(gen_frame + 0x0));
  param_1[0xd] = (*(int *)(gen_frame + 0x4));
  param_1[0x10] = (*(int *)(gen_frame + 0x10));
  param_1[0xe] = (*(int *)(gen_frame + 0x8));
  param_1[0x11] = (*(uint *)(gen_frame + 0x14));
  param_1[0x12] = (*(int *)(gen_frame + 0x18));
  param_1[0x13] = (*(int *)(gen_frame + 0x1c));
  param_1[0x14] = (*(int *)(gen_frame + 0x20));
  param_1[0x15] = (*(int *)(gen_frame + 0x24));
  param_1[0x16] = (*(int *)(gen_frame + 0x28));
  param_1[9] = param_1[9] | 2;
  uVar1 = (*(uint *)(gen_frame + 0x14));
  if ((*(char *)(gen_frame + 0x3f)) != '\0') {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xcc))(param_1 GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00a1f6b0 */
GEN_NOFRAME uint F_00a1f6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1f6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 uVar1;
  uint uVar2;
  
  F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_2 + 0xc);
  *(undefined4 *)((int)param_1 + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)param_1 + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)param_1 + 0x40) = (*(undefined4 *)(gen_frame + 0x10));
  *(undefined4 *)((int)param_1 + 0x44) = (*(undefined4 *)(gen_frame + 0x14));
  *(undefined4 *)((int)param_1 + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
  *(undefined4 *)((int)param_1 + 0x48) = (*(undefined4 *)(gen_frame + 0x18));
  *(undefined4 *)((int)param_1 + 0x4c) = (*(undefined4 *)(gen_frame + 0x1c));
  *(undefined4 *)((int)param_1 + 0x50) = (*(undefined4 *)(gen_frame + 0x20));
  *(undefined4 *)((int)param_1 + 0x54) = (*(undefined4 *)(gen_frame + 0x24));
  *(undefined4 *)((int)param_1 + 0x58) = (*(undefined4 *)(gen_frame + 0x28));
  *(uint *)((int)param_1 + 0x24) = *(uint *)((int)param_1 + 0x24) | 2;
  if (*(int *)(param_2 + 0x38) == 1) {
    uVar1 = 1;
  }
  else if (*(int *)(param_2 + 0x38) == 3) {
    uVar1 = 3;
  }
  else {
    uVar1 = 2;
  }
  *(undefined1 *)((int)param_1 + 0x96) = 1;
  *(undefined1 *)((int)param_1 + 0x94) = uVar1;
  uVar1 = *(undefined1 *)(param_2 + 0x3d);
  *(undefined1 *)((int)param_1 + 0x96) = 1;
  *(undefined1 *)((int)param_1 + 0x95) = uVar1;
  *(undefined4 *)((int)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x40);
  F_0068f8f0(param_1 GEN_EDX_ARG);
  *(float *)((int)param_1 + 0x88) =
       ((float)GEN_TOF(((float10)*(int *)(param_2 + 0x44) / (float10)*(double *)&REFG(undefined, 0x10912a8))));
  *(undefined4 *)((int)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((int)param_1 + 0x90) = *(undefined4 *)(param_2 + 0x4c);
  uVar2 = F_006a7630(param_1 GEN_EDX_ARG,*(int *)(param_2 + 0x30) + param_2,*(int *)(param_2 + 0x50) + param_2
                       ,0);
  return uVar2;
}

/* ref: FUN_00a1f7d0 */
GEN_NOFRAME uint F_00a1f7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1f7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_2 + 0xc);
  *(undefined4 *)((int)param_1 + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)param_1 + 0x40) = (*(undefined4 *)(gen_frame + 0x10));
  *(undefined4 *)((int)param_1 + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)param_1 + 0x44) = (*(undefined4 *)(gen_frame + 0x14));
  *(undefined4 *)((int)param_1 + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
  *(undefined4 *)((int)param_1 + 0x48) = (*(undefined4 *)(gen_frame + 0x18));
  *(undefined4 *)((int)param_1 + 0x4c) = (*(undefined4 *)(gen_frame + 0x1c));
  *(undefined4 *)((int)param_1 + 0x50) = (*(undefined4 *)(gen_frame + 0x20));
  *(undefined4 *)((int)param_1 + 0x54) = (*(undefined4 *)(gen_frame + 0x24));
  *(undefined4 *)((int)param_1 + 0x58) = (*(undefined4 *)(gen_frame + 0x28));
  *(uint *)((int)param_1 + 0x24) = *(uint *)((int)param_1 + 0x24) | 2;
  bVar1 = F_006a7520(param_1 GEN_EDX_ARG,*(int *)(param_2 + 0x30) + param_2,*(int *)(param_2 + 0x34) + param_2
                       ,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a1fa60 */
GEN_NOFRAME uint F_00a1fa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1fa60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 * puVar2;
  
  puVar2 = param_3;
  switch((unsigned int)(uintptr_t)(*param_3)) {
  case 1: ;
    uVar1 = F_00a1f260(param_2,param_3);
    return uVar1;
  case 3: ;
    uVar1 = F_00a1f2f0(param_2,param_3);
    return uVar1;
  case 4: ;
    uVar1 = F_00a1f5f0(param_2,param_3);
    return uVar1;
  case 8: ;
  case 9: ;
    F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_3 + 3);
    *(undefined4 *)((int)param_2 + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
    *(undefined4 *)((int)param_2 + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
    *(undefined4 *)((int)param_2 + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
    *(undefined4 *)((int)param_2 + 0x40) = (*(undefined4 *)(gen_frame + 0x10));
    *(undefined4 *)((int)param_2 + 0x44) = (*(undefined4 *)(gen_frame + 0x14));
    *(uint *)((int)param_2 + 0x24) = *(uint *)((int)param_2 + 0x24) | 2;
    *(undefined4 *)((int)param_2 + 0x48) = (*(undefined4 *)(gen_frame + 0x18));
    *(undefined4 *)((int)param_2 + 0x4c) = (*(undefined4 *)(gen_frame + 0x1c));
    return (uint)param_2;
  case 0xc: ;
  case 0xe: ;
  case 0x10: ;
  case 0x2d: ;
    uVar1 = F_00a1f1d0(param_2,param_3);
    return uVar1;
  case 0xd: ;
    uVar1 = F_00a1f6b0(param_2,param_3);
    return uVar1;
  case 0x14: ;
    uVar1 = F_00a1f2f0(param_2,param_3);
    return uVar1;
  case 0x25: ;
  case 0x26: ;
  case 0x27: ;
  case 0x2e: ;
  case 0x49: ;
    F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_3 + 3);
    *(undefined4 *)((int)param_2 + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
    *(undefined4 *)((int)param_2 + 0x40) = (*(undefined4 *)(gen_frame + 0x10));
    *(undefined4 *)((int)param_2 + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
    *(undefined4 *)((int)param_2 + 0x44) = (*(undefined4 *)(gen_frame + 0x14));
    *(undefined4 *)((int)param_2 + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
    *(undefined4 *)((int)param_2 + 0x48) = (*(undefined4 *)(gen_frame + 0x18));
    *(undefined4 *)((int)param_2 + 0x4c) = (*(undefined4 *)(gen_frame + 0x1c));
    *(undefined4 *)((int)param_2 + 0x50) = (*(undefined4 *)(gen_frame + 0x20));
    *(undefined4 *)((int)param_2 + 0x54) = (*(undefined4 *)(gen_frame + 0x24));
    *(undefined4 *)((int)param_2 + 0x58) = (*(undefined4 *)(gen_frame + 0x28));
    *(uint *)((int)param_2 + 0x24) = *(uint *)((int)param_2 + 0x24) | 2;
    return (uint)param_2;
  case 0x2f: ;
    uVar1 = F_00a1f7d0(param_2,param_3);
    return uVar1;
  case 0x45: ;
    F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_3 + 3);
    puVar2 = (undefined4 *)F_0060aad0(param_2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return (uint)puVar2;
}

/* ref: FUN_00a1fd90 */
GEN_FRAME uint GEN_THISCALL F_00a1fd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1fd90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_00a1fdb0 */
GEN_FRAME uint F_00a1fdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xa1fdb0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  F_009fac00(param_1,param_2,param_3,param_4);
  return param_1;
}

/* ref: FUN_00a1fde0 */
GEN_FRAME uint F_00a1fde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1fde0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(float *)param_2;
  fVar1 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) *
                                                                (float10)*(float *)(param_2 + 8) +
                                                               (fVar1 * fVar1 +
                                                               (float10)*(float *)(param_2 + 4) *
                                                               (float10)*(float *)(param_2 + 4)))))))))));
  *(float *)param_1 = (float)(fVar1 * (float10)*(float *)param_2);
  *(float *)(param_1 + 4) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4))));
  *(float *)(param_1 + 8) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8))));
  fVar1 = (float10)*(float *)(param_2 + 0x10);
  fVar1 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 0x18)
                                                                * (float10)*(float *)(param_2 + 0x18
                                                                                     ) +
                                                               (fVar1 * fVar1 +
                                                               (float10)*(float *)(param_2 + 0x14) *
                                                               (float10)*(float *)(param_2 + 0x14)))))
                                              ))))));
  *(float *)(param_1 + 0x10) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 0x10))));
  *(float *)(param_1 + 0x14) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0x14) * fVar1)));
  *(float *)(param_1 + 0x18) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 0x18))));
  fVar1 = (float10)*(float *)(param_2 + 0x20);
  fVar1 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 0x28)
                                                                * (float10)*(float *)(param_2 + 0x28
                                                                                     ) +
                                                               (fVar1 * fVar1 +
                                                               (float10)*(float *)(param_2 + 0x24) *
                                                               (float10)*(float *)(param_2 + 0x24)))))
                                              ))))));
  *(float *)(param_1 + 0x20) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 0x20))));
  *(float *)(param_1 + 0x24) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0x24) * fVar1)));
  *(float *)(param_1 + 0x28) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 0x28))));
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}

/* ref: FUN_00a1ff00 */
GEN_FRAME unsigned int GEN_THISCALL F_00a1ff00(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa1ff00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x74) = param_2;
  return;
}

/* ref: FUN_00a1ff20 */
GEN_FRAME unsigned int GEN_THISCALL F_00a1ff20(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa1ff20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x78) = param_2;
  return;
}

/* ref: FUN_00a1ff40 */
GEN_FRAME uint GEN_THISCALL F_00a1ff40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ff40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x60) = *param_2;
  *(undefined4 *)(in_ecx + 100) = param_2[1];
  return (uint)param_2;
}

/* ref: FUN_00a1ff60 */
GEN_FRAME uint GEN_THISCALL F_00a1ff60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ff60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x70);
  *(undefined4 *)(uVar1 + 0x60) = *param_2;
  *(undefined4 *)(uVar1 + 100) = param_2[1];
  return uVar1;
}

/* ref: FUN_00a1ff80 */
GEN_FRAME uint GEN_THISCALL F_00a1ff80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ff80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *((uint *)GEN_TOP((*(int *)(in_ecx + 0x70) + 0xc))) = (uint)(byte)param_2;
  return (uint)(byte)param_2;
}

/* ref: FUN_00a1ffb0 */
GEN_FRAME uint GEN_THISCALL F_00a1ffb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ffb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x70);
  *(undefined4 *)(uVar1 + 0x58) = param_2;
  return uVar1;
}

/* ref: FUN_00a1ffc0 */
GEN_FRAME uint GEN_THISCALL F_00a1ffc0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa1ffc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x70);
  *(float *)(uVar1 + 0x78) = param_2;
  return uVar1;
}

/* ref: FUN_00a1ffe0 */
GEN_FRAME uint GEN_THISCALL F_00a1ffe0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa1ffe0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x70);
  *(float *)(uVar1 + 0x74) = param_2;
  return uVar1;
}

/* ref: FUN_00a20000 */
GEN_FRAME uint GEN_THISCALL F_00a20000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa20000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x54) + param_1 * 0x20 + (int)this;
}

/* ref: FUN_00a20020 */
GEN_FRAME byte GEN_THISCALL F_00a20020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa20020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((byte *)GEN_TOP((*(int *)(in_ecx + 0x5c) + param_2 + in_ecx)));
}

/* ref: FUN_00a20030 */
GEN_FRAME uint GEN_THISCALL F_00a20030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa20030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 100) + param_1 * 0x20 + (int)this;
}

/* ref: FUN_00a20090 */
GEN_FRAME byte F_00a20090(unsigned int gen_a0)
{
  GEN_ENTER(0xa20090u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (param_1 & 0x7e000000) == 0x7e000000;
}

/* ref: FUN_00a200b0 */
GEN_FRAME uint F_00a200b0(float gen_a0)
{
  GEN_ENTER(0xa200b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  if (GEN_ISNAN((float10)param_1)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a200d0 */
GEN_FRAME byte F_00a200d0(float gen_a0)
{
  GEN_ENTER(0xa200d0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  double dVar1;
  
  dVar1 = (double)param_1;
  if (((REFG(double, 0x10909a8) <= dVar1) && (dVar1 <= REFG(double, 0x10909a0))) && (!GEN_ISNAN(dVar1))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a20110 */
GEN_FRAME uint GEN_THISCALL F_00a20110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa20110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = ((float10)GEN_TOD(fsin((float10)*(float *)param_2)));
  fVar2 = ((float10)GEN_TOD(fcos((float10)*(float *)param_2)));
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  param_1[5] = (undefined4)gen_fl2bits((float)fVar2);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = (undefined4)gen_fl2bits((float)fVar1);
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = (undefined4)gen_fl2bits(((float)GEN_TOF(-(float10)(float)fVar1)));
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = (undefined4)gen_fl2bits((float)fVar2);
  param_1[0xe] = 0;
  F_0065ed60(param_1 GEN_EDX_FWD,*(float *)(param_2 + 4));
  F_0065ee80(param_1 GEN_EDX_ARG,*(float *)(param_2 + 8));
  return (uint)param_1;
}

/* ref: FUN_00a201b0 */
GEN_FRAME uint GEN_THISCALL F_00a201b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa201b0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = REFG(float, 0x1087f04);
  fVar2 = ((float10)GEN_TOD(fsin((float10)*(float *)(param_2 + 8))));
  fVar3 = ((float10)GEN_TOD(fcos((float10)*(float *)(param_2 + 8))));
  param_1[2] = 0.0;
  *param_1 = (float)fVar3;
  param_1[6] = 0.0;
  param_1[8] = 0.0;
  param_1[1] = (float)fVar2;
  param_1[9] = 0.0;
  param_1[10] = fVar1;
  param_1[4] = ((float)GEN_TOF(-(float10)(float)fVar2));
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[5] = (float)fVar3;
  param_1[0xe] = 0.0;
  F_0065ed60(param_1 GEN_EDX_FWD,*(float *)(param_2 + 4));
  F_0065ec40(param_1 GEN_EDX_ARG,*(float *)param_2);
  return (uint)param_1;
}

/* ref: FUN_00a20250 */
GEN_FRAME uint GEN_THISCALL F_00a20250(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa20250u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  float * pfVar2;
  
  iVar1 = *(int *)(in_ecx + 0x70);
  (*(float *)(gen_frame + 0x8)) = param_2;
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  pfVar2 = &(*(float *)(gen_frame + 0x8));
  if (!((float10)1 < (float10)param_2)) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  *(float *)(iVar1 + 0x70) = *pfVar2;
  return (uint)pfVar2;
}

/* ref: FUN_00a20290 */
GEN_FRAME ushort GEN_THISCALL F_00a20290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa20290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)((char)param_1 != '\0') << 4 | *(ushort *)((int)this + 8) & 0xffef;
  *(ushort *)((int)this + 8) = uVar1;
  return uVar1;
}

/* ref: FUN_00a202c0 */
GEN_FRAME uint GEN_THISCALL F_00a202c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa202c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x70);
  *(ushort *)(uVar1 + 8) = (ushort)((char)param_1 != '\0') << 4 | *(ushort *)(uVar1 + 8) & 0xffef;
  return uVar1;
}

/* ref: FUN_00a202f0 */
GEN_FRAME uint GEN_STDCALL F_00a202f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa202f0u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 < 0xf0) {
    if (0xec < bVar1) {
      return 0;
    }
    if (bVar1 < 0xe8) {
      return 0;
    }
    if (1 < (byte)(bVar1 + 0x16)) {
      return 0;
    }
  }
  else if (bVar1 != 0xff) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a20320 */
GEN_FRAME byte GEN_STDCALL F_00a20320(unsigned int gen_a0)
{
  GEN_ENTER(0xa20320u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  return *param_1 == -0x14;
}

/* ref: FUN_00a20340 */
GEN_FRAME uint GEN_STDCALL F_00a20340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20340u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0042d160(param_1 GEN_EDX_ARG,2);
  F_0042d160(param_1 GEN_EDX_ARG,param_2);
  F_0042d160(param_1 GEN_EDX_ARG,1);
  uVar1 = F_0042d160(param_1 GEN_EDX_ARG,3);
  return uVar1;
}

/* ref: FUN_00a20380 */
GEN_FRAME uint GEN_STDCALL F_00a20380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa20380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  F_0042d160(param_1 GEN_EDX_ARG,2);
  F_0042d160(param_1 GEN_EDX_ARG,param_2);
  F_0042d160(param_1 GEN_EDX_ARG,2);
  F_0042d160(param_1 GEN_EDX_ARG,param_3);
  uVar1 = F_0042d160(param_1 GEN_EDX_ARG,3);
  return uVar1;
}

/* ref: FUN_00a203c0 */
GEN_FRAME uint GEN_THISCALL F_00a203c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa203c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  char * pcVar2;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if ((char)param_3 == 'n') {
    uVar1 = F_0042a990(param_2 GEN_EDX_FWD);
    pcVar2 = "ERROR: mismatch parameter type (\'%s\' is not numeric)";
  }
  else {
    if ((char)param_3 != 's') goto LAB_00a2041c;
    uVar1 = F_0042a990(param_2 GEN_EDX_ARG);
    pcVar2 = "ERROR: mismatch parameter type (\'%s\' is not string)";
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,pcVar2,uVar1);
LAB_00a2041c: ;
  F_0042e430((undefined *)((int)this + 0x18) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return 0xfffffff8;
}

/* ref: FUN_00a20450 */
GEN_FRAME uint GEN_STDCALL F_00a20450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20450u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  bool bVar1;
  bool bVar2;
  char * pcVar3;
  char cVar4;
  char * pcVar5;
  int local_c;
  
  pcVar3 = (*(char * PTR32 *)&gen_args[1]);
  cVar4 = *(*(char * PTR32 *)&gen_args[1]);
  bVar2 = false;
  local_c = 1;
  bVar1 = false;
  pcVar5 = (*(char * PTR32 *)&gen_args[1]);
  if (cVar4 != '\0') {
    do {
      if (bVar1) break;
      (*(char * PTR32 *)&gen_args[1]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[1]), 1, 3),cVar4)));
      pcVar5 = pcVar5 + 1;
      F_0042d160((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(char * PTR32 *)&gen_args[1]));
      switch((unsigned int)(uintptr_t)(cVar4)) {
      case '<': ;
        if (!bVar2) {
          local_c = local_c + 1;
        }
        break;
      case '>': ;
        if ((!bVar2) && (local_c = local_c - 1, local_c == 0)) {
          bVar1 = true;
        }
        break;
      case '[': ;
        bVar2 = true;
        break;
      case ']': ;
        bVar2 = false;
      }
      cVar4 = *pcVar5;
    } while (cVar4 != '\0');
    if ((local_c == 0) && (!bVar2)) {
      return (int)pcVar5 - (int)pcVar3;
    }
  }
  return 0xfffffff9;
}

/* ref: FUN_00a20540 */
GEN_FRAME uint F_00a20540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20540u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  byte * pbVar1;
  int iVar2;
  
  pbVar1 = param_1 + 1;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 0xf0: ;
    *param_2 = (uint)*pbVar1;
    return 2;
  case 0xf1: ;
    *param_2 = (uint)*pbVar1 << 8;
    return 2;
  case 0xf2: ;
    *param_2 = (uint)CONCAT11(*pbVar1,param_1[2]);
    return 3;
  case 0xf3: ;
    *param_2 = (uint)*pbVar1 << 0x10;
    return 2;
  case 0xf4: ;
    *param_2 = (uint)*pbVar1 * 0x10000 + (uint)(byte)param_1[2];
    return 3;
  case 0xf5: ;
    *param_2 = (uint)CONCAT11(*pbVar1,param_1[2]) << 8;
    return 3;
  case 0xf6: ;
    iVar2 = (uint)*pbVar1 << 8;
    break;
  case 0xf7: ;
    *param_2 = (uint)*pbVar1 << 0x18;
    return 2;
  case 0xf8: ;
    *param_2 = (uint)*pbVar1 * 0x1000000 + (uint)(byte)param_1[2];
    return 3;
  case 0xf9: ;
    *param_2 = ((uint)*pbVar1 * 0x10000 + (uint)(byte)param_1[2]) * 0x100;
    return 3;
  case 0xfa: ;
    iVar2 = (uint)*pbVar1 << 0x10;
    break;
  case 0xfb: ;
    *param_2 = (uint)CONCAT11(*pbVar1,param_1[2]) << 0x10;
    return 3;
  case 0xfc: ;
    *param_2 = (uint)CONCAT11(*pbVar1,param_1[2]) * 0x10000 + (uint)(byte)param_1[3];
    return 4;
  case 0xfd: ;
    *param_2 = (uint)CONCAT21(CONCAT11(*pbVar1,param_1[2]),param_1[3]) << 8;
    return 4;
  case 0xfe: ;
    *param_2 = CONCAT31(CONCAT21(CONCAT11(*pbVar1,param_1[2]),param_1[3]),param_1[4]);
    return 5;
  default: ;
    return 0;
  }
  *param_2 = (iVar2 + (uint)(byte)param_1[2]) * 0x100 + (uint)(byte)param_1[3];
  return 4;
}

/* ref: FUN_00a20720 */
GEN_FRAME uint F_00a20720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20720u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char * pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  cVar2 = (char)param_2;
  if (param_2 < 0xcf) {
    *param_1 = cVar2 + '\x01';
    return 1;
  }
  if ((param_2 & 0xffffff00) == 0) {
    *param_1 = -0x10;
    param_1[1] = cVar2;
    return 2;
  }
  cVar3 = (char)(param_2 >> 8);
  if ((param_2 & 0xffff00ff) == 0) {
    *param_1 = -0xf;
    param_1[1] = cVar3;
    return 2;
  }
  cVar4 = (char)(param_2 >> 0x10);
  if ((param_2 & 0xff00ffff) == 0) {
    *param_1 = -0xd;
    param_1[1] = cVar4;
    return 2;
  }
  cVar5 = (char)(param_2 >> 0x18);
  if ((param_2 & 0xffffff) == 0) {
    *param_1 = -9;
    param_1[1] = cVar5;
    return 2;
  }
  if ((param_2 & 0xffff0000) == 0) {
    *param_1 = -0xe;
    param_1[1] = cVar3;
    param_1[2] = cVar2;
    return 3;
  }
  if ((param_2 & 0xff00ff00) == 0) {
    *param_1 = -0xc;
    param_1[1] = cVar4;
    param_1[2] = cVar2;
    return 3;
  }
  if ((param_2 & 0xff0000ff) == 0) {
    *param_1 = -0xb;
    param_1[1] = cVar4;
    param_1[2] = cVar3;
    return 3;
  }
  if ((param_2 & 0xffff00) == 0) {
    *param_1 = -8;
    param_1[1] = cVar5;
    param_1[2] = cVar2;
    return 3;
  }
  if ((param_2 & 0xff00ff) == 0) {
    *param_1 = -7;
    param_1[1] = cVar5;
    param_1[2] = cVar3;
    return 3;
  }
  if ((param_2 & 0xffff) == 0) {
    *param_1 = -5;
    param_1[1] = cVar5;
    param_1[2] = cVar4;
    return 3;
  }
  if ((param_2 & 0xff000000) == 0) {
    *param_1 = -10;
    cVar5 = cVar4;
  }
  else {
    if ((param_2 & 0xff0000) != 0) {
      pcVar1 = param_1 + 1;
      if ((param_2 & 0xff00) == 0) {
        *param_1 = -4;
        *pcVar1 = cVar5;
        param_1[2] = cVar4;
        param_1[3] = cVar2;
        return 4;
      }
      if (cVar2 == '\0') {
        *param_1 = -3;
        *pcVar1 = cVar5;
        param_1[2] = cVar4;
        param_1[3] = cVar3;
        return 4;
      }
      *param_1 = -2;
      *pcVar1 = cVar5;
      param_1[2] = cVar4;
      param_1[3] = cVar3;
      param_1[4] = cVar2;
      return 5;
    }
    *param_1 = -6;
  }
  param_1[1] = cVar5;
  param_1[2] = cVar3;
  param_1[3] = cVar2;
  return 4;
}

/* ref: FUN_00a20910 */
GEN_FRAME uint GEN_STDCALL F_00a20910(unsigned int gen_a0)
{
  GEN_ENTER(0xa20910u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  bool bVar1;
  char cVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  pcVar3 = (char *)F_0042a990(param_1 GEN_EDX_ARG);
  cVar2 = *pcVar3;
  uVar4 = CONCAT31((int3)((uint)((int)(uintptr_t)pcVar3) >> 8),cVar2);
  bVar1 = false;
  while( true ) {
    if (cVar2 == '\0') {
      return uVar5;
    }
    cVar2 = (char)uVar4;
    if (cVar2 == '\x02') break;
    if (bVar1) {
      if (cVar2 == '>') {
        bVar1 = false;
      }
      pcVar3 = pcVar3 + 1;
    }
    else if (cVar2 == '<') {
      bVar1 = true;
      pcVar3 = pcVar3 + 1;
    }
    else {
      uVar4 = F_0042acc0(uVar4);
      pcVar3 = pcVar3 + uVar4;
      uVar5 = uVar5 + 1;
    }
    cVar2 = *pcVar3;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar2);
  }
  return 0;
}

/* ref: FUN_00a20970 */
GEN_FRAME uint GEN_THISCALL F_00a20970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa20970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  bool bVar2;
  char cVar3;
  byte * pbVar4;
  uint uVar5;
  undefined * this_00;
  uint uVar6;
  
  pbVar4 = (byte *)F_0042a990(param_1 GEN_EDX_FWD);
  this_00 = (undefined *)((int)this + 0x4c);
  bVar2 = false;
  uVar5 = F_0042aca0(this_00 GEN_EDX_ARG);
  bVar1 = *pbVar4;
  for (uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1);
      (bVar1 != 0 && (cVar3 = (char)uVar5, cVar3 != '\x02'));
      uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1)) {
    if (bVar2) {
      if (cVar3 == '>') {
        bVar2 = false;
      }
      pbVar4 = pbVar4 + 1;
    }
    else if (cVar3 == '<') {
      bVar2 = true;
      pbVar4 = pbVar4 + 1;
    }
    else {
      uVar5 = F_0042acc0(uVar5);
      uVar6 = uVar5;
      if (0 < (int)uVar5) {
        do {
          uVar5 = F_0042d160(this_00 GEN_EDX_ARG,(uint)*pbVar4);
          pbVar4 = pbVar4 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    bVar1 = *pbVar4;
  }
  uVar5 = F_0042ccf0(param_1 GEN_EDX_ARG,this_00);
  return uVar5;
}

/* ref: Component::Text::TextChecker::vf18 */
GEN_FRAME uint GEN_THISCALL F_00a209f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa209f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  F_0042d160(param_4 GEN_EDX_FWD,0x20);
  return 1;
}

/* ref: Component::Text::TextChecker::vf19 */
GEN_FRAME uint GEN_THISCALL F_00a20a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa20a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  F_0042d160(param_4 GEN_EDX_FWD,0x2d);
  return 1;
}

/* ref: Component::Text::TextModule::vf6 */
GEN_FRAME uint GEN_THISCALL F_00a20a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa20a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  short * psVar7;
  byte * pbVar8;
  ushort * puVar9;
  undefined * pvVar10;
  undefined4 * puVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar1 = **(int * PTR32 *)(this + 0x34);
  uVar2 = F_0042a990(param_1 GEN_EDX_FWD);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 8))(*(undefined4 *)(this + 0x34),uVar2)));
  if ((piVar3 != (int *)0x0) &&
     (piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,param_2))), piVar4 != (int *)0x0)) {
    if ((int)param_3 < 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x34))(piVar3 GEN_EDX_ARG,-1 - param_3);
    }
    else {
      uVar2 = param_3;
      if (param_3 == 0xffff) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_ARG);
      }
    }
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG,uVar2);
    switch((unsigned int)(uintptr_t)(uVar5)) {
    case 0: ;
      uVar12 = REFG(undefined4, 0x108cc50);
      pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
      uVar2 = F_00cb0950(pvVar10 GEN_EDX_ARG,uVar2);
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar2,uVar12);
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),param_4,param_5);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return uVar2;
    default: ;
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return 0xffffffff;
    case 2: ;
      pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
      pcVar6 = (char *)F_00cb0910(pvVar10 GEN_EDX_ARG,uVar2);
      F_00c472af(this + 0x16c,0x40,&REFG(undefined, 0x10e3d4c),(int)*pcVar6);
      F_0042e430(param_5 GEN_EDX_ARG,this + 0x16c);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return 1;
    case 3: ;
      pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
      pbVar8 = (byte *)F_00cb0910(pvVar10 GEN_EDX_ARG,uVar2);
      F_00c472af(this + 0x16c,0x40,&REFG(undefined, 0x10e3d58),(uint)*pbVar8);
      F_0042e430(param_5 GEN_EDX_ARG,this + 0x16c);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return 1;
    case 4: ;
      pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
      psVar7 = (short *)F_00cb0910(pvVar10 GEN_EDX_ARG,uVar2);
      F_00c472af(this + 0x16c,0x40,&REFG(undefined, 0x10e3d50),(int)*psVar7);
      F_0042e430(param_5 GEN_EDX_ARG,this + 0x16c);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return 1;
    case 5: ;
      pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
      puVar9 = (ushort *)F_00cb0910(pvVar10 GEN_EDX_ARG,uVar2);
      F_00c472af(this + 0x16c,0x40,&REFG(undefined, 0x10e3d5c),(uint)*puVar9);
      F_0042e430(param_5 GEN_EDX_ARG,this + 0x16c);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return 1;
    case 6: ;
      pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
      puVar11 = (undefined4 *)F_00cb0910(pvVar10 GEN_EDX_ARG,uVar2);
      F_00c472af(this + 0x16c,0x40,&REFG(undefined, 0x10e3d54),*puVar11);
      F_0042e430(param_5 GEN_EDX_ARG,this + 0x16c);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return 1;
    case 7: ;
      pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
      puVar11 = (undefined4 *)F_00cb0910(pvVar10 GEN_EDX_ARG,uVar2);
      F_00c472af(this + 0x16c,0x40,&REFG(undefined, 0x10e3d60),*puVar11);
      F_0042e430(param_5 GEN_EDX_ARG,this + 0x16c);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: Component::Text::TextModule::vf5 */
GEN_FRAME uint GEN_THISCALL F_00a20da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa20da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,param_1,param_2,0xffff,this + 0x18,param_3);
  return uVar1;
}

/* ref: Component::Text::TextModule::vf4 */
GEN_FRAME uint GEN_THISCALL F_00a20dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa20dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,param_1,param_2,param_3,this + 0x18,param_4);
  return uVar1;
}

/* ref: Component::Text::TextModule::vf2 */
GEN_FRAME uint GEN_THISCALL F_00a20e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa20e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined * PTR32 * ppuVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,param_2,param_3,0xffff,this + 0x18,((undefined * PTR32 *)(gen_frame + 0x4)));
  if (uVar1 == 1) {
    ppuVar2 = ((undefined * PTR32 *)(gen_frame + 0x4));
  }
  else {
    ppuVar2 = &REFG(undefined * PTR32, 0x12fd328);
  }
  F_0042cbc0(param_1 GEN_EDX_ARG,ppuVar2);
  F_0042c880(((undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: Component::Text::TextModule::vf10 */
GEN_FRAME uint GEN_THISCALL F_00a20e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa20e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * param_3 = (byte *)(uintptr_t)gen_a3;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  byte * pbVar4;
  byte * pbVar5;
  uint uVar6;
  byte * pbVar7;
  
  pbVar4 = (byte *)F_0042a990(param_2 GEN_EDX_FWD);
  pbVar5 = pbVar4;
  pbVar2 = pbVar4;
  pbVar3 = pbVar4;
  do {
    for (; pbVar7 = pbVar3, pbVar2 < pbVar7; pbVar2 = pbVar2 + 1) {
      pbVar5 = (byte *)F_0042d160(param_1 GEN_EDX_ARG,(uint)*pbVar2);
      pbVar3 = pbVar7;
    }
    bVar1 = *pbVar7;
    if (bVar1 == 0) break;
    if (bVar1 == 2) {
      uVar6 = pbVar7[2] + 3;
    }
    else {
      uVar6 = F_0042acc0(CONCAT31((int3)((uint)((int)(uintptr_t)pbVar5) >> 8),bVar1));
    }
    pbVar5 = pbVar7 + uVar6 - (int)pbVar4;
    pbVar2 = pbVar7;
    pbVar3 = pbVar7 + uVar6;
  } while (pbVar5 <= param_3);
  return (int)pbVar7 - (int)pbVar4;
}

/* ref: Component::Text::TextModule::vf12 */
GEN_FRAME uint GEN_THISCALL F_00a20ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa20ef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x168) = param_2;
  return param_2;
}

/* ref: FUN_00a20f00 */
GEN_FRAME uint GEN_THISCALL F_00a20f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa20f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  F_0042d540(param_4 GEN_EDX_FWD,&REFG(undefined, 0x10e3d64));
  return 1;
}

/* ref: FUN_00a20f20 */
GEN_FRAME uint GEN_THISCALL F_00a20f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa20f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 4) + 0x38))))
                    ((int)this - 4,param_1,param_2,param_3,0,0,param_4);
  return uVar1;
}

/* ref: FUN_00a20f50 */
GEN_FRAME uint GEN_THISCALL F_00a20f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa20f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 4) + 0x38))))
                    ((int)this - 4,param_1,param_2,param_3,0,1,param_4);
  return uVar1;
}

/* ref: FUN_00a20f80 */
GEN_FRAME uint GEN_THISCALL F_00a20f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa20f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 4) + 0x38))))
                    ((int)this - 4,param_1,param_2,param_3,1,2,param_4);
  return uVar1;
}

/* ref: FUN_00a20fb0 */
GEN_FRAME uint GEN_THISCALL F_00a20fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa20fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 4) + 0x38))))
                    ((int)this - 4,param_1,param_2,param_3,0,3,param_4);
  return uVar1;
}

/* ref: FUN_00a20fe0 */
GEN_NOFRAME byte GEN_THISCALL F_00a20fe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa20fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 8))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD,"Attributive");
    *(uint *)((int)this + 8) = uVar1;
    return uVar1 != 0;
  }
  return 1;
}

/* ref: FUN_00a21010 */
GEN_FRAME uint GEN_THISCALL F_00a21010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00a21030 */
GEN_FRAME uint GEN_STDCALL F_00a21030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa21030u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char * pcVar1;
  
  if (param_2 < 0) {
    return -param_2 - 1;
  }
  pcVar1 = (char *)F_00cb0910(param_1 GEN_EDX_ARG,param_2);
  return (int)*pcVar1;
}

/* ref: FUN_00a21060 */
GEN_NOFRAME uint GEN_THISCALL F_00a21060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa21060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f0c));
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x10));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  return uVar1;
}

/* ref: Component::Text::Localize::NounCh::vf1 */
GEN_FRAME byte GEN_THISCALL F_00a21090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * puVar1;
  int iVar2;
  char cVar3;
  int * piVar4;
  undefined * this_00;
  char * pcVar5;
  int * piVar6;
  uint uVar7;
  undefined * this_01;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(byte *)(gen_frame + 0x3)) = 0;
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x24))))
                            (*(int * PTR32 *)(this + 4) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x58))));
  if (piVar4 != (int *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + *(int *)(param_1 + 0x54) * 8)));
    iVar2 = puVar1[1];
    if (iVar2 < 0) {
      cVar3 = -1 - (char)iVar2;
    }
    else {
      pcVar5 = (char *)F_00cb0910(this_00 GEN_EDX_ARG,iVar2);
      cVar3 = *pcVar5;
    }
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x24))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,(int)cVar3)));
    if (piVar6 != (int *)0x0) {
      uVar7 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(param_1 + 0x5c),10,0,0);
      F_0042ccf0(param_2 GEN_EDX_ARG,uVar7);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      uVar8 = 0x28;
      this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 8))(piVar6 GEN_EDX_ARG)));
      uVar7 = F_00cb0950(this_01 GEN_EDX_ARG,uVar8);
      F_0042e370(param_2 GEN_EDX_ARG,uVar7);
      if (*(char *)(param_1 + 0x68) != '\0') {
        F_0042e370(param_2 GEN_EDX_ARG,(char *)(param_1 + 0x68));
      }
      uVar7 = F_00cb0950(this_00 GEN_EDX_ARG,*puVar1);
      F_0042e370(param_2 GEN_EDX_ARG,uVar7);
      (*(byte *)(gen_frame + 0x3)) = 1;
      ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 4))(piVar6 GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (*(byte *)(gen_frame + 0x3));
}

/* ref: FUN_00a211b0 */
GEN_NOFRAME uint GEN_THISCALL F_00a211b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa211b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f18));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar3 = F_00406b30(*(int *)((int)this + 0x10));
    uVar2 = (uint)uVar3;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  return uVar2;
}

/* ref: Component::Text::Localize::NounDe::vf1 */
GEN_FRAME byte GEN_THISCALL F_00a21210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  undefined * pvVar5;
  int iVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(byte *)(gen_frame + 0x22)) = 0;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x24))))
                            (*(int * PTR32 *)(this + 4) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x58))));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x24))))
                            (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x60))));
  if (piVar3 != (int *)0x0) {
    if (piVar4 != (int *)0x0) {
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG)));
      iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x10) + 8 + *(int *)(param_1 + 0x54) * 0x1c)));
      puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + *(int *)(param_1 + 0x54) * 0x1c)));
      if (iVar11 < 0) {
        (*(char *)(gen_frame + 0x23)) = -1 - (char)iVar11;
      }
      else {
        pcVar8 = (char *)F_00cb0910(pvVar5 GEN_EDX_ARG,iVar11);
        (*(char *)(gen_frame + 0x23)) = *pcVar8;
      }
      iVar11 = puVar1[6];
      if (iVar11 < 0) {
        (*(char *)(gen_frame + 0x8)) = -1 - (char)iVar11;
      }
      else {
        pcVar8 = (char *)F_00cb0910(pvVar5 GEN_EDX_ARG,iVar11);
        (*(char *)(gen_frame + 0x8)) = *pcVar8;
      }
      iVar11 = *(int *)(param_1 + 100) * 4 + 8;
      if (*(int *)(param_1 + 0x5c) == 1) {
        (*(undefined4 *)(gen_frame + 0x1c)) = *puVar1;
        iVar6 = puVar1[3];
        if (iVar6 < 0) {
          iVar6 = -1 - iVar6;
        }
        else {
          pcVar8 = (char *)F_00cb0910(pvVar5 GEN_EDX_ARG,iVar6);
          iVar6 = (int)*pcVar8;
        }
      }
      else {
        (*(undefined4 *)(gen_frame + 0x1c)) = puVar1[1];
        iVar6 = puVar1[4];
        if (iVar6 < 0) {
          iVar6 = -1 - iVar6;
        }
        else {
          pcVar8 = (char *)F_00cb0910(pvVar5 GEN_EDX_ARG,iVar6);
          iVar6 = (int)*pcVar8;
        }
        (*(char *)(gen_frame + 0x23)) = '\x03';
      }
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x24))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,iVar6 + 0x1a)));
      if (((piVar7 != (int *)0x0) &&
          (pcVar8 = (char *)F_00cb0950(pvVar5 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c))), pcVar8 != (char *)0x0)) &&
         (*pcVar8 != '\0')) {
        if ((*(char *)(gen_frame + 0x8)) == '\0') {
          iVar6 = (*(char *)(gen_frame + 0x23)) + iVar11;
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
          uVar9 = F_00cb0950(pvVar5 GEN_EDX_ARG,iVar6);
          F_0042e430(param_2 GEN_EDX_ARG,uVar9);
        }
        if (*(char *)(param_1 + 0x68) != '\0') {
          F_0042e370(param_2 GEN_EDX_ARG,(char *)(param_1 + 0x68));
        }
        F_0042e370(param_2 GEN_EDX_ARG,pcVar8);
        uVar9 = F_0042c8a0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a3130),0);
        if (uVar9 == REFG(undefined4, 0x108cc50)) {
          iVar6 = (*(char *)(gen_frame + 0x23)) + iVar11;
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
          uVar9 = F_00cb0950(pvVar5 GEN_EDX_ARG,iVar6);
          F_0042e370(param_2 GEN_EDX_ARG,uVar9);
        }
        else {
          iVar6 = (*(char *)(gen_frame + 0x23)) + iVar11;
          uVar9 = REFG(undefined4, 0x108cc50);
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
          uVar10 = F_00cb0950(pvVar5 GEN_EDX_ARG,iVar6);
          F_0042cc20(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar10,uVar9);
          F_0042d750(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a3130),((undefined1 *)(gen_frame + 0x24)));
          F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
        }
      }
      if (*(int *)(this + 0x14) == 0) {
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x24))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,0x18);
        *(uint *)(this + 0x14) = uVar9;
      }
      if (*(int *)(this + 0x18) == 0) {
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x24))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,0x19);
        *(uint *)(this + 0x18) = uVar9;
      }
      if (*(int *)(this + 0x1c) == 0) {
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x24))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,0x1a);
        *(uint *)(this + 0x1c) = uVar9;
      }
      piVar2 = *(int * PTR32 *)(this + 0x14);
      if (((piVar2 != (int *)0x0) && (*(int *)(this + 0x18) != 0)) && (*(int *)(this + 0x1c) != 0))
      {
        iVar11 = (*(char *)(gen_frame + 0x23)) + iVar11;
        iVar6 = iVar11;
        uVar9 = REFG(undefined4, 0x108cc50);
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG)));
        uVar10 = F_00cb0950(pvVar5 GEN_EDX_ARG,iVar6);
        F_0042cc20(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar10,uVar9);
        F_0042d750(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a3188),((undefined1 *)(gen_frame + 0x24)));
        F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
        if (*(int *)(param_1 + 0x60) == 2) {
          uVar9 = REFG(undefined4, 0x108cc50);
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 8))))(*(int * PTR32 *)(this + 0x18) GEN_EDX_ARG)));
          uVar10 = F_00cb0950(pvVar5 GEN_EDX_ARG,iVar11);
          F_0042cc20(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar10,uVar9);
        }
        else {
          uVar9 = REFG(undefined4, 0x108cc50);
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 8))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG)));
          uVar10 = F_00cb0950(pvVar5 GEN_EDX_ARG,iVar11);
          F_0042cc20(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar10,uVar9);
        }
        F_0042d750(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a30d8),((undefined1 *)(gen_frame + 0x24)));
        F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x22)) = 1;
      }
      uVar9 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x24)),*(undefined4 *)(param_1 + 0x5c),10,0,0);
      F_0042d750(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a3080),uVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
      if (piVar7 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 4))(piVar7 GEN_EDX_ARG);
      }
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
  }
  if (piVar4 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return (*(byte *)(gen_frame + 0x22));
}

/* ref: FUN_00a215a0 */
GEN_NOFRAME uint GEN_THISCALL F_00a215a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa215a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f24));
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x10));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  return uVar1;
}

/* ref: Component::Text::Localize::NounEn::vf1 */
GEN_FRAME byte GEN_THISCALL F_00a215d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa215d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 * puVar1;
  char cVar2;
  int * piVar3;
  int * piVar4;
  undefined * this_00;
  char * pcVar5;
  uint uVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  int iVar9;
  byte bVar10;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x24))))
                            (*(int * PTR32 *)(this + 4) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x58))));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x24))))
                            (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x60))));
  if (piVar3 == (int *)0x0) {
    bVar10 = 0;
  }
  else if (piVar4 == (int *)0x0) {
    bVar10 = 0;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
  }
  else {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG)));
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + *(int *)(param_1 + 0x54) * 0x14)));
    iVar9 = puVar1[2];
    if (iVar9 < 0) {
      (*(char *)(gen_frame + 0x8)) = -1 - (char)iVar9;
    }
    else {
      pcVar5 = (char *)F_00cb0910(this_00 GEN_EDX_ARG,iVar9);
      (*(char *)(gen_frame + 0x8)) = *pcVar5;
    }
    iVar9 = puVar1[4];
    if (iVar9 < 0) {
      cVar2 = -1 - (char)iVar9;
    }
    else {
      pcVar5 = (char *)F_00cb0910(this_00 GEN_EDX_ARG,iVar9);
      cVar2 = *pcVar5;
    }
    iVar9 = (*(char *)(gen_frame + 0x8)) * 3 + 2;
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 0x5c) == 1) {
        pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
        uVar6 = F_00cb0950(pvVar7 GEN_EDX_ARG,iVar9);
        F_0042e430(param_2 GEN_EDX_ARG,uVar6);
        if (*(char *)(param_1 + 0x68) != '\0') {
          F_0042e370(param_2 GEN_EDX_ARG,param_1 + 0x68);
        }
        uVar8 = *puVar1;
      }
      else {
        iVar9 = (*(char *)(gen_frame + 0x8)) * 3 + 3;
        pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
        uVar6 = F_00cb0950(pvVar7 GEN_EDX_ARG,iVar9);
        F_0042e430(param_2 GEN_EDX_ARG,uVar6);
        if (*(char *)(param_1 + 0x68) != '\0') {
          F_0042e370(param_2 GEN_EDX_ARG,param_1 + 0x68);
        }
        uVar8 = puVar1[1];
      }
      uVar6 = F_00cb0950(this_00 GEN_EDX_ARG,uVar8);
      F_0042e370(param_2 GEN_EDX_ARG,uVar6);
    }
    else if (*(int *)(param_1 + 0x5c) == 1) {
      uVar6 = F_00cb0950(this_00 GEN_EDX_ARG,*puVar1);
      F_0042e430(param_2 GEN_EDX_ARG,uVar6);
    }
    else {
      uVar6 = F_00cb0950(this_00 GEN_EDX_ARG,puVar1[1]);
      F_0042e430(param_2 GEN_EDX_ARG,uVar6);
    }
    uVar6 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x14)),*(undefined4 *)(param_1 + 0x5c),10,0,0);
    F_0042d750(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a3080),uVar6);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    bVar10 = 1;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
  }
  if (piVar4 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return bVar10;
}

/* ref: FUN_00a217a0 */
GEN_NOFRAME uint GEN_THISCALL F_00a217a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa217a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f30));
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x10));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  return uVar1;
}

/* ref: Component::Text::Localize::NounFr::vf1 */
GEN_FRAME byte GEN_THISCALL F_00a217d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa217d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  undefined * this_00;
  char * pcVar4;
  undefined * pvVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x24))))
                            (*(int * PTR32 *)(this + 4) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x58))));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x24))))
                            (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x60))));
  if (piVar2 == (int *)0x0) {
    bVar10 = 0;
  }
  else if (piVar3 == (int *)0x0) {
    bVar10 = 0;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  }
  else {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG)));
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + *(int *)(param_1 + 0x54) * 0x18)));
    iVar7 = puVar1[2];
    if (iVar7 < 0) {
      (*(char *)(gen_frame + 0xc)) = -1 - (char)iVar7;
    }
    else {
      pcVar4 = (char *)F_00cb0910(this_00 GEN_EDX_ARG,iVar7);
      (*(char *)(gen_frame + 0xc)) = *pcVar4;
    }
    iVar7 = puVar1[3];
    if (iVar7 < 0) {
      (*(char *)(gen_frame + 0x10)) = -1 - (char)iVar7;
    }
    else {
      pcVar4 = (char *)F_00cb0910(this_00 GEN_EDX_ARG,iVar7);
      (*(char *)(gen_frame + 0x10)) = *pcVar4;
    }
    iVar7 = puVar1[4];
    if (iVar7 < 0) {
      cVar9 = -1 - (char)iVar7;
    }
    else {
      pcVar4 = (char *)F_00cb0910(this_00 GEN_EDX_ARG,iVar7);
      cVar9 = *pcVar4;
    }
    iVar7 = puVar1[5];
    if (iVar7 < 0) {
      cVar8 = -1 - (char)iVar7;
    }
    else {
      pcVar4 = (char *)F_00cb0910(this_00 GEN_EDX_ARG,iVar7);
      cVar8 = *pcVar4;
    }
    iVar7 = ((*(char *)(gen_frame + 0xc)) + 6 + (*(char *)(gen_frame + 0x10)) * 2) * 4;
    if (cVar8 == '\0') {
      if (cVar9 == '\0') {
        iVar7 = iVar7 + 3;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG)));
        uVar6 = F_00cb0950(pvVar5 GEN_EDX_ARG,iVar7);
        F_0042e430(param_2 GEN_EDX_ARG,uVar6);
        if (*(char *)(param_1 + 0x68) != '\0') {
          F_0042e370(param_2 GEN_EDX_ARG,param_1 + 0x68);
        }
        uVar11 = *puVar1;
      }
      else if (*(int *)(param_1 + 0x5c) < 2) {
        iVar7 = iVar7 + 1;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG)));
        uVar6 = F_00cb0950(pvVar5 GEN_EDX_ARG,iVar7);
        F_0042e430(param_2 GEN_EDX_ARG,uVar6);
        if (*(char *)(param_1 + 0x68) != '\0') {
          F_0042e370(param_2 GEN_EDX_ARG,param_1 + 0x68);
        }
        uVar11 = *puVar1;
      }
      else {
        iVar7 = iVar7 + 2;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG)));
        uVar6 = F_00cb0950(pvVar5 GEN_EDX_ARG,iVar7);
        F_0042e430(param_2 GEN_EDX_ARG,uVar6);
        if (*(char *)(param_1 + 0x68) != '\0') {
          F_0042e370(param_2 GEN_EDX_ARG,param_1 + 0x68);
        }
        uVar11 = puVar1[1];
      }
    }
    else {
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG)));
      uVar6 = F_00cb0950(pvVar5 GEN_EDX_ARG,iVar7);
      F_0042e430(param_2 GEN_EDX_ARG,uVar6);
      uVar11 = *puVar1;
    }
    uVar6 = F_00cb0950(this_00 GEN_EDX_ARG,uVar11);
    F_0042e370(param_2 GEN_EDX_ARG,uVar6);
    uVar6 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x24)),*(undefined4 *)(param_1 + 0x5c),10,0,0);
    F_0042d750(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a3080),uVar6);
    F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
    bVar10 = 1;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  }
  if (piVar3 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return bVar10;
}

/* ref: FUN_00a21a20 */
GEN_FRAME uint GEN_THISCALL F_00a21a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f3c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  puVar1 = (undefined4 *)F_00406bb0(4,0,0);
  *(undefined4 * PTR32 *)((int)this + 0x10) = puVar1;
  *puVar1 = 0;
  return (uint)this;
}

/* ref: FUN_00a21a70 */
GEN_NOFRAME uint GEN_THISCALL F_00a21a70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa21a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f3c));
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x10));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  return uVar1;
}

/* ref: Component::Text::Localize::NounJa::vf1 */
GEN_FRAME byte GEN_THISCALL F_00a21aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(byte *)(gen_frame + 0x3)) = 0;
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x24))))
                            (*(int * PTR32 *)(this + 4) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x58))));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x24))))
                            (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x60))));
  if (piVar1 != (int *)0x0) {
    if (piVar2 != (int *)0x0) {
      if (*(int *)(param_1 + 0x5c) < 2) {
        uVar5 = 0;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG)));
        uVar4 = F_00cb0950(pvVar3 GEN_EDX_ARG,uVar5);
        F_0042e430(param_2 GEN_EDX_ARG,uVar4);
      }
      else {
        uVar5 = 1;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG)));
        uVar4 = F_00cb0950(pvVar3 GEN_EDX_ARG,uVar5);
        F_0042e430(param_2 GEN_EDX_ARG,uVar4);
        uVar4 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(param_1 + 0x5c),10,0,0);
        F_0042d750(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a3080),uVar4);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
      if (*(char *)(param_1 + 0x68) != '\0') {
        F_0042e370(param_2 GEN_EDX_ARG,param_1 + 0x68);
      }
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + *(int *)(param_1 + 0x54) * 4)));
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG)));
      uVar4 = F_00cb0950(pvVar3 GEN_EDX_ARG,uVar5);
      F_0042e370(param_2 GEN_EDX_ARG,uVar4);
      (*(byte *)(gen_frame + 0x3)) = 1;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  }
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (*(byte *)(gen_frame + 0x3));
}

/* ref: FUN_00a21bc0 */
GEN_FRAME uint GEN_THISCALL F_00a21bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa21bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pcVar2 = (char *)F_0042a990(param_1 GEN_EDX_FWD);
  if ((*(uint *)&REFG(undefined, 0x14a2b74) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a2b74) = *(uint *)&REFG(undefined, 0x14a2b74) | 1;
    F_0042b630(&REFG(undefined, 0x14a2b20) GEN_EDX_ARG);
    F_00c47de6(((code *)REFP(0x107c4c0)));
  }
  uVar3 = F_0042aca0(&REFG(undefined, 0x14a2b20) GEN_EDX_ARG);
  cVar1 = *pcVar2;
  uVar4 = CONCAT31((int3)(uVar3 >> 8),cVar1);
  while (cVar1 != '\0') {
    if ((char)uVar4 == '\x02') {
      uVar5 = F_00a24d30(this GEN_EDX_ARG,pcVar2 + 2,(int)this + 0x14,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
      pcVar2 = pcVar2 + 2 + uVar5 + 1 + (int)(*(undefined * PTR32 *)(gen_frame + 0x8));
    }
    else {
      uVar3 = F_0042acc0(uVar4);
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      uVar5 = F_0042d590(&REFG(undefined, 0x14a2b20) GEN_EDX_ARG,pcVar2,uVar3);
      pcVar2 = pcVar2 + uVar3;
    }
    cVar1 = *pcVar2;
    uVar4 = CONCAT31((int3)(uVar5 >> 8),cVar1);
  }
  uVar3 = F_0042ccf0(param_1 GEN_EDX_ARG,&REFG(undefined, 0x14a2b20));
  return uVar3;
}

/* ref: FUN_00a21c80 */
GEN_FRAME uint GEN_STDCALL F_00a21c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = F_00a20720(((byte *)(gen_frame + 0x8)),param_3);
  F_0042d160(param_1 GEN_EDX_ARG,2);
  F_0042d160(param_1 GEN_EDX_ARG,param_2);
  F_0042d160(param_1 GEN_EDX_ARG,uVar1 + 1 & 0xff);
  iVar2 = 0;
  if (0 < (int)uVar1) {
    do {
      F_0042d160(param_1 GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x8))[(int)(iVar2)]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  F_0042d160(param_1 GEN_EDX_ARG,3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a21d00 */
GEN_FRAME uint GEN_STDCALL F_00a21d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa21d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_0042d160(param_1 GEN_EDX_ARG,2);
  F_0042d160(param_1 GEN_EDX_ARG,param_2);
  uVar1 = F_00a20720(((byte *)(gen_frame + 0x18)),param_3);
  uVar2 = F_00a20720(((byte *)(gen_frame + 0x8)),param_4);
  F_0042d160(param_1 GEN_EDX_ARG,(uint)(byte)((char)uVar2 + (char)uVar1 + 1));
  iVar3 = 0;
  if (0 < (int)uVar1) {
    do {
      F_0042d160(param_1 GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x18))[(int)(iVar3)]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar1);
  }
  iVar3 = 0;
  if (0 < (int)uVar2) {
    do {
      F_0042d160(param_1 GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x8))[(int)(iVar3)]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar2);
  }
  F_0042d160(param_1 GEN_EDX_ARG,3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar2 + uVar1;
}

/* ref: FUN_00a21dc0 */
GEN_FRAME uint GEN_STDCALL F_00a21dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa21dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  uVar1 = F_00a20720(((byte *)(gen_frame + 0x0)),param_2);
  iVar2 = 0;
  if (0 < (int)uVar1) {
    do {
      F_0042d160(param_1 GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x0))[(int)(iVar2)]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a21e20 */
GEN_FRAME uint GEN_THISCALL F_00a21e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa21e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a21bc0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00a21e30 */
GEN_FRAME uint GEN_THISCALL F_00a21e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa21e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0xc))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_FWD)));
  if (*piVar1 - 4U < 2) {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0xc))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG)));
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 4) + 0x38))))
                      ((int)this - 4,param_1,param_2,param_3,0,*puVar2,param_4);
    return uVar3;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 4) + 0x38))))
                    ((int)this - 4,param_1,param_2,param_3,0,4,param_4);
  return uVar3;
}

/* ref: FUN_00a21ea0 */
GEN_FRAME uint GEN_THISCALL F_00a21ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f0c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  puVar1 = (undefined4 *)F_00406bb0(8,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0xfffffff;
    puVar1[1] = 0xfffffff;
  }
  *(undefined4 * PTR32 *)((int)this + 0x10) = puVar1;
  *puVar1 = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = 5;
  return (uint)this;
}

/* ref: FUN_00a21f10 */
GEN_FRAME uint GEN_THISCALL F_00a21f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f18));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  puVar1 = (undefined4 *)F_00406bb0(0x1c,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0xfffffff;
    puVar1[1] = 0xfffffff;
    puVar1[2] = 0xfffffff;
    puVar1[3] = 0xfffffff;
    puVar1[4] = 0xfffffff;
    puVar1[5] = 0xfffffff;
    puVar1[6] = 0xfffffff;
  }
  *(undefined4 * PTR32 *)((int)this + 0x10) = puVar1;
  *puVar1 = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc))) = 1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = 2;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) = 3;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x14))) = 5;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = 6;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x18))) = 7;
  return (uint)this;
}

/* ref: FUN_00a21fb0 */
GEN_FRAME uint GEN_THISCALL F_00a21fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f24));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  puVar1 = (undefined4 *)F_00406bb0(0x14,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0xfffffff;
    puVar1[1] = 0xfffffff;
    puVar1[2] = 0xfffffff;
    puVar1[3] = 0xfffffff;
  }
  *(undefined4 * PTR32 *)((int)this + 0x10) = puVar1;
  *puVar1 = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = 2;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = 4;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc))) = 5;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) = 7;
  return (uint)this;
}

/* ref: FUN_00a22040 */
GEN_FRAME uint GEN_THISCALL F_00a22040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f30));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  puVar1 = (undefined4 *)F_00406bb0(0x18,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0xfffffff;
    puVar1[1] = 0xfffffff;
    puVar1[2] = 0xfffffff;
    puVar1[3] = 0xfffffff;
    puVar1[4] = 0xfffffff;
    puVar1[5] = 0xfffffff;
  }
  *(undefined4 * PTR32 *)((int)this + 0x10) = puVar1;
  *puVar1 = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = 2;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = 4;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) = 5;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc))) = 6;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x14))) = 7;
  return (uint)this;
}

/* ref: FUN_00a220e0 */
GEN_FRAME uint GEN_STDCALL F_00a220e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa220e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  uVar1 = F_00a4cf70(param_2,0);
  uVar1 = F_00a20720(((byte *)(gen_frame + 0x0)),uVar1);
  iVar2 = 0;
  if (0 < (int)uVar1) {
    do {
      F_0042d160(param_1 GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x0))[(int)(iVar2)]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a22140 */
GEN_FRAME byte GEN_STDCALL F_00a22140(unsigned int gen_a0)
{
  GEN_ENTER(0xa22140u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  pcVar1 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pcVar1 = *(char * PTR32 *)param_1;
  }
  if (*pcVar1 == '<') {
    pcVar1 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pcVar1 = *(char * PTR32 *)param_1;
    }
    return pcVar1[*(int *)(param_1 + 0x10) - 1] != '>';
  }
  return 0;
}

/* ref: FUN_00a22180 */
GEN_FRAME uint GEN_STDCALL F_00a22180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  iVar1 = *(int *)(param_3 + 0x10);
  uVar2 = param_2[4];
  iVar3 = 0;
  while( true ) {
    puVar5 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar5 = (undefined4 *)*param_2;
    }
    uVar4 = F_00a2ce30(param_1 GEN_EDX_ARG,puVar5,iVar3,param_2[4]);
    if (uVar4 == 0xffffffff) break;
    F_00a2eec0(param_1 GEN_EDX_ARG,uVar4,uVar2,param_3,0,0xffffffff);
    iVar3 = uVar4 + iVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00a221f0 */
GEN_FRAME uint GEN_STDCALL F_00a221f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa221f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  char cVar2;
  char cVar3;
  char * pcVar4;
  undefined4 in_ECX = 0;
  undefined4 extraout_ECX = 0;
  undefined4 extraout_ECX_00 = 0;
  undefined4 extraout_ECX_01 = 0;
  undefined4 extraout_ECX_02 = 0;
  undefined4 extraout_ECX_03 = 0;
  undefined4 extraout_ECX_04 = 0;
  char * pcVar5;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  pcVar4 = param_2;
  if (*param_2 != '\0') {
    pcVar5 = param_2 + 2;
    do {
      cVar2 = pcVar5[-2];
      if (cVar2 == ' ') {
        cVar3 = pcVar5[-1];
        if (((((cVar3 == ';') || (cVar3 == ':')) || (cVar3 == '!')) || (((cVar3 == '?' || (cVar3 == '.')) || ((*REFG(undefined * PTR32, 0x1333ca0) == pcVar5[-1] && ((REFG(undefined * PTR32, 0x1333ca0)[1] == *pcVar5 && (REFG(undefined * PTR32, 0x1333ca0)[2] == pcVar5[1])))))))) || ((*REFG(undefined * PTR32, 0x1333ca8) == pcVar5[-1] && (REFG(undefined * PTR32, 0x1333ca8)[1] == *pcVar5)))) {
          pcVar4 = (char *)F_00a2f350(param_1 GEN_EDX_ARG,"<nbsp>",6);
          in_ECX = extraout_ECX_01;
        }
        else if ((((local_c < 3) || (*REFG(undefined * PTR32, 0x1333c9c) != pcVar5[-5])) || (REFG(undefined * PTR32, 0x1333c9c)[1] != pcVar5[-4])) || (REFG(undefined * PTR32, 0x1333c9c)[2] != pcVar5[-3])) {
          if (((local_c < 2) || (*REFG(undefined * PTR32, 0x1333ca4) != pcVar5[-4])) || (REFG(undefined * PTR32, 0x1333ca4)[1] != pcVar5[-3])) goto LAB_00a22339;
          pcVar4 = (char *)F_00a30cc0(param_1 GEN_EDX_ARG,"<nbsp>");
          in_ECX = extraout_ECX_00;
        }
        else {
          pcVar4 = (char *)F_00a30cc0(param_1 GEN_EDX_ARG,"<nbsp>");
          in_ECX = extraout_ECX;
        }
      }
      else if (cVar2 == '\"') {
        if (local_8 < 1) {
          pcVar4 = REFG(undefined * PTR32, 0x1333c8c);
          do {
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          pcVar4 = (char *)F_00a2f350(param_1 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1333c8c), (int)pcVar4 - (int)(REFG(undefined * PTR32, 0x1333c8c) + 1));
          local_8 = local_8 + 1;
          in_ECX = extraout_ECX_03;
        }
        else {
          pcVar4 = REFG(undefined * PTR32, 0x1333c94);
          do {
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          pcVar4 = (char *)F_00a2f350(param_1 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1333c94), (int)pcVar4 - (int)(REFG(undefined * PTR32, 0x1333c94) + 1));
          local_8 = local_8 - 1;
          in_ECX = extraout_ECX_02;
        }
      }
      else {
LAB_00a22339: ;
        pcVar4 = (char *)F_00a2ed20(param_1 GEN_EDX_ARG,1,CONCAT31((int3)((uint)in_ECX >> 8),cVar2));
        in_ECX = extraout_ECX_04;
      }
      local_c = local_c + 1;
      pcVar1 = pcVar5 - 1;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
  }
  return (uint)pcVar4;
}

/* ref: FUN_00a22360 */
GEN_FRAME byte GEN_THISCALL F_00a22360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined3 uVar7;
  undefined4 uVar4;
  uint uVar5;
  char * pcVar6;
  byte * pbVar8;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  bVar2 = false;
  uVar7 = (undefined3)((uint)*(undefined4 *)((int)this + 0x14) >> 8);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x14))) {
  case 0: ;
  case 4: ;
  case 5: ;
    bVar1 = *param_2;
    uVar5 = CONCAT31(uVar7,bVar1);
    pbVar8 = param_2;
    break;
  case 1: ;
    bVar1 = *param_2;
    uVar4 = CONCAT31(uVar7,bVar1);
    pbVar8 = param_2;
    while (bVar1 != 0) {
      if ((((char)uVar4 == ' ') && (pbVar8[1] == 0x2e)) && (pbVar8[2] != 0x2e)) {
        uVar5 = F_00a2f350(param_1 GEN_EDX_FWD,"<nbsp>",6);
      }
      else if ((char)uVar4 == '\"') {
        if (local_c < 1) {
          pcVar6 = REFG(undefined * PTR32, 0x1333c8c);
          do {
            cVar3 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar3 != '\0');
          uVar5 = F_00a2f350(param_1 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1333c8c),
                               (int)pcVar6 - (int)(REFG(undefined * PTR32, 0x1333c8c) + 1));
          local_c = local_c + 1;
        }
        else {
          pcVar6 = REFG(undefined * PTR32, 0x1333c94);
          do {
            cVar3 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar3 != '\0');
          uVar5 = F_00a2f350(param_1 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1333c94),
                               (int)pcVar6 - (int)(REFG(undefined * PTR32, 0x1333c94) + 1));
          local_c = local_c - 1;
        }
      }
      else {
        uVar5 = F_00a2ed20(param_1 GEN_EDX_ARG,1,uVar4);
      }
      bVar1 = pbVar8[1];
      uVar4 = CONCAT31((int3)(uVar5 >> 8),bVar1);
      pbVar8 = pbVar8 + 1;
    }
    return 1;
  case 2: ;
    bVar1 = *param_2;
    uVar5 = CONCAT31(uVar7,bVar1);
    pbVar8 = param_2;
    while (bVar1 != 0) {
      cVar3 = (char)uVar5;
      if (bVar2) {
        if (cVar3 != '\"') {
          F_00a2ed20(param_1 GEN_EDX_ARG,1,0x5c);
        }
        uVar5 = F_00a2ed20(param_1 GEN_EDX_ARG,1,(uint)*pbVar8);
        bVar2 = false;
      }
      else if (cVar3 == '\\') {
        bVar2 = true;
      }
      else if (((cVar3 == ' ') && (pbVar8[1] == 0x2e)) && (pbVar8[2] != 0x2e)) {
        uVar5 = F_00a30cc0(param_1 GEN_EDX_ARG,"<nbsp>");
      }
      else if (cVar3 == '\"') {
        if (local_c < 1) {
          uVar5 = F_00a30cc0(param_1 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1333c90));
          local_c = local_c + 1;
        }
        else {
          uVar5 = F_00a30cc0(param_1 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1333c98));
          local_c = local_c - 1;
        }
      }
      else {
        uVar5 = F_00a2ed20(param_1 GEN_EDX_ARG,1,uVar5);
      }
      bVar1 = pbVar8[1];
      uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1);
      pbVar8 = pbVar8 + 1;
    }
    return 1;
  case 3: ;
    F_00a221f0(param_1,param_2);
    return 1;
  default: ;
    return 0;
  }
  while (bVar1 != 0) {
    cVar3 = (char)uVar5;
    if (bVar2) {
      if ((cVar3 != '\'') && (cVar3 != '\"')) {
        F_00a2ed20(param_1 GEN_EDX_ARG,1,0x5c);
      }
      uVar5 = F_00a2ed20(param_1 GEN_EDX_ARG,1,(uint)*pbVar8);
      bVar2 = false;
    }
    else if (cVar3 == '\\') {
      bVar2 = true;
    }
    else if (cVar3 == '\"') {
      if (local_c < 1) {
        pcVar6 = REFG(undefined * PTR32, 0x1333c8c);
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        uVar5 = F_00a2f350(param_1 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1333c8c),
                             (int)pcVar6 - (int)(REFG(undefined * PTR32, 0x1333c8c) + 1));
        local_c = local_c + 1;
      }
      else {
        pcVar6 = REFG(undefined * PTR32, 0x1333c94);
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        uVar5 = F_00a2f350(param_1 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1333c94),
                             (int)pcVar6 - (int)(REFG(undefined * PTR32, 0x1333c94) + 1));
        local_c = local_c - 1;
      }
    }
    else if (cVar3 == '\'') {
      if (local_10 < 1) {
        uVar5 = F_00a30cc0(param_1 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1333c84));
        local_10 = local_10 + 1;
      }
      else {
        uVar5 = F_00a30cc0(param_1 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1333c88));
        local_10 = local_10 - 1;
      }
    }
    else {
      uVar5 = F_00a2ed20(param_1 GEN_EDX_ARG,1,uVar5);
    }
    bVar1 = pbVar8[1];
    uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1);
    pbVar8 = pbVar8 + 1;
  }
  return 1;
}

/* ref: FUN_00a22600 */
GEN_FRAME uint GEN_THISCALL F_00a22600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte * PTR32 * PTR32 * PTR32 * PTR32 * param_2 = (byte * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  bool bVar1;
  byte * PTR32 * PTR32 * PTR32 * ppppbVar2;
  byte bVar3;
  uint uVar4;
  byte * PTR32 * PTR32 * PTR32 * PTR32 * pppppbVar5;
  undefined * this_00;
  
  ppppbVar2 = ((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_1;
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0] = (byte * PTR32 * PTR32 * PTR32 *)((uint)ppppbVar2 & 0xffffff00);
  bVar3 = F_00a22360(this GEN_EDX_FWD,((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)),param_2);
  pppppbVar5 = param_2;
  if ((bVar3 != 0) && (pppppbVar5 = (byte * PTR32 * PTR32 * PTR32 * PTR32 *)((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0], (*(uint *)(gen_frame + 0x30)) < 0x10)) {
    pppppbVar5 = ((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c));
  }
  bVar3 = *(byte *)pppppbVar5;
  (*(uint *)(gen_frame + 0x18)) = 0;
  bVar1 = false;
  this_00 = param_1;
  do {
    if (bVar3 == 0) {
      if (0xf < (*(uint *)(gen_frame + 0x30))) {
        F_00429760(((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x2c4);
      }
      uVar4 = (*(uint *)(gen_frame + 0x18));
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar4;
    }
    pppppbVar5 = (byte * PTR32 * PTR32 * PTR32 * PTR32 *)((int)pppppbVar5 + 1);
    ((byte *)(gen_frame + 0x8))[8] = bVar3;
    if (bVar1) {
      F_0042d160(this_00 GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)));
      bVar1 = false;
    }
    else if (bVar3 == 0x3c) {
      uVar4 = F_00a246c0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) GEN_EDX_ARG,this_00,pppppbVar5,((byte *)(gen_frame + 0x8)));
      if ((int)uVar4 < -1) {
        F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x18);
        if (0xf < (*(uint *)(gen_frame + 0x30))) {
          F_00429760(((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x2c4);
        }
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar4;
      }
      pppppbVar5 = ((byte * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)pppppbVar5 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)))));
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x14));
      if ((int)uVar4 < (int)(*(uint *)(gen_frame + 0x18))) {
        (*(uint *)(gen_frame + 0x18)) = uVar4;
      }
    }
    else if (bVar3 == 0x5c) {
      bVar1 = true;
    }
    else if ((bVar3 != 10) && (bVar3 != 0xd)) {
      F_0042d160(this_00 GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)));
    }
    bVar3 = *(byte *)pppppbVar5;
  } while( true );
}

/* ref: FUN_00a22730 */
GEN_FRAME uint GEN_THISCALL F_00a22730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042a990(param_2 GEN_EDX_FWD);
  uVar1 = F_00a22600(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: Component::Text::TextModule::vf7 */
GEN_FRAME uint GEN_THISCALL F_00a22750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * in_ecx;
  undefined4 * puVar1;
  uint uVar2;
  
  in_ecx = this + 0x114;
  F_0042aca0(in_ecx GEN_EDX_FWD);
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0xc))))(*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG)));
  *(undefined4 *)(this + 0x68) = *puVar1;
  uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
  F_00a22600(this + 0x54 GEN_EDX_ARG,in_ecx,uVar2);
  F_0042cbc0(param_1 GEN_EDX_ARG,in_ecx);
  return (uint)param_1;
}

/* ref: FUN_00a227a0 */
GEN_FRAME byte GEN_THISCALL F_00a227a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa227a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined * pvVar5;
  int * piVar6;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)this + 0xc);
  F_00a2ff40((undefined *)((int)this + 0xc) GEN_EDX_FWD,&(*(int *)(gen_frame + 0xc)),param_1);
  if ((*(int *)(gen_frame + 0xc)) != *(int *)((int)this + 0x10)) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 0x60) + 4))))
                      (*(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 0x60) GEN_EDX_ARG,param_1,param_2);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return (byte)uVar2;
  }
  iVar1 = **(int * PTR32 *)((int)this + 4);
  uVar2 = F_0042a990(param_1 GEN_EDX_ARG);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 8))(*(undefined4 *)((int)this + 4),uVar2);
  if (uVar2 == 0) {
LAB_00a22949: ;
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
  if (*(int *)((int)this + 8) == 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 8))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,"Attributive");
    *(uint *)((int)this + 8) = uVar3;
    if (uVar3 == 0) goto LAB_00a22949;
  }
  puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xc))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  switch((unsigned int)(uintptr_t)(*puVar4)) {
  case 1: ;
    pvVar5 = (undefined *)F_00406b90(0x14,0,0);
    if (pvVar5 != (undefined *)0x0) {
      piVar6 = (int *)F_00a21fb0(pvVar5 GEN_EDX_ARG,uVar2,*(undefined4 *)((int)this + 8));
      goto LAB_00a22904;
    }
    break;
  case 2: ;
    pvVar5 = (undefined *)F_00406b90(0x20,0,0);
    if (pvVar5 != (undefined *)0x0) {
      piVar6 = (int *)F_00a21f10(pvVar5 GEN_EDX_ARG,uVar2,*(undefined4 *)((int)this + 8));
      goto LAB_00a22904;
    }
    break;
  case 3: ;
    pvVar5 = (undefined *)F_00406b90(0x14,0,0);
    if (pvVar5 != (undefined *)0x0) {
      piVar6 = (int *)F_00a22040(pvVar5 GEN_EDX_ARG,uVar2,*(undefined4 *)((int)this + 8));
      goto LAB_00a22904;
    }
    break;
  case 4: ;
  case 5: ;
    pvVar5 = (undefined *)F_00406b90(0x14,0,0);
    if (pvVar5 != (undefined *)0x0) {
      piVar6 = (int *)F_00a21ea0(pvVar5 GEN_EDX_ARG,uVar2,*(undefined4 *)((int)this + 8));
      goto LAB_00a22904;
    }
    break;
  default: ;
    pvVar5 = (undefined *)F_00406b90(0x14,0,0);
    if (pvVar5 != (undefined *)0x0) {
      piVar6 = (int *)F_00a21a20(pvVar5 GEN_EDX_ARG,uVar2,*(undefined4 *)((int)this + 8));
      goto LAB_00a22904;
    }
  }
  piVar6 = (int *)0x0;
LAB_00a22904: ;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,param_1);
  (*(int * PTR32 *)(gen_frame + 0x64)) = piVar6;
  F_00a31110((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 4))(piVar6 GEN_EDX_ARG,param_1,(*(undefined4 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (byte)uVar2;
}

/* ref: FUN_00a22980 */
GEN_NOFRAME uint GEN_THISCALL F_00a22980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa22980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  
  piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  if (piVar6 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      puVar2 = (undefined4 *)piVar6[0x18];
      if (puVar2 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
      }
      if (*(char *)((int)piVar6 + 0x65) == '\0') {
        piVar3 = (int *)piVar6[2];
        if (*(char *)((int)piVar3 + 0x65) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x65);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x65);
            piVar6 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x65);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x65);
            piVar5 = (int *)piVar6[1];
            piVar3 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int * PTR32 *)((int)this + 0x10));
  }
  piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4)));
  cVar1 = *(char *)((int)piVar6 + 0x65);
  while (cVar1 == '\0') {
    F_00a30120((undefined *)((int)this + 0xc) GEN_EDX_ARG,piVar6[2]);
    piVar3 = (int *)*piVar6;
    F_0042c880(piVar6 + 3 GEN_EDX_ARG);
    F_00429760(piVar6,0x68,0x2c4);
    piVar6 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x65);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  *(undefined4 *)*(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x10);
  uVar4 = *(uint *)((int)this + 0x10);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar4;
}

/* ref: FUN_00a22a50 */
GEN_NOFRAME uint GEN_THISCALL F_00a22a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a22980(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00a22a60 */
GEN_FRAME uint GEN_THISCALL F_00a22a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_0042cca0(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_FWD,0xffffffff);
  F_0042b630(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
  uVar1 = F_0042a990(param_2 GEN_EDX_ARG);
  uVar1 = F_00a22600(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xac)),uVar1);
  if (-2 < (int)uVar1) {
    uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
    uVar2 = F_00a20720(((byte *)(gen_frame + 0x100)),uVar2);
    iVar3 = 0;
    if (0 < (int)uVar2) {
      do {
        F_0042d160(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x100))[(int)(iVar3)]);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar2);
    }
    uVar2 = F_0042cd30(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0xac)));
    F_0042ccf0(param_1 GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a22b40 */
GEN_FRAME uint GEN_THISCALL F_00a22b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa22b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  char * pcVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  bVar2 = false;
  ((undefined4 *)(gen_frame + 0x60))[0] = 0;
  bVar3 = F_00a4cda0(param_2,0);
  cVar4 = (char)param_3;
  if (bVar3 != 0) {
    if ((cVar4 == 'n') || (cVar4 == '.')) {
      uVar5 = F_00a4cf70(param_2,0);
      uVar5 = F_00a20720(((undefined4 *)(gen_frame + 0x60)),uVar5);
      iVar7 = 0;
      if (0 < (int)uVar5) {
        do {
          F_0042d160(param_1 GEN_EDX_ARG,(uint)*(byte *)((int)((undefined4 *)(gen_frame + 0x60)) + iVar7));
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar5);
      }
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042a970(param_2 GEN_EDX_ARG);
  if (((uVar5 == 3) && (pcVar6 = (char *)F_0042a990(param_2 GEN_EDX_ARG), *pcVar6 == '\'')) &&
     (uVar5 = F_0042a990(param_2 GEN_EDX_ARG), *(char *)(uVar5 + 2) == '\'')) {
    uVar5 = F_0042a990(param_2 GEN_EDX_ARG);
    uVar5 = F_00a21dc0(param_1,(int)*(char *)(uVar5 + 1));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return uVar5;
  }
  uVar5 = F_0042bba0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a2e70));
  if (uVar5 == 0) {
    F_0042d160(param_1 GEN_EDX_ARG,0xe0);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
  uVar5 = F_0042bba0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a2ec8));
  if (uVar5 == 0) {
    F_0042d160(param_1 GEN_EDX_ARG,0xe1);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
  uVar5 = F_0042bba0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a2f20));
  if (uVar5 == 0) {
    F_0042d160(param_1 GEN_EDX_ARG,0xe2);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
  uVar5 = F_0042bba0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a2f78));
  if (uVar5 == 0) {
    F_0042d160(param_1 GEN_EDX_ARG,0xe3);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
  uVar5 = F_0042bba0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a2fd0));
  if (uVar5 == 0) {
    F_0042d160(param_1 GEN_EDX_ARG,0xe4);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
  uVar5 = F_0042bba0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a3028));
  if (uVar5 == 0) {
    F_0042d160(param_1 GEN_EDX_ARG,0xe5);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
  uVar5 = F_0042b790(param_2 GEN_EDX_ARG);
  if (uVar5 < 4) {
LAB_00a22d74: ;
    bVar1 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x10e3b48),REFG(undefined4, 0x108cc50));
    bVar2 = true;
    uVar5 = F_0042da40(param_2 GEN_EDX_ARG,0,4,((undefined1 *)(gen_frame + 0xc)));
    bVar1 = true;
    if (uVar5 != 0) goto LAB_00a22d74;
  }
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  bVar2 = false;
  if (bVar1) {
    if ((cVar4 == 'n') || (cVar4 == '.')) {
      uVar5 = F_00a4cf70(param_2,10);
      F_0042d160(param_1 GEN_EDX_ARG,0xe9);
      F_0042d160(param_1 GEN_EDX_ARG,uVar5 + 1 & 0xff);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2 GEN_EDX_ARG);
  if (uVar5 < 4) {
LAB_00a22e10: ;
    bVar1 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x10e3b50),REFG(undefined4, 0x108cc50));
    bVar2 = true;
    uVar5 = F_0042da40(param_2 GEN_EDX_ARG,0,4,((undefined1 *)(gen_frame + 0xc)));
    bVar1 = true;
    if (uVar5 != 0) goto LAB_00a22e10;
  }
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  bVar2 = false;
  if (bVar1) {
    if ((cVar4 == 'n') || (cVar4 == '.')) {
      uVar5 = F_00a4cf70(param_2,10);
      F_0042d160(param_1 GEN_EDX_ARG,0xe8);
      F_0042d160(param_1 GEN_EDX_ARG,uVar5 + 1 & 0xff);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2 GEN_EDX_ARG);
  if (uVar5 < 4) {
LAB_00a22eac: ;
    bVar1 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x10e3b58),REFG(undefined4, 0x108cc50));
    bVar2 = true;
    uVar5 = F_0042da40(param_2 GEN_EDX_ARG,0,4,((undefined1 *)(gen_frame + 0xc)));
    bVar1 = true;
    if (uVar5 != 0) goto LAB_00a22eac;
  }
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  bVar2 = false;
  if (bVar1) {
    if ((cVar4 == 's') || (cVar4 == '.')) {
      uVar5 = F_00a4cf70(param_2,10);
      F_0042d160(param_1 GEN_EDX_ARG,0xeb);
      F_0042d160(param_1 GEN_EDX_ARG,uVar5 + 1 & 0xff);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2 GEN_EDX_ARG);
  if (uVar5 < 4) {
LAB_00a22f48: ;
    bVar1 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x10e3b60),REFG(undefined4, 0x108cc50));
    bVar2 = true;
    uVar5 = F_0042da40(param_2 GEN_EDX_ARG,0,4,((undefined1 *)(gen_frame + 0xc)));
    bVar1 = true;
    if (uVar5 != 0) goto LAB_00a22f48;
  }
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  bVar2 = false;
  if (bVar1) {
    if ((cVar4 == 's') || (cVar4 == '.')) {
      uVar5 = F_00a4cf70(param_2,10);
      F_0042d160(param_1 GEN_EDX_ARG,0xea);
      F_0042d160(param_1 GEN_EDX_ARG,uVar5 + 1 & 0xff);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2 GEN_EDX_ARG);
  if (uVar5 < 10) {
LAB_00a22fe4: ;
    bVar1 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,"stackcolor",REFG(undefined4, 0x108cc50));
    bVar2 = true;
    uVar5 = F_0042da40(param_2 GEN_EDX_ARG,0,10,((undefined1 *)(gen_frame + 0xc)));
    bVar1 = true;
    if (uVar5 != 0) goto LAB_00a22fe4;
  }
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  bVar2 = false;
  if (bVar1) {
    if ((cVar4 == 'n') || (cVar4 == '.')) {
      F_0042d160(param_1 GEN_EDX_ARG,0xec);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2 GEN_EDX_ARG);
  if (uVar5 < 6) {
LAB_00a23068: ;
    bVar1 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,"t_msec",REFG(undefined4, 0x108cc50));
    bVar2 = true;
    uVar5 = F_0042da40(param_2 GEN_EDX_ARG,0,6,((undefined1 *)(gen_frame + 0xc)));
    bVar1 = true;
    if (uVar5 != 0) goto LAB_00a23068;
  }
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  bVar2 = false;
  if (bVar1) {
    if ((cVar4 == 'n') || (cVar4 == '.')) {
      F_0042d160(param_1 GEN_EDX_ARG,0xd8);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2 GEN_EDX_ARG);
  if (uVar5 < 5) {
LAB_00a230ec: ;
    bVar1 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,"t_sec",REFG(undefined4, 0x108cc50));
    bVar2 = true;
    uVar5 = F_0042da40(param_2 GEN_EDX_ARG,0,5,((undefined1 *)(gen_frame + 0xc)));
    bVar1 = true;
    if (uVar5 != 0) goto LAB_00a230ec;
  }
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  if (bVar1) {
    if ((cVar4 == 'n') || (cVar4 == '.')) {
      F_0042d160(param_1 GEN_EDX_ARG,0xd9);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2 GEN_EDX_ARG);
  if (uVar5 < 5) {
LAB_00a23172: ;
    bVar2 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,"t_min",REFG(undefined4, 0x108cc50));
    uVar5 = F_0042da40(param_2 GEN_EDX_ARG,0,5,((undefined1 *)(gen_frame + 0xc)));
    bVar2 = true;
    if (uVar5 != 0) goto LAB_00a23172;
  }
  bVar1 = false;
  if (bVar2) {
    if ((cVar4 == 'n') || (cVar4 == '.')) {
      F_0042d160(param_1 GEN_EDX_ARG,0xda);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2 GEN_EDX_ARG);
  if (uVar5 < 6) {
LAB_00a231fb: ;
    bVar2 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,"t_hour",REFG(undefined4, 0x108cc50));
    bVar1 = true;
    uVar5 = F_0042da40(param_2 GEN_EDX_ARG,0,6,((undefined1 *)(gen_frame + 0xc)));
    bVar2 = true;
    if (uVar5 != 0) goto LAB_00a231fb;
  }
  if (bVar1) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  bVar1 = false;
  if (!bVar2) {
    uVar5 = F_0042b790(param_2 GEN_EDX_ARG);
    if (uVar5 < 6) {
LAB_00a23288: ;
      bVar2 = false;
    }
    else {
      F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,"t_hour12",REFG(undefined4, 0x108cc50));
      bVar1 = true;
      uVar5 = F_0042da40(param_2 GEN_EDX_ARG,0,6,((undefined1 *)(gen_frame + 0xc)));
      bVar2 = true;
      if (uVar5 != 0) goto LAB_00a23288;
    }
    if (bVar1) {
      F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    }
    bVar1 = false;
    if (!bVar2) {
      uVar5 = F_0042b790(param_2 GEN_EDX_ARG);
      if (uVar5 < 5) {
LAB_00a23315: ;
        bVar2 = false;
      }
      else {
        F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,"t_day",REFG(undefined4, 0x108cc50));
        bVar1 = true;
        uVar5 = F_0042da40(param_2 GEN_EDX_ARG,0,5,((undefined1 *)(gen_frame + 0xc)));
        bVar2 = true;
        if (uVar5 != 0) goto LAB_00a23315;
      }
      if (bVar1) {
        F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      }
      bVar1 = false;
      if (bVar2) {
        if ((cVar4 == 'n') || (cVar4 == '.')) {
          F_0042d160(param_1 GEN_EDX_ARG,0xdc);
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
          return 0;
        }
        goto LAB_00a232bb;
      }
      uVar5 = F_0042b790(param_2 GEN_EDX_ARG);
      if (uVar5 < 6) {
LAB_00a233a2: ;
        bVar2 = false;
      }
      else {
        F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,"t_wday",REFG(undefined4, 0x108cc50));
        bVar1 = true;
        uVar5 = F_0042da40(param_2 GEN_EDX_ARG,0,6,((undefined1 *)(gen_frame + 0xc)));
        bVar2 = true;
        if (uVar5 != 0) goto LAB_00a233a2;
      }
      if (bVar1) {
        F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      }
      bVar1 = false;
      if (bVar2) {
        if ((cVar4 == 'n') || (cVar4 == '.')) {
          F_0042d160(param_1 GEN_EDX_ARG,0xdd);
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
          return 0;
        }
        goto LAB_00a232bb;
      }
      uVar5 = F_0042b790(param_2 GEN_EDX_ARG);
      if (uVar5 < 5) {
LAB_00a2342f: ;
        bVar2 = false;
      }
      else {
        F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,"t_mon",REFG(undefined4, 0x108cc50));
        bVar1 = true;
        uVar5 = F_0042da40(param_2 GEN_EDX_ARG,0,5,((undefined1 *)(gen_frame + 0xc)));
        bVar2 = true;
        if (uVar5 != 0) goto LAB_00a2342f;
      }
      if (bVar1) {
        F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      }
      bVar1 = false;
      if (bVar2) {
        if ((cVar4 == 'n') || (cVar4 == '.')) {
          F_0042d160(param_1 GEN_EDX_ARG,0xde);
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
          return 0;
        }
        goto LAB_00a232bb;
      }
      uVar5 = F_0042b790(param_2 GEN_EDX_ARG);
      if (uVar5 < 6) {
LAB_00a234bb: ;
        bVar2 = false;
      }
      else {
        F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,"t_year",REFG(undefined4, 0x108cc50));
        bVar1 = true;
        uVar5 = F_0042da40(param_2 GEN_EDX_ARG,0,6,((undefined1 *)(gen_frame + 0xc)));
        bVar2 = true;
        if (uVar5 != 0) goto LAB_00a234bb;
      }
      if (bVar1) {
        F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      }
      if (bVar2) {
        if ((cVar4 == 'n') || (cVar4 == '.')) {
          F_0042d160(param_1 GEN_EDX_ARG,0xdf);
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
          return 0;
        }
      }
      else if ((cVar4 == 's') || (cVar4 == '.')) {
        uVar5 = F_00a22a60(this GEN_EDX_ARG,param_1,param_2);
        F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
        return uVar5;
      }
      goto LAB_00a232bb;
    }
  }
  if ((cVar4 == 'n') || (cVar4 == '.')) {
    F_0042d160(param_1 GEN_EDX_ARG,0xdb);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
LAB_00a232bb: ;
  uVar5 = F_00a203c0(this GEN_EDX_ARG,param_1,param_2,param_3);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00a23530 */
GEN_FRAME uint GEN_STDCALL F_00a23530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa23530u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  bool bVar2;
  undefined4 * PTR32 * PTR32 * pppuVar3;
  undefined1 * puVar4;
  undefined4 * puVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  char * pcVar7;
  uint uVar8;
  undefined4 * puVar9;
  char * pcVar10;
  int iVar11;
  bool bVar12;
  
  pppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar1 = (param_2[1] - *param_2) / 0x1c;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  bVar2 = false;
  (*(uint *)(gen_frame + 0x60)) = 0xf;
  (*(int *)(gen_frame + 0x5c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar3 & 0xffffff00);
  (*(uint *)(gen_frame + 0x24)) = 0;
  if (uVar1 != 0) {
    (*(int *)(gen_frame + 0x28)) = 0;
    do {
      uVar8 = ((uint *)(gen_frame + 0x30))[0];
      pcVar10 = (char *)((*(int *)(gen_frame + 0x28)) + *param_2);
      pcVar7 = pcVar10;
      if (0xf < *(uint *)(pcVar10 + 0x14)) {
        pcVar7 = *(char * PTR32 *)pcVar10;
      }
      if (*pcVar7 == '<') {
        iVar11 = *(int *)(pcVar10 + 0x10);
        pcVar7 = pcVar10;
        if (0xf < *(uint *)(pcVar10 + 0x14)) {
          pcVar7 = *(char * PTR32 *)pcVar10;
        }
        if (pcVar7[iVar11 - 1] == '>') goto LAB_00a23624;
        (*(uint *)(gen_frame + 0x44)) = 0xf;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x30))[0] + 0)) = 0;
        ((uint *)(gen_frame + 0x30))[0] = uVar8 & 0xffffff00;
        F_00a2edd0(((uint *)(gen_frame + 0x30)) GEN_EDX_ARG,pcVar10,0,iVar11 - 1);
        F_00a2ec30(param_1 GEN_EDX_ARG,((uint *)(gen_frame + 0x30)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x44))) {
          F_00429760(((uint *)(gen_frame + 0x30))[0],(*(uint *)(gen_frame + 0x44)) + 1,0x2c4);
        }
        F_00a2f350(param_1 GEN_EDX_ARG,&REFG(undefined, 0x10e3d08),1);
        bVar2 = true;
      }
      else {
LAB_00a23624: ;
        if (bVar2) {
          pcVar7 = pcVar10;
          if (0xf < *(uint *)(pcVar10 + 0x14)) {
            pcVar7 = *(char * PTR32 *)pcVar10;
          }
          if (*pcVar7 == '[') {
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            puVar4 = (undefined1 *)((int)ppppuVar6 + (*(int *)(gen_frame + 0x5c)));
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            if (puVar4 != (undefined1 *)0x0) {
              puVar4 = puVar4 - (int)ppppuVar6;
            }
            F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,puVar4,1,0x5b);
            F_00a2ec30(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)) + 0x1c + *param_2,0,0xffffffff);
            iVar11 = 1;
            while( true ) {
              puVar5 = (undefined4 *)(*param_2 + (*(int *)(gen_frame + 0x28)));
              puVar9 = puVar5;
              if (0xf < (uint)puVar5[5]) {
                puVar9 = (undefined4 *)*puVar5;
              }
              if (*(char *)((int)puVar9 + iVar11) == ']') break;
              if (0xf < (uint)puVar5[5]) {
                puVar5 = (undefined4 *)*puVar5;
              }
              ((byte *)(gen_frame + 0xc))[0x10] = *(byte *)((int)puVar5 + iVar11);
              ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
              if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
                ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
              }
              puVar4 = (undefined1 *)((int)ppppuVar6 + (*(int *)(gen_frame + 0x5c)));
              ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
              if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
                ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
              }
              if (puVar4 != (undefined1 *)0x0) {
                puVar4 = puVar4 - (int)ppppuVar6;
              }
              F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,puVar4,1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)));
              iVar11 = iVar11 + 1;
            }
            F_00a2ec30(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)) + 0x38 + *param_2,0,0xffffffff);
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            puVar4 = (undefined1 *)((int)ppppuVar6 + (*(int *)(gen_frame + 0x5c)));
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            if (puVar4 != (undefined1 *)0x0) {
              puVar4 = puVar4 - (int)ppppuVar6;
            }
            F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,puVar4,1,0x5d);
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            puVar4 = (undefined1 *)((int)ppppuVar6 + (*(int *)(gen_frame + 0x5c)));
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            if (puVar4 != (undefined1 *)0x0) {
              puVar4 = puVar4 - (int)ppppuVar6;
            }
            F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,puVar4,1,0x2c);
            F_00a2ec30(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),0,0xffffffff);
            (*(int *)(gen_frame + 0x5c)) = 0;
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) + 2;
            (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x38;
            *(undefined1 *)ppppuVar6 = 0;
            goto LAB_00a23802;
          }
        }
        iVar11 = *(int *)(pcVar10 + 0x10);
        pcVar7 = pcVar10;
        if (0xf < *(uint *)(pcVar10 + 0x14)) {
          pcVar7 = *(char * PTR32 *)pcVar10;
        }
        uVar8 = F_0040d320(pcVar7,&REFG(undefined, 0x10e3d0c),(uint)(iVar11 != 0));
        bVar12 = false;
        if (uVar8 == 0) {
          if (iVar11 == 0) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)(iVar11 != 1);
          }
          bVar12 = uVar8 == 0;
        }
        if (bVar12) {
          F_00a2f350(param_1 GEN_EDX_ARG,&REFG(undefined, 0x10e3d10),2);
          bVar2 = false;
        }
        else {
          F_00a2ec30(param_1 GEN_EDX_ARG,pcVar10,0,0xffffffff);
        }
      }
LAB_00a23802: ;
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x1c;
      (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) + 1;
    } while ((*(uint *)(gen_frame + 0x24)) < uVar1);
    if (0xf < (*(uint *)(gen_frame + 0x60))) {
      F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0],(*(uint *)(gen_frame + 0x60)) + 1,0x2c4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: Component::Text::TextModule::vf9 */
GEN_FRAME uint GEN_THISCALL F_00a23850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa23850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0xc))))(*(int * PTR32 *)(this + 0x34) GEN_EDX_FWD)));
  if (*piVar3 == 2) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = param_2;
    (*(undefined4 *)(gen_frame + 0x68)) = 1;
    (*(undefined4 *)(gen_frame + 0x6c)) = 5;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined1 *)(gen_frame + 0x74)) = 0;
    bVar2 = F_00a227a0(this + 0x38 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),param_3);
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return CONCAT31((int3)(uVar5 >> 8),bVar2);
  }
  iVar1 = *(int *)this;
  uVar4 = ((code *)*(gen_code32 *)(iVar1 + 4))(this,param_3);
  uVar4 = ((code *)*(gen_code32 *)(iVar1 + 0x18))(this,param_1,param_2,0xffff,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return (uint)(uVar4 == 1);
}

/* ref: FUN_00a23910 */
GEN_FRAME uint GEN_THISCALL F_00a23910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa23910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f48));
  F_00a22980(this GEN_EDX_FWD);
  F_00a30fa0((undefined *)((int)this + 0xc) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x10),0x68,0x2c4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  return (uint)uVar1;
}

/* ref: FUN_00a23960 */
GEN_FRAME uint GEN_STDCALL F_00a23960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa23960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  undefined * pvVar2;
  byte bVar3;
  uint uVar4;
  char * pcVar5;
  undefined * puVar6;
  undefined * pvVar7;
  undefined * PTR32 * ppvVar8;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  if ((*(uint *)&REFG(undefined, 0x14a2e6c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a2e6c) = *(uint *)&REFG(undefined, 0x14a2e6c) | 1;
    F_0042cc20(&REFG(undefined, 0x14a2b78) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3e0c)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2bcc) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3e08)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2c20) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3e04)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2c74) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3e00)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2cc8) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3dfc)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2d1c) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3df8)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2d70) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3df4)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2dc4) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3df0)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2e18) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3dec)),REFG(undefined4, 0x108cc50));
    F_00c47de6(((code *)REFP(0x107c570)));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0xc)) = 0;
  ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x4));
  uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e3e10),REFG(undefined4, 0x108cc50));
  F_00ada1b0(param_1,uVar4,ppvVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  iVar1 = ((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x4))) / 0x54;
  if (iVar1 == 2) {
    *param_3 = 0;
  }
  else {
    if (iVar1 != 3) {
      F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return 0xfffffffe;
    }
    uVar4 = F_00a4cf70((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0xa8,10);
    *param_3 = uVar4 - 1;
  }
  uVar4 = F_00a4cf70((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x54,10);
  *param_2 = uVar4;
  pcVar5 = (char *)F_0042a7f0((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x54 GEN_EDX_ARG,0);
  if (*pcVar5 == '=') {
    *param_2 = -*param_2 - 1;
  }
  uVar4 = 0;
  puVar6 = &REFG(undefined, 0x14a2b78);
  do {
    bVar3 = F_0042b660((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,puVar6);
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (bVar3 != 0) {
      pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x4));
      if ((*(undefined * PTR32 *)(gen_frame + 0x4)) != (undefined *)0x0) {
        for (; pvVar7 != pvVar2; pvVar7 = (undefined *)((int)pvVar7 + 0x54)) {
          F_0042c880(pvVar7 GEN_EDX_ARG);
        }
        F_00429760((*(undefined * PTR32 *)(gen_frame + 0x4)),(((*(int *)(gen_frame + 0xc)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x4))) / 0x54) * 0x54,0x35);
      }
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return uVar4;
    }
    puVar6 = puVar6 + 0x54;
    uVar4 = uVar4 + 1;
  } while ((int)puVar6 < 0x14a2e6c);
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  if ((*(undefined * PTR32 *)(gen_frame + 0x4)) != (undefined *)0x0) {
    for (; pvVar7 != pvVar2; pvVar7 = (undefined *)((int)pvVar7 + 0x54)) {
      F_0042c880(pvVar7 GEN_EDX_ARG);
    }
    F_00429760((*(undefined * PTR32 *)(gen_frame + 0x4)),(((*(int *)(gen_frame + 0xc)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x4))) / 0x54) * 0x54,0x35);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 0xffffffff;
}

/* ref: FUN_00a23c00 */
GEN_FRAME byte GEN_THISCALL F_00a23c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa23c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  code * pcVar1;
  char cVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  
  cVar2 = *param_1;
  pcVar7 = (char *)0x0;
  pcVar8 = (char *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(char * PTR32 *)(gen_frame + 0xc)) = (char *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x10)) = (char *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)0x0;
  if (cVar2 != '\0') {
    do {
      if (cVar2 == '\x02') {
        pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4) + (uint)(byte)param_1[1] * 4)));
        pcVar3 = param_1 + 2;
        uVar4 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_FWD,pcVar3,param_2,&(*(int *)(gen_frame + 0x20)),1);
        if (pcVar1 == (code *)0x0) {
          iVar6 = uVar4 + 3 + (*(int *)(gen_frame + 0x20));
          (*(int *)(gen_frame + 0x1c)) = iVar6;
          pcVar3 = (*(char * PTR32 *)(gen_frame + 0x14));
          if (pcVar8 != pcVar7) {
            F_00c46e20(pcVar8,pcVar7,0);
            (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar8;
            pcVar7 = pcVar8;
            pcVar3 = (*(char * PTR32 *)(gen_frame + 0x14));
          }
          while (0 < iVar6) {
            if ((param_1 < pcVar7) && (pcVar8 <= param_1)) {
              iVar6 = (int)param_1 - (int)pcVar8;
              if (pcVar7 == pcVar3) {
                if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
                uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
                uVar4 = (int)pcVar3 - (int)pcVar8;
                if (uVar4 < uVar5) {
                  if (-(uVar4 >> 1) - 1 < uVar4) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = uVar4 + (uVar4 >> 1);
                  }
                  if (uVar4 < uVar5) {
                    uVar4 = uVar5;
                  }
                  F_00a31510(&(*(char * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar4);
                  pcVar3 = (*(char * PTR32 *)(gen_frame + 0x14));
                  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x10));
                  pcVar8 = (*(char * PTR32 *)(gen_frame + 0xc));
                }
              }
              if (pcVar7 != (char *)0x0) {
                *pcVar7 = pcVar8[iVar6];
              }
            }
            else {
              if (pcVar7 == pcVar3) {
                if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
                uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
                uVar4 = (int)pcVar3 - (int)pcVar8;
                if (uVar4 < uVar5) {
                  if (-(uVar4 >> 1) - 1 < uVar4) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = uVar4 + (uVar4 >> 1);
                  }
                  if (uVar4 < uVar5) {
                    uVar4 = uVar5;
                  }
                  F_00a31510(&(*(char * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar4);
                  pcVar3 = (*(char * PTR32 *)(gen_frame + 0x14));
                  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x10));
                  pcVar8 = (*(char * PTR32 *)(gen_frame + 0xc));
                }
              }
              if (pcVar7 != (char *)0x0) {
                *pcVar7 = *param_1;
              }
            }
            param_1 = param_1 + 1;
            iVar6 = (*(int *)(gen_frame + 0x1c)) - 1;
            (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar7 + 1;
            (*(int *)(gen_frame + 0x1c)) = iVar6;
            pcVar7 = pcVar7 + 1;
          }
          (*(char *)(gen_frame + 0x2b)) = '\0';
          if ((pcVar7 <= &(*(char *)(gen_frame + 0x2b))) || (&(*(char *)(gen_frame + 0x2b)) < pcVar8)) goto LAB_00a23f39;
          iVar6 = (int)&(*(char *)(gen_frame + 0x2b)) - (int)pcVar8;
          if (pcVar7 == pcVar3) {
            if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
            uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
            uVar4 = (int)pcVar3 - (int)pcVar8;
            if (uVar4 < uVar5) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar5) {
                uVar4 = uVar5;
              }
              F_00a31510(&(*(char * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar4);
              pcVar7 = (*(char * PTR32 *)(gen_frame + 0x10));
              pcVar8 = (*(char * PTR32 *)(gen_frame + 0xc));
            }
          }
          if (pcVar7 != (char *)0x0) {
            *pcVar7 = pcVar8[iVar6];
          }
          goto LAB_00a23f7d;
        }
        uVar5 = (*pcVar1)((*(undefined * PTR32 *)(gen_frame + 0x24)),pcVar3 + uVar4,(*(int *)(gen_frame + 0x20)),param_2,param_3);
        if (uVar5 == 0) {
          if (pcVar8 != (char *)0x0) {
            F_00429760(pcVar8,(int)(*(char * PTR32 *)(gen_frame + 0x14)) - (int)pcVar8,0x2c4);
          }
          return 0;
        }
        param_1 = pcVar3 + uVar4 + (*(int *)(gen_frame + 0x20));
      }
      else {
        if (pcVar8 != pcVar7) {
          F_00c46e20(pcVar8,pcVar7,0);
          (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar8;
          pcVar7 = pcVar8;
        }
        cVar2 = *param_1;
        pcVar3 = (*(char * PTR32 *)(gen_frame + 0x14));
        while ((cVar2 != '\0' && (cVar2 != '\x02'))) {
          if ((param_1 < pcVar7) && (pcVar8 <= param_1)) {
            iVar6 = (int)param_1 - (int)pcVar8;
            if (pcVar7 == pcVar3) {
              if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
              uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
              uVar4 = (int)pcVar3 - (int)pcVar8;
              if (uVar4 < uVar5) {
                if (-(uVar4 >> 1) - 1 < uVar4) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = uVar4 + (uVar4 >> 1);
                }
                if (uVar4 < uVar5) {
                  uVar4 = uVar5;
                }
                F_00a31510(&(*(char * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar4);
                pcVar3 = (*(char * PTR32 *)(gen_frame + 0x14));
                pcVar7 = (*(char * PTR32 *)(gen_frame + 0x10));
                pcVar8 = (*(char * PTR32 *)(gen_frame + 0xc));
              }
            }
            if (pcVar7 != (char *)0x0) {
              cVar2 = pcVar8[iVar6];
LAB_00a23ec3: ;
              *pcVar7 = cVar2;
            }
          }
          else {
            if (pcVar7 == pcVar3) {
              if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
              uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
              uVar4 = (int)pcVar3 - (int)pcVar8;
              if (uVar4 < uVar5) {
                if (-(uVar4 >> 1) - 1 < uVar4) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = uVar4 + (uVar4 >> 1);
                }
                if (uVar4 < uVar5) {
                  uVar4 = uVar5;
                }
                F_00a31510(&(*(char * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar4);
                pcVar3 = (*(char * PTR32 *)(gen_frame + 0x14));
                pcVar7 = (*(char * PTR32 *)(gen_frame + 0x10));
                pcVar8 = (*(char * PTR32 *)(gen_frame + 0xc));
              }
            }
            if (pcVar7 != (char *)0x0) {
              cVar2 = *param_1;
              goto LAB_00a23ec3;
            }
          }
          cVar2 = param_1[1];
          param_1 = param_1 + 1;
          pcVar7 = pcVar7 + 1;
          (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar7;
        }
        (*(char *)(gen_frame + 0x2b)) = '\0';
        if ((&(*(char *)(gen_frame + 0x2b)) < pcVar7) && (pcVar8 <= &(*(char *)(gen_frame + 0x2b)))) {
          iVar6 = (int)&(*(char *)(gen_frame + 0x2b)) - (int)pcVar8;
          if (pcVar7 == pcVar3) {
            if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
            uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
            uVar4 = (int)pcVar3 - (int)pcVar8;
            if (uVar4 < uVar5) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar5) {
                uVar4 = uVar5;
              }
              F_00a31510(&(*(char * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar4);
              pcVar7 = (*(char * PTR32 *)(gen_frame + 0x10));
              pcVar8 = (*(char * PTR32 *)(gen_frame + 0xc));
            }
          }
          if (pcVar7 != (char *)0x0) {
            *pcVar7 = pcVar8[iVar6];
          }
        }
        else {
LAB_00a23f39: ;
          (*(char *)(gen_frame + 0x2b)) = '\0';
          if (pcVar7 == pcVar3) {
            if ((int)pcVar7 - (int)pcVar8 == -1) {
LAB_00a23fc1: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
            uVar4 = (int)pcVar3 - (int)pcVar8;
            if (uVar4 < uVar5) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar5) {
                uVar4 = uVar5;
              }
              F_00a31510(&(*(char * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar4);
              pcVar7 = (*(char * PTR32 *)(gen_frame + 0x10));
              pcVar8 = (*(char * PTR32 *)(gen_frame + 0xc));
            }
          }
          if (pcVar7 != (char *)0x0) {
            *pcVar7 = '\0';
          }
        }
LAB_00a23f7d: ;
        pcVar7 = pcVar7 + 1;
        (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar7;
        F_0042d540(param_3 GEN_EDX_ARG,pcVar8);
        param_1 = param_1 - 1;
      }
      param_1 = param_1 + 1;
      cVar2 = *param_1;
    } while (cVar2 != '\0');
    if (pcVar8 != (char *)0x0) {
      F_00429760(pcVar8,(int)(*(char * PTR32 *)(gen_frame + 0x14)) - (int)pcVar8,0x2c4);
    }
  }
  return 1;
}

/* ref: FUN_00a23ff0 */
GEN_FRAME uint GEN_THISCALL F_00a23ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa23ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte * pbVar4;
  byte * pbVar5;
  undefined * PTR32 * ppuVar6;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_3;
  bVar1 = *param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = param_2;
  pbVar5 = param_1;
  if (0xef < bVar1) {
    if (bVar1 == 0xff) {
      uVar2 = F_00a24d30(this GEN_EDX_FWD,param_1 + 1,param_2,&(*(int *)(gen_frame + 0x0)),1);
      pbVar4 = param_1 + 1 + uVar2;
      bVar1 = pbVar4[(*(int *)(gen_frame + 0x0))];
      (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar4 + (*(int *)(gen_frame + 0x0));
      pbVar4[(*(int *)(gen_frame + 0x0))] = 0;
      (*(byte *)(gen_frame + 0xf)) = bVar1;
      bVar1 = F_00a23c00(this GEN_EDX_ARG,pbVar4,(*(undefined * PTR32 *)(gen_frame + 0x4)),(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 == 0) {
        *(*(byte * PTR32 *)(gen_frame + 0x10)) = (*(byte *)(gen_frame + 0xf));
      }
      else {
        pbVar5 = pbVar4 + (*(int *)(gen_frame + 0x0));
        *(*(byte * PTR32 *)(gen_frame + 0x10)) = (*(byte *)(gen_frame + 0xf));
      }
    }
    goto LAB_00a2413b;
  }
  if ((0xec < bVar1) || (bVar1 < 0xe8)) goto LAB_00a2413b;
  if (bVar1 == 0xea) {
    uVar2 = F_00a24d30(this GEN_EDX_ARG,param_1 + 1,param_2,&(*(byte * PTR32 *)(gen_frame + 0x10)),1);
    pbVar5 = param_1 + 1 + uVar2;
    pbVar4 = (*(byte * PTR32 *)(gen_frame + 0x10)) - 1;
    (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar4;
    if (pbVar4 < *(byte * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x10)) {
      uVar2 = F_00481720((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,pbVar4);
      if (*(char *)(uVar2 + 8) == '\x01') {
        uVar2 = F_00481720((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,(*(byte * PTR32 *)(gen_frame + 0x10)));
        ppuVar6 = ((undefined * PTR32 *)GEN_TOP(**(undefined4 * PTR32 *)(uVar2 + 4)));
      }
      else {
LAB_00a240e3: ;
        ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
      }
    }
    else {
LAB_00a2412e: ;
      ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
    }
  }
  else {
    if (bVar1 != 0xeb) goto LAB_00a2413b;
    uVar2 = F_00a24d30(this GEN_EDX_ARG,param_1 + 1,(int)this + 0x14,&(*(byte * PTR32 *)(gen_frame + 0x10)),1);
    pbVar5 = param_1 + 1 + uVar2;
    pbVar4 = (*(byte * PTR32 *)(gen_frame + 0x10)) - 1;
    (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar4;
    if (*(byte * PTR32 *)((int)this + 0x24) <= pbVar4) goto LAB_00a2412e;
    uVar2 = F_00484010((undefined *)((int)this + 0x14) GEN_EDX_ARG,pbVar4);
    if (*(char *)(uVar2 + 8) != '\x01') goto LAB_00a240e3;
    uVar2 = F_00484010((undefined *)((int)this + 0x14) GEN_EDX_ARG,(*(byte * PTR32 *)(gen_frame + 0x10)));
    ppuVar6 = ((undefined * PTR32 *)GEN_TOP(**(undefined4 * PTR32 *)(uVar2 + 4)));
  }
  F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,ppuVar6);
LAB_00a2413b: ;
  if (((char)param_4 != '\0') && (param_1 == pbVar5)) {
    uVar2 = F_00a24d30(this GEN_EDX_ARG,pbVar5,(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined * PTR32 *)(gen_frame + 0x4)),0);
    if (uVar2 != 0) {
      uVar3 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x14)),(*(undefined * PTR32 *)(gen_frame + 0x4)),10,0,0);
      F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return uVar2;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (int)pbVar5 - (int)param_1;
}

/* ref: FUN_00a241b0 */
GEN_FRAME uint GEN_STDCALL F_00a241b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa241b0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  int iVar2;
  int iVar3;
  char * pcVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  char * pcVar8;
  undefined * puVar9;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  iVar2 = param_1[1];
  iVar3 = *param_1;
  F_0042b630(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  bVar6 = false;
  cVar1 = *param_2;
  pcVar4 = param_2;
  uVar5 = (*(undefined4 *)(gen_frame + 0xf));
  while (pcVar8 = pcVar4, cVar1 != '\0') {
    pcVar8 = pcVar4 + 1;
    (*(undefined4 *)(gen_frame + 0xf)) = CONCAT31((int3)((uint)uVar5 >> 8),cVar1);
    if (bVar6) {
      F_0042d160(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xf)));
      bVar6 = false;
    }
    else if (cVar1 == '\\') {
      bVar6 = true;
    }
    else {
      if (cVar1 == ']') break;
      if (cVar1 == '>') {
        if (*pcVar8 == '=') {
          pcVar8 = pcVar4 + 2;
          uVar7 = F_0042b790(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
          if (uVar7 == 0) {
LAB_00a243ab: ;
            F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
            F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
            return 0xfffffffa;
          }
          F_0048a040(param_1 GEN_EDX_ARG,&REFG(undefined, 0x14a2e70));
          F_0048a040(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
          F_0042aca0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
        }
        else {
          uVar7 = F_0042b790(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
          if (uVar7 == 0) goto LAB_00a243ab;
          F_0048a040(param_1 GEN_EDX_ARG,&REFG(undefined, 0x14a2ec8));
          F_0048a040(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
          F_0042aca0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
        }
      }
      else if (cVar1 == '<') {
        if (*pcVar8 == '=') {
          uVar7 = F_0042b790(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
          if (uVar7 == 0) goto LAB_00a243ab;
          puVar9 = &REFG(undefined, 0x14a2f20);
LAB_00a24342: ;
          pcVar8 = pcVar4 + 2;
          F_0048a040(param_1 GEN_EDX_ARG,puVar9);
          F_0048a040(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
          F_0042aca0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
        }
        else {
          uVar7 = F_0042b790(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
          if (uVar7 == 0) goto LAB_00a243ab;
          F_0048a040(param_1 GEN_EDX_ARG,&REFG(undefined, 0x14a2f78));
          F_0048a040(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
          F_0042aca0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
        }
      }
      else {
        if (cVar1 == '=') {
          if (*pcVar8 == '=') {
            pcVar8 = pcVar4 + 2;
            uVar7 = F_0042b790(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
            if (uVar7 == 0) goto LAB_00a243ab;
            F_0048a040(param_1 GEN_EDX_ARG,&REFG(undefined, 0x14a2fd0));
            F_0048a040(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
            F_0042aca0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
            goto LAB_00a2436a;
          }
        }
        else if ((cVar1 == '!') && (*pcVar8 == '=')) {
          uVar7 = F_0042b790(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
          if (uVar7 == 0) goto LAB_00a243ab;
          puVar9 = &REFG(undefined, 0x14a3028);
          goto LAB_00a24342;
        }
        F_0042d160(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xf)));
      }
    }
LAB_00a2436a: ;
    pcVar4 = pcVar8;
    uVar5 = (*(undefined4 *)(gen_frame + 0xf));
    cVar1 = *pcVar8;
  }
  F_0048a040(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
  uVar7 = F_0042b790(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  if (uVar7 == 0) {
    F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0xfffffffb;
  }
  if ((param_1[1] - *param_1) / 0x54 - (iVar2 - iVar3) / 0x54 == 3) {
    F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return (int)pcVar8 - (int)param_2;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 0xfffffffc;
}

/* ref: FUN_00a24430 */
GEN_FRAME uint GEN_THISCALL F_00a24430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa24430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  char * pcVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  F_0042b630(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_FWD);
  cVar1 = *param_2;
  pcVar6 = param_2;
  cVar5 = '\0';
  while (cVar1 != '\0') {
    pcVar6 = pcVar6 + 1;
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined4 *)(gen_frame + 0x8)) >> 8)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),cVar1);
    cVar5 = cVar1;
    if (((cVar1 == '>') || (cVar1 == '(')) || (cVar1 == '=')) {
      F_0048a040(param_1 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x14)));
      F_0042aca0(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      break;
    }
    F_0042d160(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x8)));
    cVar1 = *pcVar6;
  }
  bVar2 = false;
  if ((cVar5 == '(') || (cVar5 == '=')) {
    cVar1 = *pcVar6;
    pcVar7 = pcVar6;
    uVar3 = (*(undefined4 *)(gen_frame + 0x8));
    while (pcVar6 = pcVar7, cVar1 != '\0') {
      pcVar6 = pcVar7 + 1;
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)uVar3 >> 8)));
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),cVar1);
      if (bVar2) {
        F_0042d160(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x8)));
        bVar2 = false;
      }
      else if (cVar1 == '\\') {
        F_0042d160(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,0x5c);
        bVar2 = true;
      }
      else if (cVar1 == '[') {
        uVar4 = F_00a241b0(param_1,pcVar6);
        if ((int)uVar4 < -1) {
          if (uVar4 == 0xfffffffa) {
            pcVar7 = "ERROR: syntax error (no left param : \'%s\')";
          }
          else if (uVar4 == 0xfffffffb) {
            pcVar7 = "ERROR: syntax error (no right param : \'%s\')";
          }
          else {
            if (uVar4 != 0xfffffffc) goto LAB_00a24626;
            pcVar7 = "ERROR: syntax error (no condition : \'%s\')";
          }
          F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x100,pcVar7,pcVar6);
LAB_00a24626: ;
          F_0042e430((undefined *)((int)this + 0x18) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x68)));
          F_0042c880(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
          F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c) GEN_EDX_ARG);
          return uVar4;
        }
        pcVar6 = pcVar7 + uVar4 + 2;
      }
      else if (cVar1 == '<') {
        F_0042d160(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,0x3c);
        uVar4 = F_00a20450(((char * PTR32 *)(gen_frame + 0x14)),pcVar6);
        if ((int)uVar4 < -1) {
          F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x100,"ERROR: syntax error (not closed : \'%s\')",pcVar6);
          goto LAB_00a24626;
        }
        pcVar6 = pcVar6 + uVar4;
      }
      else if ((cVar1 == ',') || (cVar1 == ')')) {
        F_0048a040(param_1 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x14)));
        F_0042aca0(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      }
      else {
        if (cVar1 == '>') {
          if (*((char * PTR32 *)(gen_frame + 0x14))[0] != '\0') {
            F_0048a040(param_1 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x14)));
            F_0042aca0(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
          }
          break;
        }
        F_0042d160(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x8)));
      }
      pcVar7 = pcVar6;
      uVar3 = (*(undefined4 *)(gen_frame + 0x8));
      cVar1 = *pcVar6;
    }
  }
  F_0042c880(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c) GEN_EDX_ARG);
  return (int)pcVar6 - (int)param_2;
}

/* ref: FUN_00a246c0 */
GEN_FRAME uint GEN_THISCALL F_00a246c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa246c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined * pvVar6;
  undefined * pvVar7;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = param_1;
  ((undefined * PTR32 *)(gen_frame + 0x110))[0] = this;
  (*(uint *)(gen_frame + 0x38)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x24)) = 0;
  uVar2 = F_00a24430(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x1c)),param_2);
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  *param_3 = uVar2;
  if ((int)uVar2 < -1) {
    (*(uint *)(gen_frame + 0x38)) = uVar2;
  }
  else {
    iVar5 = (int)(*(undefined * PTR32 *)(gen_frame + 0x20)) - (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x1c))) >> 0x1f;
    iVar4 = ((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x1c))) / 0x54 + iVar5;
    uVar2 = iVar4 - iVar5;
    if (iVar4 != iVar5) {
      F_00a2fde0((undefined *)((int)this + 4) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2c)),(*(undefined * PTR32 *)(gen_frame + 0x1c)));
      pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x34));
      if ((*(int *)(gen_frame + 0x2c)) == *(int *)((int)this + 8)) {
        uVar2 = F_0042a990(pvVar6 GEN_EDX_ARG);
        F_00c472af(((undefined1 *)(gen_frame + 0x90)),0x80,"<WARNING: unknown macro code (\'%s\')>",uVar2);
        F_0042cc20(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x90)),REFG(undefined4, 0x108cc50));
        F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x3c)));
        F_0042c880(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
        F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
        return 0xffffffff;
      }
      F_0042d160((*(undefined * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,2);
      iVar5 = (*(int *)(gen_frame + 0x2c));
      F_0042d160(pvVar7 GEN_EDX_ARG,(uint)*(byte *)((*(int *)(gen_frame + 0x2c)) + 0x60));
      F_0042b630(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
      if (1 < uVar2) {
        (*(int *)(gen_frame + 0x30)) = (int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x54;
        iVar4 = 0;
        do {
          F_0042b630(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
          if (iVar4 < *(int *)(iVar5 + 0xa4)) {
            ((byte *)(gen_frame + 0xc))[0xc] = *(byte *)(iVar4 + 0x61 + iVar5);
          }
          else {
            ((byte *)(gen_frame + 0xc))[0xc] = 0x2e;
          }
          uVar3 = F_00a22b40(((undefined * PTR32 *)(gen_frame + 0x110))[0] GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x30)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)));
          if ((int)uVar3 < -1) {
            F_0042c880(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
            F_0042c880(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
            F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
            F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
            return uVar3;
          }
          F_0042d4d0(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x3c)));
          if ((int)(*(uint *)(gen_frame + 0x38)) < (int)uVar3) {
            (*(uint *)(gen_frame + 0x38)) = uVar3;
          }
          F_0042c880(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
          (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 0x54;
          uVar3 = iVar4 + 2;
          iVar5 = (*(int *)(gen_frame + 0x2c));
          pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x34));
          iVar4 = iVar4 + 1;
        } while (uVar3 < uVar2);
      }
      uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
      uVar2 = F_00a20720(((undefined * PTR32 *)(gen_frame + 0x110)),uVar2);
      iVar5 = 0;
      if (0 < (int)uVar2) {
        do {
          F_0042d160(pvVar7 GEN_EDX_ARG,(uint)*(byte *)((int)((undefined * PTR32 *)(gen_frame + 0x110)) + iVar5));
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar2);
      }
      F_0042d4d0(pvVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xbc)));
      F_0042d160(pvVar7 GEN_EDX_ARG,3);
      F_0042c880(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
    }
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x20));
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  if ((*(undefined * PTR32 *)(gen_frame + 0x1c)) != (undefined *)0x0) {
    for (; pvVar6 != pvVar1; pvVar6 = (undefined *)((int)pvVar6 + 0x54)) {
      F_0042c880(pvVar6 GEN_EDX_ARG);
    }
    F_00429760(pvVar7,(((*(int *)(gen_frame + 0x24)) - (int)pvVar7) / 0x54) * 0x54,0x35);
  }
  uVar2 = (*(uint *)(gen_frame + 0x38));
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a249b0 */
GEN_FRAME uint GEN_THISCALL F_00a249b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa249b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00a246c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]) + 1,&(*(int *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00a249d0 */
GEN_FRAME uint GEN_THISCALL F_00a249d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa249d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  int iVar2;
  undefined1 * puVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  *(undefined4 *)((int)this + 0x30) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
  puVar3 = ((undefined1 *)(gen_frame + 0x4));
  iVar2 = (int)this + 0x34;
  uVar1 = F_0042a990(param_1 GEN_EDX_ARG);
  F_00a23c00(this GEN_EDX_ARG,uVar1,iVar2,puVar3);
  uVar1 = *(uint *)((int)this + 0x30);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Component::Text::TextModule::vf8 */
GEN_FRAME uint GEN_THISCALL F_00a24a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa24a30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * in_ecx;
  
  in_ecx = (*(undefined * PTR32 *)&gen_args[0]) + 0x114;
  F_0042aca0(in_ecx GEN_EDX_FWD);
  F_00a246c0((*(undefined * PTR32 *)&gen_args[0]) + 0x54 GEN_EDX_ARG,in_ecx,(*(int *)&gen_args[2]) + 1,&(*(int *)&gen_args[2]));
  F_0042cbc0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,in_ecx);
  return (uint)(*(undefined * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a24a70 */
GEN_FRAME uint GEN_THISCALL F_00a24a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa24a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
  uVar1 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x4)),1);
  if (uVar1 != 0) {
    F_0042d4d0(param_4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a24ae0 */
GEN_FRAME uint GEN_THISCALL F_00a24ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa24ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
  uVar1 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x4)),1);
  if (uVar1 != 0) {
    uVar2 = F_0042a9a0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0,0,0,0);
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar2);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a24b60 */
GEN_FRAME uint GEN_THISCALL F_00a24b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa24b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
  uVar1 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x4)),1);
  if (uVar1 != 0) {
    uVar2 = F_0042a9a0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,1,0,0,0);
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar2);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a24be0 */
GEN_FRAME uint GEN_THISCALL F_00a24be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa24be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
  uVar1 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x4)),1);
  if (uVar1 != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0xc))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG)));
    uVar3 = F_0042a9a0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,1,1,0,*(undefined4 *)(&REFG(undefined, 0x1333e28) + *piVar2 * 4));
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar3);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a24c70 */
GEN_FRAME uint GEN_THISCALL F_00a24c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa24c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
  uVar1 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x4)),1);
  if (uVar1 != 0) {
    uVar2 = F_0042b820(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar2);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a24ce0 */
GEN_FRAME uint GEN_THISCALL F_00a24ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa24ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f48));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = F_004296a0(0x68,0,0x2c4);
  *(uint *)((int)this + 0x10) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(int *)((int)this + 0x10);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x65))) = 1;
  return (uint)this;
}

/* ref: FUN_00a24d30 */
GEN_FRAME uint GEN_THISCALL F_00a24d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa24d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined * pvVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte * pbVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  bVar2 = *param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_2;
  pbVar6 = param_1;
  if (0xef < bVar2) {
    if (bVar2 != 0xff) {
      uVar3 = F_00a20540(param_1,param_3);
      pbVar6 = param_1 + uVar3;
    }
    goto switchD_00a25093_default;
  }
  if (0xec < bVar2) goto switchD_00a25093_default;
  if (0xe7 < bVar2) {
    if (bVar2 == 0xe8) {
      uVar3 = F_00a24d30(this GEN_EDX_ARG,param_1 + 1,param_2,param_3,1);
      *param_3 = *param_3 - 1;
      pbVar6 = param_1 + 1 + uVar3;
      if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x10) <= *param_3) {
LAB_00a24e4a: ;
        *param_3 = 0;
        goto switchD_00a25093_default;
      }
      uVar3 = F_00481720((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,*param_3);
      if (*(char *)(uVar3 + 8) == '\0') {
        uVar3 = F_00481720((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,*param_3);
        *param_3 = **(uint * PTR32 *)(uVar3 + 4);
        goto switchD_00a25093_default;
      }
    }
    else {
      if (bVar2 != 0xe9) {
        if (bVar2 != 0xec) goto switchD_00a25093_default;
        *param_3 = 0;
        goto LAB_00a25115;
      }
      uVar3 = F_00a24d30(this GEN_EDX_ARG,param_1 + 1,(undefined *)((int)this + 0x14),param_3,1);
      *param_3 = *param_3 - 1;
      pbVar6 = param_1 + 1 + uVar3;
      if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x24) <= *param_3) goto LAB_00a24e4a;
      uVar3 = F_00484010((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x14) GEN_EDX_ARG,*param_3);
      if (*(char *)(uVar3 + 8) == '\0') {
        uVar3 = F_00484010((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x14) GEN_EDX_ARG,*param_3);
        *param_3 = **(uint * PTR32 *)(uVar3 + 4);
        goto switchD_00a25093_default;
      }
    }
    *param_3 = 0;
    goto switchD_00a25093_default;
  }
  if (bVar2 < 0xe0) {
    if (0xd7 < bVar2) {
      switch((unsigned int)(uintptr_t)(bVar2)) {
      case 0xd8: ;
        uVar7 = F_0046ff40();
        *param_3 = (uint)(uVar7 % 1000);
        pbVar6 = param_1 + 1;
        break;
      case 0xd9: ;
        *param_3 = REFG(undefined4, 0x14a2ad4);
        pbVar6 = param_1 + 1;
        break;
      case 0xda: ;
        *param_3 = REFG(undefined4, 0x14a2ad8);
        pbVar6 = param_1 + 1;
        break;
      case 0xdb: ;
        *param_3 = REFG(undefined4, 0x14a2adc);
        pbVar6 = param_1 + 1;
        break;
      case 0xdc: ;
        *param_3 = REFG(undefined4, 0x14a2ae0);
        pbVar6 = param_1 + 1;
        break;
      case 0xdd: ;
        *param_3 = REFG(int, 0x14a2aec) + 1;
        pbVar6 = param_1 + 1;
        break;
      case 0xde: ;
        *param_3 = REFG(int, 0x14a2ae4) + 1;
        pbVar6 = param_1 + 1;
        break;
      case 0xdf: ;
        *param_3 = REFG(int, 0x14a2ae8) + 0x76c;
        pbVar6 = param_1 + 1;
      }
      goto switchD_00a25093_default;
    }
    if (bVar2 == 0) goto switchD_00a25093_default;
    *param_3 = bVar2 - 1;
LAB_00a25115: ;
    pbVar6 = param_1 + 1;
    goto switchD_00a25093_default;
  }
  pbVar6 = param_1 + 1;
  F_0042b630(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG);
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  uVar3 = F_00a202f0(pbVar6);
  if (uVar3 == 0) {
    uVar5 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0xc)),1);
  }
  else {
    uVar5 = F_00a23ff0(pvVar1 GEN_EDX_ARG,pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x70)),1);
    F_00a21bc0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x70)));
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  pbVar6 = pbVar6 + uVar5;
  uVar5 = F_00a202f0(pbVar6);
  if (uVar5 == 0) {
    uVar4 = F_00a24d30(pvVar1 GEN_EDX_ARG,pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x10)),1);
  }
  else {
    uVar4 = F_00a23ff0(pvVar1 GEN_EDX_ARG,pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0xc4)),1);
    F_00a21bc0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc4)));
  }
  pbVar6 = pbVar6 + uVar4;
  if (uVar3 != uVar5) {
    if (uVar3 == 1) {
      uVar3 = F_00a4cf70(((undefined1 *)(gen_frame + 0x70)),0);
      (*(uint *)(gen_frame + 0xc)) = uVar3;
      uVar3 = 0;
    }
    else {
      uVar5 = F_00a4cf70(((undefined1 *)(gen_frame + 0xc4)),0);
      (*(uint *)(gen_frame + 0x10)) = uVar5;
    }
  }
  switch((unsigned int)(uintptr_t)(bVar2)) {
  case 0xe0: ;
    if (uVar3 == 0) {
      uVar3 = (uint)((int)(*(uint *)(gen_frame + 0x10)) <= (int)(*(uint *)(gen_frame + 0xc)));
    }
    else {
      bVar2 = F_0042c760(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc4)));
LAB_00a25055: ;
      uVar3 = (uint)(bVar2 != 0);
    }
    break;
  case 0xe1: ;
    if (uVar3 != 0) {
      bVar2 = F_0042c820(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc4)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((int)(*(uint *)(gen_frame + 0x10)) < (int)(*(uint *)(gen_frame + 0xc)));
    break;
  case 0xe2: ;
    if (uVar3 != 0) {
      bVar2 = F_0042c700(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc4)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((int)(*(uint *)(gen_frame + 0xc)) <= (int)(*(uint *)(gen_frame + 0x10)));
    break;
  case 0xe3: ;
    if (uVar3 != 0) {
      bVar2 = F_0042c7c0(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc4)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((int)(*(uint *)(gen_frame + 0xc)) < (int)(*(uint *)(gen_frame + 0x10)));
    break;
  case 0xe4: ;
    if (uVar3 != 0) {
      bVar2 = F_0042b660(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc4)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((*(uint *)(gen_frame + 0xc)) == (*(uint *)(gen_frame + 0x10)));
    break;
  case 0xe5: ;
    if (uVar3 != 0) {
      bVar2 = F_0042b6f0(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc4)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((*(uint *)(gen_frame + 0xc)) != (*(uint *)(gen_frame + 0x10)));
    break;
  default: ;
    goto switchD_00a24f87_default;
  }
  *param_3 = uVar3;
switchD_00a24f87_default: ;
  F_0042c880(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
switchD_00a25093_default: ;
  if (((char)param_4 != '\0') && (param_1 == pbVar6)) {
    F_0042b630(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
    uVar3 = F_00a23ff0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x1c)),0);
    if (uVar3 != 0) {
      uVar5 = F_00a4cf70(((undefined1 *)(gen_frame + 0x1c)),0);
      *param_3 = uVar5;
      F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
      return uVar3;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
  return (int)pbVar6 - (int)param_1;
}

/* ref: FUN_00a251f0 */
GEN_FRAME uint GEN_THISCALL F_00a251f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa251f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[2]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00a25230 */
GEN_FRAME uint GEN_THISCALL F_00a25230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa25230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  char cVar3;
  int iVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e3fc4));
  this_00 = (undefined *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0xac,0,0x2c4);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0xa8))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0xa9))) = 1;
  F_004142d0((int)this + 0x14 GEN_EDX_ARG,0xffffffff);
  F_0042b630((int)this + 0x18 GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 7;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3919))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"settime",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 8;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = '.';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3925))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e3928),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 9;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = '.';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e392d))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e3930),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 9;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = '.';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3935))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"switch",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x10;
  (*(int *)(gen_frame + 0xf4)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e3940),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x11;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3945))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e3948),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x17;
  (*(int *)(gen_frame + 0xf4)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3950)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x16;
  (*(int *)(gen_frame + 0xf4)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e3954),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x12;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3959))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e395c),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x1e;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3965))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"icon2",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x13;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3971))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"color",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x14;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e397d))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"edgecolor",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x15;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e398d))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"shadowcolor",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x1d;
  (*(int *)(gen_frame + 0xf4)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e399c),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x1f;
  (*(int *)(gen_frame + 0xf4)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e39a4),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x18;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39a9))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"scale",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x19;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39b5))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e39b8),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x1a;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39c1))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"italic",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x1b;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39cd))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e39d0),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x1c;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39d9))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"shadow",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x20;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39e5))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e39e8)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x21;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39ed))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e39f0)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x22;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39f5))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e39f8),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x23;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3a01))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e3a04),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x24;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3a0d))[(int)((*(int *)(gen_frame + 0xf4)))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3a10)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x25,&REFG(undefined, 0x10e3a14));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e3a18),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x26,&REFG(undefined, 0x10e3a20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"float",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x27,"nnnns");
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e3a34),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x28,&REFG(undefined, 0x10e3a3c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"sheet",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x29,&REFG(undefined, 0x10e3a4c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"string",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x2a,&REFG(undefined, 0x10e3a58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e3a5c),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x2b,&REFG(undefined, 0x10e3a64));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e3a68),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x2d,&REFG(undefined, 0x10e3a70));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"headall",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x2c,(*(undefined * PTR32 (*)[1])REFP(0x10e3a7c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"split",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x2e,&REFG(undefined, 0x10e3a88));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"fixed",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x2f,&REFG(undefined, 0x10e3a94));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"lower",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x30,&REFG(undefined, 0x10e3aa0));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"janoun",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x31,&REFG(undefined, 0x10e3aac));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"ennoun",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x32,&REFG(undefined, 0x10e3ab8));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"denoun",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x33,&REFG(undefined, 0x10e3ac4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"frnoun",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x34,&REFG(undefined, 0x10e3ad0));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"chnoun",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a26b00 */
GEN_FRAME uint GEN_THISCALL F_00a26b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa26b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  undefined4 uVar2;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  ((undefined1 *)(gen_frame + 0x10))[0] = 0;
  F_00a2edd0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD,param_1,0,0xffffffff);
  (*(undefined4 *)(gen_frame + 0x40)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  ((undefined1 *)(gen_frame + 0x2c))[0] = 0;
  F_00a2edd0(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG,param_2,0,0xffffffff);
  uVar2 = 0;
  uVar1 = F_00a32750((undefined *)((int)this + 0x14) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
  F_00a32170((undefined *)((int)this + 0x14) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),uVar1,uVar2);
  uVar1 = F_00a2e950(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a26b90 */
GEN_FRAME uint GEN_THISCALL F_00a26b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa26b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  char cVar1;
  undefined1 * puVar2;
  char * pcVar3;
  char * pcVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  
  pcVar3 = (char *)F_0042a990((*(uint *)&gen_args[1]) GEN_EDX_FWD);
  pcVar4 = pcVar3;
  pcVar6 = pcVar3;
  pcVar7 = pcVar3;
  if (-1 < (*(int *)&gen_args[3])) {
    do {
      pcVar6 = pcVar7;
      cVar1 = *pcVar6;
      if (cVar1 == '\0') break;
      if (cVar1 == '\x02') {
        uVar5 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,pcVar6 + 2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(uint *)&gen_args[1]),1);
        pcVar7 = pcVar6 + 2 + (*(uint *)&gen_args[1]) + uVar5 + 1;
      }
      else {
        uVar5 = F_0042acc0(CONCAT31((int3)((uint)((int)(uintptr_t)pcVar4) >> 8),cVar1));
        pcVar7 = pcVar6 + uVar5;
      }
      pcVar4 = pcVar7 - (int)pcVar3;
    } while ((int)(pcVar7 - (int)pcVar3) <= (*(int *)&gen_args[3]));
  }
  puVar2 = (*(undefined1 * PTR32 *)&gen_args[2]);
  uVar5 = (int)pcVar6 - (int)pcVar3;
  if (uVar5 == 0) {
    *(*(undefined1 * PTR32 *)&gen_args[2]) = 0;
    return 0;
  }
  (*(uint *)&gen_args[1]) = uVar5;
  F_00c46aa0((*(undefined1 * PTR32 *)&gen_args[2]),pcVar3,uVar5);
  puVar2[uVar5] = 0;
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00a26c30 */
GEN_FRAME uint GEN_THISCALL F_00a26c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa26c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  char * pcVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  pcVar2 = (char *)F_0042a990(param_1 GEN_EDX_FWD);
  pcVar4 = pcVar2;
  pcVar6 = pcVar2;
  pcVar5 = pcVar2;
  if (-1 < param_2) {
    do {
      pcVar6 = pcVar5;
      cVar1 = *pcVar6;
      if (cVar1 == '\0') break;
      if (cVar1 == '\x02') {
        uVar3 = F_00a24d30(this GEN_EDX_ARG,pcVar6 + 2,(int)this + 0x34,&(*(char * PTR32 *)(gen_frame + 0x0)),1);
        pcVar5 = pcVar6 + 2 + uVar3 + 1 + (int)(*(char * PTR32 *)(gen_frame + 0x0));
        pcVar4 = (*(char * PTR32 *)(gen_frame + 0x0));
      }
      else {
        pcVar4 = (char *)F_0042acc0(CONCAT31((int3)((uint)((int)(uintptr_t)pcVar4) >> 8),cVar1));
        pcVar5 = pcVar6 + (int)pcVar4;
      }
    } while ((int)pcVar5 - (int)pcVar2 <= param_2);
  }
  (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar6 - (int)pcVar2;
  uVar3 = F_0042d2c0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0,pcVar6 - (int)pcVar2);
  F_0042ccf0(param_1 GEN_EDX_ARG,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x0));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)pcVar5;
}

/* ref: FUN_00a26ce0 */
GEN_FRAME uint GEN_THISCALL F_00a26ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa26ce0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char cVar1;
  char * pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar2 = (char *)F_0042a990((*(int *)&gen_args[1]) GEN_EDX_FWD);
  cVar1 = *pcVar2;
  uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pcVar2) >> 8),cVar1);
  uVar5 = 0;
  while (cVar1 != '\0') {
    if ((char)uVar3 == '\x02') {
      if (pcVar2[1] != '\x10') {
        uVar5 = uVar5 + 1;
      }
      uVar4 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,pcVar2 + 2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(int *)&gen_args[1]),1);
      pcVar2 = pcVar2 + 2 + (*(int *)&gen_args[1]) + uVar4 + 1;
    }
    else {
      uVar5 = uVar5 + 1;
      uVar4 = F_0042acc0(uVar3);
      pcVar2 = pcVar2 + uVar4;
    }
    cVar1 = *pcVar2;
    uVar3 = CONCAT31((int3)(uVar4 >> 8),cVar1);
  }
  return uVar5;
}

/* ref: FUN_00a26d50 */
GEN_FRAME uint GEN_THISCALL F_00a26d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa26d50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  char * pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char * pcVar5;
  
  pcVar2 = (char *)F_0042a990((*(int *)&gen_args[1]) GEN_EDX_FWD);
  cVar1 = *pcVar2;
  uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pcVar2) >> 8),cVar1);
  pcVar5 = pcVar2;
  while (cVar1 != '\0') {
    if ((char)uVar3 == '\x02') {
      uVar4 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,pcVar5 + 2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(int *)&gen_args[1]),1);
      pcVar5 = pcVar5 + 2 + (*(int *)&gen_args[1]) + uVar4 + 1;
    }
    else {
      uVar4 = F_0042acc0(uVar3);
      pcVar5 = pcVar5 + uVar4;
    }
    cVar1 = *pcVar5;
    uVar3 = CONCAT31((int3)(uVar4 >> 8),cVar1);
  }
  return (int)pcVar5 - (int)pcVar2;
}

/* ref: FUN_00a26db0 */
GEN_FRAME uint GEN_THISCALL F_00a26db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa26db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  char * pcVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = param_1;
  if (param_3 == 0) {
    uVar3 = F_0042e430(param_1 GEN_EDX_FWD,&REFG(undefined, 0x10e38dd));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return uVar3;
  }
  pcVar4 = (char *)F_0042a990(param_1 GEN_EDX_ARG);
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar4;
  iVar6 = 0;
  uVar5 = 0;
  (*(bool *)(gen_frame + 0x13)) = param_3 == REFG(undefined4, 0x108cc50);
  uVar3 = param_3;
  while ((this_00 = (*(undefined * PTR32 *)(gen_frame + 0xc)), (*(bool *)(gen_frame + 0x13)) != false || (uVar5 < param_2 + param_3))) {
    cVar1 = *pcVar4;
    if (cVar1 == '\0') break;
    if (cVar1 == '\x02') {
      uVar3 = F_00a24d30(this GEN_EDX_ARG,pcVar4 + 2,(int)this + 0x34,&(*(int *)(gen_frame + 0x4)),1);
      uVar2 = (*(int *)(gen_frame + 0x4)) + uVar3 + 3;
    }
    else {
      uVar3 = F_0042acc0(CONCAT31((int3)(uVar3 >> 8),cVar1));
      uVar2 = uVar3;
    }
    pcVar4 = pcVar4 + uVar2;
    uVar5 = uVar5 + 1;
    if (uVar5 == param_2) {
      iVar6 = (int)pcVar4 - (int)(*(char * PTR32 *)(gen_frame + 0x8));
    }
  }
  if (uVar5 < param_2) {
    uVar3 = F_0042e430((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x10e38de));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return uVar3;
  }
  uVar3 = F_0042d2c0((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),iVar6,pcVar4 + (-(int)(*(char * PTR32 *)(gen_frame + 0x8)) - iVar6));
  F_0042ccf0(this_00 GEN_EDX_ARG,uVar3);
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (uint)uVar7;
}

/* ref: FUN_00a26de9 */
GEN_NOFRAME uint F_00a26de9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa26de9u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint in_ebp = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  char cVar1;
  undefined * this;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  pcVar3 = (char *)F_0042a990(in_ecx GEN_EDX_ARG);
  *(char * PTR32 *)(in_ebp - 100) = pcVar3;
  uVar4 = *(uint *)(in_ebp + 0x10);
  iVar6 = 0;
  uVar5 = 0;
  *(bool *)(in_ebp - 0x59) = uVar4 == REFG(undefined4, 0x108cc50);
  while ((*(char *)(in_ebp - 0x59) != '\0' ||
         (uVar5 < (uint)(*(int *)(in_ebp + 0xc) + *(int *)(in_ebp + 0x10))))) {
    cVar1 = *pcVar3;
    if (cVar1 == '\0') break;
    if (cVar1 == '\x02') {
      uVar4 = F_00a24d30(*(undefined * PTR32 *)(in_ebp - 0x6c) GEN_EDX_ARG,pcVar3 + 2,
                           (int)*(undefined * PTR32 *)(in_ebp - 0x6c) + 0x34,in_ebp - 0x68,1);
      uVar2 = *(int *)(in_ebp - 0x68) + uVar4 + 3;
    }
    else {
      uVar4 = F_0042acc0(CONCAT31((int3)(uVar4 >> 8),cVar1));
      uVar2 = uVar4;
    }
    pcVar3 = pcVar3 + uVar2;
    uVar5 = uVar5 + 1;
    if (uVar5 == *(uint *)(in_ebp + 0xc)) {
      iVar6 = (int)pcVar3 - *(int *)(in_ebp - 100);
    }
  }
  if (uVar5 < *(uint *)(in_ebp + 0xc)) {
    uVar4 = F_0042e430(*(undefined * PTR32 *)(in_ebp - 0x60) GEN_EDX_ARG,&REFG(undefined, 0x10e38de));
    F_00c47745(*(uint *)(in_ebp - 4) ^ in_ebp GEN_EDX_ARG);
    return uVar4;
  }
  this = *(undefined * PTR32 *)(in_ebp - 0x60);
  uVar4 = F_0042d2c0(this GEN_EDX_ARG,in_ebp - 0x58,iVar6,pcVar3 + (-*(int *)(in_ebp - 100) - iVar6));
  F_0042ccf0(this GEN_EDX_ARG,uVar4);
  uVar7 = F_0042c880((undefined *)(in_ebp - 0x58) GEN_EDX_ARG);
  F_00c47745(*(uint *)(in_ebp - 4) ^ in_ebp GEN_EDX_ARG);
  return (uint)uVar7;
}

/* ref: FUN_00a26ec0 */
GEN_FRAME uint GEN_THISCALL F_00a26ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa26ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  
  pbVar2 = (byte *)F_0042a990((*(byte * PTR32 *)&gen_args[1]) GEN_EDX_FWD);
  bVar1 = *pbVar2;
  pbVar4 = pbVar2;
  while (bVar1 != 0) {
    if (*pbVar4 == 2) {
      pbVar2 = (byte *)F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,pbVar4 + 2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(byte * PTR32 *)&gen_args[1]),1);
      pbVar4 = pbVar4 + 3 + (int)((*(byte * PTR32 *)&gen_args[1]) + (int)pbVar2);
    }
    else {
      pbVar2 = (byte *)F_0042acc0(CONCAT31((int3)((uint)((int)(uintptr_t)pbVar2) >> 8),*pbVar4));
      iVar3 = 0;
      (*(byte * PTR32 *)&gen_args[1]) = pbVar2;
      if (0 < (int)pbVar2) {
        do {
          if ((uint)*pbVar4 == (int)(char)(*(undefined4 *)&gen_args[2])) {
            *pbVar4 = (byte)(*(undefined4 *)&gen_args[3]);
          }
          iVar3 = iVar3 + 1;
          pbVar4 = pbVar4 + 1;
        } while (iVar3 < (int)pbVar2);
      }
    }
    bVar1 = *pbVar4;
  }
  return (uint)pbVar2;
}

/* ref: FUN_00a26f40 */
GEN_FRAME uint GEN_THISCALL F_00a26f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa26f40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  undefined * extraout_ECX = 0;
  undefined * extraout_ECX_00 = 0;
  undefined * pvVar4;
  char * pcVar5;
  
  pcVar2 = (*(char * PTR32 *)&gen_args[1]);
  cVar1 = *(*(char * PTR32 *)&gen_args[1]);
  pvVar4 = (*(undefined * PTR32 *)&gen_args[0]);
  pcVar5 = (*(char * PTR32 *)&gen_args[1]);
  while (cVar1 != '\0') {
    cVar1 = *pcVar5;
    if ((cVar1 == '\r') || (cVar1 == '\n')) break;
    if (cVar1 == '\x02') {
      if (pcVar5[1] == '\x10') break;
      uVar3 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,pcVar5 + 2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(char * PTR32 *)&gen_args[1]),1);
      pcVar5 = pcVar5 + 2 + uVar3 + 1 + (int)(*(char * PTR32 *)&gen_args[1]);
      pvVar4 = extraout_ECX;
    }
    else {
      uVar3 = F_0042acc0(CONCAT31((int3)((uint)((int)(uintptr_t)pvVar4) >> 8),cVar1));
      pcVar5 = pcVar5 + uVar3;
      pvVar4 = extraout_ECX_00;
    }
    cVar1 = *pcVar5;
  }
  return (int)pcVar5 - (int)pcVar2;
}

/* ref: FUN_00a26fb0 */
GEN_FRAME uint GEN_THISCALL F_00a26fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa26fb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  
  uVar4 = 1;
  uVar2 = F_0042a990((*(int *)&gen_args[1]) GEN_EDX_FWD);
  uVar3 = F_00a26f40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar2);
  for (pcVar5 = (char *)(uVar2 + uVar3); (pcVar5 != (char *)0x0 && (cVar1 = *pcVar5, cVar1 != '\0'))
      ; pcVar5 = pcVar5 + uVar2) {
    if (cVar1 == '\x02') {
      uVar2 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,pcVar5 + 2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(int *)&gen_args[1]),1);
      pcVar5 = pcVar5 + 2 + (*(int *)&gen_args[1]) + uVar2 + 1;
    }
    else if ((cVar1 == '\r') || (cVar1 == '\n')) {
      if (pcVar5[1] == '\n') {
        pcVar5 = pcVar5 + 1;
      }
      pcVar5 = pcVar5 + 1;
    }
    uVar4 = uVar4 + 1;
    uVar2 = F_00a26f40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,pcVar5);
  }
  return uVar4;
}

/* ref: FUN_00a27030 */
GEN_FRAME uint GEN_THISCALL F_00a27030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa27030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042a990(param_2 GEN_EDX_FWD);
  uVar1 = F_00a26f40(this GEN_EDX_ARG,uVar1);
  F_0042d2c0(param_2 GEN_EDX_ARG,param_1,0,uVar1);
  return param_1;
}

/* ref: FUN_00a27060 */
GEN_FRAME uint GEN_THISCALL F_00a27060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa27060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  pcVar2 = (char *)F_0042a990(param_2 GEN_EDX_FWD);
  this_00 = (undefined *)((int)this + 0x4c);
  F_0042aca0(this_00 GEN_EDX_ARG);
  cVar1 = *pcVar2;
  pcVar4 = pcVar2;
  do {
    if (cVar1 == '\0') {
      F_0042cbc0(param_1 GEN_EDX_ARG,this_00);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return (uint)param_1;
    }
    uVar3 = F_00a26f40(this GEN_EDX_ARG,pcVar4);
    (*(uint *)(gen_frame + 0x0)) = uVar3;
    uVar3 = F_0042d2c0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),(int)pcVar4 - (int)pcVar2,uVar3);
    F_0042ccf0(this_00 GEN_EDX_ARG,uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    pcVar4 = pcVar4 + (*(uint *)(gen_frame + 0x0));
    cVar1 = *pcVar4;
    if (cVar1 == '\x02') {
      uVar3 = F_00a24d30(this GEN_EDX_ARG,pcVar4 + 2,(int)this + 0x34,&(*(uint *)(gen_frame + 0x0)),1);
      pcVar4 = pcVar4 + 2 + (*(uint *)(gen_frame + 0x0)) + uVar3 + 1;
LAB_00a27107: ;
      F_0042aca0(this_00 GEN_EDX_ARG);
    }
    else if ((cVar1 == '\r') || (cVar1 == '\n')) {
      if (pcVar4[1] == '\n') {
        pcVar4 = pcVar4 + 1;
      }
      pcVar4 = pcVar4 + 1;
      goto LAB_00a27107;
    }
    cVar1 = *pcVar4;
  } while( true );
}

/* ref: FUN_00a27140 */
GEN_FRAME unsigned int GEN_THISCALL F_00a27140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa27140u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  undefined * this_00;
  byte * pbVar2;
  byte * pbVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  pbVar2 = (byte *)F_0042a990((*(uint *)&gen_args[1]) GEN_EDX_FWD);
  this_00 = (*(undefined * PTR32 *)&gen_args[2]);
  pbVar3 = pbVar2;
  if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
    pbVar3 = (byte *)F_0042aca0((*(undefined * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  bVar1 = *pbVar2;
  uVar4 = CONCAT31((int3)((uint)((int)(uintptr_t)pbVar3) >> 8),bVar1);
  while (bVar1 != 0) {
    if ((char)uVar4 == '\x02') {
      F_0042d160(this_00 GEN_EDX_ARG,2);
      F_0042d160(this_00 GEN_EDX_ARG,(uint)pbVar2[1]);
      pbVar2 = pbVar2 + 2;
      uVar5 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,pbVar2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(uint *)&gen_args[1]),1);
      iVar6 = uVar5 + (*(uint *)&gen_args[1]);
      if (0 < iVar6) {
        do {
          F_0042d160(this_00 GEN_EDX_ARG,(uint)*pbVar2);
          pbVar2 = pbVar2 + 1;
          iVar6 = iVar6 - 1;
        } while (iVar6 != 0);
      }
      uVar5 = F_0042d160(this_00 GEN_EDX_ARG,(uint)*pbVar2);
      pbVar2 = pbVar2 + 1;
    }
    else {
      uVar5 = F_0042acc0(uVar4);
      iVar6 = 0;
      (*(uint *)&gen_args[1]) = uVar5;
      if (0 < (int)uVar5) {
        do {
          uVar5 = F_0042d160(this_00 GEN_EDX_ARG,(uint)*pbVar2);
          iVar6 = iVar6 + 1;
          pbVar2 = pbVar2 + 1;
        } while (iVar6 < (int)(*(uint *)&gen_args[1]));
      }
    }
    bVar1 = *pbVar2;
    uVar4 = CONCAT31((int3)(uVar5 >> 8),bVar1);
  }
  return 0;
}

/* ref: FUN_00a27210 */
GEN_FRAME uint GEN_THISCALL F_00a27210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa27210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pbVar2 = (byte *)F_0042a990(param_1 GEN_EDX_FWD);
  uVar3 = F_0042aca0(param_2 GEN_EDX_ARG);
  bVar1 = *pbVar2;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
  while (bVar1 != 0) {
    if ((char)uVar3 == '\x02') {
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x10,"[%02X",(uint)pbVar2[1]);
      F_0042d540(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
      uVar3 = F_00a24d30(this GEN_EDX_ARG,pbVar2 + 2,(int)this + 0x34,&(*(uint *)(gen_frame + 0x4)),1);
      iVar4 = 0;
      pbVar2 = pbVar2 + 2 + uVar3;
      if (0 < (int)(*(uint *)(gen_frame + 0x4))) {
        do {
          F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x10,"%c%02X",(-(uint)(iVar4 != 0) & 0xfffffff2) + 0x3a,(uint)*pbVar2)
          ;
          pbVar2 = pbVar2 + 1;
          F_0042d540(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(*(uint *)(gen_frame + 0x4)));
      }
      pbVar2 = pbVar2 + 1;
      uVar3 = F_0042d160(param_2 GEN_EDX_ARG,0x5d);
    }
    else {
      uVar3 = F_0042acc0(uVar3);
      iVar4 = 0;
      (*(uint *)(gen_frame + 0x4)) = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar3 = F_0042d160(param_2 GEN_EDX_ARG,(uint)*pbVar2);
          iVar4 = iVar4 + 1;
          pbVar2 = pbVar2 + 1;
        } while (iVar4 < (int)(*(uint *)(gen_frame + 0x4)));
      }
    }
    bVar1 = *pbVar2;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a27330 */
GEN_FRAME uint GEN_THISCALL F_00a27330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa27330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = param_1;
  pcVar4 = (char *)0x0;
  pcVar2 = (char *)F_0042a990(param_1 GEN_EDX_FWD);
  uVar3 = F_0042aca0((int)this + 0x4c GEN_EDX_ARG);
  uVar3 = CONCAT31((int3)(uVar3 >> 8),*pcVar2);
  if (*pcVar2 != '\0') {
    do {
      cVar1 = (char)uVar3;
      if (cVar1 == '\x02') {
        uVar3 = F_00a24d30(this GEN_EDX_ARG,pcVar2 + 2,(int)this + 0x34,&(*(int *)(gen_frame + 0xc)),1);
        pcVar2 = pcVar2 + 2 + (*(int *)(gen_frame + 0xc)) + uVar3 + 1;
        pcVar4 = (char *)0x0;
      }
      else {
        if ((pcVar4 == (char *)0x0) &&
           ((cVar1 == ' ' || (((*pcVar2 == -0x1d && (pcVar2[1] == -0x80)) && (pcVar2[2] == -0x80))))
           )) {
          pcVar4 = pcVar2;
        }
        if ((cVar1 != ' ') && (((*pcVar2 != -0x1d || (pcVar2[1] != -0x80)) || (pcVar2[2] != -0x80)))
           ) {
          pcVar4 = (char *)0x0;
        }
        uVar3 = F_0042acc0(uVar3);
        pcVar2 = pcVar2 + uVar3;
      }
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x10));
      uVar3 = CONCAT31((int3)(uVar3 >> 8),*pcVar2);
    } while (*pcVar2 != '\0');
    if (pcVar4 != (char *)0x0) {
      uVar3 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      uVar3 = F_0042d2c0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),0,(int)pcVar4 - uVar3);
      F_0042ccf0(this_00 GEN_EDX_ARG,uVar3);
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      uVar3 = (uint)uVar5;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a27410 */
GEN_FRAME uint GEN_THISCALL F_00a27410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa27410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = param_1;
  pbVar2 = (byte *)F_0042a990(param_2 GEN_EDX_FWD);
  F_0042b630(param_1 GEN_EDX_ARG);
  uVar3 = F_0042b630(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  bVar1 = *pbVar2;
  uVar4 = CONCAT31((int3)(uVar3 >> 8),bVar1);
  this_00 = param_1;
  uVar3 = param_5;
  while (bVar1 != 0) {
    if ((char)uVar4 == '\x02') {
      if (*((char * PTR32 *)(gen_frame + 0x14))[0] != '\0') {
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_3 + 4))(param_3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x14)),param_4,uVar3);
        F_0042ccf0(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar5);
        uVar5 = F_0042a970(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
        if (uVar3 <= uVar5) break;
        F_0042e360(this_00 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x14)));
        uVar5 = F_0042a970(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
        uVar3 = uVar3 - uVar5;
        F_0042aca0(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      }
      F_0042d160(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(uint)*pbVar2);
      F_0042d160(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(uint)pbVar2[1]);
      pbVar2 = pbVar2 + 2;
      uVar5 = F_00a24d30(this GEN_EDX_ARG,pbVar2,(int)this + 0x34,&(*(uint *)(gen_frame + 0xc)),1);
      iVar6 = uVar5 + (*(uint *)(gen_frame + 0xc));
      if (0 < iVar6) {
        do {
          F_0042d160(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(uint)*pbVar2);
          pbVar2 = pbVar2 + 1;
          iVar6 = iVar6 - 1;
          this_00 = (*(undefined * PTR32 *)(gen_frame + 0x10));
        } while (iVar6 != 0);
      }
      F_0042d160(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(uint)*pbVar2);
      pbVar2 = pbVar2 + 1;
      uVar5 = F_0042a970(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      if (uVar3 <= uVar5) break;
      F_0042e360(this_00 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x14)));
      uVar5 = F_0042a970(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      uVar3 = uVar3 - uVar5;
      uVar5 = F_0042aca0(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    }
    else {
      uVar5 = F_0042acc0(uVar4);
      (*(uint *)(gen_frame + 0xc)) = uVar5;
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x10));
      if (0 < (int)uVar5) {
        iVar6 = 0;
        do {
          uVar5 = F_0042d160(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(uint)*pbVar2);
          iVar6 = iVar6 + 1;
          pbVar2 = pbVar2 + 1;
          this_00 = (*(undefined * PTR32 *)(gen_frame + 0x10));
        } while (iVar6 < (int)(*(uint *)(gen_frame + 0xc)));
      }
    }
    bVar1 = *pbVar2;
    uVar4 = CONCAT31((int3)(uVar5 >> 8),bVar1);
  }
  if (*((char * PTR32 *)(gen_frame + 0x14))[0] != '\0') {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_3 + 4))(param_3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x14)),param_4,uVar3);
    F_0042ccf0(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar5);
    uVar5 = F_0042a970(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    if (uVar5 < uVar3) {
      F_0042e360(this_00 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x14)));
    }
  }
  F_0042c880(((char * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (uint)this_00;
}

/* ref: Component::Text::TextChecker::vf5 */
GEN_FRAME uint GEN_THISCALL F_00a275d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa275d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[3]),&(*(int *)&gen_args[3]),1);
  if ((uVar1 != 0) && ((*(int *)&gen_args[3]) == 0)) {
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x30))) + 1;
  }
  return uVar1;
}

/* ref: FUN_00a27600 */
GEN_FRAME uint GEN_THISCALL F_00a27600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27600u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  if (uVar1 == 0) {
    return 0;
  }
  F_00a1afb0((*(undefined4 *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_00a27640 */
GEN_FRAME uint GEN_THISCALL F_00a27640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27640u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[4]),0x11,(*(undefined4 *)&gen_args[3]));
  }
  return uVar1;
}

/* ref: FUN_00a27680 */
GEN_FRAME uint GEN_THISCALL F_00a27680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27680u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[4]),0x12,(*(undefined4 *)&gen_args[3]));
  }
  return uVar1;
}

/* ref: FUN_00a276c0 */
GEN_FRAME uint GEN_THISCALL F_00a276c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa276c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (*(undefined4 *)&gen_args[3]);
  iVar1 = (*(int *)&gen_args[1]);
  uVar3 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(int *)&gen_args[1]),1);
  if (uVar3 != 0) {
    uVar4 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar3 + iVar1,uVar2,&(*(undefined4 *)&gen_args[3]),1);
    if (uVar4 != 0) {
      F_00a21d00((*(undefined4 *)&gen_args[4]),0x1e,(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[3]));
      return uVar4 + uVar3;
    }
  }
  return 0;
}

/* ref: FUN_00a27730 */
GEN_FRAME uint GEN_THISCALL F_00a27730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27730u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[4]);
  if (*(*(char * PTR32 *)&gen_args[1]) == -0x14) {
    F_0042d160((*(undefined * PTR32 *)&gen_args[4]) GEN_EDX_FWD,2);
    F_0042d160(this_00 GEN_EDX_ARG,0x13);
    F_0042d160(this_00 GEN_EDX_ARG,2);
    F_0042d160(this_00 GEN_EDX_ARG,0xec);
    F_0042d160(this_00 GEN_EDX_ARG,3);
    return (*(uint *)&gen_args[2]);
  }
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(char * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(char * PTR32 *)&gen_args[1]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined * PTR32 *)&gen_args[4]),0x13,(*(char * PTR32 *)&gen_args[1]));
  }
  return uVar1;
}

/* ref: FUN_00a277b0 */
GEN_FRAME uint GEN_THISCALL F_00a277b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa277b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[4]),0x14,(*(undefined4 *)&gen_args[3]));
  }
  return uVar1;
}

/* ref: FUN_00a277f0 */
GEN_FRAME uint GEN_THISCALL F_00a277f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa277f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[4]),0x15,(*(undefined4 *)&gen_args[3]));
  }
  return uVar1;
}

/* ref: FUN_00a27830 */
GEN_FRAME uint GEN_THISCALL F_00a27830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27830u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[4]),0x18,(*(undefined4 *)&gen_args[3]));
  }
  return uVar1;
}

/* ref: FUN_00a27870 */
GEN_FRAME uint GEN_THISCALL F_00a27870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),10,0,0);
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a278e0 */
GEN_FRAME uint GEN_THISCALL F_00a278e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa278e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),0x10,0,0);
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a27950 */
GEN_FRAME uint GEN_THISCALL F_00a27950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_4;
  (*(undefined4 *)(gen_frame + 0x4)) = param_3;
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
    uVar2 = F_00a23ff0(this GEN_EDX_ARG,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0xb4)),1);
    if (uVar2 != 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,&REFG(undefined, 0x10e3d68),REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,"&#44;",REFG(undefined4, 0x108cc50));
      F_0042d750(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x60)));
      F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
      uVar3 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x0)),10,1,uVar3);
      F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
      return uVar2 + uVar1;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a27a90 */
GEN_FRAME uint GEN_THISCALL F_00a27a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),10,2,0);
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return uVar1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a27b10 */
GEN_FRAME uint GEN_THISCALL F_00a27b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),10,3,0);
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a27b80 */
GEN_FRAME uint GEN_THISCALL F_00a27b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = param_4;
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x8)),1);
  if (uVar1 != 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    uVar2 = F_00a23ff0(this GEN_EDX_ARG,param_1 + uVar1,param_3,((undefined1 *)(gen_frame + 0x64)),1);
    if (uVar2 != 0) {
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      uVar3 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x8)),10,4,uVar3);
      F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
      return uVar2 + uVar1;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a27c60 */
GEN_FRAME uint GEN_THISCALL F_00a27c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x8)),1);
  if (uVar1 != 0) {
    (*(uint *)(gen_frame + 0xc)) = uVar1;
    uVar1 = F_00a24d30(this GEN_EDX_ARG,uVar1 + param_1,param_3,&(*(undefined4 *)(gen_frame + 0x4)),1);
    if (uVar1 != 0) {
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + uVar1;
      F_0042b630(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      uVar1 = (*(uint *)(gen_frame + 0xc));
      uVar2 = F_00a23ff0(this GEN_EDX_ARG,param_1 + (*(uint *)(gen_frame + 0xc)),param_3,((undefined1 *)(gen_frame + 0x64)),1);
      if (uVar2 != 0) {
        uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
        uVar3 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),5,uVar3);
        F_0042d4d0(param_4 GEN_EDX_ARG,uVar3);
        F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
        return uVar2 + uVar1;
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a27d60 */
GEN_FRAME uint GEN_THISCALL F_00a27d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = param_4;
  F_0042b630(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_FWD);
  F_0042b630(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
  uVar1 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x20)),1);
  if (uVar1 != 0) {
    (*(uint *)(gen_frame + 0x1c)) = uVar1;
    uVar1 = F_00a23ff0(this GEN_EDX_ARG,uVar1 + param_1,param_3,((undefined1 *)(gen_frame + 0x74)),1);
    if (uVar1 != 0) {
      uVar1 = (*(uint *)(gen_frame + 0x1c)) + uVar1;
      (*(uint *)(gen_frame + 0x1c)) = uVar1;
      uVar1 = F_00a24d30(this GEN_EDX_ARG,param_1 + uVar1,param_3,&(*(int *)(gen_frame + 0x14)),1);
      if (uVar1 != 0) {
        uVar1 = (*(uint *)(gen_frame + 0x1c)) + uVar1;
        (*(int *)(gen_frame + 0x4)) = 0;
        (*(int *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        F_00ada1b0(((undefined1 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x74)),&(*(int *)(gen_frame + 0x4)));
        if ((*(int *)(gen_frame + 0x14)) - 1U < (uint)(((*(int *)(gen_frame + 0x8)) - (*(int *)(gen_frame + 0x4))) / 0x54)) {
          F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x14)) * 0x54 - 0x54 + (*(int *)(gen_frame + 0x4)));
        }
        F_004876d0(&(*(int *)(gen_frame + 0x4)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
        return uVar1;
      }
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a27ed0 */
GEN_FRAME uint GEN_THISCALL F_00a27ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = param_4;
  if (*(int *)((int)this + 0x164) == 0) goto LAB_00a27ff9;
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    (*(uint *)(gen_frame + 0xc)) = uVar1;
    uVar1 = F_00a24d30(this GEN_EDX_ARG,param_1 + uVar1,param_3,&(*(undefined4 *)(gen_frame + 0x8)),1);
    if (uVar1 != 0) {
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + uVar1;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x164) + 4))))
                        (*(int * PTR32 *)((int)this + 0x164) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),&(*(char *)(gen_frame + 0x13)));
      if (uVar1 != 0) {
        F_0042b630(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
        if ((*(char *)(gen_frame + 0x13)) == '\0') {
          uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 4) + 0x18))))
                            ((int)this - 4,uVar1,(*(undefined4 *)(gen_frame + 0x8)),0xffff,param_3,((undefined1 *)(gen_frame + 0x14)));
        }
        else {
          uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 4) + 0x24))))
                            ((int)this - 4,uVar1,(*(undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x14)));
          uVar1 = (uint)((char)uVar1 != '\0') * 2 - 1;
        }
        if (uVar1 == 1) {
          uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x164) + 8))))(*(int * PTR32 *)((int)this + 0x164) GEN_EDX_ARG);
          this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4));
          F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar1);
          F_0042d4d0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
          uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x164) + 0xc))))(*(int * PTR32 *)((int)this + 0x164) GEN_EDX_ARG);
          F_0042d4d0(this_00 GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
          uVar1 = (*(uint *)(gen_frame + 0xc));
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
          return uVar1;
        }
        if (uVar1 != 0xffffffff) {
          F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
          goto LAB_00a28014;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      }
LAB_00a27ff9: ;
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return param_2;
    }
  }
LAB_00a28014: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a28030 */
GEN_FRAME uint GEN_THISCALL F_00a28030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa28030u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[1]);
  bVar1 = *(*(byte * PTR32 *)&gen_args[1]);
  pbVar5 = (*(byte * PTR32 *)&gen_args[1]);
  if (0xef < bVar1) {
    switch((unsigned int)(uintptr_t)(bVar1)) {
    case 0xf0: ;
    case 0xf1: ;
    case 0xf3: ;
    case 0xf7: ;
      return 2;
    case 0xf2: ;
    case 0xf4: ;
    case 0xf5: ;
    case 0xf8: ;
    case 0xf9: ;
    case 0xfb: ;
      return 3;
    case 0xf6: ;
    case 0xfa: ;
    case 0xfc: ;
    case 0xfd: ;
      return 4;
    case 0xfe: ;
      return 5;
    case 0xff: ;
      pbVar5 = (*(byte * PTR32 *)&gen_args[1]) + 1;
      uVar3 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,pbVar5,(*(undefined4 *)&gen_args[2]),&(*(byte * PTR32 *)&gen_args[1]),1);
      return (int)(pbVar5 + uVar3 + (int)(*(byte * PTR32 *)&gen_args[1])) - (int)pbVar2;
    }
    goto switchD_00a2805b_default;
  }
  if (bVar1 < 0xed) {
    if (0xe7 < bVar1) {
      pbVar5 = (*(byte * PTR32 *)&gen_args[1]) + 1;
      if (bVar1 != 0xec) {
        uVar3 = F_00a28030((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,pbVar5,(*(undefined4 *)&gen_args[2]));
        return (uint)(pbVar5 + (uVar3 - (int)pbVar2));
      }
      goto switchD_00a2805b_default;
    }
    if (0xdf < bVar1) {
      uVar3 = F_00a28030((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(byte * PTR32 *)&gen_args[1]) + 1,(*(undefined4 *)&gen_args[2]));
      uVar4 = F_00a28030((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,pbVar2 + uVar3 + 2,(*(undefined4 *)&gen_args[2]));
      return (uint)(pbVar2 + uVar3 + 2 + (uVar4 - (int)pbVar2));
    }
    if ((bVar1 < 0xd8) && (bVar1 == 0)) goto switchD_00a2805b_default;
  }
  pbVar5 = (*(byte * PTR32 *)&gen_args[1]) + 1;
switchD_00a2805b_default: ;
  return (int)pbVar5 - (int)(*(byte * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a28150 */
GEN_FRAME uint GEN_STDCALL F_00a28150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa28150u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  undefined4 uVar2;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar3;
  int iVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar6;
  byte * pbVar7;
  byte * pbVar8;
  
  ppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0];
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  bVar1 = *param_2;
  (*(uint *)(gen_frame + 0x34)) = 0xf;
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0] = (undefined4 * PTR32 * PTR32 * PTR32 *)((uint)ppppuVar3 & 0xffffff00);
  pbVar8 = param_2;
  pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16));
  do {
    ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0] = pppppuVar5;
    if (bVar1 == 0) {
LAB_00a28314: ;
      if (0xf < (*(uint *)(gen_frame + 0x34))) {
        F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0],(*(uint *)(gen_frame + 0x34)) + 1,0x2c4);
      }
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return (int)pbVar8 - (int)param_2;
    }
    pbVar7 = pbVar8 + 1;
    gen_piece_set(((byte *)(gen_frame + 0x8)), 17, 3, (unsigned long long)(SUB43(uVar2,1)));
    ((byte *)(gen_frame + 0x8))[0x10] = bVar1;
    if (bVar1 == 0x5d) {
      F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20)));
      (*(int *)(gen_frame + 0x30)) = 0;
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0];
      if ((*(uint *)(gen_frame + 0x34)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20));
      }
      *(undefined1 *)pppppuVar5 = 0;
      pbVar8 = pbVar8 + 2;
      goto LAB_00a28314;
    }
    if ((bVar1 == 0x21) || ((';' < (char)bVar1 && ((char)bVar1 < '?')))) {
      (*(uint *)(gen_frame + 0x50)) = 0xf;
      (*(int *)(gen_frame + 0x4c)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0] = (undefined4 * PTR32 * PTR32 * PTR32 *)((uint)pppppuVar5 & 0xffffff00);
      F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,0,1,0x5b);
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
      if ((*(uint *)(gen_frame + 0x50)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c));
      }
      pppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
      if ((*(uint *)(gen_frame + 0x50)) < 0x10) {
        pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c));
      }
      if ((int)pppppuVar5 + (*(int *)(gen_frame + 0x4c)) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = ((int)pppppuVar5 + (*(int *)(gen_frame + 0x4c))) - (int)pppppuVar6;
      }
      F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,iVar4,1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)));
      if (*pbVar7 == 0x3d) {
        pbVar7 = pbVar8 + 2;
        pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
        if ((*(uint *)(gen_frame + 0x50)) < 0x10) {
          pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c));
        }
        pppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
        if ((*(uint *)(gen_frame + 0x50)) < 0x10) {
          pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c));
        }
        if ((int)pppppuVar5 + (*(int *)(gen_frame + 0x4c)) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = ((int)pppppuVar5 + (*(int *)(gen_frame + 0x4c))) - (int)pppppuVar6;
        }
        F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,iVar4,1,0x3d);
      }
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
      if ((*(uint *)(gen_frame + 0x50)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c));
      }
      pppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
      if ((*(uint *)(gen_frame + 0x50)) < 0x10) {
        pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c));
      }
      if ((int)pppppuVar5 + (*(int *)(gen_frame + 0x4c)) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = ((int)pppppuVar5 + (*(int *)(gen_frame + 0x4c))) - (int)pppppuVar6;
      }
      F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,iVar4,1,0x5d);
      F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c)));
      F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20)));
      (*(int *)(gen_frame + 0x30)) = 0;
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0];
      if ((*(uint *)(gen_frame + 0x34)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20));
      }
      *(undefined1 *)pppppuVar5 = 0;
      if (0xf < (*(uint *)(gen_frame + 0x50))) {
        F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0],(*(uint *)(gen_frame + 0x50)) + 1,0x2c4);
      }
    }
    else {
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0];
      if ((*(uint *)(gen_frame + 0x34)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20));
      }
      pppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0];
      if ((*(uint *)(gen_frame + 0x34)) < 0x10) {
        pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20));
      }
      if ((undefined1 *)((int)pppppuVar5 + (*(int *)(gen_frame + 0x30))) == (undefined1 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = ((int)pppppuVar5 + (*(int *)(gen_frame + 0x30))) - (int)pppppuVar6;
      }
      F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,iVar4,1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)));
    }
    bVar1 = *pbVar7;
    pbVar8 = pbVar7;
    pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
    uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16));
  } while( true );
}

/* ref: FUN_00a28350 */
GEN_FRAME uint GEN_THISCALL F_00a28350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa28350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar8;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar9;
  char * pcVar10;
  
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(uint *)(gen_frame + 0x60)) = 0xf;
  (*(int *)(gen_frame + 0x5c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
  cVar5 = *param_2;
  bVar1 = false;
  (*(int *)(gen_frame + 0x8)) = 0;
  bVar3 = false;
  bVar2 = false;
  pcVar10 = param_2;
  if (cVar5 != '\0') {
    do {
      pcVar10 = pcVar10 + 1;
      (*(undefined4 *)(gen_frame + 0xd)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xd)), 1, 3),cVar5);
      if (bVar1) {
        ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
        if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
          ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
        }
        ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
        if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
          ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
        }
        if ((undefined1 *)((int)ppppuVar8 + (*(int *)(gen_frame + 0x5c))) == (undefined1 *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = ((int)ppppuVar8 + (*(int *)(gen_frame + 0x5c))) - (int)ppppuVar9;
        }
        F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_FWD,iVar6,1,(*(undefined4 *)(gen_frame + 0xd)));
        bVar1 = false;
      }
      else {
        switch((unsigned int)(uintptr_t)(cVar5)) {
        case '(': ;
        case '=': ;
          if ((*(int *)(gen_frame + 0x8)) == 0) {
LAB_00a284ed: ;
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xd)));
          }
          else {
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,0x3d);
            F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)));
            (*(int *)(gen_frame + 0x5c)) = 0;
            ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            *(undefined1 *)ppppuVar8 = 0;
            bVar2 = false;
            bVar3 = true;
          }
          break;
        case ')': ;
          if ((*(int *)(gen_frame + 0x8)) == 0) {
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xd)));
          }
          break;
        default: ;
          ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
          if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
            ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
          }
          ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
          if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
            ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
          }
          if ((undefined1 *)((int)ppppuVar8 + (*(int *)(gen_frame + 0x5c))) == (undefined1 *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = ((int)ppppuVar8 + (*(int *)(gen_frame + 0x5c))) - (int)ppppuVar9;
          }
          F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,iVar6,1,(*(undefined4 *)(gen_frame + 0xd)));
          break;
        case ',': ;
          if ((*(int *)(gen_frame + 0x8)) == 0) goto LAB_00a284ed;
          F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)));
          (*(int *)(gen_frame + 0x5c)) = 0;
          ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
          if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
            ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
          }
          *(undefined1 *)ppppuVar8 = 0;
          (*(undefined4 *)(gen_frame + 0x44)) = 0xf;
          (*(undefined4 *)(gen_frame + 0x40)) = 0;
          ((undefined1 *)(gen_frame + 0x30))[0] = 0;
          F_00a2f470(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x10e3d18),1);
          F_00a32fd0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
          F_00a2df40(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
          break;
        case '<': ;
          if ((*(int *)(gen_frame + 0x5c)) != 0) {
            F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)));
            (*(int *)(gen_frame + 0x5c)) = 0;
            ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            *(undefined1 *)ppppuVar8 = 0;
          }
          F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xd)));
          (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          bVar2 = true;
          break;
        case '>': ;
          if ((*(int *)(gen_frame + 0x8)) == 0) {
LAB_00a28584: ;
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xd)));
          }
          else {
            if (bVar2) {
              F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xd)));
              F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)));
            }
            else {
              F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)));
              F_00a30c60(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e3d14));
              F_00a32fd0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
              F_00a2df40(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
            }
            (*(int *)(gen_frame + 0x5c)) = 0;
            ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) - 1;
            *(undefined1 *)ppppuVar8 = 0;
            bVar2 = false;
          }
          break;
        case '[': ;
          if (((*(int *)(gen_frame + 0x8)) == 0) || (!bVar3)) {
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,0x5c);
            goto LAB_00a28584;
          }
          uVar7 = F_00a28150(param_1,pcVar10);
          pcVar10 = pcVar10 + uVar7;
          (*(int *)(gen_frame + 0x5c)) = 0;
          ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
          if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
            ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
          }
          *(undefined1 *)ppppuVar8 = 0;
          bVar3 = false;
          break;
        case '\\': ;
          F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xd)));
          bVar1 = true;
          break;
        case ']': ;
          F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,0x5c);
          F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xd)));
        }
      }
      cVar5 = *pcVar10;
    } while (cVar5 != '\0');
    if ((*(int *)(gen_frame + 0x5c)) != 0) {
      F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)));
    }
  }
  if (0xf < (*(uint *)(gen_frame + 0x60))) {
    F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0],(*(uint *)(gen_frame + 0x60)) + 1,0x2c4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (int)pcVar10 - (int)param_2;
}

/* ref: FUN_00a286a0 */
GEN_FRAME uint GEN_STDCALL F_00a286a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa286a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  int iVar7;
  uint local_c;
  int local_8;
  int iVar6;
  
  iVar6 = *param_2;
  local_8 = 0;
  local_c = param_3;
  if (param_3 < (uint)((param_2[1] - iVar6) / 0x1c)) {
    iVar7 = param_3 * 0x1c;
    do {
      pcVar5 = (char *)(iVar6 + iVar7);
      pcVar4 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar4 = *(char * PTR32 *)pcVar5;
      }
      if (*pcVar4 == '<') {
        F_00a32fd0(param_1 GEN_EDX_ARG,pcVar5);
        puVar2 = (undefined4 *)(iVar7 + *param_2);
        piVar1 = puVar2 + 4;
        if (0xf < *(uint *)(iVar7 + 0x14 + *param_2)) {
          puVar2 = (undefined4 *)*puVar2;
        }
        if (*(char *)((int)puVar2 + *piVar1 - 1) != '>') {
          local_8 = local_8 + 1;
        }
      }
      else {
        iVar6 = *(int *)(pcVar5 + 0x10);
        pcVar4 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar4 = *(char * PTR32 *)pcVar5;
        }
        uVar3 = F_0040d320(pcVar4,&REFG(undefined, 0x10e3d24),(uint)(iVar6 != 0));
        if (((uVar3 == 0) && (iVar6 != 0)) && (iVar6 == 1)) {
          if (local_8 == 0) break;
          if (0 < local_8) {
            F_00a32fd0(param_1 GEN_EDX_ARG,pcVar5);
          }
          local_8 = local_8 - 1;
        }
        else {
          iVar6 = *(int *)(pcVar5 + 0x10);
          pcVar4 = pcVar5;
          if (0xf < *(uint *)(pcVar5 + 0x14)) {
            pcVar4 = *(char * PTR32 *)pcVar5;
          }
          uVar3 = F_0040d320(pcVar4,&REFG(undefined, 0x10e3d28),(uint)(iVar6 != 0));
          if (((uVar3 == 0) && (iVar6 != 0)) && ((iVar6 == 1 && (local_8 == 0)))) break;
          F_00a32fd0(param_1 GEN_EDX_ARG,pcVar5);
        }
      }
      iVar6 = *param_2;
      local_c = local_c + 1;
      iVar7 = iVar7 + 0x1c;
    } while (local_c < (uint)((param_2[1] - iVar6) / 0x1c));
  }
  return local_c - param_3;
}

/* ref: FUN_00a28830 */
GEN_FRAME uint GEN_THISCALL F_00a28830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa28830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  int * piVar1;
  int iVar2;
  uint * puVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  uint local_18;
  uint * local_14;
  uint * local_10;
  uint local_c;
  uint local_8;
  
  if ((param_3[5] - param_3[4]) / 0x1c == 1) {
    F_00a32fd0(param_4 GEN_EDX_FWD,param_3[4]);
    return 1;
  }
  uVar4 = (param_3[1] - *param_3) / 0x1c;
  uVar6 = -(uint)((int)((ulonglong)uVar4 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x10);
  puVar3 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0,0);
  if (puVar3 == (uint *)0x0) {
    local_14 = (uint *)0x0;
  }
  else {
    *puVar3 = uVar4;
    local_14 = puVar3 + 1;
    puVar3 = local_14;
    while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3 = puVar3 + 4;
    }
  }
  local_18 = param_2 + 1;
  local_c = 1;
  local_8 = local_18;
  puVar3 = local_14;
  if (1 < (uint)((param_3[1] - *param_3) / 0x1c)) {
    do {
      local_10 = puVar3 + 4;
      iVar7 = *param_1;
      if ((uint)((param_1[1] - iVar7) / 0x1c) <= local_8) {
        return 0;
      }
      iVar2 = *(int *)(iVar7 + 0x10 + local_8 * 0x1c);
      piVar1 = (int *)(iVar7 + local_8 * 0x1c);
      piVar5 = piVar1;
      if (0xf < (uint)piVar1[5]) {
        piVar5 = (int *)*piVar1;
      }
      uVar4 = F_0040d320(piVar5,&REFG(undefined, 0x10e3d2c),(uint)(iVar2 != 0));
      if (((uVar4 == 0) && (iVar2 != 0)) && (iVar2 == 1)) {
        F_00a32fd0(local_10 GEN_EDX_ARG,piVar1);
        local_18 = local_8 + 1;
        local_8 = local_18;
      }
      else {
        iVar7 = piVar1[4];
        piVar5 = piVar1;
        if (0xf < (uint)piVar1[5]) {
          piVar5 = (int *)*piVar1;
        }
        uVar4 = F_0040d320(piVar5,&REFG(undefined, 0x10e3d30),(uint)(iVar7 != 0));
        if (((uVar4 == 0) && (iVar7 != 0)) && (iVar7 == 1)) {
          F_00a32fd0(local_10 GEN_EDX_ARG,piVar1);
          local_8 = local_8 + 1;
        }
        else {
          uVar4 = F_00a286a0(local_10,param_1,local_8);
          local_8 = local_8 + uVar4;
        }
      }
      local_c = local_c + 1;
      puVar3 = local_10;
    } while (local_c < (uint)((param_3[1] - *param_3) / 0x1c));
  }
  iVar7 = param_3[4];
  iVar2 = param_3[5] - iVar7 >> 0x1f;
  local_c = 0;
  if ((param_3[5] - iVar7) / 0x1c + iVar2 != iVar2) {
    local_10 = (uint *)0x0;
    do {
      iVar2 = *(int *)(param_3[8] + local_c * 4);
      if (iVar2 < 0) {
        F_00a32fd0(param_4 GEN_EDX_ARG,(int)local_10 + iVar7);
      }
      else {
        if ((param_3[1] - *param_3) / 0x1c <= iVar2) {
          return 0;
        }
        puVar3 = local_14 + iVar2 * 4;
        uVar4 = *puVar3;
        iVar7 = (int)(puVar3[1] - uVar4) >> 0x1f;
        uVar6 = 0;
        if ((int)(puVar3[1] - uVar4) / 0x1c + iVar7 != iVar7) {
          param_1 = (int *)0x0;
          do {
            F_00a32fd0(param_4 GEN_EDX_ARG,(int)param_1 + uVar4);
            uVar4 = *puVar3;
            param_1 = (int *)((int)param_1 + 0x1c);
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)((int)(puVar3[1] - uVar4) / 0x1c));
        }
      }
      iVar7 = param_3[4];
      local_10 = (uint *)((int)local_10 + 0x1c);
      local_c = local_c + 1;
    } while (local_c < (uint)((param_3[5] - iVar7) / 0x1c));
  }
  if (local_14 != (uint *)0x0) {
    F_00a32990(local_14 GEN_EDX_ARG,3);
  }
  return local_18 - param_2;
}

/* ref: FUN_00a28b70 */
GEN_FRAME byte GEN_THISCALL F_00a28b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa28b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint * puVar1;
  char cVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  int * piVar6;
  uint * puVar7;
  uint uVar8;
  uint * puVar9;
  int iVar10;
  uint uVar11;
  undefined4 * puVar12;
  uint uVar13;
  int * piVar14;
  uint * puVar15;
  uint uVar16;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar16 = param_1[5];
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x30)) = (uint *)0x0;
  (*(uint * PTR32 *)(gen_frame + 0x34)) = (uint *)0x0;
  (*(int *)(gen_frame + 0x38)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = (uint *)0x0;
  (*(uint * PTR32 *)(gen_frame + 0x20)) = (uint *)0x0;
  (*(int *)(gen_frame + 0x24)) = 0;
  puVar12 = param_1;
  if (0xf < uVar16) {
    puVar12 = (undefined4 *)*param_1;
  }
  F_00a28350(this GEN_EDX_FWD,&(*(uint * PTR32 *)(gen_frame + 0x30)),puVar12);
  uVar16 = ((int)(*(uint * PTR32 *)(gen_frame + 0x34)) - (int)(*(uint * PTR32 *)(gen_frame + 0x30))) / 0x1c;
  if (uVar16 != 0) {
    (*(uint *)(gen_frame + 0x44)) = uVar16;
    puVar9 = (*(uint * PTR32 *)(gen_frame + 0x30));
    do {
      puVar7 = puVar9;
      if (0xf < puVar9[5]) {
        puVar7 = (uint *)*puVar9;
      }
      if ((char)*puVar7 != '<') {
        puVar7 = puVar9;
        if (0xf < puVar9[5]) {
          puVar7 = (uint *)*puVar9;
        }
        if (((char)*puVar7 != '[') &&
           (piVar14 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x18))), piVar14 != *(int * PTR32 *)((int)this + 0x18)))
        {
          do {
            F_00a22180(puVar9,piVar14 + 3,piVar14 + 10);
            if (*(char *)((int)piVar14 + 0x45) == '\0') {
              piVar3 = (int *)piVar14[2];
              if (*(char *)((int)piVar3 + 0x45) == '\0') {
                cVar2 = *(char *)(*piVar3 + 0x45);
                piVar14 = piVar3;
                piVar3 = (int *)*piVar3;
                while (cVar2 == '\0') {
                  cVar2 = *(char *)(*piVar3 + 0x45);
                  piVar14 = piVar3;
                  piVar3 = (int *)*piVar3;
                }
              }
              else {
                cVar2 = *(char *)(piVar14[1] + 0x45);
                piVar6 = (int *)piVar14[1];
                piVar3 = piVar14;
                while ((piVar14 = piVar6, cVar2 == '\0' && (piVar3 == (int *)piVar14[2]))) {
                  cVar2 = *(char *)(piVar14[1] + 0x45);
                  piVar6 = (int *)piVar14[1];
                  piVar3 = piVar14;
                }
              }
            }
          } while (piVar14 != *(int * PTR32 *)((int)this + 0x18));
        }
      }
      puVar9 = puVar9 + 7;
      uVar16 = (*(uint *)(gen_frame + 0x44)) - 1;
      (*(uint *)(gen_frame + 0x44)) = uVar16;
    } while (uVar16 != 0);
  }
  while( true ) {
    uVar11 = ((int)(*(uint * PTR32 *)(gen_frame + 0x34)) - (int)(*(uint * PTR32 *)(gen_frame + 0x30))) / 0x1c;
    (*(char *)(gen_frame + 0x4b)) = '\0';
    (*(uint *)(gen_frame + 0x14)) = uVar11;
    uVar16 = 0;
    if (uVar11 == 0) break;
    do {
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
      (*(uint * PTR32 *)(gen_frame + 0x18)) = (*(uint * PTR32 *)(gen_frame + 0x30)) + uVar16 * 7;
      uVar8 = F_00a2f670((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 4) GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x30)) + uVar16 * 7);
      uVar11 = *(uint *)((int)pvVar5 + 8);
      (*(uint *)(gen_frame + 0xc)) = uVar8;
      (*(uint *)(gen_frame + 0x10)) = uVar11;
      if (uVar8 == uVar11) {
LAB_00a28d9b: ;
        (*(uint *)(gen_frame + 0x8)) = uVar11;
        puVar9 = &(*(uint *)(gen_frame + 0x8));
      }
      else {
        uVar4 = *(uint *)(uVar8 + 0x1c);
        puVar9 = (uint *)(uVar8 + 0xc);
        (*(uint *)(gen_frame + 0x44)) = uVar4;
        if (0xf < *(uint *)(uVar8 + 0x20)) {
          puVar9 = (uint *)*puVar9;
        }
        uVar8 = (*(uint * PTR32 *)(gen_frame + 0x18))[4];
        (*(uint *)(gen_frame + 0x40)) = uVar8;
        uVar13 = uVar4;
        if (uVar8 < uVar4) {
          uVar13 = uVar8;
        }
        puVar7 = (*(uint * PTR32 *)(gen_frame + 0x18));
        if (0xf < (*(uint * PTR32 *)(gen_frame + 0x18))[5]) {
          puVar7 = (uint *)*(*(uint * PTR32 *)(gen_frame + 0x18));
        }
        for (; 3 < uVar13; uVar13 = uVar13 - 4) {
          if (*puVar7 != *puVar9) goto LAB_00a28d38;
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
        }
        if (uVar13 == 0) {
LAB_00a28d81: ;
          uVar13 = 0;
        }
        else {
LAB_00a28d38: ;
          iVar10 = (uint)(byte)*puVar7 - (uint)(byte)*puVar9;
          if (iVar10 == 0) {
            if (uVar13 < 2) goto LAB_00a28d81;
            iVar10 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar9 + 1);
            if (iVar10 == 0) {
              if (uVar13 < 3) goto LAB_00a28d81;
              iVar10 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar9 + 2);
              if (iVar10 == 0) {
                if (uVar13 < 4) goto LAB_00a28d81;
                iVar10 = (uint)*(byte *)((int)puVar7 + 3) - (uint)*(byte *)((int)puVar9 + 3);
              }
            }
          }
          uVar13 = iVar10 >> 0x1f | 1;
        }
        if (uVar13 == 0) {
          if (uVar8 < uVar4) goto LAB_00a28d9b;
          uVar13 = (uint)(uVar8 != uVar4);
        }
        if ((int)uVar13 < 0) goto LAB_00a28d9b;
        puVar9 = &(*(uint *)(gen_frame + 0xc));
      }
      if (*puVar9 == *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8)) {
        F_00a32fd0(&(*(uint * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x18)));
      }
      else {
        uVar11 = F_00a28830((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,&(*(uint * PTR32 *)(gen_frame + 0x30)),uVar16,*puVar9 + 0x28,&(*(uint * PTR32 *)(gen_frame + 0x1c)));
        puVar7 = (*(uint * PTR32 *)(gen_frame + 0x20));
        puVar9 = (*(uint * PTR32 *)(gen_frame + 0x1c));
        if (uVar11 == 0) {
          if ((*(uint * PTR32 *)(gen_frame + 0x1c)) != (uint *)0x0) {
            if ((*(uint * PTR32 *)(gen_frame + 0x1c)) != (*(uint * PTR32 *)(gen_frame + 0x20))) {
              puVar15 = (*(uint * PTR32 *)(gen_frame + 0x1c)) + 5;
              do {
                if (0xf < *puVar15) {
                  F_00429760(puVar15[-5],*puVar15 + 1,0x2c4);
                }
                *puVar15 = 0xf;
                puVar15[-1] = 0;
                *(undefined1 *)(puVar15 - 5) = 0;
                puVar1 = puVar15 + 2;
                puVar15 = puVar15 + 7;
              } while (puVar1 != puVar7);
            }
            F_00429760(puVar9,(((*(int *)(gen_frame + 0x24)) - (int)puVar9) / 0x1c) * 0x1c,0x2c4);
          }
          puVar9 = (*(uint * PTR32 *)(gen_frame + 0x34));
          if ((*(uint * PTR32 *)(gen_frame + 0x30)) != (uint *)0x0) {
            if ((*(uint * PTR32 *)(gen_frame + 0x30)) != (*(uint * PTR32 *)(gen_frame + 0x34))) {
              puVar7 = (*(uint * PTR32 *)(gen_frame + 0x30)) + 5;
              do {
                if (0xf < *puVar7) {
                  F_00429760(puVar7[-5],*puVar7 + 1,0x2c4);
                }
                *puVar7 = 0xf;
                puVar7[-1] = 0;
                *(char *)(puVar7 - 5) = '\0';
                puVar15 = puVar7 + 2;
                puVar7 = puVar7 + 7;
              } while (puVar15 != puVar9);
            }
            F_00429760((*(uint * PTR32 *)(gen_frame + 0x30)),(((*(int *)(gen_frame + 0x38)) - (int)(*(uint * PTR32 *)(gen_frame + 0x30))) / 0x1c) * 0x1c,0x2c4);
          }
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
          return 0;
        }
        uVar16 = (uVar16 - 1) + uVar11;
        (*(char *)(gen_frame + 0x4b)) = '\x01';
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < (*(uint *)(gen_frame + 0x14)));
    if ((*(char *)(gen_frame + 0x4b)) == '\0') break;
    F_00a32e30(&(*(uint * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,&(*(uint * PTR32 *)(gen_frame + 0x1c)));
    puVar7 = (*(uint * PTR32 *)(gen_frame + 0x20));
    puVar9 = (*(uint * PTR32 *)(gen_frame + 0x1c));
    if ((*(uint * PTR32 *)(gen_frame + 0x1c)) != (*(uint * PTR32 *)(gen_frame + 0x20))) {
      puVar15 = (*(uint * PTR32 *)(gen_frame + 0x1c)) + 5;
      do {
        if (0xf < *puVar15) {
          F_00429760(puVar15[-5],*puVar15 + 1,0x2c4);
        }
        *puVar15 = 0xf;
        puVar15[-1] = 0;
        *(undefined1 *)(puVar15 - 5) = 0;
        puVar1 = puVar15 + 2;
        puVar15 = puVar15 + 7;
      } while (puVar1 != puVar7);
      (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar9;
    }
  }
  puVar12 = (undefined4 *)F_00a23530(((undefined4 *)(gen_frame + 0x4c)),&(*(uint * PTR32 *)(gen_frame + 0x1c)));
  if (param_1 != puVar12) {
    if (0xf < (uint)param_1[5]) {
      F_00429760(*param_1,param_1[5] + 1,0x2c4);
    }
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
    if ((uint)puVar12[5] < 0x10) {
      F_00c46e20(param_1,puVar12,puVar12[4] + 1);
    }
    else {
      *param_1 = *puVar12;
      *puVar12 = 0;
    }
    param_1[4] = puVar12[4];
    param_1[5] = puVar12[5];
    puVar12[5] = 0xf;
    puVar12[4] = 0;
    *(undefined1 *)puVar12 = 0;
  }
  if (0xf < (*(uint *)(gen_frame + 0x60))) {
    F_00429760(((undefined4 *)(gen_frame + 0x4c))[0],(*(uint *)(gen_frame + 0x60)) + 1,0x2c4);
  }
  puVar7 = (*(uint * PTR32 *)(gen_frame + 0x20));
  puVar9 = (*(uint * PTR32 *)(gen_frame + 0x1c));
  if ((*(uint * PTR32 *)(gen_frame + 0x1c)) != (uint *)0x0) {
    if ((*(uint * PTR32 *)(gen_frame + 0x1c)) != (*(uint * PTR32 *)(gen_frame + 0x20))) {
      puVar15 = (*(uint * PTR32 *)(gen_frame + 0x1c)) + 5;
      do {
        if (0xf < *puVar15) {
          F_00429760(puVar15[-5],*puVar15 + 1,0x2c4);
        }
        *puVar15 = 0xf;
        puVar15[-1] = 0;
        *(undefined1 *)(puVar15 - 5) = 0;
        puVar1 = puVar15 + 2;
        puVar15 = puVar15 + 7;
      } while (puVar1 != puVar7);
    }
    F_00429760(puVar9,(((*(int *)(gen_frame + 0x24)) - (int)puVar9) / 0x1c) * 0x1c,0x2c4);
  }
  puVar7 = (*(uint * PTR32 *)(gen_frame + 0x34));
  puVar9 = (*(uint * PTR32 *)(gen_frame + 0x30));
  if ((*(uint * PTR32 *)(gen_frame + 0x30)) != (uint *)0x0) {
    if ((*(uint * PTR32 *)(gen_frame + 0x30)) != (*(uint * PTR32 *)(gen_frame + 0x34))) {
      puVar15 = (*(uint * PTR32 *)(gen_frame + 0x30)) + 5;
      do {
        if (0xf < *puVar15) {
          F_00429760(puVar15[-5],*puVar15 + 1,0x2c4);
        }
        *puVar15 = 0xf;
        puVar15[-1] = 0;
        *(char *)(puVar15 - 5) = '\0';
        puVar1 = puVar15 + 2;
        puVar15 = puVar15 + 7;
      } while (puVar1 != puVar7);
    }
    F_00429760(puVar9,(((*(int *)(gen_frame + 0x38)) - (int)puVar9) / 0x1c) * 0x1c,0x2c4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00a29100 */
GEN_FRAME byte GEN_THISCALL F_00a29100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa29100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  undefined4 * PTR32 * ppuVar2;
  byte bVar3;
  char * pcVar4;
  undefined4 * PTR32 * PTR32 * pppuVar5;
  char * pcVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pcVar4 = (char *)F_0042a990(param_1 GEN_EDX_FWD);
  ppuVar2 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 *)((uint)ppuVar2 & 0xffffff00);
  pcVar6 = pcVar4;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00a2f470(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
  bVar3 = F_00a28b70(this GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)));
  pppuVar5 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
    pppuVar5 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
  }
  F_0042e430(param_1 GEN_EDX_ARG,pppuVar5);
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x2c4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return bVar3;
}

/* ref: FUN_00a291a0 */
GEN_FRAME uint GEN_THISCALL F_00a291a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa291a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  byte * pbVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_FWD,param_1);
  F_00a26db0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),param_2,REFG(undefined4, 0x108cc50));
  F_00a26db0(this GEN_EDX_ARG,param_1,0,param_2);
  pbVar2 = (byte *)F_0042a990(param_3 GEN_EDX_ARG);
  bVar1 = *pbVar2;
  uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pbVar2) >> 8),bVar1);
  while (bVar1 != 0) {
    if ((char)uVar3 == '\x02') {
      F_0042d160(param_1 GEN_EDX_ARG,2);
      F_0042d160(param_1 GEN_EDX_ARG,(uint)pbVar2[1]);
      pbVar2 = pbVar2 + 2;
      uVar4 = F_00a24d30(this GEN_EDX_ARG,pbVar2,(int)this + 0x34,&(*(int *)(gen_frame + 0xc)),1);
      if (0 < (int)(uVar4 + (*(int *)(gen_frame + 0xc)))) {
        (*(uint *)(gen_frame + 0x10)) = uVar4 + (*(int *)(gen_frame + 0xc));
        do {
          F_0042d160(param_1 GEN_EDX_ARG,(uint)*pbVar2);
          pbVar2 = pbVar2 + 1;
          uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
          (*(uint *)(gen_frame + 0x10)) = uVar4;
        } while (uVar4 != 0);
      }
      uVar4 = F_0042d160(param_1 GEN_EDX_ARG,(uint)*pbVar2);
      pbVar2 = pbVar2 + 1;
    }
    else {
      uVar6 = F_0042acc0(uVar3);
      uVar4 = 0;
      if (uVar6 != 0) {
        (*(uint *)(gen_frame + 0x10)) = uVar6;
        do {
          uVar4 = F_0042d160(param_1 GEN_EDX_ARG,(uint)*pbVar2);
          pbVar2 = pbVar2 + 1;
          uVar6 = (*(uint *)(gen_frame + 0x10)) - 1;
          (*(uint *)(gen_frame + 0x10)) = uVar6;
        } while (uVar6 != 0);
      }
    }
    bVar1 = *pbVar2;
    uVar3 = CONCAT31((int3)(uVar4 >> 8),bVar1);
  }
  pbVar2 = (byte *)F_0042a990(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  bVar1 = *pbVar2;
  uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pbVar2) >> 8),bVar1);
  while (bVar1 != 0) {
    if ((char)uVar3 == '\x02') {
      F_0042d160(param_1 GEN_EDX_ARG,2);
      F_0042d160(param_1 GEN_EDX_ARG,(uint)pbVar2[1]);
      pbVar2 = pbVar2 + 2;
      uVar4 = F_00a24d30(this GEN_EDX_ARG,pbVar2,(int)this + 0x34,&(*(int *)(gen_frame + 0xc)),1);
      iVar5 = uVar4 + (*(int *)(gen_frame + 0xc));
      if (0 < iVar5) {
        do {
          F_0042d160(param_1 GEN_EDX_ARG,(uint)*pbVar2);
          pbVar2 = pbVar2 + 1;
          iVar5 = iVar5 - 1;
        } while (iVar5 != 0);
      }
      uVar4 = F_0042d160(param_1 GEN_EDX_ARG,(uint)*pbVar2);
      pbVar2 = pbVar2 + 1;
    }
    else {
      uVar6 = F_0042acc0(uVar3);
      uVar4 = 0;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        uVar4 = F_0042d160(param_1 GEN_EDX_ARG,(uint)*pbVar2);
        pbVar2 = pbVar2 + 1;
      }
    }
    bVar1 = *pbVar2;
    uVar3 = CONCAT31((int3)(uVar4 >> 8),bVar1);
  }
  F_0042d160(param_1 GEN_EDX_ARG,0);
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (uint)uVar7;
}

/* ref: FUN_00a29340 */
GEN_FRAME uint GEN_THISCALL F_00a29340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa29340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_4;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(int *)(gen_frame + 0x4)),1);
  (*(uint *)(gen_frame + 0x10)) = uVar1;
  if (uVar1 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  if ((*(int *)(gen_frame + 0x4)) == 0) {
    uVar1 = F_00a28030(this GEN_EDX_ARG,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0xc)));
    uVar1 = uVar1 + (*(uint *)(gen_frame + 0x10));
    uVar2 = F_00a23ff0(this GEN_EDX_ARG,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)),1);
    if (uVar2 != 0) {
      F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
      uVar1 = uVar1 + uVar2;
    }
  }
  else {
    uVar2 = F_00a23ff0(this GEN_EDX_ARG,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)),1);
    (*(uint *)(gen_frame + 0x10)) = uVar2;
    if (uVar2 != 0) {
      F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
      iVar3 = uVar1 + (*(uint *)(gen_frame + 0x10));
      uVar1 = F_00a28030(this GEN_EDX_ARG,param_1 + iVar3,(*(undefined4 *)(gen_frame + 0xc)));
      uVar1 = iVar3 + uVar1;
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  if (param_2 == uVar1) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return uVar1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a29450 */
GEN_FRAME uint GEN_THISCALL F_00a29450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa29450u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
  if (uVar2 != 0) {
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) - 1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    if (-1 < (int)pvVar1) {
      iVar4 = 0;
      if (0 < (int)pvVar1) {
        do {
          uVar3 = F_00a28030((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar2 + (*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[3]));
          iVar4 = iVar4 + 1;
          uVar2 = uVar2 + uVar3;
        } while (iVar4 < (int)(*(undefined * PTR32 *)(gen_frame + 0x8)));
      }
      uVar2 = F_00a23ff0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar2 + (*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),1);
      return -(uint)(uVar2 != 0) & (*(uint *)&gen_args[2]);
    }
  }
  return 0;
}

/* ref: FUN_00a294d0 */
GEN_NOFRAME uint GEN_THISCALL F_00a294d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa294d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10e3fcc));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x14);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  F_00a31b30((undefined *)((int)this + 4) GEN_EDX_ARG,0x37);
  return (uint)this;
}

/* ref: FUN_00a29530 */
GEN_NOFRAME uint GEN_THISCALL F_00a29530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa29530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10e3fcc));
  F_00492c50((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  F_00429760(*(undefined4 *)((int)this + 0x14),8,0x2c4);
  *(undefined4 *)((int)this + 0x14) = 0;
  iVar1 = *(int *)((int)this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0x2c4);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_00a295a0 */
GEN_FRAME uint GEN_THISCALL F_00a295a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa295a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  char * param_4 = (char *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char * pcVar5;
  
  bVar1 = *param_1;
  switch((unsigned int)(uintptr_t)((uint)bVar1)) {
  case 0: ;
    *param_2 = 1;
    return 5;
  default: ;
    if (bVar1 == 0x26) {
      bVar2 = param_1[1];
      if (((bVar2 == 0x67) && (param_1[2] == 0x74)) && (param_1[3] == 0x3b)) {
        *param_2 = 4;
        *param_3 = 0x3e;
        return 0;
      }
      if (((bVar2 == 0x6c) && (param_1[2] == 0x74)) && (param_1[3] == 0x3b)) {
        *param_2 = 4;
        *param_3 = 0x3c;
        return 0;
      }
      if (((bVar2 == 0x61) && (param_1[2] == 0x6d)) &&
         ((param_1[3] == 0x70 && (param_1[4] == 0x3b)))) {
        *param_2 = 5;
        *param_3 = 0x26;
        return 0;
      }
    }
    cVar3 = *param_4;
    pcVar5 = param_4;
    while( true ) {
      if (cVar3 == '\0') {
        *param_2 = 1;
        return 0;
      }
      if ((int)cVar3 == (uint)bVar1) break;
      cVar3 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    }
    *param_2 = 1;
    return 1;
  case 2: ;
    break;
  case 10: ;
  case 0xd: ;
    *param_2 = 1;
    return 3;
  }
  bVar1 = param_1[1];
  if (bVar1 == 0x16) {
    *param_2 = 4;
    return 2;
  }
  if (bVar1 == 0x1d) {
    *param_2 = 4;
    *param_3 = 0x1d;
    return 0;
  }
  if (bVar1 == 0x1f) {
    *param_2 = 4;
    *param_3 = 0x1e;
    return 0;
  }
  if (bVar1 == 0x11) {
    F_004816e0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
    uVar4 = F_00a24d30(this GEN_EDX_ARG,param_1 + 2,((undefined1 *)(gen_frame + 0x4)),param_2,1);
    *param_2 = *param_2 + uVar4 + 3;
    F_00493180(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    return 3;
  }
  *param_2 = 1;
  return 4;
}

/* ref: FUN_00a297a0 */
GEN_FRAME uint GEN_THISCALL F_00a297a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa297a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char * pcVar5;
  uint uVar6;
  char * pcVar7;
  byte * pbVar8;
  
  pbVar8 = (*(byte * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_0042aca0((*(undefined * PTR32 *)&gen_args[2]) GEN_EDX_FWD);
  pcVar5 = (*(char * PTR32 *)&gen_args[4]);
  *(*(int * PTR32 *)&gen_args[3]) = 0;
  do {
    bVar2 = *pbVar8;
    switch((unsigned int)(uintptr_t)((uint)bVar2)) {
    case 0: ;
      return 5;
    default: ;
      if (bVar2 == 0x26) {
        bVar3 = pbVar8[1];
        if (((bVar3 == 0x67) && (pbVar8[2] == 0x74)) && (pbVar8[3] == 0x3b)) {
          (*(byte * PTR32 *)&gen_args[1]) = &REFG(undefined, 0x4);
          (*(char * PTR32 *)&gen_args[4]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[4]), 1, 3),0x3e)));
          pcVar7 = (*(char * PTR32 *)&gen_args[4]);
        }
        else if (((bVar3 == 0x6c) && (pbVar8[2] == 0x74)) && (pbVar8[3] == 0x3b)) {
          (*(byte * PTR32 *)&gen_args[1]) = &REFG(undefined, 0x4);
          (*(char * PTR32 *)&gen_args[4]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[4]), 1, 3),0x3c)));
          pcVar7 = (*(char * PTR32 *)&gen_args[4]);
        }
        else {
          if (((bVar3 != 0x61) || (pbVar8[2] != 0x6d)) ||
             ((pbVar8[3] != 0x70 || (pbVar8[4] != 0x3b)))) goto LAB_00a2987d;
          (*(byte * PTR32 *)&gen_args[1]) = &REFG(undefined, 0x5);
          (*(char * PTR32 *)&gen_args[4]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[4]), 1, 3),0x26)));
          pcVar7 = (*(char * PTR32 *)&gen_args[4]);
        }
      }
      else {
LAB_00a2987d: ;
        cVar4 = *pcVar5;
        pcVar7 = pcVar5;
        while (cVar4 != '\0') {
          if ((int)cVar4 == (uint)bVar2) {
            (*(byte * PTR32 *)&gen_args[1]) = (byte *)0x1;
            if ((char)(*(undefined4 *)&gen_args[5]) == '\0') {
              return 1;
            }
            pcVar7 = (char *)(uint)*pbVar8;
            goto LAB_00a297f9;
          }
          pcVar1 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          cVar4 = *pcVar1;
        }
        (*(byte * PTR32 *)&gen_args[1]) = (byte *)0x1;
        pcVar7 = (char *)(uint)*pbVar8;
      }
      break;
    case 2: ;
      bVar2 = pbVar8[1];
      if (bVar2 == 0x16) {
        return 2;
      }
      if (bVar2 == 0x1d) {
        (*(byte * PTR32 *)&gen_args[1]) = &REFG(undefined, 0x4);
        (*(char * PTR32 *)&gen_args[4]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[4]), 1, 3),0x1d)));
        pcVar7 = (*(char * PTR32 *)&gen_args[4]);
      }
      else {
        if (bVar2 != 0x1f) {
          if (pbVar8[1] == 0x11) {
            F_004816e0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            uVar6 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,pbVar8 + 2,((undefined4 *)(gen_frame + 0x0)),&(*(byte * PTR32 *)&gen_args[1]),1);
            (*(byte * PTR32 *)&gen_args[1]) = (*(byte * PTR32 *)&gen_args[1]) + uVar6 + 3;
            F_00492c50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
            return 3;
          }
          return 4;
        }
        (*(byte * PTR32 *)&gen_args[1]) = &REFG(undefined, 0x4);
        (*(char * PTR32 *)&gen_args[4]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[4]), 1, 3),0x1e)));
        pcVar7 = (*(char * PTR32 *)&gen_args[4]);
      }
      break;
    case 10: ;
    case 0xd: ;
      return 3;
    }
LAB_00a297f9: ;
    F_0042d160((*(undefined * PTR32 *)&gen_args[2]) GEN_EDX_ARG,pcVar7);
    *(*(int * PTR32 *)&gen_args[3]) = (int)((*(byte * PTR32 *)&gen_args[1]) + *(*(int * PTR32 *)&gen_args[3]));
    pbVar8 = pbVar8 + (int)(*(byte * PTR32 *)&gen_args[1]);
  } while( true );
}

/* ref: FUN_00a29960 */
GEN_FRAME uint GEN_THISCALL F_00a29960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa29960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined4 uVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  ((int *)(gen_frame + 0x2c))[0] = 0;
  ((int *)(gen_frame + 0x2c))[1] = 0;
  ((int *)(gen_frame + 0x2c))[2] = 0;
  F_00a32fd0(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,param_1);
  F_00a32fd0(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,param_2);
  F_00a28b70(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x50)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  ((undefined1 *)(gen_frame + 0x3c))[0] = 0;
  F_00a2edd0(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)),0,0xffffffff);
  F_00a327e0(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
  F_00a327e0(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1c)));
  F_00a31a20(((undefined1 *)(gen_frame + 0x78)) GEN_EDX_ARG,((int *)(gen_frame + 0x2c)));
  uVar2 = 0;
  uVar1 = F_00a33c20((undefined *)((int)this + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x3c)));
  F_00a33a70((undefined *)((int)this + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),uVar1,uVar2);
  F_00a32920(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
  if (((int *)(gen_frame + 0x2c))[0] != 0) {
    F_00429760(((int *)(gen_frame + 0x2c))[0],(((int *)(gen_frame + 0x2c))[2] - ((int *)(gen_frame + 0x2c))[0] >> 2) * 4,0x2c4);
  }
  ((int *)(gen_frame + 0x2c))[0] = 0;
  ((int *)(gen_frame + 0x2c))[1] = 0;
  ((int *)(gen_frame + 0x2c))[2] = 0;
  F_00a31ca0(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  uVar1 = F_00a31ca0(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a29aa0 */
GEN_NOFRAME uint GEN_THISCALL F_00a29aa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa29aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  F_00a294d0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10e4074));
  puVar1 = (undefined4 *)((int)this + 0x34);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  F_0042b630((int)this + 0x4c GEN_EDX_ARG);
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x44))) = ((code *)REFP(0xa2ca60));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x74))) = ((code *)REFP(0xa2cb10));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x7c))) = ((code *)REFP(0xa2c980));
  return (uint)this;
}

/* ref: FUN_00a29b20 */
GEN_NOFRAME uint GEN_THISCALL F_00a29b20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa29b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10e4074));
  F_0042c880((undefined *)((int)this + 0x4c) GEN_EDX_FWD);
  F_00492c50((undefined *)((int)this + 0x34) GEN_EDX_ARG);
  F_00429760(*(undefined4 *)((int)this + 0x34),8,0x2c4);
  *(undefined4 *)((int)this + 0x34) = 0;
  uVar1 = F_00a29530(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a29b60 */
GEN_FRAME uint GEN_THISCALL F_00a29b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa29b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10e3ec8));
  F_00a294d0((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10e41c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[40])REFP(0x10e411c));
  *(undefined4 *)((int)this + 0x34) = param_1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[2])REFP(0x10e3f48));
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  uVar1 = F_004296a0(0x68,0,0x2c4);
  *(uint *)((int)this + 0x48) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x48) + 4))) = *(int *)((int)this + 0x48);
  *((int *)GEN_TOP((*(int *)((int)this + 0x48) + 8))) = *(int *)((int)this + 0x48);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x48) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x48) + 0x65))) = 1;
  F_00a25230((undefined *)((int)this + 0x54) GEN_EDX_ARG);
  F_0042b630((int)this + 0xc0 GEN_EDX_ARG);
  F_0042b630((int)this + 0x114 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x168) = 0;
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x1c))) = ((code *)REFP(0xa2ca40));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x20))) = ((code *)REFP(0xa2cad0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x24))) = ((code *)REFP(0xa2cb60));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x40))) = ((code *)REFP(0xa2c9d0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x44))) = ((code *)REFP(0xa2ca60));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x48))) = ((code *)REFP(0xa2caf0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x78))) = ((code *)REFP(0xa2cb80));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x4c))) = ((code *)REFP(0xa2c9f0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x50))) = ((code *)REFP(0xa2ca70));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x54))) = ((code *)REFP(0xa2cb00));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x60))) = ((code *)REFP(0xa2ca80));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x80))) = ((code *)REFP(0xa2ca00));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x84))) = ((code *)REFP(0xa2ca90));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x88))) = ((code *)REFP(0xa2cb20));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x8c))) = ((code *)REFP(0xa2c990));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x90))) = ((code *)REFP(0xa2ca10));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x94))) = ((code *)REFP(0xa2caa0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x98))) = ((code *)REFP(0xa2cb30));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xa0))) = ((code *)REFP(0xa2c9a0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xa4))) = ((code *)REFP(0xa2ca20));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xa8))) = ((code *)REFP(0xa2cab0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xac))) = ((code *)REFP(0xa2cb40));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xb0))) = ((code *)REFP(0xa2c9b0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xb4))) = ((code *)REFP(0xa2ca30));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xb8))) = ((code *)REFP(0xa2cac0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xbc))) = ((code *)REFP(0xa2cb50));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xc0))) = ((code *)REFP(0xa2c9c0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xc4))) = ((code *)REFP(0xa2ca50));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 200))) = ((code *)REFP(0xa2cae0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xcc))) = ((code *)REFP(0xa2cb70));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xd0))) = ((code *)REFP(0xa2c9e0));
  F_0042d160((undefined *)((int)this + 0xc0) GEN_EDX_ARG,2);
  F_0042d160((undefined *)((int)this + 0xc0) GEN_EDX_ARG,0x1d);
  F_0042d160((undefined *)((int)this + 0xc0) GEN_EDX_ARG,1);
  F_0042d160((undefined *)((int)this + 0xc0) GEN_EDX_ARG,3);
  F_00c48350((undefined *)((int)this + 0x16c),0,0x40);
  return (uint)this;
}

/* ref: FUN_00a29dc0 */
GEN_FRAME uint GEN_THISCALL F_00a29dc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa29dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10e41c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[40])REFP(0x10e411c));
  F_0042c880((undefined *)((int)this + 0x114) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0xc0) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[1])REFP(0x10e3fc4));
  F_0042c880((undefined *)((int)this + 0x6c) GEN_EDX_ARG);
  F_00a315a0((undefined *)((int)this + 0x58) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x5c),
               *(undefined4 * PTR32 *)((int)this + 0x5c));
  F_00429760(*(undefined4 *)((int)this + 0x5c),0xac,0x2c4);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[2])REFP(0x10e3f48));
  F_00a22980((undefined *)((int)this + 0x38) GEN_EDX_ARG);
  F_00a30fa0((undefined *)((int)this + 0x44) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x48),
               *(undefined4 * PTR32 *)((int)this + 0x48));
  F_00429760(*(undefined4 *)((int)this + 0x48),0x68,0x2c4);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  uVar1 = F_00a29530((undefined *)((int)this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10e3ec8));
  return uVar1;
}

/* ref: FUN_00a29e80 */
GEN_FRAME uint GEN_THISCALL F_00a29e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa29e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined4 * this_00;
  uint * puVar1;
  undefined * pvVar2;
  undefined4 * PTR32 * PTR32 * pppuVar3;
  byte bVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar5;
  int iVar6;
  uint * puVar7;
  undefined4 * puVar8;
  char * pcVar9;
  uint * puVar10;
  uint uVar11;
  uint * PTR32 * ppuVar12;
  uint uVar13;
  int iVar14;
  uint * puVar15;
  ulonglong uVar16;
  
  uVar13 = ((uint *)(gen_frame + 0x54))[0];
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  uVar11 = *(uint *)(param_1 + 0x14);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(uint *)(gen_frame + 0x68)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x54))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x54))[0] = uVar13 & 0xffffff00;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(int *)(gen_frame + 0x34)) = 0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)) = (uint * PTR32 *)0x0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) = (uint * PTR32 *)0x0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x44)) = (uint * PTR32 *)0x0;
  pcVar9 = param_1;
  if (0xf < uVar11) {
    pcVar9 = *(char * PTR32 *)param_1;
  }
  if (*pcVar9 == '<') {
    F_00a28350(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x1c)),pcVar9);
    F_00a2ec30(((uint *)(gen_frame + 0x54)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)),0,0xffffffff);
    pppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
    (*(uint *)(gen_frame + 0xd0)) = 0xf;
    (*(undefined4 *)(gen_frame + 0xcc)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar3 & 0xffffff00);
    F_00a2edd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc)) GEN_EDX_ARG,param_2,0,0xffffffff);
    bVar4 = F_00a28b70(this GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc)));
    if (bVar4 == 0) {
      if (0xf < (*(uint *)(gen_frame + 0xd0))) {
        F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0],(*(uint *)(gen_frame + 0xd0)) + 1,0x2c4);
      }
      pppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
      (*(uint *)(gen_frame + 0xd0)) = 0xf;
      (*(undefined4 *)(gen_frame + 0xcc)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar3 & 0xffffff00);
      F_00a328d0(&(*(int *)(gen_frame + 0x1c)) GEN_EDX_ARG);
      uVar11 = (*(uint *)(gen_frame + 0x68));
      if (0xf < (*(uint *)(gen_frame + 0x68))) {
        uVar16 = F_00429760(((uint *)(gen_frame + 0x54))[0],(*(uint *)(gen_frame + 0x68)) + 1,0x2c4);
        F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
        return (uint)uVar16;
      }
    }
    else {
      ppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
      if ((*(uint *)(gen_frame + 0xd0)) < 0x10) {
        ppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc));
      }
      F_00a28350(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2c)),ppppuVar5);
      iVar14 = (*(int *)(gen_frame + 0x30)) - (*(int *)(gen_frame + 0x2c)) >> 0x1f;
      uVar11 = 0;
      if (((*(int *)(gen_frame + 0x30)) - (*(int *)(gen_frame + 0x2c))) / 0x1c + iVar14 != iVar14) {
        ((uint * PTR32 *)(gen_frame + 0x4c))[0] = (uint *)0xffffffff;
        do {
          ppuVar12 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40));
          if ((((uint * PTR32 *)(gen_frame + 0x4c)) < (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40))) && ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)) <= ((uint * PTR32 *)(gen_frame + 0x4c)))) {
            iVar14 = (int)((uint * PTR32 *)(gen_frame + 0x4c)) - (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c));
            if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x44))) {
              F_00a31d10(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,1);
              ppuVar12 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40));
            }
            if (ppuVar12 != (uint * PTR32 *)0x0) {
              *ppuVar12 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))[iVar14 >> 2];
            }
          }
          else {
            if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x44))) {
              F_00a31d10(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,1);
              ppuVar12 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40));
            }
            if (ppuVar12 != (uint * PTR32 *)0x0) {
              *ppuVar12 = (uint *)0xffffffff;
            }
          }
          uVar11 = uVar11 + 1;
          (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) = ppuVar12 + 1;
        } while (uVar11 < (uint)(((*(int *)(gen_frame + 0x30)) - (*(int *)(gen_frame + 0x2c))) / 0x1c));
      }
      iVar14 = ((*(int *)(gen_frame + 0x30)) - (*(int *)(gen_frame + 0x2c))) / 0x1c;
      (*(int *)(gen_frame + 0x14)) = 1;
      if (1 < iVar14) {
        puVar1 = ((uint *)GEN_TOP((((*(int *)(gen_frame + 0x20)) - (*(int *)(gen_frame + 0x1c))) / 0x1c)));
        ((uint * PTR32 *)(gen_frame + 0x4c))[0] = (uint *)((*(int *)(gen_frame + 0x2c)) + 0x1c);
        do {
          (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)0x1;
          if ((uint *)0x1 < puVar1) {
            puVar15 = (uint *)((*(int *)(gen_frame + 0x1c)) + 0x2c);
            ((uint * PTR32 *)(gen_frame + 0x4c))[1] = puVar15;
            do {
              puVar7 = ((uint * PTR32 *)(gen_frame + 0x4c))[0];
              if (0xf < ((uint * PTR32 *)(gen_frame + 0x4c))[0][5]) {
                puVar7 = ((uint *)GEN_TOP(*((uint * PTR32 *)(gen_frame + 0x4c))[0]));
              }
              uVar11 = *puVar15;
              uVar13 = ((uint * PTR32 *)(gen_frame + 0x4c))[0][4];
              if (uVar11 < ((uint * PTR32 *)(gen_frame + 0x4c))[0][4]) {
                uVar13 = uVar11;
              }
              if (puVar15[1] < 0x10) {
                puVar10 = puVar15 - 4;
              }
              else {
                puVar10 = (uint *)puVar15[-4];
              }
              for (; 3 < uVar13; uVar13 = uVar13 - 4) {
                if (*puVar10 != *puVar7) goto LAB_00a2a19e;
                puVar7 = puVar7 + 1;
                puVar10 = puVar10 + 1;
              }
              if (uVar13 == 0) {
LAB_00a2a1ed: ;
                uVar13 = 0;
              }
              else {
LAB_00a2a19e: ;
                iVar6 = (uint)(byte)*puVar10 - (uint)(byte)*puVar7;
                if (iVar6 == 0) {
                  if (uVar13 < 2) goto LAB_00a2a1ed;
                  iVar6 = (uint)*(byte *)((int)puVar10 + 1) - (uint)*(byte *)((int)puVar7 + 1);
                  if (iVar6 == 0) {
                    if (uVar13 < 3) goto LAB_00a2a1ed;
                    iVar6 = (uint)*(byte *)((int)puVar10 + 2) - (uint)*(byte *)((int)puVar7 + 2);
                    if (iVar6 == 0) {
                      if (uVar13 < 4) goto LAB_00a2a1ed;
                      iVar6 = (uint)*(byte *)((int)puVar10 + 3) - (uint)*(byte *)((int)puVar7 + 3);
                    }
                  }
                }
                uVar13 = iVar6 >> 0x1f | 1;
              }
              if (((uVar13 == 0) && (((uint * PTR32 *)(gen_frame + 0x4c))[0][4] <= uVar11)) && (uVar11 == ((uint * PTR32 *)(gen_frame + 0x4c))[0][4])) {
                uVar11 = *puVar15;
                uVar13 = (uint)(uVar11 != 0);
                if (puVar15[1] < 0x10) {
                  puVar7 = puVar15 - 4;
                }
                else {
                  puVar7 = (uint *)puVar15[-4];
                }
                puVar10 = (uint *)&REFG(undefined1, 0x10e3d1c);
                for (; 3 < uVar13; uVar13 = uVar13 - 4) {
                  if (*puVar7 != *puVar10) goto LAB_00a2a25c;
                  puVar10 = puVar10 + 1;
                  puVar7 = puVar7 + 1;
                }
                if (uVar13 == 0) {
LAB_00a2a2ab: ;
                  uVar13 = 0;
                }
                else {
LAB_00a2a25c: ;
                  iVar6 = (uint)(byte)*puVar7 - (uint)(byte)*puVar10;
                  if (iVar6 == 0) {
                    if (uVar13 < 2) goto LAB_00a2a2ab;
                    iVar6 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar10 + 1);
                    if (iVar6 == 0) {
                      if (uVar13 < 3) goto LAB_00a2a2ab;
                      iVar6 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar10 + 2);
                      if (iVar6 == 0) {
                        if (uVar13 < 4) goto LAB_00a2a2ab;
                        iVar6 = (uint)*(byte *)((int)puVar7 + 3) - (uint)*(byte *)((int)puVar10 + 3)
                        ;
                      }
                    }
                  }
                  uVar13 = iVar6 >> 0x1f | 1;
                }
                if (((uVar13 != 0) || (uVar11 == 0)) || (uVar11 != 1)) {
                  uVar11 = *puVar15;
                  if (puVar15[1] < 0x10) {
                    puVar7 = puVar15 - 4;
                  }
                  else {
                    puVar7 = (uint *)puVar15[-4];
                  }
                  ((uint * PTR32 *)(gen_frame + 0x4c))[1] = puVar15;
                  uVar13 = F_0040d320(puVar7,&REFG(undefined1, 0x10e3d20),(uint)(uVar11 != 0));
                  if (((uVar13 != 0) || (uVar11 == 0)) || (uVar11 != 1)) {
                    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))[(*(int *)(gen_frame + 0x14))] = (*(uint * PTR32 *)(gen_frame + 0x18));
                  }
                }
              }
              puVar7 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x18)) + 1);
              puVar15 = puVar15 + 7;
              (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar7;
              ((uint * PTR32 *)(gen_frame + 0x4c))[1] = puVar15;
            } while (puVar7 < puVar1);
          }
          ((uint * PTR32 *)(gen_frame + 0x4c))[0] = ((uint * PTR32 *)(gen_frame + 0x4c))[0] + 7;
          iVar6 = (*(int *)(gen_frame + 0x14)) + 1;
          (*(int *)(gen_frame + 0x14)) = iVar6;
        } while (iVar6 < iVar14);
      }
      uVar11 = ((uint *)(gen_frame + 0x70))[0];
      (*(uint *)(gen_frame + 0x84)) = 0xf;
      (*(undefined4 *)(gen_frame + 0x80)) = 0;
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x70))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0x70))[0] = uVar11 & 0xffffff00;
      F_00a2edd0(((uint *)(gen_frame + 0x70)) GEN_EDX_ARG,((uint *)(gen_frame + 0x54)),0,0xffffffff);
      F_00a327e0(&(*(int *)(gen_frame + 0x8c)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x1c)));
      F_00a327e0(&(*(int *)(gen_frame + 0x9c)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2c)));
      F_00a31a20(((int *)(gen_frame + 0xac)) GEN_EDX_ARG,&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)));
      pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x10));
      puVar8 = (undefined4 *)F_004296a0(0x5c,0,0x2c4);
      *puVar8 = *(undefined4 *)((int)pvVar2 + 8);
      puVar8[1] = *(undefined4 *)((int)pvVar2 + 8);
      this_00 = puVar8 + 3;
      puVar8[2] = *(undefined4 *)((int)pvVar2 + 8);
      *(undefined2 *)(puVar8 + 0x16) = 0;
      if (this_00 != (undefined4 *)0x0) {
        puVar8[8] = 0xf;
        puVar8[7] = 0;
        *(undefined1 *)this_00 = 0;
        F_00a2edd0(this_00 GEN_EDX_ARG,((uint *)(gen_frame + 0x70)),0,0xffffffff);
        F_00a327e0(puVar8 + 10 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8c)));
        F_00a327e0(puVar8 + 0xe GEN_EDX_ARG,&(*(int *)(gen_frame + 0x9c)));
        F_00a31a20(puVar8 + 0x12 GEN_EDX_ARG,((int *)(gen_frame + 0xac)));
      }
      F_00a33a70((undefined *)((int)pvVar2 + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),puVar8,0);
      if (((int *)(gen_frame + 0xac))[0] != 0) {
        F_00429760(((int *)(gen_frame + 0xac))[0],(((int *)(gen_frame + 0xac))[2] - ((int *)(gen_frame + 0xac))[0] >> 2) * 4,0x2c4);
      }
      ((int *)(gen_frame + 0xac))[0] = 0;
      ((int *)(gen_frame + 0xac))[1] = 0;
      ((int *)(gen_frame + 0xac))[2] = 0;
      if ((*(int *)(gen_frame + 0x9c)) != 0) {
        F_00a31280((*(int *)(gen_frame + 0x9c)),(*(undefined4 *)(gen_frame + 0xa0)),((undefined1 *)(gen_frame + 0xa8)),(*(undefined * PTR32 *)(gen_frame + 0x10)));
        F_00429760((*(int *)(gen_frame + 0x9c)),(((*(int *)(gen_frame + 0xa4)) - (*(int *)(gen_frame + 0x9c))) / 0x1c) * 0x1c,0x2c4);
      }
      (*(int *)(gen_frame + 0x9c)) = 0;
      (*(undefined4 *)(gen_frame + 0xa0)) = 0;
      (*(int *)(gen_frame + 0xa4)) = 0;
      if ((*(int *)(gen_frame + 0x8c)) != 0) {
        F_00a31280((*(int *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),((undefined1 *)(gen_frame + 0x98)),(*(undefined * PTR32 *)(gen_frame + 0x10)));
        F_00429760((*(int *)(gen_frame + 0x8c)),(((*(int *)(gen_frame + 0x94)) - (*(int *)(gen_frame + 0x8c))) / 0x1c) * 0x1c,0x2c4);
      }
      (*(int *)(gen_frame + 0x8c)) = 0;
      (*(undefined4 *)(gen_frame + 0x90)) = 0;
      (*(int *)(gen_frame + 0x94)) = 0;
      if (0xf < (*(uint *)(gen_frame + 0x84))) {
        F_00429760(((uint *)(gen_frame + 0x70))[0],(*(uint *)(gen_frame + 0x84)) + 1,0x2c4);
      }
      if (0xf < (*(uint *)(gen_frame + 0xd0))) {
        F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0],(*(uint *)(gen_frame + 0xd0)) + 1,0x2c4);
      }
      pppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
      (*(uint *)(gen_frame + 0xd0)) = 0xf;
      (*(undefined4 *)(gen_frame + 0xcc)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar3 & 0xffffff00);
      if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)) != (uint * PTR32 *)0x0) {
        F_00429760((*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)),((int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x44)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))) >> 2) * 4,0x2c4);
      }
      iVar14 = (*(int *)(gen_frame + 0x2c));
      if ((*(int *)(gen_frame + 0x2c)) != 0) {
        F_00a31280((*(int *)(gen_frame + 0x2c)),(*(int *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x38)),(*(undefined * PTR32 *)(gen_frame + 0x10)));
        F_00429760(iVar14,(((*(int *)(gen_frame + 0x34)) - iVar14) / 0x1c) * 0x1c,0x2c4);
      }
      iVar14 = (*(int *)(gen_frame + 0x1c));
      if ((*(int *)(gen_frame + 0x1c)) != 0) {
        F_00a31280((*(int *)(gen_frame + 0x1c)),(*(int *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x28)),(*(undefined * PTR32 *)(gen_frame + 0x10)));
        F_00429760(iVar14,(((*(int *)(gen_frame + 0x24)) - iVar14) / 0x1c) * 0x1c,0x2c4);
      }
      uVar11 = (*(uint *)(gen_frame + 0x68));
      if (0xf < (*(uint *)(gen_frame + 0x68))) {
        uVar16 = F_00429760(((uint *)(gen_frame + 0x54))[0],(*(uint *)(gen_frame + 0x68)) + 1,0x2c4);
        F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
        return (uint)uVar16;
      }
    }
  }
  else {
    F_00a29960(this GEN_EDX_ARG,param_1,param_2);
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)) = (uint * PTR32 *)0x0;
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) = (uint * PTR32 *)0x0;
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x44)) = (uint * PTR32 *)0x0;
    F_00a31ca0(&(*(int *)(gen_frame + 0x2c)) GEN_EDX_ARG);
    uVar11 = F_00a31ca0(&(*(int *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
  return uVar11;
}

/* ref: FUN_00a2a6c0 */
GEN_FRAME uint GEN_THISCALL F_00a2a6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa2a6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int iVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(uint *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = param_3;
  (*(uint *)(gen_frame + 0x28)) = param_1;
  (*(uint *)(gen_frame + 0x1c)) = param_1 + param_2;
  F_0042b630(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_FWD);
  uVar4 = param_1;
  uVar5 = param_1;
  if (param_1 < (*(uint *)(gen_frame + 0x1c))) {
    do {
      uVar4 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar5,(*(undefined4 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),0);
      (*(uint *)(gen_frame + 0x24)) = uVar4;
      if (uVar4 == 0) {
        uVar4 = F_00a23ff0((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar5,(*(undefined4 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x2c)),0);
        (*(uint *)(gen_frame + 0x24)) = uVar4;
        if (uVar4 != 0) {
          (*(undefined4 *)(gen_frame + 0x80)) = 0;
          (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = (undefined4 *)0x0;
          (*(char *)(gen_frame + 0x88)) = -1;
          F_00490f90(&(*(undefined4 *)(gen_frame + 0x80)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2c)));
          if (*(uint *)((int)param_4 + 8) <= *(int *)((int)param_4 + 0x10) + 1U) {
            F_00486f80(param_4 GEN_EDX_ARG,1);
          }
          uVar5 = *(int *)((int)param_4 + 0xc) + *(int *)((int)param_4 + 0x10);
          if (*(uint *)((int)param_4 + 8) <= uVar5) {
            uVar5 = uVar5 - *(uint *)((int)param_4 + 8);
          }
          if (*((int *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4))) == 0) {
            uVar4 = F_004296a0(0xc,0,0x2c4);
            *((uint *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4))) = uVar4;
          }
          puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4)));
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined1 *)(puVar2 + 2) = 0xff;
            if (((*(char *)(gen_frame + 0x88)) != -1) && (puVar2 != &(*(undefined4 *)(gen_frame + 0x80)))) {
              (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
              (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x84));
              if ((*(char *)(gen_frame + 0x88)) == '\0') {
                F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
              }
              else if ((*(char *)(gen_frame + 0x88)) == '\x01') {
                F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
              }
            }
          }
          *(int *)((int)param_4 + 0x10) = *(int *)((int)param_4 + 0x10) + 1;
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x84)) != (undefined4 *)0x0) {
            if (((*(char *)(gen_frame + 0x88)) != '\0') && ((*(char *)(gen_frame + 0x88)) == '\x01')) {
              pvVar3 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x84));
              *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) - 1;
              if (*(int *)((int)pvVar3 + 0x54) < 1) {
                F_0042c880(pvVar3 GEN_EDX_ARG);
                F_00406ad0(pvVar3);
              }
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = (undefined4 *)0x0;
            (*(char *)(gen_frame + 0x88)) = -1;
          }
          goto LAB_00a2a91d;
        }
      }
      else {
        iVar1 = *(int *)((int)param_4 + 0x10);
        (*(undefined4 *)(gen_frame + 0x8c)) = 0;
        (*(undefined4 *)(gen_frame + 0x8c)) = (*(undefined4 *)(gen_frame + 0x14));
        (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = &(*(undefined4 *)(gen_frame + 0x8c));
        (*(char *)(gen_frame + 0x94)) = '\0';
        if (*(uint *)((int)param_4 + 8) <= iVar1 + 1U) {
          F_00486f80(param_4 GEN_EDX_ARG,1);
        }
        uVar5 = *(int *)((int)param_4 + 0xc) + *(int *)((int)param_4 + 0x10);
        if (*(uint *)((int)param_4 + 8) <= uVar5) {
          uVar5 = uVar5 - *(uint *)((int)param_4 + 8);
        }
        if (*((int *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4))) == 0) {
          uVar4 = F_004296a0(0xc,0,0x2c4);
          *((uint *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4))) = uVar4;
        }
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4)));
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined1 *)(puVar2 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0x94)) != -1) && (puVar2 != &(*(undefined4 *)(gen_frame + 0x8c)))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar2;
            (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x90));
            if ((*(char *)(gen_frame + 0x94)) == '\0') {
              F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
            }
            else if ((*(char *)(gen_frame + 0x94)) == '\x01') {
              F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
            }
          }
        }
        *(int *)((int)param_4 + 0x10) = *(int *)((int)param_4 + 0x10) + 1;
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) != (undefined4 *)0x0) {
          if (((*(char *)(gen_frame + 0x94)) != '\0') && ((*(char *)(gen_frame + 0x94)) == '\x01')) {
            pvVar3 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x90));
            *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) - 1;
            if (*(int *)((int)pvVar3 + 0x54) < 1) {
              F_0042c880(pvVar3 GEN_EDX_ARG);
              F_00406ad0(pvVar3);
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (undefined4 *)0x0;
          (*(char *)(gen_frame + 0x94)) = -1;
        }
LAB_00a2a91d: ;
        uVar5 = (*(uint *)(gen_frame + 0x28)) + (*(uint *)(gen_frame + 0x24));
        (*(uint *)(gen_frame + 0x28)) = uVar5;
      }
      uVar4 = (*(uint *)(gen_frame + 0x8));
    } while (uVar5 < (*(uint *)(gen_frame + 0x1c)));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return uVar5 - uVar4;
}

/* ref: FUN_00a2a960 */
GEN_FRAME uint GEN_THISCALL F_00a2a960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2a960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e4204));
  F_00a32bf0((undefined *)((int)this + 0x14) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x18),
               *(undefined4 * PTR32 *)((int)this + 0x18));
  F_00429760(*(undefined4 *)((int)this + 0x18),0x48,0x2c4);
  F_00a33cd0((undefined *)((int)this + 4) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x5c,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2a9c0 */
GEN_FRAME uint GEN_THISCALL F_00a2a9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa2a9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = param_4;
  F_0042b630(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_FWD);
  uVar1 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x84)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a24d30(this GEN_EDX_ARG,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x24)),1);
    if (uVar2 != 0) {
      uVar3 = F_00a24d30(this GEN_EDX_ARG,param_1 + uVar1 + uVar2,(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x20)),1);
      if (uVar3 != 0) {
        iVar4 = uVar1 + uVar2 + uVar3;
        F_004816e0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        uVar1 = F_00a2a6c0(this GEN_EDX_ARG,param_1 + iVar4,param_2 - iVar4,(*(undefined4 *)(gen_frame + 0x2c)),((undefined4 *)(gen_frame + 0x8)));
        F_0042b630(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 4) + 0x18))))
                          ((int)this - 4,((undefined1 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x20)),((undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x30)));
        if (uVar2 == 1) {
          F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
          F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
          F_00492c50(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
          F_00429760(((undefined4 *)(gen_frame + 0x8))[0],8,0x2c4);
          ((undefined4 *)(gen_frame + 0x8))[0] = 0;
          F_0042c880(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
          F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
          return iVar4 + uVar1;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
        F_00492c50(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        F_00429760(((undefined4 *)(gen_frame + 0x8))[0],8,0x2c4);
        ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      }
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
  return 0;
}

/* ref: Component::Text::TextModule::vf14 */
GEN_FRAME uint GEN_THISCALL F_00a2ab70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa2ab70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  undefined * pTVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = param_6;
  F_0042b630(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_FWD);
  uVar3 = F_00a23ff0(this + 4 GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0xcc)),1);
  if (uVar3 != 0) {
    uVar4 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x20)) + 4 GEN_EDX_ARG,param_1 + uVar3,param_3,((undefined1 *)(gen_frame + 0x12c)),1);
    if (uVar4 != 0) {
      uVar5 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x20)) + 4 GEN_EDX_ARG,param_1 + uVar3 + uVar4,param_3,&(*(undefined4 *)(gen_frame + 0x124)),1);
      if (uVar5 != 0) {
        iVar7 = uVar3 + uVar4 + uVar5;
        uVar3 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x20)) + 4 GEN_EDX_ARG,param_1 + iVar7,param_3,((undefined1 *)(gen_frame + 0x128)),1);
        if (uVar3 != 0) {
          iVar7 = iVar7 + uVar3;
          if ((char)param_4 != '\0') {
            uVar3 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x20)) + 4 GEN_EDX_ARG,param_1 + iVar7,param_3,((int *)(gen_frame + 0x130)),1);
            if (uVar3 == 0) goto LAB_00a2adc2;
            ((int *)(gen_frame + 0x130))[0] = ((int *)(gen_frame + 0x130))[0] - 1;
            iVar7 = iVar7 + uVar3;
          }
          uVar3 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x20)) + 4 GEN_EDX_ARG,param_1 + iVar7,param_3,&(*(int *)(gen_frame + 0x120)),1);
          if (uVar3 != 0) {
            (*(int *)(gen_frame + 0x120)) = (*(int *)(gen_frame + 0x120)) - 1;
            iVar7 = iVar7 + uVar3;
            F_004816e0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
            uVar3 = F_00a2a6c0((*(undefined * PTR32 *)(gen_frame + 0x20)) + 4 GEN_EDX_ARG,param_1 + iVar7,param_2 - iVar7,param_3,((undefined1 *)(gen_frame + 0x4)));
            F_0042b630(((undefined1 *)(gen_frame + 0x78)) GEN_EDX_ARG);
            pTVar1 = (*(undefined * PTR32 *)(gen_frame + 0x20));
            piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x34) + 0xc))))
                                      (*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x34) GEN_EDX_ARG)));
            if (*piVar6 == param_5) {
              F_0042b630(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
              bVar2 = F_00a227a0(pTVar1 + 0x38 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xcc)),((undefined1 *)(gen_frame + 0x24)));
              if (bVar2 != 0) {
                uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)pTVar1 + 0xc))(pTVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x78)));
                if (uVar4 == 1) {
                  F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x78)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
                  goto LAB_00a2ad07;
                }
              }
              F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
            }
            else {
              uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)pTVar1 + 0x18))
                                (pTVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xcc)),(*(undefined4 *)(gen_frame + 0x124)),0xffff,((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x78)));
              if (uVar4 == 1) {
                F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x78)));
LAB_00a2ad07: ;
                F_0042c880(((undefined1 *)(gen_frame + 0x78)) GEN_EDX_ARG);
                F_00493180(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
                F_0042c880(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG);
                F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c) GEN_EDX_ARG);
                return iVar7 + uVar3;
              }
            }
            F_0042c880(((undefined1 *)(gen_frame + 0x78)) GEN_EDX_ARG);
            F_00493180(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
          }
        }
      }
    }
  }
LAB_00a2adc2: ;
  F_0042c880(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a2ade0 */
GEN_FRAME uint GEN_THISCALL F_00a2ade0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2ade0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e4204));
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x5c,0,0x2c4);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x58))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x59))) = 1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar2 = F_004296a0(0x48,0,0x2c4);
  uVar1 = ((uint *)(gen_frame + 0x0))[0];
  *(uint *)((int)this + 0x18) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 4))) = *(int *)((int)this + 0x18);
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8))) = *(int *)((int)this + 0x18);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x44))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x45))) = 1;
  (*(uint *)(gen_frame + 0x14)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x0))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10e3cec),1);
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,&REFG(undefined, 0x10e3cf0),2);
  F_00a29960(this GEN_EDX_ARG,((uint *)(gen_frame + 0x1c)),((uint *)(gen_frame + 0x0)));
  if (0xf < (*(uint *)(gen_frame + 0x30))) {
    F_00429760(((uint *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    F_00429760(((uint *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x0))[0];
  (*(uint *)(gen_frame + 0x14)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x0))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10e3cf4),1);
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3cf8)),3);
  F_00a29960(this GEN_EDX_ARG,((uint *)(gen_frame + 0x1c)),((uint *)(gen_frame + 0x0)));
  if (0xf < (*(uint *)(gen_frame + 0x30))) {
    F_00429760(((uint *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    F_00429760(((uint *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x0))[0];
  (*(uint *)(gen_frame + 0x14)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x0))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10e3cfc),1);
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,&REFG(undefined, 0x10e3d00),4);
  F_00a29960(this GEN_EDX_ARG,((uint *)(gen_frame + 0x1c)),((uint *)(gen_frame + 0x0)));
  if (0xf < (*(uint *)(gen_frame + 0x30))) {
    F_00429760(((uint *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    F_00429760(((uint *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) + 1,0x2c4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a2b000 */
GEN_FRAME uint GEN_THISCALL F_00a2b000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2b000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  char cVar1;
  
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined4 *)((int)this + 0x44) = 0;
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    *((char *)GEN_TOP((*(int *)((int)this + 0x44) + 1 + (int)this))) = param_2[*(int *)((int)this + 0x44)];
    *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + 1;
    cVar1 = param_2[*(int *)((int)this + 0x44)];
  }
  return (uint)this;
}

/* ref: FUN_00a2b040 */
GEN_FRAME byte GEN_THISCALL F_00a2b040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b040u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 < *(int *)(in_ecx + 0x44)) {
    return *(byte *)(param_2 + 1 + in_ecx);
  }
  return 0x2e;
}

/* ref: FUN_00a2b060 */
GEN_FRAME uint GEN_THISCALL F_00a2b060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b060u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: Component::Text::TextModuleInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a2b090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10e3ec8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a2b0c0 */
GEN_FRAME uint GEN_THISCALL F_00a2b0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa2b0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x54) = param_2;
  *(undefined4 *)((int)this + 0x58) = param_3;
  *(undefined4 *)((int)this + 0x5c) = param_4;
  *(undefined4 *)((int)this + 0x60) = param_5;
  *(undefined4 *)((int)this + 100) = param_6;
  *(undefined1 *)((int)this + 0x68) = 0;
  return (uint)this;
}

/* ref: Component::Text::Localize::Noun::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a2b110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a2b1d0 */
GEN_FRAME uint GEN_THISCALL F_00a2b1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b1d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00a2b230 */
GEN_FRAME uint GEN_THISCALL F_00a2b230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0x1c;
}

/* ref: FUN_00a2b250 */
GEN_FRAME uint GEN_THISCALL F_00a2b250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b250u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00a2b290 */
GEN_FRAME uint GEN_THISCALL F_00a2b290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b290u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a2b300 */
GEN_FRAME byte GEN_THISCALL F_00a2b300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2b3a0 */
GEN_FRAME uint GEN_THISCALL F_00a2b3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b3a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a2b3f0 */
GEN_FRAME uint GEN_STDCALL F_00a2b3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b420 */
GEN_FRAME uint GEN_THISCALL F_00a2b420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b420u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a2b4b0 */
GEN_FRAME byte GEN_THISCALL F_00a2b4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2b4e0 */
GEN_FRAME byte GEN_THISCALL F_00a2b4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2b520 */
GEN_FRAME byte GEN_THISCALL F_00a2b520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2b580 */
GEN_FRAME uint GEN_STDCALL F_00a2b580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b5f0 */
GEN_FRAME uint GEN_STDCALL F_00a2b5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b610 */
GEN_FRAME uint F_00a2b610(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b610u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00a2b640 */
GEN_FRAME uint GEN_STDCALL F_00a2b640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xac,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b670 */
GEN_FRAME uint GEN_THISCALL F_00a2b670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa2b670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  
  if (param_2 == 1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      this = *(undefined * PTR32 *)this;
    }
    *(byte *)((int)this + param_1) = (byte)param_3;
    return (uint)(byte)param_3;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  pvVar1 = F_00c48350((undefined *)((int)this + param_1),(int)(char)(byte)param_3,param_2);
  return (uint)pvVar1;
}

/* ref: FUN_00a2b6d0 */
GEN_FRAME uint GEN_STDCALL F_00a2b6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b710 */
GEN_FRAME uint GEN_STDCALL F_00a2b710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b710u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2b780 */
GEN_FRAME uint GEN_STDCALL F_00a2b780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b780u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b7b0 */
GEN_FRAME uint F_00a2b7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b7b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x59;
}

/* ref: FUN_00a2b7c0 */
GEN_FRAME uint F_00a2b7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b7c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2b7d0 */
GEN_FRAME uint F_00a2b7d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b7d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00a2b7e0 */
GEN_FRAME uint F_00a2b7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b7e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

