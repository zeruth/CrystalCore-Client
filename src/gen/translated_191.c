#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Application::Network::WorkDefinitions::CharaMake::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5c8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5c8e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined * puVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar4 = F_00e8c050(pvVar2 GEN_EDX_ARG);
    iVar5 = 0;
    while (iVar5 < (int)uVar4) {
      uVar3 = F_00e9e450(pvVar2 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      uVar3 = F_00e82f00(uVar3 GEN_EDX_ARG);
      uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
      uVar6 = F_00e505e0(uVar3);
      this[iVar5 + 4] = SUB81(uVar6,0);
      iVar5 = iVar5 + 1;
      if (0x19 < iVar5) {
        return 1;
      }
    }
    break;
  case 1: ;
    uVar4 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar4);
    this[0x1e] = SUB81(uVar6,0);
    return 1;
  case 2: ;
    uVar4 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar4);
    this[0x1f] = SUB81(uVar6,0);
    return 1;
  case 3: ;
    uVar4 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar4);
    this[0x20] = SUB81(uVar6,0);
    return 1;
  case 4: ;
    uVar4 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar4);
    this[0x21] = SUB81(uVar6,0);
    return 1;
  case 5: ;
    uVar4 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar4);
    this[0x22] = SUB81(uVar6,0);
    return 1;
  case 6: ;
    puVar7 = &REFG(undefined, 0x1158a00);
    pvVar2 = ((undefined *)GEN_TOP(F_00e82f00(pvVar2 GEN_EDX_ARG)));
    bVar1 = F_0042b6a0(pvVar2 GEN_EDX_ARG,puVar7);
    this[0x23] = (undefined1)(bVar1 == 0);
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5cae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5cae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b144));
      iVar5 = uVar3 + 10;
      iVar6 = 0;
      do {
        uVar7 = F_00e50570(iVar5);
        this[iVar6 + 4] = SUB81(uVar7,0);
        uVar3 = F_00c51da0(iVar5,0x2c);
        iVar6 = iVar6 + 1;
        iVar5 = uVar3 + 2;
      } while (iVar6 < 0x1a);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x1e] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x1f] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x20] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x21] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x22] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      this[0x23] = (undefined1)(*((char *)GEN_TOP((uVar3 + 9))) != '0');
    }
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      *param_2 = iVar5;
    }
    return 1;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e5cdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5cdf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5cf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5cf10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x80, 0, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x1a;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x0)) + 4],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 0x1a);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1e],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1f],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x20],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x21],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x22],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x23]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5d8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5d8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e5da32: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e5da37;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e5da32;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e5da37: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
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
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5db90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5db90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: FUN_00e5dd60 */
GEN_LIB GEN_NOFRAME unsigned int F_00e5dd60(void)
{
  GEN_ENTER(0xe5dd60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5dd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5dd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint * puVar4;
  int iVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar2;
  puVar1 = param_3 + 1;
  puVar4 = puVar1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined1 *)puVar1 = *((undefined1 *)GEN_TOP((param_1 + 4)));
    return 5;
  case 1: ;
    *(undefined1 *)puVar1 = *((undefined1 *)GEN_TOP((param_1 + 5)));
    return 5;
  case 2: ;
    *puVar1 = *((uint *)GEN_TOP((param_1 + 8)));
    param_3[2] = *((uint *)GEN_TOP((param_1 + 0xc)));
    return 0xc;
  case 3: ;
    *(undefined1 *)puVar1 = *((undefined1 *)GEN_TOP((param_1 + 0x10)));
    return 5;
  case 4: ;
    *(undefined1 *)puVar1 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0x18;
    puVar3 = ((undefined4 *)GEN_TOP(((int)param_3 + 7)));
    iVar5 = 0;
    do {
      *puVar3 = *((undefined4 *)GEN_TOP((param_1 + 0x18 + iVar5 * 8)));
      puVar3[1] = *((undefined4 *)GEN_TOP((param_1 + 0x1c + iVar5 * 8)));
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar5 < 0x18);
    return (int)puVar3 - (int)param_3;
  case 5: ;
    puVar4 = param_3 + 2;
    *puVar1 = *((uint *)GEN_TOP((param_1 + 0xd8)));
  }
  return (int)puVar4 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5de60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe5de60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 4) {
    uVar1 = F_00e67cf0(param_1 + 0x18,(undefined1)param_3,param_4,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5deb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe5deb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 4) {
    uVar1 = F_00e67d80(param_1 + 0x18,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5df00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5df00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *((char *)GEN_TOP((param_3 + 4))) = (char)*puVar3;
      return 5;
    case 1: ;
      *((char *)GEN_TOP((param_3 + 5))) = (char)*puVar3;
      return 5;
    case 2: ;
      *((uint *)GEN_TOP((param_3 + 8))) = *puVar3;
      *((uint *)GEN_TOP((param_3 + 0xc))) = param_2[2];
      return 0xc;
    case 3: ;
      *((char *)GEN_TOP((param_3 + 0x10))) = (char)*puVar3;
      return 5;
    case 4: ;
      uVar2 = F_00e67e80(puVar3,param_3 + 0x18,0x18);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 5: ;
      *((uint *)GEN_TOP((param_3 + 0xd8))) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00e5dfe0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e5dfe0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe5dfe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined2 *)(in_ecx + 1) = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  *(undefined1 *)(in_ecx + 4) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x1158a6c));
  in_ecx[0x36] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  puVar2 = in_ecx + 6;
  puVar3 = in_ecx + 8;
  for (iVar1 = 0x2e; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00e5e020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1158a6c));
  F_00e50e10(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5e0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 4)));
    return 8;
  case 1: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 8)));
    return 5;
  case 2: ;
    *(undefined1 *)puVar2 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 2;
    *((undefined4 *)GEN_TOP(((int)param_3 + 7))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    *((undefined4 *)GEN_TOP(((int)param_3 + 0xb))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    return 0xf;
  case 3: ;
    *(undefined1 *)puVar2 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 4;
    *((undefined4 *)GEN_TOP(((int)param_3 + 7))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
    *((undefined4 *)GEN_TOP(((int)param_3 + 0xb))) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
    *((undefined4 *)GEN_TOP(((int)param_3 + 0xf))) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
    *((undefined4 *)GEN_TOP(((int)param_3 + 0x13))) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 0x17)));
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe5e150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 2) {
    uVar1 = F_00e67fb0(param_1 + 0xc,(undefined1)param_3,param_4,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  else if (param_2 == 3) {
    uVar1 = F_00e68050(param_1 + 0x14,(undefined1)param_3,param_4,puVar2);
    return (int)puVar2 + (uVar1 - (int)param_5);
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe5e1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 2) {
    uVar1 = F_00e680b0(param_1 + 0xc,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  else if (param_2 == 3) {
    uVar1 = F_00e68160(param_1 + 0x14,param_3,param_4,param_5,param_6,puVar2);
    return (int)puVar2 + (uVar1 - (int)param_7);
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: FUN_00e5e240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1158654));
  F_00e53220(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5e2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  undefined1 * puVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar3 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0x15;
    puVar2 = ((undefined1 *)GEN_TOP(((int)param_3 + 7)));
    iVar4 = 0;
    do {
      *puVar2 = *((undefined1 *)GEN_TOP((iVar4 + 4 + param_1)));
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar4 < 0x15);
    return (int)puVar2 - (int)param_3;
  case 1: ;
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 8;
    *((undefined1 *)GEN_TOP(((int)param_3 + 7))) = *((undefined1 *)GEN_TOP((param_1 + 0x19)));
    *(undefined1 *)(param_3 + 2) = *((undefined1 *)GEN_TOP((param_1 + 0x1a)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 9))) = *((undefined1 *)GEN_TOP((param_1 + 0x1b)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 10))) = *((undefined1 *)GEN_TOP((param_1 + 0x1c)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 0xb))) = *((undefined1 *)GEN_TOP((param_1 + 0x1d)));
    *(undefined1 *)(param_3 + 3) = *((undefined1 *)GEN_TOP((param_1 + 0x1e)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 0xd))) = *((undefined1 *)GEN_TOP((param_1 + 0x1f)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 0xe))) = *((undefined1 *)GEN_TOP((param_1 + 0x20)));
    return 0xf;
  case 2: ;
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 3;
    *((undefined1 *)GEN_TOP(((int)param_3 + 7))) = *((undefined1 *)GEN_TOP((param_1 + 0x21)));
    *(undefined1 *)(param_3 + 2) = *((undefined1 *)GEN_TOP((param_1 + 0x22)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 9))) = *((undefined1 *)GEN_TOP((param_1 + 0x23)));
    return 10;
  case 3: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x24)));
    return 5;
  case 4: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x25)));
    return 5;
  case 5: ;
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 3;
    *((undefined1 *)GEN_TOP(((int)param_3 + 7))) = *((undefined1 *)GEN_TOP((param_1 + 0x26)));
    *(undefined1 *)(param_3 + 2) = *((undefined1 *)GEN_TOP((param_1 + 0x27)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 9))) = *((undefined1 *)GEN_TOP((param_1 + 0x28)));
    return 10;
  case 6: ;
    *puVar3 = *((uint *)GEN_TOP((param_1 + 0x2c)));
    return 8;
  case 7: ;
    *puVar3 = *((uint *)GEN_TOP((param_1 + 0x30)));
    return 8;
  case 8: ;
    *puVar3 = *((uint *)GEN_TOP((param_1 + 0x34)));
    puVar3 = param_3 + 2;
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe5e450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  puVar3 = param_5 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    uVar1 = F_00e68310(param_1 + 4,(undefined1)param_3,param_4,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_5);
  case 1: ;
    iVar2 = param_1 + 0x19;
    break;
  case 2: ;
    iVar2 = param_1 + 0x21;
    break;
  default: ;
    goto switchD_00e5e46e_caseD_3;
  case 5: ;
    iVar2 = param_1 + 0x26;
  }
  uVar1 = F_00e68370(iVar2,(undefined1)param_3,param_4,puVar3);
  puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar1)));
switchD_00e5e46e_caseD_3: ;
  return (int)puVar3 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe5e4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  puVar3 = param_7 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    uVar1 = F_00e683d0(param_1 + 4,param_3,param_4,param_5,param_6,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_7);
  case 1: ;
    iVar2 = param_1 + 0x19;
    break;
  case 2: ;
    iVar2 = param_1 + 0x21;
    break;
  default: ;
    goto switchD_00e5e512_caseD_3;
  case 5: ;
    iVar2 = param_1 + 0x26;
  }
  uVar1 = F_00e68470(iVar2,param_3,param_4,param_5,param_6,puVar3);
  puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar1)));
switchD_00e5e512_caseD_3: ;
  return (int)puVar3 - (int)param_7;
}

