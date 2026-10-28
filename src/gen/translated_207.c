#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest_TypeInfo::vf16 */
GEN_FRAME uint GEN_THISCALL F_01016b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x1016b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest_TypeInfo::vf15 */
GEN_FRAME uint GEN_THISCALL F_01016ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1016ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG,param_1,5,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest_TypeInfo::vf19 */
GEN_FRAME uint GEN_THISCALL F_01016c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1016c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,5,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_01016ca0 */
GEN_NOFRAME uint GEN_THISCALL F_01016ca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1016ca0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12b0af4));
  in_ecx[1] = 9999;
  in_ecx[2] = 9999;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_01016cc0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_01016cc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1016cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf2 */
GEN_FRAME uint GEN_THISCALL F_01016cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1016cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c238) + 0x10))))(&REFG(undefined * PTR32, 0x136c238),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_01016d00 */
GEN_FRAME uint GEN_THISCALL F_01016d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1016d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c238) + 0x10))))(&REFG(undefined * PTR32, 0x136c238),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf4 */
GEN_FRAME uint GEN_THISCALL F_01016d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1016d30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 6;
  case 2: ;
    return in_ecx + 8;
  case 3: ;
    return in_ecx + 10;
  case 4: ;
    return in_ecx + 0xc;
  case 5: ;
    return in_ecx + 0x10;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_01016d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1016d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf6 */
GEN_FRAME uint GEN_THISCALL F_01016da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1016da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *(short *)(this + 4) = (short)param_1[1];
    *(undefined2 *)(this + 6) = *(undefined2 *)((int)param_1 + 6);
    *(short *)(this + 8) = (short)param_1[2];
    uVar4 = (uint)*(ushort *)((int)param_1 + 10);
    *(ushort *)(this + 10) = *(ushort *)((int)param_1 + 10);
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf5 */
GEN_FRAME ushort GEN_THISCALL F_01016e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1016e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort uVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
  if ((short)uVar4 == (short)uVar5) {
    uVar1 = (ushort)param_2;
    uVar5 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      uVar1 = *(ushort *)(param_1 + 1);
      *(ushort *)(this + 4) = uVar1;
      return uVar1;
    case 1: ;
      *(undefined2 *)(this + 6) = *(undefined2 *)((int)param_1 + 6);
      return uVar1;
    case 2: ;
      *(short *)(this + 8) = (short)param_1[2];
      return uVar1;
    case 3: ;
      uVar1 = *(ushort *)((int)param_1 + 10);
      *(ushort *)(this + 10) = uVar1;
      return uVar1;
    case 4: ;
      *(int *)(this + 0xc) = param_1[3];
      return uVar1;
    case 5: ;
      *(int *)(this + 0x10) = param_1[4];
    }
  }
  return (ushort)uVar5;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf8 */
GEN_FRAME byte GEN_THISCALL F_01016ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1016ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_01016fd3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01016fd8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_01016fd3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01016fd8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_0101708a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
        return 1;
      }
    }
  }
LAB_0101708a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf22 */
GEN_FRAME byte GEN_THISCALL F_010170a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10170a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  ulonglong uVar2;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    *(short *)(this + 4) = (short)uVar2;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    *(short *)(this + 6) = (short)uVar2;
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    *(short *)(this + 8) = (short)uVar2;
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    *(short *)(this + 10) = (short)uVar2;
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0xc) = (int)uVar2;
    return 1;
  case 5: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x10) = (int)uVar2;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf17 */
GEN_FRAME byte GEN_THISCALL F_010171b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10171b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar7 = F_00e505e0(uVar3 + 2);
  *(short *)(this + 4) = (short)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e505e0(uVar6 + 3);
  *(short *)(this + 6) = (short)uVar7;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e505e0(uVar3 + 3);
  *(short *)(this + 8) = (short)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e505e0(uVar6 + 3);
  *(short *)(this + 10) = (short)uVar7;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  *(int *)(this + 0xc) = (int)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(int *)(this + 0x10) = (int)uVar7;
  if (param_2 != (uint *)0x0) {
    uVar3 = F_00c51da0(uVar3,0x7d);
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf10 */
GEN_FRAME uint GEN_THISCALL F_010172f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10172f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf23 */
GEN_FRAME byte GEN_THISCALL F_01017410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1017410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 4),(int)*(short *)(this + 4) >> 0x1f
            );
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1 GEN_EDX_ARG,1,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 6),(int)*(short *)(this + 6) >> 0x1f
            );
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1 GEN_EDX_ARG,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 8),(int)*(short *)(this + 8) >> 0x1f
            );
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1 GEN_EDX_ARG,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 10),
             (int)*(short *)(this + 10) >> 0x1f);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1 GEN_EDX_ARG,4,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1 GEN_EDX_ARG,5,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf9 */
GEN_FRAME uint GEN_THISCALL F_01017570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1017570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf11 */
GEN_FRAME byte GEN_THISCALL F_01017590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1017590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = (char *)F_0042a990(uVar5 GEN_EDX_ARG);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = (byte *)F_0042a990(uVar5 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_010176a3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_010176a8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_010176a3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_010176a8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_01017817;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_01017817: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf24 */
GEN_FRAME byte GEN_THISCALL F_01017830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1017830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,"value",REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    *(short *)(this + 4) = (short)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    *(short *)(this + 6) = (short)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    *(short *)(this + 8) = (short)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    *(short *)(this + 10) = (short)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0xc) = (int)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 1;
  case 5: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x10) = (int)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 1;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf18 */
GEN_FRAME byte GEN_THISCALL F_010179d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10179d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c3f8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e505e0(iVar5);
    *(short *)(this + 4) = (short)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c3f8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e505e0(iVar5);
    *(short *)(this + 6) = (short)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c3f8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e505e0(iVar5);
    *(short *)(this + 8) = (short)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c3f8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e505e0(iVar5);
    *(short *)(this + 10) = (short)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c3f8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 0xc) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c3f8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 0x10) = (int)uVar6;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf13 */
GEN_FRAME uint GEN_THISCALL F_01017c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1017c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_ARG,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf25 */
GEN_FRAME byte GEN_THISCALL F_01017d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1017d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pvVar1 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,"Int16");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 4),(int)*(short *)(this + 4) >> 0x1f
            );
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = (undefined *)F_00e9e450(param_1 GEN_EDX_ARG,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,"Int16");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 6),(int)*(short *)(this + 6) >> 0x1f
            );
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = (undefined *)F_00e9e450(param_1 GEN_EDX_ARG,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,"Int16");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 8),(int)*(short *)(this + 8) >> 0x1f
            );
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = (undefined *)F_00e9e450(param_1 GEN_EDX_ARG,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,"Int16");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 10),
             (int)*(short *)(this + 10) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = (undefined *)F_00e9e450(param_1 GEN_EDX_ARG,4,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = (undefined *)F_00e9e450(param_1 GEN_EDX_ARG,5,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf14 */
GEN_FRAME byte GEN_THISCALL F_01018590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1018590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD,"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_010186e2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_010186e7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_010186e2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_010186e7: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_010185ee;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
          return 1;
        }
      }
    }
  }
LAB_010185ee: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf16 */
GEN_FRAME byte GEN_THISCALL F_01018840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1018840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_01018a10 */
GEN_NOFRAME uint GEN_THISCALL F_01018a10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1018a10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 9999;
  *(undefined4 *)(in_ecx + 8) = 9999;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Status_TypeInfo::vf18 */
GEN_FRAME uint GEN_THISCALL F_01018a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1018a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar2 = *(uint *)(param_1 + 4);
    return 8;
  case 1: ;
    *puVar2 = *(uint *)(param_1 + 8);
    return 8;
  case 2: ;
    *puVar2 = *(uint *)(param_1 + 0xc);
    return 8;
  case 3: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 0x10);
    return 6;
  case 4: ;
    *puVar2 = *(uint *)(param_1 + 0x14);
    return 8;
  case 5: ;
    *puVar2 = *(uint *)(param_1 + 0x18);
    puVar2 = param_3 + 2;
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::Status_TypeInfo::vf20 */
GEN_FRAME uint GEN_THISCALL F_01018af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1018af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar1 == uVar2) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *(uint *)(param_3 + 4) = *puVar3;
      return 8;
    case 1: ;
      *(uint *)(param_3 + 8) = *puVar3;
      return 8;
    case 2: ;
      *(uint *)(param_3 + 0xc) = *puVar3;
      return 8;
    case 3: ;
      *(short *)(param_3 + 0x10) = (short)*puVar3;
      return 6;
    case 4: ;
      *(uint *)(param_3 + 0x14) = *puVar3;
      return 8;
    case 5: ;
      *(uint *)(param_3 + 0x18) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01018bd0 */
GEN_NOFRAME uint GEN_THISCALL F_01018bd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1018bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b0bbc));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_01018c00 */
GEN_FRAME uint GEN_THISCALL F_01018c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1018c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b0bbc));
  F_01011c60(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Status::vf7 */
GEN_FRAME uint GEN_THISCALL F_01018c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1018c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x44))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Status::vf19 */
GEN_FRAME uint GEN_THISCALL F_01018c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1018c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Status::vf21 */
GEN_FRAME uint GEN_THISCALL F_01018c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1018c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork_TypeInfo::vf18 */
GEN_FRAME uint GEN_THISCALL F_01018c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1018c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  if (param_2 == 0) {
    *(undefined1 *)puVar2 = 0;
    *(undefined2 *)((int)param_3 + 5) = 10;
    *(undefined4 *)((int)param_3 + 7) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)((int)param_3 + 0xb) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)param_3 + 0xf) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((int)param_3 + 0x13) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((int)param_3 + 0x17) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)((int)param_3 + 0x1b) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((int)param_3 + 0x1f) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)((int)param_3 + 0x23) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((int)param_3 + 0x27) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)((int)param_3 + 0x2b) = *(undefined4 *)(param_1 + 0x28);
    puVar2 = (uint *)((int)param_3 + 0x2f);
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork_TypeInfo::vf17 */
GEN_FRAME uint GEN_THISCALL F_01018cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1018cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e68640(param_1 + 4,param_3,param_4,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork_TypeInfo::vf16 */
GEN_FRAME uint GEN_THISCALL F_01018d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x1018d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e68750(param_1 + 4,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork_TypeInfo::vf20 */
GEN_FRAME uint GEN_THISCALL F_01018d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1018d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if ((uVar2 == uVar1) && (puVar3 = param_2 + 1, param_1 == 0)) {
    uVar2 = F_00e68800(puVar3,param_3 + 4,10);
    puVar3 = (uint *)((int)puVar3 + uVar2);
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01018de0 */
GEN_FRAME uint GEN_THISCALL F_01018de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1018de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b0964));
  F_01013d30(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork::vf7 */
GEN_FRAME uint GEN_THISCALL F_01018e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1018e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x44))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork::vf19 */
GEN_FRAME uint GEN_THISCALL F_01018e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1018e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork::vf21 */
GEN_FRAME uint GEN_THISCALL F_01018e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1018e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::TrackingWork_TypeInfo::vf18 */
GEN_FRAME uint GEN_THISCALL F_01018e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1018e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  if (param_2 == 0) {
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 4);
    puVar2 = (uint *)((int)param_3 + 5);
  }
  else if (param_2 == 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 5);
    return 5;
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::TrackingWork_TypeInfo::vf20 */
GEN_FRAME uint GEN_THISCALL F_01018ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1018ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar1 == uVar2) {
    puVar3 = param_2 + 1;
    if (param_1 == 0) {
      *(char *)(param_3 + 4) = (char)*puVar3;
      puVar3 = (uint *)((int)param_2 + 5);
    }
    else if (param_1 == 1) {
      *(char *)(param_3 + 5) = (char)*puVar3;
      return 5;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01018f00 */
GEN_FRAME uint GEN_THISCALL F_01018f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1018f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b0a2c));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *(char *)((int)this + 4) = (char)param_1[1];
    *(undefined1 *)((int)this + 5) = *(undefined1 *)((int)param_1 + 5);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::TrackingWork::vf7 */
GEN_FRAME uint GEN_THISCALL F_01018f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1018f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x44))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::TrackingWork::vf19 */
GEN_FRAME uint GEN_THISCALL F_01018f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1018f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::TrackingWork::vf21 */
GEN_FRAME uint GEN_THISCALL F_01018fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1018fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest_TypeInfo::vf18 */
GEN_FRAME uint GEN_THISCALL F_01018fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1018fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 4);
    return 6;
  case 1: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 6);
    return 6;
  case 2: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 8);
    return 6;
  case 3: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 10);
    return 6;
  case 4: ;
    *puVar2 = *(uint *)(param_1 + 0xc);
    return 8;
  case 5: ;
    *puVar2 = *(uint *)(param_1 + 0x10);
    puVar2 = param_3 + 2;
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest_TypeInfo::vf20 */
GEN_FRAME uint GEN_THISCALL F_01019070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1019070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar1 == uVar2) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *(short *)(param_3 + 4) = (short)*puVar3;
      return 6;
    case 1: ;
      *(short *)(param_3 + 6) = (short)*puVar3;
      return 6;
    case 2: ;
      *(short *)(param_3 + 8) = (short)*puVar3;
      return 6;
    case 3: ;
      *(short *)(param_3 + 10) = (short)*puVar3;
      return 6;
    case 4: ;
      *(uint *)(param_3 + 0xc) = *puVar3;
      return 8;
    case 5: ;
      *(uint *)(param_3 + 0x10) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01019150 */
GEN_FRAME uint GEN_THISCALL F_01019150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1019150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b0af4));
  F_01016da0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf7 */
GEN_FRAME uint GEN_THISCALL F_01019170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1019170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x44))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf19 */
GEN_FRAME uint GEN_THISCALL F_01019190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1019190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf21 */
GEN_FRAME uint GEN_THISCALL F_010191b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10191b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Status::vf20 */
GEN_FRAME byte GEN_THISCALL F_010191d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10191d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  char * pcVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  char * pcVar10;
  uint uVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  ulonglong uVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pcVar8 = param_1 + 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00fb9ad0(pcVar8,"\"content\":[");
  if (uVar3 == 0) goto LAB_0101987e;
  pcVar4 = (char *)(uVar3 + 0xb);
  pcVar10 = param_1;
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  iVar5 = 1;
  for (pcVar10 = pcVar8; pcVar7 = pcVar6 - 1, pcVar10 < pcVar6 - 1; pcVar10 = pcVar10 + 1) {
    if (*pcVar10 == '{') {
      iVar5 = iVar5 + 1;
    }
    else if ((*pcVar10 == '}') && (iVar5 = iVar5 - 1, pcVar7 = pcVar10, iVar5 == 0)) break;
  }
  pcVar8 = (char *)F_00e50750(pcVar8,"\"memberid\":[",pcVar7);
  if (pcVar8 == (char *)0x0) goto LAB_0101987e;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar8 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar3);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
  pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
  if (pcVar4 != pcVar8) {
    do {
      cVar1 = *pcVar4;
      if (cVar1 == '\"') {
        pcVar4 = pcVar4 + 1;
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
          iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
          }
          if (ppcVar13 != (char * PTR32 *)0x0) {
            *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[iVar5 >> 2];
          }
        }
        else {
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
          }
          if (ppcVar13 != (char * PTR32 *)0x0) {
            *ppcVar13 = pcVar4;
          }
        }
        ppcVar13 = ppcVar13 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = ppcVar13;
        pcVar4 = (char *)F_00c51da0(pcVar4,0x22);
        pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x34)));
          pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
          iVar5 = 1;
          if (pcVar4 == pcVar10) goto LAB_010195b0;
          do {
            if (*pcVar4 == '{') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == '}') && (iVar5 = iVar5 - 1, iVar5 == 0)) break;
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 != pcVar10);
        }
        else {
          if (cVar1 != '[') goto LAB_01019413;
          cVar1 = pcVar4[1];
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
          iVar5 = 1;
          if (cVar1 == '\"') {
LAB_010193db: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
          }
          else if (cVar1 == '[') {
            iVar5 = 2;
            goto LAB_010193db;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x34)));
          for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar10; pcVar4 = pcVar4 + 1) {
            if (*pcVar4 == '[') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == ']') && (iVar5 = iVar5 - 1, iVar5 == 0)) break;
          }
        }
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
        if (iVar5 == 1) goto LAB_010195b0;
      }
