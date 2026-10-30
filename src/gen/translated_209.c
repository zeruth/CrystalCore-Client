#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Application::Network::WorkDefinitions::SyncMpParams::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_01032df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1032df0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncMpParams::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01032f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1032f10u, gen_a0, gen_a1, 0u, 0u);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 4),*(int *)(this + 4) >> 0x1f);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 8),*(int *)(this + 8) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncMpParams::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010331e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10331e0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_01033332: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_01033337;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_01033332;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_01033337: ;
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

/* ref: Application::Network::WorkDefinitions::SyncMpParams::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01033490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1033490u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01033660 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01033660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1033660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,2)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *puVar1;
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,3)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *puVar1;
  return 1;
}

/* ref: FUN_010336a0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_010336a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10336a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,2)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,3)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  return 1;
}

/* ref: FUN_010336e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_010336e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10336e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,2)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,3)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_01033750(void)
{
  GEN_ENTER(0x1033750u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_01033760(void)
{
  GEN_ENTER(0x1033760u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136c528);
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1033770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12b0e64) + param_1 * 4);
}

/* ref: FUN_01033790 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_01033790(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1033790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x12b0e70) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010337b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10337b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_010337f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_010337f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x10337f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1033800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x136c51c))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1033820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12b0e40) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1033840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12b0e58) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1033860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3e98) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1033880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12b0e4c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010338a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10338a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12b0e58) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12b0e58) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3e98) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3e98) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12b0e4c) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e98) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12b0e40) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12b0e4c) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0e40) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033920(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1033920u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e98) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x12b0e4c) + param_2 * 4) * *(int *)(&REFG(undefined, 0x12b0e40) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12b0e40) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e98) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12b0e4c) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010339a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x10339a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3e98) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12b0e4c) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01033a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1033a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  return uVar3 + uVar1 + uVar2;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x1033a60u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x1033a80u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1033aa0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1033af0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1033b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c564) + 0x10))))(&REFG(undefined * PTR32, 0x136c564),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_01033bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1033bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136c564) + 0x10))))(&REFG(undefined * PTR32, 0x136c564),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1033be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 == 0) {
    return in_ecx + 4;
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      return 0;
    }
    return in_ecx + 0x10;
  }
  return in_ecx + 8;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01033c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1033c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1033c20u, gen_a0, gen_a1, 0u, 0u);
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
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0x10) = param_1[4];
    *(int *)(this + 0x14) = param_1[5];
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01033c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1033c80u, gen_a0, gen_a1, gen_a2, 0u);
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
      *(int *)(this + 4) = param_1[1];
      uVar4 = 0;
    }
    else {
      if (param_2 == 1) {
        uVar4 = param_1[2];
        *(uint *)(this + 8) = uVar4;
        return uVar4;
      }
      uVar4 = param_2 - 2;
      if (uVar4 == 0) {
        *(int *)(this + 0x10) = param_1[4];
        *(int *)(this + 0x14) = param_1[5];
        return 0;
      }
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01033d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1033d00u, gen_a0, gen_a1, 0u, 0u);
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
LAB_01033e03: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01033e08;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_01033e03;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01033e08: ;
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01033ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1033ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  int iVar2;
  undefined * pSVar3;
  ulonglong uVar4;
  float fVar5;
  
  if (param_1 == 0) {
    uVar1 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar4 = F_00e505e0(uVar1);
    *(int *)(this + 4) = (int)uVar4;
    return 1;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return 0;
    }
    iVar2 = 0;
    pSVar3 = this + 0x10;
    do {
      uVar1 = F_00e9e450(param_2 GEN_EDX_ARG,iVar2,iVar2 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      fVar5 = F_00e50660(uVar1);
      *(float *)pSVar3 = fVar5;
      iVar2 = iVar2 + 1;
      pSVar3 = pSVar3 + 4;
    } while (iVar2 < 2);
    return 1;
  }
  uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
  uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
  uVar4 = F_00e505e0(uVar1);
  *(int *)(this + 8) = (int)uVar4;
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01033f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1033f70u, gen_a0, gen_a1, gen_a2, 0u);
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
  undefined * pSVar7;
  ulonglong uVar8;
  float fVar9;
  
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
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar8 = F_00e505e0(uVar3 + 2);
  *(int *)(this + 4) = (int)uVar8;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e505e0(uVar6 + 3);
  *(int *)(this + 8) = (int)uVar8;
  uVar3 = uVar3 + 1;
  pSVar7 = this + 0x10;
  (*(int *)(gen_frame + 0x0)) = 2;
  do {
    iVar5 = uVar3 + 3;
    uVar3 = F_00c51da0(iVar5,0x22);
    fVar9 = F_00e50660(iVar5);
    *(float *)pSVar7 = fVar9;
    pSVar7 = pSVar7 + 4;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
  } while ((*(int *)(gen_frame + 0x0)) != 0);
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar3 = F_00c51da0(uVar3 + 1,0x7d);
    *param_2 = uVar3;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_01034090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1034090u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010341b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10341b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  undefined * this_00;
  undefined1 * puVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 4),*(int *)(this + 4) >> 0x1f);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 8),*(int *)(this + 8) >> 0x1f);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x10))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x10)) >> 0x20));
  puVar2 = ((undefined1 *)(gen_frame + 0x0));
  this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,0,0)));
  F_00ea7fb0(this_00 GEN_EDX_ARG,puVar2);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  puVar2 = ((undefined1 *)(gen_frame + 0x0));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,1,0)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,puVar2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010342d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10342d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010342f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10342f0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_01034403: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01034408;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_01034403;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01034408: ;
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01034590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1034590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  int iVar2;
  undefined * pSVar3;
  ulonglong uVar4;
  float fVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (param_1 == 0) {
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar4 = F_00e505e0(uVar1);
    *(int *)(this + 4) = (int)uVar4;
  }
  else if (param_1 == 1) {
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar4 = F_00e505e0(uVar1);
    *(int *)(this + 8) = (int)uVar4;
  }
  else {
    if (param_1 != 2) {
      return 0;
    }
    iVar2 = 0;
    pSVar3 = this + 0x10;
    do {
      uVar1 = F_00e9e450(this_00 GEN_EDX_ARG,iVar2,iVar2 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      fVar5 = F_00e50660(uVar1);
      *(float *)pSVar3 = fVar5;
      iVar2 = iVar2 + 1;
      pSVar3 = pSVar3 + 4;
    } while (iVar2 < 2);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01034670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1034670u, gen_a0, gen_a1, gen_a2, 0u);
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
  undefined * pSVar7;
  ulonglong uVar8;
  float fVar9;
  
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
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136ce24));
      iVar5 = uVar3 + 9;
      uVar8 = F_00e505e0(iVar5);
      *(int *)(this + 4) = (int)uVar8;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136ce24));
      iVar5 = uVar3 + 9;
      uVar8 = F_00e505e0(iVar5);
      *(int *)(this + 8) = (int)uVar8;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136ce20));
      iVar5 = uVar3 + 10;
      pSVar7 = this + 0x10;
      iVar6 = 2;
      do {
        fVar9 = F_00e50660(iVar5);
        *(float *)pSVar7 = fVar9;
        uVar3 = F_00c51da0(iVar5,0x2c);
        pSVar7 = pSVar7 + 4;
        iVar6 = iVar6 - 1;
        iVar5 = uVar3 + 2;
      } while (iVar6 != 0);
    }
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      *param_2 = iVar5;
    }
    return 1;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_01034830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1034830u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01034950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1034950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined * pSVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 4),*(int *)(this + 4) >> 0x1f);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 8),*(int *)(this + 8) >> 0x1f);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x12b05a0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 2;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  iVar6 = 0;
  pSVar7 = this + 0x10;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)pSVar7),
               (int)((ulonglong)gen_d2bits((double)*(float *)pSVar7) >> 0x20));
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x54));
    iVar5 = iVar6 >> 0x1f;
    iVar8 = iVar6;
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar8,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    iVar6 = iVar6 + 1;
    pSVar7 = pSVar7 + 4;
  } while (iVar6 < 2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01034de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1034de0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_01034f32: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_01034f37;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_01034f32;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_01034f37: ;
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01035090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035090u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01035260 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01035260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1035260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *puVar1;
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,5)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *puVar1;
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,6)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = puVar1[1];
  return 1;
}

/* ref: FUN_010352b0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_010352b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10352b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,4)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,5)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,6)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  return 1;
}

/* ref: FUN_01035300 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01035300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,4)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,5)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,6)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1035370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  if (param_2 == 0) {
    *(undefined1 *)puVar2 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0x58;
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 7)));
    iVar3 = 0;
    do {
      *puVar2 = *((uint *)GEN_TOP((param_1 + 4 + iVar3 * 4)));
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < 0x58);
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010353c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x10353c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    uVar1 = F_00e68050(param_1 + 4,(undefined1)param_3,param_4,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x1035410u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    uVar1 = F_00e68160(param_1 + 4,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: FUN_01035480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b19cc));
  F_0101dc90(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010354a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10354a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010354c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10354c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010354e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10354e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1035500u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 4)));
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 5)));
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1035530u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if ((uVar1 == uVar2) && (puVar3 = param_2 + 1, param_1 == 0)) {
    *((char *)GEN_TOP((param_3 + 4))) = (char)*puVar3;
    puVar3 = ((uint *)GEN_TOP(((int)param_2 + 5)));
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01035570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b0edc));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *((char *)GEN_TOP(((int)this + 4))) = (char)param_1[1];
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010355d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10355d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010355f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10355f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035610u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1035630u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 4)));
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 5)));
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1035660u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if ((uVar1 == uVar2) && (puVar3 = param_2 + 1, param_1 == 0)) {
    *((char *)GEN_TOP((param_3 + 4))) = (char)*puVar3;
    puVar3 = ((uint *)GEN_TOP(((int)param_2 + 5)));
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_010356a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010356a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10356a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b0fa4));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *((char *)GEN_TOP(((int)this + 4))) = (char)param_1[1];
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035700u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035720u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035740u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01035760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b106c));
  this_00 = ((undefined *)GEN_TOP(((int)this + 4)));
  iVar1 = 4;
  do {
    F_00ffbee0(this_00 GEN_EDX_FWD);
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x18)));
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_01022240(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010357a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10357a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010357c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10357c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010357e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10357e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1035800u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  if (param_2 == 0) {
    *(undefined1 *)puVar2 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0xa0;
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 7)));
    iVar3 = 0;
    do {
      *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((iVar3 + 4 + param_1)));
      iVar3 = iVar3 + 1;
      puVar2 = ((uint *)GEN_TOP(((int)puVar2 + 1)));
    } while (iVar3 < 0xa0);
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x1035850u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010358a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x10358a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010358f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x10358f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if ((uVar2 == uVar1) && (puVar3 = param_2 + 1, param_1 == 0)) {
    uVar2 = F_00e68510(puVar3,param_3 + 4,0xa0);
    puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar2)));
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01035940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b1134));
  F_01023950(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035960u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035980u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010359a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10359a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010359c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x10359c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  if (param_2 == 0) {
    *(undefined1 *)puVar2 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0x28;
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 7)));
    iVar3 = 0;
    do {
      *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((iVar3 + 4 + param_1)));
      iVar3 = iVar3 + 1;
      puVar2 = ((uint *)GEN_TOP(((int)puVar2 + 1)));
    } while (iVar3 < 0x28);
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x1035a10u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x1035a60u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1035ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if ((uVar2 == uVar1) && (puVar3 = param_2 + 1, param_1 == 0)) {
    uVar2 = F_00e68510(puVar3,param_3 + 4,0x28);
    puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar2)));
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01035b00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[27])REFP(0x12b11fc));
  F_01025110(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035b20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035b40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035b60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1035b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  if (param_2 == 0) {
    *(undefined1 *)puVar2 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0x3c;
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 7)));
    iVar3 = 0;
    do {
      *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((iVar3 + 4 + param_1)));
      iVar3 = iVar3 + 1;
      puVar2 = ((uint *)GEN_TOP(((int)puVar2 + 1)));
    } while (iVar3 < 0x3c);
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x1035bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x1035c20u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1035c70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if ((uVar2 == uVar1) && (puVar3 = param_2 + 1, param_1 == 0)) {
    uVar2 = F_00e68510(puVar3,param_3 + 4,0x3c);
    puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar2)));
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01035cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b12c4));
  F_010268c0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035ce0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035d00u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035d20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1035d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  if (param_2 == 0) {
    *(undefined1 *)puVar2 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0x50;
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 7)));
    iVar3 = 0;
    do {
      *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((iVar3 + 4 + param_1)));
      iVar3 = iVar3 + 1;
      puVar2 = ((uint *)GEN_TOP(((int)puVar2 + 1)));
    } while (iVar3 < 0x50);
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x1035d90u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x1035de0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1035e30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if ((uVar2 == uVar1) && (puVar3 = param_2 + 1, param_1 == 0)) {
    uVar2 = F_00e68510(puVar3,param_3 + 4,0x50);
    puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar2)));
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01035e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b138c))
  ;
  F_01028070(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035ea0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035ec0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1035ee0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1035f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  if (param_2 == 0) {
    *(undefined1 *)puVar2 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0xfa;
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 7)));
    iVar3 = 0;
    do {
      *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((iVar3 + 4 + param_1)));
      iVar3 = iVar3 + 1;
      puVar2 = ((uint *)GEN_TOP(((int)puVar2 + 1)));
    } while (iVar3 < 0xfa);
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x1035f50u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x1035fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01035ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1035ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if ((uVar2 == uVar1) && (puVar3 = param_2 + 1, param_1 == 0)) {
    uVar2 = F_00e68510(puVar3,param_3 + 4,0xfa);
    puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar2)));
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01036040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b1454));
  F_01029820(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036060u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036080u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010360a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10360a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncJournalConfig_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010360c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x10360c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 4)));
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 5)));
  }
  else if (param_2 == 1) {
    *(undefined2 *)puVar2 = *((undefined2 *)GEN_TOP((param_1 + 6)));
    return 6;
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncJournalConfig_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1036110u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *((char *)GEN_TOP((param_3 + 4))) = (char)*puVar3;
      puVar3 = ((uint *)GEN_TOP(((int)param_2 + 5)));
    }
    else if (param_1 == 1) {
      *((short *)GEN_TOP((param_3 + 6))) = (short)*puVar3;
      return 6;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01036170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b151c));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *((char *)GEN_TOP(((int)this + 4))) = (char)param_1[1];
    *((undefined2 *)GEN_TOP(((int)this + 6))) = *((undefined2 *)GEN_TOP(((int)param_1 + 6)));
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncJournalConfig::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010361d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10361d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncJournalConfig::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010361f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10361f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncJournalConfig::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036210u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncLeveProperty_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1036230u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 4)));
    return 5;
  case 1: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 8)));
    return 8;
  case 2: ;
    *(undefined2 *)puVar2 = *((undefined2 *)GEN_TOP((param_1 + 0xc)));
    return 6;
  case 3: ;
    *(undefined2 *)puVar2 = *((undefined2 *)GEN_TOP((param_1 + 0xe)));
    return 6;
  case 4: ;
    *(undefined2 *)puVar2 = *((undefined2 *)GEN_TOP((param_1 + 0x10)));
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 6)));
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncLeveProperty_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010362d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x10362d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *((char *)GEN_TOP((param_3 + 4))) = (char)*puVar3;
      return 5;
    case 1: ;
      *((uint *)GEN_TOP((param_3 + 8))) = *puVar3;
      return 8;
    case 2: ;
      *((short *)GEN_TOP((param_3 + 0xc))) = (short)*puVar3;
      return 6;
    case 3: ;
      *((short *)GEN_TOP((param_3 + 0xe))) = (short)*puVar3;
      return 6;
    case 4: ;
      *((short *)GEN_TOP((param_3 + 0x10))) = (short)*puVar3;
      puVar3 = ((uint *)GEN_TOP(((int)param_2 + 6)));
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01036390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b15e4));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *((char *)GEN_TOP(((int)this + 4))) = (char)param_1[1];
    *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
    *((short *)GEN_TOP(((int)this + 0xc))) = (short)param_1[3];
    *((undefined2 *)GEN_TOP(((int)this + 0xe))) = *((undefined2 *)GEN_TOP(((int)param_1 + 0xe)));
    *((short *)GEN_TOP(((int)this + 0x10))) = (short)param_1[4];
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncLeveProperty::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036400u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncLeveProperty::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036420u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncLeveProperty::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036440u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1036460u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 4)));
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 5)));
  }
  else if (param_2 == 1) {
    *(undefined1 *)puVar2 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 3;
    *((undefined1 *)GEN_TOP(((int)param_3 + 7))) = *((undefined1 *)GEN_TOP((param_1 + 5)));
    *(undefined1 *)(param_3 + 2) = *((undefined1 *)GEN_TOP((param_1 + 6)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 9))) = *((undefined1 *)GEN_TOP((param_1 + 7)));
    return 10;
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010364d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x10364d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (param_2 == 1) {
    uVar1 = F_00e68370(param_1 + 5,(undefined1)param_3,param_4,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x1036520u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (param_2 == 1) {
    uVar1 = F_00e68470(param_1 + 5,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1036570u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *((char *)GEN_TOP((param_3 + 4))) = (char)*puVar3;
      puVar3 = ((uint *)GEN_TOP(((int)param_2 + 5)));
    }
    else if (param_1 == 1) {
      uVar2 = F_00e68510(puVar3,param_3 + 5,3);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_010365d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010365d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10365d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b16ac));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *((char *)GEN_TOP(((int)this + 4))) = (char)param_1[1];
    *((undefined1 *)GEN_TOP(((int)this + 5))) = *((undefined1 *)GEN_TOP(((int)param_1 + 5)));
    *((undefined1 *)GEN_TOP(((int)this + 6))) = *((undefined1 *)GEN_TOP(((int)param_1 + 6)));
    *((undefined1 *)GEN_TOP(((int)this + 7))) = *((undefined1 *)GEN_TOP(((int)param_1 + 7)));
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036640u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036660u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036680u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncHpParams_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010366a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x10366a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *(undefined1 *)puVar2 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 4;
    *((undefined4 *)GEN_TOP(((int)param_3 + 7))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
    *((undefined4 *)GEN_TOP(((int)param_3 + 0xb))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((undefined4 *)GEN_TOP(((int)param_3 + 0xf))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    *((undefined4 *)GEN_TOP(((int)param_3 + 0x13))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    return 0x17;
  case 1: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x14)));
    return 8;
  case 2: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x18)));
    return 8;
  case 3: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x1c)));
    puVar2 = param_3 + 2;
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncHpParams_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x1036740u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    uVar1 = F_00e68050(param_1 + 4,(undefined1)param_3,param_4,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::SyncHpParams_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x1036790u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    uVar1 = F_00e68160(param_1 + 4,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: FUN_010367e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010367e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10367e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b1774));
  F_010303b0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncHpParams::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036800u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncHpParams::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036820u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncHpParams::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036840u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncMpParams_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1036860u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *puVar2 = *((uint *)GEN_TOP((param_1 + 8)));
    return 8;
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncMpParams_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010368b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x10368b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *((uint *)GEN_TOP((param_3 + 8))) = *puVar3;
      return 8;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01036910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b183c));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *((int *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncMpParams::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036970u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncMpParams::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036990u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncMpParams::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010369b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10369b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010369d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x10369d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  else {
    if (param_2 == 1) {
      *puVar2 = *((uint *)GEN_TOP((param_1 + 8)));
      return 8;
    }
    if (param_2 == 2) {
      uVar1 = *((uint *)GEN_TOP((param_1 + 0x14)));
      *puVar2 = *((uint *)GEN_TOP((param_1 + 0x10)));
      param_3[2] = uVar1;
      return 0xc;
    }
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1036a50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    else {
      if (param_1 == 1) {
        *((uint *)GEN_TOP((param_3 + 8))) = *puVar3;
        return 8;
      }
      if (param_1 == 2) {
        *((uint *)GEN_TOP((param_3 + 0x10))) = *puVar3;
        *((uint *)GEN_TOP((param_3 + 0x14))) = param_2[2];
        return 0xc;
      }
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01036ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b1904));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *((int *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
    *((int *)GEN_TOP(((int)this + 0x10))) = param_1[4];
    *((int *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036b40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036b60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036b80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1036ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if ((uVar2 == uVar1) && (puVar3 = param_2 + 1, param_1 == 0)) {
    uVar2 = F_00e68dc0(puVar3,param_3 + 4,0x58);
    puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar2)));
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: Application::Network::WorkDefinitions::SyncHpParams_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01036bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1036bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      uVar2 = F_00e68dc0(puVar3,param_3 + 4,4);
      return (int)puVar3 + (uVar2 - (int)param_2);
    case 1: ;
      *((uint *)GEN_TOP((param_3 + 0x14))) = *puVar3;
      return 8;
    case 2: ;
      *((uint *)GEN_TOP((param_3 + 0x18))) = *puVar3;
      return 8;
    case 3: ;
      *((uint *)GEN_TOP((param_3 + 0x1c))) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01036c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1036c90u, gen_a0, gen_a1, 0u, 0u);
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
  if (uVar4 != 0) {
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
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
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
              if (pcVar5 == pcVar11) goto LAB_01037133;
              do {
                if (*pcVar5 == '{') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                pcVar5 = pcVar5 + 1;
              } while (pcVar5 != pcVar11);
            }
            else {
              if (cVar1 != '[') goto LAB_01036ed3;
              cVar1 = pcVar5[1];
              (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
              iVar6 = 1;
              if (cVar1 == '\"') {
LAB_01036e9b: ;
                (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
              }
              else if (cVar1 == '[') {
                iVar6 = 2;
                goto LAB_01036e9b;
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
            if (iVar6 == 1) goto LAB_01037133;
          }
LAB_01036ed3: ;
          pcVar5 = pcVar5 + 1;
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x14)));
      }
      pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
      if ((int)pcVar9 <= (int)uVar4) {
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
LAB_01037057: ;
                    
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
                if (0x3ffffffe < uVar10) goto LAB_01037057;
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
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                return 0;
              }
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
              return 0;
            }
          }
          pcVar9 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
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
        if (pcVar5 == ((char *)GEN_TOP(0x0))) {
LAB_01037186: ;
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0(ppcVar14);
          }
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
          }
          return 1;
        }
        pcVar11 = ((char *)GEN_TOP(0x0));
        if (pcVar9 != ((char *)GEN_TOP(0x0))) {
          do {
            if (pcVar5 == ppcVar14[(int)pcVar11]) break;
            pcVar11 = pcVar11 + 1;
          } while (pcVar11 < pcVar9);
        }
        if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x14))) {
          pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11];
          (*(char * PTR32 *)(gen_frame + 0x14)) = ((char *)GEN_TOP(0x58));
          do {
            this = this + 4;
            uVar15 = F_00e505e0(pcVar9);
            *(int *)this = (int)uVar15;
            uVar4 = F_00c51da0(pcVar9,0x2c);
            pcVar5 = (*(char * PTR32 *)(gen_frame + 0x14)) - 1;
            (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
            pcVar9 = ((char *)GEN_TOP((uVar4 + 2)));
          } while (pcVar5 != ((char *)GEN_TOP(0x0)));
          goto LAB_01037186;
        }
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar14);
        }
      }
LAB_01037133: ;
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010371c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10371c0u, gen_a0, gen_a1, 0u, 0u);
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
  if (uVar4 != 0) {
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
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
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
              if (pcVar5 == pcVar11) goto LAB_01037665;
              do {
                if (*pcVar5 == '{') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                pcVar5 = pcVar5 + 1;
              } while (pcVar5 != pcVar11);
            }
            else {
              if (cVar1 != '[') goto LAB_01037403;
              cVar1 = pcVar5[1];
              (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
              iVar6 = 1;
              if (cVar1 == '\"') {
LAB_010373cb: ;
                (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
              }
              else if (cVar1 == '[') {
                iVar6 = 2;
                goto LAB_010373cb;
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
            if (iVar6 == 1) goto LAB_01037665;
          }
LAB_01037403: ;
          pcVar5 = pcVar5 + 1;
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x14)));
      }
      pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
      if ((int)pcVar9 <= (int)uVar4) {
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
LAB_01037587: ;
                    
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
                if (0x3ffffffe < uVar10) goto LAB_01037587;
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
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                return 0;
              }
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
              return 0;
            }
          }
          pcVar9 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
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
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        if (pcVar5 == ((char *)GEN_TOP(0x0))) {
LAB_0103769e: ;
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0(ppcVar14);
          }
          if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0(ppcVar13);
          }
          return 1;
        }
        pcVar11 = ((char *)GEN_TOP(0x0));
        if (pcVar9 != ((char *)GEN_TOP(0x0))) {
          do {
            if (pcVar5 == ppcVar14[(int)pcVar11]) break;
            pcVar11 = pcVar11 + 1;
          } while (pcVar11 < pcVar9);
        }
        if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x14))) {
          uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
          this[4] = SUB81(uVar15,0);
          goto LAB_0103769e;
        }
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar14);
        }
      }
LAB_01037665: ;
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010376d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10376d0u, gen_a0, gen_a1, 0u, 0u);
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
  if (uVar4 != 0) {
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
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
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
              if (pcVar5 == pcVar11) goto LAB_01037b75;
              do {
                if (*pcVar5 == '{') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                pcVar5 = pcVar5 + 1;
              } while (pcVar5 != pcVar11);
            }
            else {
              if (cVar1 != '[') goto LAB_01037913;
              cVar1 = pcVar5[1];
              (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
              iVar6 = 1;
              if (cVar1 == '\"') {
LAB_010378db: ;
                (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
              }
              else if (cVar1 == '[') {
                iVar6 = 2;
                goto LAB_010378db;
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
            if (iVar6 == 1) goto LAB_01037b75;
          }
LAB_01037913: ;
          pcVar5 = pcVar5 + 1;
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x14)));
      }
      pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
      if ((int)pcVar9 <= (int)uVar4) {
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
LAB_01037a97: ;
                    
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
                if (0x3ffffffe < uVar10) goto LAB_01037a97;
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
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                return 0;
              }
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
              return 0;
            }
          }
          pcVar9 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
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
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        if (pcVar5 == ((char *)GEN_TOP(0x0))) {
LAB_01037bae: ;
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0(ppcVar14);
          }
          if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0(ppcVar13);
          }
          return 1;
        }
        pcVar11 = ((char *)GEN_TOP(0x0));
        if (pcVar9 != ((char *)GEN_TOP(0x0))) {
          do {
            if (pcVar5 == ppcVar14[(int)pcVar11]) break;
            pcVar11 = pcVar11 + 1;
          } while (pcVar11 < pcVar9);
        }
        if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x14))) {
          uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
          this[4] = SUB81(uVar15,0);
          goto LAB_01037bae;
        }
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar14);
        }
      }
LAB_01037b75: ;
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01037be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1037be0u, gen_a0, gen_a1, 0u, 0u);
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
  undefined * pSVar13;
  char * PTR32 * ppcVar14;
  char * PTR32 * ppcVar15;
  
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
  if (uVar4 != 0) {
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
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
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
      ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
      if (pcVar5 != pcVar9) {
        do {
          cVar1 = *pcVar5;
          if (cVar1 == '\"') {
            pcVar5 = pcVar5 + 1;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
            if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar15) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
              iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
              if (ppcVar15 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
                ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
              }
              if (ppcVar15 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[iVar6 >> 2];
              }
            }
            else {
              if (ppcVar15 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
                ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
              }
              if (ppcVar15 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar15 = pcVar5;
              }
            }
            ppcVar15 = ppcVar15 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppcVar15;
            pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
            pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
          }
          else {
            if (cVar1 == '{') {
              (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
              pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
              iVar6 = 1;
              if (pcVar5 == pcVar11) goto LAB_0103811c;
              do {
                if (*pcVar5 == '{') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                pcVar5 = pcVar5 + 1;
              } while (pcVar5 != pcVar11);
            }
            else {
              if (cVar1 != '[') goto LAB_01037e23;
              cVar1 = pcVar5[1];
              (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
              iVar6 = 1;
              if (cVar1 == '\"') {
LAB_01037deb: ;
                (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
              }
              else if (cVar1 == '[') {
                iVar6 = 2;
                goto LAB_01037deb;
              }
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
              for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
                if (*pcVar5 == '[') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
              }
            }
            ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
            if (iVar6 == 1) goto LAB_0103811c;
          }
LAB_01037e23: ;
          pcVar5 = pcVar5 + 1;
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x14)));
      }
      pcVar9 = ((char *)GEN_TOP(((int)ppcVar15 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
      if ((int)uVar4 < (int)pcVar9) {
LAB_0103811c: ;
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
        }
      }
      else {
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
        F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
        cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
        (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x10));
        ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
        ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
        pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
        while ((*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9, cVar1 != ']') {
          if (*pcVar9 == '\"') {
            if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar14) && (ppcVar15 <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
              iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)ppcVar15;
              if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                uVar10 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar15) >> 2;
                if (0x3ffffffe < uVar10) {
LAB_01037fa7: ;
                    
                  F_00c4579a(((char *)REFP(0x108497c)));
                }
                uVar10 = uVar10 + 1;
                uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar15) >> 2;
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
                  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                }
              }
              if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar14 = ppcVar15[iVar6 >> 2];
              }
            }
            else {
              if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                uVar10 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar15) >> 2;
                if (0x3ffffffe < uVar10) goto LAB_01037fa7;
                uVar10 = uVar10 + 1;
                uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar15) >> 2;
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
                  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                }
              }
              if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar14 = pcVar9;
              }
            }
            ppcVar14 = ppcVar14 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar14;
            pcVar9 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x28)) + 1,0x22)));
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
            if (pcVar9 == ((char *)GEN_TOP(0x0))) {
              if (ppcVar15 != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0(ppcVar15);
              }
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                return 0;
              }
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
              return 0;
            }
          }
          pcVar9 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
          cVar1 = *pcVar9;
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
        }
        pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)ppcVar15) >> 2)));
        if ((int)uVar4 < (int)pcVar9) {
          if (ppcVar15 != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0(ppcVar15);
          }
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
            return 0;
          }
        }
        else {
          if ((*(char * PTR32 *)(gen_frame + 0x14)) == pcVar9) {
            pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
            piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
            F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
            pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
            if (pcVar5 != ((char *)GEN_TOP(0x0))) {
              pcVar11 = ((char *)GEN_TOP(0x0));
              if (pcVar9 != ((char *)GEN_TOP(0x0))) {
                do {
                  if (pcVar5 == ppcVar15[(int)pcVar11]) break;
                  pcVar11 = pcVar11 + 1;
                } while (pcVar11 < pcVar9);
              }
              if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) {
                if (ppcVar15 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  F_00406ad0(ppcVar15);
                }
                if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                  return 0;
                }
                F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
                return 0;
              }
              iVar6 = 0;
              (*(char * PTR32 *)(gen_frame + 0x14)) = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11];
              pSVar13 = this + 4;
              do {
                uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pSVar13 + 0x50))))(pSVar13 GEN_EDX_ARG,(*(char * PTR32 *)(gen_frame + 0x14)));
                if ((char)uVar4 == '\0') {
                  if (ppcVar15 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar15);
                  }
                  goto LAB_0103811c;
                }
                iVar6 = iVar6 + 1;
                pSVar13 = pSVar13 + 0x18;
              } while (iVar6 < 5);
            }
            if (ppcVar15 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar15);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
            }
            return 1;
          }
          if (ppcVar15 != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0(ppcVar15);
          }
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01038140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1038140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
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
  char * pcVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  uint uVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  pcVar8 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x28)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x28));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x28)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x28)) + 1))));
  if (iVar6 == 0) {
    pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)))));
    (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
    if (pcVar5 != ((char *)GEN_TOP(0x0))) {
      (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 0xb;
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
        (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar8 + 0xc;
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
        F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
        ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        while ((*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5, pcVar5 != pcVar8) {
          cVar1 = *pcVar5;
          if (cVar1 == '\"') {
            pcVar5 = pcVar5 + 1;
            (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
            if ((&(*(char * PTR32 *)(gen_frame + 0x24)) < ppcVar12) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) <= &(*(char * PTR32 *)(gen_frame + 0x24)))) {
              iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x24)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
              if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
                ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[iVar6 >> 2];
              }
            }
            else {
              if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
                ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar12 = pcVar5;
              }
            }
            ppcVar12 = ppcVar12 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ppcVar12;
            pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
            pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
          }
          else {
            if (cVar1 == '{') {
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x24)));
              pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
              iVar6 = 1;
              if (pcVar5 == pcVar11) goto LAB_01038507;
              do {
                if (*pcVar5 == '{') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                pcVar5 = pcVar5 + 1;
              } while (pcVar5 != pcVar11);
            }
            else {
              if (cVar1 != '[') goto LAB_01038373;
              cVar1 = pcVar5[1];
              (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 1;
              iVar6 = 1;
              if (cVar1 == '\"') {
LAB_0103833b: ;
                (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 2;
              }
              else if (cVar1 == '[') {
                iVar6 = 2;
                goto LAB_0103833b;
              }
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x24)));
              for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
                if (*pcVar5 == '[') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
              }
            }
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
            if (iVar6 == 1) goto LAB_01038507;
          }
LAB_01038373: ;
          pcVar5 = pcVar5 + 1;
          (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
        }
        uVar14 = (int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) >> 2;
        if ((int)uVar4 < (int)uVar14) {
LAB_01038507: ;
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
          }
        }
        else {
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
          F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
          cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
          (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x10));
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          while (cVar1 != ']') {
            if (*(*(char * PTR32 *)(gen_frame + 0x24)) == '\"') {
              if ((&(*(char * PTR32 *)(gen_frame + 0x24)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x24)))) {
                iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x24)) - (int)ppcVar12;
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                  uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar9) {
LAB_010384ed: ;
                    
                    F_00c4579a(((char *)REFP(0x108497c)));
                  }
                  uVar9 = uVar9 + 1;
                  uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
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
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = ppcVar12[iVar6 >> 2];
                }
              }
              else {
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                  uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar9) goto LAB_010384ed;
                  uVar9 = uVar9 + 1;
                  uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
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
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = (*(char * PTR32 *)(gen_frame + 0x24));
                }
              }
              ppcVar13 = ppcVar13 + 1;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
              pcVar8 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x24)) + 1,0x22)));
              (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar8;
              if (pcVar8 == ((char *)GEN_TOP(0x0))) {
                if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  F_00406ad0(ppcVar12);
                }
                goto LAB_01038507;
              }
            }
            (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
            cVar1 = *(*(char * PTR32 *)(gen_frame + 0x24));
          }
          uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if ((int)uVar4 < (int)uVar9) {
            if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              return 0;
            }
          }
          else {
            if (uVar14 == uVar9) {
              pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
              piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
              F_00c472af(((char *)(gen_frame + 0x28)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
              pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x28)))));
              if (pcVar8 != ((char *)GEN_TOP(0x0))) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  do {
                    if (pcVar8 == ppcVar12[uVar4]) break;
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < uVar9);
                }
                if (uVar14 <= uVar4) {
                  if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                    return 0;
                  }
                  F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
                  return 0;
                }
                pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[uVar4];
                iVar6 = 0;
                do {
                  uVar15 = F_00e50570(pcVar8);
                  this[iVar6 + 4] = SUB81(uVar15,0);
                  uVar4 = F_00c51da0(pcVar8,0x2c);
                  iVar6 = iVar6 + 1;
                  pcVar8 = ((char *)GEN_TOP((uVar4 + 2)));
                } while (iVar6 < 0xa0);
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0(ppcVar12);
              }
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              }
              return 1;
            }
            if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01038650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1038650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
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
  char * pcVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  uint uVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  pcVar8 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x28)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x28));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x28)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x28)) + 1))));
  if (iVar6 == 0) {
    pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)))));
    (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
    if (pcVar5 != ((char *)GEN_TOP(0x0))) {
      (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 0xb;
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
        (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar8 + 0xc;
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
        F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
        ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        while ((*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5, pcVar5 != pcVar8) {
          cVar1 = *pcVar5;
          if (cVar1 == '\"') {
            pcVar5 = pcVar5 + 1;
            (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
            if ((&(*(char * PTR32 *)(gen_frame + 0x24)) < ppcVar12) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) <= &(*(char * PTR32 *)(gen_frame + 0x24)))) {
              iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x24)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
              if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
                ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[iVar6 >> 2];
              }
            }
            else {
              if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
                ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar12 = pcVar5;
              }
            }
            ppcVar12 = ppcVar12 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ppcVar12;
            pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
            pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
          }
          else {
            if (cVar1 == '{') {
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x24)));
              pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
              iVar6 = 1;
              if (pcVar5 == pcVar11) goto LAB_01038a17;
              do {
                if (*pcVar5 == '{') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                pcVar5 = pcVar5 + 1;
              } while (pcVar5 != pcVar11);
            }
            else {
              if (cVar1 != '[') goto LAB_01038883;
              cVar1 = pcVar5[1];
              (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 1;
              iVar6 = 1;
              if (cVar1 == '\"') {
LAB_0103884b: ;
                (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 2;
              }
              else if (cVar1 == '[') {
                iVar6 = 2;
                goto LAB_0103884b;
              }
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x24)));
              for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
                if (*pcVar5 == '[') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
              }
            }
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
            if (iVar6 == 1) goto LAB_01038a17;
          }
LAB_01038883: ;
          pcVar5 = pcVar5 + 1;
          (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
        }
        uVar14 = (int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) >> 2;
        if ((int)uVar4 < (int)uVar14) {
LAB_01038a17: ;
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
          }
        }
        else {
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
          F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
          cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
          (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x10));
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          while (cVar1 != ']') {
            if (*(*(char * PTR32 *)(gen_frame + 0x24)) == '\"') {
              if ((&(*(char * PTR32 *)(gen_frame + 0x24)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x24)))) {
                iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x24)) - (int)ppcVar12;
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                  uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar9) {
LAB_010389fd: ;
                    
                    F_00c4579a(((char *)REFP(0x108497c)));
                  }
                  uVar9 = uVar9 + 1;
                  uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
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
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = ppcVar12[iVar6 >> 2];
                }
              }
              else {
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                  uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar9) goto LAB_010389fd;
                  uVar9 = uVar9 + 1;
                  uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
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
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = (*(char * PTR32 *)(gen_frame + 0x24));
                }
              }
              ppcVar13 = ppcVar13 + 1;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
              pcVar8 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x24)) + 1,0x22)));
              (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar8;
              if (pcVar8 == ((char *)GEN_TOP(0x0))) {
                if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  F_00406ad0(ppcVar12);
                }
                goto LAB_01038a17;
              }
            }
            (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
            cVar1 = *(*(char * PTR32 *)(gen_frame + 0x24));
          }
          uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if ((int)uVar4 < (int)uVar9) {
            if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              return 0;
            }
          }
          else {
            if (uVar14 == uVar9) {
              pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
              piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
              F_00c472af(((char *)(gen_frame + 0x28)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
              pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x28)))));
              if (pcVar8 != ((char *)GEN_TOP(0x0))) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  do {
                    if (pcVar8 == ppcVar12[uVar4]) break;
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < uVar9);
                }
                if (uVar14 <= uVar4) {
                  if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                    return 0;
                  }
                  F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
                  return 0;
                }
                pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[uVar4];
                iVar6 = 0;
                do {
                  uVar15 = F_00e50570(pcVar8);
                  this[iVar6 + 4] = SUB81(uVar15,0);
                  uVar4 = F_00c51da0(pcVar8,0x2c);
                  iVar6 = iVar6 + 1;
                  pcVar8 = ((char *)GEN_TOP((uVar4 + 2)));
                } while (iVar6 < 0x28);
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0(ppcVar12);
              }
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              }
              return 1;
            }
            if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01038b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1038b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
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
  char * pcVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  uint uVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  pcVar8 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x28)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x28));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x28)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x28)) + 1))));
  if (iVar6 == 0) {
    pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)))));
    (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
    if (pcVar5 != ((char *)GEN_TOP(0x0))) {
      (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 0xb;
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
        (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar8 + 0xc;
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
        F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
        ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        while ((*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5, pcVar5 != pcVar8) {
          cVar1 = *pcVar5;
          if (cVar1 == '\"') {
            pcVar5 = pcVar5 + 1;
            (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
            if ((&(*(char * PTR32 *)(gen_frame + 0x24)) < ppcVar12) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) <= &(*(char * PTR32 *)(gen_frame + 0x24)))) {
              iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x24)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
              if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
                ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[iVar6 >> 2];
              }
            }
            else {
              if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
                ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar12 = pcVar5;
              }
            }
            ppcVar12 = ppcVar12 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ppcVar12;
            pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
            pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
          }
          else {
            if (cVar1 == '{') {
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x24)));
              pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
              iVar6 = 1;
              if (pcVar5 == pcVar11) goto LAB_01038f27;
              do {
                if (*pcVar5 == '{') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                pcVar5 = pcVar5 + 1;
              } while (pcVar5 != pcVar11);
            }
            else {
              if (cVar1 != '[') goto LAB_01038d93;
              cVar1 = pcVar5[1];
              (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 1;
              iVar6 = 1;
              if (cVar1 == '\"') {
LAB_01038d5b: ;
                (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 2;
              }
              else if (cVar1 == '[') {
                iVar6 = 2;
                goto LAB_01038d5b;
              }
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x24)));
              for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
                if (*pcVar5 == '[') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
              }
            }
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
            if (iVar6 == 1) goto LAB_01038f27;
          }
LAB_01038d93: ;
          pcVar5 = pcVar5 + 1;
          (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
        }
        uVar14 = (int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) >> 2;
        if ((int)uVar4 < (int)uVar14) {
LAB_01038f27: ;
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
          }
        }
        else {
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
          F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
          cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
          (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x10));
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          while (cVar1 != ']') {
            if (*(*(char * PTR32 *)(gen_frame + 0x24)) == '\"') {
              if ((&(*(char * PTR32 *)(gen_frame + 0x24)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x24)))) {
                iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x24)) - (int)ppcVar12;
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                  uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar9) {
LAB_01038f0d: ;
                    
                    F_00c4579a(((char *)REFP(0x108497c)));
                  }
                  uVar9 = uVar9 + 1;
                  uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
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
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = ppcVar12[iVar6 >> 2];
                }
              }
              else {
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                  uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar9) goto LAB_01038f0d;
                  uVar9 = uVar9 + 1;
                  uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
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
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = (*(char * PTR32 *)(gen_frame + 0x24));
                }
              }
              ppcVar13 = ppcVar13 + 1;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
              pcVar8 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x24)) + 1,0x22)));
              (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar8;
              if (pcVar8 == ((char *)GEN_TOP(0x0))) {
                if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  F_00406ad0(ppcVar12);
                }
                goto LAB_01038f27;
              }
            }
            (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
            cVar1 = *(*(char * PTR32 *)(gen_frame + 0x24));
          }
          uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if ((int)uVar4 < (int)uVar9) {
            if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              return 0;
            }
          }
          else {
            if (uVar14 == uVar9) {
              pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
              piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
              F_00c472af(((char *)(gen_frame + 0x28)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
              pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x28)))));
              if (pcVar8 != ((char *)GEN_TOP(0x0))) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  do {
                    if (pcVar8 == ppcVar12[uVar4]) break;
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < uVar9);
                }
                if (uVar14 <= uVar4) {
                  if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                    return 0;
                  }
                  F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
                  return 0;
                }
                pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[uVar4];
                iVar6 = 0;
                do {
                  uVar15 = F_00e50570(pcVar8);
                  this[iVar6 + 4] = SUB81(uVar15,0);
                  uVar4 = F_00c51da0(pcVar8,0x2c);
                  iVar6 = iVar6 + 1;
                  pcVar8 = ((char *)GEN_TOP((uVar4 + 2)));
                } while (iVar6 < 0x3c);
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0(ppcVar12);
              }
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              }
              return 1;
            }
            if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01039070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1039070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
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
  char * pcVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  uint uVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  pcVar8 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x28)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x28));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x28)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x28)) + 1))));
  if (iVar6 == 0) {
    pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)))));
    (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
    if (pcVar5 != ((char *)GEN_TOP(0x0))) {
      (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 0xb;
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
        (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar8 + 0xc;
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
        F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
        ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        while ((*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5, pcVar5 != pcVar8) {
          cVar1 = *pcVar5;
          if (cVar1 == '\"') {
            pcVar5 = pcVar5 + 1;
            (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
            if ((&(*(char * PTR32 *)(gen_frame + 0x24)) < ppcVar12) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) <= &(*(char * PTR32 *)(gen_frame + 0x24)))) {
              iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x24)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
              if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
                ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[iVar6 >> 2];
              }
            }
            else {
              if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
                ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar12 = pcVar5;
              }
            }
            ppcVar12 = ppcVar12 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ppcVar12;
            pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
            pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
          }
          else {
            if (cVar1 == '{') {
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x24)));
              pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
              iVar6 = 1;
              if (pcVar5 == pcVar11) goto LAB_01039437;
              do {
                if (*pcVar5 == '{') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                pcVar5 = pcVar5 + 1;
              } while (pcVar5 != pcVar11);
            }
            else {
              if (cVar1 != '[') goto LAB_010392a3;
              cVar1 = pcVar5[1];
              (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 1;
              iVar6 = 1;
              if (cVar1 == '\"') {
LAB_0103926b: ;
                (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 2;
              }
              else if (cVar1 == '[') {
                iVar6 = 2;
                goto LAB_0103926b;
              }
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x24)));
              for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
                if (*pcVar5 == '[') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
              }
            }
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
            if (iVar6 == 1) goto LAB_01039437;
          }
LAB_010392a3: ;
          pcVar5 = pcVar5 + 1;
          (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
        }
        uVar14 = (int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) >> 2;
        if ((int)uVar4 < (int)uVar14) {
LAB_01039437: ;
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
          }
        }
        else {
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
          F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
          cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
          (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x10));
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          while (cVar1 != ']') {
            if (*(*(char * PTR32 *)(gen_frame + 0x24)) == '\"') {
              if ((&(*(char * PTR32 *)(gen_frame + 0x24)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x24)))) {
                iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x24)) - (int)ppcVar12;
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                  uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar9) {
LAB_0103941d: ;
                    
                    F_00c4579a(((char *)REFP(0x108497c)));
                  }
                  uVar9 = uVar9 + 1;
                  uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
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
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = ppcVar12[iVar6 >> 2];
                }
              }
              else {
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                  uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar9) goto LAB_0103941d;
                  uVar9 = uVar9 + 1;
                  uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
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
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = (*(char * PTR32 *)(gen_frame + 0x24));
                }
              }
              ppcVar13 = ppcVar13 + 1;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
              pcVar8 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x24)) + 1,0x22)));
              (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar8;
              if (pcVar8 == ((char *)GEN_TOP(0x0))) {
                if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  F_00406ad0(ppcVar12);
                }
                goto LAB_01039437;
              }
            }
            (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
            cVar1 = *(*(char * PTR32 *)(gen_frame + 0x24));
          }
          uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if ((int)uVar4 < (int)uVar9) {
            if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              return 0;
            }
          }
          else {
            if (uVar14 == uVar9) {
              pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
              piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
              F_00c472af(((char *)(gen_frame + 0x28)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
              pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x28)))));
              if (pcVar8 != ((char *)GEN_TOP(0x0))) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  do {
                    if (pcVar8 == ppcVar12[uVar4]) break;
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < uVar9);
                }
                if (uVar14 <= uVar4) {
                  if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                    return 0;
                  }
                  F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
                  return 0;
                }
                pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[uVar4];
                iVar6 = 0;
                do {
                  uVar15 = F_00e50570(pcVar8);
                  this[iVar6 + 4] = SUB81(uVar15,0);
                  uVar4 = F_00c51da0(pcVar8,0x2c);
                  iVar6 = iVar6 + 1;
                  pcVar8 = ((char *)GEN_TOP((uVar4 + 2)));
                } while (iVar6 < 0x50);
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0(ppcVar12);
              }
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              }
              return 1;
            }
            if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01039580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1039580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
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
  char * pcVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  uint uVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  pcVar8 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x28)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x28));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x28)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x28)) + 1))));
  if (iVar6 == 0) {
    pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)))));
    (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
    if (pcVar5 != ((char *)GEN_TOP(0x0))) {
      (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 0xb;
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
        (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar8 + 0xc;
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
        F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
        ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        while ((*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5, pcVar5 != pcVar8) {
          cVar1 = *pcVar5;
          if (cVar1 == '\"') {
            pcVar5 = pcVar5 + 1;
            (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
            if ((&(*(char * PTR32 *)(gen_frame + 0x24)) < ppcVar12) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) <= &(*(char * PTR32 *)(gen_frame + 0x24)))) {
              iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x24)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
              if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
                ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[iVar6 >> 2];
              }
            }
            else {
              if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
                ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar12 = pcVar5;
              }
            }
            ppcVar12 = ppcVar12 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ppcVar12;
            pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
            pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
          }
          else {
            if (cVar1 == '{') {
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x24)));
              pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
              iVar6 = 1;
              if (pcVar5 == pcVar11) goto LAB_01039947;
              do {
                if (*pcVar5 == '{') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                pcVar5 = pcVar5 + 1;
              } while (pcVar5 != pcVar11);
            }
            else {
              if (cVar1 != '[') goto LAB_010397b3;
              cVar1 = pcVar5[1];
              (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 1;
              iVar6 = 1;
              if (cVar1 == '\"') {
LAB_0103977b: ;
                (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 2;
              }
              else if (cVar1 == '[') {
                iVar6 = 2;
                goto LAB_0103977b;
              }
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x24)));
              for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
                if (*pcVar5 == '[') {
                  iVar6 = iVar6 + 1;
                }
                else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
              }
            }
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
            if (iVar6 == 1) goto LAB_01039947;
          }
LAB_010397b3: ;
          pcVar5 = pcVar5 + 1;
          (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
        }
        uVar14 = (int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) >> 2;
        if ((int)uVar4 < (int)uVar14) {
LAB_01039947: ;
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
          }
        }
        else {
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
          F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
          cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
          (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x10));
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          while (cVar1 != ']') {
            if (*(*(char * PTR32 *)(gen_frame + 0x24)) == '\"') {
              if ((&(*(char * PTR32 *)(gen_frame + 0x24)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x24)))) {
                iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x24)) - (int)ppcVar12;
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                  uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar9) {
LAB_0103992d: ;
                    
                    F_00c4579a(((char *)REFP(0x108497c)));
                  }
                  uVar9 = uVar9 + 1;
                  uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
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
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = ppcVar12[iVar6 >> 2];
                }
              }
              else {
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                  uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar9) goto LAB_0103992d;
                  uVar9 = uVar9 + 1;
                  uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
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
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = (*(char * PTR32 *)(gen_frame + 0x24));
                }
              }
              ppcVar13 = ppcVar13 + 1;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
              pcVar8 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x24)) + 1,0x22)));
              (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar8;
              if (pcVar8 == ((char *)GEN_TOP(0x0))) {
                if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  F_00406ad0(ppcVar12);
                }
                goto LAB_01039947;
              }
            }
            (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
            cVar1 = *(*(char * PTR32 *)(gen_frame + 0x24));
          }
          uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if ((int)uVar4 < (int)uVar9) {
            if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              return 0;
            }
          }
          else {
            if (uVar14 == uVar9) {
              pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
              piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
              F_00c472af(((char *)(gen_frame + 0x28)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
              pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x28)))));
              if (pcVar8 != ((char *)GEN_TOP(0x0))) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  do {
                    if (pcVar8 == ppcVar12[uVar4]) break;
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < uVar9);
                }
                if (uVar14 <= uVar4) {
                  if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                    return 0;
                  }
                  F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
                  return 0;
                }
                pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[uVar4];
                iVar6 = 0;
                do {
                  uVar15 = F_00e50570(pcVar8);
                  this[iVar6 + 4] = SUB81(uVar15,0);
                  uVar4 = F_00c51da0(pcVar8,0x2c);
                  iVar6 = iVar6 + 1;
                  pcVar8 = ((char *)GEN_TOP((uVar4 + 2)));
                } while (iVar6 < 0xfa);
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0(ppcVar12);
              }
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              }
              return 1;
            }
            if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncJournalConfig::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01039a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1039a90u, gen_a0, gen_a1, 0u, 0u);
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
          if (pcVar5 == pcVar11) goto LAB_01039e70;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar11);
        }
        else {
          if (cVar1 != '[') goto LAB_01039cd3;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_01039c9b: ;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_01039c9b;
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
        if (iVar6 == 1) goto LAB_01039e70;
      }
LAB_01039cd3: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x14)));
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
LAB_01039e70: ;
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
LAB_01039e56: ;
                    
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
          if (0x3ffffffe < uVar10) goto LAB_01039e56;
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
        goto LAB_01039e70;
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
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_01039f84;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[4] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
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
LAB_01039f84: ;
      if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar14);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      }
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(short *)(this + 6) = (short)uVar15;
  }
  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar14);
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncLeveProperty::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103a000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103a000u, gen_a0, gen_a1, 0u, 0u);
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
          if (pcVar5 == pcVar11) goto LAB_0103a3e0;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar11);
        }
        else {
          if (cVar1 != '[') goto LAB_0103a243;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_0103a20b: ;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_0103a20b;
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
        if (iVar6 == 1) goto LAB_0103a3e0;
      }
LAB_0103a243: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x14)));
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
LAB_0103a3e0: ;
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
LAB_0103a3c6: ;
                    
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
          if (0x3ffffffe < uVar10) goto LAB_0103a3c6;
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
        goto LAB_0103a3e0;
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
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_0103a630;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[4] = SUB81(uVar15,0);
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
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_0103a630;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 8) = (int)uVar15;
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
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_0103a630;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(short *)(this + 0xc) = (short)uVar15;
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
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_0103a630;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(short *)(this + 0xe) = (short)uVar15;
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
LAB_0103a630: ;
      if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar14);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      }
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(short *)(this + 0x10) = (short)uVar15;
  }
  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar14);
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103a6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103a6b0u, gen_a0, gen_a1, 0u, 0u);
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
  if (iVar6 == 0) {
    pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)))));
    (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
    if (pcVar5 != ((char *)GEN_TOP(0x0))) {
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 0xb;
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
      if (pcVar8 != ((char *)GEN_TOP(0x0))) {
        (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar8 + 0xc;
        (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar8;
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
        F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar4);
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28));
        pcVar12 = (*(char * PTR32 *)(gen_frame + 0x10));
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
        if ((*(char * PTR32 *)(gen_frame + 0x28)) != pcVar8) {
          do {
            cVar1 = *pcVar5;
            if (cVar1 == '\"') {
              pcVar5 = pcVar5 + 1;
              (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
              if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
                iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
                  F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
                  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
                }
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[iVar6 >> 2];
                }
              }
              else {
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
                  F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
                  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
                }
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = pcVar5;
                }
              }
              ppcVar13 = ppcVar13 + 1;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppcVar13;
              pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
              pcVar12 = (*(char * PTR32 *)(gen_frame + 0x10));
            }
            else {
              if (cVar1 == '{') {
                (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
                F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
                pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
                iVar6 = 1;
                if (pcVar5 == pcVar12) goto LAB_0103aa7a;
                do {
                  if (*pcVar5 == '{') {
                    iVar6 = iVar6 + 1;
                  }
                  else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                  pcVar5 = pcVar5 + 1;
                } while (pcVar5 != pcVar12);
              }
              else {
                if (cVar1 != '[') goto LAB_0103a8e3;
                cVar1 = pcVar5[1];
                (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
                iVar6 = 1;
                if (cVar1 == '\"') {
LAB_0103a8ab: ;
                  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
                }
                else if (cVar1 == '[') {
                  iVar6 = 2;
                  goto LAB_0103a8ab;
                }
                F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
                for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)); pcVar5 != pcVar12; pcVar5 = pcVar5 + 1) {
                  if (*pcVar5 == '[') {
                    iVar6 = iVar6 + 1;
                  }
                  else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                }
              }
              ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
              if (iVar6 == 1) goto LAB_0103aa7a;
            }
LAB_0103a8e3: ;
            pcVar5 = pcVar5 + 1;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
          } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x14)));
        }
        pcVar8 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
        (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar8;
        if ((int)uVar4 < (int)pcVar8) {
LAB_0103aa7a: ;
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
          }
        }
        else {
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
          F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
          cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
          (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x10));
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
          pcVar8 = (*(char * PTR32 *)(gen_frame + 0x10));
          while ((*(char * PTR32 *)(gen_frame + 0x28)) = pcVar8, cVar1 != ']') {
            if (*pcVar8 == '\"') {
              if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar14) && (ppcVar13 <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
                iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)ppcVar13;
                if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                  uVar9 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2;
                  if (0x3ffffffe < uVar9) {
LAB_0103aa60: ;
                    
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
                pcVar8 = (*(char * PTR32 *)(gen_frame + 0x28));
                if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar14 = ppcVar13[iVar6 >> 2];
                }
              }
              else {
                if (ppcVar14 == ppcVar11) {
                  uVar9 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2;
                  if (0x3ffffffe < uVar9) goto LAB_0103aa60;
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
                goto LAB_0103aa7a;
              }
            }
            pcVar8 = pcVar8 + 1;
            cVar1 = *pcVar8;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar8;
          }
          pcVar8 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2)));
          if ((int)uVar4 < (int)pcVar8) {
            if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar13);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
              return 0;
            }
          }
          else {
            if ((*(char * PTR32 *)(gen_frame + 0x14)) == pcVar8) {
              pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
              piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
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
                if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar12) {
                  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar13);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                    return 0;
                  }
                  F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
                  return 0;
                }
                uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar12]);
                this[4] = SUB81(uVar15,0);
              }
              piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
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
                if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar12) {
                  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar13);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                    return 0;
                  }
                  F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
                  return 0;
                }
                pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar12];
                iVar6 = 0;
                do {
                  uVar15 = F_00e50570(pcVar8);
                  this[iVar6 + 5] = SUB81(uVar15,0);
                  uVar4 = F_00c51da0(pcVar8,0x2c);
                  iVar6 = iVar6 + 1;
                  pcVar8 = ((char *)GEN_TOP((uVar4 + 2)));
                } while (iVar6 < 3);
              }
              if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0(ppcVar13);
              }
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
              }
              return 1;
            }
            if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar13);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncHpParams::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103ac60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103ac60u, gen_a0, gen_a1, 0u, 0u);
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
  undefined * pSVar14;
  ulonglong uVar15;
  
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
  uVar4 = F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)));
  (*(char * PTR32 *)(gen_frame + 0x28)) = ((char *)GEN_TOP(uVar4));
  if (uVar4 == 0) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x28)) = ((char *)GEN_TOP((uVar4 + 0xb)));
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
  while ((*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5, pcVar5 != pcVar8) {
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
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x2c)));
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x2c)) + 1;
        iVar6 = 1;
        if (pcVar5 == pcVar11) goto LAB_0103b02b;
        do {
          if (*pcVar5 == '{') {
            iVar6 = iVar6 + 1;
          }
          else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 != pcVar11);
      }
      else {
        if (cVar1 != '[') goto LAB_0103ae93;
        cVar1 = pcVar5[1];
        (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5 + 1;
        iVar6 = 1;
        if (cVar1 == '\"') {
LAB_0103ae5b: ;
          (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5 + 2;
        }
        else if (cVar1 == '[') {
          iVar6 = 2;
          goto LAB_0103ae5b;
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
      if (iVar6 == 1) goto LAB_0103b02b;
    }
LAB_0103ae93: ;
    pcVar5 = pcVar5 + 1;
    (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5;
    uVar4 = (*(uint *)(gen_frame + 0x10));
  }
  pcVar8 = ((char *)GEN_TOP(((int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar8;
  if ((int)uVar4 < (int)pcVar8) {
LAB_0103b02b: ;
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
  (*(char * PTR32 *)(gen_frame + 0x2c)) = (*(char * PTR32 *)(gen_frame + 0x14));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x14));
  while (cVar1 != ']') {
    if (*pcVar8 == '\"') {
      (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar8;
      if ((&(*(char * PTR32 *)(gen_frame + 0x2c)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x2c)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x2c)) - (int)ppcVar12;
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar4 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (0x3ffffffe < uVar4) {
LAB_0103b011: ;
                    
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
        pcVar8 = (*(char * PTR32 *)(gen_frame + 0x2c));
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = ppcVar12[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar13 == ppcVar10) {
          uVar4 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (0x3ffffffe < uVar4) goto LAB_0103b011;
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
        goto LAB_0103b02b;
      }
    }
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
    (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar8;
  }
  pcVar8 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar8;
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
  if ((*(char * PTR32 *)(gen_frame + 0x28)) != pcVar8) {
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
  pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  if (pcVar8 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar8 == ppcVar12[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x2c)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar5) {
      if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      return 0;
    }
    pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar5];
    (*(uint *)(gen_frame + 0x10)) = 4;
    pSVar14 = this;
    do {
      pSVar14 = pSVar14 + 4;
      uVar15 = F_00e505e0(pcVar8);
      *(int *)pSVar14 = (int)uVar15;
      uVar9 = F_00c51da0(pcVar8,0x2c);
      uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
      (*(uint *)(gen_frame + 0x10)) = uVar4;
      pcVar8 = ((char *)GEN_TOP((uVar9 + 2)));
    } while (uVar4 != 0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x2c));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x2c)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) {
      if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      return 0;
    }
    uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 0x14) = (int)uVar15;
  }
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
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto LAB_0103b235;
    uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 0x18) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) {
LAB_0103b235: ;
      if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      return 0;
    }
    uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 0x1c) = (int)uVar15;
  }
  if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar12);
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncMpParams::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103b320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103b320u, gen_a0, gen_a1, 0u, 0u);
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
          if (pcVar5 == pcVar11) goto LAB_0103b700;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar11);
        }
        else {
          if (cVar1 != '[') goto LAB_0103b563;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_0103b52b: ;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_0103b52b;
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
        if (iVar6 == 1) goto LAB_0103b700;
      }
LAB_0103b563: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x14)));
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
LAB_0103b700: ;
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
LAB_0103b6e6: ;
                    
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
          if (0x3ffffffe < uVar10) goto LAB_0103b6e6;
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
        goto LAB_0103b700;
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
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_0103b814;
    uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 4) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
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
LAB_0103b814: ;
      if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar14);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      }
      return 0;
    }
    uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 8) = (int)uVar15;
  }
  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar14);
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103b890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103b890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x78, 8, 4);
  undefined * pSVar1;
  char cVar2;
  code * pcVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  int iVar7;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  uint uVar11;
  char * PTR32 * ppcVar12;
  char * pcVar13;
  char * PTR32 * ppcVar14;
  char * PTR32 * ppcVar15;
  undefined * pSVar16;
  ulonglong uVar17;
  float fVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  pcVar9 = param_1 + 1;
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,((char *)REFP(0x115856c)),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x30));
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  iVar7 = F_00c4b813(pcVar9,((char *)(gen_frame + 0x30)),(gen_size32)(pcVar6 + (-1 - (int)(((char *)(gen_frame + 0x30)) + 1))));
  if (iVar7 == 0) {
    uVar5 = F_00fb9ad0(pcVar9,((char *)REFP(0x1158af0)));
    (*(char * PTR32 *)(gen_frame + 0x28)) = ((char *)GEN_TOP(uVar5));
    if (uVar5 != 0) {
      (*(char * PTR32 *)(gen_frame + 0x28)) = ((char *)GEN_TOP((uVar5 + 0xb)));
      pcVar6 = param_1;
      do {
        pcVar13 = pcVar6;
        pcVar6 = pcVar13 + 1;
      } while (*pcVar13 != '\0');
      iVar7 = 1;
      for (pcVar6 = pcVar9; pcVar8 = pcVar13 - 1, pcVar6 < pcVar13 - 1; pcVar6 = pcVar6 + 1) {
        if (*pcVar6 == '{') {
          iVar7 = iVar7 + 1;
        }
        else if ((*pcVar6 == '}') && (iVar7 = iVar7 - 1, pcVar8 = pcVar6, iVar7 == 0)) break;
      }
      pcVar9 = ((char *)GEN_TOP(F_00e50750(pcVar9,((char *)REFP(0x1158ae0)),pcVar8)));
      if (pcVar9 != ((char *)GEN_TOP(0x0))) {
        (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9 + 0xc;
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x14))))(piVar4 GEN_EDX_ARG);
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
        F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar5);
        (*(char * PTR32 *)(gen_frame + 0x2c)) = (*(char * PTR32 *)(gen_frame + 0x28));
        pcVar13 = (*(char * PTR32 *)(gen_frame + 0x14));
        ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
        pcVar6 = (*(char * PTR32 *)(gen_frame + 0x28));
        while ((*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar6, pcVar6 != pcVar9) {
          cVar2 = *pcVar6;
          if (cVar2 == '\"') {
            pcVar6 = pcVar6 + 1;
            (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar6;
            if ((&(*(char * PTR32 *)(gen_frame + 0x2c)) < ppcVar14) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) <= &(*(char * PTR32 *)(gen_frame + 0x2c)))) {
              iVar7 = (int)&(*(char * PTR32 *)(gen_frame + 0x2c)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
              if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
                ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
              }
              if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[iVar7 >> 2];
              }
            }
            else {
              if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
                ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
              }
              if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
                *ppcVar14 = pcVar6;
              }
            }
            ppcVar14 = ppcVar14 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppcVar14;
            pcVar6 = ((char *)GEN_TOP(F_00c51da0(pcVar6,0x22)));
            pcVar13 = (*(char * PTR32 *)(gen_frame + 0x14));
          }
          else {
            if (cVar2 == '{') {
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x2c)));
              pcVar6 = (*(char * PTR32 *)(gen_frame + 0x2c)) + 1;
              iVar7 = 1;
              if (pcVar6 == pcVar13) goto LAB_0103bc5a;
              do {
                if (*pcVar6 == '{') {
                  iVar7 = iVar7 + 1;
                }
                else if ((*pcVar6 == '}') && (iVar7 = iVar7 - 1, iVar7 == 0)) break;
                pcVar6 = pcVar6 + 1;
              } while (pcVar6 != pcVar13);
            }
            else {
              if (cVar2 != '[') goto LAB_0103bac3;
              cVar2 = pcVar6[1];
              (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar6 + 1;
              iVar7 = 1;
              if (cVar2 == '\"') {
LAB_0103ba8b: ;
                (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar6 + 2;
              }
              else if (cVar2 == '[') {
                iVar7 = 2;
                goto LAB_0103ba8b;
              }
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x2c)));
              for (pcVar6 = (*(char * PTR32 *)(gen_frame + 0x2c)); pcVar6 != pcVar13; pcVar6 = pcVar6 + 1) {
                if (*pcVar6 == '[') {
                  iVar7 = iVar7 + 1;
                }
                else if ((*pcVar6 == ']') && (iVar7 = iVar7 - 1, iVar7 == 0)) break;
              }
            }
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
            if (iVar7 == 1) goto LAB_0103bc5a;
          }
LAB_0103bac3: ;
          pcVar6 = pcVar6 + 1;
          (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar6;
        }
        pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
        (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
        if ((int)uVar5 < (int)pcVar9) {
LAB_0103bc5a: ;
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
          }
        }
        else {
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
          F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar5);
          cVar2 = *(*(char * PTR32 *)(gen_frame + 0x14));
          (*(char * PTR32 *)(gen_frame + 0x2c)) = (*(char * PTR32 *)(gen_frame + 0x14));
          ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
          pSVar16 = (*(undefined * PTR32 *)(gen_frame + 0x10));
          pcVar9 = (*(char * PTR32 *)(gen_frame + 0x14));
          while ((*(undefined * PTR32 *)(gen_frame + 0x10)) = pSVar16, (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar9, cVar2 != ']') {
            if (*pcVar9 == '\"') {
              if ((&(*(char * PTR32 *)(gen_frame + 0x2c)) < ppcVar15) && (ppcVar14 <= &(*(char * PTR32 *)(gen_frame + 0x2c)))) {
                iVar7 = (int)&(*(char * PTR32 *)(gen_frame + 0x2c)) - (int)ppcVar14;
                if (ppcVar15 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                  uVar10 = (int)ppcVar15 - (int)((int)(uintptr_t)ppcVar14) >> 2;
                  if (0x3ffffffe < uVar10) {
LAB_0103bc40: ;
                    
                    F_00c4579a(((char *)REFP(0x108497c)));
                  }
                  uVar10 = uVar10 + 1;
                  uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
                  if (uVar11 < uVar10) {
                    if (0x3fffffff - (uVar11 >> 1) < uVar11) {
                      uVar11 = 0;
                    }
                    else {
                      uVar11 = uVar11 + (uVar11 >> 1);
                    }
                    if (uVar11 < uVar10) {
                      uVar11 = uVar10;
                    }
                    F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar11);
                    ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                pcVar9 = (*(char * PTR32 *)(gen_frame + 0x2c));
                if (ppcVar15 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar15 = ppcVar14[iVar7 >> 2];
                }
              }
              else {
                if (ppcVar15 == ppcVar12) {
                  uVar10 = (int)ppcVar15 - (int)((int)(uintptr_t)ppcVar14) >> 2;
                  if (0x3ffffffe < uVar10) goto LAB_0103bc40;
                  uVar10 = uVar10 + 1;
                  uVar11 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar14) >> 2;
                  if (uVar11 < uVar10) {
                    if (0x3fffffff - (uVar11 >> 1) < uVar11) {
                      uVar11 = 0;
                    }
                    else {
                      uVar11 = uVar11 + (uVar11 >> 1);
                    }
                    if (uVar11 < uVar10) {
                      uVar11 = uVar10;
                    }
                    F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar11);
                    ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                if (ppcVar15 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar15 = pcVar9;
                }
              }
              ppcVar15 = ppcVar15 + 1;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar15;
              pcVar9 = ((char *)GEN_TOP(F_00c51da0(pcVar9 + 1,0x22)));
              ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
              if (pcVar9 == ((char *)GEN_TOP(0x0))) {
                if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  F_00406ad0(ppcVar14);
                }
                goto LAB_0103bc5a;
              }
            }
            pcVar9 = pcVar9 + 1;
            cVar2 = *pcVar9;
            (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar9;
            pSVar16 = (*(undefined * PTR32 *)(gen_frame + 0x10));
          }
          pcVar9 = ((char *)GEN_TOP(((int)ppcVar15 - (int)((int)(uintptr_t)ppcVar14) >> 2)));
          if ((int)uVar5 < (int)pcVar9) {
            if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar14);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
              return 0;
            }
          }
          else {
            if ((*(char * PTR32 *)(gen_frame + 0x28)) == pcVar9) {
              pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)pSVar16 + 4)));
              piVar4 = ((int *)GEN_TOP((*pcVar3)(pSVar16)));
              uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
              F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar5);
              pcVar6 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
              if (pcVar6 != ((char *)GEN_TOP(0x0))) {
                pcVar13 = ((char *)GEN_TOP(0x0));
                if (pcVar9 != ((char *)GEN_TOP(0x0))) {
                  do {
                    if (pcVar6 == ppcVar14[(int)pcVar13]) break;
                    pcVar13 = pcVar13 + 1;
                  } while (pcVar13 < pcVar9);
                }
                if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar13) {
                  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar14);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                    return 0;
                  }
                  F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
                  return 0;
                }
                uVar17 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar13]);
                *(int *)(pSVar16 + 4) = (int)uVar17;
              }
              piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pSVar16 + 4))))(pSVar16 GEN_EDX_ARG)));
              uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,1);
              F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar5);
              pcVar6 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
              if (pcVar6 != ((char *)GEN_TOP(0x0))) {
                pcVar13 = ((char *)GEN_TOP(0x0));
                if (pcVar9 != ((char *)GEN_TOP(0x0))) {
                  do {
                    if (pcVar6 == ppcVar14[(int)pcVar13]) break;
                    pcVar13 = pcVar13 + 1;
                  } while (pcVar13 < pcVar9);
                }
                if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar13) {
                  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar14);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                    return 0;
                  }
                  F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
                  return 0;
                }
                uVar17 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar13]);
                *(int *)(pSVar16 + 8) = (int)uVar17;
              }
              piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pSVar16 + 4))))(pSVar16 GEN_EDX_ARG)));
              uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,2);
              F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar5);
              pcVar6 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
              if (pcVar6 != ((char *)GEN_TOP(0x0))) {
                pcVar13 = ((char *)GEN_TOP(0x0));
                if (pcVar9 != ((char *)GEN_TOP(0x0))) {
                  do {
                    if (pcVar6 == ppcVar14[(int)pcVar13]) break;
                    pcVar13 = pcVar13 + 1;
                  } while (pcVar13 < pcVar9);
                }
                if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar13) {
                  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar14);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                    return 0;
                  }
                  F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
                  return 0;
                }
                pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar13];
                pSVar16 = (*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x10;
                (*(undefined * PTR32 *)(gen_frame + 0x10)) = ((undefined *)GEN_TOP(0x2));
                do {
                  fVar18 = F_00e50660(pcVar9);
                  *(float *)pSVar16 = fVar18;
                  uVar5 = F_00c51da0(pcVar9,0x2c);
                  pSVar16 = pSVar16 + 4;
                  pSVar1 = (*(undefined * PTR32 *)(gen_frame + 0x10)) - 1;
                  (*(undefined * PTR32 *)(gen_frame + 0x10)) = pSVar1;
                  pcVar9 = ((char *)GEN_TOP((uVar5 + 2)));
                } while (pSVar1 != ((undefined *)GEN_TOP(0x0)));
              }
              if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0(ppcVar14);
              }
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
              }
              return 1;
            }
            if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar14);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103bed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x103bed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  iVar3 = 0x58;
  do {
    iVar10 = iVar3;
    this = this + 4;
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158bc4)),*(int *)this,*(int *)((int)(uintptr_t)this) >> 0x1f);
    pcVar6 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
    iVar3 = iVar10 - 1;
  } while (iVar10 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar5 != 0) {
    puVar9 = param_1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + iVar10 + uVar5,(uVar2 - uVar5) - iVar10);
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

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103c110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103c110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar3 = 0x58;
  do {
    iVar10 = iVar3;
    this = this + 4;
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158bc4)),*(int *)this,*(int *)((int)(uintptr_t)this) >> 0x1f);
    pcVar6 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
    iVar3 = iVar10 - 1;
  } while (iVar10 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
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

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103c470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x103c470u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
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

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103c5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103c5d0u, gen_a0, gen_a1, 0u, 0u);
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103c850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x103c850u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103c9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103c9b0u, gen_a0, gen_a1, 0u, 0u);
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103cc30(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x103cc30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  code * pcVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  int iVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_2 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_2 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_2 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_2 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_2 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_2 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  piVar4 = param_1 + 1;
  iVar3 = 5;
  do {
    iVar11 = iVar3;
    if (param_3 == '\0') {
      pcVar8 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x24)));
    }
    else {
      pcVar8 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x3c)));
    }
    (*pcVar8)(piVar4,param_2);
    F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
    piVar4 = piVar4 + 6;
    iVar3 = iVar11 - 1;
  } while (iVar11 - 1 != 0);
  uVar2 = param_2[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar5 != 0) {
    puVar10 = param_2;
    puVar9 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_2));
      puVar10 = ((undefined4 *)GEN_TOP(*param_2));
    }
    F_00c46e20((int)puVar10 + uVar5,(int)puVar9 + iVar11 + uVar5,(uVar2 - uVar5) - iVar11);
    iVar3 = param_2[4];
    param_2[4] = iVar3 - iVar11;
    puVar9 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_2));
    }
    *((undefined1 *)GEN_TOP(((int)puVar9 + (iVar3 - iVar11)))) = 0;
  }
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  uVar2 = param_2[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar10 = param_2;
      puVar9 = param_2;
      if (0xf < (uint)param_2[5]) {
        puVar9 = ((undefined4 *)GEN_TOP(*param_2));
        puVar10 = ((undefined4 *)GEN_TOP(*param_2));
      }
      F_00c46e20((int)puVar10 + uVar5,(int)puVar9 + uVar2,(uVar2 - 1) - uVar5);
      iVar3 = param_2[4];
      param_2[4] = iVar3 - 1;
      puVar9 = param_2;
      if (0xf < (uint)param_2[5]) {
        puVar9 = ((undefined4 *)GEN_TOP(*param_2));
      }
      *((undefined1 *)GEN_TOP(((int)puVar9 + iVar3 - 1))) = 0;
    }
    F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103ce60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103ce60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
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
  undefined * pSVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x12a98c0)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pSVar11 = this + 4;
  iVar3 = 5;
  do {
    iVar10 = iVar3;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pSVar11 + 0x30))))(pSVar11 GEN_EDX_ARG,param_1);
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
    pSVar11 = pSVar11 + 0x18;
    iVar3 = iVar10 - 1;
  } while (iVar10 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103d1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x103d1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0xa0);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar4 != 0) {
    puVar8 = param_1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) - 1);
    iVar9 = param_1[4];
    param_1[4] = iVar9 - 1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar7 + iVar9 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103d3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103d3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0xa0);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
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
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 - uVar4 != 0) {
      puVar8 = param_1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = ((undefined4 *)GEN_TOP(*param_1));
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) - 1);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103d760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x103d760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x28);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar4 != 0) {
    puVar8 = param_1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) - 1);
    iVar9 = param_1[4];
    param_1[4] = iVar9 - 1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar7 + iVar9 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103d9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103d9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x12aa638)),0x12);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x28);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
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
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 - uVar4 != 0) {
      puVar8 = param_1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = ((undefined4 *)GEN_TOP(*param_1));
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) - 1);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103dd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x103dd10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x3c);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar4 != 0) {
    puVar8 = param_1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) - 1);
    iVar9 = param_1[4];
    param_1[4] = iVar9 - 1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar7 + iVar9 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103df50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103df50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x12aa638)),0x12);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x3c);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
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
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 - uVar4 != 0) {
      puVar8 = param_1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = ((undefined4 *)GEN_TOP(*param_1));
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) - 1);
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103e2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x103e2c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x50);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar4 != 0) {
    puVar8 = param_1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) - 1);
    iVar9 = param_1[4];
    param_1[4] = iVar9 - 1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar7 + iVar9 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103e500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103e500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x12aa638)),0x12);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x50);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
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
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 - uVar4 != 0) {
      puVar8 = param_1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = ((undefined4 *)GEN_TOP(*param_1));
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) - 1);
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103e870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x103e870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0xfa);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar4 != 0) {
    puVar8 = param_1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) - 1);
    iVar9 = param_1[4];
    param_1[4] = iVar9 - 1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar7 + iVar9 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103eab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103eab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x12aa638)),0x12);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0xfa);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
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
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 - uVar4 != 0) {
      puVar8 = param_1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = ((undefined4 *)GEN_TOP(*param_1));
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) - 1);
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

/* ref: Application::Network::WorkDefinitions::SyncJournalConfig::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103ee20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x103ee20u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 6),0);
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

/* ref: Application::Network::WorkDefinitions::SyncJournalConfig::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103efc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103efc0u, gen_a0, gen_a1, 0u, 0u);
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c28)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 6),0);
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

/* ref: Application::Network::WorkDefinitions::SyncLeveProperty::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103f3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x103f3b0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 0xc),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 0xe),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 0x10),0);
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

/* ref: Application::Network::WorkDefinitions::SyncLeveProperty::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103f620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x103f620u, gen_a0, gen_a1, 0u, 0u);
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),0);
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c28)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 0xc),0);
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c28)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 0xe),0);
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c28)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 0x10),0);
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

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0103fe60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x103fe60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 5],0);
    pcVar5 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar4 != 0) {
    puVar8 = param_1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) - 1);
    iVar9 = param_1[4];
    param_1[4] = iVar9 - 1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar7 + iVar9 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
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

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010400e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10400e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 5],0);
    pcVar5 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x0)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
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
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 - uVar4 != 0) {
      puVar8 = param_1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = ((undefined4 *)GEN_TOP(*param_1));
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) - 1);
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

/* ref: Application::Network::WorkDefinitions::SyncHpParams::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010405c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10405c0u, gen_a0, gen_a1, gen_a2, 0u);
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
  undefined * pSVar10;
  
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
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x4));
  pSVar10 = this;
  do {
    pSVar10 = pSVar10 + 4;
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bc4)),*(int *)pSVar10,*(int *)((int)(uintptr_t)pSVar10) >> 0x1f);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
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
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x14),*(int *)(this + 0x14) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x18),*(int *)(this + 0x18) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x1c),*(int *)(this + 0x1c) >> 0x1f);
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

/* ref: Application::Network::WorkDefinitions::SyncHpParams::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010408d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10408d0u, gen_a0, gen_a1, 0u, 0u);
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
  undefined * pSVar10;
  
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x4));
  pSVar10 = this;
  do {
    pSVar10 = pSVar10 + 4;
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bc4)),*(int *)pSVar10,*(int *)((int)(uintptr_t)pSVar10) >> 0x1f);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x14),*(int *)(this + 0x14) >> 0x1f);
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x18),*(int *)(this + 0x18) >> 0x1f);
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x1c),*(int *)(this + 0x1c) >> 0x1f);
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

/* ref: Application::Network::WorkDefinitions::SyncMpParams::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01041090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1041090u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 4),*(int *)(this + 4) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 8),*(int *)(this + 8) >> 0x1f);
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

/* ref: Application::Network::WorkDefinitions::SyncMpParams::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01041230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1041230u, gen_a0, gen_a1, 0u, 0u);
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 4),*(int *)(this + 4) >> 0x1f);
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 8),*(int *)(this + 8) >> 0x1f);
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01041620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1041620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
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
  undefined * pSVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 4),*(int *)(this + 4) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 8),*(int *)(this + 8) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pSVar11 = this + 0x10;
  iVar3 = 2;
  do {
    iVar10 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158bcc)),(int)(ulonglong)gen_d2bits((double)*(float *)pSVar11),
               (int)((ulonglong)gen_d2bits((double)*(float *)pSVar11) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
    pSVar11 = pSVar11 + 4;
    iVar3 = iVar10 - 1;
  } while (iVar10 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar5 != 0) {
    puVar9 = param_1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + iVar10 + uVar5,(uVar2 - uVar5) - iVar10);
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010418f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10418f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
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
  undefined * pSVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 4),*(int *)(this + 4) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 8),*(int *)(this + 8) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
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
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x12b06e0)),0x15);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pSVar11 = this + 0x10;
  iVar3 = 2;
  do {
    iVar10 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158bcc)),(int)(ulonglong)gen_d2bits((double)*(float *)pSVar11),
               (int)((ulonglong)gen_d2bits((double)*(float *)pSVar11) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x0));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x0)) + 1));
    pSVar11 = pSVar11 + 4;
    iVar3 = iVar10 - 1;
  } while (iVar10 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
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

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01041f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1041f40u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01041ff1;
  }
  bVar2 = true;
LAB_01041ff1: ;
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

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01042130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1042130u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_010421e1;
  }
  bVar2 = true;
LAB_010421e1: ;
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01042320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1042320u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_010423d1;
  }
  bVar2 = true;
LAB_010423d1: ;
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01042510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1042510u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_010425c1;
  }
  bVar2 = true;
LAB_010425c1: ;
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01042700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1042700u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_010427b1;
  }
  bVar2 = true;
LAB_010427b1: ;
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010428f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10428f0u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_010429a1;
  }
  bVar2 = true;
LAB_010429a1: ;
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

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01042ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1042ae0u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01042b91;
  }
  bVar2 = true;
LAB_01042b91: ;
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01042cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1042cd0u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01042d81;
  }
  bVar2 = true;
LAB_01042d81: ;
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

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01042ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1042ec0u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01042f71;
  }
  bVar2 = true;
LAB_01042f71: ;
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

/* ref: Application::Network::WorkDefinitions::SyncJournalConfig::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010430b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10430b0u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01043161;
  }
  bVar2 = true;
LAB_01043161: ;
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

/* ref: Application::Network::WorkDefinitions::SyncLeveProperty::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010432a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10432a0u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01043351;
  }
  bVar2 = true;
LAB_01043351: ;
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

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01043490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1043490u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01043541;
  }
  bVar2 = true;
LAB_01043541: ;
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

/* ref: Application::Network::WorkDefinitions::SyncHpParams::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01043680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1043680u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01043731;
  }
  bVar2 = true;
LAB_01043731: ;
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

/* ref: Application::Network::WorkDefinitions::SyncMpParams::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01043870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1043870u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01043921;
  }
  bVar2 = true;
LAB_01043921: ;
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

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01043a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1043a60u, gen_a0, gen_a1, 0u, 0u);
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
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01043b11;
  }
  bVar2 = true;
LAB_01043b11: ;
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

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043c50(void)
{
  GEN_ENTER(0x1043c50u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043c60(void)
{
  GEN_ENTER(0x1043c60u, 0u, 0u, 0u, 0u);
  return 0x136c530;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043c70(void)
{
  GEN_ENTER(0x1043c70u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043c80(void)
{
  GEN_ENTER(0x1043c80u, 0u, 0u, 0u, 0u);
  return 0x136c534;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043c90(void)
{
  GEN_ENTER(0x1043c90u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043ca0(void)
{
  GEN_ENTER(0x1043ca0u, 0u, 0u, 0u, 0u);
  return 0x136c538;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043cb0(void)
{
  GEN_ENTER(0x1043cb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043cc0(void)
{
  GEN_ENTER(0x1043cc0u, 0u, 0u, 0u, 0u);
  return 0x136c53c;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043cd0(void)
{
  GEN_ENTER(0x1043cd0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043ce0(void)
{
  GEN_ENTER(0x1043ce0u, 0u, 0u, 0u, 0u);
  return 0x136c540;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043cf0(void)
{
  GEN_ENTER(0x1043cf0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043d00(void)
{
  GEN_ENTER(0x1043d00u, 0u, 0u, 0u, 0u);
  return 0x136c544;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043d10(void)
{
  GEN_ENTER(0x1043d10u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043d20(void)
{
  GEN_ENTER(0x1043d20u, 0u, 0u, 0u, 0u);
  return 0x136c548;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043d30(void)
{
  GEN_ENTER(0x1043d30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043d40(void)
{
  GEN_ENTER(0x1043d40u, 0u, 0u, 0u, 0u);
  return 0x136c54c;
}

/* ref: Application::Network::WorkDefinitions::SyncJournalConfig_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043d50(void)
{
  GEN_ENTER(0x1043d50u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Application::Network::WorkDefinitions::SyncJournalConfig::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043d60(void)
{
  GEN_ENTER(0x1043d60u, 0u, 0u, 0u, 0u);
  return 0x136c550;
}

/* ref: Application::Network::WorkDefinitions::SyncLeveProperty_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043d70(void)
{
  GEN_ENTER(0x1043d70u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Application::Network::WorkDefinitions::SyncLeveProperty::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043d80(void)
{
  GEN_ENTER(0x1043d80u, 0u, 0u, 0u, 0u);
  return 0x136c554;
}

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043d90(void)
{
  GEN_ENTER(0x1043d90u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043da0(void)
{
  GEN_ENTER(0x1043da0u, 0u, 0u, 0u, 0u);
  return 0x136c558;
}

/* ref: Application::Network::WorkDefinitions::SyncHpParams_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043db0(void)
{
  GEN_ENTER(0x1043db0u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Application::Network::WorkDefinitions::SyncHpParams::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043dc0(void)
{
  GEN_ENTER(0x1043dc0u, 0u, 0u, 0u, 0u);
  return 0x136c55c;
}

/* ref: Application::Network::WorkDefinitions::SyncMpParams_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043dd0(void)
{
  GEN_ENTER(0x1043dd0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Application::Network::WorkDefinitions::SyncMpParams::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043de0(void)
{
  GEN_ENTER(0x1043de0u, 0u, 0u, 0u, 0u);
  return 0x136c560;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043df0(void)
{
  GEN_ENTER(0x1043df0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043e00(void)
{
  GEN_ENTER(0x1043e00u, 0u, 0u, 0u, 0u);
  return 0x136c564;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01043e10(void)
{
  GEN_ENTER(0x1043e10u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01043e20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1043e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf1 */