/* ref: FUN_00e5e5c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x115872c));
  F_00e553b0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5e640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 8)));
    param_3[2] = *((uint *)GEN_TOP((param_1 + 0xc)));
    return 0xc;
  case 1: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x10)));
    return 8;
  case 2: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 0x14)));
    return 5;
  case 3: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 0x15)));
    return 5;
  case 4: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x18)));
    puVar2 = param_3 + 2;
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5e6e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar1 == uVar2) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *((uint *)GEN_TOP((param_3 + 8))) = *puVar3;
      *((uint *)GEN_TOP((param_3 + 0xc))) = param_2[2];
      return 0xc;
    case 1: ;
      *((uint *)GEN_TOP((param_3 + 0x10))) = *puVar3;
      return 8;
    case 2: ;
      *((char *)GEN_TOP((param_3 + 0x14))) = (char)*puVar3;
      return 5;
    case 3: ;
      *((char *)GEN_TOP((param_3 + 0x15))) = (char)*puVar3;
      return 5;
    case 4: ;
      *((uint *)GEN_TOP((param_3 + 0x18))) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00e5e7a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11587fc));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1[3];
    *((int *)GEN_TOP(((int)this + 0x10))) = param_1[4];
    *((char *)GEN_TOP(((int)this + 0x14))) = (char)param_1[5];
    *((undefined1 *)GEN_TOP(((int)this + 0x15))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x15)));
    *((int *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5e870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  undefined4 * puVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar3 = param_3 + 1;
  if (param_2 == 0) {
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0xa0;
    puVar3 = ((uint *)GEN_TOP(((int)param_3 + 7)));
    iVar4 = 0;
    do {
      *(undefined2 *)puVar3 = *((undefined2 *)GEN_TOP((param_1 + 4 + iVar4 * 2)));
      iVar4 = iVar4 + 1;
      puVar3 = ((uint *)GEN_TOP(((int)puVar3 + 2)));
    } while (iVar4 < 0xa0);
  }
  else if (param_2 == 1) {
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0x14;
    puVar2 = ((undefined4 *)GEN_TOP(((int)param_3 + 7)));
    iVar4 = 0;
    do {
      *puVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x144 + iVar4 * 4)));
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar4 < 0x14);
    return (int)puVar2 - (int)param_3;
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe5e8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e685e0(param_1 + 4,(undefined1)param_3,param_4,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  else if (param_2 == 1) {
    uVar1 = F_00e68640(param_1 + 0x144,(undefined1)param_3,param_4,puVar2);
    return (int)puVar2 + (uVar1 - (int)param_5);
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe5e960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e686a0(param_1 + 4,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  else if (param_2 == 1) {
    uVar1 = F_00e68750(param_1 + 0x144,param_3,param_4,param_5,param_6,puVar2);
    return (int)puVar2 + (uVar1 - (int)param_7);
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: FUN_00e5e9e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11588c4));
  F_00e5a0c0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ea00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ea00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ea20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ea20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ea40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ea40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ea60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5ea60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  undefined1 * puVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar3 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0x1a;
    puVar2 = ((undefined1 *)GEN_TOP(((int)param_3 + 7)));
    iVar4 = 0;
    do {
      *puVar2 = *((undefined1 *)GEN_TOP((iVar4 + 4 + param_1)));
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar4 < 0x1a);
    return (int)puVar2 - (int)param_3;
  case 1: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x1e)));
    return 5;
  case 2: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x1f)));
    return 5;
  case 3: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x20)));
    return 5;
  case 4: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x21)));
    return 5;
  case 5: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x22)));
    return 5;
  case 6: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x23)));
    puVar3 = ((uint *)GEN_TOP(((int)param_3 + 5)));
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5eb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe5eb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e68370(param_1 + 4,(undefined1)param_3,param_4,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5eb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe5eb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e68470(param_1 + 4,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ebe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5ebe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar2 = F_00e68510(puVar3,param_3 + 4,0x1a);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 1: ;
      *((char *)GEN_TOP((param_3 + 0x1e))) = (char)*puVar3;
      return 5;
    case 2: ;
      *((char *)GEN_TOP((param_3 + 0x1f))) = (char)*puVar3;
      return 5;
    case 3: ;
      *((char *)GEN_TOP((param_3 + 0x20))) = (char)*puVar3;
      return 5;
    case 4: ;
      *((char *)GEN_TOP((param_3 + 0x21))) = (char)*puVar3;
      return 5;
    case 5: ;
      *((char *)GEN_TOP((param_3 + 0x22))) = (char)*puVar3;
      return 5;
    case 6: ;
      *((char *)GEN_TOP((param_3 + 0x23))) = (char)*puVar3;
      puVar3 = ((uint *)GEN_TOP(((int)param_2 + 5)));
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00e5ecd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ecd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ecd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1158994));
  F_00e5bd10(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ecf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ecf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ed10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ed10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ed30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ed30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ed50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5ed50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *((uint *)GEN_TOP((param_3 + 4))) = *puVar3;
      return 8;
    case 1: ;
      *((char *)GEN_TOP((param_3 + 8))) = (char)*puVar3;
      return 5;
    case 2: ;
      uVar2 = F_00e68230(puVar3,param_3 + 0xc,2);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 3: ;
      uVar2 = F_00e68dc0(puVar3,param_3 + 0x14,4);
      puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar2)));
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ee00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5ee00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar2 = F_00e68ea0(puVar3,param_3 + 4,0x15);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 1: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0x19,8);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 2: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0x21,3);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 3: ;
      *((char *)GEN_TOP((param_3 + 0x24))) = (char)*puVar3;
      return 5;
    case 4: ;
      *((char *)GEN_TOP((param_3 + 0x25))) = (char)*puVar3;
      return 5;
    case 5: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0x26,3);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 6: ;
      *((uint *)GEN_TOP((param_3 + 0x2c))) = *puVar3;
      return 8;
    case 7: ;
      *((uint *)GEN_TOP((param_3 + 0x30))) = *puVar3;
      return 8;
    case 8: ;
      *((uint *)GEN_TOP((param_3 + 0x34))) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ef50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5ef50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    if (param_1 == 0) {
      uVar2 = F_00e68f70(puVar3,param_3 + 4,0xa0);
      puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar2)));
    }
    else if (param_1 == 1) {
      uVar2 = F_00e68800(puVar3,param_3 + 0x144,0x14);
      return (int)puVar3 + (uVar2 - (int)param_2);
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5efc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5efc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x78, 8, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  char * PTR32 * ppcVar10;
  char * pcVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  undefined * pFVar14;
  ulonglong uVar15;
  float fVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74));
  pcVar8 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x30));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x30)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x30)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)))));
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
  if (pcVar5 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 0xb;
  pcVar5 = param_1;
  do {
    pcVar11 = pcVar5;
    pcVar5 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  iVar6 = 1;
  for (pcVar5 = pcVar8; pcVar7 = pcVar11 - 1, pcVar5 < pcVar11 - 1; pcVar5 = pcVar5 + 1) {
    if (*pcVar5 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, pcVar7 = pcVar5, iVar6 == 0)) break;
  }
  pcVar8 = ((char *)GEN_TOP(F_00e50750(pcVar8,((char *)REFP(0x1158ae0)),pcVar7)));
  if (pcVar8 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar8 + 0xc;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x2c)) = (*(char * PTR32 *)(gen_frame + 0x28));
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x14));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28));
  while (pcVar5 != pcVar8) {
    cVar1 = *pcVar5;
    if (cVar1 == '\"') {
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5;
      if ((&(*(char * PTR32 *)(gen_frame + 0x2c)) < ppcVar12) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) <= &(*(char * PTR32 *)(gen_frame + 0x2c)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x2c)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
        }
        if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
        }
        if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar12 = pcVar5;
        }
      }
      ppcVar12 = ppcVar12 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppcVar12;
      pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
      pcVar11 = (*(char * PTR32 *)(gen_frame + 0x14));
    }
    else {
      if (cVar1 == '{') {
        (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5;
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x2c)));
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x2c)) + 1;
        iVar6 = 1;
        if (pcVar5 == pcVar11) goto LAB_00e5f38b;
        do {
          if (*pcVar5 == '{') {
            iVar6 = iVar6 + 1;
          }
          else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 != pcVar11);
      }
      else {
        if (cVar1 != '[') goto LAB_00e5f1f3;
        cVar1 = pcVar5[1];
        (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5 + 1;
        iVar6 = 1;
        if (cVar1 == '\"') {
LAB_00e5f1bb: ;
          (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5 + 2;
        }
        else if (cVar1 == '[') {
          iVar6 = 2;
          goto LAB_00e5f1bb;
        }
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x2c)));
        for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x2c)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
          if (*pcVar5 == '[') {
            iVar6 = iVar6 + 1;
          }
          else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
        }
      }
      ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
      if (iVar6 == 1) goto LAB_00e5f38b;
    }
LAB_00e5f1f3: ;
    pcVar5 = pcVar5 + 1;
    (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5;
    uVar4 = (*(uint *)(gen_frame + 0x10));
  }
  pcVar8 = ((char *)GEN_TOP(((int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar8;
  if ((int)uVar4 < (int)pcVar8) {
LAB_00e5f38b: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x14));
  (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x14));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x14));
  while (cVar1 != ']') {
    if (*pcVar8 == '\"') {
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar8;
      if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)ppcVar12;
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar4 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (0x3ffffffe < uVar4) {
LAB_00e5f371: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar4 = uVar4 + 1;
          uVar9 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (uVar9 < uVar4) {
            if (0x3fffffff - (uVar9 >> 1) < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar4) {
              uVar9 = uVar4;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar9);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        pcVar8 = (*(char * PTR32 *)(gen_frame + 0x28));
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = ppcVar12[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar13 == ppcVar10) {
          uVar4 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (0x3ffffffe < uVar4) goto LAB_00e5f371;
          uVar4 = uVar4 + 1;
          uVar9 = (int)ppcVar10 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (uVar9 < uVar4) {
            if (0x3fffffff - (uVar9 >> 1) < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar4) {
              uVar9 = uVar4;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar9);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = pcVar8;
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
      pcVar8 = ((char *)GEN_TOP(F_00c51da0(pcVar8 + 1,0x22)));
      ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
      if (pcVar8 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar12);
        }
        goto LAB_00e5f38b;
      }
    }
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
    (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar8;
  }
  pcVar8 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar8;
  if ((int)(*(uint *)(gen_frame + 0x10)) < (int)pcVar8) {
    if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar12);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x2c)) != pcVar8) {
    if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar12);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar11) {
      if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[4] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar8);
    }
    if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x2c))) {
      uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
      this[5] = SUB81(uVar15,0);
      goto LAB_00e5f519;
    }
LAB_00e5f4cf: ;
    if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar12);
    }
joined_r0x00e5f4e0: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
LAB_00e5f519: ;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar11) goto LAB_00e5f4cf;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(ulonglong *)(this + 8) = uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar11) goto LAB_00e5f4cf;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[0x10] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  if (pcVar8 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x28)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar8 == ppcVar12[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x28)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar5) {
      if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar12);
      }
      goto joined_r0x00e5f4e0;
    }
    pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar5];
    pFVar14 = this + 0x18;
    (*(uint *)(gen_frame + 0x10)) = 0x18;
    do {
      uVar15 = F_00e50570(pcVar8);
      *(ulonglong *)pFVar14 = uVar15;
      uVar9 = F_00c51da0(pcVar8,0x2c);
      pFVar14 = pFVar14 + 8;
      uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
      (*(uint *)(gen_frame + 0x10)) = uVar4;
      pcVar8 = ((char *)GEN_TOP((uVar9 + 2)));
    } while (uVar4 != 0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  if (pcVar8 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x28)) != ((char *)GEN_TOP(0x0))) {
      pcVar5 = ((char *)GEN_TOP(0x0));
      do {
        if (pcVar8 == ppcVar12[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x28)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar5) {
      if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar12);
      }
      goto joined_r0x00e5f4e0;
    }
    fVar16 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar5]);
    *(float *)(this + 0xd8) = fVar16;
  }
  if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar12);
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5f750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5f750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  char * pcVar9;
  char * pcVar10;
  uint uVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  undefined * pGVar14;
  ulonglong uVar15;
  float fVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  pcVar9 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x34));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar9,((char *)(gen_frame + 0x34)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x34)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  uVar4 = F_00fb9ad0(pcVar9,((char *)REFP(0x1158af0)));
  if (uVar4 == 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP((uVar4 + 0xb)));
  pcVar10 = param_1;
  do {
    pcVar7 = pcVar10;
    pcVar10 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar6 = 1;
  for (pcVar10 = pcVar9; pcVar8 = pcVar7 - 1, pcVar10 < pcVar7 - 1; pcVar10 = pcVar10 + 1) {
    if (*pcVar10 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar10 == '}') && (iVar6 = iVar6 - 1, pcVar8 = pcVar10, iVar6 == 0)) break;
  }
  pcVar9 = ((char *)GEN_TOP(F_00e50750(pcVar9,((char *)REFP(0x1158ae0)),pcVar8)));
  if (pcVar9 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x18)) = pcVar9 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar9;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 4))))((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG)));
  pcVar10 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG)));
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar10;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,pcVar10);
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
  pcVar10 = (*(char * PTR32 *)(gen_frame + 0x18));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
  if (pcVar5 != pcVar9) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          }
          if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          }
          if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar13 = pcVar5;
          }
        }
        ppcVar13 = ppcVar13 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = ppcVar13;
        pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
        pcVar10 = (*(char * PTR32 *)(gen_frame + 0x18));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x30)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x30)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar10) goto LAB_00e5fdb7;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar10);
        }
        else {
          if (cVar1 != '[') goto LAB_00e5f993;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_00e5f95b: ;
            (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_00e5f95b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x30)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x30)); pcVar5 != pcVar10; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          }
        }
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        if (iVar6 == 1) goto LAB_00e5fdb7;
      }
LAB_00e5f993: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x1c)));
  }
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
  pcVar5 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar5;
  if ((int)(*(char * PTR32 *)(gen_frame + 0x10)) < (int)pcVar5) {
LAB_00e5fdb7: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    }
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(char * PTR32 *)(gen_frame + 0x10)));
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x18));
  (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x18));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  pGVar14 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x18));
  while ((*(undefined * PTR32 *)(gen_frame + 0x14)) = pGVar14, (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5, cVar1 != ']') {
    if (*pcVar5 == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar12) && (ppcVar13 <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)ppcVar13;
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar4 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar4) {
LAB_00e5fb19: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar4 = uVar4 + 1;
          uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar11 < uVar4) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar4) {
              uVar11 = uVar4;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar11);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar12 = ppcVar13[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar4 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar4) goto LAB_00e5fb19;
          uVar4 = uVar4 + 1;
          uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar11 < uVar4) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar4) {
              uVar11 = uVar4;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar11);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar12 = pcVar5;
        }
      }
      ppcVar12 = ppcVar12 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar12;
      pcVar5 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x30)) + 1,0x22)));
      (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
      if (pcVar5 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar13);
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) == ((char * PTR32 *)GEN_TOP(0x0))) {
          return 0;
        }
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
        return 0;
      }
    }
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
    (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
    pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
    pGVar14 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  }
  pcVar5 = ((char *)GEN_TOP(((int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar5;
  if ((int)pcVar9 < (int)pcVar5) {
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x1c)) != pcVar5) {
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)pGVar14 + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(pGVar14)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  if (pcVar9 != ((char *)GEN_TOP(0x0))) {
    pcVar10 = ((char *)GEN_TOP(0x0));
    if (pcVar5 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar9 == ppcVar13[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar5);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x1c)) <= pcVar10) goto LAB_00e5fc47;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
    *(int *)(pGVar14 + 4) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pGVar14 + 4))))(pGVar14 GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
  if (pcVar9 != ((char *)GEN_TOP(0x0))) {
    pcVar10 = ((char *)GEN_TOP(0x0));
    if (pcVar5 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar9 == ppcVar13[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar5);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x1c)) <= pcVar10) {
LAB_00e5fc47: ;
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
    pGVar14[8] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pGVar14 + 4))))(pGVar14 GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  if (pcVar9 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x10)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar9 == ppcVar13[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x10)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x1c)) <= pcVar5) {
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      if (ppcVar12 == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0(ppcVar12);
      return 0;
    }
    pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar5];
    pGVar14 = pGVar14 + 0xc;
    iVar6 = 2;
    do {
      fVar16 = F_00e50660(pcVar9);
      *(float *)pGVar14 = fVar16;
      uVar4 = F_00c51da0(pcVar9,0x2c);
      pGVar14 = pGVar14 + 4;
      iVar6 = iVar6 - 1;
      pcVar9 = ((char *)GEN_TOP((uVar4 + 2)));
    } while (iVar6 != 0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 4))))((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  if (pcVar9 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x10)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x10)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x1c)) <= pcVar5) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      goto LAB_00e5fdb7;
    }
    pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar5];
    pGVar14 = (*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x14;
    iVar6 = 4;
    do {
      uVar15 = F_00e505e0(pcVar9);
      *(int *)pGVar14 = (int)uVar15;
      uVar4 = F_00c51da0(pcVar9,0x2c);
      pGVar14 = pGVar14 + 4;
      iVar6 = iVar6 - 1;
      pcVar9 = ((char *)GEN_TOP((uVar4 + 2)));
    } while (iVar6 != 0);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5fe50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5fe50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  char * pcVar11;
  uint uVar12;
  char * PTR32 * ppcVar13;
  char * PTR32 * ppcVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  pcVar9 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x2c));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar9,((char *)(gen_frame + 0x2c)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x2c)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  uVar4 = F_00fb9ad0(pcVar9,((char *)REFP(0x1158af0)));
  if (uVar4 == 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP((uVar4 + 0xb)));
  pcVar11 = param_1;
  do {
    pcVar7 = pcVar11;
    pcVar11 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar6 = 1;
  for (pcVar11 = pcVar9; pcVar8 = pcVar7 - 1, pcVar11 < pcVar7 - 1; pcVar11 = pcVar11 + 1) {
    if (*pcVar11 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar11 == '}') && (iVar6 = iVar6 - 1, pcVar8 = pcVar11, iVar6 == 0)) break;
  }
  pcVar9 = ((char *)GEN_TOP(F_00e50750(pcVar9,((char *)REFP(0x1158ae0)),pcVar8)));
  if (pcVar9 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar9 + 0xc;
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar9;
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  if (pcVar5 != pcVar9) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
          }
          if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
          }
          if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar13 = pcVar5;
          }
        }
        ppcVar13 = ppcVar13 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ppcVar13;
        pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar11) goto LAB_00e606ef;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar11);
        }
        else {
          if (cVar1 != '[') goto LAB_00e60093;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_00e6005b: ;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_00e6005b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          }
        }
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        if (iVar6 == 1) goto LAB_00e606ef;
      }
LAB_00e60093: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x24)));
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
  (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  while (cVar1 != ']') {
    if (*(*(char * PTR32 *)(gen_frame + 0x24)) == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x24)) < ppcVar14) && (ppcVar13 <= &(*(char * PTR32 *)(gen_frame + 0x24)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x24)) - (int)ppcVar13;
        if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar10) {
LAB_00e60236: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar14 = ppcVar13[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar10) goto LAB_00e60236;
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar14 = (*(char * PTR32 *)(gen_frame + 0x24));
        }
      }
      ppcVar14 = ppcVar14 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar14;
      pcVar9 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x24)) + 1,0x22)));
      (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar9;
      if (pcVar9 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar13);
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
          return 0;
        }
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
        return 0;
      }
    }
    (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
    cVar1 = *(*(char * PTR32 *)(gen_frame + 0x24));
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x28)) != pcVar9) {
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x24)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x24)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    pcVar5 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11];
    uVar4 = F_00c51da0(pcVar5,0x22);
    F_00c4d9ef(this + 4,uVar4 + (1 - (int)pcVar5),pcVar5,0xffffffff);
  }
  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar11 = ((char *)GEN_TOP(F_00fb9ad0(pcVar9,((char *)(gen_frame + 0x2c)))));
  if (pcVar11 != ((char *)GEN_TOP(0x0))) {
    pcVar9 = ((char *)GEN_TOP(0x0));
    if (pcVar5 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar11 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar9]) break;
        pcVar9 = pcVar9 + 1;
      } while (pcVar9 < pcVar5);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar9) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    pcVar5 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar9];
    iVar6 = 0;
    do {
      uVar15 = F_00e50570(pcVar5);
      this[iVar6 + 0x19] = SUB81(uVar15,0);
      uVar4 = F_00c51da0(pcVar5,0x2c);
      iVar6 = iVar6 + 1;
      pcVar5 = ((char *)GEN_TOP((uVar4 + 2)));
      pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
    } while (iVar6 < 8);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = ((char *)GEN_TOP(F_00fb9ad0(pcVar9,((char *)(gen_frame + 0x2c)))));
  if (pcVar9 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x24)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x24)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar5) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar5];
    iVar6 = 0;
    do {
      uVar15 = F_00e50570(pcVar9);
      this[iVar6 + 0x21] = SUB81(uVar15,0);
      uVar4 = F_00c51da0(pcVar9,0x2c);
      iVar6 = iVar6 + 1;
      pcVar9 = ((char *)GEN_TOP((uVar4 + 2)));
    } while (iVar6 < 3);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x24));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x24)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x24)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    this[0x24] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto LAB_00e607df;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    this[0x25] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar9 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x24)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x24)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar5) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar5];
    iVar6 = 0;
    do {
      uVar15 = F_00e50570(pcVar9);
      this[iVar6 + 0x26] = SUB81(uVar15,0);
      uVar4 = F_00c51da0(pcVar9,0x2c);
      iVar6 = iVar6 + 1;
      pcVar9 = ((char *)GEN_TOP((uVar4 + 2)));
    } while (iVar6 < 3);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x24));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x24)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x24)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
LAB_00e606ef: ;
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(int *)(this + 0x2c) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto LAB_00e607df;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(int *)(this + 0x30) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,8);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) {
LAB_00e607df: ;
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      }
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(int *)(this + 0x34) = (int)uVar15;
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar14);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e60860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe60860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  char * pcVar11;
  uint uVar12;
  char * PTR32 * ppcVar13;
  char * PTR32 * ppcVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  pcVar9 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x2c));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar9,((char *)(gen_frame + 0x2c)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x2c)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  uVar4 = F_00fb9ad0(pcVar9,((char *)REFP(0x1158af0)));
  if (uVar4 == 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP((uVar4 + 0xb)));
  pcVar11 = param_1;
  do {
    pcVar7 = pcVar11;
    pcVar11 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar6 = 1;
  for (pcVar11 = pcVar9; pcVar8 = pcVar7 - 1, pcVar11 < pcVar7 - 1; pcVar11 = pcVar11 + 1) {
    if (*pcVar11 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar11 == '}') && (iVar6 = iVar6 - 1, pcVar8 = pcVar11, iVar6 == 0)) break;
  }
  pcVar9 = ((char *)GEN_TOP(F_00e50750(pcVar9,((char *)REFP(0x1158ae0)),pcVar8)));
  if (pcVar9 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar9 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
  if (pcVar5 != pcVar9) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar14) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
          if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
          }
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
          }
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar14 = pcVar5;
          }
        }
        ppcVar14 = ppcVar14 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppcVar14;
        pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar11) goto LAB_00e60c40;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar11);
        }
        else {
          if (cVar1 != '[') goto LAB_00e60aa3;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_00e60a6b: ;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_00e60a6b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          }
        }
        ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
        if (iVar6 == 1) goto LAB_00e60c40;
      }
LAB_00e60aa3: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x14)));
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
LAB_00e60c40: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
  (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
  while ((*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9, cVar1 != ']') {
    if (*pcVar9 == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar13) && (ppcVar14 <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)ppcVar14;
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (0x3ffffffe < uVar10) {
LAB_00e60c26: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = ppcVar14[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (0x3ffffffe < uVar10) goto LAB_00e60c26;
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = pcVar9;
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
      pcVar9 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x28)) + 1,0x22)));
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
      if (pcVar9 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar14);
        }
        goto LAB_00e60c40;
      }
    }
    pcVar9 = pcVar9 + 1;
    cVar1 = *pcVar9;
    (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2)));
  if ((int)uVar4 < (int)pcVar9) {
    if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar14);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x14)) != pcVar9) {
    if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar14);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_00e60e87;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(ulonglong *)(this + 8) = uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_00e60e87;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 0x10) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_00e60e87;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[0x14] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_00e60e87;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[0x15] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) {
LAB_00e60e87: ;
      if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar14);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      }
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 0x18) = (int)uVar15;
  }
  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar14);
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e60f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe60f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  char * PTR32 * ppcVar10;
  char * pcVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  undefined * pDVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  pcVar8 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x34));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x34)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x34)) + 1))));
  if (iVar6 == 0) {
    pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)))));
    (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
    if (pcVar5 != ((char *)GEN_TOP(0x0))) {
      (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5 + 0xb;
      pcVar5 = param_1;
      do {
        pcVar11 = pcVar5;
        pcVar5 = pcVar11 + 1;
      } while (*pcVar11 != '\0');
      iVar6 = 1;
      for (pcVar5 = pcVar8; pcVar7 = pcVar11 - 1, pcVar5 < pcVar11 - 1; pcVar5 = pcVar5 + 1) {
        if (*pcVar5 == '{') {
          iVar6 = iVar6 + 1;
        }
        else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, pcVar7 = pcVar5, iVar6 == 0)) break;
      }
      pcVar8 = ((char *)GEN_TOP(F_00e50750(pcVar8,((char *)REFP(0x1158ae0)),pcVar7)));
      if (pcVar8 != ((char *)GEN_TOP(0x0))) {
        (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar8 + 0xc;
        (*(char * PTR32 *)(gen_frame + 0x18)) = pcVar8;
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x2c)) = uVar4;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = ((char * PTR32 *)GEN_TOP(0x0));
        F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,uVar4);
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x30));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x14));
        ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
        if ((*(char * PTR32 *)(gen_frame + 0x30)) != pcVar8) {
          do {
            cVar1 = *pcVar5;
            if (cVar1 == '\"') {
              pcVar5 = pcVar5 + 1;
              (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
              if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar12) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
                iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
                if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) {
                  F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,1);
                  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
                }
                if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[iVar6 >> 2];
                }
              }
              else {
                if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) {
                  F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,1);
                  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
                }
                if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar12 = pcVar5;
                }
              }
              ppcVar12 = ppcVar12 + 1;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ppcVar12;
              pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
              pcVar11 = (*(char * PTR32 *)(gen_frame + 0x14));
            }
            else {
              if (cVar1 == '{') {
                (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
                F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x30)));
                pcVar5 = (*(char * PTR32 *)(gen_frame + 0x30)) + 1;
                iVar6 = 1;
                if (pcVar5 == pcVar11) goto LAB_00e612db;
                do {
                  if (*pcVar5 == '{') {
                    iVar6 = iVar6 + 1;
                  }
                  else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                  pcVar5 = pcVar5 + 1;
                } while (pcVar5 != pcVar11);
              }
              else {
                if (cVar1 != '[') goto LAB_00e61143;
                cVar1 = pcVar5[1];
                (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5 + 1;
                iVar6 = 1;
                if (cVar1 == '\"') {
LAB_00e6110b: ;
                  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5 + 2;
                }
                else if (cVar1 == '[') {
                  iVar6 = 2;
                  goto LAB_00e6110b;
                }
                F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x30)));
                for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x30)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
                  if (*pcVar5 == '[') {
                    iVar6 = iVar6 + 1;
                  }
                  else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                }
              }
              ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
              if (iVar6 == 1) goto LAB_00e612db;
            }
LAB_00e61143: ;
            pcVar5 = pcVar5 + 1;
            (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
            uVar4 = (*(uint *)(gen_frame + 0x2c));
          } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x18)));
        }
        pcVar8 = ((char *)GEN_TOP(((int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) >> 2)));
        (*(char * PTR32 *)(gen_frame + 0x18)) = pcVar8;
        if ((int)uVar4 < (int)pcVar8) {
LAB_00e612db: ;
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
          }
        }
        else {
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
          F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
          cVar1 = *(*(char * PTR32 *)(gen_frame + 0x14));
          (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x14));
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
          pcVar8 = (*(char * PTR32 *)(gen_frame + 0x14));
          while (cVar1 != ']') {
            if (*pcVar8 == '\"') {
              (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar8;
              if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
                iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)ppcVar12;
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                  uVar4 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar4) {
LAB_00e612c1: ;
                    
                    F_00c4579a(((char *)REFP(0x108497c)));
                  }
                  uVar4 = uVar4 + 1;
                  uVar9 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (uVar9 < uVar4) {
                    if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                      uVar9 = 0;
                    }
                    else {
                      uVar9 = uVar9 + (uVar9 >> 1);
                    }
                    if (uVar9 < uVar4) {
                      uVar9 = uVar4;
                    }
                    F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar9);
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                pcVar8 = (*(char * PTR32 *)(gen_frame + 0x30));
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = ppcVar12[iVar6 >> 2];
                }
              }
              else {
                if (ppcVar13 == ppcVar10) {
                  uVar4 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar4) goto LAB_00e612c1;
                  uVar4 = uVar4 + 1;
                  uVar9 = (int)ppcVar10 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (uVar9 < uVar4) {
                    if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                      uVar9 = 0;
                    }
                    else {
                      uVar9 = uVar9 + (uVar9 >> 1);
                    }
                    if (uVar9 < uVar4) {
                      uVar9 = uVar4;
                    }
                    F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar9);
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = pcVar8;
                }
              }
              ppcVar13 = ppcVar13 + 1;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
              pcVar8 = ((char *)GEN_TOP(F_00c51da0(pcVar8 + 1,0x22)));
              ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
              if (pcVar8 == ((char *)GEN_TOP(0x0))) {
                if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  F_00406ad0(ppcVar12);
                }
                goto LAB_00e612db;
              }
            }
            pcVar8 = pcVar8 + 1;
            cVar1 = *pcVar8;
            (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar8;
          }
          pcVar8 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2)));
          (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar8;
          if ((int)(*(uint *)(gen_frame + 0x2c)) < (int)pcVar8) {
            if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
              return 0;
            }
          }
          else {
            if ((*(char * PTR32 *)(gen_frame + 0x18)) == pcVar8) {
              pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 4)));
              piVar3 = ((int *)GEN_TOP((*pcVar2)((*(undefined * PTR32 *)(gen_frame + 0x10)))));
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
              F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
              pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x34)))));
              if (pcVar8 != ((char *)GEN_TOP(0x0))) {
                pcVar5 = ((char *)GEN_TOP(0x0));
                if ((*(char * PTR32 *)(gen_frame + 0x30)) != ((char *)GEN_TOP(0x0))) {
                  do {
                    if (pcVar8 == ppcVar12[(int)pcVar5]) break;
                    pcVar5 = pcVar5 + 1;
                  } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x30)));
                }
                if ((*(char * PTR32 *)(gen_frame + 0x18)) <= pcVar5) {
                  if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                    return 0;
                  }
                  F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
                  return 0;
                }
                pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar5];
                pDVar14 = (*(undefined * PTR32 *)(gen_frame + 0x10)) + 4;
                (*(uint *)(gen_frame + 0x2c)) = 0xa0;
                do {
                  uVar15 = F_00e50570(pcVar8);
                  *(short *)pDVar14 = (short)uVar15;
                  uVar9 = F_00c51da0(pcVar8,0x2c);
                  pDVar14 = pDVar14 + 2;
                  uVar4 = (*(uint *)(gen_frame + 0x2c)) - 1;
                  (*(uint *)(gen_frame + 0x2c)) = uVar4;
                  pcVar8 = ((char *)GEN_TOP((uVar9 + 2)));
                } while (uVar4 != 0);
              }
              piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 4))))((*(undefined * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG)));
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
              F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
              pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x34)))));
              if (pcVar8 != ((char *)GEN_TOP(0x0))) {
                pcVar5 = ((char *)GEN_TOP(0x0));
                if ((*(char * PTR32 *)(gen_frame + 0x30)) != ((char *)GEN_TOP(0x0))) {
                  do {
                    if (pcVar8 == ppcVar12[(int)pcVar5]) break;
                    pcVar5 = pcVar5 + 1;
                  } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x30)));
                }
                if ((*(char * PTR32 *)(gen_frame + 0x18)) <= pcVar5) {
                  if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                    return 0;
                  }
                  F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
                  return 0;
                }
                pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar5];
                pDVar14 = (*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x144;
                (*(uint *)(gen_frame + 0x2c)) = 0x14;
                do {
                  uVar15 = F_00e50570(pcVar8);
                  *(int *)pDVar14 = (int)uVar15;
                  uVar9 = F_00c51da0(pcVar8,0x2c);
                  pDVar14 = pDVar14 + 4;
                  uVar4 = (*(uint *)(gen_frame + 0x2c)) - 1;
                  (*(uint *)(gen_frame + 0x2c)) = uVar4;
                  pcVar8 = ((char *)GEN_TOP((uVar9 + 2)));
                } while (uVar4 != 0);
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0(ppcVar12);
              }
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
              }
              return 1;
            }
            if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e614f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe614f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  uint uVar10;
  char * PTR32 * ppcVar11;
  char * pcVar12;
  char * PTR32 * ppcVar13;
  char * PTR32 * ppcVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  pcVar8 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x2c));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x2c)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x2c)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)))));
  (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
  if (pcVar5 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 0xb;
  pcVar5 = param_1;
  do {
    pcVar12 = pcVar5;
    pcVar5 = pcVar12 + 1;
  } while (*pcVar12 != '\0');
  iVar6 = 1;
  for (pcVar5 = pcVar8; pcVar7 = pcVar12 - 1, pcVar5 < pcVar12 - 1; pcVar5 = pcVar5 + 1) {
    if (*pcVar5 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, pcVar7 = pcVar5, iVar6 == 0)) break;
  }
  pcVar8 = ((char *)GEN_TOP(F_00e50750(pcVar8,((char *)REFP(0x1158ae0)),pcVar7)));
  if (pcVar8 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar8 + 0xc;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x24));
  pcVar12 = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24));
  while (pcVar5 != pcVar8) {
    cVar1 = *pcVar5;
    if (cVar1 == '\"') {
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
      if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = pcVar5;
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ppcVar13;
      pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
      pcVar12 = (*(char * PTR32 *)(gen_frame + 0x10));
    }
    else {
      if (cVar1 == '{') {
        (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
        iVar6 = 1;
        if (pcVar5 == pcVar12) goto LAB_00e618bb;
        do {
          if (*pcVar5 == '{') {
            iVar6 = iVar6 + 1;
          }
          else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 != pcVar12);
      }
      else {
        if (cVar1 != '[') goto LAB_00e61723;
        cVar1 = pcVar5[1];
        (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
        iVar6 = 1;
        if (cVar1 == '\"') {
LAB_00e616eb: ;
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
        }
        else if (cVar1 == '[') {
          iVar6 = 2;
          goto LAB_00e616eb;
        }
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
        for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)); pcVar5 != pcVar12; pcVar5 = pcVar5 + 1) {
          if (*pcVar5 == '[') {
            iVar6 = iVar6 + 1;
          }
          else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
        }
      }
      ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
      if (iVar6 == 1) goto LAB_00e618bb;
    }
LAB_00e61723: ;
    pcVar5 = pcVar5 + 1;
    (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
  }
  pcVar8 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar8;
  if ((int)uVar4 < (int)pcVar8) {
LAB_00e618bb: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
  (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x10));
  while (cVar1 != ']') {
    if (*pcVar8 == '\"') {
      (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar8;
      if ((&(*(char * PTR32 *)(gen_frame + 0x24)) < ppcVar14) && (ppcVar13 <= &(*(char * PTR32 *)(gen_frame + 0x24)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x24)) - (int)ppcVar13;
        if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar9 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) {
LAB_00e618a1: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar9 = uVar9 + 1;
          uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar10 < uVar9) {
            if (0x3fffffff - (uVar10 >> 1) < uVar10) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
            }
            if (uVar10 < uVar9) {
              uVar10 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar10);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        pcVar8 = (*(char * PTR32 *)(gen_frame + 0x24));
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar14 = ppcVar13[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar14 == ppcVar11) {
          uVar9 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_00e618a1;
          uVar9 = uVar9 + 1;
          uVar10 = (int)ppcVar11 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar10 < uVar9) {
            if (0x3fffffff - (uVar10 >> 1) < uVar10) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
            }
            if (uVar10 < uVar9) {
              uVar10 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar10);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar14 = pcVar8;
        }
      }
      ppcVar14 = ppcVar14 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar14;
      pcVar8 = ((char *)GEN_TOP(F_00c51da0(pcVar8 + 1,0x22)));
      ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
      if (pcVar8 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar13);
        }
        goto LAB_00e618bb;
      }
    }
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
    (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar8;
  }
  pcVar8 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar8;
  if ((int)uVar4 < (int)pcVar8) {
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x28)) != pcVar8) {
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar8 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x24)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar8 == ppcVar13[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x24)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar5) {
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar5];
    iVar6 = 0;
    do {
      uVar15 = F_00e50570(pcVar8);
      this[iVar6 + 4] = SUB81(uVar15,0);
      uVar4 = F_00c51da0(pcVar8,0x2c);
      iVar6 = iVar6 + 1;
      pcVar8 = ((char *)GEN_TOP((uVar4 + 2)));
    } while (iVar6 < 0x1a);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x24));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x24)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < (*(char * PTR32 *)(gen_frame + 0x24)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar12) {
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar12]);
    this[0x1e] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar12) goto LAB_00e61ab5;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar12]);
    this[0x1f] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar12) goto LAB_00e61ab5;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar12]);
    this[0x20] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar12) goto LAB_00e61ab5;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar12]);
    this[0x21] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar12) goto LAB_00e61ab5;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar12]);
    this[0x22] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar12) {
LAB_00e61ab5: ;
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    this[0x23] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar12] != '0');
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e61cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe61cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pFVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[5],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x10],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pFVar10 = this + 0x18;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x18));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),*(undefined4 *)pFVar10,*(undefined4 *)(pFVar10 + 4));
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pFVar10 = pFVar10 + 8;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar5 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - uVar5) - 1);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0xd8))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0xd8)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - 1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e62080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe62080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pFVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[5],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,2)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b58)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,3)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x10],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b58)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pFVar10 = this + 0x18;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x18));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),*(undefined4 *)pFVar10,*(undefined4 *)(pFVar10 + 4));
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pFVar10 = pFVar10 + 8;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,5)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b40)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0xd8))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0xd8)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - 1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e62b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe62b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pGVar10;
  int iVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 4),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[8],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pGVar10 = this + 0xc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x2));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bcc)),(int)(ulonglong)gen_d2bits((double)*(float *)pGVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pGVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pGVar10 = pGVar10 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar5 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - uVar5) - 1);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pGVar10 = this + 0x14;
  iVar3 = 4;
  do {
    iVar11 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bc4)),*(int *)pGVar10,*(int *)((int)(uintptr_t)pGVar10) >> 0x1f);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pGVar10 = pGVar10 + 4;
    iVar3 = iVar11 - 1;
  } while (iVar11 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar5 + iVar11,(uVar2 - iVar11) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - iVar11;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + (iVar3 - iVar11)))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
    uVar2 = param_1[4];
    uVar5 = uVar2 - 1;
    if (uVar5 <= uVar2) {
      if (uVar2 != uVar5) {
        puVar9 = param_1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
          puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        }
        F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
        iVar3 = param_1[4];
        param_1[4] = iVar3 - 1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        }
        *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
      return 1;
    }
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e62ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe62ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pGVar10;
  int iVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 4),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[8],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,2)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b40)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pGVar10 = this + 0xc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x2));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bcc)),(int)(ulonglong)gen_d2bits((double)*(float *)pGVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pGVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pGVar10 = pGVar10 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,3)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pGVar10 = this + 0x14;
  iVar3 = 4;
  do {
    iVar11 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bc4)),*(int *)pGVar10,*(int *)((int)(uintptr_t)pGVar10) >> 0x1f);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pGVar10 = pGVar10 + 4;
    iVar3 = iVar11 - 1;
  } while (iVar11 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar5 + iVar11,(uVar2 - iVar11) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - iVar11;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + (iVar3 - iVar11)))) = 0;
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
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
          puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        }
        F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - uVar5) - 1);
        iVar3 = param_1[4];
        param_1[4] = iVar3 - 1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        }
        *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
      return 1;
    }
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e63730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe63730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  undefined1 BVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined * pBVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  int iVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
  pBVar8 = this + 4;
  do {
    BVar2 = *(undefined1 *)pBVar8;
    pBVar8 = pBVar8 + 1;
  } while (BVar2 != (undefined1)0x0);
  F_00e69490(param_1 GEN_EDX_ARG,this + 4,(int)pBVar8 - (int)(this + 5));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar11 + 0x19],0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 8);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar3 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar3 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar3,(uVar3 - 1) - uVar5);
    iVar11 = param_1[4];
    param_1[4] = iVar11 - 1;
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar9 + iVar11 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar11 + 0x21],0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar5 <= uVar3) {
    if (uVar3 != uVar5) {
      if ((uint)param_1[5] < 0x10) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
      }
      puVar9 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar3,(uVar3 - 1) - uVar5);
      iVar11 = param_1[4];
      param_1[4] = iVar11 - 1;
      puVar9 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar9 + iVar11 - 1))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x24],0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x25],0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
    iVar11 = 0;
    do {
      F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar11 + 0x26],0);
      pcVar6 = ((char *)(gen_frame + 0x4));
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    uVar3 = param_1[4];
    uVar5 = uVar3 - 1;
    if (uVar5 <= uVar3) {
      if (uVar3 != uVar5) {
        if ((uint)param_1[5] < 0x10) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
        }
        puVar9 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        }
        F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar3,(uVar3 - 1) - uVar5)
        ;
        iVar11 = param_1[4];
        param_1[4] = iVar11 - 1;
        puVar9 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        }
        *((undefined1 *)GEN_TOP(((int)puVar9 + iVar11 - 1))) = 0;
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
      F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x2c),0);
      pcVar6 = ((char *)(gen_frame + 0x4));
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x30),0);
      pcVar6 = ((char *)(gen_frame + 0x4));
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x34),0);
      pcVar6 = ((char *)(gen_frame + 0x4));
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      uVar3 = param_1[4];
      uVar5 = uVar3 - 1;
      if (uVar5 <= uVar3) {
        if (uVar3 != uVar5) {
          puVar10 = param_1;
          puVar9 = param_1;
          if (0xf < (uint)param_1[5]) {
            puVar9 = ((undefined4 *)GEN_TOP(*param_1));
            puVar10 = ((undefined4 *)GEN_TOP(*param_1));
          }
          F_00c46e20((int)puVar10 + uVar5,(int)puVar9 + uVar3,(uVar3 - 1) - uVar5);
          iVar11 = param_1[4];
          param_1[4] = iVar11 - 1;
          puVar9 = param_1;
          if (0xf < (uint)param_1[5]) {
            puVar9 = ((undefined4 *)GEN_TOP(*param_1));
          }
          *((undefined1 *)GEN_TOP(((int)puVar9 + iVar11 - 1))) = 0;
        }
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
        return 1;
      }
                    
      F_00c457e7(((char *)REFP(0x1080298)));
    }
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e63c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe63c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  undefined1 BVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined * pBVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  int iVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c10)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c04)),9);
  pBVar8 = this + 4;
  do {
    BVar2 = *(undefined1 *)pBVar8;
    pBVar8 = pBVar8 + 1;
  } while (BVar2 != (undefined1)0x0);
  F_00e69490(param_1 GEN_EDX_ARG,this + 4,(int)pBVar8 - (int)(this + 5));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158c00),3);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar11 + 0x19],0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 8);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar3 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar3 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar3,(uVar3 - 1) - uVar5);
    iVar11 = param_1[4];
    param_1[4] = iVar11 - 1;
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar9 + iVar11 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,2)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar11 + 0x21],0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar3 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar3 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar3,(uVar3 - 1) - uVar5);
    iVar11 = param_1[4];
    param_1[4] = iVar11 - 1;
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar9 + iVar11 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,3)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x24],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x25],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,5)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar11 + 0x26],0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar3 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar3 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar3,(uVar3 - 1) - uVar5);
    iVar11 = param_1[4];
    param_1[4] = iVar11 - 1;
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar9 + iVar11 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),6);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,6)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x2c),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),7);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,7)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x30),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),8);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,8)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x34),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar5 <= uVar3) {
    if (uVar3 != uVar5) {
      puVar10 = param_1;
      puVar9 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        puVar10 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20(uVar5 + (int)puVar10,uVar3 + (int)puVar9,(uVar3 - 1) - uVar5);
      iVar11 = param_1[4];
      param_1[4] = iVar11 - 1;
      puVar9 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP((iVar11 - 1 + (int)puVar9))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e64c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe64c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x10),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x14],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x15],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x18),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e64ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe64ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,0)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b58)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,1)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x10),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x14],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,3)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x15],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,4)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x18),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e65730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe65730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
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
  undefined * pDVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pDVar11 = this + 4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0xa0));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)*(ushort *)pDVar11,0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pDVar11 = pDVar11 + 2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar5 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - uVar5) - 1);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pDVar11 = this + 0x144;
  iVar3 = 0x14;
  do {
    iVar10 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),*(undefined4 *)pDVar11,0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pDVar11 = pDVar11 + 4;
    iVar3 = iVar10 - 1;
  } while (iVar10 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar5 + iVar10,(uVar2 - iVar10) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - iVar10;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
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
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
          puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        }
        F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
        iVar3 = param_1[4];
        param_1[4] = iVar3 - 1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        }
        *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
      return 1;
    }
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e65a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe65a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pDVar10;
  int iVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c28)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pDVar10 = this + 4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0xa0));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)*(ushort *)pDVar10,0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pDVar10 = pDVar10 + 2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pDVar10 = this + 0x144;
  iVar3 = 0x14;
  do {
    iVar11 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),*(undefined4 *)pDVar10,0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pDVar10 = pDVar10 + 4;
    iVar3 = iVar11 - 1;
  } while (iVar11 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar5 + iVar11,(uVar2 - iVar11) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - iVar11;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + (iVar3 - iVar11)))) = 0;
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
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
          puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        }
        F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - uVar5) - 1);
        iVar3 = param_1[4];
        param_1[4] = iVar3 - 1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        }
        *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
      return 1;
    }
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e65fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe65fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x1a);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar4 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar7 + uVar4,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - uVar4) - 1);
    iVar9 = param_1[4];
    param_1[4] = iVar9 - 1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar7 + iVar9 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x1e],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x1f],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x20],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x21],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x22],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x23]);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 != uVar4) {
      puVar8 = param_1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = ((undefined4 *)GEN_TOP(*param_1));
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - 1) - uVar4);
      iVar9 = param_1[4];
      param_1[4] = iVar9 - 1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar7 + iVar9 - 1))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e663a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe663a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x1a);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 != uVar4) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar7 + uVar4,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar4);
    iVar9 = param_1[4];
    param_1[4] = iVar9 - 1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar7 + iVar9 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x1e],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x1f],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x20],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x21],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,5)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x22],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),6);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,6)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c40)),0x12);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x23]);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 != uVar4) {
      puVar8 = param_1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = ((undefined4 *)GEN_TOP(*param_1));
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - 1) - uVar4);
      iVar9 = param_1[4];
      param_1[4] = iVar9 - 1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar7 + iVar9 - 1))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e66fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe66fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_00e67061;
  }
  bVar2 = true;
LAB_00e67061: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e671a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe671a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_00e67251;
  }
  bVar2 = true;
LAB_00e67251: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e67390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe67390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_00e67441;
  }
  bVar2 = true;
LAB_00e67441: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e67580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe67580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_00e67631;
  }
  bVar2 = true;
LAB_00e67631: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e67770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe67770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_00e67821;
  }
  bVar2 = true;
LAB_00e67821: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e67960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe67960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_00e67a11;
  }
  bVar2 = true;
LAB_00e67a11: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_00e67b60(void)
{
  GEN_ENTER(0xe67b60u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e67b70(void)
{
  GEN_ENTER(0xe67b70u, 0u, 0u, 0u, 0u);
  return 0x135ae40;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_00e67b80(void)
{
  GEN_ENTER(0xe67b80u, 0u, 0u, 0u, 0u);
  return 9;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e67b90(void)
{
  GEN_ENTER(0xe67b90u, 0u, 0u, 0u, 0u);
  return 0x135ae44;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_00e67ba0(void)
{
  GEN_ENTER(0xe67ba0u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e67bb0(void)
{
  GEN_ENTER(0xe67bb0u, 0u, 0u, 0u, 0u);
  return 0x135ae48;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_00e67bc0(void)
{
  GEN_ENTER(0xe67bc0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e67bd0(void)
{
  GEN_ENTER(0xe67bd0u, 0u, 0u, 0u, 0u);
  return 0x135ae4c;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_00e67be0(void)
{
  GEN_ENTER(0xe67be0u, 0u, 0u, 0u, 0u);
  return 7;
}

/* ref: FUN_00e67c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e67c10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe67c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e67c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e67c30(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe67c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e67c80 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e67c80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe67c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e67cb0 */
GEN_LIB GEN_FRAME uint F_00e67cb0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe67cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  return 1;
}