LAB_01019413: ;
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x20)));
  }
  pcVar8 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  if ((int)uVar3 < (int)pcVar8) {
LAB_010195b0: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_0101987e;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar3);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x1c));
  (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x1c));
  while ((*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8, cVar1 != ']') {
    if (*pcVar8 == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar12) && (ppcVar13 <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
        iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)ppcVar13;
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar9 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) {
LAB_01019596: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar9 = uVar9 + 1;
          uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar11);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = ppcVar13[iVar5 >> 2];
        }
      }
      else {
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar9 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_01019596;
          uVar9 = uVar9 + 1;
          uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar11);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = pcVar8;
        }
      }
      ppcVar12 = ppcVar12 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppcVar12;
      pcVar8 = (char *)F_00c51da0((*(char * PTR32 *)(gen_frame + 0x34)) + 1,0x22);
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
      if (pcVar8 == (char *)0x0) {
        if (ppcVar13 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar13);
        }
        goto LAB_010195b0;
      }
    }
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
    (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
  }
  pcVar8 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2);
  if ((int)uVar3 < (int)pcVar8) {
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_0101987e;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x20)) != pcVar8) {
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_0101987e;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_0101967a: ;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,1);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar13[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_0101985f;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 8) = (int)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,2);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar13[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_0101985f;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 0xc) = (int)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar13[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_0101985f;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(short *)(this + 0x10) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,4);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        pcVar10 = (char *)0x0;
        do {
          if (pcVar4 == ppcVar13[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_0101985f;
      fVar15 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(float *)(this + 0x14) = fVar15;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,5);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
    if (pcVar4 == (char *)0x0) {
LAB_010198aa: ;
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
      }
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
      return 1;
    }
    pcVar10 = (char *)0x0;
    if (pcVar8 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar13[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar8);
    }
    if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x20))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 0x18) = (int)uVar14;
      goto LAB_010198aa;
    }
  }
  else {
    pcVar10 = (char *)0x0;
    if (pcVar8 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar13[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar8);
    }
    if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x20))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 4) = (int)uVar14;
      goto LAB_0101967a;
    }
  }
LAB_0101985f: ;
  if (ppcVar13 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar13);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
  }
LAB_0101987e: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork::vf20 */
GEN_FRAME byte GEN_THISCALL F_010198e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10198e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  char * pcVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  char * pcVar10;
  uint uVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  ulonglong uVar14;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pcVar8 = param_1 + 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00fb9ad0(pcVar8,"\"content\":[");
  if (uVar3 != 0) {
    pcVar4 = (char *)(uVar3 + 0xb);
    pcVar10 = param_1;
    do {
      pcVar6 = pcVar10;
      pcVar10 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    iVar5 = 1;
    for (pcVar10 = pcVar8; pcVar7 = pcVar6 - 1, pcVar10 < pcVar6 - 1; pcVar10 = pcVar10 + 1) {
      if (*pcVar10 == '{') {
        iVar5 = iVar5 + 1;
      }
      else if ((*pcVar10 == '}') && (iVar5 = iVar5 - 1, pcVar7 = pcVar10, iVar5 == 0)) break;
    }
    pcVar8 = (char *)F_00e50750(pcVar8,"\"memberid\":[",pcVar7);
    if (pcVar8 != (char *)0x0) {
      (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar8 + 0xc;
      (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG);
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (char * PTR32 *)0x0;
      F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar3);
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
      pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
      ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
      if (pcVar4 != pcVar8) {
        do {
          cVar1 = *pcVar4;
          if (cVar1 == '\"') {
            pcVar4 = pcVar4 + 1;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
            if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
              iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
              if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,1);
                ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
              }
              if (ppcVar13 != (char * PTR32 *)0x0) {
                *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[iVar5 >> 2];
              }
            }
            else {
              if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,1);
                ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
              }
              if (ppcVar13 != (char * PTR32 *)0x0) {
                *ppcVar13 = pcVar4;
              }
            }
            ppcVar13 = ppcVar13 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = ppcVar13;
            pcVar4 = (char *)F_00c51da0(pcVar4,0x22);
            pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
          }
          else {
            if (cVar1 == '{') {
              (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x34)));
              pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
              iVar5 = 1;
              if (pcVar4 == pcVar10) goto LAB_01019d83;
              do {
                if (*pcVar4 == '{') {
                  iVar5 = iVar5 + 1;
                }
                else if ((*pcVar4 == '}') && (iVar5 = iVar5 - 1, iVar5 == 0)) break;
                pcVar4 = pcVar4 + 1;
              } while (pcVar4 != pcVar10);
            }
            else {
              if (cVar1 != '[') goto LAB_01019b23;
              cVar1 = pcVar4[1];
              (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
              iVar5 = 1;
              if (cVar1 == '\"') {
LAB_01019aeb: ;
                (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
              }
              else if (cVar1 == '[') {
                iVar5 = 2;
                goto LAB_01019aeb;
              }
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x34)));
              for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar10; pcVar4 = pcVar4 + 1) {
                if (*pcVar4 == '[') {
                  iVar5 = iVar5 + 1;
                }
                else if ((*pcVar4 == ']') && (iVar5 = iVar5 - 1, iVar5 == 0)) break;
              }
            }
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
            if (iVar5 == 1) goto LAB_01019d83;
          }
LAB_01019b23: ;
          pcVar4 = pcVar4 + 1;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x20)));
      }
      pcVar8 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
      (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
      if ((int)pcVar8 <= (int)uVar3) {
        (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 *)0x0;
        F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar3);
        cVar1 = *(*(char * PTR32 *)(gen_frame + 0x1c));
        (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x1c));
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
        ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
        pcVar8 = (*(char * PTR32 *)(gen_frame + 0x1c));
        while ((*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8, cVar1 != ']') {
          if (*pcVar8 == '\"') {
            if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar12) && (ppcVar13 <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
              iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)ppcVar13;
              if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
                uVar9 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
                if (0x3ffffffe < uVar9) {
LAB_01019ca7: ;
                    
                  F_00c4579a("vector<T> too long");
                }
                uVar9 = uVar9 + 1;
                uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
                if (uVar11 < uVar9) {
                  if (0x3fffffff - (uVar11 >> 1) < uVar11) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = uVar11 + (uVar11 >> 1);
                  }
                  if (uVar11 < uVar9) {
                    uVar11 = uVar9;
                  }
                  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar11);
                  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
                  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
                }
              }
              if (ppcVar12 != (char * PTR32 *)0x0) {
                *ppcVar12 = ppcVar13[iVar5 >> 2];
              }
            }
            else {
              if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
                uVar9 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
                if (0x3ffffffe < uVar9) goto LAB_01019ca7;
                uVar9 = uVar9 + 1;
                uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
                if (uVar11 < uVar9) {
                  if (0x3fffffff - (uVar11 >> 1) < uVar11) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = uVar11 + (uVar11 >> 1);
                  }
                  if (uVar11 < uVar9) {
                    uVar11 = uVar9;
                  }
                  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar11);
                  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
                  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
                }
              }
              if (ppcVar12 != (char * PTR32 *)0x0) {
                *ppcVar12 = pcVar8;
              }
            }
            ppcVar12 = ppcVar12 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppcVar12;
            pcVar8 = (char *)F_00c51da0((*(char * PTR32 *)(gen_frame + 0x34)) + 1,0x22);
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
            if (pcVar8 == (char *)0x0) {
              if (ppcVar13 != (char * PTR32 *)0x0) {
                F_00406ad0(ppcVar13);
              }
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
                F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
                F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
                return 0;
              }
              goto LAB_01019d90;
            }
          }
          pcVar8 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
          cVar1 = *pcVar8;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
        }
        pcVar8 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2);
        if ((int)uVar3 < (int)pcVar8) {
          if (ppcVar13 != (char * PTR32 *)0x0) {
            F_00406ad0(ppcVar13);
          }
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
            F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
            return 0;
          }
          goto LAB_01019d90;
        }
        if ((*(char * PTR32 *)(gen_frame + 0x20)) != pcVar8) {
          if (ppcVar13 != (char * PTR32 *)0x0) {
            F_00406ad0(ppcVar13);
          }
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
            F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
            return 0;
          }
          goto LAB_01019d90;
        }
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
        F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
        pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
        if (pcVar4 == (char *)0x0) {
LAB_01019dd6: ;
          if (ppcVar13 != (char * PTR32 *)0x0) {
            F_00406ad0(ppcVar13);
          }
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
          }
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
          return 1;
        }
        pcVar10 = (char *)0x0;
        if (pcVar8 != (char *)0x0) {
          do {
            if (pcVar4 == ppcVar13[(int)pcVar10]) break;
            pcVar10 = pcVar10 + 1;
          } while (pcVar10 < pcVar8);
        }
        if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x20))) {
          pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10];
          (*(char * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0xa);
          do {
            this = this + 4;
            uVar14 = F_00e50570(pcVar8);
            *(int *)this = (int)uVar14;
            uVar3 = F_00c51da0(pcVar8,0x2c);
            pcVar4 = (*(char * PTR32 *)(gen_frame + 0x20)) - 1;
            (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar4;
            pcVar8 = (char *)(uVar3 + 2);
          } while (pcVar4 != (char *)0x0);
          goto LAB_01019dd6;
        }
        if (ppcVar13 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar13);
        }
      }
LAB_01019d83: ;
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      }
    }
  }
LAB_01019d90: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::TrackingWork::vf20 */
GEN_FRAME byte GEN_THISCALL F_01019e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1019e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  char * pcVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  char * pcVar10;
  uint uVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  ulonglong uVar14;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pcVar8 = param_1 + 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00fb9ad0(pcVar8,"\"content\":[");
  if (uVar3 == 0) goto LAB_0101a323;
  pcVar4 = (char *)(uVar3 + 0xb);
  pcVar10 = param_1;
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  iVar5 = 1;
  for (pcVar10 = pcVar8; pcVar7 = pcVar6 - 1, pcVar10 < pcVar6 - 1; pcVar10 = pcVar10 + 1) {
    if (*pcVar10 == '{') {
      iVar5 = iVar5 + 1;
    }
    else if ((*pcVar10 == '}') && (iVar5 = iVar5 - 1, pcVar7 = pcVar10, iVar5 == 0)) break;
  }
  pcVar8 = (char *)F_00e50750(pcVar8,"\"memberid\":[",pcVar7);
  if (pcVar8 == (char *)0x0) goto LAB_0101a323;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar8 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar3);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
  pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
  if (pcVar4 != pcVar8) {
    do {
      cVar1 = *pcVar4;
      if (cVar1 == '\"') {
        pcVar4 = pcVar4 + 1;
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
          iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
          }
          if (ppcVar13 != (char * PTR32 *)0x0) {
            *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[iVar5 >> 2];
          }
        }
        else {
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
          }
          if (ppcVar13 != (char * PTR32 *)0x0) {
            *ppcVar13 = pcVar4;
          }
        }
        ppcVar13 = ppcVar13 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = ppcVar13;
        pcVar4 = (char *)F_00c51da0(pcVar4,0x22);
        pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x34)));
          pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
          iVar5 = 1;
          if (pcVar4 == pcVar10) goto LAB_0101a1f0;
          do {
            if (*pcVar4 == '{') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == '}') && (iVar5 = iVar5 - 1, iVar5 == 0)) break;
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 != pcVar10);
        }
        else {
          if (cVar1 != '[') goto LAB_0101a053;
          cVar1 = pcVar4[1];
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
          iVar5 = 1;
          if (cVar1 == '\"') {
LAB_0101a01b: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
          }
          else if (cVar1 == '[') {
            iVar5 = 2;
            goto LAB_0101a01b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x34)));
          for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar10; pcVar4 = pcVar4 + 1) {
            if (*pcVar4 == '[') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == ']') && (iVar5 = iVar5 - 1, iVar5 == 0)) break;
          }
        }
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
        if (iVar5 == 1) goto LAB_0101a1f0;
      }
LAB_0101a053: ;
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x20)));
  }
  pcVar8 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  if ((int)uVar3 < (int)pcVar8) {
LAB_0101a1f0: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_0101a323;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar3);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x1c));
  (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x1c));
  while ((*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8, cVar1 != ']') {
    if (*pcVar8 == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar12) && (ppcVar13 <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
        iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)ppcVar13;
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar9 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) {
LAB_0101a1d6: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar9 = uVar9 + 1;
          uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar11);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = ppcVar13[iVar5 >> 2];
        }
      }
      else {
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar9 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_0101a1d6;
          uVar9 = uVar9 + 1;
          uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar11);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = pcVar8;
        }
      }
      ppcVar12 = ppcVar12 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppcVar12;
      pcVar8 = (char *)F_00c51da0((*(char * PTR32 *)(gen_frame + 0x34)) + 1,0x22);
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
      if (pcVar8 == (char *)0x0) {
        if (ppcVar13 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar13);
        }
        goto LAB_0101a1f0;
      }
    }
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
    (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
  }
  pcVar8 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2);
  if ((int)uVar3 < (int)pcVar8) {
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_0101a323;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x20)) != pcVar8) {
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_0101a323;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_0101a2b6: ;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,1);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
    if (pcVar4 == (char *)0x0) {
LAB_0101a34f: ;
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
      }
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
      return 1;
    }
    pcVar10 = (char *)0x0;
    if (pcVar8 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar13[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar8);
    }
    if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x20))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      this[5] = SUB81(uVar14,0);
      goto LAB_0101a34f;
    }
  }
  else {
    pcVar10 = (char *)0x0;
    if (pcVar8 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar13[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar8);
    }
    if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x20))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      this[4] = SUB81(uVar14,0);
      goto LAB_0101a2b6;
    }
  }
  if (ppcVar13 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar13);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
  }