GEN_LIB GEN_NOFRAME uint F_01043e50(void)
{
  GEN_ENTER(0x1043e50u, 0u, 0u, 0u, 0u);
  return 0x136c52c;
}

/* ref: Application::Network::WorkDefinitions::SyncParameter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01043e60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1043e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01043e90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1043e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncStartTown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01043ec0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1043ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01043ef0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1043ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringChainLevel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01043f20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1043f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01043f50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1043f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringMap::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01043f80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1043f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * in_ecx;
  int iVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[27])REFP(0x12b106c));
  in_ecx = param_1 + 0x1f;
  iVar1 = 4;
  do {
    in_ecx = in_ecx - 6;
    F_00ffbf10(in_ecx GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01043fd0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1043fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringPopPattern::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044000(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044030(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringDivisionOpenFlags::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044060(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044090(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGatheringItemGetFlags::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010440c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10440c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010440f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10440f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeDivisionOpenFlags::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044120(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044150(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncRecipeCreateFlags::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044180(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncJournalConfig_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010441b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10441b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncJournalConfig::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010441e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10441e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncLeveProperty_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044210(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncLeveProperty::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044240(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044270(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncGrandCompany::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010442a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10442a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncHpParams_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010442d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10442d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncHpParams::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044300(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncMpParams_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044330(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncMpParams::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044360(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044390(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::SyncTpParams::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010443c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10443c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_01044410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x88))) = param_2;
  return param_2;
}

/* ref: FUN_01044460 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01044460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1044460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x104))) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x104))) + 0x10e0)));
}

/* ref: FUN_01044480 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01044480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1044480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x104))) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x104))) + 0x10e4)));
}

/* ref: FUN_010444a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_010444a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10444a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x104)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 0x10e0))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x10e4))) = 0;
  }
  return uVar1;
}

/* ref: Application::Network::ZoneProtoChannel::ServiceConsumerConnectionManager::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010444c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10444c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x104)));
  *((undefined4 *)GEN_TOP((uVar1 + 4))) = param_2;
  return uVar1;
}

/* ref: FUN_010444e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_010444e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10444e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*((ushort *)GEN_TOP((param_1 + 0x54)));
  uVar2 = F_0042a990(param_1 GEN_EDX_FWD);
  F_00ba86c0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,uVar2,uVar1);
  return 1;
}

/* ref: Application::Network::ZoneProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01044570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1044570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x90) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00ba7490(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_FWD);
    return CONCAT31((int3)(uVar1 >> 8),uVar1 == 7);
  }
  return 1;
}

/* ref: FUN_010445a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010445a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10445a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  return param_1;
}

/* ref: FUN_010445c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010445c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10445c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_01044610 */
GEN_LIB GEN_FRAME uint F_01044610(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_01044630 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_01044630(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_01044650 */
GEN_LIB GEN_FRAME uint F_01044650(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_01044660 */
GEN_LIB GEN_FRAME uint F_01044660(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_01044670 */
GEN_LIB GEN_FRAME uint F_01044670(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_01044680 */
GEN_LIB GEN_FRAME uint F_01044680(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_01044690 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01044690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1044690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_010446b0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_010446b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10446b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_010446d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010446d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x10446d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_01044700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1044700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_01044760 */
GEN_LIB GEN_FRAME uint F_01044760(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_01044770 */
GEN_LIB GEN_FRAME uint F_01044770(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_01044790 */
GEN_LIB GEN_FRAME uint F_01044790(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_010447d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_010447d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10447d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_01044830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_01044840 */
GEN_LIB GEN_FRAME uint F_01044840(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_01044860 */
GEN_LIB GEN_FRAME uint F_01044860(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_010448b0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_010448b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x10448b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x50, 0);
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  byte bVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) && (*((int *)GEN_TOP(((int)this + 0xc))) + 0x58U <= *(uint *)this)) {
    if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = (undefined2)param_2;
    (*(undefined2 *)(gen_frame + 0xc)) = 1;
    (*(ulonglong *)(gen_frame + 0x10)) = 0;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x38;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined8 *)(gen_frame + 0x18)) = 0;
    (*(undefined8 *)(gen_frame + 0x20)) = 0;
    (*(undefined8 *)(gen_frame + 0x28)) = 0;
    (*(undefined8 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 0)) = param_1;
    (*(ulonglong *)(gen_frame + 0x10)) = (ulonglong)param_1;
    if (param_3 != ((int *)GEN_TOP(0x0))) {
      iVar5 = *param_3;
      if (iVar5 != param_3[1]) {
        F_00c46aa0((int)&(*(ulonglong *)(gen_frame + 0x10)) + 4,iVar5,param_3[1] - iVar5);
      }
    }
    puVar6 = ((undefined4 *)(gen_frame + 0x0));
    puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
    for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x38;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
    *piVar1 = *piVar1 + 0x38;
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
    *psVar2 = *psVar2 + 1;
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}

/* ref: FUN_010449e0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_010449e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x10449e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x290, 0);
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) && (*((int *)GEN_TOP(((int)this + 0xc))) + 0x298U <= *(uint *)this)) {
    if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = (undefined2)param_3;
    (*(undefined2 *)(gen_frame + 0xc)) = 9;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x278;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    F_00c48350(&(*(undefined4 *)(gen_frame + 0x10)),0,0x268);
    (*(undefined4 *)(gen_frame + 0x10)) = param_2;
    if (param_4 != ((int *)GEN_TOP(0x0))) {
      iVar5 = *param_4;
      if (iVar5 != param_4[1]) {
        F_00c46aa0(((undefined1 *)(gen_frame + 0x14)),iVar5,param_4[1] - iVar5);
      }
    }
    if ((param_1 != ((int *)GEN_TOP(0x0))) &&
       (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x0))), (char)uVar4 != '\0')) {
      puVar6 = ((undefined4 *)(gen_frame + 0x0));
      puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
      for (iVar5 = 0x9e; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x278;
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
      *piVar1 = *piVar1 + 0x278;
      psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
      *psVar2 = *psVar2 + 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_01044b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1044b50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1100c, 4, 4);
  uint uVar1;
  undefined1 * puVar2;
  
  (*(uint *)(gen_frame + 0x11004)) = 0x1044b5d;
  (*(uint *)(gen_frame + 0x11004)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (*((char *)GEN_TOP((uVar1 + 0x19))) == '\x01') {
    if ((param_1 == ((undefined1 *)GEN_TOP(0x0))) || (param_2 == 0)) {
      puVar2 = ((undefined1 *)(gen_frame + 0x10004));
      (*(int *)(gen_frame + 0x10000)) = 0x1000;
    }
    else {
      (*(int *)(gen_frame + 0x10000)) = param_2;
      puVar2 = param_1;
    }
    F_01050f50(puVar2,&(*(int *)(gen_frame + 0x10000)),*((int *)GEN_TOP(((int)this + 8))) + 0x20,
                 *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) - 0x20);
    F_00c46aa0(*((int *)GEN_TOP(((int)this + 8))) + 0x20,puVar2,(*(int *)(gen_frame + 0x10000)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x19))) = 0;
    uVar1 = (*(int *)(gen_frame + 0x10000)) + 0x20;
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_01044c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_01044c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044c10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: FUN_01044c20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1044c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

/* ref: FUN_01044c50 */
GEN_LIB GEN_FRAME uint F_01044c50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_01044c60 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_01044c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1044c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x48, 8);
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) && (*((int *)GEN_TOP(((int)this + 0xc))) + 0x58U <= *(uint *)this)) {
    if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
    }
    iVar4 = *((int *)GEN_TOP(((int)this + 0xc)));
    iVar5 = *((int *)GEN_TOP(((int)this + 8)));
    (*(undefined2 *)(gen_frame + 0xc)) = 2;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = param_1;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x38;
    puVar7 = ((undefined4 *)(gen_frame + 0x0));
    puVar8 = ((undefined4 *)GEN_TOP((iVar4 + iVar5)));
    for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x38;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
    *piVar1 = *piVar1 + 0x38;
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_01044d20 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_01044d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1044d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x2a8, 8);
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x294)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x298);
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) && (*((int *)GEN_TOP(((int)this + 0xc))) + 0x2b0U <= *(uint *)this)) {
    if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
    }
    (*(undefined2 *)(gen_frame + 0xc)) = 10;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x290;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = param_2;
    if ((param_1 != ((int *)GEN_TOP(0x0))) &&
       (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_FWD,param_2,((undefined4 *)(gen_frame + 0x0))), (char)uVar4 != '\0')) {
      puVar6 = ((undefined4 *)(gen_frame + 0x0));
      puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
      for (iVar5 = 0xa4; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x290;
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
      *piVar1 = *piVar1 + 0x290;
      psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
      *psVar2 = *psVar2 + 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_01044e30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01044e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1044e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_010447d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_01044e50 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01044e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1044e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_01044e70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044e70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1044e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_01044e90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01044e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1044e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x15))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x15))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x15))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x15))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_01044ef0 */