/* ref: FUN_00e67cd0 */
GEN_LIB GEN_FRAME uint F_00e67cd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe67cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  return 8;
}

/* ref: FUN_00e67cf0 */
GEN_LIB GEN_FRAME uint F_00e67cf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe67cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte * param_4 = (byte *)(uintptr_t)gen_a3;)
  byte * pbVar1;
  int iVar2;
  
  *param_4 = param_2;
  pbVar1 = param_4 + 1;
  if ((param_2 & 3) == 0) {
    *(short *)pbVar1 = (short)param_3;
    pbVar1 = param_4 + 3;
    iVar2 = 0;
    if (0 < param_3) {
      do {
        *(undefined4 *)pbVar1 = *((undefined4 *)GEN_TOP((param_1 + iVar2 * 8)));
        *(undefined4 *)(pbVar1 + 4) = *((undefined4 *)GEN_TOP((param_1 + 4 + iVar2 * 8)));
        iVar2 = iVar2 + 1;
        pbVar1 = pbVar1 + 8;
      } while (iVar2 < param_3);
      return (int)pbVar1 - (int)param_4;
    }
  }
  else if ((param_2 & 3) == 1) {
    *(short *)pbVar1 = (short)param_3;
    *(undefined4 *)(param_4 + 3) = *((undefined4 *)GEN_TOP((param_1 + param_3 * 8)));
    *(undefined4 *)(param_4 + 7) = *((undefined4 *)GEN_TOP((param_1 + 4 + param_3 * 8)));
    pbVar1 = param_4 + 0xb;
  }
  return (int)pbVar1 - (int)param_4;
}