LAB_0101a323: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf20 */
GEN_FRAME byte GEN_THISCALL F_0101a380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101a380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  char * pcVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  char * pcVar10;
  uint uVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  ulonglong uVar14;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pcVar8 = param_1 + 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00fb9ad0(pcVar8,"\"content\":[");
  if (uVar3 == 0) goto LAB_0101aa33;
  pcVar4 = (char *)(uVar3 + 0xb);
  pcVar10 = param_1;
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  iVar5 = 1;
  for (pcVar10 = pcVar8; pcVar7 = pcVar6 - 1, pcVar10 < pcVar6 - 1; pcVar10 = pcVar10 + 1) {
    if (*pcVar10 == '{') {
      iVar5 = iVar5 + 1;
    }
    else if ((*pcVar10 == '}') && (iVar5 = iVar5 - 1, pcVar7 = pcVar10, iVar5 == 0)) break;
  }
  pcVar8 = (char *)F_00e50750(pcVar8,"\"memberid\":[",pcVar7);
  if (pcVar8 == (char *)0x0) goto LAB_0101aa33;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar8 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar3);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
  pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
  if (pcVar4 != pcVar8) {
    do {
      cVar1 = *pcVar4;
      if (cVar1 == '\"') {
        pcVar4 = pcVar4 + 1;
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
          iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
          }
          if (ppcVar13 != (char * PTR32 *)0x0) {
            *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[iVar5 >> 2];
          }
        }
        else {
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
          }
          if (ppcVar13 != (char * PTR32 *)0x0) {
            *ppcVar13 = pcVar4;
          }
        }
        ppcVar13 = ppcVar13 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = ppcVar13;
        pcVar4 = (char *)F_00c51da0(pcVar4,0x22);
        pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x34)));
          pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
          iVar5 = 1;
          if (pcVar4 == pcVar10) goto LAB_0101a760;
          do {
            if (*pcVar4 == '{') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == '}') && (iVar5 = iVar5 - 1, iVar5 == 0)) break;
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 != pcVar10);
        }
        else {
          if (cVar1 != '[') goto LAB_0101a5c3;
          cVar1 = pcVar4[1];
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
          iVar5 = 1;
          if (cVar1 == '\"') {
LAB_0101a58b: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
          }
          else if (cVar1 == '[') {
            iVar5 = 2;
            goto LAB_0101a58b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x34)));
          for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar10; pcVar4 = pcVar4 + 1) {
            if (*pcVar4 == '[') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == ']') && (iVar5 = iVar5 - 1, iVar5 == 0)) break;
          }
        }
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
        if (iVar5 == 1) goto LAB_0101a760;
      }
LAB_0101a5c3: ;
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x20)));
  }
  pcVar8 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  if ((int)uVar3 < (int)pcVar8) {
LAB_0101a760: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_0101aa33;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar3);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x1c));
  (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x1c));
  while ((*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8, cVar1 != ']') {
    if (*pcVar8 == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar12) && (ppcVar13 <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
        iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)ppcVar13;
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar9 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) {
LAB_0101a746: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar9 = uVar9 + 1;
          uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar11);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = ppcVar13[iVar5 >> 2];
        }
      }
      else {
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar9 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_0101a746;
          uVar9 = uVar9 + 1;
          uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar11);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = pcVar8;
        }
      }
      ppcVar12 = ppcVar12 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppcVar12;
      pcVar8 = (char *)F_00c51da0((*(char * PTR32 *)(gen_frame + 0x34)) + 1,0x22);
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
      if (pcVar8 == (char *)0x0) {
        if (ppcVar13 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar13);
        }
        goto LAB_0101a760;
      }
    }
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
    (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
  }
  pcVar8 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2);
  if ((int)uVar3 < (int)pcVar8) {
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_0101aa33;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x20)) != pcVar8) {
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
      return 0;
    }
    goto LAB_0101aa33;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_0101a82b: ;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,1);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar13[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_0101aa14;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(short *)(this + 6) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,2);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar13[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_0101aa14;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(short *)(this + 8) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar13[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_0101aa14;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(short *)(this + 10) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,4);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar13[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_0101aa14;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 0xc) = (int)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,5);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
    if (pcVar4 == (char *)0x0) {
LAB_0101aa5f: ;
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
      }
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
      return 1;
    }
    pcVar10 = (char *)0x0;
    if (pcVar8 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar13[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar8);
    }
    if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x20))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 0x10) = (int)uVar14;
      goto LAB_0101aa5f;
    }
  }
  else {
    pcVar10 = (char *)0x0;
    if (pcVar8 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar13[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar8);
    }
    if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x20))) {
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(short *)(this + 4) = (short)uVar14;
      goto LAB_0101a82b;
    }
  }
LAB_0101aa14: ;
  if (ppcVar13 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar13);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
  }
LAB_0101aa33: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Status::vf26 */
GEN_FRAME byte GEN_THISCALL F_0101aa90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101aa90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classid\":",10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classname\":\"",0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"content\":[",0xb);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 4),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",*(int *)(this + 8),*(int *)(this + 8) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",*(int *)(this + 0xc),*(int *)(this + 0xc) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x10),
             (int)*(short *)(this + 0x10) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x18),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00a15ee0(param_1 GEN_EDX_ARG,*(int *)((int)param_1 + 0x10) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Status::vf12 */
GEN_FRAME byte GEN_THISCALL F_0101ad40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101ad40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classid\":",10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classname\":\"",0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"contentdetail\":[",0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,0)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 4),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,1)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"Int32\",",0x13);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",*(int *)(this + 8),*(int *)(this + 8) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"Int32\",",0x13);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",*(int *)(this + 0xc),*(int *)(this + 0xc) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,3)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"Int16\",",0x13);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x10),
             (int)*(short *)(this + 0x10) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,4)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"Float\",",0x13);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,5)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x18),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1 GEN_EDX_ARG,*(int *)((int)param_1 + 0x10) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork::vf26 */
GEN_FRAME byte GEN_THISCALL F_0101b6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101b6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classid\":",10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classname\":\"",0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"content\":[",0xb);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar3 = 10;
  do {
    iVar10 = iVar3;
    this = this + 4;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)this,0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar3 = iVar10 - 1;
  } while (iVar10 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 - uVar5 != 0) {
    puVar9 = param_1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
      puVar9 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + iVar10 + uVar5,(uVar2 - uVar5) - iVar10);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - iVar10;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + (iVar3 - iVar10)))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
        puVar9 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - 1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar8 + iVar3 - 1) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return 1;
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork::vf12 */
GEN_FRAME byte GEN_THISCALL F_0101b930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101b930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classid\":",10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classname\":\"",0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"contentdetail\":[",0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar3 = 10;
  do {
    iVar10 = iVar3;
    this = this + 4;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)this,0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar3 = iVar10 - 1;
  } while (iVar10 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar5) {
    puVar9 = param_1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
      puVar9 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar5 + iVar10,(uVar2 - iVar10) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - iVar10;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + (iVar3 - iVar10)))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 - uVar5 != 0) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
        puVar9 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - uVar5) - 1);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - 1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar8 + iVar3 - 1) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return 1;
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::TrackingWork::vf26 */
GEN_FRAME byte GEN_THISCALL F_0101bc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101bc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classid\":",10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classname\":\"",0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"content\":[",0xb);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[4],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[5],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00a15ee0(param_1 GEN_EDX_ARG,*(int *)((int)param_1 + 0x10) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::TrackingWork::vf12 */
GEN_FRAME byte GEN_THISCALL F_0101be30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101be30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classid\":",10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classname\":\"",0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"contentdetail\":[",0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,0)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[4],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,1)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[5],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1 GEN_EDX_ARG,*(int *)((int)param_1 + 0x10) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf26 */
GEN_FRAME byte GEN_THISCALL F_0101c220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101c220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classid\":",10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classname\":\"",0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"content\":[",0xb);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 4),(int)*(short *)(this + 4) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 6),(int)*(short *)(this + 6) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 8),(int)*(short *)(this + 8) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 10),(int)*(short *)(this + 10) >> 0x1f)
  ;
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0xc),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x10),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00a15ee0(param_1 GEN_EDX_ARG,*(int *)((int)param_1 + 0x10) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf12 */
GEN_FRAME byte GEN_THISCALL F_0101c4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101c4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classid\":",10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"classname\":\"",0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"contentdetail\":[",0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,0)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"Int16\",",0x13);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 4),(int)*(short *)(this + 4) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,1)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"Int16\",",0x13);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 6),(int)*(short *)(this + 6) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"Int16\",",0x13);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 8),(int)*(short *)(this + 8) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,3)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"Int16\",",0x13);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 10),(int)*(short *)(this + 10) >> 0x1f)
  ;
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,4)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0xc),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,5)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1 GEN_EDX_ARG,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x10),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1 GEN_EDX_ARG,*(int *)((int)param_1 + 0x10) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Status::vf15 */
GEN_FRAME byte GEN_THISCALL F_0101ce80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101ce80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_0101ceab;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_0101cf2d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x1c));
    uVar9 = (*(uint *)(gen_frame + 0x1c));
    if (1 < (*(uint *)(gen_frame + 0x1c))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_0101cf2d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1 GEN_EDX_ARG,*(int *)((int)param_1 + 0x10) - 1,1);
    F_00e69490(param_1 GEN_EDX_ARG,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,iVar10);
        F_00c472af(((char *)(gen_frame + 0x28)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
        pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        pcVar8 = ((char *)(gen_frame + 0x28));
        (*(uint *)(gen_frame + 0x20)) = 0xf;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 1;
  }
LAB_0101ceab: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork::vf15 */
GEN_FRAME byte GEN_THISCALL F_0101d070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_0101d09b;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_0101d11d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x1c));
    uVar9 = (*(uint *)(gen_frame + 0x1c));
    if (1 < (*(uint *)(gen_frame + 0x1c))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_0101d11d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1 GEN_EDX_ARG,*(int *)((int)param_1 + 0x10) - 1,1);
    F_00e69490(param_1 GEN_EDX_ARG,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,iVar10);
        F_00c472af(((char *)(gen_frame + 0x28)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
        pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        pcVar8 = ((char *)(gen_frame + 0x28));
        (*(uint *)(gen_frame + 0x20)) = 0xf;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 1;
  }
LAB_0101d09b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::TrackingWork::vf15 */
GEN_FRAME byte GEN_THISCALL F_0101d260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_0101d28b;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_0101d30d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x1c));
    uVar9 = (*(uint *)(gen_frame + 0x1c));
    if (1 < (*(uint *)(gen_frame + 0x1c))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_0101d30d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1 GEN_EDX_ARG,*(int *)((int)param_1 + 0x10) - 1,1);
    F_00e69490(param_1 GEN_EDX_ARG,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,iVar10);
        F_00c472af(((char *)(gen_frame + 0x28)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
        pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        pcVar8 = ((char *)(gen_frame + 0x28));
        (*(uint *)(gen_frame + 0x20)) = 0xf;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 1;
  }
LAB_0101d28b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf15 */
GEN_FRAME byte GEN_THISCALL F_0101d450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_0101d47b;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_0101d4fd: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x1c));
    uVar9 = (*(uint *)(gen_frame + 0x1c));
    if (1 < (*(uint *)(gen_frame + 0x1c))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_0101d4fd;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1 GEN_EDX_ARG,*(int *)((int)param_1 + 0x10) - 1,1);
    F_00e69490(param_1 GEN_EDX_ARG,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,iVar10);
        F_00c472af(((char *)(gen_frame + 0x28)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
        pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        pcVar8 = ((char *)(gen_frame + 0x28));
        (*(uint *)(gen_frame + 0x20)) = 0xf;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 1;
  }
LAB_0101d47b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork_TypeInfo::vf5 */
GEN_NOFRAME uint F_0101d640(void)
{
  GEN_ENTER(0x101d640u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork::vf1 */
GEN_NOFRAME uint F_0101d650(void)
{
  GEN_ENTER(0x101d650u, 0u, 0u, 0u, 0u);
  return 0x136c230;
}

/* ref: Application::Network::WorkDefinitions::TrackingWork_TypeInfo::vf5 */
GEN_NOFRAME uint F_0101d660(void)
{
  GEN_ENTER(0x101d660u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Application::Network::WorkDefinitions::TrackingWork::vf1 */
GEN_NOFRAME uint F_0101d670(void)
{
  GEN_ENTER(0x101d670u, 0u, 0u, 0u, 0u);
  return 0x136c234;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest_TypeInfo::vf5 */
GEN_NOFRAME uint F_0101d680(void)
{
  GEN_ENTER(0x101d680u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf1 */
GEN_NOFRAME uint F_0101d690(void)
{
  GEN_ENTER(0x101d690u, 0u, 0u, 0u, 0u);
  return 0x136c238;
}

/* ref: Application::Network::WorkDefinitions::Status_TypeInfo::vf5 */
GEN_NOFRAME uint F_0101d6a0(void)
{
  GEN_ENTER(0x101d6a0u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: Application::Network::WorkDefinitions::Status_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_0101d6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Status::vf1 */
GEN_NOFRAME uint F_0101d6e0(void)
{
  GEN_ENTER(0x101d6e0u, 0u, 0u, 0u, 0u);
  return 0x136c22c;
}

/* ref: Application::Network::WorkDefinitions::Status::vf0 */
GEN_FRAME uint GEN_THISCALL F_0101d6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_0101d720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ClassJobWork::vf0 */
GEN_FRAME uint GEN_THISCALL F_0101d750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::TrackingWork_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_0101d780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::TrackingWork::vf0 */
GEN_FRAME uint GEN_THISCALL F_0101d7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_0101d7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::AttachMateriaRequest::vf0 */
GEN_FRAME uint GEN_THISCALL F_0101d810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0101d840 */
GEN_FRAME uint GEN_THISCALL F_0101d840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d840u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 4 + param_2 * 0x18;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf1 */
GEN_NOFRAME uint F_0101d8a0(void)
{
  GEN_ENTER(0x101d8a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf2 */
GEN_NOFRAME uint F_0101d8b0(void)
{
  GEN_ENTER(0x101d8b0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136c484);
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf3 */
GEN_FRAME uint GEN_THISCALL F_0101d8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c34) + param_1 * 4);
}

/* ref: FUN_0101d8e0 */
GEN_FRAME uint GEN_STDCALL F_0101d8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x101d8e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12b0c38) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_0101d900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 1);
  return 0xffffffff;
}

/* ref: FUN_0101d940 */
GEN_FRAME uint GEN_STDCALL F_0101d940(unsigned int gen_a0)
{
  GEN_ENTER(0x101d940u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_0101d950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136c480))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_0101d970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c28) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_0101d990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c30) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_0101d9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3e3c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf10 */
GEN_FRAME uint GEN_THISCALL F_0101d9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c2c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf14 */
GEN_FRAME uint GEN_THISCALL F_0101d9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101d9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12b0c30) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12b0c30) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3e3c) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3e3c) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12b0c2c) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e3c) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12b0c28) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12b0c2c) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0c28) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf13 */
GEN_FRAME uint GEN_THISCALL F_0101da70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x101da70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e3c) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12b0c2c) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0c28) + param_1 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12b0c28) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e3c) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12b0c2c) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf12 */
GEN_FRAME uint GEN_THISCALL F_0101daf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x101daf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e3c) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12b0c2c) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_0101db80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x101db80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf15 */
GEN_FRAME uint GEN_THISCALL F_0101db90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101db90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD,param_1,0,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf19 */
GEN_FRAME uint GEN_THISCALL F_0101dbb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101dbb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD,0,param_1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf2 */
GEN_FRAME uint GEN_THISCALL F_0101dbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101dbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c52c) + 0x10))))(&REFG(undefined * PTR32, 0x136c52c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_0101dc10 */
GEN_FRAME uint GEN_THISCALL F_0101dc10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101dc10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c52c) + 0x10))))(&REFG(undefined * PTR32, 0x136c52c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf4 */
GEN_FRAME uint GEN_THISCALL F_0101dc40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101dc40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    return 0;
  }
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf3 */
GEN_FRAME uint GEN_THISCALL F_0101dc60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101dc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a2;
  if ((param_2 < *(uint *)(&REFG(undefined, 0x12b0c28) + (*(int *)&gen_a1) * 4)) && ((*(int *)&gen_a1) == 0)) {
    return (uint)(this + param_2 * 4 + 4);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_0101dc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101dc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    iVar5 = (int)param_1 - (int)this;
    iVar6 = 0x58;
    do {
      this = this + 4;
      *(undefined4 *)this = *(undefined4 *)(this + iVar5);
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_0101dd00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101dd00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  if (((short)uVar3 == (short)uVar4) && ((*(int *)&gen_a2) == 0)) {
    iVar5 = (int)param_1 - (int)this;
    iVar6 = 0x58;
    do {
      this = this + 4;
      *(undefined4 *)this = *(undefined4 *)(this + iVar5);
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf8 */
GEN_FRAME byte GEN_THISCALL F_0101dd70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101dd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_0101de73: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_0101de78;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_0101de73;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_0101de78: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_0101df2a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
        return 1;
      }
    }
  }
LAB_0101df2a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf22 */
GEN_FRAME byte GEN_THISCALL F_0101df40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x101df40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  int local_1c;
  undefined * local_10;
  int local_c;
  
  if (param_1 != 0) {
    return 0;
  }
  uVar3 = F_00e8c050(param_2 GEN_EDX_FWD);
  local_c = 0;
  do {
    local_10 = this + 4;
    if ((int)uVar3 <= local_c) {
      return 1;
    }
    uVar4 = F_00e9e450(param_2 GEN_EDX_ARG,local_c,local_c >> 0x1f);
    uVar4 = F_00e82f00(uVar4 GEN_EDX_ARG);
    pcVar5 = (char *)F_0042a990(uVar4 GEN_EDX_ARG);
    cVar1 = *pcVar5;
    if (cVar1 == '-') {
      pcVar5 = pcVar5 + 1;
    }
    cVar2 = *pcVar5;
    local_1c = 0;
    iVar6 = local_1c;
    while (('/' < cVar2 && (cVar2 < ':'))) {
      iVar6 = iVar6 * 10 + cVar2 - 0x30;
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar5;
    }
    if (cVar1 == '-') {
      iVar6 = -iVar6;
    }
    local_c = local_c + 1;
    *(int *)local_10 = iVar6;
    this = local_10;
  } while (local_c < 0x58);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf17 */
GEN_FRAME byte GEN_THISCALL F_0101e030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101e030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  while( true ) {
    this = this + 4;
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e505e0(uVar7);
    *(int *)this = (int)uVar8;
    iVar5 = iVar5 + 1;
    if (0x57 < iVar5) {
LAB_0101e108: ;
      if (param_2 != (uint *)0x0) {
        uVar3 = F_00c51da0(uVar3 + 1,0x7d);
        *param_2 = uVar3;
      }
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_0101e108;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf10 */
GEN_FRAME uint GEN_THISCALL F_0101e140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101e140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf23 */
GEN_FRAME byte GEN_THISCALL F_0101e260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101e260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined * this_01;
  int iVar1;
  undefined1 * puVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  this_00 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_00ea8220(this_00 GEN_EDX_ARG);
  F_00ea83e0(this_00 GEN_EDX_ARG,0x58,0);
  iVar1 = 0;
  do {
    this = this + 4;
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),*(int *)this,*(int *)((int)(uintptr_t)this) >> 0x1f);
    puVar2 = ((undefined1 *)(gen_frame + 0x8));
    this_01 = (undefined *)F_00e9e450(this_00 GEN_EDX_ARG,iVar1,iVar1 >> 0x1f);
    F_00ea7fb0(this_01 GEN_EDX_ARG,puVar2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x58);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf9 */
GEN_FRAME uint GEN_THISCALL F_0101e2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101e2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf11 */
GEN_FRAME byte GEN_THISCALL F_0101e310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101e310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = (char *)F_0042a990(uVar5 GEN_EDX_ARG);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = (byte *)F_0042a990(uVar5 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_0101e423: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_0101e428;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_0101e423;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_0101e428: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_0101e597;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_0101e597: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf24 */
GEN_FRAME byte GEN_THISCALL F_0101e5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101e5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  char cVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_FWD,"value",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x24)));
  F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
  if (param_1 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00e8c050(this_00 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x14)) = 0;
  do {
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = this + 4;
    if ((int)uVar3 <= (*(int *)(gen_frame + 0x14))) break;
    uVar4 = F_00e9e450(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x14)) >> 0x1f);
    uVar4 = F_00e82f00(uVar4 GEN_EDX_ARG);
    pcVar5 = (char *)F_0042a990(uVar4 GEN_EDX_ARG);
    cVar1 = *pcVar5;
    if (cVar1 == '-') {
      pcVar5 = pcVar5 + 1;
    }
    cVar2 = *pcVar5;
    (*(int *)(gen_frame + 0xc)) = 0;
    iVar6 = (*(int *)(gen_frame + 0xc));
    while (('/' < cVar2 && (cVar2 < ':'))) {
      iVar6 = iVar6 * 10 + cVar2 - 0x30;
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar5;
    }
    if (cVar1 == '-') {
      iVar6 = -iVar6;
    }
    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
    *(int *)(*(undefined * PTR32 *)(gen_frame + 0x18)) = iVar6;
    this = (*(undefined * PTR32 *)(gen_frame + 0x18));
  } while ((*(int *)(gen_frame + 0x14)) < 0x58);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf18 */