GEN_LIB GEN_FRAME uint F_01044ef0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_01044f00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1044f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_01044f20 */
GEN_LIB GEN_FRAME uint F_01044f20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_01044f30 */
GEN_LIB GEN_FRAME uint F_01044f30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_01044f70 */
GEN_LIB GEN_FRAME uint F_01044f70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1044f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_01044f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01044f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1044f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_01044fa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01044fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1044fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_SUSPECT(0x1044fa0u, "uStack_1a");
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  short * psVar2;
  uint in_EAX = 0;
  undefined8 * puVar3;
  __time64_t _Var4;
  undefined2 uStack_1a;
  
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) &&
     (in_EAX = *((uint *)GEN_TOP(((int)this + 0xc))), in_EAX + 0x38 <= *(uint *)this)) {
    if (in_EAX == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = (undefined2)param_2;
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    puVar3 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
    *puVar3 = 0x18;
    puVar3[1] = CONCAT26(uStack_1a,0x700000000);
    puVar3[2] = CONCAT44((int)_Var4,param_1);
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x18;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
    *piVar1 = *piVar1 + 0x18;
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_01045090 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01045090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1045090u, gen_a0, gen_a1, 0u, 0u);
  GEN_SUSPECT(0x1045090u, "uStack_1a");
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  short * psVar2;
  uint in_EAX = 0;
  undefined8 * puVar3;
  __time64_t _Var4;
  undefined2 uStack_1a;
  
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) &&
     (in_EAX = *((uint *)GEN_TOP(((int)this + 0xc))), in_EAX + 0x38 <= *(uint *)this)) {
    if (in_EAX == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
    }
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    puVar3 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
    *puVar3 = 0x18;
    puVar3[1] = CONCAT26(uStack_1a,0x800000000);
    puVar3[2] = CONCAT44((int)_Var4,param_1);
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x18;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
    *piVar1 = *piVar1 + 0x18;
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_01045170 */
GEN_LIB GEN_FRAME uint F_01045170(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1045170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_01045180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1045180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_010451a0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_010451a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10451a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x104)));
  uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 0xe0)));
  uVar3 = F_0042a990((int)this + 0x8c GEN_EDX_FWD);
  F_00ba86c0(((undefined *)GEN_TOP((iVar1 + 0x68))) GEN_EDX_ARG,uVar3,uVar2);
  return 1;
}