/* ref: FUN_00e67d60 */
GEN_LIB GEN_FRAME uint F_00e67d60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe67d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  return 4;
}

/* ref: FUN_00e67d80 */
GEN_LIB GEN_FRAME uint F_00e67d80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(byte * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xe67d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(byte * param_6 = (byte *)(uintptr_t)gen_a5;)
  ushort * puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint local_8;
  
  *param_6 = (byte)param_2;
  puVar1 = (ushort *)(param_6 + 1);
  if (((byte)param_2 & 3) == 2) {
    uVar2 = ((ushort)param_4 - (ushort)param_3) + 1;
    local_8 = (uint)uVar2;
    *puVar1 = (ushort)param_3;
    *(ushort *)(param_6 + 3) = (ushort)param_4;
    uVar3 = (uint)(uVar2 >> 5);
    puVar1 = (ushort *)(param_6 + 5);
    uVar4 = 0;
    if (uVar3 != 0xffffffff) {
      do {
        *(undefined4 *)puVar1 = *((undefined4 *)GEN_TOP((param_5 + uVar4 * 4)));
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar4 < uVar3 + 1);
    }
    uVar2 = 0;
    if ((ushort)param_3 <= (ushort)param_4) {
      uVar3 = (uint)(ushort)param_3;
      puVar5 = ((undefined4 *)GEN_TOP((param_1 + uVar3 * 8)));
      do {
        if ((*((uint *)GEN_TOP((param_5 + (uint)(uVar2 >> 5) * 4))) & 1 << ((byte)uVar3 & 0x1f)) != 0) {
          *(undefined4 *)puVar1 = *puVar5;
          *(undefined4 *)(puVar1 + 2) = puVar5[1];
          puVar1 = puVar1 + 4;
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 2;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return (int)puVar1 - (int)param_6;
}

/* ref: FUN_00e67e40 */
GEN_LIB GEN_FRAME uint F_00e67e40(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe67e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  return 1;
}

/* ref: FUN_00e67e60 */
GEN_LIB GEN_FRAME uint F_00e67e60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe67e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  return 8;
}

/* ref: FUN_00e67e80 */
GEN_LIB GEN_FRAME uint F_00e67e80(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe67e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint * puVar1;
  byte bVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  uint * puVar10;
  uint uVar11;
  
  puVar1 = (uint *)(param_1 + 1);
  bVar2 = *param_1 & 3;
  if (bVar2 == 0) {
    uVar6 = (uint)(ushort)*puVar1;
    puVar1 = (uint *)(param_1 + 3);
    puVar3 = param_2;
    if (uVar6 != 0) {
      do {
        *puVar3 = *puVar1;
        puVar3[1] = puVar1[1];
        puVar1 = puVar1 + 2;
        puVar3 = puVar3 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      return (int)puVar1 - (int)param_1;
    }
  }
  else {
    if (bVar2 == 1) {
      uVar6 = *puVar1;
      param_2[(uint)(ushort)uVar6 * 2] = *(uint *)(param_1 + 3);
      param_2[(uint)(ushort)uVar6 * 2 + 1] = *(uint *)(param_1 + 7);
      return 0xb;
    }
    if (bVar2 == 2) {
      uVar9 = *(ushort *)(param_1 + 3);
      uVar6 = *puVar1;
      uVar8 = (uint)(ushort)uVar6;
      uVar4 = (uVar9 - uVar8) + 1 & 0xffff;
      puVar1 = (uint *)(param_1 + 5);
      iVar7 = (uVar4 >> 5) + 1;
      ((uint *)(gen_frame + 0x0))[2] = (uint)uVar9;
      ((uint *)(gen_frame + 0x0))[1] = uVar4;
      if (iVar7 != 0) {
        puVar3 = puVar1;
        puVar10 = ((uint *)(gen_frame + 0x0));
        for (iVar5 = iVar7; iVar5 != 0; iVar5 = iVar5 - 1) {
          *puVar10 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar9 = (ushort)((uint *)(gen_frame + 0x0))[2];
        puVar1 = puVar1 + iVar7;
        uVar4 = ((uint *)(gen_frame + 0x0))[1];
      }
      uVar11 = 0;
      if ((ushort)uVar6 <= uVar9) {
        puVar3 = param_2 + uVar8 * 2;
        ((uint *)(gen_frame + 0x0))[2] = uVar4;
        do {
          if ((((uint *)(gen_frame + 0x0))[(int)((uVar11 & 0xffff) >> 5)] & 1 << ((byte)uVar8 & 0x1f)) != 0) {
            *puVar3 = *puVar1;
            puVar3[1] = puVar1[1];
            puVar1 = puVar1 + 2;
          }
          uVar11 = uVar11 + 1;
          uVar8 = uVar8 + 1;
          puVar3 = puVar3 + 2;
          uVar6 = ((uint *)(gen_frame + 0x0))[2] - 1;
          ((uint *)(gen_frame + 0x0))[2] = uVar6;
        } while (uVar6 != 0);
      }
    }
  }
  return (int)puVar1 - (int)param_1;
}

/* ref: FUN_00e67f70 */
GEN_LIB GEN_FRAME uint F_00e67f70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe67f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  return 4;
}

/* ref: FUN_00e67f90 */
GEN_LIB GEN_FRAME uint F_00e67f90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe67f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  return 4;
}

/* ref: FUN_00e67fb0 */
GEN_LIB GEN_FRAME uint F_00e67fb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe67fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte * param_4 = (byte *)(uintptr_t)gen_a3;)
  byte * pbVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  *param_4 = param_2;
  pbVar1 = param_4 + 1;
  if ((param_2 & 3) == 0) {
    *(short *)pbVar1 = (short)param_3;
    pbVar1 = param_4 + 3;
    iVar4 = 0;
    if (3 < param_3) {
      iVar5 = (param_3 - 4U >> 2) + 1;
      iVar4 = iVar5 * 4;
      pbVar2 = pbVar1;
      puVar3 = ((undefined4 *)GEN_TOP((param_1 + 8)));
      do {
        pbVar1 = pbVar2 + 0x10;
        *(undefined4 *)pbVar2 = puVar3[-2];
        iVar5 = iVar5 - 1;
        *(undefined4 *)(pbVar2 + 4) = puVar3[-1];
        *(undefined4 *)(pbVar2 + 8) = *puVar3;
        *(undefined4 *)(pbVar2 + 0xc) = puVar3[1];
        pbVar2 = pbVar1;
        puVar3 = puVar3 + 4;
      } while (iVar5 != 0);
    }
    if (iVar4 < param_3) {
      do {
        iVar5 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        *(undefined4 *)pbVar1 = *((undefined4 *)GEN_TOP((param_1 + iVar5)));
        pbVar1 = pbVar1 + 4;
      } while (iVar4 < param_3);
      return (int)pbVar1 - (int)param_4;
    }
  }
  else if ((param_2 & 3) == 1) {
    *(short *)pbVar1 = (short)param_3;
    *(undefined4 *)(param_4 + 3) = *((undefined4 *)GEN_TOP((param_1 + param_3 * 4)));
    pbVar1 = param_4 + 7;
  }
  return (int)pbVar1 - (int)param_4;
}

/* ref: FUN_00e68050 */
GEN_LIB GEN_FRAME uint F_00e68050(GEN_P(int param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe68050u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte * param_4 = (byte *)(uintptr_t)gen_a3;)
  byte * pbVar1;
  int iVar2;
  
  *param_4 = param_2;
  pbVar1 = param_4 + 1;
  if ((param_2 & 3) == 0) {
    *(short *)pbVar1 = (short)param_3;
    pbVar1 = param_4 + 3;
    iVar2 = 0;
    if (0 < param_3) {
      do {
        *(undefined4 *)pbVar1 = *((undefined4 *)GEN_TOP((param_1 + iVar2 * 4)));
        iVar2 = iVar2 + 1;
        pbVar1 = pbVar1 + 4;
      } while (iVar2 < param_3);
      return (int)pbVar1 - (int)param_4;
    }
  }
  else if ((param_2 & 3) == 1) {
    *(short *)pbVar1 = (short)param_3;
    *(undefined4 *)(param_4 + 3) = *((undefined4 *)GEN_TOP((param_1 + param_3 * 4)));
    pbVar1 = param_4 + 7;
  }
  return (int)pbVar1 - (int)param_4;
}

/* ref: FUN_00e680b0 */
GEN_LIB GEN_FRAME uint F_00e680b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(byte * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xe680b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(byte * param_6 = (byte *)(uintptr_t)gen_a5;)
  ushort * puVar1;
  ushort * puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint local_8;
  
  *param_6 = (byte)param_2;
  puVar1 = (ushort *)(param_6 + 1);
  if (((byte)param_2 & 3) == 2) {
    uVar3 = ((ushort)param_4 - (ushort)param_3) + 1;
    local_8 = (uint)uVar3;
    *puVar1 = (ushort)param_3;
    *(ushort *)(param_6 + 3) = (ushort)param_4;
    uVar4 = (uint)(uVar3 >> 5);
    puVar1 = (ushort *)(param_6 + 5);
    uVar5 = 0;
    if (uVar4 != 0xffffffff) {
      do {
        *(undefined4 *)puVar1 = *((undefined4 *)GEN_TOP((param_5 + uVar5 * 4)));
        uVar5 = uVar5 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar5 < uVar4 + 1);
    }
    uVar3 = 0;
    if ((ushort)param_3 <= (ushort)param_4) {
      uVar4 = (uint)(ushort)param_3;
      puVar6 = ((undefined4 *)GEN_TOP((param_1 + uVar4 * 4)));
      puVar2 = puVar1;
      do {
        puVar1 = puVar2;
        if ((*((uint *)GEN_TOP((param_5 + (uint)(uVar3 >> 5) * 4))) & 1 << ((byte)uVar4 & 0x1f)) != 0) {
          puVar1 = puVar2 + 2;
          *(undefined4 *)puVar2 = *puVar6;
        }
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 1;
        local_8 = local_8 - 1;
        puVar2 = puVar1;
      } while (local_8 != 0);
    }
  }
  return (int)puVar1 - (int)param_6;
}

/* ref: FUN_00e68160 */
GEN_LIB GEN_FRAME uint F_00e68160(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(byte * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xe68160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(byte * param_6 = (byte *)(uintptr_t)gen_a5;)
  ushort * puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint local_8;
  
  *param_6 = (byte)param_2;
  puVar1 = (ushort *)(param_6 + 1);
  if (((byte)param_2 & 3) == 2) {
    uVar2 = ((ushort)param_4 - (ushort)param_3) + 1;
    local_8 = (uint)uVar2;
    *puVar1 = (ushort)param_3;
    *(ushort *)(param_6 + 3) = (ushort)param_4;
    uVar3 = (uint)(uVar2 >> 5);
    puVar1 = (ushort *)(param_6 + 5);
    uVar4 = 0;
    if (uVar3 != 0xffffffff) {
      do {
        *(undefined4 *)puVar1 = *((undefined4 *)GEN_TOP((param_5 + uVar4 * 4)));
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar4 < uVar3 + 1);
    }
    uVar2 = 0;
    if ((ushort)param_3 <= (ushort)param_4) {
      uVar3 = (uint)(ushort)param_3;
      puVar5 = ((undefined4 *)GEN_TOP((param_1 + uVar3 * 4)));
      do {
        if ((*((uint *)GEN_TOP((param_5 + (uint)(uVar2 >> 5) * 4))) & 1 << ((byte)uVar3 & 0x1f)) != 0) {
          *(undefined4 *)puVar1 = *puVar5;
          puVar1 = puVar1 + 2;
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 1;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return (int)puVar1 - (int)param_6;
}

/* ref: FUN_00e68210 */
GEN_LIB GEN_FRAME uint F_00e68210(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  return 4;
}

/* ref: FUN_00e68230 */
GEN_LIB GEN_FRAME uint F_00e68230(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe68230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  uint * puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  
  puVar2 = (uint *)(param_1 + 1);
  bVar3 = *param_1 & 3;
  if (bVar3 == 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)(param_1 + 3);
    iVar4 = 0;
    if ((ushort)uVar1 != 0) {
      do {
        *((uint *)GEN_TOP((param_2 + iVar4 * 4))) = *puVar2;
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar4 < (int)(uint)(ushort)uVar1);
      return (int)puVar2 - (int)param_1;
    }
  }
  else {
    if (bVar3 == 1) {
      *((undefined4 *)GEN_TOP((param_2 + (uint)(ushort)*puVar2 * 4))) = *(undefined4 *)(param_1 + 3);
      return 7;
    }
    if ((*param_1 & 3) == 2) {
      uVar8 = *(ushort *)(param_1 + 3);
      uVar1 = *puVar2;
      uVar7 = (uint)(ushort)uVar1;
      uVar5 = (uVar8 - uVar7) + 1 & 0xffff;
      puVar2 = (uint *)(param_1 + 5);
      iVar4 = (uVar5 >> 5) + 1;
      ((uint *)(gen_frame + 0x0))[2] = (uint)uVar8;
      ((uint *)(gen_frame + 0x0))[1] = uVar5;
      if (iVar4 != 0) {
        puVar9 = puVar2;
        puVar10 = ((uint *)(gen_frame + 0x0));
        for (iVar6 = iVar4; iVar6 != 0; iVar6 = iVar6 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar8 = (ushort)((uint *)(gen_frame + 0x0))[2];
        puVar2 = puVar2 + iVar4;
        uVar5 = ((uint *)(gen_frame + 0x0))[1];
      }
      uVar11 = 0;
      if ((ushort)uVar1 <= uVar8) {
        puVar9 = ((uint *)GEN_TOP((param_2 + uVar7 * 4)));
        ((uint *)(gen_frame + 0x0))[2] = uVar5;
        do {
          if ((((uint *)(gen_frame + 0x0))[(int)((uVar11 & 0xffff) >> 5)] & 1 << ((byte)uVar7 & 0x1f)) != 0) {
            *puVar9 = *puVar2;
            puVar2 = puVar2 + 1;
          }
          uVar11 = uVar11 + 1;
          uVar7 = uVar7 + 1;
          puVar9 = puVar9 + 1;
          uVar1 = ((uint *)(gen_frame + 0x0))[2] - 1;
          ((uint *)(gen_frame + 0x0))[2] = uVar1;
        } while (uVar1 != 0);
      }
    }
  }
  return (int)puVar2 - (int)param_1;
}

/* ref: FUN_00e68310 */
GEN_LIB GEN_FRAME uint F_00e68310(GEN_P(int param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe68310u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte * param_4 = (byte *)(uintptr_t)gen_a3;)
  byte * pbVar1;
  int iVar2;
  
  *param_4 = param_2;
  pbVar1 = param_4 + 1;
  if ((param_2 & 3) == 0) {
    *(short *)pbVar1 = (short)param_3;
    pbVar1 = param_4 + 3;
    iVar2 = 0;
    if (0 < param_3) {
      do {
        *pbVar1 = *((byte *)GEN_TOP((iVar2 + param_1)));
        iVar2 = iVar2 + 1;
        pbVar1 = pbVar1 + 1;
      } while (iVar2 < param_3);
      return (int)pbVar1 - (int)param_4;
    }
  }
  else if ((param_2 & 3) == 1) {
    *(short *)pbVar1 = (short)param_3;
    param_4[3] = *((byte *)GEN_TOP((param_1 + param_3)));
    pbVar1 = param_4 + 4;
  }
  return (int)pbVar1 - (int)param_4;
}

/* ref: FUN_00e68370 */
GEN_LIB GEN_FRAME uint F_00e68370(GEN_P(int param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe68370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte * param_4 = (byte *)(uintptr_t)gen_a3;)
  byte * pbVar1;
  int iVar2;
  
  *param_4 = param_2;
  pbVar1 = param_4 + 1;
  if ((param_2 & 3) == 0) {
    *(short *)pbVar1 = (short)param_3;
    pbVar1 = param_4 + 3;
    iVar2 = 0;
    if (0 < param_3) {
      do {
        *pbVar1 = *((byte *)GEN_TOP((iVar2 + param_1)));
        iVar2 = iVar2 + 1;
        pbVar1 = pbVar1 + 1;
      } while (iVar2 < param_3);
      return (int)pbVar1 - (int)param_4;
    }
  }
  else if ((param_2 & 3) == 1) {
    *(short *)pbVar1 = (short)param_3;
    param_4[3] = *((byte *)GEN_TOP((param_1 + param_3)));
    pbVar1 = param_4 + 4;
  }
  return (int)pbVar1 - (int)param_4;
}

/* ref: FUN_00e683d0 */
GEN_LIB GEN_FRAME uint F_00e683d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(byte * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xe683d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(byte * param_6 = (byte *)(uintptr_t)gen_a5;)
  ushort * puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  *param_6 = (byte)param_2;
  puVar1 = (ushort *)(param_6 + 1);
  if (((byte)param_2 & 3) == 2) {
    uVar2 = ((ushort)param_4 - (ushort)param_3) + 1;
    uVar5 = (uint)uVar2;
    *puVar1 = (ushort)param_3;
    *(ushort *)(param_6 + 3) = (ushort)param_4;
    uVar3 = (uint)(uVar2 >> 5);
    puVar1 = (ushort *)(param_6 + 5);
    uVar4 = 0;
    if (uVar3 != 0xffffffff) {
      do {
        *(undefined4 *)puVar1 = *((undefined4 *)GEN_TOP((param_5 + uVar4 * 4)));
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar4 < uVar3 + 1);
    }
    uVar2 = 0;
    if ((ushort)param_3 <= (ushort)param_4) {
      uVar3 = (uint)(ushort)param_3;
      do {
        if ((*((uint *)GEN_TOP((param_5 + (uint)(uVar2 >> 5) * 4))) & 1 << ((byte)uVar3 & 0x1f)) != 0) {
          *(byte *)puVar1 = *((byte *)GEN_TOP((uVar3 + param_1)));
          puVar1 = ((ushort *)GEN_TOP(((int)puVar1 + 1)));
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return (int)puVar1 - (int)param_6;
}

/* ref: FUN_00e68470 */
GEN_LIB GEN_FRAME uint F_00e68470(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(byte * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xe68470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(byte * param_6 = (byte *)(uintptr_t)gen_a5;)
  ushort * puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  *param_6 = (byte)param_2;
  puVar1 = (ushort *)(param_6 + 1);
  if (((byte)param_2 & 3) == 2) {
    uVar2 = ((ushort)param_4 - (ushort)param_3) + 1;
    uVar5 = (uint)uVar2;
    *puVar1 = (ushort)param_3;
    *(ushort *)(param_6 + 3) = (ushort)param_4;
    uVar3 = (uint)(uVar2 >> 5);
    puVar1 = (ushort *)(param_6 + 5);
    uVar4 = 0;
    if (uVar3 != 0xffffffff) {
      do {
        *(undefined4 *)puVar1 = *((undefined4 *)GEN_TOP((param_5 + uVar4 * 4)));
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar4 < uVar3 + 1);
    }
    uVar2 = 0;
    if ((ushort)param_3 <= (ushort)param_4) {
      uVar3 = (uint)(ushort)param_3;
      do {
        if ((*((uint *)GEN_TOP((param_5 + (uint)(uVar2 >> 5) * 4))) & 1 << ((byte)uVar3 & 0x1f)) != 0) {
          *(byte *)puVar1 = *((byte *)GEN_TOP((uVar3 + param_1)));
          puVar1 = ((ushort *)GEN_TOP(((int)puVar1 + 1)));
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return (int)puVar1 - (int)param_6;
}

/* ref: FUN_00e68510 */
GEN_LIB GEN_FRAME uint F_00e68510(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe68510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  uint * puVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  
  puVar2 = (uint *)(param_1 + 1);
  bVar3 = *param_1 & 3;
  if (bVar3 == 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)(param_1 + 3);
    iVar5 = 0;
    if ((ushort)uVar1 != 0) {
      do {
        *((byte *)GEN_TOP((iVar5 + param_2))) = (byte)*puVar2;
        iVar5 = iVar5 + 1;
        puVar2 = ((uint *)GEN_TOP(((int)puVar2 + 1)));
      } while (iVar5 < (int)(uint)(ushort)uVar1);
      return (int)puVar2 - (int)param_1;
    }
  }
  else {
    if (bVar3 == 1) {
      *((byte *)GEN_TOP(((uint)(ushort)*puVar2 + param_2))) = param_1[3];
      return 4;
    }
    if ((*param_1 & 3) == 2) {
      uVar4 = *(ushort *)(param_1 + 3);
      uVar1 = *puVar2;
      uVar7 = (uint)(ushort)uVar1;
      uVar8 = (uVar4 - uVar7) + 1 & 0xffff;
      puVar2 = (uint *)(param_1 + 5);
      iVar5 = (uVar8 >> 5) + 1;
      ((uint *)(gen_frame + 0x0))[2] = (uint)uVar4;
      ((uint *)(gen_frame + 0x0))[1] = uVar8;
      if (iVar5 != 0) {
        puVar9 = puVar2;
        puVar10 = ((uint *)(gen_frame + 0x0));
        for (iVar6 = iVar5; iVar6 != 0; iVar6 = iVar6 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar4 = (ushort)((uint *)(gen_frame + 0x0))[2];
        puVar2 = puVar2 + iVar5;
        uVar8 = ((uint *)(gen_frame + 0x0))[1];
      }
      uVar11 = 0;
      if ((ushort)uVar1 <= uVar4) {
        do {
          if ((((uint *)(gen_frame + 0x0))[(int)((uVar11 & 0xffff) >> 5)] & 1 << ((byte)uVar7 & 0x1f)) != 0) {
            *((byte *)GEN_TOP((uVar7 + param_2))) = (byte)*puVar2;
            puVar2 = ((uint *)GEN_TOP(((int)puVar2 + 1)));
          }
          uVar11 = uVar11 + 1;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
  }
  return (int)puVar2 - (int)param_1;
}

/* ref: FUN_00e685e0 */
GEN_LIB GEN_FRAME uint F_00e685e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe685e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte * param_4 = (byte *)(uintptr_t)gen_a3;)
  byte * pbVar1;
  int iVar2;
  
  *param_4 = param_2;
  pbVar1 = param_4 + 1;
  if ((param_2 & 3) == 0) {
    *(short *)pbVar1 = (short)param_3;
    pbVar1 = param_4 + 3;
    iVar2 = 0;
    if (0 < param_3) {
      do {
        *(undefined2 *)pbVar1 = *((undefined2 *)GEN_TOP((param_1 + iVar2 * 2)));
        iVar2 = iVar2 + 1;
        pbVar1 = pbVar1 + 2;
      } while (iVar2 < param_3);
      return (int)pbVar1 - (int)param_4;
    }
  }
  else if ((param_2 & 3) == 1) {
    *(short *)pbVar1 = (short)param_3;
    *(undefined2 *)(param_4 + 3) = *((undefined2 *)GEN_TOP((param_1 + param_3 * 2)));
    pbVar1 = param_4 + 5;
  }
  return (int)pbVar1 - (int)param_4;
}

/* ref: FUN_00e68640 */
GEN_LIB GEN_FRAME uint F_00e68640(GEN_P(int param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe68640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte * param_4 = (byte *)(uintptr_t)gen_a3;)
  byte * pbVar1;
  int iVar2;
  
  *param_4 = param_2;
  pbVar1 = param_4 + 1;
  if ((param_2 & 3) == 0) {
    *(short *)pbVar1 = (short)param_3;
    pbVar1 = param_4 + 3;
    iVar2 = 0;
    if (0 < param_3) {
      do {
        *(undefined4 *)pbVar1 = *((undefined4 *)GEN_TOP((param_1 + iVar2 * 4)));
        iVar2 = iVar2 + 1;
        pbVar1 = pbVar1 + 4;
      } while (iVar2 < param_3);
      return (int)pbVar1 - (int)param_4;
    }
  }
  else if ((param_2 & 3) == 1) {
    *(short *)pbVar1 = (short)param_3;
    *(undefined4 *)(param_4 + 3) = *((undefined4 *)GEN_TOP((param_1 + param_3 * 4)));
    pbVar1 = param_4 + 7;
  }
  return (int)pbVar1 - (int)param_4;
}

/* ref: FUN_00e686a0 */
GEN_LIB GEN_FRAME uint F_00e686a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(ushort * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(byte * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xe686a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(byte * param_6 = (byte *)(uintptr_t)gen_a5;)
  ushort * puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  *param_6 = (byte)param_2;
  puVar1 = (ushort *)(param_6 + 1);
  if (((byte)param_2 & 3) == 2) {
    uVar2 = ((ushort)param_4 - (ushort)param_3) + 1;
    local_8 = (uint)uVar2;
    *puVar1 = (ushort)param_3;
    *(ushort *)(param_6 + 3) = (ushort)param_4;
    uVar3 = (uint)(uVar2 >> 5);
    puVar1 = (ushort *)(param_6 + 5);
    uVar4 = 0;
    if (uVar3 != 0xffffffff) {
      do {
        *(undefined4 *)puVar1 = *((undefined4 *)GEN_TOP((param_5 + uVar4 * 4)));
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar4 < uVar3 + 1);
    }
    uVar3 = 0;
    if ((ushort)param_3 <= (ushort)param_4) {
      uVar4 = (uint)(ushort)param_3;
      param_2 = ((ushort *)GEN_TOP((param_1 + uVar4 * 2)));
      do {
        if ((*((uint *)GEN_TOP((param_5 + ((uVar3 & 0xffff) >> 5) * 4))) & 1 << ((byte)uVar4 & 0x1f)) != 0) {
          *puVar1 = *param_2;
          puVar1 = puVar1 + 1;
        }
        param_2 = param_2 + 1;
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + 1;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return (int)puVar1 - (int)param_6;
}

/* ref: FUN_00e68750 */
GEN_LIB GEN_FRAME uint F_00e68750(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(byte * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xe68750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(byte * param_6 = (byte *)(uintptr_t)gen_a5;)
  ushort * puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint local_8;
  
  *param_6 = (byte)param_2;
  puVar1 = (ushort *)(param_6 + 1);
  if (((byte)param_2 & 3) == 2) {
    uVar2 = ((ushort)param_4 - (ushort)param_3) + 1;
    local_8 = (uint)uVar2;
    *puVar1 = (ushort)param_3;
    *(ushort *)(param_6 + 3) = (ushort)param_4;
    uVar3 = (uint)(uVar2 >> 5);
    puVar1 = (ushort *)(param_6 + 5);
    uVar4 = 0;
    if (uVar3 != 0xffffffff) {
      do {
        *(undefined4 *)puVar1 = *((undefined4 *)GEN_TOP((param_5 + uVar4 * 4)));
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar4 < uVar3 + 1);
    }
    uVar2 = 0;
    if ((ushort)param_3 <= (ushort)param_4) {
      uVar3 = (uint)(ushort)param_3;
      puVar5 = ((undefined4 *)GEN_TOP((param_1 + uVar3 * 4)));
      do {
        if ((*((uint *)GEN_TOP((param_5 + (uint)(uVar2 >> 5) * 4))) & 1 << ((byte)uVar3 & 0x1f)) != 0) {
          *(undefined4 *)puVar1 = *puVar5;
          puVar1 = puVar1 + 2;
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 1;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return (int)puVar1 - (int)param_6;
}

/* ref: FUN_00e68800 */
GEN_LIB GEN_FRAME uint F_00e68800(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe68800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  uint * puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  
  puVar2 = (uint *)(param_1 + 1);
  bVar3 = *param_1 & 3;
  if (bVar3 == 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)(param_1 + 3);
    iVar4 = 0;
    if ((ushort)uVar1 != 0) {
      do {
        *((uint *)GEN_TOP((param_2 + iVar4 * 4))) = *puVar2;
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar4 < (int)(uint)(ushort)uVar1);
      return (int)puVar2 - (int)param_1;
    }
  }
  else {
    if (bVar3 == 1) {
      *((undefined4 *)GEN_TOP((param_2 + (uint)(ushort)*puVar2 * 4))) = *(undefined4 *)(param_1 + 3);
      return 7;
    }
    if ((*param_1 & 3) == 2) {
      uVar8 = *(ushort *)(param_1 + 3);
      uVar1 = *puVar2;
      uVar7 = (uint)(ushort)uVar1;
      uVar5 = (uVar8 - uVar7) + 1 & 0xffff;
      puVar2 = (uint *)(param_1 + 5);
      iVar4 = (uVar5 >> 5) + 1;
      ((uint *)(gen_frame + 0x0))[2] = (uint)uVar8;
      ((uint *)(gen_frame + 0x0))[1] = uVar5;
      if (iVar4 != 0) {
        puVar9 = puVar2;
        puVar10 = ((uint *)(gen_frame + 0x0));
        for (iVar6 = iVar4; iVar6 != 0; iVar6 = iVar6 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar8 = (ushort)((uint *)(gen_frame + 0x0))[2];
        puVar2 = puVar2 + iVar4;
        uVar5 = ((uint *)(gen_frame + 0x0))[1];
      }
      uVar11 = 0;
      if ((ushort)uVar1 <= uVar8) {
        puVar9 = ((uint *)GEN_TOP((param_2 + uVar7 * 4)));
        ((uint *)(gen_frame + 0x0))[2] = uVar5;
        do {
          if ((((uint *)(gen_frame + 0x0))[(int)((uVar11 & 0xffff) >> 5)] & 1 << ((byte)uVar7 & 0x1f)) != 0) {
            *puVar9 = *puVar2;
            puVar2 = puVar2 + 1;
          }
          uVar11 = uVar11 + 1;
          uVar7 = uVar7 + 1;
          puVar9 = puVar9 + 1;
          uVar1 = ((uint *)(gen_frame + 0x0))[2] - 1;
          ((uint *)(gen_frame + 0x0))[2] = uVar1;
        } while (uVar1 != 0);
      }
    }
  }
  return (int)puVar2 - (int)param_1;
}

/* ref: FUN_00e688e0 */
GEN_LIB GEN_FRAME uint F_00e688e0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe688e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  return 1;
}

/* ref: FUN_00e68900 */
GEN_LIB GEN_FRAME uint F_00e68900(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  return 1;
}

/* ref: FUN_00e68920 */
GEN_LIB GEN_FRAME uint F_00e68920(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe68920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e68970 */
GEN_LIB GEN_FRAME uint F_00e68970(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  return 4;
}

/* ref: FUN_00e68990 */
GEN_LIB GEN_FRAME uint F_00e68990(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  return 1;
}

/* ref: FUN_00e689b0 */
GEN_LIB GEN_FRAME uint F_00e689b0(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe689b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  return 2;
}

/* ref: FUN_00e689d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e689d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe689d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e68a00 */
GEN_LIB GEN_FRAME uint F_00e68a00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e68a20 */
GEN_LIB GEN_FRAME uint F_00e68a20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe68a20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e68a50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e68a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe68a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 0x10))) < param_1) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10))) - param_1;
  uVar2 = param_2;
  if (uVar1 < param_2) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2;
  if (param_4 <= uVar2) {
    uVar1 = param_4;
  }
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    this = *(undefined * PTR32 *)this;
  }
  uVar1 = F_0040d320((int)this + param_1,param_3,uVar1);
  if (uVar1 == 0) {
    if (uVar2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(uVar2 != param_4);
  }
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_00e68ac0(void)
{
  GEN_ENTER(0xe68ac0u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e68ad0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e68b00(void)
{
  GEN_ENTER(0xe68b00u, 0u, 0u, 0u, 0u);
  return 0x135ae3c;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e68b10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e68b40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e68b70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e68ba0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e68bd0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e68c00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e68c30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e68c60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e68c90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e68cc0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e68cf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe68cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e68d40 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e68d40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe68d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e68d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e68d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe68d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00e68dc0 */
GEN_LIB GEN_FRAME uint F_00e68dc0(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe68dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  uint * puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  
  puVar2 = (uint *)(param_1 + 1);
  bVar3 = *param_1 & 3;
  if (bVar3 == 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)(param_1 + 3);
    iVar4 = 0;
    if ((ushort)uVar1 != 0) {
      do {
        *((uint *)GEN_TOP((param_2 + iVar4 * 4))) = *puVar2;
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar4 < (int)(uint)(ushort)uVar1);
      return (int)puVar2 - (int)param_1;
    }
  }
  else {
    if (bVar3 == 1) {
      *((undefined4 *)GEN_TOP((param_2 + (uint)(ushort)*puVar2 * 4))) = *(undefined4 *)(param_1 + 3);
      return 7;
    }
    if ((*param_1 & 3) == 2) {
      uVar8 = *(ushort *)(param_1 + 3);
      uVar1 = *puVar2;
      uVar7 = (uint)(ushort)uVar1;
      uVar5 = (uVar8 - uVar7) + 1 & 0xffff;
      puVar2 = (uint *)(param_1 + 5);
      iVar4 = (uVar5 >> 5) + 1;
      ((uint *)(gen_frame + 0x0))[2] = (uint)uVar8;
      ((uint *)(gen_frame + 0x0))[1] = uVar5;
      if (iVar4 != 0) {
        puVar9 = puVar2;
        puVar10 = ((uint *)(gen_frame + 0x0));
        for (iVar6 = iVar4; iVar6 != 0; iVar6 = iVar6 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar8 = (ushort)((uint *)(gen_frame + 0x0))[2];
        puVar2 = puVar2 + iVar4;
        uVar5 = ((uint *)(gen_frame + 0x0))[1];
      }
      uVar11 = 0;
      if ((ushort)uVar1 <= uVar8) {
        puVar9 = ((uint *)GEN_TOP((param_2 + uVar7 * 4)));
        ((uint *)(gen_frame + 0x0))[2] = uVar5;
        do {
          if ((((uint *)(gen_frame + 0x0))[(int)((uVar11 & 0xffff) >> 5)] & 1 << ((byte)uVar7 & 0x1f)) != 0) {
            *puVar9 = *puVar2;
            puVar2 = puVar2 + 1;
          }
          uVar11 = uVar11 + 1;
          uVar7 = uVar7 + 1;
          puVar9 = puVar9 + 1;
          uVar1 = ((uint *)(gen_frame + 0x0))[2] - 1;
          ((uint *)(gen_frame + 0x0))[2] = uVar1;
        } while (uVar1 != 0);
      }
    }
  }
  return (int)puVar2 - (int)param_1;
}

/* ref: FUN_00e68ea0 */
GEN_LIB GEN_FRAME uint F_00e68ea0(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe68ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  uint * puVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  
  puVar2 = (uint *)(param_1 + 1);
  bVar3 = *param_1 & 3;
  if (bVar3 == 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)(param_1 + 3);
    iVar5 = 0;
    if ((ushort)uVar1 != 0) {
      do {
        *((byte *)GEN_TOP((iVar5 + param_2))) = (byte)*puVar2;
        iVar5 = iVar5 + 1;
        puVar2 = ((uint *)GEN_TOP(((int)puVar2 + 1)));
      } while (iVar5 < (int)(uint)(ushort)uVar1);
      return (int)puVar2 - (int)param_1;
    }
  }
  else {
    if (bVar3 == 1) {
      *((byte *)GEN_TOP(((uint)(ushort)*puVar2 + param_2))) = param_1[3];
      return 4;
    }
    if ((*param_1 & 3) == 2) {
      uVar4 = *(ushort *)(param_1 + 3);
      uVar1 = *puVar2;
      uVar7 = (uint)(ushort)uVar1;
      uVar8 = (uVar4 - uVar7) + 1 & 0xffff;
      puVar2 = (uint *)(param_1 + 5);
      iVar5 = (uVar8 >> 5) + 1;
      ((uint *)(gen_frame + 0x0))[2] = (uint)uVar4;
      ((uint *)(gen_frame + 0x0))[1] = uVar8;
      if (iVar5 != 0) {
        puVar9 = puVar2;
        puVar10 = ((uint *)(gen_frame + 0x0));
        for (iVar6 = iVar5; iVar6 != 0; iVar6 = iVar6 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar4 = (ushort)((uint *)(gen_frame + 0x0))[2];
        puVar2 = puVar2 + iVar5;
        uVar8 = ((uint *)(gen_frame + 0x0))[1];
      }
      uVar11 = 0;
      if ((ushort)uVar1 <= uVar4) {
        do {
          if ((((uint *)(gen_frame + 0x0))[(int)((uVar11 & 0xffff) >> 5)] & 1 << ((byte)uVar7 & 0x1f)) != 0) {
            *((byte *)GEN_TOP((uVar7 + param_2))) = (byte)*puVar2;
            puVar2 = ((uint *)GEN_TOP(((int)puVar2 + 1)));
          }
          uVar11 = uVar11 + 1;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
  }
  return (int)puVar2 - (int)param_1;
}

/* ref: FUN_00e68f70 */
GEN_LIB GEN_FRAME uint F_00e68f70(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe68f70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  uint * puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint * puVar9;
  ushort * puVar10;
  uint * puVar11;
  uint uVar12;
  
  puVar2 = (uint *)(param_1 + 1);
  bVar3 = *param_1 & 3;
  if (bVar3 == 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)(param_1 + 3);
    iVar4 = 0;
    if ((ushort)uVar1 != 0) {
      do {
        *((ushort *)GEN_TOP((param_2 + iVar4 * 2))) = (ushort)*puVar2;
        iVar4 = iVar4 + 1;
        puVar2 = ((uint *)GEN_TOP(((int)puVar2 + 2)));
      } while (iVar4 < (int)(uint)(ushort)uVar1);
      return (int)puVar2 - (int)param_1;
    }
  }
  else {
    if (bVar3 == 1) {
      *((undefined2 *)GEN_TOP((param_2 + (uint)(ushort)*puVar2 * 2))) = *(undefined2 *)(param_1 + 3);
      return 5;
    }
    if ((*param_1 & 3) == 2) {
      uVar8 = *(ushort *)(param_1 + 3);
      uVar1 = *puVar2;
      uVar7 = (uint)(ushort)uVar1;
      uVar5 = (uVar8 - uVar7) + 1 & 0xffff;
      puVar2 = (uint *)(param_1 + 5);
      iVar4 = (uVar5 >> 5) + 1;
      ((uint *)(gen_frame + 0x0))[2] = (uint)uVar8;
      ((uint *)(gen_frame + 0x0))[1] = uVar5;
      if (iVar4 != 0) {
        puVar9 = puVar2;
        puVar11 = ((uint *)(gen_frame + 0x0));
        for (iVar6 = iVar4; iVar6 != 0; iVar6 = iVar6 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        uVar8 = (ushort)((uint *)(gen_frame + 0x0))[2];
        puVar2 = puVar2 + iVar4;
        uVar5 = ((uint *)(gen_frame + 0x0))[1];
      }
      uVar12 = 0;
      if ((ushort)uVar1 <= uVar8) {
        puVar10 = ((ushort *)GEN_TOP((param_2 + uVar7 * 2)));
        ((uint *)(gen_frame + 0x0))[2] = uVar5;
        do {
          if ((((uint *)(gen_frame + 0x0))[(int)((uVar12 & 0xffff) >> 5)] & 1 << ((byte)uVar7 & 0x1f)) != 0) {
            *puVar10 = (ushort)*puVar2;
            puVar2 = ((uint *)GEN_TOP(((int)puVar2 + 2)));
          }
          uVar12 = uVar12 + 1;
          uVar7 = uVar7 + 1;
          puVar10 = puVar10 + 1;
          uVar1 = ((uint *)(gen_frame + 0x0))[2] - 1;
          ((uint *)(gen_frame + 0x0))[2] = uVar1;
        } while (uVar1 != 0);
      }
    }
  }
  return (int)puVar2 - (int)param_1;
}

/* ref: FUN_00e69060 */
GEN_LIB GEN_FRAME uint F_00e69060(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe69060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e69090 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e69090(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe69090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e690b0 */
GEN_LIB GEN_FRAME uint F_00e690b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe690b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e690e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e690e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe690e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00e68a50(this GEN_EDX_FWD,0,*((undefined4 *)GEN_TOP(((int)this + 0x10))),param_1,
                       (int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00e69130 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e69130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe69130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00e69160 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e69160(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe69160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e69190 */
GEN_LIB GEN_FRAME uint F_00e69190(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe69190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e691b0 */
GEN_LIB GEN_FRAME uint F_00e691b0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe691b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00e68a50(param_1 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),param_2,
                       (int)pcVar2 - (int)(param_2 + 1));
  return (uint)(uVar3 == 0);
}

/* ref: FUN_00e691f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e691f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe691f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  uVar2 = param_1[4] - param_2;
  uVar5 = param_3;
  if (uVar2 < param_3) {
    uVar5 = uVar2;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (-iVar1 - 1U <= uVar5) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (uVar5 != 0) {
    uVar2 = iVar1 + uVar5;
    if (uVar2 == 0xffffffff) {
                    
      F_00c4579a(((char *)REFP(0x10802b0)));
    }
    if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar2) {
      F_00a16590(this GEN_EDX_ARG,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    puVar4 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar4 = ((undefined4 *)GEN_TOP(*param_1));
    }
    pvVar3 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar3,(int)puVar4 + param_2,uVar5);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined1 *)GEN_TOP((*(int *)this + uVar2))) = 0;
      return (uint)this;
    }
    *((undefined1 *)GEN_TOP(((int)this + uVar2))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00e692e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e692e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe692e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00e69310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe69310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar3 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 4);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    F_00c46e20(uVar4,*(int *)this,(*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    uVar3 = uVar4 + param_1 * 4;
    *(uint *)this = uVar4;
    *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4 + (iVar2 - iVar1 >> 2) * 4;
  }
  return uVar3;
}

/* ref: FUN_00e693c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e693c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe693c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e691f0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00e693e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e693e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe693e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00e69310(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00e69310(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00e69450 */
GEN_LIB GEN_FRAME uint F_00e69450(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe69450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00e68a50(param_1 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),param_2,
                       (int)pcVar2 - (int)(param_2 + 1));
  return (uint)(uVar3 != 0);
}

/* ref: FUN_00e69490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe69490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
    pvVar3 = this;
    if (0xf < uVar2) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    if (pvVar3 <= param_1) {
      pvVar3 = this;
      if (0xf < uVar2) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar3)))) {
        if (0xf < uVar2) {
          uVar2 = F_00e691f0(this GEN_EDX_FWD,this,(int)param_1 - *(int *)this,param_2);
          return uVar2;
        }
        uVar2 = F_00e691f0(this GEN_EDX_ARG,this,(int)param_1 - (int)this,param_2);
        return uVar2;
      }
    }
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (-iVar1 - 1U <= param_2) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (param_2 != 0) {
    uVar2 = iVar1 + param_2;
    if (uVar2 == 0xffffffff) {
                    
      F_00c4579a(((char *)REFP(0x10802b0)));
    }
    if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar2) {
      F_00a16590(this GEN_EDX_ARG,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    pvVar3 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar3,param_1,param_2);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined1 *)GEN_TOP((*(int *)this + uVar2))) = 0;
      return (uint)this;
    }
    *((undefined1 *)GEN_TOP(((int)this + uVar2))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00e695b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e695b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe695b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e691f0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00e695d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e695d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe695d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00e693e0(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00e693e0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00e69640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe69640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_00bb4bd0(this GEN_EDX_FWD,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00e69680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe69680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00e69490(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00e696b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e696b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe696b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00e69490(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00e696e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e696e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe696e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  F_00bb4bd0(param_1 GEN_EDX_FWD,this,param_2,param_3);
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e69780(void)
{
  GEN_ENTER(0xe69780u, 0u, 0u, 0u, 0u);
  return 0xb;
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00e69790(void)
{
  GEN_ENTER(0xe69790u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135b1e4);
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e697a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe697a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158e10) + param_1 * 4);
}

/* ref: FUN_00e697c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e697c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe697c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x1158e18) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e697e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe697e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 2);
  return 0xffffffff;
}

/* ref: FUN_00e69820 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e69820(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe69820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x2e;
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe69830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x135b1dc))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe69850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158df8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe69870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158e08) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe69890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3804) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e698b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe698b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158e00) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e698d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe698d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x1158e08) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x1158e08) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3804) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3804) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x1158e00) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3804) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x1158df8) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x1158e00) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158df8) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69950(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe69950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3804) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x1158e00) + param_2 * 4) * *(int *)(&REFG(undefined, 0x1158df8) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x1158df8) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3804) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x1158e00) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e699d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe699d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
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
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3804) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x1158e00) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e69a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe69a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  return uVar2 + uVar1;
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe69a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe69aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe69ac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,param_2 + uVar1);
  return uVar2 + ((param_2 + uVar1) - param_2);
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe69b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,param_1 + uVar1,param_2);
  return uVar2 + ((param_1 + uVar1) - param_1);
}

/* ref: FUN_00e69b40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e69b40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe69b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe69b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135b28c) + 0x10))))(&REFG(undefined * PTR32, 0x135b28c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e69b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe69b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135b28c) + 0x10))))(&REFG(undefined * PTR32, 0x135b28c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69bb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe69bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 == 0) {
    return in_ecx + 4;
  }
  if (param_2 != 1) {
    return 0;
  }
  return in_ecx + 8;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e69be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe69be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe69bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    uVar4 = param_1[1];
    *(uint *)(this + 4) = uVar4;
    this[8] = *(undefined *)(param_1 + 2);
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e69c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe69c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    if (param_2 == 0) {
      uVar4 = param_1[1];
      *(uint *)(this + 4) = uVar4;
    }
    else {
      uVar4 = param_2 - 1;
      if (uVar4 == 0) {
        this[8] = *(undefined *)(param_1 + 2);
        return (uint)param_1;
      }
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e69cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe69cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e69db3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e69db8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e69db3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e69db8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e69e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe69e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    uVar1 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar2;
    return 1;
  }
  if (param_1 != 1) {
    return 0;
  }
  uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
  uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
  uVar2 = F_00e50570(uVar1);
  this[8] = SUB81(uVar2,0);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e69ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe69ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar7 = F_00e50570(uVar3 + 2);
  *(int *)(this + 4) = (int)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  this[8] = SUB81(uVar7,0);
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar3 = F_00c51da0(uVar3,0x7d);
    *param_2 = uVar3;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e69fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe69fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6a0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6a0f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[8],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6a180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6a180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6a1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6a1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e6a2b3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e6a2b8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e6a2b3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e6a2b8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6a440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6a440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (param_1 == 0) {
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar2;
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    this[8] = SUB81(uVar2,0);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6a4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6a4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  ulonglong uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b2a4));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 4) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b2a4));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    this[8] = SUB81(uVar6,0);
  }
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    *param_2 = iVar5;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e6a640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6a640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6a760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6a760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[8],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6aa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6aa30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e6ab82: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e6ab87;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e6ab82;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e6ab87: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
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
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6ace0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6ace0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: FUN_00e6aeb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e6aeb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe6aeb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 8))) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e6aee0(void)
{
  GEN_ENTER(0xe6aee0u, 0u, 0u, 0u, 0u);
  return 0x26;
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00e6aef0(void)
{
  GEN_ENTER(0xe6aef0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135b1f4);
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6af00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6af00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158e48) + param_1 * 4);
}

/* ref: FUN_00e6af20 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e6af20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe6af20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x1158e54) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6af40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6af40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 3);
  return 0xffffffff;
}

/* ref: FUN_00e6af80 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e6af80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe6af80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x168;
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6af90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6af90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x135b1e8))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6afb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6afb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158e24) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6afd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6afd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158e3c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6aff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6aff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e380c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6b010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6b010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158e30) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6b030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6b030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x1158e3c) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x1158e3c) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e380c) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e380c) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x1158e30) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e380c) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x1158e24) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x1158e30) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158e24) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6b0b0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe6b0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e380c) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x1158e30) + param_2 * 4) * *(int *)(&REFG(undefined, 0x1158e24) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x1158e24) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e380c) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x1158e30) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6b130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe6b130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
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
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e380c) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x1158e30) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e6b1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe6b1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  return uVar3 + uVar1 + uVar2;
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6b1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6b1f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,param_2 + uVar1);
  iVar3 = param_2 + uVar1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6b240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6b240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,2,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e6b290 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e6b290(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe6b290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x1159154));
  *(undefined2 *)(in_ecx + 1) = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  *(undefined2 *)(in_ecx + 4) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e6b2b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e6b2b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe6b2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6b2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6b2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135b290) + 0x10))))(&REFG(undefined * PTR32, 0x135b290),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e6b2f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6b2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6b2f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135b290) + 0x10))))(&REFG(undefined * PTR32, 0x135b290),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6b320(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe6b320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 == 0) {
    return in_ecx + 4;
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      return 0;
    }
    return in_ecx + 0xc;
  }
  return in_ecx + 8;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6b350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6b350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if ((param_2 < *(uint *)(&REFG(undefined, 0x1158e24) + param_1 * 4)) && (param_1 == 2)) {
    return (uint)(this + param_2 + 0xc);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6b380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6b380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *(short *)(this + 4) = (short)param_1[1];
    *(int *)(this + 8) = param_1[2];
    this[0xc] = *(undefined *)(param_1 + 3);
    this[0xd] = *((undefined *)GEN_TOP(((int)param_1 + 0xd)));
    this[0xe] = *((undefined *)GEN_TOP(((int)param_1 + 0xe)));
    this[0xf] = *((undefined *)GEN_TOP(((int)param_1 + 0xf)));
    uVar4 = (uint)(byte)*(undefined *)(param_1 + 4);
    this[0x10] = *(undefined *)(param_1 + 4);
    this[0x11] = *((undefined *)GEN_TOP(((int)param_1 + 0x11)));
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6b400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6b400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined1 CVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  if ((short)uVar4 == (short)uVar5) {
    if (param_2 == 0) {
      *(short *)(this + 4) = (short)param_1[1];
      uVar5 = 0;
    }
    else {
      if (param_2 == 1) {
        uVar5 = param_1[2];
        *(uint *)(this + 8) = uVar5;
        return uVar5;
      }
      uVar5 = param_2 - 2;
      if (uVar5 == 0) {
        this[0xc] = *(undefined *)(param_1 + 3);
        this[0xd] = *((undefined *)GEN_TOP(((int)param_1 + 0xd)));
        this[0xe] = *((undefined *)GEN_TOP(((int)param_1 + 0xe)));
        CVar1 = *((undefined *)GEN_TOP(((int)param_1 + 0xf)));
        this[0xf] = CVar1;
        this[0x10] = *(undefined *)(param_1 + 4);
        this[0x11] = *((undefined *)GEN_TOP(((int)param_1 + 0x11)));
        return (uint)(byte)CVar1;
      }
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6b4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6b4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e6b5a3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e6b5a8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e6b5a3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e6b5a8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e6b670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe6b670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (param_1 == 0) {
    uVar1 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar1);
    *(short *)(this + 4) = (short)uVar4;
  }
  else {
    if (param_1 == 1) {
      uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar4 = F_00e50570(uVar1);
      *(int *)(this + 8) = (int)uVar4;
      return 1;
    }
    if (param_1 != 2) {
      return 0;
    }
    uVar1 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar3 = 0;
    while (iVar3 < (int)uVar1) {
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar4 = F_00e50570(uVar2);
      this[iVar3 + 0xc] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (5 < iVar3) {
        return 1;
      }
    }
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6b730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6b730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar8 = F_00e50570(uVar3 + 2);
  *(short *)(this + 4) = (short)uVar8;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar3 = uVar3 + 1;
  uVar8 = F_00e50570(uVar6 + 3);
  *(int *)(this + 8) = (int)uVar8;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 0xc] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
    if (5 < iVar5) {
LAB_00e6b837: ;
      if (param_2 != ((uint *)GEN_TOP(0x0))) {
        uVar3 = F_00c51da0(uVar3 + 1,0x7d);
        *param_2 = uVar3;
      }
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00e6b837;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e6b870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6b870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6b990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6b990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  undefined * this_00;
  int iVar2;
  undefined1 * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 4),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,6,0);
  iVar2 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar2 + 0xc],0);
    puVar3 = ((undefined1 *)(gen_frame + 0x0));
    this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar2,iVar2 >> 0x1f)));
    F_00ea7fb0(this_00 GEN_EDX_ARG,puVar3);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6ba80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6ba80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6baa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6baa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e6bbb3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e6bbb8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e6bbb3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e6bbb8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6bd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6bd40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (param_1 == 0) {
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar1);
    *(short *)(this + 4) = (short)uVar4;
  }
  else if (param_1 == 1) {
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar1);
    *(int *)(this + 8) = (int)uVar4;
  }
  else {
    if (param_1 != 2) {
      return 0;
    }
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    do {
      if ((int)uVar1 <= iVar3) {
        return 1;
      }
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar4 = F_00e505e0(uVar2);
      this[iVar3 + 0xc] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6be30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6be30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b330));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(short *)(this + 4) = (short)uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b330));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(int *)(this + 8) = (int)uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b32c));
      iVar5 = uVar3 + 10;
      iVar6 = 0;
      do {
        uVar7 = F_00e50570(iVar5);
        this[iVar6 + 0xc] = SUB81(uVar7,0);
        uVar3 = F_00c51da0(iVar5,0x2c);
        iVar6 = iVar6 + 1;
        iVar5 = uVar3 + 2;
      } while (iVar6 < 6);
    }
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      *param_2 = iVar5;
    }
    return 1;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e6bff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6bff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6c110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6c110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 * puVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 4),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar9 = 0;
  uVar8 = 6;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar8,uVar9);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  iVar6 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar6 + 0xc],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar10 = ((undefined1 *)(gen_frame + 0x54));
    iVar5 = iVar6 >> 0x1f;
    iVar7 = iVar6;
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar7,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar10);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6c5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6c5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e6c6f2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e6c6f7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e6c6f2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e6c6f7: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
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
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6c850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6c850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e6ca50(void)
{
  GEN_ENTER(0xe6ca50u, 0u, 0u, 0u, 0u);
  return 0xd2;
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00e6ca60(void)
{
  GEN_ENTER(0xe6ca60u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135b20c);
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6ca70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6ca70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158ea0) + param_1 * 4);
}

/* ref: FUN_00e6ca90 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e6ca90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe6ca90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x1158eb4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6cab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  return 0xffffffff;
}

/* ref: FUN_00e6caf0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e6caf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe6caf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x1c7;
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6cb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x135b1f8))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6cb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158e64) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6cb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158e8c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6cb60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3818) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6cb80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158e78) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6cba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x1158e8c) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x1158e8c) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3818) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3818) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x1158e78) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3818) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x1158e64) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x1158e78) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158e64) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cc20(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe6cc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3818) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x1158e78) + param_2 * 4) * *(int *)(&REFG(undefined, 0x1158e64) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x1158e64) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3818) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x1158e78) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe6cca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
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
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3818) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x1158e78) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e6cd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe6cd30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,3);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,4);
  return uVar5 + uVar1 + uVar2 + uVar3 + uVar4;
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe6cd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe6cda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6cdc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,4,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6ce30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6ce30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,4,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e6cea0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e6cea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe6cea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x115921c));
  *((undefined1 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  return (uint)this;
}

/* ref: FUN_00e6ced0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e6ced0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe6ced0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6cee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135b294) + 0x10))))(&REFG(undefined * PTR32, 0x135b294),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e6cf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6cf10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135b294) + 0x10))))(&REFG(undefined * PTR32, 0x135b294),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cf40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe6cf40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
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
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e6cf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6cf90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6cfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6cfa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *(short *)(this + 4) = (short)param_1[1];
    this[6] = *((undefined *)GEN_TOP(((int)param_1 + 6)));
    *(short *)(this + 8) = (short)param_1[2];
    uVar4 = (uint)*((ushort *)GEN_TOP(((int)param_1 + 10)));
    *(ushort *)(this + 10) = *((ushort *)GEN_TOP(((int)param_1 + 10)));
    this[0xc] = *(undefined *)(param_1 + 3);
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf5 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00e6d010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6d010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  ushort uVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      uVar1 = *(ushort *)(param_1 + 1);
      *(ushort *)(this + 4) = uVar1;
      return uVar1;
    case 1: ;
      this[6] = *((undefined *)GEN_TOP(((int)param_1 + 6)));
      return (ushort)param_2;
    case 2: ;
      *(short *)(this + 8) = (short)param_1[2];
      return (ushort)param_2;
    case 3: ;
      uVar1 = *((ushort *)GEN_TOP(((int)param_1 + 10)));
      *(ushort *)(this + 10) = uVar1;
      return uVar1;
    case 4: ;
      this[0xc] = *(undefined *)(param_1 + 3);
    }
  }
  return (ushort)uVar5;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6d0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6d0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e6d1c3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e6d1c8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e6d1c3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e6d1c8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e6d290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe6d290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  ulonglong uVar2;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 4) = (short)uVar2;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    this[6] = SUB81(uVar2,0);
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 8) = (short)uVar2;
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 10) = (short)uVar2;
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    this[0xc] = SUB81(uVar2,0);
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6d380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6d380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar7 = F_00e50570(uVar3 + 2);
  *(short *)(this + 4) = (short)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  this[6] = SUB81(uVar7,0);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  *(short *)(this + 8) = (short)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(short *)(this + 10) = (short)uVar7;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  this[0xc] = SUB81(uVar7,0);
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar3 = F_00c51da0(uVar6,0x7d);
    *param_2 = uVar3;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e6d4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6d4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6d5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6d5d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 4),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[6],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 8),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 10),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0xc],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6d700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6d700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6d720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6d720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e6d833: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e6d838;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e6d833;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e6d838: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6d9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6d9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 4) = (short)uVar2;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    this[6] = SUB81(uVar2,0);
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 8) = (short)uVar2;
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 10) = (short)uVar2;
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    this[0xc] = SUB81(uVar2,0);
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6db30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6db30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  ulonglong uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b3b8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(short *)(this + 4) = (short)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b3b8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    this[6] = SUB81(uVar6,0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b3b8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(short *)(this + 8) = (short)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b3b8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(short *)(this + 10) = (short)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b3b8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    this[0xc] = SUB81(uVar6,0);
  }
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    *param_2 = iVar5;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e6dd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6dd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6dea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6dea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 4),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[6],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 8),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 10),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0xc],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6e560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6e560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e6e6b2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e6e6b7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e6e6b2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e6e6b7: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
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
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6e810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6e810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e6ea10(void)
{
  GEN_ENTER(0xe6ea10u, 0u, 0u, 0u, 0u);
  return 0x36;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00e6ea20(void)
{
  GEN_ENTER(0xe6ea20u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135b220);
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6ea30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6ea30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158efc) + param_1 * 4);
}

/* ref: FUN_00e6ea50 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e6ea50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe6ea50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x1158f0c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6ea70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6ea70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  return 0xffffffff;
}

/* ref: FUN_00e6eab0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e6eab0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe6eab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x1eb;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6eac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6eac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x135b210))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6eae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6eae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158ecc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6eb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6eb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158eec) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6eb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6eb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e382c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6eb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6eb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158edc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6eb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6eb60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x1158eec) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x1158eec) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e382c) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e382c) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x1158edc) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e382c) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x1158ecc) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x1158edc) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158ecc) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6ebe0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe6ebe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e382c) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x1158edc) + param_2 * 4) * *(int *)(&REFG(undefined, 0x1158ecc) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x1158ecc) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e382c) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x1158edc) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6ec60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe6ec60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
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
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e382c) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x1158edc) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e6ecf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe6ecf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,3);
  return uVar4 + uVar1 + uVar2 + uVar3;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6ed30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6ed30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,3,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6ed90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6ed90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,3,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e6edf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e6edf0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe6edf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x11592e4));
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  *(undefined1 *)(in_ecx + 0xe) = 0;
  in_ecx[0xf] = 0xffffffff;
  *(undefined8 *)(in_ecx + 1) = 0;
  *(undefined8 *)(in_ecx + 3) = 0;
  *(undefined8 *)(in_ecx + 5) = 0;
  *(undefined8 *)(in_ecx + 7) = 0;
  *(undefined8 *)(in_ecx + 9) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e6ee30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e6ee30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe6ee30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6ee40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6ee40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135b298) + 0x10))))(&REFG(undefined * PTR32, 0x135b298),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e6ee70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6ee70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6ee70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135b298) + 0x10))))(&REFG(undefined * PTR32, 0x135b298),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6eea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe6eea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 0x30;
  case 2: ;
    return in_ecx + 0x38;
  case 3: ;
    return in_ecx + 0x3c;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6eef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6eef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if ((param_2 < *(uint *)(&REFG(undefined, 0x1158ecc) + param_1 * 4)) && (param_1 == 0)) {
    return (uint)(this + param_2 + 4);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6ef20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6ef20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pMVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    pMVar5 = this + 4;
    iVar6 = 0x28;
    do {
      *pMVar5 = pMVar5[(int)param_1 - (int)this];
      pMVar5 = pMVar5 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
    *(int *)(this + 0x30) = param_1[0xc];
    *(int *)(this + 0x34) = param_1[0xd];
    this[0x38] = *(undefined *)(param_1 + 0xe);
    uVar4 = param_1[0xf];
    *(uint *)(this + 0x3c) = uVar4;
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6efa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6efa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pMVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    uVar4 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      pMVar5 = this + 4;
      iVar6 = 0x28;
      do {
        *pMVar5 = pMVar5[(int)param_1 - (int)this];
        pMVar5 = pMVar5 + 1;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
      return (uint)pMVar5;
    case 1: ;
      uVar4 = param_1[0xc];
      *(uint *)(this + 0x30) = uVar4;
      *(int *)(this + 0x34) = param_1[0xd];
      return uVar4;
    case 2: ;
      this[0x38] = *(undefined *)(param_1 + 0xe);
      return param_2;
    case 3: ;
      uVar4 = param_1[0xf];
      *(uint *)(this + 0x3c) = uVar4;
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6f050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6f050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e6f153: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e6f158;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e6f153;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e6f158: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e6f220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe6f220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e8c050(param_2 GEN_EDX_FWD);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar4 = F_00e50570(uVar1);
      this[iVar3 + 4] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (0x27 < iVar3) {
        return 1;
      }
    }
    break;
  case 1: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    *(ulonglong *)(this + 0x30) = uVar4;
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x38] = SUB81(uVar4,0);
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x3c) = (int)uVar4;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6f320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6f320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
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
LAB_00e6f3f7: ;
      uVar6 = F_00c51da0(uVar3 + 4,0x22);
      uVar8 = F_00e50570(uVar3 + 4);
      *(ulonglong *)(this + 0x30) = uVar8;
      uVar3 = F_00c51da0(uVar6 + 3,0x22);
      uVar8 = F_00e50570(uVar6 + 3);
      this[0x38] = SUB81(uVar8,0);
      uVar6 = F_00c51da0(uVar3 + 3,0x22);
      uVar8 = F_00e50570(uVar3 + 3);
      *(int *)(this + 0x3c) = (int)uVar8;
      if (param_2 != ((uint *)GEN_TOP(0x0))) {
        uVar3 = F_00c51da0(uVar6,0x7d);
        *param_2 = uVar3;
      }
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00e6f3f7;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e6f470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6f470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6f590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6f590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  undefined * this_00;
  int iVar2;
  undefined1 * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,0x28,0);
  iVar2 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar2 + 4],0);
    puVar3 = ((undefined1 *)(gen_frame + 0x0));
    this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar2,iVar2 >> 0x1f)));
    F_00ea7fb0(this_00 GEN_EDX_ARG,puVar3);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x28);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x38],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x3c),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e6f6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6f6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6f6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6f6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e6f7f3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e6f7f8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e6f7f3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e6f7f8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6f980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6f980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar4 = F_00e505e0(uVar1);
      this[iVar3 + 4] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (0x27 < iVar3) {
        return 1;
      }
    }
    break;
  case 1: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    *(ulonglong *)(this + 0x30) = uVar4;
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x38] = SUB81(uVar4,0);
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x3c) = (int)uVar4;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6fae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe6fae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b45c));
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
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b458));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(ulonglong *)(this + 0x30) = uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b458));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x38] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b458));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(int *)(this + 0x3c) = (int)uVar7;
    }
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      *param_2 = iVar5;
    }
    return 1;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e6fd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6fd00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e6fe20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe6fe20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x80, 0, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x28;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x0)) + 4],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 0x28);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x38],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x3c),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e70410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe70410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e70562: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e70567;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e70562;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e70567: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
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
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e706c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe706c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e708c0(void)
{
  GEN_ENTER(0xe708c0u, 0u, 0u, 0u, 0u);
  return 0x3b;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00e708d0(void)
{
  GEN_ENTER(0xe708d0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135b260);
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e708e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe708e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158fd4) + param_1 * 4);
}

/* ref: FUN_00e70900 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e70900(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe70900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x1159010) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e70920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe70920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0xf);
  return 0xffffffff;
}

/* ref: FUN_00e70960 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e70960(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe70960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x2a6;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e70970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe70970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x135b224))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e70990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe70990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158f20) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e709b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe709b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158f98) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e709d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe709d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e383c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e709f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe709f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158f5c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e70a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe70a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x1158f98) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x1158f98) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e383c) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e383c) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x1158f5c) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e383c) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x1158f20) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x1158f5c) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158f20) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e70a90(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe70a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e383c) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x1158f5c) + param_2 * 4) * *(int *)(&REFG(undefined, 0x1158f20) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x1158f20) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e383c) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x1158f5c) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e70b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe70b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
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
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e383c) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x1158f5c) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e70ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe70ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,3);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,4);
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,5);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,6);
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,7);
  uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,8);
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,9);
  uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,10);
  uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,0xb);
  uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,0xc);
  uVar14 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,0xd);
  uVar15 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,0xe);
  return uVar15 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 + uVar8 + uVar9 + uVar10 +
                  uVar11 + uVar12 + uVar13 + uVar14;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e70c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe70c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,5,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,6,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,7,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,8,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,9,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,10,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,0xb,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,0xc,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,0xd,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,0xe,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e70d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe70d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,5,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,6,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,7,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,8,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,9,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,10,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,0xb,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,0xc,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,0xd,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,0xe,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e70e70 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e70e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe70e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11593ac));
  *((undefined2 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1e))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x22))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1a))) = 0;
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
  *((undefined2 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x52))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x56))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x5c))) = 0;
  return 0;
}

/* ref: FUN_00e70f00 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e70f00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe70f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e70f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe70f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135b29c) + 0x10))))(&REFG(undefined * PTR32, 0x135b29c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e70f40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e70f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe70f40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135b29c) + 0x10))))(&REFG(undefined * PTR32, 0x135b29c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e70f70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe70f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 8;
  case 2: ;
    return in_ecx + 0x14;
  case 3: ;
    return in_ecx + 0x18;
  case 4: ;
    return in_ecx + 0x1c;
  case 5: ;
    return in_ecx + 0x1e;
  case 6: ;
    return in_ecx + 0x20;
  case 7: ;
    return in_ecx + 0x22;
  case 8: ;
    return in_ecx + 0x24;
  case 9: ;
    return in_ecx + 0x28;
  case 10: ;
    return in_ecx + 0x34;
  case 0xb: ;
    return in_ecx + 0x40;
  case 0xc: ;
    return in_ecx + 0x4c;
  case 0xd: ;
    return in_ecx + 0x52;
  case 0xe: ;
    return in_ecx + 0x58;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e71030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe71030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 < *(uint *)(&REFG(undefined, 0x1158f20) + param_1 * 4)) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      return (uint)(this + param_2 + 4);
    case 1: ;
      return (uint)(this + param_2 * 4 + 8);
    case 3: ;
      return (uint)(this + param_2 + 0x18);
    case 9: ;
      return (uint)(this + param_2 * 4 + 0x28);
    case 10: ;
      return (uint)(this + param_2 * 4 + 0x34);
    case 0xb: ;
      return (uint)(this + param_2 * 4 + 0x40);
    case 0xc: ;
      return (uint)(this + param_2 * 2 + 0x4c);
    case 0xd: ;
      return (uint)(this + param_2 * 2 + 0x52);
    case 0xe: ;
      return (uint)(this + param_2 * 2 + 0x58);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e710e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe710e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    this[4] = *(undefined *)(param_1 + 1);
    this[5] = *((undefined *)GEN_TOP(((int)param_1 + 5)));
    this[6] = *((undefined *)GEN_TOP(((int)param_1 + 6)));
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    *(int *)(this + 0x14) = param_1[5];
    this[0x18] = *(undefined *)(param_1 + 6);
    this[0x19] = *((undefined *)GEN_TOP(((int)param_1 + 0x19)));
    this[0x1a] = *((undefined *)GEN_TOP(((int)param_1 + 0x1a)));
    *(short *)(this + 0x1c) = (short)param_1[7];
    *(undefined2 *)(this + 0x1e) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x1e)));
    *(short *)(this + 0x20) = (short)param_1[8];
    *(undefined2 *)(this + 0x22) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x22)));
    *(short *)(this + 0x24) = (short)param_1[9];
    *(int *)(this + 0x28) = param_1[10];
    *(int *)(this + 0x2c) = param_1[0xb];
    *(int *)(this + 0x30) = param_1[0xc];
    *(int *)(this + 0x34) = param_1[0xd];
    *(int *)(this + 0x38) = param_1[0xe];
    *(int *)(this + 0x3c) = param_1[0xf];
    *(int *)(this + 0x40) = param_1[0x10];
    *(int *)(this + 0x44) = param_1[0x11];
    *(int *)(this + 0x48) = param_1[0x12];
    *(short *)(this + 0x4c) = (short)param_1[0x13];
    *(undefined2 *)(this + 0x4e) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x4e)));
    *(short *)(this + 0x50) = (short)param_1[0x14];
    *(undefined2 *)(this + 0x52) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x52)));
    *(short *)(this + 0x54) = (short)param_1[0x15];
    *(undefined2 *)(this + 0x56) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x56)));
    uVar4 = (uint)*(ushort *)(param_1 + 0x16);
    *(ushort *)(this + 0x58) = *(ushort *)(param_1 + 0x16);
    *(undefined2 *)(this + 0x5a) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x5a)));
    *(short *)(this + 0x5c) = (short)param_1[0x17];
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e71210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe71210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined1 CVar1;
  undefined2 uVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  undefined3 uVar8;
  undefined2 uVar9;
  
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 4))))(piVar5 GEN_EDX_ARG);
  if ((short)uVar6 == (short)uVar7) {
    uVar7 = param_2;
    uVar9 = (undefined2)(param_2 >> 0x10);
    uVar8 = (undefined3)(param_2 >> 8);
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      CVar1 = *(undefined *)(param_1 + 1);
      this[4] = CVar1;
      this[5] = *((undefined *)GEN_TOP(((int)param_1 + 5)));
      this[6] = *((undefined *)GEN_TOP(((int)param_1 + 6)));
      return CONCAT31(uVar8,CVar1);
    case 1: ;
      uVar7 = param_1[2];
      *(uint *)(this + 8) = uVar7;
      *(int *)(this + 0xc) = param_1[3];
      *(int *)(this + 0x10) = param_1[4];
      return uVar7;
    case 2: ;
      uVar7 = param_1[5];
      *(uint *)(this + 0x14) = uVar7;
      return uVar7;
    case 3: ;
      this[0x18] = *(undefined *)(param_1 + 6);
      this[0x19] = *((undefined *)GEN_TOP(((int)param_1 + 0x19)));
      CVar1 = *((undefined *)GEN_TOP(((int)param_1 + 0x1a)));
      this[0x1a] = CVar1;
      return CONCAT31(uVar8,CVar1);
    case 4: ;
      *(short *)(this + 0x1c) = (short)param_1[7];
      return uVar7;
    case 5: ;
      *(undefined2 *)(this + 0x1e) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x1e)));
      return uVar7;
    case 6: ;
      iVar3 = param_1[8];
      *(short *)(this + 0x20) = (short)iVar3;
      return CONCAT22(uVar9,(short)iVar3);
    case 7: ;
      *(undefined2 *)(this + 0x22) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x22)));
      return uVar7;
    case 8: ;
      *(short *)(this + 0x24) = (short)param_1[9];
      return uVar7;
    case 9: ;
      uVar7 = param_1[10];
      *(uint *)(this + 0x28) = uVar7;
      *(int *)(this + 0x2c) = param_1[0xb];
      *(int *)(this + 0x30) = param_1[0xc];
      return uVar7;
    case 10: ;
      uVar7 = param_1[0xd];
      *(uint *)(this + 0x34) = uVar7;
      *(int *)(this + 0x38) = param_1[0xe];
      *(int *)(this + 0x3c) = param_1[0xf];
      return uVar7;
    case 0xb: ;
      uVar7 = param_1[0x10];
      *(uint *)(this + 0x40) = uVar7;
      *(int *)(this + 0x44) = param_1[0x11];
      *(int *)(this + 0x48) = param_1[0x12];
      return uVar7;
    case 0xc: ;
      iVar3 = param_1[0x13];
      *(short *)(this + 0x4c) = (short)iVar3;
      *(undefined2 *)(this + 0x4e) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x4e)));
      *(short *)(this + 0x50) = (short)param_1[0x14];
      return CONCAT22(uVar9,(short)iVar3);
    case 0xd: ;
      uVar2 = *((undefined2 *)GEN_TOP(((int)param_1 + 0x52)));
      *(undefined2 *)(this + 0x52) = uVar2;
      *(short *)(this + 0x54) = (short)param_1[0x15];
      *(undefined2 *)(this + 0x56) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x56)));
      return CONCAT22(uVar9,uVar2);
    case 0xe: ;
      uVar7 = CONCAT22(uVar9,(short)param_1[0x16]);
      *(short *)(this + 0x58) = (short)param_1[0x16];
      *(undefined2 *)(this + 0x5a) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x5a)));
      *(short *)(this + 0x5c) = (short)param_1[0x17];
    }
  }
  return uVar7;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e713f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe713f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e714f3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e714f8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e714f3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e714f8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e715c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe715c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  undefined * pCVar3;
  int iVar4;
  ulonglong uVar5;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e8c050(param_2 GEN_EDX_FWD);
    iVar4 = 0;
    while (iVar4 < (int)uVar1) {
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar2);
      this[iVar4 + 4] = SUB81(uVar5,0);
      iVar4 = iVar4 + 1;
      if (2 < iVar4) {
        return 1;
      }
    }
    break;
  case 1: ;
    uVar1 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar4 = 0;
    pCVar3 = this + 8;
    while (iVar4 < (int)uVar1) {
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar2);
      *(int *)pCVar3 = (int)uVar5;
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar3 + 4;
      if (2 < iVar4) {
        return 1;
      }
    }
    break;
  case 2: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 0x14) = (int)uVar5;
    return 1;
  case 3: ;
    uVar1 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar4 = 0;
    while (iVar4 < (int)uVar1) {
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar2);
      this[iVar4 + 0x18] = SUB81(uVar5,0);
      iVar4 = iVar4 + 1;
      if (2 < iVar4) {
        return 1;
      }
    }
    break;
  case 4: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(short *)(this + 0x1c) = (short)uVar5;
    return 1;
  case 5: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(short *)(this + 0x1e) = (short)uVar5;
    return 1;
  case 6: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(short *)(this + 0x20) = (short)uVar5;
    return 1;
  case 7: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(short *)(this + 0x22) = (short)uVar5;
    return 1;
  case 8: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(short *)(this + 0x24) = (short)uVar5;
    return 1;
  case 9: ;
    uVar1 = F_00e8c050(param_2 GEN_EDX_ARG);
    pCVar3 = this + 0x28;
    iVar4 = 0;
    while (iVar4 < (int)uVar1) {
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar2);
      *(int *)pCVar3 = (int)uVar5;
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar3 + 4;
      if (2 < iVar4) {
        return 1;
      }
    }
    break;
  case 10: ;
    uVar1 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar4 = 0;
    pCVar3 = this + 0x34;
    while (iVar4 < (int)uVar1) {
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar2);
      *(int *)pCVar3 = (int)uVar5;
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar3 + 4;
      if (2 < iVar4) {
        return 1;
      }
    }
    break;
  case 0xb: ;
    uVar1 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar4 = 0;
    pCVar3 = this + 0x40;
    while (iVar4 < (int)uVar1) {
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar2);
      *(int *)pCVar3 = (int)uVar5;
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar3 + 4;
      if (2 < iVar4) {
        return 1;
      }
    }
    break;
  case 0xc: ;
    uVar1 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar4 = 0;
    pCVar3 = this + 0x4c;
    while (iVar4 < (int)uVar1) {
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar2);
      *(short *)pCVar3 = (short)uVar5;
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar3 + 2;
      if (2 < iVar4) {
        return 1;
      }
    }
    break;
  case 0xd: ;
    uVar1 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar4 = 0;
    pCVar3 = this + 0x52;
    while (iVar4 < (int)uVar1) {
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar2);
      *(short *)pCVar3 = (short)uVar5;
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar3 + 2;
      if (2 < iVar4) {
        return 1;
      }
    }
    break;
  case 0xe: ;
    uVar1 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar4 = 0;
    pCVar3 = this + 0x58;
    do {
      if ((int)uVar1 <= iVar4) {
        return 1;
      }
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar2);
      *(short *)pCVar3 = (short)uVar5;
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar3 + 2;
    } while (iVar4 < 3);
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e719f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe719f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined * pCVar8;
  ulonglong uVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x4)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x4)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar9 = F_00e50570(uVar7);
    this[iVar5 + 4] = SUB81(uVar9,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 8;
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar9 = F_00e50570(uVar7);
    *(int *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = (int)uVar9;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
  } while (iVar5 < 3);
  uVar6 = F_00c51da0(uVar3 + 4,0x22);
  uVar9 = F_00e50570(uVar3 + 4);
  uVar6 = uVar6 + 1;
  *(int *)(this + 0x14) = (int)uVar9;
  uVar3 = F_00fb9a80(uVar6,0x5b,0x5d);
  iVar5 = 0;
  do {
    uVar7 = uVar6 + 3;
    uVar6 = F_00c51da0(uVar7,0x22);
    if ((uVar3 < uVar7) || (uVar3 < uVar6)) {
      uVar6 = uVar3 - 1;
      break;
    }
    uVar9 = F_00e50570(uVar7);
    this[iVar5 + 0x18] = SUB81(uVar9,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  uVar3 = F_00c51da0(uVar6 + 4,0x22);
  uVar9 = F_00e50570(uVar6 + 4);
  *(short *)(this + 0x1c) = (short)uVar9;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar9 = F_00e50570(uVar3 + 3);
  *(short *)(this + 0x1e) = (short)uVar9;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar9 = F_00e50570(uVar6 + 3);
  *(short *)(this + 0x20) = (short)uVar9;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar9 = F_00e50570(uVar3 + 3);
  *(short *)(this + 0x22) = (short)uVar9;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar9 = F_00e50570(uVar6 + 3);
  uVar3 = uVar3 + 1;
  *(short *)(this + 0x24) = (short)uVar9;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x28;
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar9 = F_00e50570(uVar7);
    *(int *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = (int)uVar9;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
  } while (iVar5 < 3);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x34;
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar9 = F_00e50570(uVar7);
    *(int *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = (int)uVar9;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
  } while (iVar5 < 3);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x40;
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar9 = F_00e50570(uVar7);
    *(int *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = (int)uVar9;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
  } while (iVar5 < 3);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x4c;
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar9 = F_00e50570(uVar7);
    *(short *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = (short)uVar9;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
  } while (iVar5 < 3);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x52;
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar9 = F_00e50570(uVar7);
    *(short *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = (short)uVar9;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
  } while (iVar5 < 3);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  pCVar8 = this + 0x58;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar9 = F_00e50570(uVar7);
    *(short *)pCVar8 = (short)uVar9;
    iVar5 = iVar5 + 1;
    pCVar8 = pCVar8 + 2;
    if (2 < iVar5) {
LAB_00e71e20: ;
      if (param_2 != ((uint *)GEN_TOP(0x0))) {
        uVar3 = F_00c51da0(uVar3 + 1,0x7d);
        *param_2 = uVar3;
      }
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00e71e20;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e71e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe71e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e71f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe71f70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int iVar3;
  undefined * pCVar4;
  undefined1 * puVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,3,0);
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar3 + 4],0);
    puVar5 = ((undefined1 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,3,0);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 8;
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x0)),0);
    puVar5 = ((undefined1 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x14),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,3,0);
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar3 + 0x18],0);
    puVar5 = ((undefined1 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x1c),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x1e),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x20),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x22),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,8,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x24),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,9,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,3,0);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x28;
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x0)),0);
    puVar5 = ((undefined1 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,10,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,3,0);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x34;
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x0)),0);
    puVar5 = ((undefined1 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,0xb,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,3,0);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x40;
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x0)),0);
    puVar5 = ((undefined1 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,0xc,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,3,0);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x4c;
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(*(undefined * PTR32 *)(gen_frame + 0x0)),0);
    puVar5 = ((undefined1 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,0xd,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,3,0);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x52;
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(*(undefined * PTR32 *)(gen_frame + 0x0)),0);
    puVar5 = ((undefined1 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,0xe,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,3,0);
  iVar3 = 0;
  pCVar4 = this + 0x58;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)pCVar4,0);
    puVar5 = ((undefined1 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    iVar3 = iVar3 + 1;
    pCVar4 = pCVar4 + 2;
  } while (iVar3 < 3);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e72460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe72460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e72480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe72480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e72593: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e72598;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e72593;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e72598: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e72720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe72720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pCVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    while (iVar3 < (int)uVar1) {
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar2);
      this[iVar3 + 4] = SUB81(uVar5,0);
      iVar3 = iVar3 + 1;
      if (2 < iVar3) {
        return 1;
      }
    }
    break;
  case 1: ;
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    pCVar4 = this + 8;
    iVar3 = 0;
    while (iVar3 < (int)uVar1) {
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar2);
      *(int *)pCVar4 = (int)uVar5;
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 4;
      if (2 < iVar3) {
        return 1;
      }
    }
    break;
  case 2: ;
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 0x14) = (int)uVar5;
    return 1;
  case 3: ;
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    while (iVar3 < (int)uVar1) {
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar2);
      this[iVar3 + 0x18] = SUB81(uVar5,0);
      iVar3 = iVar3 + 1;
      if (2 < iVar3) {
        return 1;
      }
    }
    break;
  case 4: ;
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(short *)(this + 0x1c) = (short)uVar5;
    return 1;
  case 5: ;
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(short *)(this + 0x1e) = (short)uVar5;
    return 1;
  case 6: ;
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(short *)(this + 0x20) = (short)uVar5;
    return 1;
  case 7: ;
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(short *)(this + 0x22) = (short)uVar5;
    return 1;
  case 8: ;
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(short *)(this + 0x24) = (short)uVar5;
    return 1;
  case 9: ;
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    pCVar4 = this + 0x28;
    while (iVar3 < (int)uVar1) {
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar2);
      *(int *)pCVar4 = (int)uVar5;
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 4;
      if (2 < iVar3) {
        return 1;
      }
    }
    break;
  case 10: ;
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    pCVar4 = this + 0x34;
    while (iVar3 < (int)uVar1) {
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar2);
      *(int *)pCVar4 = (int)uVar5;
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 4;
      if (2 < iVar3) {
        return 1;
      }
    }
    break;
  case 0xb: ;
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    pCVar4 = this + 0x40;
    while (iVar3 < (int)uVar1) {
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar2);
      *(int *)pCVar4 = (int)uVar5;
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 4;
      if (2 < iVar3) {
        return 1;
      }
    }
    break;
  case 0xc: ;
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    pCVar4 = this + 0x4c;
    while (iVar3 < (int)uVar1) {
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar2);
      *(short *)pCVar4 = (short)uVar5;
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 2;
      if (2 < iVar3) {
        return 1;
      }
    }
    break;
  case 0xd: ;
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    pCVar4 = this + 0x52;
    while (iVar3 < (int)uVar1) {
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar2);
      *(short *)pCVar4 = (short)uVar5;
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 2;
      if (2 < iVar3) {
        return 1;
      }
    }
    break;
  case 0xe: ;
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    pCVar4 = this + 0x58;
    do {
      if ((int)uVar1 <= iVar3) {
        return 1;
      }
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar2);
      *(short *)pCVar4 = (short)uVar5;
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 2;
    } while (iVar3 < 3);
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf18 */
GEN_LIB_GS GEN_FRAME byte F_00e72c30(GEN_P(int * in_ecx, unsigned int gen_a0), GEN_P(undefined4 in_ebx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe72c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 in_ebx = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  undefined2 * puVar7;
  ulonglong uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_3 + 1))),((char *)(gen_frame + 0x4)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x4)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_3 + 1))),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e4));
    iVar5 = uVar3 + 10;
    iVar6 = 0;
    do {
      uVar8 = F_00e50570(iVar5);
      *((char *)GEN_TOP(((int)in_ecx + iVar6 + 4))) = (char)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      iVar6 = iVar6 + 1;
      iVar5 = uVar3 + 2;
    } while (iVar6 < 3);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e4));
    iVar5 = uVar3 + 10;
    piVar2 = in_ecx + 2;
    (*(int *)(gen_frame + 0x0)) = 3;
    do {
      uVar8 = F_00e50570(iVar5);
      *piVar2 = (int)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      piVar2 = piVar2 + 1;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e0));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    in_ecx[5] = (int)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e4));
    iVar5 = uVar3 + 10;
    iVar6 = 0;
    do {
      uVar8 = F_00e50570(iVar5);
      *((char *)GEN_TOP(((int)in_ecx + iVar6 + 0x18))) = (char)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      iVar6 = iVar6 + 1;
      iVar5 = uVar3 + 2;
    } while (iVar6 < 3);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e0));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    *(short *)(in_ecx + 7) = (short)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e0));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    *((short *)GEN_TOP(((int)in_ecx + 0x1e))) = (short)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e0));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    *(short *)(in_ecx + 8) = (short)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e0));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    *((short *)GEN_TOP(((int)in_ecx + 0x22))) = (short)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e0));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    *(short *)(in_ecx + 9) = (short)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e4));
    iVar5 = uVar3 + 10;
    piVar2 = in_ecx + 10;
    (*(int *)(gen_frame + 0x0)) = 3;
    do {
      uVar8 = F_00e50570(iVar5);
      *piVar2 = (int)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      piVar2 = piVar2 + 1;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e4));
    iVar5 = uVar3 + 10;
    piVar2 = in_ecx + 0xd;
    (*(int *)(gen_frame + 0x0)) = 3;
    do {
      uVar8 = F_00e50570(iVar5);
      *piVar2 = (int)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      piVar2 = piVar2 + 1;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e4));
    iVar5 = uVar3 + 10;
    piVar2 = in_ecx + 0x10;
    (*(int *)(gen_frame + 0x0)) = 3;
    do {
      uVar8 = F_00e50570(iVar5);
      *piVar2 = (int)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      piVar2 = piVar2 + 1;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e4));
    iVar5 = uVar3 + 10;
    piVar2 = in_ecx + 0x13;
    (*(int *)(gen_frame + 0x0)) = 3;
    do {
      uVar8 = F_00e50570(iVar5);
      *(short *)piVar2 = (short)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      piVar2 = ((int *)GEN_TOP(((int)piVar2 + 2)));
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e4));
    iVar5 = uVar3 + 10;
    puVar7 = ((undefined2 *)GEN_TOP(((int)in_ecx + 0x52)));
    (*(int *)(gen_frame + 0x0)) = 3;
    do {
      uVar8 = F_00e50570(iVar5);
      *puVar7 = (short)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      puVar7 = puVar7 + 1;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b4e4));
    iVar5 = uVar3 + 10;
    piVar2 = in_ecx + 0x16;
    iVar6 = 3;
    do {
      uVar8 = F_00e50570(iVar5);
      *(short *)piVar2 = (short)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      piVar2 = ((int *)GEN_TOP(((int)piVar2 + 2)));
      iVar6 = iVar6 - 1;
      iVar5 = uVar3 + 2;
    } while (iVar6 != 0);
  }
  if (param_4 != ((int *)GEN_TOP(0x0))) {
    *param_4 = iVar5;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e732c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe732c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e733e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe733e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x22c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined * pCVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x224)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x228));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 3;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 4],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x204));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f;
    pCVar7 = (*(undefined * PTR32 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pCVar7,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 3;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this + 8;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x8)),0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x204));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f;
    pCVar7 = (*(undefined * PTR32 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pCVar7,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)(gen_frame + 0x8)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x14),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x204)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 3;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x18],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x204));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f;
    pCVar7 = (*(undefined * PTR32 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pCVar7,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x1c),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x204)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x1e),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x204)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x20),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x204)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,7);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x22),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x204)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,8,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,8);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,8);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,8);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x24),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x204)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,9,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,9);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,9);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,9);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 3;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x108)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x28;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x0)),0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x204));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x1f;
    pCVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x108)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pCVar7,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,10,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x108)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,10);
  F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,10);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,10);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 3;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15c)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x34;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x0)),0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x204));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x1f;
    pCVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15c)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pCVar7,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,0xb,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15c)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0xb);
  F_0042c880(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0xb);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0xb);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x108)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 3;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x40;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x0)),0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x204));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x1f;
    pCVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15c)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pCVar7,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,0xc,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15c)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0xc);
  F_0042c880(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0xc);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0xc);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x108)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 3;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x4c;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(*(undefined * PTR32 *)(gen_frame + 0x0)),0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x1f;
    puVar11 = ((undefined1 *)(gen_frame + 0x204));
    pCVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15c)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pCVar7,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,0xd,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15c)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0xd);
  F_0042c880(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0xd);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0xd);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x108)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 3;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x52;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(*(undefined * PTR32 *)(gen_frame + 0x0)),0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x1f;
    puVar11 = ((undefined1 *)(gen_frame + 0x204));
    pCVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15c)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pCVar7,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,0xe,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15c)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0xe);
  F_0042c880(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0xe);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0xe);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x108)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 3;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  iVar5 = 0;
  pCVar7 = this + 0x58;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x204)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)pCVar7,0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x204));
    iVar6 = iVar5 >> 0x1f;
    iVar8 = iVar5;
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15c)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar8,iVar6)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG);
    iVar5 = iVar5 + 1;
    pCVar7 = pCVar7 + 2;
  } while (iVar5 < 3);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e74f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe74f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e75052: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e75057;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e75052;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e75057: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
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
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e751b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe751b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e753b0(void)
{
  GEN_ENTER(0xe753b0u, 0u, 0u, 0u, 0u);
  return 0x77;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00e753c0(void)
{
  GEN_ENTER(0xe753c0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135b284);
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e753d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe753d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x11590b0) + param_1 * 4);
}