GEN_FRAME byte GEN_THISCALL F_0101e6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101e6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c568));
      iVar5 = uVar3 + 10;
      iVar6 = 0x58;
      do {
        this = this + 4;
        uVar7 = F_00e505e0(iVar5);
        *(int *)this = (int)uVar7;
        uVar3 = F_00c51da0(iVar5,0x2c);
        iVar6 = iVar6 - 1;
        iVar5 = uVar3 + 2;
      } while (iVar6 != 0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar5;
    }
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf13 */
GEN_FRAME uint GEN_THISCALL F_0101e810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101e810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_ARG,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf25 */
GEN_FRAME byte GEN_THISCALL F_0101e930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101e930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * this_00;
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  this_00 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberidx",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar1 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar1 GEN_EDX_ARG,uVar3,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,0);
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"datatype",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,"Int32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x58;
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea83e0(pvVar1 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  iVar5 = 0;
  do {
    this = this + 4;
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),*(int *)this,*(int *)((int)(uintptr_t)this) >> 0x1f);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar4 = iVar5 >> 0x1f;
    iVar6 = iVar5;
    pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    pvVar1 = (undefined *)F_00e9e450(pvVar1 GEN_EDX_ARG,iVar6,iVar4);
    F_00ea7fb0(pvVar1 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x58);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf14 */
GEN_FRAME byte GEN_THISCALL F_0101eb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101eb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD,"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_0101ec72: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_0101ec77;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_0101ec72;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_0101ec77: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_0101eb7e;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
          return 1;
        }
      }
    }
  }
LAB_0101eb7e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf16 */
GEN_FRAME byte GEN_THISCALL F_0101edd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101edd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_0101efa0 */
GEN_FRAME byte GEN_THISCALL F_0101efa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101efa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x46);
  iVar2 = 0;
  do {
    this = (undefined *)((int)this + 4);
    *(undefined4 *)this = *(undefined4 *)(uVar1 + iVar2 * 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x58);
  return 1;
}

/* ref: FUN_0101efd0 */
GEN_FRAME byte GEN_THISCALL F_0101efd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101efd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x46);
  iVar2 = 0;
  do {
    this = (undefined *)((int)this + 4);
    *(undefined4 *)(uVar1 + iVar2 * 4) = *(undefined4 *)this;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x58);
  return 1;
}

/* ref: FUN_0101f000 */
GEN_FRAME byte GEN_THISCALL F_0101f000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x46);
  iVar2 = 0;
  do {
    this = (undefined *)((int)this + 4);
    *(undefined4 *)(uVar1 + iVar2 * 4) = *(undefined4 *)this;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x58);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf1 */
GEN_NOFRAME uint F_0101f060(void)
{
  GEN_ENTER(0x101f060u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf2 */
GEN_NOFRAME uint F_0101f070(void)
{
  GEN_ENTER(0x101f070u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136c48c);
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf3 */
GEN_FRAME uint GEN_THISCALL F_0101f080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c4c) + param_1 * 4);
}

/* ref: FUN_0101f0a0 */
GEN_FRAME uint GEN_STDCALL F_0101f0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x101f0a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12b0c50) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_0101f0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 1);
  return 0xffffffff;
}

/* ref: FUN_0101f100 */
GEN_FRAME uint GEN_STDCALL F_0101f100(unsigned int gen_a0)
{
  GEN_ENTER(0x101f100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_0101f110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136c488))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_0101f130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c40) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_0101f150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c48) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_0101f170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3e40) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf10 */
GEN_FRAME uint GEN_THISCALL F_0101f190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c44) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf14 */
GEN_FRAME uint GEN_THISCALL F_0101f1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12b0c48) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12b0c48) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3e40) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3e40) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12b0c44) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e40) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12b0c40) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12b0c44) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0c40) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf13 */
GEN_FRAME uint GEN_THISCALL F_0101f230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x101f230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e40) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12b0c44) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0c40) + param_1 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12b0c40) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e40) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12b0c44) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf12 */
GEN_FRAME uint GEN_THISCALL F_0101f2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x101f2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e40) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12b0c44) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_0101f340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x101f340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf17 */
GEN_FRAME uint GEN_THISCALL F_0101f350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x101f350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf16 */
GEN_FRAME uint GEN_THISCALL F_0101f370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x101f370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf15 */
GEN_FRAME uint GEN_THISCALL F_0101f390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101f390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD,param_1,0,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf19 */
GEN_FRAME uint GEN_THISCALL F_0101f3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101f3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD,0,param_1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf2 */
GEN_FRAME uint GEN_THISCALL F_0101f3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c530) + 0x10))))(&REFG(undefined * PTR32, 0x136c530),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_0101f420 */
GEN_FRAME uint GEN_THISCALL F_0101f420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101f420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c530) + 0x10))))(&REFG(undefined * PTR32, 0x136c530),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf4 */
GEN_FRAME uint GEN_THISCALL F_0101f450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    return 0;
  }
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_0101f470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101f470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf6 */
GEN_FRAME uint GEN_THISCALL F_0101f480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG)));
  if ((short)uVar3 == (short)piVar1) {
    this[4] = *(undefined *)(param_1 + 1);
    piVar1 = param_1;
  }
  return (uint)piVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf5 */
GEN_FRAME uint GEN_THISCALL F_0101f4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101f4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG)));
  if (((short)uVar3 == (short)piVar1) && ((*(int *)&gen_a2) == 0)) {
    this[4] = *(undefined *)(param_1 + 1);
    piVar1 = param_1;
  }
  return (uint)piVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf8 */
GEN_FRAME byte GEN_THISCALL F_0101f520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_0101f623: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_0101f628;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_0101f623;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_0101f628: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_0101f6da;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
        return 1;
      }
    }
  }
LAB_0101f6da: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf22 */
GEN_FRAME byte GEN_THISCALL F_0101f6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x101f6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  ulonglong uVar2;
  
  if (param_1 != 0) {
    return 0;
  }
  uVar1 = F_00e82f00(param_2 GEN_EDX_FWD);
  uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
  uVar2 = F_00e50570(uVar1);
  this[4] = SUB81(uVar2,0);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf17 */
GEN_FRAME byte GEN_THISCALL F_0101f730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101f730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar7 = F_00e50570(uVar3 + 2);
  this[4] = SUB81(uVar7,0);
  if (param_2 != (uint *)0x0) {
    uVar3 = F_00c51da0(uVar6,0x7d);
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf10 */
GEN_FRAME uint GEN_THISCALL F_0101f800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf23 */
GEN_FRAME byte GEN_THISCALL F_0101f920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101f920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  this_00 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_00ea7fb0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf9 */
GEN_FRAME uint GEN_THISCALL F_0101f980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf11 */
GEN_FRAME byte GEN_THISCALL F_0101f9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101f9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = (char *)F_0042a990(uVar5 GEN_EDX_ARG);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = (byte *)F_0042a990(uVar5 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_0101fab3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_0101fab8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_0101fab3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_0101fab8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_0101fc27;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_0101fc27: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf24 */
GEN_FRAME byte GEN_THISCALL F_0101fc40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101fc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,"value",REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if (param_1 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 0;
  }
  uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
  uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
  uVar2 = F_00e50570(uVar1);
  this[4] = SUB81(uVar2,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf18 */
GEN_FRAME byte GEN_THISCALL F_0101fcd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x101fcd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c600));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    this[4] = SUB81(uVar6,0);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf13 */
GEN_FRAME uint GEN_THISCALL F_0101fdd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101fdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_ARG,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf25 */
GEN_FRAME byte GEN_THISCALL F_0101fef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x101fef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pvVar1 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf14 */
GEN_FRAME byte GEN_THISCALL F_01020070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1020070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD,"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_010201c2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_010201c7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_010201c2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_010201c7: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_010200ce;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
          return 1;
        }
      }
    }
  }
LAB_010200ce: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf16 */
GEN_FRAME byte GEN_THISCALL F_01020320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1020320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_010204f0 */
GEN_FRAME byte GEN_THISCALL F_010204f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10204f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  
  puVar1 = ((undefined1 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x26)));
  *(undefined1 *)((int)this + 4) = *puVar1;
  return 1;
}

/* ref: FUN_01020510 */
GEN_FRAME byte GEN_THISCALL F_01020510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1020510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  
  puVar1 = ((undefined1 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x26)));
  *puVar1 = *(undefined1 *)((int)this + 4);
  return 1;
}