/* ref: FUN_010451d0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_010451d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x10451d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10c8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10a4)));
  *((int *)GEN_TOP(((int)this + 0x10e4))) = *((int *)GEN_TOP(((int)this + 0x10e4))) + param_3;
  if (iVar3 + param_3 < 0x1001) {
    F_00c46aa0(iVar3 + 0x94 + (int)this,param_2,param_3);
    *((int *)GEN_TOP(((int)this + 0x10a4))) = *((int *)GEN_TOP(((int)this + 0x10a4))) + param_3;
    return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
  }
  iVar4 = 0x1000 - iVar3;
  if (0 < iVar4) {
    F_00c46aa0(iVar3 + 0x94 + (int)this,param_2,iVar4);
    *((int *)GEN_TOP(((int)this + 0x10a4))) = *((int *)GEN_TOP(((int)this + 0x10a4))) + iVar4;
  }
  if (*((int *)GEN_TOP(((int)this + 0x1094))) == 0) {
    uVar1 = param_3;
    if (param_3 < 0x1001) {
      uVar1 = 0x1000;
    }
    *((uint *)GEN_TOP(((int)this + 0x1098))) = uVar1;
    pvVar2 = F_00c51787(uVar1);
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1094))) = pvVar2;
    F_00c46aa0(pvVar2,iVar4 + param_2,param_3 - iVar4);
    *((uint *)GEN_TOP(((int)this + 0x109c))) = param_3 - iVar4;
    return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x1098))) < *((int *)GEN_TOP(((int)this + 0x109c))) + param_3) {
    iVar3 = *((uint *)GEN_TOP(((int)this + 0x1098))) + param_3;
    pvVar2 = F_00c52171(*((int *)GEN_TOP(((int)this + 0x1094))),iVar3);
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1094))) = pvVar2;
    *((int *)GEN_TOP(((int)this + 0x1098))) = iVar3;
  }
  F_00c46aa0(*((int *)GEN_TOP(((int)this + 0x1094))) + *((int *)GEN_TOP(((int)this + 0x109c))),iVar4 + param_2,
             param_3 - iVar4);
  *((int *)GEN_TOP(((int)this + 0x109c))) = *((int *)GEN_TOP(((int)this + 0x109c))) + (param_3 - iVar4);
  return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
}

/* ref: Application::Network::ZoneProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf4 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_01045320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1045320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  if ((*((short *)GEN_TOP((*(int *)(this + 0x54) + 0x5e))) == 0) || (this[0x10a8] != (undefined1)0x0))
  {
    return 1;
  }
  uVar1 = F_00427d90();
  if (((int)(uVar1 >> 0x20) - *(int *)(this + 0x10bc) ==
       (uint)((uint)uVar1 < *(uint *)(this + 0x10b8))) &&
     ((uint)uVar1 - *(uint *)(this + 0x10b8) < (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x54) + 0x5e))))) {
    return 0;
  }
  this[0x10a8] = (undefined1)0x1;
  return 1;
}

/* ref: Application::Network::ZoneProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01045380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1045380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x14);
  uVar2 = 0;
  if (uVar1 != 0) {
    if ((*(int *)(this + 0x90) == 0) || (uVar2 = *(uint *)(this + 0x18), uVar1 <= uVar2)) {
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x18) = 0;
      return uVar1;
    }
    uVar1 = F_00ba7610(this + 0x68 GEN_EDX_FWD,*(int *)(this + 0x10) + uVar2,uVar1 - uVar2);
    if ((int)uVar1 < 1) {
      uVar1 = F_00ba74d0(this + 0x68 GEN_EDX_ARG);
      *(undefined4 *)(this + 0x90) = 0;
      return uVar1;
    }
    *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar1;
    uVar2 = *(uint *)(this + 0x18);
    if (*(uint *)(this + 0x14) <= uVar2) {
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x18) = 0;
    }
    if (this[0x10a8] != (undefined1)0x0) {
      uVar2 = F_00427ed0(this + 0x10b0 GEN_EDX_ARG);
      this[0x10a8] = (undefined1)0x0;
    }
    *(uint *)(this + 0x10e0) = *(int *)(this + 0x10e0) + uVar1;
  }
  return uVar2;
}

/* ref: Application::Network::ZoneProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_01045410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1045410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x10c8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(this + 0x90) != 0) {
    iVar1 = *(int *)(this + 0x10a0);
    if (iVar1 < *(int *)(this + 0x10a4)) {
      uVar2 = *(uint *)(this + 0x30);
      if (uVar2 < 0x20) {
        uVar4 = *(int *)(this + 0x10a4) - iVar1;
        uVar5 = 0x20 - uVar2;
        if (uVar4 < 0x20 - uVar2) {
          uVar5 = uVar4;
        }
        F_00c46aa0(*(int *)(this + 0x2c) + uVar2,this + iVar1 + 0x94,uVar5);
        *(uint *)(this + 0x30) = *(int *)(this + 0x30) + uVar5;
        *(uint *)(this + 0x10a0) = *(int *)(this + 0x10a0) + uVar5;
      }
      iVar1 = *(int *)(this + 0x10a0);
      if ((iVar1 < *(int *)(this + 0x10a4)) && (uVar2 = *(uint *)(this + 0x30), 0x1f < uVar2)) {
        uVar5 = *((uint *)GEN_TOP((*(int *)(this + 0x2c) + 0x10)));
        if (uVar2 < uVar5) {
          uVar4 = *(int *)(this + 0x10a4) - iVar1;
          uVar5 = uVar5 - uVar2;
          if (uVar4 < uVar5) {
            uVar5 = uVar4;
          }
          F_00c46aa0(*(int *)(this + 0x2c) + uVar2,this + iVar1 + 0x94,uVar5);
          *(uint *)(this + 0x30) = *(int *)(this + 0x30) + uVar5;
          *(uint *)(this + 0x10a0) = *(int *)(this + 0x10a0) + uVar5;
        }
      }
      if (*(int *)(this + 0x10a4) <= *(int *)(this + 0x10a0)) {
        iVar1 = *(int *)(this + 0x1094);
        *(undefined4 *)(this + 0x10a4) = 0;
        *(undefined4 *)(this + 0x10a0) = 0;
        if ((iVar1 != 0) && (uVar2 = *(uint *)(this + 0x109c), 0 < (int)uVar2)) {
          if (uVar2 < 0x1001) {
            F_00c46aa0(this + 0x94,iVar1,uVar2);
            uVar3 = *(undefined4 *)(this + 0x109c);
            *(undefined4 *)(this + 0x109c) = 0;
            *(undefined4 *)(this + 0x10a4) = uVar3;
            return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
          }
          F_00c46aa0(this + 0x94,iVar1,0x1000);
          *(undefined4 *)(this + 0x10a4) = 0x1000;
          F_00c46e20(*(int *)(this + 0x1094),*(int *)(this + 0x1094) + 0x1000,
                     *(int *)(this + 0x109c) - 0x1000);
          *(int *)(this + 0x109c) = *(int *)(this + 0x109c) - 0x1000;
        }
      }
    }
  }
  return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
}

/* ref: FUN_010455a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_010455a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10455a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10c8));
  F_00bad720(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10c8)));
}

/* ref: FUN_010455d0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_010455d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x10455d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  byte bVar1;
  
  if (*((int *)GEN_TOP((param_1 + 0x80))) != 0) {
    bVar1 = F_010449e0(param_2 + 2 GEN_EDX_FWD,*((int *)GEN_TOP((param_1 + 0x80))),param_3,param_5,param_6);
    if (bVar1 != 0) goto LAB_01045615;
  }
  bVar1 = F_010448b0(param_2 + 2 GEN_EDX_ARG,param_3,param_5,param_6);
LAB_01045615: ;
  if ((param_4 != '\0') && (param_2[5] != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG,param_1);
  }
  return bVar1;
}

/* ref: FUN_01045680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045680(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1045680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_010456a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_010456a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x10456a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_010456f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010456f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10456f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_01045750 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01045750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1045750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_010447d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_01045760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_size32 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1045760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_1 = (gen_size32)gen_a1;)
  undefined * pvVar1;
  
  *(gen_size32 *)this = param_1;
  pvVar1 = F_00c51787(param_1);
  *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = pvVar1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = pvVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))),0,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)this;
}

/* ref: FUN_010457a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010457a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(int * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x10457a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a5;)
  uint * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  uint * puVar7;
  
  *(undefined2 *)(param_2 + 5) = 0;
  if ((*((uint *)GEN_TOP(((int)this + 0xc))) < 0x20) ||
     (*((uint *)GEN_TOP(((int)this + 0xc))) < *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))))) {
    return 0;
  }
  F_01044b50(this GEN_EDX_FWD,param_3,param_4);
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((iVar2 + 0x10)));
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x20;
  }
  iVar5 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar5 + 0x10U <= *((uint *)GEN_TOP(((int)this + 0xc)))) {
    puVar1 = param_2 + 2;
    *(undefined8 *)puVar1 = *((undefined8 *)GEN_TOP((iVar5 + iVar2)));
    *(undefined8 *)(param_2 + 4) = *((undefined8 *)GEN_TOP((iVar5 + 8 + iVar2)));
    uVar4 = *puVar1;
    iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
    if (uVar4 + iVar2 <= *((uint *)GEN_TOP(((int)this + 0xc)))) {
      switch((unsigned int)(uintptr_t)((short)param_2[5])) {
      case 1: ;
        if (uVar4 == 0x38) {
          puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 2: ;
        if (uVar4 == 0x38) {
          puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 3: ;
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x40))))(param_1 GEN_EDX_ARG)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0xfe8,0);
        if (uVar4 == 0) {
          return 0;
        }
        *((uint *)GEN_TOP((uVar4 + 0x14))) = param_2[3];
        *((uint *)GEN_TOP((uVar4 + 0x18))) = param_2[4];
        F_00c46aa0(*((undefined4 *)GEN_TOP((uVar4 + 0x24))),
                   *((int *)GEN_TOP(((int)this + 8))) + 0x10 + *((int *)GEN_TOP(((int)this + 0x10))),*puVar1 - 0x10);
        *((uint *)GEN_TOP((uVar4 + 0x20))) = *puVar1 - 0x10;
        if (param_5 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_5 + 0x1c))))
                    (param_5 GEN_EDX_ARG,param_2[3],*((undefined4 *)GEN_TOP((uVar4 + 0x24))),*puVar1 - 0x10);
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *param_2 = uVar4;
        if (*((int *)GEN_TOP(((int)this + 0x10))) == *((int *)GEN_TOP(((int)this + 0xc)))) {
          *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
          *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        }
        return uVar4;
      default: ;
        *((uint *)GEN_TOP(((int)this + 0x10))) = uVar4 + iVar2;
        break;
      case 7: ;
        if (uVar4 == 0x18) {
          iVar5 = *((int *)GEN_TOP(((int)this + 8)));
          *(undefined8 *)puVar1 = *((undefined8 *)GEN_TOP((iVar5 + iVar2)));
          *(undefined8 *)(param_2 + 4) = *((undefined8 *)GEN_TOP((iVar5 + 8 + iVar2)));
          *(undefined8 *)(param_2 + 6) = *((undefined8 *)GEN_TOP((iVar5 + 0x10 + iVar2)));
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        if (*((int *)GEN_TOP(((int)this + 0x10))) != *((int *)GEN_TOP(((int)this + 0xc)))) {
          return 0;
        }
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 8: ;
        if (uVar4 == 0x18) {
          iVar5 = *((int *)GEN_TOP(((int)this + 8)));
          *(undefined8 *)puVar1 = *((undefined8 *)GEN_TOP((iVar5 + iVar2)));
          *(undefined8 *)(param_2 + 4) = *((undefined8 *)GEN_TOP((iVar5 + 8 + iVar2)));
          *(undefined8 *)(param_2 + 6) = *((undefined8 *)GEN_TOP((iVar5 + 0x10 + iVar2)));
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        if (*((int *)GEN_TOP(((int)this + 0x10))) != *((int *)GEN_TOP(((int)this + 0xc)))) {
          return 0;
        }
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 9: ;
        if (uVar4 == 0x278) {
          puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0x9e; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 10: ;
        if (uVar4 == 0x290) {
          puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0xa4; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      }
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return 0;
}

/* ref: FUN_01045a70 */
GEN_LIB GEN_FRAME uint F_01045a70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1045a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_01045a90 */
GEN_LIB GEN_FRAME undefined4 * GEN_THISCALL F_01045a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1045a90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01045ac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1045ac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_01045ae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045ae0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1045ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_01045af0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01045af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1045af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_01045b30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01045b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1045b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_01044e90(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_01045b40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1045b40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_01045b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1045b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  bool bVar3;
  undefined4 * puVar4;
  uint uVar5;
  __time64_t _Var6;
  
  piVar2 = ((int *)GEN_TOP(param_1[1]));
  bVar3 = false;
  puVar4 = param_1;
  if (piVar2[5] == 0) {
    _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    LOCK();
    iVar1 = piVar2[0x12];
    piVar2[0x12] = 0;
    UNLOCK();
    if (iVar1 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(((int)_Var6 - piVar2[0x10])));
      if (puVar4 <= ((undefined4 *)GEN_TOP(((uint)piVar2[0x11] >> 1)))) goto LAB_01045bc0;
      puVar4 = ((undefined4 *)GEN_TOP(F_01044fa0(piVar2 + 2 GEN_EDX_ARG,*param_1,0)));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(F_01045090(piVar2 + 2 GEN_EDX_ARG,*param_1)));
    }
    bVar3 = true;
    piVar2[0x10] = (int)_Var6;
  }