/* ref: FUN_00e753f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e753f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe753f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x11590d0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e75410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe75410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 8);
  return 0xffffffff;
}

/* ref: FUN_00e75450 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e75450(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe75450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x416;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e75460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe75460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x135b264))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e75480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe75480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1159050) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e754a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe754a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1159090) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e754c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe754c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3878) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e754e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe754e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1159070) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e75500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe75500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x1159090) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x1159090) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3878) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3878) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x1159070) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3878) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x1159050) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x1159070) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1159050) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e75580(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe75580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3878) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x1159070) + param_2 * 4) * *(int *)(&REFG(undefined, 0x1159050) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x1159050) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3878) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x1159070) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e75600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe75600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
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
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3878) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x1159070) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e75690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe75690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,3);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,4);
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,5);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,6);
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,7);
  return uVar8 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e75700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe75700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,5,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,6,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,7,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e757a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe757a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,5,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,6,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,7,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e75840 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e75840(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe75840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x1159474));
  *((undefined4 *)GEN_TOP(((int)in_ecx + 0x1e))) = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0x22))) = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  *(undefined8 *)(in_ecx + 1) = 0;
  *(undefined8 *)(in_ecx + 3) = 0;
  *(undefined8 *)(in_ecx + 5) = 0;
  *(undefined2 *)(in_ecx + 7) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e75880 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e75880(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe75880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e75890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe75890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135b2a0) + 0x10))))(&REFG(undefined * PTR32, 0x135b2a0),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e758c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e758c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe758c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135b2a0) + 0x10))))(&REFG(undefined * PTR32, 0x135b2a0),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e758f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe758f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 0x1e;
  case 2: ;
    return in_ecx + 0x1f;
  case 3: ;
    return in_ecx + 0x20;
  case 4: ;
    return in_ecx + 0x21;
  case 5: ;
    return in_ecx + 0x22;
  case 6: ;
    return in_ecx + 0x24;
  case 7: ;
    return in_ecx + 0x28;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e75960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe75960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if ((param_2 < *(uint *)(&REFG(undefined, 0x1159050) + param_1 * 4)) && (param_1 == 0)) {
    return (uint)(this + param_2 + 4);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e75990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe75990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pCVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    pCVar5 = this + 4;
    iVar6 = 0x1a;
    do {
      *pCVar5 = pCVar5[(int)param_1 - (int)this];
      pCVar5 = pCVar5 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
    this[0x1e] = *((undefined *)GEN_TOP(((int)param_1 + 0x1e)));
    this[0x1f] = *((undefined *)GEN_TOP(((int)param_1 + 0x1f)));
    this[0x20] = *(undefined *)(param_1 + 8);
    this[0x21] = *((undefined *)GEN_TOP(((int)param_1 + 0x21)));
    this[0x22] = *((undefined *)GEN_TOP(((int)param_1 + 0x22)));
    *(int *)(this + 0x24) = param_1[9];
    uVar4 = param_1[10];
    *(uint *)(this + 0x28) = uVar4;
    *(int *)(this + 0x2c) = param_1[0xb];
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e75a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe75a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined1 CVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined3 uVar7;
  undefined * pCVar6;
  int iVar8;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    uVar7 = (undefined3)(param_2 >> 8);
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      pCVar6 = this + 4;
      iVar8 = 0x1a;
      do {
        *pCVar6 = pCVar6[(int)param_1 - (int)this];
        pCVar6 = pCVar6 + 1;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
      return (uint)pCVar6;
    case 1: ;
      CVar1 = *((undefined *)GEN_TOP(((int)param_1 + 0x1e)));
      this[0x1e] = CVar1;
      return CONCAT31(uVar7,CVar1);
    case 2: ;
      this[0x1f] = *((undefined *)GEN_TOP(((int)param_1 + 0x1f)));
      return uVar5;
    case 3: ;
      this[0x20] = *(undefined *)(param_1 + 8);
      return uVar5;
    case 4: ;
      CVar1 = *((undefined *)GEN_TOP(((int)param_1 + 0x21)));
      this[0x21] = CVar1;
      return CONCAT31(uVar7,CVar1);
    case 5: ;
      this[0x22] = *((undefined *)GEN_TOP(((int)param_1 + 0x22)));
      return uVar5;
    case 6: ;
      *(int *)(this + 0x24) = param_1[9];
      return uVar5;
    case 7: ;
      uVar5 = param_1[10];
      *(uint *)(this + 0x28) = uVar5;
      *(int *)(this + 0x2c) = param_1[0xb];
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e75b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe75b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e75c33: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e75c38;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e75c33;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e75c38: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e75d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe75d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e8c050(param_2 GEN_EDX_FWD);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar4 = F_00e50570(uVar1);
      this[iVar3 + 4] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (0x19 < iVar3) {
        return 1;
      }
    }
    break;
  case 1: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x1e] = SUB81(uVar4,0);
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x1f] = SUB81(uVar4,0);
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x20] = SUB81(uVar4,0);
    return 1;
  case 4: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x21] = SUB81(uVar4,0);
    return 1;
  case 5: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x22] = SUB81(uVar4,0);
    return 1;
  case 6: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x24) = (int)uVar4;
    return 1;
  case 7: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    *(ulonglong *)(this + 0x28) = uVar4;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e75ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe75ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 4] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
    if (0x19 < iVar5) {
LAB_00e75f77: ;
      uVar6 = F_00c51da0(uVar3 + 4,0x22);
      uVar8 = F_00e50570(uVar3 + 4);
      this[0x1e] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(uVar6 + 3,0x22);
      uVar8 = F_00e50570(uVar6 + 3);
      this[0x1f] = SUB81(uVar8,0);
      uVar6 = F_00c51da0(uVar3 + 3,0x22);
      uVar8 = F_00e50570(uVar3 + 3);
      this[0x20] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(uVar6 + 3,0x22);
      uVar8 = F_00e50570(uVar6 + 3);
      this[0x21] = SUB81(uVar8,0);
      uVar6 = F_00c51da0(uVar3 + 3,0x22);
      uVar8 = F_00e50570(uVar3 + 3);
      this[0x22] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(uVar6 + 3,0x22);
      uVar8 = F_00e50570(uVar6 + 3);
      *(int *)(this + 0x24) = (int)uVar8;
      uVar6 = F_00c51da0(uVar3 + 3,0x22);
      uVar8 = F_00e50570(uVar3 + 3);
      *(ulonglong *)(this + 0x28) = uVar8;
      if (param_2 != ((uint *)GEN_TOP(0x0))) {
        uVar3 = F_00c51da0(uVar6,0x7d);
        *param_2 = uVar3;
      }
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00e75f77;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e76050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe76050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e76170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe76170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  undefined * this_00;
  int iVar2;
  undefined1 * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,0x1a,0);
  iVar2 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar2 + 4],0);
    puVar3 = ((undefined1 *)(gen_frame + 0x0));
    this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar2,iVar2 >> 0x1f)));
    F_00ea7fb0(this_00 GEN_EDX_ARG,puVar3);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1a);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1e],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1f],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x20],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x21],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x22],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x24),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e76360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe76360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e76380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe76380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e76493: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e76498;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e76493;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e76498: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e76620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe76620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar4 = F_00e505e0(uVar1);
      this[iVar3 + 4] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (0x19 < iVar3) {
        return 1;
      }
    }
    break;
  case 1: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x1e] = SUB81(uVar4,0);
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x1f] = SUB81(uVar4,0);
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x20] = SUB81(uVar4,0);
    return 1;
  case 4: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x21] = SUB81(uVar4,0);
    return 1;
  case 5: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x22] = SUB81(uVar4,0);
    return 1;
  case 6: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x24) = (int)uVar4;
    return 1;
  case 7: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    *(ulonglong *)(this + 0x28) = uVar4;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e76850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe76850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b534));
      iVar5 = uVar3 + 10;
      iVar6 = 0;
      do {
        uVar7 = F_00e50570(iVar5);
        this[iVar6 + 4] = SUB81(uVar7,0);
        uVar3 = F_00c51da0(iVar5,0x2c);
        iVar6 = iVar6 + 1;
        iVar5 = uVar3 + 2;
      } while (iVar6 < 0x1a);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b530));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x1e] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b530));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x1f] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b530));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x20] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b530));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x21] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b530));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x22] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b530));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(int *)(this + 0x24) = (int)uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b530));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(ulonglong *)(this + 0x28) = uVar7;
    }
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      *param_2 = iVar5;
    }
    return 1;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e76bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe76bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e76cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe76cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x80, 0, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x1a;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x0)) + 4],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 0x1a);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1e],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1f],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x20],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x21],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x22],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x24),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,7);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e77800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe77800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e77952: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e77957;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e77952;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e77957: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
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
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e77ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe77ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e77cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe77cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  if (param_2 == 0) {
    *puVar2 = *((uint *)GEN_TOP((param_1 + 4)));
    puVar2 = param_3 + 2;
  }
  else if (param_2 == 1) {
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 8)));
    return 5;
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e77d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe77d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar1 == uVar2) {
    puVar3 = param_2 + 1;
    if (param_1 == 0) {
      *((uint *)GEN_TOP((param_3 + 4))) = *puVar3;
      puVar3 = param_2 + 2;
    }
    else if (param_1 == 1) {
      *((char *)GEN_TOP((param_3 + 8))) = (char)*puVar3;
      return 5;
    }
  }
  return (int)puVar3 - (int)param_2;
}