/* ref: FUN_01020530 */
GEN_FRAME byte GEN_THISCALL F_01020530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1020530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  
  puVar1 = ((undefined1 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x26)));
  *puVar1 = *(undefined1 *)((int)this + 4);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf1 */
GEN_NOFRAME uint F_01020580(void)
{
  GEN_ENTER(0x1020580u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf2 */
GEN_NOFRAME uint F_01020590(void)
{
  GEN_ENTER(0x1020590u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136c494);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf3 */
GEN_FRAME uint GEN_THISCALL F_010205a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10205a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c64) + param_1 * 4);
}

/* ref: FUN_010205c0 */
GEN_FRAME uint GEN_STDCALL F_010205c0(unsigned int gen_a0)
{
  GEN_ENTER(0x10205c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12b0c68) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_010205e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10205e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 1);
  return 0xffffffff;
}

/* ref: FUN_01020620 */
GEN_FRAME uint GEN_STDCALL F_01020620(unsigned int gen_a0)
{
  GEN_ENTER(0x1020620u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_01020630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1020630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136c490))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_01020650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1020650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c58) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_01020670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1020670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c60) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_01020690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1020690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3e44) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf10 */
GEN_FRAME uint GEN_THISCALL F_010206b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10206b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c5c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf14 */
GEN_FRAME uint GEN_THISCALL F_010206d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10206d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12b0c60) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12b0c60) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3e44) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3e44) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12b0c5c) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e44) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12b0c58) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12b0c5c) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0c58) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf13 */
GEN_FRAME uint GEN_THISCALL F_01020750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1020750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e44) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12b0c5c) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0c58) + param_1 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12b0c58) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e44) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12b0c5c) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf12 */
GEN_FRAME uint GEN_THISCALL F_010207d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x10207d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e44) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12b0c5c) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_01020860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1020860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf17 */
GEN_FRAME uint GEN_THISCALL F_01020870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1020870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf16 */
GEN_FRAME uint GEN_THISCALL F_01020890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x1020890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf15 */
GEN_FRAME uint GEN_THISCALL F_010208b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10208b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD,param_1,0,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf19 */
GEN_FRAME uint GEN_THISCALL F_010208d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10208d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD,0,param_1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf2 */
GEN_FRAME uint GEN_THISCALL F_01020910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1020910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c534) + 0x10))))(&REFG(undefined * PTR32, 0x136c534),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_01020940 */
GEN_FRAME uint GEN_THISCALL F_01020940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1020940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c534) + 0x10))))(&REFG(undefined * PTR32, 0x136c534),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf4 */
GEN_FRAME uint GEN_THISCALL F_01020970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1020970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    return 0;
  }
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_01020990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1020990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf6 */
GEN_FRAME uint GEN_THISCALL F_010209a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10209a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG)));
  if ((short)uVar3 == (short)piVar1) {
    this[4] = *(undefined *)(param_1 + 1);
    piVar1 = param_1;
  }
  return (uint)piVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf5 */
GEN_FRAME uint GEN_THISCALL F_010209f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10209f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG)));
  if (((short)uVar3 == (short)piVar1) && ((*(int *)&gen_a2) == 0)) {
    this[4] = *(undefined *)(param_1 + 1);
    piVar1 = param_1;
  }
  return (uint)piVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf8 */
GEN_FRAME byte GEN_THISCALL F_01020a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1020a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_01020b43: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01020b48;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_01020b43;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01020b48: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_01020bfa;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
        return 1;
      }
    }
  }
LAB_01020bfa: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf22 */
GEN_FRAME byte GEN_THISCALL F_01020c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1020c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  ulonglong uVar2;
  
  if (param_1 != 0) {
    return 0;
  }
  uVar1 = F_00e82f00(param_2 GEN_EDX_FWD);
  uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
  uVar2 = F_00e50570(uVar1);
  this[4] = SUB81(uVar2,0);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf17 */
GEN_FRAME byte GEN_THISCALL F_01020c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1020c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar7 = F_00e50570(uVar3 + 2);
  this[4] = SUB81(uVar7,0);
  if (param_2 != (uint *)0x0) {
    uVar3 = F_00c51da0(uVar6,0x7d);
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf10 */
GEN_FRAME uint GEN_THISCALL F_01020d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1020d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf23 */
GEN_FRAME byte GEN_THISCALL F_01020e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1020e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  this_00 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_00ea7fb0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf9 */
GEN_FRAME uint GEN_THISCALL F_01020ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1020ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf11 */
GEN_FRAME byte GEN_THISCALL F_01020ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1020ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = (char *)F_0042a990(uVar5 GEN_EDX_ARG);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = (byte *)F_0042a990(uVar5 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_01020fd3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01020fd8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_01020fd3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01020fd8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_01021147;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_01021147: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf24 */
GEN_FRAME byte GEN_THISCALL F_01021160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1021160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,"value",REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if (param_1 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 0;
  }
  uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
  uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
  uVar2 = F_00e50570(uVar1);
  this[4] = SUB81(uVar2,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf18 */
GEN_FRAME byte GEN_THISCALL F_010211f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10211f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c6ac));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    this[4] = SUB81(uVar6,0);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf13 */
GEN_FRAME uint GEN_THISCALL F_010212f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10212f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_ARG,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf25 */
GEN_FRAME byte GEN_THISCALL F_01021410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1021410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pvVar1 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf14 */
GEN_FRAME byte GEN_THISCALL F_01021590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1021590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD,"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_010216e2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_010216e7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_010216e2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_010216e7: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_010215ee;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
          return 1;
        }
      }
    }
  }
LAB_010215ee: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf16 */
GEN_FRAME byte GEN_THISCALL F_01021840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1021840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_01021a10 */
GEN_FRAME byte GEN_THISCALL F_01021a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1021a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  
  puVar1 = ((undefined1 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x46)));
  *(undefined1 *)((int)this + 4) = *puVar1;
  return 1;
}

/* ref: FUN_01021a30 */
GEN_FRAME byte GEN_THISCALL F_01021a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1021a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  
  puVar1 = ((undefined1 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x46)));
  *puVar1 = *(undefined1 *)((int)this + 4);
  return 1;
}

/* ref: FUN_01021a50 */
GEN_FRAME byte GEN_THISCALL F_01021a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1021a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  
  puVar1 = ((undefined1 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x46)));
  *puVar1 = *(undefined1 *)((int)this + 4);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf1 */
GEN_NOFRAME uint F_01021aa0(void)
{
  GEN_ENTER(0x1021aa0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf2 */
GEN_NOFRAME uint F_01021ab0(void)
{
  GEN_ENTER(0x1021ab0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136c4a0);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf3 */
GEN_FRAME uint GEN_THISCALL F_01021ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1021ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c7c) + param_1 * 4);
}

/* ref: FUN_01021ae0 */
GEN_FRAME uint GEN_STDCALL F_01021ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x1021ae0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12b0c80) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_01021b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1021b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 1);
  return 0xffffffff;
}

/* ref: FUN_01021b40 */
GEN_FRAME uint GEN_STDCALL F_01021b40(unsigned int gen_a0)
{
  GEN_ENTER(0x1021b40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_01021b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1021b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136c498))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_01021b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1021b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c70) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_01021b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1021b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c78) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_01021bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1021bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136c49c))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf10 */
GEN_FRAME uint GEN_THISCALL F_01021bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1021bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c74) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf14 */
GEN_FRAME uint GEN_THISCALL F_01021bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1021bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12b0c78) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12b0c78) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((&REFG(undefined * PTR32, 0x136c49c))[(int)(param_1)])) + 0x2c))))
                        ((&REFG(undefined * PTR32, 0x136c49c))[(int)(param_1)]);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12b0c74) + param_1 * 4) + 4;
  }
  piVar1 = ((int *)GEN_TOP((&REFG(undefined * PTR32, 0x136c49c))[(int)(param_1)]));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12b0c70) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12b0c74) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0c70) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf13 */
GEN_FRAME uint GEN_THISCALL F_01021c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1021c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = ((int *)GEN_TOP((&REFG(undefined * PTR32, 0x136c49c))[(int)(param_1)]));
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12b0c74) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0c70) + param_1 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12b0c70) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = ((int *)GEN_TOP((&REFG(undefined * PTR32, 0x136c49c))[(int)(param_1)]));
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12b0c74) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf12 */
GEN_FRAME uint GEN_THISCALL F_01021cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1021cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = ((int *)GEN_TOP((&REFG(undefined * PTR32, 0x136c49c))[(int)(param_1)]));
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12b0c74) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_01021d80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1021d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf18 */
GEN_FRAME uint GEN_THISCALL F_01021d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1021d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar3 = param_3 + 1;
  if (param_2 == 0) {
    *(undefined1 *)puVar3 = 0;
    *(undefined2 *)((int)param_3 + 5) = 5;
    puVar3 = (uint *)((int)param_3 + 7);
    iVar4 = param_1 + 4;
    iVar2 = 5;
    do {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136c49c) + 0x3c))))(REFG(undefined * PTR32, 0x136c49c) GEN_EDX_ARG,iVar4,puVar3);
      puVar3 = (uint *)((int)puVar3 + uVar1);
      iVar4 = iVar4 + 0x18;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf17 */
GEN_FRAME uint GEN_THISCALL F_01021df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1021df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  puVar3 = param_5 + 1;
  if (param_2 == 0) {
    if (((byte)param_3 & 3) == 0) {
      *(byte *)puVar3 = (byte)param_3;
      *(short *)((int)param_5 + 5) = (short)param_4;
      puVar3 = (uint *)((int)param_5 + 7);
      if (param_4 != 0) {
        iVar4 = param_1 + 4;
        iVar2 = param_4;
        do {
          uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136c49c) + 0x3c))))(REFG(undefined * PTR32, 0x136c49c) GEN_EDX_ARG,iVar4,puVar3);
          puVar3 = (uint *)((int)puVar3 + uVar1);
          iVar4 = iVar4 + 0x18;
          iVar2 = iVar2 - 1;
        } while (iVar2 != 0);
        return (int)puVar3 - (int)param_5;
      }
    }
    else if (((byte)param_3 & 3) == 1) {
      *(byte *)puVar3 = (byte)param_3;
      *(short *)((int)param_5 + 5) = (short)param_4;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136c49c) + 0x3c))))
                        (REFG(undefined * PTR32, 0x136c49c) GEN_EDX_ARG,param_1 + 4 + param_4 * 0x18,(int)param_5 + 7);
      puVar3 = (uint *)((int)param_5 + 7 + uVar1);
    }
  }
  return (int)puVar3 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf16 */
GEN_FRAME uint GEN_THISCALL F_01021e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x1021e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar2;
  puVar5 = param_7 + 1;
  if ((param_2 == 0) && (((byte)param_3 & 3) == 2)) {
    *(byte *)puVar5 = (byte)param_3;
    uVar1 = ((ushort)param_5 - (ushort)param_4) + 1;
    uVar4 = (uint)uVar1;
    *(ushort *)((int)param_7 + 5) = (ushort)param_4;
    *(ushort *)((int)param_7 + 7) = (ushort)param_5;
    uVar2 = (uint)(uVar1 >> 5);
    puVar5 = (uint *)((int)param_7 + 9);
    if (uVar2 != 0xffffffff) {
      uVar3 = 0;
      do {
        *puVar5 = *(uint *)(param_6 + uVar3 * 4);
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 < uVar2 + 1);
    }
    param_3 = 0;
    if ((ushort)param_4 <= (ushort)param_5) {
      uVar2 = (uint)(ushort)param_4;
      param_2 = param_1 + 4 + uVar2 * 0x18;
      do {
        if ((*((uint *)GEN_TOP((param_6 + (param_3 >> 5 & 0x7ff) * 4))) & 1 << ((byte)uVar2 & 0x1f)) != 0) {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136c49c) + 0x3c))))(REFG(undefined * PTR32, 0x136c49c) GEN_EDX_ARG,param_2,puVar5);
          puVar5 = (uint *)((int)puVar5 + uVar3);
        }
        param_3 = param_3 + 1;
        param_2 = param_2 + 0x18;
        uVar2 = uVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return (int)puVar5 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf15 */
GEN_FRAME uint GEN_THISCALL F_01021f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1021f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD,param_1,0,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf20 */
GEN_FRAME uint GEN_THISCALL F_01021f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1021f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  ushort uVar6;
  int iVar7;
  uint * puVar8;
  uint uVar9;
  uint * puVar10;
  
  uVar9 = *param_2;
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_1);
  puVar5 = param_2;
  if ((uVar9 == uVar3) && (puVar5 = param_2 + 1, param_1 == 0)) {
    uVar9 = *puVar5;
    puVar5 = (uint *)((int)param_2 + 5);
    bVar2 = (byte)uVar9 & 3;
    if (bVar2 == 0) {
      uVar9 = (uint)*(ushort *)puVar5;
      puVar5 = (uint *)((int)param_2 + 7);
      if (uVar9 != 0) {
        iVar7 = param_3 + 4;
        do {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136c49c) + 0x4c))))(REFG(undefined * PTR32, 0x136c49c) GEN_EDX_ARG,puVar5,iVar7);
          puVar5 = (uint *)((int)puVar5 + uVar3);
          iVar7 = iVar7 + 0x18;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        return (int)puVar5 - (int)param_2;
      }
    }
    else {
      if (bVar2 == 1) {
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136c49c) + 0x4c))))
                          (REFG(undefined * PTR32, 0x136c49c) GEN_EDX_ARG,(byte *)((int)param_2 + 7),
                           param_3 + 4 + (uint)*(ushort *)((int)(uintptr_t)puVar5) * 0x18);
        return (uint)((byte *)((int)param_2 + 7) + (uVar9 - (int)param_2));
      }
      if (bVar2 == 2) {
        uVar6 = *(ushort *)((int)param_2 + 7);
        uVar1 = *(ushort *)puVar5;
        uVar3 = (uint)uVar1;
        uVar9 = (uVar6 - uVar3) + 1 & 0xffff;
        puVar5 = (uint *)((int)param_2 + 9);
        iVar7 = (uVar9 >> 5) + 1;
        ((uint *)(gen_frame + 0x4))[1] = (uint)uVar6;
        if (iVar7 != 0) {
          puVar8 = puVar5;
          puVar10 = ((uint *)(gen_frame + 0x4));
          for (iVar4 = iVar7; iVar4 != 0; iVar4 = iVar4 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          uVar6 = (ushort)((uint *)(gen_frame + 0x4))[1];
          puVar5 = puVar5 + iVar7;
        }
        param_1 = 0;
        if (uVar1 <= uVar6) {
          iVar7 = param_3 + 4 + uVar3 * 0x18;
          param_3 = uVar9;
          do {
            if ((((uint *)(gen_frame + 0x4))[(int)(param_1 >> 5 & 0x7ff)] & 1 << ((byte)uVar3 & 0x1f)) != 0) {
              uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136c49c) + 0x4c))))(REFG(undefined * PTR32, 0x136c49c) GEN_EDX_ARG,puVar5,iVar7);
              puVar5 = (uint *)((int)puVar5 + uVar9);
            }
            param_1 = param_1 + 1;
            uVar3 = uVar3 + 1;
            iVar7 = iVar7 + 0x18;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
      }
    }
  }
  return (int)puVar5 - (int)param_2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf19 */