LAB_01045bc0: ;
  if (piVar2[5] != 0) {
    if ((piVar2[6] == 0) && (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG), (char)uVar5 == '\0')) {
      return uVar5;
    }
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,*(undefined4 *)this)));
    if (bVar3) {
      piVar2[5] = 0;
      piVar2[6] = 0;
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_01045c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1045c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_01045c20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1045c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_01045c70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1045c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_01045c90 */
GEN_LIB GEN_FRAME uint F_01045c90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1045c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x24)));
  *((uint *)GEN_TOP((uVar1 + 0x90))) = uVar1 + 0x68;
  return uVar1;
}

/* ref: FUN_01045cb0 */
GEN_LIB GEN_FRAME unsigned int F_01045cb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1045cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_010451d0(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x24))) GEN_EDX_ARG,param_1,param_2,param_3);
  return;
}

/* ref: FUN_01045cd0 */
GEN_LIB GEN_FRAME uint F_01045cd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1045cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x24))) + 0x58)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 0x88))) = 3;
  }
  return uVar1;
}

/* ref: FUN_01045cf0 */
GEN_LIB GEN_FRAME byte F_01045cf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1045cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x24)));
  *((undefined4 *)GEN_TOP((iVar1 + 0x90))) = 0;
  iVar1 = *((int *)GEN_TOP((iVar1 + 0x58)));
  if ((iVar1 != 0) && (*((int *)GEN_TOP((iVar1 + 0x88))) != 3)) {
    *((undefined4 *)GEN_TOP((iVar1 + 0x88))) = 4;
  }
  return 0;
}

/* ref: FUN_01045d30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01045d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1045d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x12b1a3c));
  F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))));
  F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))));
  return extraout_EAX;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1045d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = 0;
  }
  return 0;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application::vf4 */
GEN_LIB GEN_NOFRAME byte F_01045d70(void)
{
  GEN_ENTER(0x1045d70u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_01045d80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_size32 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1045d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_1 = (gen_size32)gen_a1;)
  undefined * pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x12b1a3c));
  *((gen_size32 *)GEN_TOP(((int)this + 8))) = param_1;
  pvVar1 = F_00c51787(param_1);
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = pvVar1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = pvVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 0;
  F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))),0,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((gen_size32 *)GEN_TOP(((int)this + 0x24))) = param_1;
  pvVar1 = F_00c51787(param_1);
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) = pvVar1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c))) = pvVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3c))) = 0;
  F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))),0,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x48))))), (long)(0));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0x2d;
  return (uint)this;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045e00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1045e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x12b1a3c));
  F_00c4c68f(((undefined *)GEN_TOP(param_1[10])));
  F_00c4c68f(((undefined *)GEN_TOP(param_1[3])));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_01045e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045e40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1045e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_01045e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1045e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_01045eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1045eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_010447d0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_01045ed0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_01045ed0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1045ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = _InterlockedExchange((volatile long *)((((uint *)GEN_TOP((param_2 + 0x48))))), (long)(1));
  return uVar1;
}