GEN_FRAME uint GEN_THISCALL F_010220e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10220e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD,0,param_1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf2 */
GEN_FRAME uint GEN_THISCALL F_01022160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1022160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c538) + 0x10))))(&REFG(undefined * PTR32, 0x136c538),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_01022190 */
GEN_FRAME uint GEN_THISCALL F_01022190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1022190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c538) + 0x10))))(&REFG(undefined * PTR32, 0x136c538),param_1);
  if (-1 < (int)uVar1) {
    return (uint)this;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 8))))((int)this + 4,param_1);
  if ((uVar1 != 0) && ((*(uint *)&gen_a2) < 5)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + (*(uint *)&gen_a2) * 0x18 + 4) + 8))))
                      ((int)this + (*(uint *)&gen_a2) * 0x18 + 4,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf4 */
GEN_FRAME uint GEN_THISCALL F_010221f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10221f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    return 0;
  }
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf3 */
GEN_FRAME uint GEN_THISCALL F_01022210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1022210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a2;
  if ((param_2 < *(uint *)(&REFG(undefined, 0x12b0c70) + (*(int *)&gen_a1) * 4)) && ((*(int *)&gen_a1) == 0)) {
    return (uint)(this + param_2 * 0x18 + 4);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_01022240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1022240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pSVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    pSVar5 = this + 4;
    iVar6 = 5;
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)pSVar5 + 0x18))(pSVar5 GEN_EDX_ARG,pSVar5 + ((int)param_1 - (int)this));
      pSVar5 = pSVar5 + 0x18;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_010222b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10222b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pSVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  if (((short)uVar3 == (short)uVar4) && ((*(int *)&gen_a2) == 0)) {
    pSVar5 = this + 4;
    iVar6 = 5;
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)pSVar5 + 0x18))(pSVar5 GEN_EDX_ARG,pSVar5 + ((int)param_1 - (int)this));
      pSVar5 = pSVar5 + 0x18;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf8 */
GEN_FRAME byte GEN_THISCALL F_01022320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1022320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_01022423: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01022428;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_01022423;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01022428: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_010224da;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
        return 1;
      }
    }
  }
LAB_010224da: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf22 */
GEN_FRAME byte GEN_THISCALL F_010224f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10224f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * pSVar4;
  int iVar5;
  
  if (param_1 != 0) {
    return 0;
  }
  uVar2 = F_00e8c050(param_2 GEN_EDX_FWD);
  iVar5 = 0;
  pSVar4 = this + 4;
  do {
    if ((int)uVar2 <= iVar5) {
      return 1;
    }
    iVar1 = *(int *)pSVar4;
    uVar3 = F_00e9e450(param_2 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
    if ((char)param_3 == '\0') {
      ((code *)*(gen_code32 *)(iVar1 + 0x20))(pSVar4,uVar3);
    }
    else {
      ((code *)*(gen_code32 *)(iVar1 + 0x38))(pSVar4,uVar3);
    }
    iVar5 = iVar5 + 1;
    pSVar4 = pSVar4 + 0x18;
  } while (iVar5 < 5);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf17 */
GEN_FRAME byte GEN_THISCALL F_01022550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1022550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pSVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar5 = *(int *)this;
  (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(param_1 + 1);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar5 + 4))(this)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  pcVar4 = (char *)F_00c51da0((*(char * PTR32 *)(gen_frame + 0x4)),0x5b);
  (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar4;
  F_00fb9a80(pcVar4,0x5b,0x5d);
  iVar5 = 0;
  pSVar6 = this + 4;
  do {
    pcVar4 = (*(char * PTR32 *)(gen_frame + 0x4)) + 2;
    F_00c51da0(pcVar4,0x22);
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)pSVar6 + 0x44))(pSVar6 GEN_EDX_ARG,pcVar4,&(*(char * PTR32 *)(gen_frame + 0x4)));
    if ((char)uVar3 == '\0') {
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
      return 0;
    }
    iVar5 = iVar5 + 1;
    pSVar6 = pSVar6 + 0x18;
  } while (iVar5 < 5);
  pcVar4 = (*(char * PTR32 *)(gen_frame + 0x4)) + 1;
  (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar4;
  if (param_2 != (uint *)0x0) {
    uVar3 = F_00c51da0(pcVar4,0x7d);
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf10 */
GEN_FRAME uint GEN_THISCALL F_01022670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1022670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf23 */
GEN_FRAME byte GEN_THISCALL F_01022790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1022790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pSVar3;
  int iVar4;
  
  this_00 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_00ea8220(this_00 GEN_EDX_ARG);
  F_00ea83e0(this_00 GEN_EDX_ARG,5,0);
  iVar4 = 0;
  pSVar3 = this + 4;
  do {
    iVar1 = *(int *)pSVar3;
    uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
    if ((char)param_2 == '\0') {
      ((code *)*(gen_code32 *)(iVar1 + 0x28))(pSVar3,uVar2);
    }
    else {
      ((code *)*(gen_code32 *)(iVar1 + 0x40))(pSVar3,uVar2);
    }
    iVar4 = iVar4 + 1;
    pSVar3 = pSVar3 + 0x18;
  } while (iVar4 < 5);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf9 */
GEN_FRAME uint GEN_THISCALL F_01022800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1022800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf11 */
GEN_FRAME byte GEN_THISCALL F_01022820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1022820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = (char *)F_0042a990(uVar5 GEN_EDX_ARG);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = (byte *)F_0042a990(uVar5 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_01022933: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01022938;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_01022933;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01022938: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_01022aa7;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_01022aa7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf24 */
GEN_FRAME byte GEN_THISCALL F_01022ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1022ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined * pSVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,"value",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if (param_1 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 0;
  }
  uVar2 = F_00e8c050(this_00 GEN_EDX_ARG);
  iVar5 = 0;
  pSVar4 = this + 4;
  do {
    if ((int)uVar2 <= iVar5) break;
    iVar1 = *(int *)pSVar4;
    uVar3 = F_00e9e450(this_00 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
    ((code *)*(gen_code32 *)(iVar1 + 0x2c))(pSVar4,uVar3);
    iVar5 = iVar5 + 1;
    pSVar4 = pSVar4 + 0x18;
  } while (iVar5 < 5);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf18 */
GEN_FRAME byte GEN_THISCALL F_01022b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1022b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pSVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(param_1 + 1);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x4)),0x5b);
  iVar5 = *(int *)this;
  (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 - 1);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar5 + 4))(this)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c744));
    iVar5 = uVar3 + 10;
    iVar7 = 0;
    pSVar6 = this + 4;
    do {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)pSVar6 + 0x48))(pSVar6 GEN_EDX_ARG,iVar5 - 1,&(*(char * PTR32 *)(gen_frame + 0x4)));
      if ((char)uVar3 == '\0') {
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
        return 0;
      }
      uVar3 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x4)),0x7b);
      iVar7 = iVar7 + 1;
      iVar5 = uVar3 + 1;
      pSVar6 = pSVar6 + 0x18;
    } while (iVar7 < 5);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(*(char * PTR32 *)(gen_frame + 0x4));
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf13 */
GEN_FRAME uint GEN_THISCALL F_01022cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1022cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_ARG,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf25 */
GEN_FRAME byte GEN_THISCALL F_01022de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1022de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  undefined * this_00;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  this_00 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,"Class");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  uVar9 = 0;
  uVar7 = 5;
  pvVar2 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar9);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  iVar6 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 4;
  do {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
    iVar1 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0x0));
    iVar5 = iVar6 >> 0x1f;
    iVar8 = iVar6;
    pvVar2 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    uVar4 = F_00e9e450(pvVar2 GEN_EDX_ARG,iVar8,iVar5);
    ((code *)*(gen_code32 *)(iVar1 + 0x34))((*(undefined * PTR32 *)(gen_frame + 0x0)),uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x18;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 5);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf14 */
GEN_FRAME byte GEN_THISCALL F_01022fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1022fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD,"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_01023112: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_01023117;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_01023112;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_01023117: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_0102301e;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
          return 1;
        }
      }
    }
  }
LAB_0102301e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf16 */
GEN_FRAME byte GEN_THISCALL F_01023270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1023270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_01023440 */
GEN_FRAME byte GEN_THISCALL F_01023440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1023440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x47);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG,param_1,0x47,(int)this + 4);
  return 1;
}

/* ref: FUN_01023480 */
GEN_FRAME byte GEN_THISCALL F_01023480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1023480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x47);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1 GEN_EDX_ARG,0x47,(int)this + 4,param_1);
  return 1;
}

/* ref: FUN_010234c0 */
GEN_FRAME byte GEN_THISCALL F_010234c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10234c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x47);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1 GEN_EDX_ARG,0x47,(int)this + 4,param_1);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf1 */
GEN_NOFRAME uint F_01023540(void)
{
  GEN_ENTER(0x1023540u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf2 */
GEN_NOFRAME uint F_01023550(void)
{
  GEN_ENTER(0x1023550u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136c4a8);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf3 */
GEN_FRAME uint GEN_THISCALL F_01023560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1023560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c94) + param_1 * 4);
}

/* ref: FUN_01023580 */
GEN_FRAME uint GEN_STDCALL F_01023580(unsigned int gen_a0)
{
  GEN_ENTER(0x1023580u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12b0c98) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_010235a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10235a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 1);
  return 0xffffffff;
}

/* ref: FUN_010235e0 */
GEN_FRAME uint GEN_STDCALL F_010235e0(unsigned int gen_a0)
{
  GEN_ENTER(0x10235e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_010235f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10235f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136c4a4))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_01023610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1023610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c88) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_01023630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1023630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c90) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_01023650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1023650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3e48) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf10 */
GEN_FRAME uint GEN_THISCALL F_01023670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1023670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0c8c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf14 */
GEN_FRAME uint GEN_THISCALL F_01023690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1023690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12b0c90) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12b0c90) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3e48) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3e48) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12b0c8c) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e48) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12b0c88) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12b0c8c) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0c88) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf13 */
GEN_FRAME uint GEN_THISCALL F_01023710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1023710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e48) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12b0c8c) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0c88) + param_1 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12b0c88) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e48) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12b0c8c) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf12 */
GEN_FRAME uint GEN_THISCALL F_01023790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1023790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e48) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12b0c8c) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_01023820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1023820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf15 */
GEN_FRAME uint GEN_THISCALL F_01023830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1023830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD,param_1,0,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf19 */
GEN_FRAME uint GEN_THISCALL F_01023850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1023850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD,0,param_1,param_2);
  return uVar1;
}

/* ref: FUN_01023870 */
GEN_NOFRAME uint GEN_THISCALL F_01023870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1023870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b1134));
  F_00c48350((undefined *)((int)this + 4),0,0xa0);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf2 */
GEN_FRAME uint GEN_THISCALL F_010238a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10238a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c53c) + 0x10))))(&REFG(undefined * PTR32, 0x136c53c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_010238d0 */
GEN_FRAME uint GEN_THISCALL F_010238d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10238d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c53c) + 0x10))))(&REFG(undefined * PTR32, 0x136c53c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf4 */
GEN_FRAME uint GEN_THISCALL F_01023900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1023900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    return 0;
  }
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf3 */
GEN_FRAME uint GEN_THISCALL F_01023920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1023920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a2;
  if ((param_2 < *(uint *)(&REFG(undefined, 0x12b0c88) + (*(int *)&gen_a1) * 4)) && ((*(int *)&gen_a1) == 0)) {
    return (uint)(this + param_2 + 4);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_01023950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1023950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pSVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    pSVar5 = this + 4;
    iVar6 = 0xa0;
    do {
      *pSVar5 = pSVar5[(int)param_1 - (int)this];
      pSVar5 = pSVar5 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_010239b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10239b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pSVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  if (((short)uVar3 == (short)uVar4) && ((*(int *)&gen_a2) == 0)) {
    pSVar5 = this + 4;
    iVar6 = 0xa0;
    do {
      *pSVar5 = pSVar5[(int)param_1 - (int)this];
      pSVar5 = pSVar5 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf8 */
GEN_FRAME byte GEN_THISCALL F_01023a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1023a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_01023b13: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01023b18;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_01023b13;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01023b18: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_01023bca;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
        return 1;
      }
    }
  }
LAB_01023bca: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf22 */
GEN_FRAME byte GEN_THISCALL F_01023be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1023be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  undefined1 SVar5;
  
  if (param_1 != 0) {
    return 0;
  }
  uVar2 = F_00e8c050(param_2 GEN_EDX_FWD);
  param_1 = 0;
  do {
    if ((int)uVar2 <= param_1) {
      return 1;
    }
    uVar3 = F_00e9e450(param_2 GEN_EDX_ARG,param_1,param_1 >> 0x1f);
    uVar3 = F_00e82f00(uVar3 GEN_EDX_ARG);
    pcVar4 = (char *)F_0042a990(uVar3 GEN_EDX_ARG);
    SVar5 = (undefined1)0x0;
    cVar1 = *pcVar4;
    while (('/' < cVar1 && (cVar1 < ':'))) {
      SVar5 = (undefined1)((char)SVar5 * '\n' + cVar1 - 0x30);
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    this[param_1 + 4] = SVar5;
    param_1 = param_1 + 1;
  } while (param_1 < 0xa0);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf17 */
GEN_FRAME byte GEN_THISCALL F_01023cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1023cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 4] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
    if (0x9f < iVar5) {
LAB_01023d8b: ;
      if (param_2 != (uint *)0x0) {
        uVar3 = F_00c51da0(uVar3 + 1,0x7d);
        *param_2 = uVar3;
      }
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_01023d8b;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf10 */
GEN_FRAME uint GEN_THISCALL F_01023dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1023dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf23 */
GEN_FRAME byte GEN_THISCALL F_01023ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1023ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined * this_01;
  int iVar1;
  undefined1 * puVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  this_00 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_00ea8220(this_00 GEN_EDX_ARG);
  F_00ea83e0(this_00 GEN_EDX_ARG,0xa0,0);
  iVar1 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar1 + 4],0);
    puVar2 = ((undefined1 *)(gen_frame + 0x8));
    this_01 = (undefined *)F_00e9e450(this_00 GEN_EDX_ARG,iVar1,iVar1 >> 0x1f);
    F_00ea7fb0(this_01 GEN_EDX_ARG,puVar2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xa0);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf9 */
GEN_FRAME uint GEN_THISCALL F_01023f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1023f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf11 */
GEN_FRAME byte GEN_THISCALL F_01023f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1023f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = (char *)F_0042a990(uVar5 GEN_EDX_ARG);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = (byte *)F_0042a990(uVar5 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_010240a3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_010240a8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_010240a3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_010240a8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_01024217;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_01024217: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf24 */
GEN_FRAME byte GEN_THISCALL F_01024230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1024230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  char cVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  undefined1 SVar6;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_FWD,"value",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  if (param_1 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00e8c050(this_00 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0xc)) = 0;
  do {
    if ((int)uVar3 <= (*(int *)(gen_frame + 0xc))) break;
    uVar4 = F_00e9e450(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0xc)) >> 0x1f);
    uVar4 = F_00e82f00(uVar4 GEN_EDX_ARG);
    pcVar5 = (char *)F_0042a990(uVar4 GEN_EDX_ARG);
    cVar1 = *pcVar5;
    if (cVar1 == '-') {
      pcVar5 = pcVar5 + 1;
    }
    SVar6 = (undefined1)0x0;
    cVar2 = *pcVar5;
    while (('/' < cVar2 && (cVar2 < ':'))) {
      SVar6 = (undefined1)((char)SVar6 * '\n' + cVar2 - 0x30);
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar5;
    }
    if (cVar1 == '-') {
      SVar6 = (undefined1)-(char)SVar6;
    }
    this[(*(int *)(gen_frame + 0xc)) + 4] = SVar6;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
  } while ((*(int *)(gen_frame + 0xc)) < 0xa0);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf18 */
GEN_FRAME byte GEN_THISCALL F_01024370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1024370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c7ec));
      iVar5 = uVar3 + 10;
      iVar6 = 0;
      do {
        uVar7 = F_00e50570(iVar5);
        this[iVar6 + 4] = SUB81(uVar7,0);
        uVar3 = F_00c51da0(iVar5,0x2c);
        iVar6 = iVar6 + 1;
        iVar5 = uVar3 + 2;
      } while (iVar6 < 0xa0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar5;
    }
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf13 */
GEN_FRAME uint GEN_THISCALL F_01024490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1024490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_ARG,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf25 */
GEN_FRAME byte GEN_THISCALL F_010245b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10245b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * this_00;
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  this_00 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberidx",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar1 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar1 GEN_EDX_ARG,uVar3,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,0);
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"datatype",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0xa0;
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea83e0(pvVar1 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  iVar5 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar5 + 4],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar4 = iVar5 >> 0x1f;
    iVar6 = iVar5;
    pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    pvVar1 = (undefined *)F_00e9e450(pvVar1 GEN_EDX_ARG,iVar6,iVar4);
    F_00ea7fb0(pvVar1 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xa0);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf14 */
GEN_FRAME byte GEN_THISCALL F_010247a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10247a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD,"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_010248f2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_010248f7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_010248f2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_010248f7: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_010247fe;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
          return 1;
        }
      }
    }
  }
LAB_010247fe: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf16 */
GEN_FRAME byte GEN_THISCALL F_01024a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1024a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_01024c20 */
GEN_FRAME byte GEN_THISCALL F_01024c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1024c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x48);
  iVar2 = 0;
  do {
    *(undefined1 *)((int)this + iVar2 + 4) = *(undefined1 *)(iVar2 + uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xa0);
  return 1;
}

/* ref: FUN_01024c50 */
GEN_FRAME byte GEN_THISCALL F_01024c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1024c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x48);
  iVar2 = 0;
  do {
    *(undefined1 *)(iVar2 + uVar1) = *(undefined1 *)((int)this + iVar2 + 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xa0);
  return 1;
}

/* ref: FUN_01024c80 */
GEN_FRAME byte GEN_THISCALL F_01024c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1024c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x48);
  iVar2 = 0;
  do {
    *(undefined1 *)(iVar2 + uVar1) = *(undefined1 *)((int)this + iVar2 + 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xa0);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf1 */
GEN_NOFRAME uint F_01024cf0(void)
{
  GEN_ENTER(0x1024cf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf2 */
GEN_NOFRAME uint F_01024d00(void)
{
  GEN_ENTER(0x1024d00u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136c4b0);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf3 */
GEN_FRAME uint GEN_THISCALL F_01024d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1024d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0cac) + param_1 * 4);
}

/* ref: FUN_01024d30 */
GEN_FRAME uint GEN_STDCALL F_01024d30(unsigned int gen_a0)
{
  GEN_ENTER(0x1024d30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12b0cb0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_01024d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1024d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 1);
  return 0xffffffff;
}

/* ref: FUN_01024d90 */
GEN_FRAME uint GEN_STDCALL F_01024d90(unsigned int gen_a0)
{
  GEN_ENTER(0x1024d90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_01024da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1024da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136c4ac))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_01024dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1024dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0ca0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_01024de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1024de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0ca8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_01024e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1024e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3e4c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf10 */
GEN_FRAME uint GEN_THISCALL F_01024e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1024e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0ca4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf14 */
GEN_FRAME uint GEN_THISCALL F_01024e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1024e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12b0ca8) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12b0ca8) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3e4c) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3e4c) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12b0ca4) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e4c) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12b0ca0) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12b0ca4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0ca0) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf13 */
GEN_FRAME uint GEN_THISCALL F_01024ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1024ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e4c) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12b0ca4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0ca0) + param_1 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12b0ca0) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e4c) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12b0ca4) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf12 */
GEN_FRAME uint GEN_THISCALL F_01024f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1024f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e4c) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12b0ca4) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_01024fd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1024fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf15 */
GEN_FRAME uint GEN_THISCALL F_01024fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1024fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD,param_1,0,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf19 */
GEN_FRAME uint GEN_THISCALL F_01025000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1025000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD,0,param_1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf2 */
GEN_FRAME uint GEN_THISCALL F_01025060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1025060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c540) + 0x10))))(&REFG(undefined * PTR32, 0x136c540),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_01025090 */
GEN_FRAME uint GEN_THISCALL F_01025090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1025090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c540) + 0x10))))(&REFG(undefined * PTR32, 0x136c540),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf4 */
GEN_FRAME uint GEN_THISCALL F_010250c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10250c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    return 0;
  }
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf3 */
GEN_FRAME uint GEN_THISCALL F_010250e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10250e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a2;
  if ((param_2 < *(uint *)(&REFG(undefined, 0x12b0ca0) + (*(int *)&gen_a1) * 4)) && ((*(int *)&gen_a1) == 0)) {
    return (uint)(this + param_2 + 4);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_01025110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1025110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pSVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    pSVar5 = this + 4;
    iVar6 = 0x28;
    do {
      *pSVar5 = pSVar5[(int)param_1 - (int)this];
      pSVar5 = pSVar5 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_01025170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1025170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pSVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  if (((short)uVar3 == (short)uVar4) && ((*(int *)&gen_a2) == 0)) {
    pSVar5 = this + 4;
    iVar6 = 0x28;
    do {
      *pSVar5 = pSVar5[(int)param_1 - (int)this];
      pSVar5 = pSVar5 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf8 */
GEN_FRAME byte GEN_THISCALL F_010251d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10251d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_010252d3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_010252d8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_010252d3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_010252d8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_0102538a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
        return 1;
      }
    }
  }
LAB_0102538a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf22 */
GEN_FRAME byte GEN_THISCALL F_010253a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10253a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  undefined1 SVar5;
  
  if (param_1 != 0) {
    return 0;
  }
  uVar2 = F_00e8c050(param_2 GEN_EDX_FWD);
  param_1 = 0;
  do {
    if ((int)uVar2 <= param_1) {
      return 1;
    }
    uVar3 = F_00e9e450(param_2 GEN_EDX_ARG,param_1,param_1 >> 0x1f);
    uVar3 = F_00e82f00(uVar3 GEN_EDX_ARG);
    pcVar4 = (char *)F_0042a990(uVar3 GEN_EDX_ARG);
    SVar5 = (undefined1)0x0;
    cVar1 = *pcVar4;
    while (('/' < cVar1 && (cVar1 < ':'))) {
      SVar5 = (undefined1)((char)SVar5 * '\n' + cVar1 - 0x30);
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    this[param_1 + 4] = SVar5;
    param_1 = param_1 + 1;
  } while (param_1 < 0x28);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf17 */
GEN_FRAME byte GEN_THISCALL F_01025470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1025470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 4] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
    if (0x27 < iVar5) {
LAB_01025548: ;
      if (param_2 != (uint *)0x0) {
        uVar3 = F_00c51da0(uVar3 + 1,0x7d);
        *param_2 = uVar3;
      }
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_01025548;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf10 */
GEN_FRAME uint GEN_THISCALL F_01025580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1025580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf23 */
GEN_FRAME byte GEN_THISCALL F_010256a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10256a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined * this_01;
  int iVar1;
  undefined1 * puVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  this_00 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_00ea8220(this_00 GEN_EDX_ARG);
  F_00ea83e0(this_00 GEN_EDX_ARG,0x28,0);
  iVar1 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar1 + 4],0);
    puVar2 = ((undefined1 *)(gen_frame + 0x8));
    this_01 = (undefined *)F_00e9e450(this_00 GEN_EDX_ARG,iVar1,iVar1 >> 0x1f);
    F_00ea7fb0(this_01 GEN_EDX_ARG,puVar2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x28);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf9 */
GEN_FRAME uint GEN_THISCALL F_01025730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1025730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf11 */
GEN_FRAME byte GEN_THISCALL F_01025750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1025750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = (char *)F_0042a990(uVar5 GEN_EDX_ARG);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = (byte *)F_0042a990(uVar5 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_01025863: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01025868;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_01025863;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01025868: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_010259d7;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_010259d7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf24 */
GEN_FRAME byte GEN_THISCALL F_010259f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10259f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  char cVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  undefined1 SVar6;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_FWD,"value",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  if (param_1 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00e8c050(this_00 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0xc)) = 0;
  do {
    if ((int)uVar3 <= (*(int *)(gen_frame + 0xc))) break;
    uVar4 = F_00e9e450(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0xc)) >> 0x1f);
    uVar4 = F_00e82f00(uVar4 GEN_EDX_ARG);
    pcVar5 = (char *)F_0042a990(uVar4 GEN_EDX_ARG);
    cVar1 = *pcVar5;
    if (cVar1 == '-') {
      pcVar5 = pcVar5 + 1;
    }
    SVar6 = (undefined1)0x0;
    cVar2 = *pcVar5;
    while (('/' < cVar2 && (cVar2 < ':'))) {
      SVar6 = (undefined1)((char)SVar6 * '\n' + cVar2 - 0x30);
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar5;
    }
    if (cVar1 == '-') {
      SVar6 = (undefined1)-(char)SVar6;
    }
    this[(*(int *)(gen_frame + 0xc)) + 4] = SVar6;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
  } while ((*(int *)(gen_frame + 0xc)) < 0x28);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf18 */
GEN_FRAME byte GEN_THISCALL F_01025b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1025b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c8a4));
      iVar5 = uVar3 + 10;
      iVar6 = 0;
      do {
        uVar7 = F_00e50570(iVar5);
        this[iVar6 + 4] = SUB81(uVar7,0);
        uVar3 = F_00c51da0(iVar5,0x2c);
        iVar6 = iVar6 + 1;
        iVar5 = uVar3 + 2;
      } while (iVar6 < 0x28);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar5;
    }
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf13 */
GEN_FRAME uint GEN_THISCALL F_01025c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1025c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_ARG,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf25 */
GEN_FRAME byte GEN_THISCALL F_01025d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1025d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * this_00;
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  this_00 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberidx",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar1 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar1 GEN_EDX_ARG,uVar3,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,0);
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"datatype",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,&REFG(undefined, 0x12aa3c8));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x28;
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea83e0(pvVar1 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  iVar5 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar5 + 4],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar4 = iVar5 >> 0x1f;
    iVar6 = iVar5;
    pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    pvVar1 = (undefined *)F_00e9e450(pvVar1 GEN_EDX_ARG,iVar6,iVar4);
    F_00ea7fb0(pvVar1 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x28);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf14 */
GEN_FRAME byte GEN_THISCALL F_01025f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1025f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD,"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_010260b2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_010260b7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_010260b2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_010260b7: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_01025fbe;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
          return 1;
        }
      }
    }
  }
LAB_01025fbe: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf16 */
GEN_FRAME byte GEN_THISCALL F_01026210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1026210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_010263e0 */
GEN_FRAME byte GEN_THISCALL F_010263e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10263e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x4b);
  iVar2 = 0;
  do {
    *(undefined1 *)((int)this + iVar2 + 4) = *(undefined1 *)(iVar2 + uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x28);
  return 1;
}

/* ref: FUN_01026410 */
GEN_FRAME byte GEN_THISCALL F_01026410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1026410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x4b);
  iVar2 = 0;
  do {
    *(undefined1 *)(iVar2 + uVar1) = *(undefined1 *)((int)this + iVar2 + 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x28);
  return 1;
}

/* ref: FUN_01026440 */
GEN_FRAME byte GEN_THISCALL F_01026440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1026440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x4b);
  iVar2 = 0;
  do {
    *(undefined1 *)(iVar2 + uVar1) = *(undefined1 *)((int)this + iVar2 + 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x28);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf1 */
GEN_NOFRAME uint F_010264b0(void)
{
  GEN_ENTER(0x10264b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf2 */
GEN_NOFRAME uint F_010264c0(void)
{
  GEN_ENTER(0x10264c0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136c4b8);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf3 */
GEN_FRAME uint GEN_THISCALL F_010264d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10264d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0cc4) + param_1 * 4);
}

/* ref: FUN_010264f0 */
GEN_FRAME uint GEN_STDCALL F_010264f0(unsigned int gen_a0)
{
  GEN_ENTER(0x10264f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12b0cc8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_01026510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1026510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 1);
  return 0xffffffff;
}

/* ref: FUN_01026550 */
GEN_FRAME uint GEN_STDCALL F_01026550(unsigned int gen_a0)
{
  GEN_ENTER(0x1026550u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_01026560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1026560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136c4b4))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_01026580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1026580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0cb8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_010265a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10265a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0cc0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_010265c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10265c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3e50) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf10 */
GEN_FRAME uint GEN_THISCALL F_010265e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10265e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0cbc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf14 */
GEN_FRAME uint GEN_THISCALL F_01026600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1026600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12b0cc0) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12b0cc0) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3e50) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3e50) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12b0cbc) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e50) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12b0cb8) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12b0cbc) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0cb8) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf13 */
GEN_FRAME uint GEN_THISCALL F_01026680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1026680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e50) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12b0cbc) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0cb8) + param_1 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12b0cb8) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e50) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12b0cbc) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf12 */
GEN_FRAME uint GEN_THISCALL F_01026700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1026700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e50) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12b0cbc) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_01026790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1026790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf15 */
GEN_FRAME uint GEN_THISCALL F_010267a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10267a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD,param_1,0,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf19 */
GEN_FRAME uint GEN_THISCALL F_010267c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10267c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD,0,param_1,param_2);
  return uVar1;
}

/* ref: FUN_010267e0 */
GEN_NOFRAME uint GEN_THISCALL F_010267e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x10267e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b12c4));
  F_00c48350((undefined *)((int)this + 4),0,0x3c);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf2 */