/* ref: FUN_01045f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1045f10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_01045f50 */
GEN_LIB GEN_FRAME uint F_01045f50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1045f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_01045f60 */
GEN_LIB GEN_FRAME uint F_01045f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1045f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  if ((*(int * PTR32 *)&gen_args[1]) != (*(int * PTR32 *)&gen_args[2])) {
    do {
      F_01045b60(&(*(undefined4 *)&gen_args[3]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]) + 3);
      if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          (*(int * PTR32 *)&gen_args[1]) = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
            (*(int * PTR32 *)&gen_args[1]) = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] + 0x15)));
          piVar3 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
          piVar2 = (*(int * PTR32 *)&gen_args[1]);
          while (((*(int * PTR32 *)&gen_args[1]) = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2]))))) {
            cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] + 0x15)));
            piVar3 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
            piVar2 = (*(int * PTR32 *)&gen_args[1]);
          }
        }
      }
    } while ((*(int * PTR32 *)&gen_args[1]) != (*(int * PTR32 *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[3]);
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[3]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_01045ff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01045ff0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x1045ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0x1ffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00406ad0(param_5);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x14)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x14))) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_010461ed: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x14))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_010461ed;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_01046220 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01046220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1046220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_01044e90(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_01046230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01046230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1046230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_01046250 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_01046250(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1046250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_01046270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01046270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1046270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  iVar1 = param_3;
  if (param_3 == 0) {
    iVar1 = 0x4000;
  }
  F_01045d80(this GEN_EDX_FWD,iVar1);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x12b1a58));
  *((int *)GEN_TOP(((int)this + 0x54))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2;
  F_00ba7100((int)this + 0x5c GEN_EDX_ARG);
  F_00ba85b0((int)this + 0x68 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x58))));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[1])REFP(0x11574d8));
  *((undefined4 *)GEN_TOP(((int)this + 0x1094))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1098))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x109c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x10a8))) = 1;
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0x10b0))) GEN_EDX_ARG);
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10c8));
  *((undefined4 *)GEN_TOP(((int)this + 0x10e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10e4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10a4))) = 0;
  F_00ba8040();
  gen_imp_InterlockedExchange(((LONG *)GEN_TOP(((int)this + 0x8c))),(LONG)this);
  F_00baba80(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG);
  F_00ba78e0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0x1045c90)));
  F_00ba7890(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0x1045cb0)));
  F_00ba7b00(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0x1045cf0)));
  F_00ba7a40(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0x1045cd0)),0x78);
  F_00ba89b0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,0x4000);
  F_00ba9ae0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,(int)this + 0x5c);
  _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *((int *)GEN_TOP(((int)this + 0x10b0))) = (int)_Var2;
  uVar3 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x10b8))) = uVar3;
  uVar3 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)this + 0x10c0))) = uVar3;
  F_00ba7aa0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0x1045cd0)),*((undefined4 *)GEN_TOP((param_1 + 0x70))));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = *((undefined4 *)GEN_TOP((param_1 + 0x74)));
  return (uint)this;
}

/* ref: Application::Network::ZoneProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010463d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10463d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = 0x4000;
  }
  return in_ecx + 0x10e8;
}

/* ref: FUN_010463f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_010463f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10463f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x12b1a58));
  F_00ba74d0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_FWD);
  F_00baa650(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1094))) != ((undefined *)GEN_TOP(0x0))) {
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1094))));
    *((undefined4 *)GEN_TOP(((int)this + 0x1094))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x58))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x58))) + 0x104))) = 0;
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10c8));
  F_00ba85e0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG);
  F_00bac250(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x12b1a3c));
  F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))));
  F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))));
  return extraout_EAX;
}

/* ref: FUN_01046480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01046480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1046480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_010464a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010464a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10464a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_010464b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010464b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10464b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_01046510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01046510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1046510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_010447d0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_0104662a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_01044790(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_01044770(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0104662a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_010456f0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_01044700(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_010456f0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_010466e8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_01044700(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_010466e8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_010456f0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_01044700(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_01046760 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_01046760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1046760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_01046760(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_010467a0 */
GEN_LIB GEN_FRAME uint F_010467a0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10467a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  F_01045f60(param_1,param_2,param_3,param_4);
  return param_1;
}

/* ref: FUN_010467d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010467d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10467d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
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
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_01046840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01046840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1046840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (uint)puVar2[3];
      }
      else {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (uint)puVar2[3];
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_01045ff0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_01044e90(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_01045ff0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_01046920 */
GEN_LIB GEN_FRAME unsigned int F_01046920(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1046920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_01046940 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_01046940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1046940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x104)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  this_00 = ((undefined *)GEN_TOP(F_004069f0(0x50e8)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_01046270(this_00 GEN_EDX_ARG,(int)this + 0x8c,this,*((undefined4 *)GEN_TOP(((int)this + 0x110))));
  }
  *((uint *)GEN_TOP(((int)this + 0x104))) = uVar2;
  uVar3 = (uint)*((ushort *)GEN_TOP(((int)this + 0xe0)));
  uVar4 = F_0042a990((int)this + 0x8c GEN_EDX_ARG);
  F_00ba86c0(((undefined *)GEN_TOP((uVar2 + 0x68))) GEN_EDX_ARG,uVar4,uVar3);
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  return 1;
}

/* ref: Application::Network::ZoneProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010469d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10469d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_010463f0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_01046a00 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_01046a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1046a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  F_01045f60(&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))),this)
  ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68)));
}

/* ref: FUN_01046a50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01046a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1046a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_01046760(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x15)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_01046aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01046aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1046aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_1;
      puVar1[4] = param_1[1];
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_01046b00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01046b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1046b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0042cc20(this GEN_EDX_FWD,((char *)REFP(0x1157514)),REFG(undefined4, 0x108cc50));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 5000;
  *((undefined2 *)GEN_TOP(((int)this + 0x54))) = 0xbff5;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  return (uint)this;
}

/* ref: FUN_01046b40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01046b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1046b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) && (param_3 == *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    F_01046a50(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_01046510(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_01046be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01046be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1046be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_2;
      puVar1[4] = param_2[1];
    }
    F_01046840(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_01046c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01046c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1046c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    F_0042ccf0(this GEN_EDX_FWD,param_1);
    *((undefined2 *)GEN_TOP(((int)this + 0x54))) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x54)));
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x58)));
    *((undefined2 *)GEN_TOP(((int)this + 0x5c))) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x5c)));
    *((undefined2 *)GEN_TOP(((int)this + 0x5e))) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x5e)));
    F_00c2eb30(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,
                 *((int *)GEN_TOP(((int)param_1 + 100))) - *((int *)GEN_TOP(((int)param_1 + 0x60))));
    F_00c46aa0(*((undefined4 *)GEN_TOP(((int)this + 0x60))),*((int *)GEN_TOP(((int)param_1 + 0x60))),
               *((int *)GEN_TOP(((int)param_1 + 100))) - *((int *)GEN_TOP(((int)param_1 + 0x60))));
    *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x70)));
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x74)));
  }
  return (uint)this;
}

/* ref: FUN_01046cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01046cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1046cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_0042b630(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  F_01046c60(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_01046d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01046d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1046d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_01046b40(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_01046d20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_01046d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1046d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 * puVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = param_1;
      puVar1[4] = param_2;
    }
    F_01046840(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar1,0);
    return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68)));
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_01046da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01046da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1046da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_01046b40(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_01046dd0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_01046dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x1046dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  __time64_t _Var6;
  
  iVar2 = (int)(*(LPCRITICAL_SECTION *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)(*(LPCRITICAL_SECTION *)&gen_args[1]) + 4))) != 0) {
    return;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,(*(undefined4 *)&gen_args[2]));
  if (uVar4 != 0) {
    *((uint *)GEN_TOP((iVar2 + 4))) = uVar4;
    if ((*((int *)GEN_TOP(((int)this + 0x80))) != 0) && ((*(int *)&gen_args[3]) != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x80))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,uVar4,(*(int *)&gen_args[3]));
    }
    (*(LPCRITICAL_SECTION *)&gen_args[1]) = (LPCRITICAL_SECTION)((int)this + 0x68);
    gen_imp_EnterCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[1]));
    piVar5 = ((int *)GEN_TOP(F_010467d0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[0]))));
    if (*piVar5 != *((int *)GEN_TOP(((int)this + 0x10)))) {
      F_01046510(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[2]),*piVar5);
      uVar1 = (*(undefined4 *)&gen_args[0]);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
      if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x80))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,uVar1);
      }
    }
    F_01046d20(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 4))),iVar2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 4))));
    if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x10))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 4))));
    }
    if ((*((int *)GEN_TOP(((int)this + 0x80))) == 0) ||
       (bVar3 = F_01044d20(((undefined *)GEN_TOP((iVar2 + 8))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x80))),
                             *((undefined4 *)GEN_TOP((iVar2 + 4))),(*(int *)&gen_args[3])), bVar3 == 0)) {
      F_01044c60(((undefined *)GEN_TOP((iVar2 + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 4))));
    }
    _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *((int *)GEN_TOP((iVar2 + 0x40))) = (int)_Var6;
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[1]));
    return;
  }
  return;
}

/* ref: FUN_01046ef0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_01046ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1046ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  iVar3 = (*(int *)&gen_args[1]);
  if ((*((int *)GEN_TOP(((*(int *)&gen_args[1]) + 4))) == 0) && (*((int *)GEN_TOP(((*(int *)&gen_args[2]) + 0x10))) != 0)) {
    if ((*(int *)&gen_args[0]) != 0) {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
      piVar4 = ((int *)GEN_TOP(F_010467d0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),&(*(int *)&gen_args[0]))));
      if (*piVar4 != *((int *)GEN_TOP(((int)this + 0x10)))) {
        F_01046510(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),*piVar4);
        iVar2 = (*(int *)&gen_args[0]);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,(*(int *)&gen_args[0]));
        if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x80))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,iVar2);
        }
      }
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
    }
    uVar1 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[2]) + 0x10)));
    *((undefined4 *)GEN_TOP((iVar3 + 4))) = uVar1;
    F_01046d20(this GEN_EDX_ARG,uVar1,iVar3);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 4))));
    if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xc))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 4))));
    }
  }
  return;
}

/* ref: FUN_01046fb0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_01046fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1046fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x2fc, 4);
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x2e8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2ec);
  (*(uint *)(gen_frame + 0xc)) = param_1;
  ((undefined4 *)(gen_frame + 0x14))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  if (param_3[0xd] == 0) {
    (*(bool *)(gen_frame + 0x13)) = param_3[0xc] == 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 8))))(param_3 GEN_EDX_FWD,this);
    if (((*(bool *)(gen_frame + 0x13)) != false) && (param_3[0xc] != 0)) {
      uVar1 = *((undefined4 *)GEN_TOP((param_3[0xb] + 0xc)));
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_3[0xb] + 8)));
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      F_00e29e50(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x14))))(param_3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = *((undefined4 *)GEN_TOP((param_3[0xb] + 0xc)));
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_3[0xb] + 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  uVar3 = F_010457a0(param_3 + 9 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),((undefined4 *)(gen_frame + 0x14)),uVar3,(*(undefined4 *)(gen_frame + 0x0)),
                       *((undefined4 *)GEN_TOP(((int)this + 0x80))));
  if (uVar3 == 0) {
    switch((unsigned int)(uintptr_t)((*(undefined2 *)(gen_frame + 0x28)))) {
    case 1: ;
      F_01046dd0(this GEN_EDX_ARG,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x1c)),0);
      bVar2 = 1;
      break;
    case 2: ;
      F_01046ef0(this GEN_EDX_ARG,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x1c)));
      bVar2 = 1;
      break;
    default: ;
      bVar2 = 0;
      break;
    case 7: ;
      LOCK();
      param_3[0x12] = 1;
      UNLOCK();
      bVar2 = 1;
      break;
    case 8: ;
      goto switchD_010470d6_caseD_8;
    case 9: ;
      (*(uint *)(gen_frame + 0xc)) = 0;
      if (*((int *)GEN_TOP(((int)this + 0x80))) == 0) {
LAB_01047132: ;
        F_00e29270(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2ac)));
      }
      else {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x80))) + 8))))
                          (*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,param_2,&(*(undefined4 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x2ac)));
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        if (uVar3 == 0) goto LAB_01047132;
      }
      F_01046dd0(this GEN_EDX_ARG,param_2,param_3,((undefined1 *)(gen_frame + 0x2ac)),(*(uint *)(gen_frame + 0xc)));
      bVar2 = 1;
      break;
    case 10: ;
      if ((*((int *)GEN_TOP(((int)this + 0x80))) == 0) ||
         (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x80))) + 0x10))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,param_2,&(*(undefined4 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x2ac))),
         (char)uVar3 == '\0')) {
        F_00e29330(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2ac)));
      }
      F_01046ef0(this GEN_EDX_ARG,param_2,param_3,((undefined1 *)(gen_frame + 0x2ac)));
      bVar2 = 1;
    }
  }
  else {
    *((int *)GEN_TOP(((int)this + 0x2c))) = *((int *)GEN_TOP(((int)this + 0x2c))) + 1;
    *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + 0xc))) = uVar3;
    *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + 0x10))) = (*(undefined4 *)(gen_frame + 0x4));
    *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + 0x14))) = (*(undefined4 *)(gen_frame + 0x8));
switchD_010470d6_caseD_8: ;
    bVar2 = 1;
  }
  return bVar2;
}

/* ref: FUN_01047210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01047210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1047210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_01046b40(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_01047240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01047240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1047240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Application::Network::ZoneProtoChannel::ServiceConsumerConnectionManager::vf1 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_010472a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10472a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  int iVar1;
  int * piVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  __time64_t _Var6;
  longlong lVar7;
  
  iVar5 = *(int *)(this + 0x108);
  iVar1 = *(int *)(this + 0x10c);
  (*(longlong *)(gen_frame + 0x18)) = 0;
  if (iVar5 != 0 || iVar1 != 0) {
    _Var6 = F_00c4b7c2(&(*(longlong *)(gen_frame + 0x18)));
    iVar5 = (int)((ulonglong)_Var6 >> 0x20);
    if ((iVar5 < *(int *)(this + 0x10c)) ||
       ((iVar5 <= *(int *)(this + 0x10c) && ((uint)_Var6 < *(uint *)(this + 0x108)))))
    goto LAB_0104738f;
  }
  piVar2 = *(int * PTR32 *)(this + 0x104);
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || (piVar2[1] != 0)) goto LAB_0104738f;
  if (*(int *)(this + 0x80) == 0) {
LAB_01047324: ;
    bVar4 = F_010448b0(piVar2 + 2 GEN_EDX_ARG,0,1,this + 0xec);
  }
  else {
    bVar4 = F_010449e0(piVar2 + 2 GEN_EDX_ARG,*(int *)(this + 0x80),0,1,this + 0xec);
    if (bVar4 == 0) goto LAB_01047324;
  }
  if (piVar2[5] != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,this);
  }
  if (bVar4 != 0) {
    lVar7 = (*(longlong *)(gen_frame + 0x18));
    if ((int)(*(longlong *)(gen_frame + 0x18)) == 0 && (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 4)) == 0) {
      lVar7 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    }
    *(longlong *)(this + 0x108) = lVar7 + (int)(*(ushort *)(this + 0xe8) / 1000);
  }
LAB_0104738f: ;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x68));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x50));
  F_01045f60(((undefined1 *)(gen_frame + 0x20)),**(undefined4 * PTR32 *)(this + 0x10),*(undefined4 * PTR32 *)(this + 0x10),this);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x50));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x68));
  if ((*(int *)(this + 0x104) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x104) + 4))) == 0)) {
    F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar3 = *(undefined4 *)(this + 0x104);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    bVar4 = F_01046fb0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,uVar3);
    if ((bVar4 != 0) && ((*(int *)(gen_frame + 0xc)) != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    F_01050b70();
  }
  iVar5 = *(int *)(this + 0x104);
  if (iVar5 != 0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar5 + 0x10c8));
    F_00bad720(((undefined *)GEN_TOP((iVar5 + 0x5c))) GEN_EDX_ARG);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar5 + 0x10c8));
  }
  return 1;
}

/* ref: FUN_01047460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01047460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1047460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b1a74));
  gen_imp_DeleteCriticalSection((int)this + 0x68);
  gen_imp_DeleteCriticalSection((int)this + 0x50);
  F_01046b40(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  return uVar1;
}

/* ref: ConnectionManagerTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_010474b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10474b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: ConnectionManagerTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf3 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_010474c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10474c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_010474d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010474d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10474d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b1a74));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) = *((int *)GEN_TOP(((int)this + 0x10)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 8))) = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x15))) = 1;
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
    gen_imp_InitializeCriticalSection((int)this + 0x50);
    gen_imp_InitializeCriticalSection((int)this + 0x68);
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