GEN_FRAME uint GEN_THISCALL F_01026810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1026810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c544) + 0x10))))(&REFG(undefined * PTR32, 0x136c544),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_01026840 */
GEN_FRAME uint GEN_THISCALL F_01026840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1026840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c544) + 0x10))))(&REFG(undefined * PTR32, 0x136c544),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf4 */
GEN_FRAME uint GEN_THISCALL F_01026870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1026870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    return 0;
  }
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf3 */
GEN_FRAME uint GEN_THISCALL F_01026890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1026890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a2;
  if ((param_2 < *(uint *)(&REFG(undefined, 0x12b0cb8) + (*(int *)&gen_a1) * 4)) && ((*(int *)&gen_a1) == 0)) {
    return (uint)(this + param_2 + 4);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_010268c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10268c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pSVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    pSVar5 = this + 4;
    iVar6 = 0x3c;
    do {
      *pSVar5 = pSVar5[(int)param_1 - (int)this];
      pSVar5 = pSVar5 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_01026920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1026920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pSVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  if (((short)uVar3 == (short)uVar4) && ((*(int *)&gen_a2) == 0)) {
    pSVar5 = this + 4;
    iVar6 = 0x3c;
    do {
      *pSVar5 = pSVar5[(int)param_1 - (int)this];
      pSVar5 = pSVar5 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf8 */
GEN_FRAME byte GEN_THISCALL F_01026980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1026980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_01026a83: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01026a88;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_01026a83;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01026a88: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_01026b3a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
        return 1;
      }
    }
  }
LAB_01026b3a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf22 */
GEN_FRAME byte GEN_THISCALL F_01026b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1026b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  undefined1 SVar5;
  
  if (param_1 != 0) {
    return 0;
  }
  uVar2 = F_00e8c050(param_2 GEN_EDX_FWD);
  param_1 = 0;
  do {
    if ((int)uVar2 <= param_1) {
      return 1;
    }
    uVar3 = F_00e9e450(param_2 GEN_EDX_ARG,param_1,param_1 >> 0x1f);
    uVar3 = F_00e82f00(uVar3 GEN_EDX_ARG);
    pcVar4 = (char *)F_0042a990(uVar3 GEN_EDX_ARG);
    SVar5 = (undefined1)0x0;
    cVar1 = *pcVar4;
    while (('/' < cVar1 && (cVar1 < ':'))) {
      SVar5 = (undefined1)((char)SVar5 * '\n' + cVar1 - 0x30);
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    this[param_1 + 4] = SVar5;
    param_1 = param_1 + 1;
  } while (param_1 < 0x3c);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf17 */
GEN_FRAME byte GEN_THISCALL F_01026c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1026c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 4] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
    if (0x3b < iVar5) {
LAB_01026cf8: ;
      if (param_2 != (uint *)0x0) {
        uVar3 = F_00c51da0(uVar3 + 1,0x7d);
        *param_2 = uVar3;
      }
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_01026cf8;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf10 */
GEN_FRAME uint GEN_THISCALL F_01026d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1026d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf23 */
GEN_FRAME byte GEN_THISCALL F_01026e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1026e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined * this_01;
  int iVar1;
  undefined1 * puVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  this_00 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_00ea8220(this_00 GEN_EDX_ARG);
  F_00ea83e0(this_00 GEN_EDX_ARG,0x3c,0);
  iVar1 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar1 + 4],0);
    puVar2 = ((undefined1 *)(gen_frame + 0x8));
    this_01 = (undefined *)F_00e9e450(this_00 GEN_EDX_ARG,iVar1,iVar1 >> 0x1f);
    F_00ea7fb0(this_01 GEN_EDX_ARG,puVar2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x3c);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf9 */
GEN_FRAME uint GEN_THISCALL F_01026ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1026ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf11 */
GEN_FRAME byte GEN_THISCALL F_01026f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1026f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = (char *)F_0042a990(uVar5 GEN_EDX_ARG);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = (byte *)F_0042a990(uVar5 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_01027013: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01027018;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_01027013;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01027018: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_01027187;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_01027187: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf24 */
GEN_FRAME byte GEN_THISCALL F_010271a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10271a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  char cVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  undefined1 SVar6;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_FWD,"value",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  if (param_1 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00e8c050(this_00 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0xc)) = 0;
  do {
    if ((int)uVar3 <= (*(int *)(gen_frame + 0xc))) break;
    uVar4 = F_00e9e450(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0xc)) >> 0x1f);
    uVar4 = F_00e82f00(uVar4 GEN_EDX_ARG);
    pcVar5 = (char *)F_0042a990(uVar4 GEN_EDX_ARG);
    cVar1 = *pcVar5;
    if (cVar1 == '-') {
      pcVar5 = pcVar5 + 1;
    }
    SVar6 = (undefined1)0x0;
    cVar2 = *pcVar5;
    while (('/' < cVar2 && (cVar2 < ':'))) {
      SVar6 = (undefined1)((char)SVar6 * '\n' + cVar2 - 0x30);
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar5;
    }
    if (cVar1 == '-') {
      SVar6 = (undefined1)-(char)SVar6;
    }
    this[(*(int *)(gen_frame + 0xc)) + 4] = SVar6;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
  } while ((*(int *)(gen_frame + 0xc)) < 0x3c);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf18 */
GEN_FRAME byte GEN_THISCALL F_010272e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10272e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c94c));
      iVar5 = uVar3 + 10;
      iVar6 = 0;
      do {
        uVar7 = F_00e50570(iVar5);
        this[iVar6 + 4] = SUB81(uVar7,0);
        uVar3 = F_00c51da0(iVar5,0x2c);
        iVar6 = iVar6 + 1;
        iVar5 = uVar3 + 2;
      } while (iVar6 < 0x3c);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar5;
    }
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf13 */
GEN_FRAME uint GEN_THISCALL F_01027400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1027400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_ARG,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf25 */
GEN_FRAME byte GEN_THISCALL F_01027520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1027520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * this_00;
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  this_00 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberidx",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar1 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0);
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar1 GEN_EDX_ARG,uVar3,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,0);
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"datatype",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,&REFG(undefined, 0x12aa3c8));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x3c;
  pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea83e0(pvVar1 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  iVar5 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar5 + 4],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar4 = iVar5 >> 0x1f;
    iVar6 = iVar5;
    pvVar1 = (undefined *)F_00ea8380(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    pvVar1 = (undefined *)F_00e9e450(pvVar1 GEN_EDX_ARG,iVar6,iVar4);
    F_00ea7fb0(pvVar1 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x3c);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf14 */
GEN_FRAME byte GEN_THISCALL F_01027710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1027710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD,"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_01027862: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_01027867;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_01027862;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_01027867: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_0102776e;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
          return 1;
        }
      }
    }
  }
LAB_0102776e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf16 */
GEN_FRAME byte GEN_THISCALL F_010279c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10279c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_01027b90 */
GEN_FRAME byte GEN_THISCALL F_01027b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1027b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x4c);
  iVar2 = 0;
  do {
    *(undefined1 *)((int)this + iVar2 + 4) = *(undefined1 *)(iVar2 + uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x3c);
  return 1;
}

/* ref: FUN_01027bc0 */
GEN_FRAME byte GEN_THISCALL F_01027bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1027bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x4c);
  iVar2 = 0;
  do {
    *(undefined1 *)(iVar2 + uVar1) = *(undefined1 *)((int)this + iVar2 + 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x3c);
  return 1;
}

/* ref: FUN_01027bf0 */
GEN_FRAME byte GEN_THISCALL F_01027bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1027bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,0x4c);
  iVar2 = 0;
  do {
    *(undefined1 *)(iVar2 + uVar1) = *(undefined1 *)((int)this + iVar2 + 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x3c);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf1 */
GEN_NOFRAME uint F_01027c60(void)
{
  GEN_ENTER(0x1027c60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf2 */
GEN_NOFRAME uint F_01027c70(void)
{
  GEN_ENTER(0x1027c70u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136c4c0);
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf3 */
GEN_FRAME uint GEN_THISCALL F_01027c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1027c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0cdc) + param_1 * 4);
}

/* ref: FUN_01027ca0 */
GEN_FRAME uint GEN_STDCALL F_01027ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x1027ca0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12b0ce0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_01027cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1027cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 1);
  return 0xffffffff;
}

/* ref: FUN_01027d00 */
GEN_FRAME uint GEN_STDCALL F_01027d00(unsigned int gen_a0)
{
  GEN_ENTER(0x1027d00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_01027d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1027d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136c4bc))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_01027d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1027d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0cd0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_01027d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1027d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0cd8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_01027d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1027d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3e54) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf10 */
GEN_FRAME uint GEN_THISCALL F_01027d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1027d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12b0cd4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf14 */
GEN_FRAME uint GEN_THISCALL F_01027db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1027db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12b0cd8) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12b0cd8) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3e54) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3e54) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12b0cd4) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e54) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12b0cd0) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12b0cd4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0cd0) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf13 */
GEN_FRAME uint GEN_THISCALL F_01027e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1027e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e54) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12b0cd4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0cd0) + param_1 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12b0cd0) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e54) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12b0cd4) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf12 */
GEN_FRAME uint GEN_THISCALL F_01027eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1027eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e54) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12b0cd4) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_01027f40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1027f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf15 */
GEN_FRAME uint GEN_THISCALL F_01027f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1027f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD,param_1,0,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf19 */
GEN_FRAME uint GEN_THISCALL F_01027f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1027f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD,0,param_1,param_2);
  return uVar1;
}

/* ref: FUN_01027f90 */
GEN_NOFRAME uint GEN_THISCALL F_01027f90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1027f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b138c))
  ;
  F_00c48350((undefined *)((int)this + 4),0,0x50);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf2 */
GEN_FRAME uint GEN_THISCALL F_01027fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1027fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c548) + 0x10))))(&REFG(undefined * PTR32, 0x136c548),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_01027ff0 */
GEN_FRAME uint GEN_THISCALL F_01027ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1027ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c548) + 0x10))))(&REFG(undefined * PTR32, 0x136c548),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf4 */
GEN_FRAME uint GEN_THISCALL F_01028020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1028020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    return 0;
  }
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf3 */
GEN_FRAME uint GEN_THISCALL F_01028040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1028040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a2;
  if ((param_2 < *(uint *)(&REFG(undefined, 0x12b0cd0) + (*(int *)&gen_a1) * 4)) && ((*(int *)&gen_a1) == 0)) {
    return (uint)(this + param_2 + 4);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_01028070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1028070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pSVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    pSVar5 = this + 4;
    iVar6 = 0x50;
    do {
      *pSVar5 = pSVar5[(int)param_1 - (int)this];
      pSVar5 = pSVar5 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_010280d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10280d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pSVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  if (((short)uVar3 == (short)uVar4) && ((*(int *)&gen_a2) == 0)) {
    pSVar5 = this + 4;
    iVar6 = 0x50;
    do {
      *pSVar5 = pSVar5[(int)param_1 - (int)this];
      pSVar5 = pSVar5 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf8 */
GEN_FRAME byte GEN_THISCALL F_01028130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1028130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = (char *)F_0042a990(uVar6 GEN_EDX_ARG);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = (byte *)F_0042a990(uVar6 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_01028233: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01028238;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_01028233;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01028238: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_010282ea;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
        return 1;
      }
    }
  }
LAB_010282ea: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf22 */
GEN_FRAME byte GEN_THISCALL F_01028300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1028300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  undefined1 SVar5;
  
  if (param_1 != 0) {
    return 0;
  }
  uVar2 = F_00e8c050(param_2 GEN_EDX_FWD);
  param_1 = 0;
  do {
    if ((int)uVar2 <= param_1) {
      return 1;
    }
    uVar3 = F_00e9e450(param_2 GEN_EDX_ARG,param_1,param_1 >> 0x1f);
    uVar3 = F_00e82f00(uVar3 GEN_EDX_ARG);
    pcVar4 = (char *)F_0042a990(uVar3 GEN_EDX_ARG);
    SVar5 = (undefined1)0x0;
    cVar1 = *pcVar4;
    while (('/' < cVar1 && (cVar1 < ':'))) {
      SVar5 = (undefined1)((char)SVar5 * '\n' + cVar1 - 0x30);
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    this[param_1 + 4] = SVar5;
    param_1 = param_1 + 1;
  } while (param_1 < 0x50);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf17 */
GEN_FRAME byte GEN_THISCALL F_010283d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10283d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 4] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
    if (0x4f < iVar5) {
LAB_010284a8: ;
      if (param_2 != (uint *)0x0) {
        uVar3 = F_00c51da0(uVar3 + 1,0x7d);
        *param_2 = uVar3;
      }
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_010284a8;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf10 */
GEN_FRAME uint GEN_THISCALL F_010284e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10284e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf23 */
GEN_FRAME byte GEN_THISCALL F_01028600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1028600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined * this_01;
  int iVar1;
  undefined1 * puVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  this_00 = (undefined *)F_00e9e450(param_1 GEN_EDX_FWD,0,0);
  F_00ea8220(this_00 GEN_EDX_ARG);
  F_00ea83e0(this_00 GEN_EDX_ARG,0x50,0);
  iVar1 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar1 + 4],0);
    puVar2 = ((undefined1 *)(gen_frame + 0x8));
    this_01 = (undefined *)F_00e9e450(this_00 GEN_EDX_ARG,iVar1,iVar1 >> 0x1f);
    F_00ea7fb0(this_01 GEN_EDX_ARG,puVar2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x50);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf9 */
GEN_FRAME uint GEN_THISCALL F_01028690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1028690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf11 */
GEN_FRAME byte GEN_THISCALL F_010286b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10286b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_FWD);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = (char *)F_0042a990(uVar5 GEN_EDX_ARG);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = (byte *)F_0042a990(uVar5 GEN_EDX_ARG);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_010287c3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_010287c8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_010287c3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_010287c8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_01028937;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_01028937: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf24 */
GEN_FRAME byte GEN_THISCALL F_01028950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1028950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  char cVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  undefined1 SVar6;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_FWD,"value",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  if (param_1 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
  uVar3 = F_00e8c050(this_00 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0xc)) = 0;
  do {
    if ((int)uVar3 <= (*(int *)(gen_frame + 0xc))) break;
    uVar4 = F_00e9e450(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0xc)) >> 0x1f);
    uVar4 = F_00e82f00(uVar4 GEN_EDX_ARG);
    pcVar5 = (char *)F_0042a990(uVar4 GEN_EDX_ARG);
    cVar1 = *pcVar5;
    if (cVar1 == '-') {
      pcVar5 = pcVar5 + 1;
    }
    SVar6 = (undefined1)0x0;
    cVar2 = *pcVar5;
    while (('/' < cVar2 && (cVar2 < ':'))) {
      SVar6 = (undefined1)((char)SVar6 * '\n' + cVar2 - 0x30);
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar5;
    }
    if (cVar1 == '-') {
      SVar6 = (undefined1)-(char)SVar6;
    }
    this[(*(int *)(gen_frame + 0xc)) + 4] = SVar6;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
  } while ((*(int *)(gen_frame + 0xc)) < 0x50);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 1;
}

