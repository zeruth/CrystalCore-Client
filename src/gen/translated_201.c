#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Application::Network::WorkDefinitions::FindContentInfo::vf15 */
byte F_00fb8bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb8bf0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_00fb8c1b;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00fb8c9d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,uVar5 - 2,0xffffffff);
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00fb8c9d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
    F_00e69490(param_1,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,iVar10);
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
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
LAB_00fb8c1b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaPc::vf15 */
byte F_00fb8de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb8de0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_00fb8e0b;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00fb8e8d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,uVar5 - 2,0xffffffff);
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00fb8e8d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
    F_00e69490(param_1,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,iVar10);
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
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
LAB_00fb8e0b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::PcTempWork::vf15 */
byte F_00fb8fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb8fd0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_00fb8ffb;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00fb907d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,uVar5 - 2,0xffffffff);
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00fb907d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
    F_00e69490(param_1,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,iVar10);
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
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
LAB_00fb8ffb: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: FUN_00fb91c0 */
uint F_00fb91c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb91c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x40 + 0x3b0 + in_ecx;
}

/* ref: FUN_00fb91e0 */
uint F_00fb91e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb91e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x6f0 + param_2 * 0x14;
}

/* ref: FUN_00fb9200 */
uint F_00fb9200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9200u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 + 0x31) * 0x2c + in_ecx;
}

/* ref: FUN_00fb9220 */
uint F_00fb9220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9220u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0xffc + param_2 * 0x18;
}

/* ref: FUN_00fb9240 */
uint F_00fb9240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9240u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x111c + param_2 * 0x10;
}

/* ref: FUN_00fb9260 */
uint F_00fb9260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + 0x1788 + in_ecx;
}

/* ref: FUN_00fb9280 */
uint F_00fb9280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9280u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x1890 + param_2 * 8;
}

/* ref: FUN_00fb92a0 */
uint F_00fb92a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb92a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + 0x1940 + in_ecx;
}

/* ref: FUN_00fb92c0 */
uint F_00fb92c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb92c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x2134 + param_2 * 0xc;
}

/* ref: Application::Network::WorkDefinitions::LastAction_TypeInfo::vf5 */
uint F_00fb93c0(void)
{
  GEN_ENTER(0xfb93c0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Application::Network::WorkDefinitions::LastAction::vf1 */
uint F_00fb93d0(void)
{
  GEN_ENTER(0xfb93d0u, 0u, 0u, 0u, 0u);
  return 0x136aee0;
}

/* ref: Application::Network::WorkDefinitions::ThinkSubState_TypeInfo::vf5 */
uint F_00fb93e0(void)
{
  GEN_ENTER(0xfb93e0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Application::Network::WorkDefinitions::ThinkSubState::vf1 */
uint F_00fb93f0(void)
{
  GEN_ENTER(0xfb93f0u, 0u, 0u, 0u, 0u);
  return 0x136aee4;
}

/* ref: Application::Network::WorkDefinitions::GatheringHistoryCountWork_TypeInfo::vf5 */
uint F_00fb9400(void)
{
  GEN_ENTER(0xfb9400u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Application::Network::WorkDefinitions::GatheringHistoryCountWork::vf1 */
uint F_00fb9410(void)
{
  GEN_ENTER(0xfb9410u, 0u, 0u, 0u, 0u);
  return 0x136aee8;
}

/* ref: Application::Network::WorkDefinitions::FindContentInfo_TypeInfo::vf5 */
uint F_00fb9420(void)
{
  GEN_ENTER(0xfb9420u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Application::Network::WorkDefinitions::FindContentInfo::vf1 */
uint F_00fb9430(void)
{
  GEN_ENTER(0xfb9430u, 0u, 0u, 0u, 0u);
  return 0x136aeec;
}

/* ref: Application::Network::WorkDefinitions::CharaPc_TypeInfo::vf5 */
uint F_00fb9440(void)
{
  GEN_ENTER(0xfb9440u, 0u, 0u, 0u, 0u);
  return 0xa2;
}

/* ref: Application::Network::WorkDefinitions::CharaPc::vf1 */
uint F_00fb9450(void)
{
  GEN_ENTER(0xfb9450u, 0u, 0u, 0u, 0u);
  return 0x136aef0;
}

/* ref: Application::Network::WorkDefinitions::PcTempWork_TypeInfo::vf5 */
uint F_00fb9460(void)
{
  GEN_ENTER(0xfb9460u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Application::Network::WorkDefinitions::PcTempWork::vf1 */
uint F_00fb9470(void)
{
  GEN_ENTER(0xfb9470u, 0u, 0u, 0u, 0u);
  return 0x136aef4;
}

/* ref: FUN_00fb9480 */
uint F_00fb9480(unsigned int gen_a0)
{
  GEN_ENTER(0xfb9480u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00fb94b0 */
uint F_00fb94b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb94b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00fb9720((undefined *)((int)this + -0x10),param_1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Combo_TypeInfo::vf5 */
uint F_00fb94c0(void)
{
  GEN_ENTER(0xfb94c0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Application::Network::WorkDefinitions::Combo_TypeInfo::vf0 */
uint F_00fb94d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb94d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Combo::vf1 */
uint F_00fb9500(void)
{
  GEN_ENTER(0xfb9500u, 0u, 0u, 0u, 0u);
  return 0x136aedc;
}

/* ref: Application::Network::WorkDefinitions::Combo::vf0 */
uint F_00fb9510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::LastAction_TypeInfo::vf0 */
uint F_00fb9540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::LastAction::vf0 */
uint F_00fb9570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ThinkSubState_TypeInfo::vf0 */
uint F_00fb95a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb95a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ThinkSubState::vf0 */
uint F_00fb95d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb95d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::GatheringHistoryCountWork_TypeInfo::vf0 */
uint F_00fb9600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::GatheringHistoryCountWork::vf0 */
uint F_00fb9630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::FindContentInfo_TypeInfo::vf0 */
uint F_00fb9660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::FindContentInfo::vf0 */
uint F_00fb9690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaPc_TypeInfo::vf0 */
uint F_00fb96c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb96c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaPc::vf0 */
uint F_00fb96f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb96f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00f6db40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ManagedCharaPc::vf0 */
uint F_00fb9720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x12ae354));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[27])REFP(0x12ae2e4));
  F_00f6db40(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x12a9294));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::PcTempWork_TypeInfo::vf0 */
uint F_00fb9760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::PcTempWork::vf0 */
uint F_00fb9790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00fb97c0 */
uint F_00fb97c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfb97c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)((int)this + 0xc);
  *(int *)((int)this + 0xc) = param_1 + -0x10;
  uVar1 = (param_2 + -1) * -0x22b0 - 0x22c0;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + uVar1;
  return uVar1;
}

/* ref: FUN_00fb97f0 */
uint F_00fb97f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfb97f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x22c0) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x22b0 + -0x22c0;
  return uVar1;
}

/* ref: FUN_00fb9830 */
uint F_00fb9830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  ((code *)*(gen_code32 *)*param_1)(param_1,0);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x22c0) + (int)param_1)));
  param_1[-2] = 1;
  param_1[-3] = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + -0x22c0;
  *(undefined4 * PTR32 *)(uVar1 + 0xc) = param_1 + -4;
  return uVar1;
}

/* ref: FUN_00fb9880 */
uint F_00fb9880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x100 + 4 + in_ecx;
}

/* ref: FUN_00fb98a0 */
uint F_00fb98a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb98a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x100 + 0x304 + in_ecx;
}

/* ref: FUN_00fb98e0 */
unsigned int F_00fb98e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfb98e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar8 = 0;
  pbVar2 = (byte *)((int)this + 4);
  pbVar4 = param_1;
  pbVar6 = pbVar2;
LAB_00fb9906: ;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < *pbVar4;
    if (bVar1 == *pbVar4) {
      if (bVar1 != 0) {
        bVar1 = pbVar2[1];
        bVar9 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00fb9926;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
        if (bVar1 != 0) goto LAB_00fb9906;
      }
      iVar3 = 0;
    }
    else {
LAB_00fb9926: ;
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
    }
    if ((iVar3 == 0) || (*pbVar6 == 0)) {
      if (2 < iVar8) {
        return 0;
      }
      uVar7 = 0;
      break;
    }
    iVar8 = iVar8 + 1;
    pbVar2 = pbVar6 + 0x100;
    pbVar4 = param_1;
    pbVar6 = pbVar2;
    if (2 < iVar8) {
      return 0;
    }
  } while( true );
  while( true ) {
    iVar3 = F_00c52d33((int)*(char *)(uVar7 + param_2));
    iVar5 = iVar8 * 0x100 + uVar7;
    uVar7 = uVar7 + 1;
    *(char *)(iVar5 + 0x304 + (int)this) = (char)iVar3;
    if (0xff < uVar7) break;
    if (*(char *)(uVar7 + param_2) == '\0') {
      *(undefined1 *)(iVar8 * 0x100 + uVar7 + 0x304 + (int)this) = *(undefined1 *)(uVar7 + param_2);
      break;
    }
  }
  F_00c4d9ef(iVar8 * 0x100 + 4 + (int)this,0x100,param_1,0xffffffff);
  return 0;
}

/* ref: FUN_00fb99c0 */
uint F_00fb99c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb99c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  bool bVar7;
  
  pbVar2 = (byte *)((int)this + 4);
  iVar5 = 0;
  pbVar4 = param_1;
  pbVar6 = pbVar2;
LAB_00fb99d6: ;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar4;
    if (bVar1 == *pbVar4) {
      if (bVar1 != 0) {
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00fb99f6;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
        if (bVar1 != 0) goto LAB_00fb99d6;
      }
      iVar3 = 0;
    }
    else {
LAB_00fb99f6: ;
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (iVar3 == 0) {
      return iVar5 * 0x100 + 0x304 + (int)this;
    }
    iVar5 = iVar5 + 1;
    pbVar2 = pbVar6 + 0x100;
    pbVar4 = param_1;
    pbVar6 = pbVar2;
    if (2 < iVar5) {
      return (uint)REFG(undefined * PTR32, 0x136b34c);
    }
  } while( true );
}

/* ref: FUN_00fb9a60 */
double F_00fb9a60(unsigned int gen_a0)
{
  GEN_ENTER(0xfb9a60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  double dVar1;
  
  dVar1 = F_00c52474(param_1,0);
  return dVar1;
}

/* ref: FUN_00fb9a80 */
uint F_00fb9a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfb9a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = F_00c51da0(param_1,(int)(char)param_2);
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = 0;
  while( true ) {
    while( true ) {
      cVar1 = *(char *)(uVar2 + 1);
      uVar2 = uVar2 + 1;
      if (cVar1 == (char)param_3) break;
      if (cVar1 == (char)param_2) {
        iVar3 = iVar3 + 1;
      }
      else if (cVar1 == '\0') {
        return 0;
      }
    }
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
  }
  return uVar2;
}

/* ref: FUN_00fb9ad0 */
uint F_00fb9ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9ad0u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char cVar2;
  char * pcVar3;
  int iVar4;
  char * pcVar5;
  char * _Str1;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    return (uint)param_1;
  }
  pcVar3 = param_2 + 1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  _Str1 = param_1;
  do {
    do {
      pcVar5 = _Str1;
      _Str1 = pcVar5 + 1;
      if (*pcVar5 == '\0') {
        return 0;
      }
    } while (*pcVar5 != cVar1);
    iVar4 = F_00c4b813(_Str1,param_2 + 1,(int)pcVar3 - (int)(param_2 + 2));
  } while (iVar4 != 0);
  return (uint)pcVar5;
}

/* ref: FUN_00fb9be0 */
unsigned int F_00fb9be0(unsigned int gen_a0)
{
  GEN_ENTER(0xfb9be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x604);
  if (puVar3 != *(undefined4 * PTR32 *)((int)this + 0x608)) {
    do {
      F_00406b30(*(undefined4 *)*puVar3);
      puVar1 = (undefined4 *)*puVar3;
      puVar3 = puVar3 + 1;
      *puVar1 = 0;
    } while (puVar3 != *(undefined4 * PTR32 *)((int)this + 0x608));
  }
  iVar2 = *(int *)((int)this + 0x604);
  if (iVar2 != *(int *)((int)this + 0x608)) {
    F_00c46e20(iVar2,*(int *)((int)this + 0x608),0);
    *(int *)((int)this + 0x608) = iVar2;
  }
  return 0;
}

/* ref: FUN_00fb9c80 */
uint F_00fb9c80(unsigned int gen_a0)
{
  GEN_ENTER(0xfb9c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12ae530));
  F_00fb9be0(this);
  uVar1 = 0;
  if (*(int *)((int)this + 0x604) != 0) {
    uVar1 = F_00406ad0(*(int *)((int)this + 0x604));
  }
  *(undefined4 *)((int)this + 0x604) = 0;
  *(undefined4 *)((int)this + 0x608) = 0;
  *(undefined4 *)((int)this + 0x60c) = 0;
  return uVar1;
}

/* ref: FUN_00fb9cd0 */
uint F_00fb9cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfb9cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char cVar1;
  uint * PTR32 * ppuVar2;
  uint * PTR32 * ppuVar3;
  uint * puVar4;
  undefined4 * PTR32 * ppuVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  undefined4 * PTR32 * PTR32 * pppuVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar12 = ((uint *)(gen_frame + 0x34))[0];
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint * PTR32 *)(gen_frame + 0x14)) = param_2;
  (*(uint *)(gen_frame + 0x48)) = 0xf;
  (*(int *)(gen_frame + 0x44)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x34))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x34))[0] = uVar12 & 0xffffff00;
  pcVar7 = param_1;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(((uint *)(gen_frame + 0x34)),param_1,(int)pcVar7 - (int)(param_1 + 1));
  ppuVar5 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0];
  pcVar7 = (char *)((int)this + 0x304);
  (*(uint *)(gen_frame + 0x80)) = 0xf;
  (*(int *)(gen_frame + 0x7c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = (undefined4 * PTR32 *)((uint)ppuVar5 & 0xffffff00);
  (*(int *)(gen_frame + 0xc)) = 3;
  do {
    ppuVar5 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x50))[0];
    iVar11 = 0;
    (*(uint *)(gen_frame + 0x64)) = 0xf;
    (*(int *)(gen_frame + 0x60)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x50))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x50))[0] = (undefined4 * PTR32 *)((uint)ppuVar5 & 0xffffff00);
    pcVar8 = pcVar7 + -0x300;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    F_00bb56c0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x50)),pcVar7 + -0x300,(int)pcVar8 - (int)(pcVar7 + -0x2ff));
    uVar12 = ((uint *)(gen_frame + 0x18))[0];
    if ((*(int *)(gen_frame + 0x60)) == 0) {
      F_00bb4bd0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c)),((uint *)(gen_frame + 0x34)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x64))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x50))[0]);
      }
    }
    else {
      (*(uint *)(gen_frame + 0x2c)) = 0xf;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x18))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0x18))[0] = uVar12 & 0xffffff00;
      pcVar8 = pcVar7;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((uint *)(gen_frame + 0x18)),pcVar7,(int)pcVar8 - (int)(pcVar7 + 1));
      iVar6 = (*(int *)(gen_frame + 0x60));
      (*(int *)(gen_frame + 0x7c)) = 0;
      pppuVar9 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0];
      if ((*(uint *)(gen_frame + 0x80)) < 0x10) {
        pppuVar9 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c));
      }
      *(undefined1 *)pppuVar9 = 0;
      while( true ) {
        pppuVar9 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x50))[0];
        if ((*(uint *)(gen_frame + 0x64)) < 0x10) {
          pppuVar9 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x50));
        }
        uVar12 = F_00fba180(((uint *)(gen_frame + 0x34)),pppuVar9,iVar11,(*(int *)(gen_frame + 0x60)));
        if (uVar12 == 0xffffffff) break;
        F_00e691f0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c)),((uint *)(gen_frame + 0x34)),iVar11,uVar12 - iVar11);
        F_00e691f0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c)),((uint *)(gen_frame + 0x18)),0,0xffffffff);
        iVar11 = uVar12 + iVar6;
      }
      F_00e691f0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c)),((uint *)(gen_frame + 0x34)),iVar11,(*(int *)(gen_frame + 0x44)) - iVar11);
      F_00bb4bd0(((uint *)(gen_frame + 0x34)),((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x2c))) {
        F_00406ad0(((uint *)(gen_frame + 0x18))[0]);
      }
      uVar12 = ((uint *)(gen_frame + 0x18))[0];
      (*(uint *)(gen_frame + 0x2c)) = 0xf;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x18))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0x18))[0] = uVar12 & 0xffffff00;
      if (0xf < (*(uint *)(gen_frame + 0x64))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x50))[0]);
      }
    }
    puVar4 = (*(uint * PTR32 *)(gen_frame + 0x14));
    pcVar7 = pcVar7 + 0x100;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
  } while ((*(int *)(gen_frame + 0xc)) != 0);
  uVar12 = (*(int *)(gen_frame + 0x7c)) + 1;
  if ((*(uint * PTR32 *)(gen_frame + 0x14)) == (uint *)0x0) goto LAB_00fb9f46;
  uVar10 = F_00406a50(uVar12);
  pppuVar9 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0];
  if ((*(uint *)(gen_frame + 0x80)) < 0x10) {
    pppuVar9 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c));
  }
  F_00c4d9ef(uVar10,uVar12,pppuVar9,0xffffffff);
  *puVar4 = uVar10;
  ppuVar2 = *(uint * PTR32 * PTR32 *)((int)this + 0x608);
  if (&(*(uint * PTR32 *)(gen_frame + 0x14)) < ppuVar2) {
    ppuVar3 = *(uint * PTR32 * PTR32 *)((int)this + 0x604);
    if (&(*(uint * PTR32 *)(gen_frame + 0x14)) < ppuVar3) goto LAB_00fb9f1e;
    if (ppuVar2 == *(uint * PTR32 * PTR32 *)((int)this + 0x60c)) {
      F_00fba6f0((undefined *)((int)this + 0x604),1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 0x608) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 0x608) =
           *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x604) + ((int)&(*(uint * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppuVar3) >> 2) * 4)));
    }
  }
  else {
LAB_00fb9f1e: ;
    if (ppuVar2 == *(uint * PTR32 * PTR32 *)((int)this + 0x60c)) {
      F_00fba6f0((undefined *)((int)this + 0x604),1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 0x608) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 0x608) = puVar4;
    }
  }
  *(int *)((int)this + 0x608) = *(int *)((int)this + 0x608) + 4;
LAB_00fb9f46: ;
  if (0xf < (*(uint *)(gen_frame + 0x80))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0]);
  }
  ppuVar5 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0];
  (*(uint *)(gen_frame + 0x80)) = 0xf;
  (*(int *)(gen_frame + 0x7c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = (undefined4 * PTR32 *)((uint)ppuVar5 & 0xffffff00);
  if (0xf < (*(uint *)(gen_frame + 0x48))) {
    F_00406ad0(((uint *)(gen_frame + 0x34))[0]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar12;
}

/* ref: FUN_00fb9fb0 */
uint F_00fb9fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfb9fb0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00fba060 */
uint F_00fba060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00fba0a0 */
uint F_00fba0a0(unsigned int gen_a0)
{
  GEN_ENTER(0xfba0a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00fba0b0 */
uint F_00fba0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xfba0b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00fba0c0 */
uint F_00fba0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xfba0c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00fba0e0 */
uint F_00fba0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfba0e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00fba130 */
uint F_00fba130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfba130u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00fba180 */
uint F_00fba180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfba180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  gen_size32 _MaxCount;
  
  if ((param_3 != 0) || (uVar3 = param_2, *(uint *)((int)this + 0x10) < param_2)) {
    if ((param_2 < *(uint *)((int)this + 0x10)) &&
       (uVar3 = *(uint *)((int)this + 0x10) - param_2, param_3 <= uVar3)) {
      _MaxCount = uVar3 + (1 - param_3);
      pvVar2 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      pvVar2 = (undefined *)((int)pvVar2 + param_2);
      pvVar1 = F_00c48f80(pvVar2,(int)*param_1,_MaxCount);
      while (pvVar1 != (undefined *)0x0) {
        uVar3 = F_0040d320(pvVar1,param_1,param_3);
        if (uVar3 == 0) {
          if (0xf < *(uint *)((int)this + 0x14)) {
            this = *(undefined * PTR32 *)this;
          }
          return (int)pvVar1 - (int)this;
        }
        _MaxCount = (int)pvVar2 + ((_MaxCount - 1) - (int)pvVar1);
        pvVar2 = (undefined *)((int)pvVar1 + 1);
        pvVar1 = F_00c48f80(pvVar2,(int)*param_1,_MaxCount);
      }
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/* ref: FUN_00fba240 */
byte F_00fba240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00fba270 */
uint F_00fba270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00fba2a0 */
uint F_00fba2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfba2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00fba2b0 */
uint F_00fba2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfba2b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00fba2f0 */
uint F_00fba2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xfba2f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00fba340 */
uint F_00fba340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00fba360 */
uint F_00fba360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfba360u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00fba390 */
uint F_00fba390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba390u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00fba3d0 */
uint F_00fba3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfba3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = F_00fba180(this,puVar1,param_2,param_1[4]);
  return uVar2;
}

/* ref: FUN_00fba400 */
byte F_00fba400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00fba420 */
uint F_00fba420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfba420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00fba430 */
uint F_00fba430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00fba450 */
uint F_00fba450(unsigned int gen_a0)
{
  GEN_ENTER(0xfba450u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00fba4a0 */
uint F_00fba4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfba4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00fba4c0 */
uint F_00fba4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfba4c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00fba4f0 */
uint F_00fba4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00fba510 */
uint F_00fba510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00fba520 */
uint F_00fba520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00fba530 */
uint F_00fba530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfba530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00fba590 */
uint F_00fba590(unsigned int gen_a0)
{
  GEN_ENTER(0xfba590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00fba5c0 */
uint F_00fba5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar3 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 4);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      }
    }
    F_00c46e20(uVar4,*(int *)this,(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    uVar3 = uVar4 + param_1 * 4;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = uVar3;
    *(uint *)((int)this + 4) = uVar4 + (iVar2 - iVar1 >> 2) * 4;
  }
  return uVar3;
}

/* ref: FUN_00fba670 */
uint F_00fba670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfba670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00fba690 */
uint F_00fba690(unsigned int gen_a0)
{
  GEN_ENTER(0xfba690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00fba6c0 */
unsigned int F_00fba6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xfba6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00fba6f0 */
uint F_00fba6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00fba5c0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00fba5c0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00fba760 */
uint F_00fba760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00fba6f0(this,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00fba6f0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: Application::Network::WorkDefinitions::StringReplace::vf0 */
uint F_00fba7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12ae530));
  F_00fb9be0(this);
  if (*(int *)(this + 0x604) != 0) {
    F_00406ad0(*(int *)(this + 0x604));
  }
  *(undefined4 *)(this + 0x604) = 0;
  *(undefined4 *)(this + 0x608) = 0;
  *(undefined4 *)(this + 0x60c) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf1 */
uint F_00fba840(void)
{
  GEN_ENTER(0xfba840u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf2 */
uint F_00fba850(void)
{
  GEN_ENTER(0xfba850u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136b3bc);
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf3 */
uint F_00fba860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12ae834) + param_1 * 4);
}

/* ref: FUN_00fba880 */
uint F_00fba880(unsigned int gen_a0)
{
  GEN_ENTER(0xfba880u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12ae860) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf4 */
uint F_00fba8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0xb);
  return 0xffffffff;
}

/* ref: FUN_00fba8e0 */
uint F_00fba8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xfba8e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 3;
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf6 */
uint F_00fba8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136b390))[param_1];
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf7 */
uint F_00fba910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12ae7b0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf8 */
uint F_00fba930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12ae808) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf9 */
uint F_00fba950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3bd0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf10 */
uint F_00fba970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12ae7dc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf14 */
uint F_00fba990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfba990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12ae808) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12ae808) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3bd0) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3bd0) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12ae7dc) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3bd0) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12ae7b0) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12ae7dc) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12ae7b0) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf13 */
uint F_00fbaa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfbaa10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3bd0) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12ae7dc) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12ae7b0) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12ae7b0) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3bd0) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12ae7dc) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf12 */
uint F_00fbaa90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xfbaa90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3bd0) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12ae7dc) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf11 */
uint F_00fbab20(unsigned int gen_a0)
{
  GEN_ENTER(0xfbab20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,2);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,3);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,4);
  uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,5);
  uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,6);
  uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,7);
  uVar9 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,8);
  uVar10 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,9);
  uVar11 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,10);
  return uVar11 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 + uVar8 + uVar9 + uVar10;
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf17 */
uint F_00fbabc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xfbabc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_5 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf16 */
uint F_00fbabe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xfbabe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf15 */
uint F_00fbac00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbac00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,5,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,6,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,7,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,8,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,9,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,10,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf19 */
uint F_00fbacc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbacc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,5,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,6,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,7,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,8,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,9,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,10,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00fbad80 */
unsigned int F_00fbad80(unsigned int gen_a0)
{
  GEN_ENTER(0xfbad80u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf2 */
uint F_00fbad90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbad90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136b480) + 0x10))))(&REFG(undefined * PTR32, 0x136b480),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00fbadc0 */
uint F_00fbadc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbadc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136b480) + 0x10))))(&REFG(undefined * PTR32, 0x136b480),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf4 */
uint F_00fbadf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbadf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 8;
  case 2: ;
    return in_ecx + 0xc;
  case 3: ;
    return in_ecx + 0x10;
  case 4: ;
    return in_ecx + 0x14;
  case 5: ;
    return in_ecx + 0x18;
  case 6: ;
    return in_ecx + 0x1c;
  case 7: ;
    return in_ecx + 0x1d;
  case 8: ;
    return in_ecx + 0x1e;
  case 9: ;
    return in_ecx + 0x20;
  case 10: ;
    return in_ecx + 0x30;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::Cast::vf3 */
uint F_00fbae90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbae90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf8 */
byte F_00fbaea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbaea0u, gen_a0, gen_a1, 0u, 0u);
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
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6);
  pcVar7 = (char *)F_0042a990(uVar6);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6);
    pbVar11 = (byte *)F_0042a990(uVar6);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00fbafa3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00fbafa8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00fbafa3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00fbafa8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
      uVar12 = F_00e8c050(this_00);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_00fbb05a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00fbb05a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf22 */
byte F_00fbb070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfbb070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined * pCVar5;
  ulonglong uVar6;
  float fVar7;
  undefined * puVar8;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 4) = (int)uVar6;
    return 1;
  case 1: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 8) = (int)uVar6;
    return 1;
  case 2: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0xc) = (int)uVar6;
    return 1;
  case 3: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0x10) = (int)uVar6;
    return 1;
  case 4: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 0x14) = fVar7;
    return 1;
  case 5: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0x18) = (int)uVar6;
    return 1;
  case 6: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(param_2);
    bVar1 = F_0042b740(pvVar2,puVar8);
    this[0x1c] = (undefined1)(bVar1 != 0);
    return 1;
  case 7: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(param_2);
    bVar1 = F_0042b740(pvVar2,puVar8);
    this[0x1d] = (undefined1)(bVar1 != 0);
    return 1;
  case 8: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(param_2);
    bVar1 = F_0042b740(pvVar2,puVar8);
    this[0x1e] = (undefined1)(bVar1 != 0);
    return 1;
  case 9: ;
    iVar4 = 0;
    pCVar5 = this + 0x20;
    break;
  case 10: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 0x30) = fVar7;
    return 1;
  default: ;
    return 0;
  }
  do {
    uVar3 = F_00e9e450(param_2,iVar4,iVar4 >> 0x1f);
    uVar3 = F_00e82f00(uVar3);
    uVar3 = F_0042a990(uVar3);
    fVar7 = F_00e50660(uVar3);
    *(float *)pCVar5 = fVar7;
    iVar4 = iVar4 + 1;
    pCVar5 = pCVar5 + 4;
  } while (iVar4 < 3);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf17 */
byte F_00fbb260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbb260u, gen_a0, gen_a1, gen_a2, 0u);
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
  undefined * pCVar7;
  ulonglong uVar8;
  float fVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar8 = F_00e50570(uVar3 + 2);
  *(int *)(this + 4) = (int)uVar8;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  *(int *)(this + 8) = (int)uVar8;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e50570(uVar3 + 3);
  *(int *)(this + 0xc) = (int)uVar8;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  *(int *)(this + 0x10) = (int)uVar8;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  fVar9 = F_00e50660(uVar3 + 3);
  *(float *)(this + 0x14) = fVar9;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  *(int *)(this + 0x18) = (int)uVar8;
  uVar6 = F_00c51da0((char *)(uVar3 + 3),0x22);
  this[0x1c] = (undefined1)(*(char *)(uVar3 + 3) != '0');
  uVar3 = F_00c51da0((char *)(uVar6 + 3),0x22);
  this[0x1d] = (undefined1)(*(char *)(uVar6 + 3) != '0');
  uVar6 = F_00c51da0((char *)(uVar3 + 3),0x22);
  pCVar7 = this + 0x20;
  this[0x1e] = (undefined1)(*(char *)(uVar3 + 3) != '0');
  uVar6 = uVar6 + 1;
  (*(int *)(gen_frame + 0x0)) = 3;
  do {
    iVar5 = uVar6 + 3;
    uVar6 = F_00c51da0(iVar5,0x22);
    fVar9 = F_00e50660(iVar5);
    *(float *)pCVar7 = fVar9;
    pCVar7 = pCVar7 + 4;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + -1;
  } while ((*(int *)(gen_frame + 0x0)) != 0);
  uVar3 = F_00c51da0(uVar6 + 4,0x22);
  fVar9 = F_00e50660(uVar6 + 4);
  *(float *)(this + 0x30) = fVar9;
  if (param_2 != (uint *)0x0) {
    uVar3 = F_00c51da0(uVar3,0x7d);
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf10 */
uint F_00fbb430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbb430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf23 */
byte F_00fbb550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbb550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined1 * puVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x18),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x1c]);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,7,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x1d]);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,8,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x1e]);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,9,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x20))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x20)) >> 0x20));
  puVar3 = ((undefined1 *)(gen_frame + 0x8));
  pvVar2 = (undefined *)F_00e9e450(pvVar1,0,0);
  F_00ea7fb0(pvVar2,puVar3);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x24))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x24)) >> 0x20));
  puVar3 = ((undefined1 *)(gen_frame + 0x8));
  pvVar2 = (undefined *)F_00e9e450(pvVar1,1,0);
  F_00ea7fb0(pvVar2,puVar3);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x28))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x28)) >> 0x20));
  puVar3 = ((undefined1 *)(gen_frame + 0x8));
  pvVar1 = (undefined *)F_00e9e450(pvVar1,2,0);
  F_00ea7fb0(pvVar1,puVar3);
  pvVar1 = (undefined *)F_00e9e450(param_1,10,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x30))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x30)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf9 */
uint F_00fbb850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbb850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf11 */
byte F_00fbb870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbb870u, gen_a0, gen_a1, 0u, 0u);
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
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5);
  pcVar6 = (char *)F_0042a990(uVar5);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar9 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
    uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5);
    pbVar10 = (byte *)F_0042a990(uVar5);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00fbb983: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00fbb988;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00fbb983;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00fbb988: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
            uVar12 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13), uVar13 == uVar12)) {
                    uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00fbbaf7;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_00fbbaf7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf24 */
byte F_00fbbb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbbb10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pCVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  undefined * puVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar3 = F_00e82f00(pvVar2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 4) = (int)uVar6;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 1: ;
    uVar3 = F_00e82f00(pvVar2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 8) = (int)uVar6;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 2: ;
    uVar3 = F_00e82f00(pvVar2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0xc) = (int)uVar6;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 3: ;
    uVar3 = F_00e82f00(pvVar2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0x10) = (int)uVar6;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 4: ;
    uVar3 = F_00e82f00(pvVar2);
    uVar3 = F_0042a990(uVar3);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 0x14) = fVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 5: ;
    uVar3 = F_00e82f00(pvVar2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0x18) = (int)uVar6;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 6: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(pvVar2);
    bVar1 = F_0042b6a0(pvVar2,puVar8);
    this[0x1c] = (undefined1)(bVar1 == 0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 7: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(pvVar2);
    bVar1 = F_0042b6a0(pvVar2,puVar8);
    this[0x1d] = (undefined1)(bVar1 == 0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 8: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(pvVar2);
    bVar1 = F_0042b6a0(pvVar2,puVar8);
    this[0x1e] = (undefined1)(bVar1 == 0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 9: ;
    iVar5 = 0;
    pCVar4 = this + 0x20;
    break;
  case 10: ;
    uVar3 = F_00e82f00(pvVar2);
    uVar3 = F_0042a990(uVar3);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 0x30) = fVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  do {
    uVar3 = F_00e9e450(pvVar2,iVar5,iVar5 >> 0x1f);
    uVar3 = F_00e82f00(uVar3);
    uVar3 = F_0042a990(uVar3);
    fVar7 = F_00e50660(uVar3);
    *(float *)pCVar4 = fVar7;
    iVar5 = iVar5 + 1;
    pCVar4 = pCVar4 + 4;
  } while (iVar5 < 3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf18 */
byte F_00fbbdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbbdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pCVar6;
  ulonglong uVar7;
  float fVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
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
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b498));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(int *)(this + 4) = (int)uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b498));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(int *)(this + 8) = (int)uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b498));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(int *)(this + 0xc) = (int)uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b498));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(int *)(this + 0x10) = (int)uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b498));
      iVar5 = uVar3 + 9;
      fVar8 = F_00e50660(iVar5);
      *(float *)(this + 0x14) = fVar8;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b498));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(int *)(this + 0x18) = (int)uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,6);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b498));
      iVar5 = uVar3 + 9;
      this[0x1c] = (undefined1)(*(char *)(uVar3 + 9) != '0');
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,7);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b498));
      iVar5 = uVar3 + 9;
      this[0x1d] = (undefined1)(*(char *)(uVar3 + 9) != '0');
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,8);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b498));
      iVar5 = uVar3 + 9;
      this[0x1e] = (undefined1)(*(char *)(uVar3 + 9) != '0');
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,9);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b494));
      iVar5 = uVar3 + 10;
      pCVar6 = this + 0x20;
      (*(int *)(gen_frame + 0x4)) = 3;
      do {
        fVar8 = F_00e50660(iVar5);
        *(float *)pCVar6 = fVar8;
        uVar3 = F_00c51da0(iVar5,0x2c);
        pCVar6 = pCVar6 + 4;
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        iVar5 = uVar3 + 2;
      } while ((*(int *)(gen_frame + 0x4)) != 0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,10);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b498));
      iVar5 = uVar3 + 9;
      fVar8 = F_00e50660(iVar5);
      *(float *)(this + 0x30) = fVar8;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar5;
    }
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf13 */
uint F_00fbc230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbc230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf25 */
byte F_00fbc350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbc350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x188)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x168)));
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x168)));
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7e80(pvVar2,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x168)));
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7e80(pvVar2,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x168)));
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7e80(pvVar2,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x168)));
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7e80(pvVar2,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x18),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x168)));
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7e80(pvVar2,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x1c]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x168)));
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  pvVar1 = (undefined *)F_00e9e450(param_1,7,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7e80(pvVar2,7);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,7);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,7);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x1d]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x168)));
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  pvVar1 = (undefined *)F_00e9e450(param_1,8,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7e80(pvVar2,8);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,8);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,8);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x1e]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x168)));
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  pvVar1 = (undefined *)F_00e9e450(param_1,9,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7e80(pvVar2,9);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,9);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,9);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7fb0(pvVar2,"Vector3");
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 3;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this + 0x20;
  (*(int *)(gen_frame + 0xc)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x14))),
               (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x14))) >> 0x20));
    F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"value",REFG(undefined4, 0x108cc50));
    iVar5 = (*(int *)(gen_frame + 0xc)) >> 0x1f;
    puVar9 = ((undefined1 *)(gen_frame + 0x168));
    iVar6 = (*(int *)(gen_frame + 0xc));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x114)));
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)(gen_frame + 0x14)) + 4;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
  } while ((*(int *)(gen_frame + 0xc)) < 3);
  pvVar1 = (undefined *)F_00e9e450(param_1,10,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7e80(pvVar2,10);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,10);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc0)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,10);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0xc0)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x18)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x18)));
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x18)));
  F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x30))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x30)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x6c)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x6c)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x168)));
  F_0042c880(((undefined1 *)(gen_frame + 0x6c)));
  F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf14 */
byte F_00fbd340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbd340u, gen_a0, gen_a1, 0u, 0u);
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
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6);
    pcVar7 = (char *)F_0042a990(uVar6);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
      uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6);
      pbVar11 = (byte *)F_0042a990(uVar6);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00fbd492: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00fbd497;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00fbd492;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00fbd497: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
        uVar12 = F_00e8c050(this_01);
        uVar13 = F_00e8c050(this_00);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar13 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14);
                  uVar14 = F_0042a990(uVar14);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_00fbd39e;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 1;
        }
      }
    }
  }
LAB_00fbd39e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf16 */
byte F_00fbd5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbd5f0u, gen_a0, gen_a1, 0u, 0u);
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
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: FUN_00fbd7c0 */
uint F_00fbd7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xfbd7c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf1 */
uint F_00fbd800(void)
{
  GEN_ENTER(0xfbd800u, 0u, 0u, 0u, 0u);
  return 0xd;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf2 */
uint F_00fbd810(void)
{
  GEN_ENTER(0xfbd810u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136b3c8);
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf3 */
uint F_00fbd820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbd820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12ae8a8) + param_1 * 4);
}

/* ref: FUN_00fbd840 */
uint F_00fbd840(unsigned int gen_a0)
{
  GEN_ENTER(0xfbd840u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12ae8b0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf4 */
uint F_00fbd860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbd860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 2);
  return 0xffffffff;
}

/* ref: FUN_00fbd8a0 */
uint F_00fbd8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xfbd8a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x36;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf6 */
uint F_00fbd8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbd8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136b3c0))[param_1];
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf7 */
uint F_00fbd8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbd8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12ae890) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf8 */
uint F_00fbd8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbd8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12ae8a0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf9 */
uint F_00fbd910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbd910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3bfc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf10 */
uint F_00fbd930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbd930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12ae898) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf14 */
uint F_00fbd950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbd950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12ae8a0) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12ae8a0) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3bfc) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3bfc) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12ae898) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3bfc) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12ae890) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12ae898) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12ae890) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf13 */
uint F_00fbd9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfbd9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3bfc) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12ae898) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12ae890) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12ae890) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3bfc) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12ae898) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf12 */
uint F_00fbda50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xfbda50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3bfc) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12ae898) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf11 */
uint F_00fbdae0(unsigned int gen_a0)
{
  GEN_ENTER(0xfbdae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  return uVar2 + uVar1;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf17 */
uint F_00fbdb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xfbdb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_5 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf16 */
uint F_00fbdb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xfbdb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf15 */
uint F_00fbdb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbdb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,1,param_2 + uVar1);
  return uVar2 + ((param_2 + uVar1) - param_2);
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf19 */
uint F_00fbdb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbdb80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1,param_1 + uVar1,param_2);
  return uVar2 + ((param_1 + uVar1) - param_1);
}

/* ref: FUN_00fbdbc0 */
uint F_00fbdbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xfbdbc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12aec64));
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00fbdbe0 */
unsigned int F_00fbdbe0(unsigned int gen_a0)
{
  GEN_ENTER(0xfbdbe0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf2 */
uint F_00fbdbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbdbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136b484) + 0x10))))(&REFG(undefined * PTR32, 0x136b484),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00fbdc20 */
uint F_00fbdc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbdc20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136b484) + 0x10))))(&REFG(undefined * PTR32, 0x136b484),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf4 */
uint F_00fbdc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbdc50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    return in_ecx + 4;
  }
  if (param_2 != 1) {
    return 0;
  }
  return in_ecx + 8;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf3 */
uint F_00fbdc80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbdc80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf6 */
byte F_00fbdc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbdc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 4) = param_1[1];
    uVar4 = (uint)(byte)*(undefined *)(param_1 + 2);
    this[8] = *(undefined *)(param_1 + 2);
  }
  return (byte)uVar4;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf5 */
uint F_00fbdce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbdce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    if (param_2 == 0) {
      *(int *)(this + 4) = param_1[1];
      uVar4 = 0;
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

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf8 */
byte F_00fbdd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbdd50u, gen_a0, gen_a1, 0u, 0u);
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
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6);
  pcVar7 = (char *)F_0042a990(uVar6);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6);
    pbVar11 = (byte *)F_0042a990(uVar6);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00fbde53: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00fbde58;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00fbde53;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00fbde58: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
      uVar12 = F_00e8c050(this_00);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_00fbdf0a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00fbdf0a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf22 */
byte F_00fbdf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfbdf20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  
  if (param_1 == 0) {
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    fVar3 = F_00e50660(uVar1);
    *(float *)(this + 4) = fVar3;
    return 1;
  }
  if (param_1 != 1) {
    return 0;
  }
  uVar1 = F_00e82f00(param_2);
  uVar1 = F_0042a990(uVar1);
  uVar2 = F_00e50570(uVar1);
  this[8] = SUB81(uVar2,0);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf17 */
byte F_00fbdf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbdf80u, gen_a0, gen_a1, gen_a2, 0u);
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
  float fVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  fVar8 = F_00e50660(uVar3 + 2);
  *(float *)(this + 4) = fVar8;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  this[8] = SUB81(uVar7,0);
  if (param_2 != (uint *)0x0) {
    uVar3 = F_00c51da0(uVar3,0x7d);
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf10 */
uint F_00fbe070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbe070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf23 */
byte F_00fbe190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbe190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 4)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 4)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[8],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf9 */
uint F_00fbe230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbe230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf11 */
byte F_00fbe250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbe250u, gen_a0, gen_a1, 0u, 0u);
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
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5);
  pcVar6 = (char *)F_0042a990(uVar5);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar9 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
    uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5);
    pbVar10 = (byte *)F_0042a990(uVar5);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00fbe363: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00fbe368;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00fbe363;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00fbe368: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
            uVar12 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13), uVar13 == uVar12)) {
                    uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00fbe4d7;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_00fbe4d7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf24 */
byte F_00fbe4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbe4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if (param_1 == 0) {
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    fVar3 = F_00e50660(uVar1);
    *(float *)(this + 4) = fVar3;
  }
  else {
    if (param_1 != 1) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return 0;
    }
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    this[8] = SUB81(uVar2,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf18 */
byte F_00fbe5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbe5a0u, gen_a0, gen_a1, gen_a2, 0u);
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
  float fVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b528));
    iVar5 = uVar3 + 9;
    fVar7 = F_00e50660(iVar5);
    *(float *)(this + 4) = fVar7;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b528));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    this[8] = SUB81(uVar6,0);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf13 */
uint F_00fbe6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbe6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf25 */
byte F_00fbe810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbe810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 4)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 4)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[8],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf14 */
byte F_00fbeae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbeae0u, gen_a0, gen_a1, 0u, 0u);
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
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6);
    pcVar7 = (char *)F_0042a990(uVar6);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
      uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6);
      pbVar11 = (byte *)F_0042a990(uVar6);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00fbec32: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00fbec37;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00fbec32;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00fbec37: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
        uVar12 = F_00e8c050(this_01);
        uVar13 = F_00e8c050(this_00);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar13 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14);
                  uVar14 = F_0042a990(uVar14);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_00fbeb3e;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 1;
        }
      }
    }
  }
LAB_00fbeb3e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf16 */
byte F_00fbed90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbed90u, gen_a0, gen_a1, 0u, 0u);
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
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: FUN_00fbef60 */
unsigned int F_00fbef60(unsigned int gen_a0)
{
  GEN_ENTER(0xfbef60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined1 *)(in_ecx + 8) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf1 */
uint F_00fbef90(void)
{
  GEN_ENTER(0xfbef90u, 0u, 0u, 0u, 0u);
  return 0x28;
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf2 */
uint F_00fbefa0(void)
{
  GEN_ENTER(0xfbefa0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136b3cc);
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf3 */
uint F_00fbefb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbefb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12aea40) + param_1 * 4);
}

/* ref: FUN_00fbefd0 */
uint F_00fbefd0(unsigned int gen_a0)
{
  GEN_ENTER(0xfbefd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12aeac0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf4 */
uint F_00fbeff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbeff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x1f);
  return 0xffffffff;
}

/* ref: FUN_00fbf030 */
uint F_00fbf030(unsigned int gen_a0)
{
  GEN_ENTER(0xfbf030u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x16c;
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf6 */
uint F_00fbf040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbf040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136b3d0))[param_1];
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf7 */
uint F_00fbf060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbf060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12ae8c0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf8 */
uint F_00fbf080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbf080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12ae9c0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf9 */
uint F_00fbf0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbf0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3c08) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf10 */
uint F_00fbf0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbf0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12ae940) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf14 */
uint F_00fbf0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbf0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12ae9c0) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12ae9c0) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3c08) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3c08) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12ae940) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3c08) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12ae8c0) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12ae940) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12ae8c0) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf13 */
uint F_00fbf160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfbf160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3c08) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12ae940) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12ae8c0) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12ae8c0) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3c08) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12ae940) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf12 */
uint F_00fbf1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xfbf1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3c08) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12ae940) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf11 */
uint F_00fbf270(unsigned int gen_a0)
{
  GEN_ENTER(0xfbf270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,2);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,3);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,4);
  uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,5);
  uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,6);
  uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,7);
  uVar9 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,8);
  uVar10 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,9);
  uVar11 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,10);
  uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0xb);
  uVar13 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0xc);
  uVar14 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0xd);
  uVar15 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0xe);
  uVar16 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0xf);
  uVar17 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x10);
  uVar18 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x11);
  uVar19 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x12);
  uVar20 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x13);
  uVar21 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x14);
  uVar22 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x15);
  uVar23 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x16);
  uVar24 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x17);
  uVar25 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x18);
  uVar26 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x19);
  uVar27 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x1a);
  uVar28 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x1b);
  uVar29 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x1c);
  uVar30 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x1d);
  uVar31 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x1e);
  return uVar31 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 + uVar8 + uVar9 + uVar10 +
                  uVar11 + uVar12 + uVar13 + uVar14 + uVar15 + uVar16 + uVar17 + uVar18 + uVar19 +
                  uVar20 + uVar21 + uVar22 + uVar23 + uVar24 + uVar25 + uVar26 + uVar27 + uVar28 +
                  uVar29 + uVar30;
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf15 */
uint F_00fbf410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbf410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,5,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,6,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,7,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,8,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,9,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,10,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0xb,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0xc,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0xd,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0xe,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0xf,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x10,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x11,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x12,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x13,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x14,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x15,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x16,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x17,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x18,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x19,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x1a,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x1b,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x1c,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x1d,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x1e,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf19 */
uint F_00fbf600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbf600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,5,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,6,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,7,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,8,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,9,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,10,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0xb,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0xc,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0xd,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0xe,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0xf,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x10,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x11,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x12,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x13,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x14,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x15,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x16,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x17,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x18,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x19,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x1a,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x1b,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x1c,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x1d,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x1e,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00fbf7f0 */
unsigned int F_00fbf7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xfbf7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12aed2c));
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x11e) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x16) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x22) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined8 *)((int)this + 0x39) = 0;
  *(undefined8 *)((int)this + 0x41) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
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
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined8 *)((int)this + 0xc4) = 0;
  *(undefined8 *)((int)this + 0xcc) = 0;
  *(undefined8 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined2 *)((int)this + 0xe0) = 0;
  *(undefined8 *)((int)this + 0xe2) = 0;
  *(undefined8 *)((int)this + 0xea) = 0;
  *(undefined8 *)((int)this + 0xf2) = 0;
  *(undefined4 *)((int)this + 0xfa) = 0;
  *(undefined2 *)((int)this + 0xfe) = 0;
  *(undefined8 *)((int)this + 0x100) = 0;
  *(undefined8 *)((int)this + 0x108) = 0;
  *(undefined8 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined2 *)((int)this + 0x11c) = 0;
  return 0;
}

/* ref: FUN_00fbf960 */
unsigned int F_00fbf960(unsigned int gen_a0)
{
  GEN_ENTER(0xfbf960u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf2 */
uint F_00fbf970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbf970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136b488) + 0x10))))(&REFG(undefined * PTR32, 0x136b488),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00fbf9a0 */
uint F_00fbf9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbf9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136b488) + 0x10))))(&REFG(undefined * PTR32, 0x136b488),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf4 */
uint F_00fbf9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbf9d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 8;
  case 2: ;
    return in_ecx + 0xc;
  case 3: ;
    return in_ecx + 0x10;
  case 4: ;
    return in_ecx + 0x14;
  case 5: ;
    return in_ecx + 0x16;
  case 6: ;
    return in_ecx + 0x18;
  case 7: ;
    return in_ecx + 0x19;
  case 8: ;
    return in_ecx + 0x1a;
  case 9: ;
    return in_ecx + 0x1b;
  case 10: ;
    return in_ecx + 0x1c;
  case 0xb: ;
    return in_ecx + 0x1e;
  case 0xc: ;
    return in_ecx + 0x20;
  case 0xd: ;
    return in_ecx + 0x22;
  case 0xe: ;
    return in_ecx + 0x24;
  case 0xf: ;
    return in_ecx + 0x26;
  case 0x10: ;
    return in_ecx + 0x28;
  case 0x11: ;
    return in_ecx + 0x2a;
  case 0x12: ;
    return in_ecx + 0x2b;
  case 0x13: ;
    return in_ecx + 0x2c;
  case 0x14: ;
    return in_ecx + 0x2d;
  case 0x15: ;
    return in_ecx + 0x2e;
  case 0x16: ;
    return in_ecx + 0x30;
  case 0x17: ;
    return in_ecx + 0x34;
  case 0x18: ;
    return in_ecx + 0x39;
  case 0x19: ;
    return in_ecx + 0x41;
  case 0x1a: ;
    return in_ecx + 0x4c;
  case 0x1b: ;
    return in_ecx + 0xc4;
  case 0x1c: ;
    return in_ecx + 0xe2;
  case 0x1d: ;
    return in_ecx + 0x100;
  case 0x1e: ;
    return in_ecx + 0x11e;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf3 */
uint F_00fbfb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbfb50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 < *(uint *)(&REFG(undefined, 0x12ae8c0) + param_1 * 4)) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0x17: ;
      return (uint)(this + param_2 + 0x34);
    case 0x18: ;
      return (uint)(this + param_2 + 0x39);
    case 0x19: ;
      return (uint)(this + param_2 + 0x41);
    case 0x1a: ;
      return (uint)(this + param_2 * 4 + 0x4c);
    case 0x1b: ;
      return (uint)(this + param_2 + 0xc4);
    case 0x1c: ;
      return (uint)(this + param_2 + 0xe2);
    case 0x1d: ;
      return (uint)(this + param_2 + 0x100);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf6 */
unsigned int F_00fbfbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfbfbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined * pCVar6;
  int iVar7;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    this[4] = *(undefined *)(param_1 + 1);
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    *(short *)(this + 0x14) = (short)param_1[5];
    *(undefined2 *)(this + 0x16) = *(undefined2 *)((int)param_1 + 0x16);
    this[0x18] = *(undefined *)(param_1 + 6);
    this[0x19] = *(undefined *)((int)param_1 + 0x19);
    this[0x1a] = *(undefined *)((int)param_1 + 0x1a);
    this[0x1b] = *(undefined *)((int)param_1 + 0x1b);
    *(short *)(this + 0x1c) = (short)param_1[7];
    *(undefined2 *)(this + 0x1e) = *(undefined2 *)((int)param_1 + 0x1e);
    *(short *)(this + 0x20) = (short)param_1[8];
    *(undefined2 *)(this + 0x22) = *(undefined2 *)((int)param_1 + 0x22);
    *(short *)(this + 0x24) = (short)param_1[9];
    *(undefined2 *)(this + 0x26) = *(undefined2 *)((int)param_1 + 0x26);
    *(short *)(this + 0x28) = (short)param_1[10];
    this[0x2a] = *(undefined *)((int)param_1 + 0x2a);
    this[0x2b] = *(undefined *)((int)param_1 + 0x2b);
    this[0x2c] = *(undefined *)(param_1 + 0xb);
    this[0x2d] = *(undefined *)((int)param_1 + 0x2d);
    this[0x2e] = *(undefined *)((int)param_1 + 0x2e);
    *(int *)(this + 0x30) = param_1[0xc];
    this[0x34] = *(undefined *)(param_1 + 0xd);
    this[0x35] = *(undefined *)((int)param_1 + 0x35);
    this[0x36] = *(undefined *)((int)param_1 + 0x36);
    this[0x37] = *(undefined *)((int)param_1 + 0x37);
    this[0x38] = *(undefined *)(param_1 + 0xe);
    this[0x39] = *(undefined *)((int)param_1 + 0x39);
    this[0x3a] = *(undefined *)((int)param_1 + 0x3a);
    this[0x3b] = *(undefined *)((int)param_1 + 0x3b);
    this[0x3c] = *(undefined *)(param_1 + 0xf);
    this[0x3d] = *(undefined *)((int)param_1 + 0x3d);
    this[0x3e] = *(undefined *)((int)param_1 + 0x3e);
    this[0x3f] = *(undefined *)((int)param_1 + 0x3f);
    this[0x40] = *(undefined *)(param_1 + 0x10);
    this[0x41] = *(undefined *)((int)param_1 + 0x41);
    this[0x42] = *(undefined *)((int)param_1 + 0x42);
    this[0x43] = *(undefined *)((int)param_1 + 0x43);
    this[0x44] = *(undefined *)(param_1 + 0x11);
    this[0x45] = *(undefined *)((int)param_1 + 0x45);
    this[0x46] = *(undefined *)((int)param_1 + 0x46);
    this[0x47] = *(undefined *)((int)param_1 + 0x47);
    this[0x48] = *(undefined *)(param_1 + 0x12);
    pCVar6 = this + 0x4c;
    iVar5 = (int)param_1 - (int)this;
    iVar7 = 0x1e;
    do {
      *(undefined4 *)pCVar6 = *(undefined4 *)(pCVar6 + iVar5);
      pCVar6 = pCVar6 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pCVar6 = this + 0xc4;
    iVar7 = 0x1e;
    do {
      *pCVar6 = pCVar6[iVar5];
      pCVar6 = pCVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pCVar6 = this + 0xe2;
    iVar7 = 0x1e;
    do {
      *pCVar6 = pCVar6[iVar5];
      pCVar6 = pCVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pCVar6 = this + 0x100;
    iVar7 = 0x1e;
    do {
      *pCVar6 = pCVar6[iVar5];
      pCVar6 = pCVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    this[0x11e] = *(undefined *)((int)param_1 + 0x11e);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf5 */
uint F_00fbfdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfbfdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 CVar1;
  undefined2 uVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined3 uVar8;
  undefined * pCVar7;
  int iVar10;
  undefined2 uVar9;
  
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  if ((short)uVar5 == (short)uVar6) {
    uVar6 = param_2;
    uVar9 = (undefined2)(param_2 >> 0x10);
    uVar8 = (undefined3)(param_2 >> 8);
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      CVar1 = *(undefined *)(param_1 + 1);
      this[4] = CVar1;
      return CONCAT31(uVar8,CVar1);
    case 1: ;
      *(int *)(this + 8) = param_1[2];
      return uVar6;
    case 2: ;
      *(int *)(this + 0xc) = param_1[3];
      return uVar6;
    case 3: ;
      uVar6 = param_1[4];
      *(uint *)(this + 0x10) = uVar6;
      return uVar6;
    case 4: ;
      *(short *)(this + 0x14) = (short)param_1[5];
      return uVar6;
    case 5: ;
      *(undefined2 *)(this + 0x16) = *(undefined2 *)((int)param_1 + 0x16);
      return uVar6;
    case 6: ;
      CVar1 = *(undefined *)(param_1 + 6);
      this[0x18] = CVar1;
      return CONCAT31(uVar8,CVar1);
    case 7: ;
      this[0x19] = *(undefined *)((int)param_1 + 0x19);
      return uVar6;
    case 8: ;
      this[0x1a] = *(undefined *)((int)param_1 + 0x1a);
      return uVar6;
    case 9: ;
      CVar1 = *(undefined *)((int)param_1 + 0x1b);
      this[0x1b] = CVar1;
      return CONCAT31(uVar8,CVar1);
    case 10: ;
      *(short *)(this + 0x1c) = (short)param_1[7];
      return uVar6;
    case 0xb: ;
      *(undefined2 *)(this + 0x1e) = *(undefined2 *)((int)param_1 + 0x1e);
      return uVar6;
    case 0xc: ;
      iVar10 = param_1[8];
      *(short *)(this + 0x20) = (short)iVar10;
      return CONCAT22(uVar9,(short)iVar10);
    case 0xd: ;
      *(undefined2 *)(this + 0x22) = *(undefined2 *)((int)param_1 + 0x22);
      return uVar6;
    case 0xe: ;
      *(short *)(this + 0x24) = (short)param_1[9];
      return uVar6;
    case 0xf: ;
      uVar2 = *(undefined2 *)((int)param_1 + 0x26);
      *(undefined2 *)(this + 0x26) = uVar2;
      return CONCAT22(uVar9,uVar2);
    case 0x10: ;
      *(short *)(this + 0x28) = (short)param_1[10];
      return uVar6;
    case 0x11: ;
      this[0x2a] = *(undefined *)((int)param_1 + 0x2a);
      return uVar6;
    case 0x12: ;
      CVar1 = *(undefined *)((int)param_1 + 0x2b);
      this[0x2b] = CVar1;
      return CONCAT31(uVar8,CVar1);
    case 0x13: ;
      this[0x2c] = *(undefined *)(param_1 + 0xb);
      return uVar6;
    case 0x14: ;
      this[0x2d] = *(undefined *)((int)param_1 + 0x2d);
      return uVar6;
    case 0x15: ;
      CVar1 = *(undefined *)((int)param_1 + 0x2e);
      this[0x2e] = CVar1;
      return CONCAT31(uVar8,CVar1);
    case 0x16: ;
      *(int *)(this + 0x30) = param_1[0xc];
      return uVar6;
    case 0x17: ;
      this[0x34] = *(undefined *)(param_1 + 0xd);
      this[0x35] = *(undefined *)((int)param_1 + 0x35);
      this[0x36] = *(undefined *)((int)param_1 + 0x36);
      this[0x37] = *(undefined *)((int)param_1 + 0x37);
      CVar1 = *(undefined *)(param_1 + 0xe);
      this[0x38] = CVar1;
      return (uint)(byte)CVar1;
    case 0x18: ;
      this[0x39] = *(undefined *)((int)param_1 + 0x39);
      this[0x3a] = *(undefined *)((int)param_1 + 0x3a);
      this[0x3b] = *(undefined *)((int)param_1 + 0x3b);
      this[0x3c] = *(undefined *)(param_1 + 0xf);
      this[0x3d] = *(undefined *)((int)param_1 + 0x3d);
      CVar1 = *(undefined *)((int)param_1 + 0x3e);
      this[0x3e] = CVar1;
      this[0x3f] = *(undefined *)((int)param_1 + 0x3f);
      this[0x40] = *(undefined *)(param_1 + 0x10);
      return (uint)(byte)CVar1;
    case 0x19: ;
      this[0x41] = *(undefined *)((int)param_1 + 0x41);
      this[0x42] = *(undefined *)((int)param_1 + 0x42);
      this[0x43] = *(undefined *)((int)param_1 + 0x43);
      this[0x44] = *(undefined *)(param_1 + 0x11);
      this[0x45] = *(undefined *)((int)param_1 + 0x45);
      this[0x46] = *(undefined *)((int)param_1 + 0x46);
      CVar1 = *(undefined *)((int)param_1 + 0x47);
      this[0x47] = CVar1;
      this[0x48] = *(undefined *)(param_1 + 0x12);
      return (uint)(byte)CVar1;
    case 0x1a: ;
      pCVar7 = this + 0x4c;
      iVar10 = 0x1e;
      do {
        *(undefined4 *)pCVar7 = *((undefined4 *)GEN_TOP((pCVar7 + ((int)param_1 - (int)this))));
        pCVar7 = pCVar7 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      return (uint)pCVar7;
    case 0x1b: ;
      pCVar7 = this + 0xc4;
      iVar10 = 0x1e;
      do {
        *pCVar7 = pCVar7[(int)param_1 - (int)this];
        pCVar7 = pCVar7 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      return (uint)pCVar7;
    case 0x1c: ;
      pCVar7 = this + 0xe2;
      iVar10 = 0x1e;
      do {
        *pCVar7 = pCVar7[(int)param_1 - (int)this];
        pCVar7 = pCVar7 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      return (uint)pCVar7;
    case 0x1d: ;
      pCVar7 = this + 0x100;
      iVar10 = 0x1e;
      do {
        *pCVar7 = pCVar7[(int)param_1 - (int)this];
        pCVar7 = pCVar7 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      return (uint)pCVar7;
    case 0x1e: ;
      uVar6 = CONCAT31(uVar8,*(undefined *)((int)param_1 + 0x11e));
      this[0x11e] = *(undefined *)((int)param_1 + 0x11e);
    }
  }
  return uVar6;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf8 */
byte F_00fc0110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc0110u, gen_a0, gen_a1, 0u, 0u);
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
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6);
  pcVar7 = (char *)F_0042a990(uVar6);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6);
    pbVar11 = (byte *)F_0042a990(uVar6);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00fc0213: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00fc0218;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00fc0213;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00fc0218: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
      uVar12 = F_00e8c050(this_00);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_00fc02ca;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00fc02ca: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf22 */
byte F_00fc02e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfc02e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  undefined * pCVar3;
  int iVar4;
  ulonglong uVar5;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[4] = SUB81(uVar5,0);
    return 1;
  case 1: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 8) = (int)uVar5;
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0xc) = (int)uVar5;
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0x10) = (int)uVar5;
    return 1;
  case 4: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    *(short *)(this + 0x14) = (short)uVar5;
    return 1;
  case 5: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    *(short *)(this + 0x16) = (short)uVar5;
    return 1;
  case 6: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x18] = SUB81(uVar5,0);
    return 1;
  case 7: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x19] = SUB81(uVar5,0);
    return 1;
  case 8: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x1a] = SUB81(uVar5,0);
    return 1;
  case 9: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x1b] = SUB81(uVar5,0);
    return 1;
  case 10: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(short *)(this + 0x1c) = (short)uVar5;
    return 1;
  case 0xb: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(short *)(this + 0x1e) = (short)uVar5;
    return 1;
  case 0xc: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(short *)(this + 0x20) = (short)uVar5;
    return 1;
  case 0xd: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(short *)(this + 0x22) = (short)uVar5;
    return 1;
  case 0xe: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(short *)(this + 0x24) = (short)uVar5;
    return 1;
  case 0xf: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(short *)(this + 0x26) = (short)uVar5;
    return 1;
  case 0x10: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(short *)(this + 0x28) = (short)uVar5;
    return 1;
  case 0x11: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x2a] = SUB81(uVar5,0);
    return 1;
  case 0x12: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x2b] = SUB81(uVar5,0);
    return 1;
  case 0x13: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x2c] = SUB81(uVar5,0);
    return 1;
  case 0x14: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x2d] = SUB81(uVar5,0);
    return 1;
  case 0x15: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x2e] = SUB81(uVar5,0);
    return 1;
  case 0x16: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    *(int *)(this + 0x30) = (int)uVar5;
    return 1;
  case 0x17: ;
    uVar2 = F_00e8c050(param_2);
    iVar4 = 0;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e50570(uVar1);
      this[iVar4 + 0x34] = SUB81(uVar5,0);
      iVar4 = iVar4 + 1;
      if (4 < iVar4) {
        return 1;
      }
    }
    break;
  case 0x18: ;
    uVar2 = F_00e8c050(param_2);
    iVar4 = 0;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e50570(uVar1);
      this[iVar4 + 0x39] = SUB81(uVar5,0);
      iVar4 = iVar4 + 1;
      if (7 < iVar4) {
        return 1;
      }
    }
    break;
  case 0x19: ;
    uVar2 = F_00e8c050(param_2);
    iVar4 = 0;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e50570(uVar1);
      this[iVar4 + 0x41] = SUB81(uVar5,0);
      iVar4 = iVar4 + 1;
      if (7 < iVar4) {
        return 1;
      }
    }
    break;
  case 0x1a: ;
    uVar2 = F_00e8c050(param_2);
    iVar4 = 0;
    pCVar3 = this + 0x4c;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e50570(uVar1);
      *(int *)pCVar3 = (int)uVar5;
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar3 + 4;
      if (0x1d < iVar4) {
        return 1;
      }
    }
    break;
  case 0x1b: ;
    uVar2 = F_00e8c050(param_2);
    iVar4 = 0;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e50570(uVar1);
      this[iVar4 + 0xc4] = SUB81(uVar5,0);
      iVar4 = iVar4 + 1;
      if (0x1d < iVar4) {
        return 1;
      }
    }
    break;
  case 0x1c: ;
    uVar2 = F_00e8c050(param_2);
    iVar4 = 0;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e50570(uVar1);
      this[iVar4 + 0xe2] = SUB81(uVar5,0);
      iVar4 = iVar4 + 1;
      if (0x1d < iVar4) {
        return 1;
      }
    }
    break;
  case 0x1d: ;
    uVar2 = F_00e8c050(param_2);
    iVar4 = 0;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e50570(uVar1);
      this[iVar4 + 0x100] = SUB81(uVar5,0);
      iVar4 = iVar4 + 1;
      if (0x1d < iVar4) {
        return 1;
      }
    }
    break;
  case 0x1e: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x11e] = SUB81(uVar5,0);
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf17 */
byte F_00fc0920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc0920u, gen_a0, gen_a1, gen_a2, 0u);
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
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar8 = F_00e50570(uVar3 + 2);
  this[4] = SUB81(uVar8,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e505e0(uVar6 + 3);
  *(int *)(this + 8) = (int)uVar8;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e505e0(uVar3 + 3);
  *(int *)(this + 0xc) = (int)uVar8;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e505e0(uVar6 + 3);
  *(int *)(this + 0x10) = (int)uVar8;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e50570(uVar3 + 3);
  *(short *)(this + 0x14) = (short)uVar8;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  *(short *)(this + 0x16) = (short)uVar8;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e50570(uVar3 + 3);
  this[0x18] = SUB81(uVar8,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  this[0x19] = SUB81(uVar8,0);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e50570(uVar3 + 3);
  this[0x1a] = SUB81(uVar8,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  this[0x1b] = SUB81(uVar8,0);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e505e0(uVar3 + 3);
  *(short *)(this + 0x1c) = (short)uVar8;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e505e0(uVar6 + 3);
  *(short *)(this + 0x1e) = (short)uVar8;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e505e0(uVar3 + 3);
  *(short *)(this + 0x20) = (short)uVar8;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e505e0(uVar6 + 3);
  *(short *)(this + 0x22) = (short)uVar8;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e505e0(uVar3 + 3);
  *(short *)(this + 0x24) = (short)uVar8;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e505e0(uVar6 + 3);
  *(short *)(this + 0x26) = (short)uVar8;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e505e0(uVar3 + 3);
  *(short *)(this + 0x28) = (short)uVar8;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  this[0x2a] = SUB81(uVar8,0);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e50570(uVar3 + 3);
  this[0x2b] = SUB81(uVar8,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  this[0x2c] = SUB81(uVar8,0);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e50570(uVar3 + 3);
  this[0x2d] = SUB81(uVar8,0);
  uVar7 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  this[0x2e] = SUB81(uVar8,0);
  uVar3 = F_00c51da0(uVar7 + 3,0x22);
  uVar8 = F_00e50570(uVar7 + 3);
  uVar3 = uVar3 + 1;
  *(int *)(this + 0x30) = (int)uVar8;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 0x34] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 0x39] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 0x41] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
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
    uVar8 = F_00e50570(uVar7);
    *(int *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = (int)uVar8;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
  } while (iVar5 < 0x1e);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 0xc4] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1e);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 0xe2] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1e);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 0x100] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
    if (0x1d < iVar5) {
LAB_00fc0ded: ;
      uVar6 = F_00c51da0(uVar3 + 4,0x22);
      uVar8 = F_00e50570(uVar3 + 4);
      this[0x11e] = SUB81(uVar8,0);
      if (param_2 != (uint *)0x0) {
        uVar3 = F_00c51da0(uVar6,0x7d);
        *param_2 = uVar3;
      }
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00fc0ded;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf10 */
uint F_00fc0e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc0e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf23 */
byte F_00fc0f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc0f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined * pvVar2;
  int iVar3;
  undefined1 * puVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 8),*(int *)(this + 8) >> 0x1f);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0xc),*(int *)(this + 0xc) >> 0x1f);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x10),*(int *)(this + 0x10) >> 0x1f);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x14),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x16),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x18],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,7,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x19],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,8,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1a],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,9,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1b],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,10,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 0x1c),
             (int)*(short *)(this + 0x1c) >> 0x1f);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xb,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 0x1e),
             (int)*(short *)(this + 0x1e) >> 0x1f);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xc,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 0x20),
             (int)*(short *)(this + 0x20) >> 0x1f);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xd,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 0x22),
             (int)*(short *)(this + 0x22) >> 0x1f);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xe,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 0x24),
             (int)*(short *)(this + 0x24) >> 0x1f);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xf,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 0x26),
             (int)*(short *)(this + 0x26) >> 0x1f);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x10,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 0x28),
             (int)*(short *)(this + 0x28) >> 0x1f);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x11,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x2a],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x12,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x2b],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x13,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x2c],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x14,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x2d],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x15,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x2e],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x16,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x30),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x17,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,5,0);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x34],0);
    puVar4 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,(*(undefined * PTR32 *)(gen_frame + 0x4)),(int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x4))) >> 0x1f);
    F_00ea7fb0(pvVar2,puVar4);
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1);
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) < 5);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x18,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,8,0);
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar3 + 0x39],0);
    puVar4 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar3,iVar3 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x19,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,8,0);
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar3 + 0x41],0);
    puVar4 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar3,iVar3 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1a,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,0x1e,0);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0x4c;
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x4)),0);
    puVar4 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar3,iVar3 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar4);
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1e);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1b,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,0x1e,0);
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar3 + 0xc4],0);
    puVar4 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar3,iVar3 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1e);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1c,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,0x1e,0);
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar3 + 0xe2],0);
    puVar4 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar3,iVar3 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1e);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1d,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,0x1e,0);
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar3 + 0x100],0);
    puVar4 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar3,iVar3 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1e);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1e,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x11e],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf9 */
uint F_00fc1700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc1700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf11 */
byte F_00fc1720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc1720u, gen_a0, gen_a1, 0u, 0u);
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
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5);
  pcVar6 = (char *)F_0042a990(uVar5);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar9 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
    uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5);
    pbVar10 = (byte *)F_0042a990(uVar5);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00fc1833: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00fc1838;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00fc1833;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00fc1838: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
            uVar12 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13), uVar13 == uVar12)) {
                    uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00fc19a7;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_00fc19a7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf24 */
byte F_00fc19c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc19c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pCVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[4] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 1: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 8) = (int)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0xc) = (int)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0x10) = (int)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 4: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    *(short *)(this + 0x14) = (short)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 5: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    *(short *)(this + 0x16) = (short)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 6: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x18] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 7: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x19] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 8: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x1a] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 9: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x1b] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 10: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(short *)(this + 0x1c) = (short)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0xb: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(short *)(this + 0x1e) = (short)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0xc: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(short *)(this + 0x20) = (short)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0xd: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(short *)(this + 0x22) = (short)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0xe: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(short *)(this + 0x24) = (short)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0xf: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(short *)(this + 0x26) = (short)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x10: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(short *)(this + 0x28) = (short)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x11: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x2a] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x12: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x2b] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x13: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x2c] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x14: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x2d] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x15: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x2e] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x16: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    *(int *)(this + 0x30) = (int)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x17: ;
    uVar2 = F_00e8c050(this_00);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e505e0(uVar1);
      this[iVar3 + 0x34] = SUB81(uVar5,0);
      iVar3 = iVar3 + 1;
      if (4 < iVar3) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 0x18: ;
    uVar2 = F_00e8c050(this_00);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e505e0(uVar1);
      this[iVar3 + 0x39] = SUB81(uVar5,0);
      iVar3 = iVar3 + 1;
      if (7 < iVar3) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 0x19: ;
    uVar2 = F_00e8c050(this_00);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e505e0(uVar1);
      this[iVar3 + 0x41] = SUB81(uVar5,0);
      iVar3 = iVar3 + 1;
      if (7 < iVar3) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 0x1a: ;
    uVar2 = F_00e8c050(this_00);
    iVar3 = 0;
    pCVar4 = this + 0x4c;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e505e0(uVar1);
      *(int *)pCVar4 = (int)uVar5;
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 4;
      if (0x1d < iVar3) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 0x1b: ;
    uVar2 = F_00e8c050(this_00);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e505e0(uVar1);
      this[iVar3 + 0xc4] = SUB81(uVar5,0);
      iVar3 = iVar3 + 1;
      if (0x1d < iVar3) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 0x1c: ;
    uVar2 = F_00e8c050(this_00);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e505e0(uVar1);
      this[iVar3 + 0xe2] = SUB81(uVar5,0);
      iVar3 = iVar3 + 1;
      if (0x1d < iVar3) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 0x1d: ;
    uVar2 = F_00e8c050(this_00);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e505e0(uVar1);
      this[iVar3 + 0x100] = SUB81(uVar5,0);
      iVar3 = iVar3 + 1;
      if (0x1d < iVar3) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 0x1e: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x11e] = SUB81(uVar5,0);
    break;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf18 */
byte F_00fc21a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc21a0u, gen_a0, gen_a1, gen_a2, 0u);
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
  undefined * pCVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    this[4] = SUB81(uVar8,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e505e0(iVar5);
    *(int *)(this + 8) = (int)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e505e0(iVar5);
    *(int *)(this + 0xc) = (int)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e505e0(iVar5);
    *(int *)(this + 0x10) = (int)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    *(short *)(this + 0x14) = (short)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    *(short *)(this + 0x16) = (short)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,6);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    this[0x18] = SUB81(uVar8,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,7);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    this[0x19] = SUB81(uVar8,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    this[0x1a] = SUB81(uVar8,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,9);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    this[0x1b] = SUB81(uVar8,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,10);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e505e0(iVar5);
    *(short *)(this + 0x1c) = (short)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xb);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e505e0(iVar5);
    *(short *)(this + 0x1e) = (short)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e505e0(iVar5);
    *(short *)(this + 0x20) = (short)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xd);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e505e0(iVar5);
    *(short *)(this + 0x22) = (short)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xe);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e505e0(iVar5);
    *(short *)(this + 0x24) = (short)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xf);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e505e0(iVar5);
    *(short *)(this + 0x26) = (short)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x10);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e505e0(iVar5);
    *(short *)(this + 0x28) = (short)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x11);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    this[0x2a] = SUB81(uVar8,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x12);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    this[0x2b] = SUB81(uVar8,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x13);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    this[0x2c] = SUB81(uVar8,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x14);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    this[0x2d] = SUB81(uVar8,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x15);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    this[0x2e] = SUB81(uVar8,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x16);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    *(int *)(this + 0x30) = (int)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x17);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b4));
    iVar5 = uVar3 + 10;
    iVar6 = 0;
    do {
      uVar8 = F_00e50570(iVar5);
      this[iVar6 + 0x34] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(iVar5,0x2c);
      iVar6 = iVar6 + 1;
      iVar5 = uVar3 + 2;
    } while (iVar6 < 5);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x18);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b4));
    iVar5 = uVar3 + 10;
    iVar6 = 0;
    do {
      uVar8 = F_00e50570(iVar5);
      this[iVar6 + 0x39] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(iVar5,0x2c);
      iVar6 = iVar6 + 1;
      iVar5 = uVar3 + 2;
    } while (iVar6 < 8);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x19);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b4));
    iVar5 = uVar3 + 10;
    iVar6 = 0;
    do {
      uVar8 = F_00e50570(iVar5);
      this[iVar6 + 0x41] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(iVar5,0x2c);
      iVar6 = iVar6 + 1;
      iVar5 = uVar3 + 2;
    } while (iVar6 < 8);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1a);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b4));
    iVar5 = uVar3 + 10;
    pCVar7 = this + 0x4c;
    (*(int *)(gen_frame + 0x4)) = 0x1e;
    do {
      uVar8 = F_00e50570(iVar5);
      *(int *)pCVar7 = (int)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      pCVar7 = pCVar7 + 4;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x4)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1b);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b4));
    iVar5 = uVar3 + 10;
    iVar6 = 0;
    do {
      uVar8 = F_00e50570(iVar5);
      this[iVar6 + 0xc4] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(iVar5,0x2c);
      iVar6 = iVar6 + 1;
      iVar5 = uVar3 + 2;
    } while (iVar6 < 0x1e);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1c);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b4));
    iVar5 = uVar3 + 10;
    iVar6 = 0;
    do {
      uVar8 = F_00e50570(iVar5);
      this[iVar6 + 0xe2] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(iVar5,0x2c);
      iVar6 = iVar6 + 1;
      iVar5 = uVar3 + 2;
    } while (iVar6 < 0x1e);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1d);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b4));
    iVar5 = uVar3 + 10;
    iVar6 = 0;
    do {
      uVar8 = F_00e50570(iVar5);
      this[iVar6 + 0x100] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(iVar5,0x2c);
      iVar6 = iVar6 + 1;
      iVar5 = uVar3 + 2;
    } while (iVar6 < 0x1e);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1e);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b5b8));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    this[0x11e] = SUB81(uVar8,0);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf13 */
uint F_00fc2d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc2d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf25 */
byte F_00fc2e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc2e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x116e0];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x116d8)) = 0xfc2e4d;
  (*(uint *)(gen_frame + 0x116d8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,"Int32");
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 8),*(int *)(this + 8) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7e80(pvVar2,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,"Int32");
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0xc),*(int *)(this + 0xc) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7e80(pvVar2,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,"Int32");
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x10),*(int *)(this + 0x10) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7e80(pvVar2,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,"UInt16");
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x14),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7e80(pvVar2,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,"UInt16");
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x16),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7e80(pvVar2,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x18],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  pvVar1 = (undefined *)F_00e9e450(param_1,7,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7e80(pvVar2,7);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,7);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,7);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x19],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  pvVar1 = (undefined *)F_00e9e450(param_1,8,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7e80(pvVar2,8);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,8);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,8);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1a],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  pvVar1 = (undefined *)F_00e9e450(param_1,9,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7e80(pvVar2,9);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,9);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,9);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1b],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  pvVar1 = (undefined *)F_00e9e450(param_1,10,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7e80(pvVar2,10);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,10);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11664)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,10);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11664)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11664)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10164)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10164)));
  F_00ea7fb0(pvVar2,"Int16");
  F_0042c880(((undefined1 *)(gen_frame + 0x10164)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 0x1c),
             (int)*(short *)(this + 0x1c) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x100bc)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x100bc)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x100bc)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xb,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10014)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10014)));
  F_00ea7e80(pvVar2,0xb);
  F_0042c880(((undefined1 *)(gen_frame + 0x10014)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10110)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xb);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10110)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10110)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10a94)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xb);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10a94)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10a94)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11370)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11370)));
  F_00ea7fb0(pvVar2,"Int16");
  F_0042c880(((undefined1 *)(gen_frame + 0x11370)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 0x1e),
             (int)*(short *)(this + 0x1e) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10944)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10944)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10944)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xc,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x112c8)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x112c8)));
  F_00ea7e80(pvVar2,0xc);
  F_0042c880(((undefined1 *)(gen_frame + 0x112c8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1020c)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xc);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1020c)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1020c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11220)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xc);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11220)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11220)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1089c)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1089c)));
  F_00ea7fb0(pvVar2,"Int16");
  F_0042c880(((undefined1 *)(gen_frame + 0x1089c)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 0x20),
             (int)*(short *)(this + 0x20) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11178)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11178)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11178)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xd,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10404)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10404)));
  F_00ea7e80(pvVar2,0xd);
  F_0042c880(((undefined1 *)(gen_frame + 0x10404)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x110d0)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xd);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x110d0)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x110d0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x107f4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xd);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x107f4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x107f4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11028)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11028)));
  F_00ea7fb0(pvVar2,"Int16");
  F_0042c880(((undefined1 *)(gen_frame + 0x11028)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 0x22),
             (int)*(short *)(this + 0x22) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x101b8)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x101b8)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x101b8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xe,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10f80)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10f80)));
  F_00ea7e80(pvVar2,0xe);
  F_0042c880(((undefined1 *)(gen_frame + 0x10f80)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1074c)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xe);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1074c)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1074c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10ed8)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xe);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10ed8)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10ed8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1035c)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1035c)));
  F_00ea7fb0(pvVar2,"Int16");
  F_0042c880(((undefined1 *)(gen_frame + 0x1035c)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 0x24),
             (int)*(short *)(this + 0x24) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10e30)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10e30)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10e30)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xf,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x106a4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x106a4)));
  F_00ea7e80(pvVar2,0xf);
  F_0042c880(((undefined1 *)(gen_frame + 0x106a4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10d88)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xf);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10d88)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10d88)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10068)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xf);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10068)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10068)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10ce0)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10ce0)));
  F_00ea7fb0(pvVar2,"Int16");
  F_0042c880(((undefined1 *)(gen_frame + 0x10ce0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 0x26),
             (int)*(short *)(this + 0x26) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x105fc)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x105fc)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x105fc)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x10,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10c38)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10c38)));
  F_00ea7e80(pvVar2,0x10);
  F_0042c880(((undefined1 *)(gen_frame + 0x10c38)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x102b4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x10);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x102b4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x102b4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10b90)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x10);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10b90)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10b90)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10554)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10554)));
  F_00ea7fb0(pvVar2,"Int16");
  F_0042c880(((undefined1 *)(gen_frame + 0x10554)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x11585f0),(int)*(short *)(this + 0x28),
             (int)*(short *)(this + 0x28) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11418)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11418)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11418)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x11,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10ae8)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10ae8)));
  F_00ea7e80(pvVar2,0x11);
  F_0042c880(((undefined1 *)(gen_frame + 0x10ae8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10260)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x11);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10260)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10260)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x109ec)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x11);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x109ec)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x109ec)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x104ac)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x104ac)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x104ac)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x2a],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x113c4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x113c4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x113c4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x12,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1131c)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1131c)));
  F_00ea7e80(pvVar2,0x12);
  F_0042c880(((undefined1 *)(gen_frame + 0x1131c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11274)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x12);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11274)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11274)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x111cc)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x12);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x111cc)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x111cc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11124)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11124)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11124)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x2b],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1107c)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1107c)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1107c)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x13,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10fd4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10fd4)));
  F_00ea7e80(pvVar2,0x13);
  F_0042c880(((undefined1 *)(gen_frame + 0x10fd4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10f2c)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x13);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10f2c)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10f2c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10e84)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x13);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10e84)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10e84)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10ddc)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10ddc)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x10ddc)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x2c],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10d34)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10d34)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10d34)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x14,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10c8c)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10c8c)));
  F_00ea7e80(pvVar2,0x14);
  F_0042c880(((undefined1 *)(gen_frame + 0x10c8c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10be4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x14);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10be4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10be4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10b3c)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x14);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10b3c)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10b3c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10a40)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10a40)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x10a40)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x2d],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10998)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10998)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10998)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x15,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x108f0)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x108f0)));
  F_00ea7e80(pvVar2,0x15);
  F_0042c880(((undefined1 *)(gen_frame + 0x108f0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10848)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x15);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10848)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10848)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x107a0)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x15);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x107a0)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x107a0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x106f8)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x106f8)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x106f8)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x2e],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10650)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10650)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10650)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x16,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x105a8)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x105a8)));
  F_00ea7e80(pvVar2,0x16);
  F_0042c880(((undefined1 *)(gen_frame + 0x105a8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10500)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x16);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10500)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10500)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10458)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x16);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10458)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10458)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x103b0)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x103b0)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x103b0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x30),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10308)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10308)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10308)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x17,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1146c)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1146c)));
  F_00ea7e80(pvVar2,0x17);
  F_0042c880(((undefined1 *)(gen_frame + 0x1146c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x115bc)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x17);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x115bc)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x115bc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11568)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x17);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11568)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11568)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114c0)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114c0)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x114c0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11514)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11514)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x11514)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 5;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
  (*(int *)(gen_frame + 0x10008)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x10008)) + 0x34],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x116b8));
    iVar5 = (*(int *)(gen_frame + 0x10008)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x10008));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
    (*(int *)(gen_frame + 0x10008)) = (*(int *)(gen_frame + 0x10008)) + 1;
  } while ((*(int *)(gen_frame + 0x10008)) < 5);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x18,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
  F_00ea7e80(pvVar2,0x18);
  F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11514)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x18);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11514)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11514)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114c0)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x18);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114c0)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114c0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11568)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11568)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11568)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x115bc)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x115bc)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x115bc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1146c)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 8;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1146c)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x1146c)));
  (*(int *)(gen_frame + 0x10008)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x10008)) + 0x39],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x116b8));
    iVar5 = (*(int *)(gen_frame + 0x10008)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x10008));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
    (*(int *)(gen_frame + 0x10008)) = (*(int *)(gen_frame + 0x10008)) + 1;
  } while ((*(int *)(gen_frame + 0x10008)) < 8);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x19,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
  F_00ea7e80(pvVar2,0x19);
  F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11514)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x19);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11514)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11514)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114c0)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x19);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114c0)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114c0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11568)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11568)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11568)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x115bc)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x115bc)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x115bc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1146c)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 8;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1146c)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x1146c)));
  (*(int *)(gen_frame + 0x10008)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x10008)) + 0x41],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x116b8));
    iVar5 = (*(int *)(gen_frame + 0x10008)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x10008));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
    (*(int *)(gen_frame + 0x10008)) = (*(int *)(gen_frame + 0x10008)) + 1;
  } while ((*(int *)(gen_frame + 0x10008)) < 8);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1a,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
  F_00ea7e80(pvVar2,0x1a);
  F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11514)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x1a);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11514)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11514)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114c0)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x1a);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114c0)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114c0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11568)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11568)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x11568)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x115bc)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x115bc)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x115bc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1146c)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x1e;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1146c)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x1146c)));
  (*(undefined * PTR32 *)(gen_frame + 0x10010)) = this + 0x4c;
  (*(int *)(gen_frame + 0x10008)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x10010)),0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x116b8));
    iVar5 = (*(int *)(gen_frame + 0x10008)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x10008));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
    (*(undefined * PTR32 *)(gen_frame + 0x10010)) = (*(undefined * PTR32 *)(gen_frame + 0x10010)) + 4;
    (*(int *)(gen_frame + 0x10008)) = (*(int *)(gen_frame + 0x10008)) + 1;
  } while ((*(int *)(gen_frame + 0x10008)) < 0x1e);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1b,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
  F_00ea7e80(pvVar2,0x1b);
  F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11514)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x1b);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11514)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11514)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114c0)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x1b);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114c0)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114c0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11568)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11568)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11568)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x115bc)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x115bc)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x115bc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1146c)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x1e;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1146c)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x1146c)));
  (*(int *)(gen_frame + 0x10008)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x10008)) + 0xc4],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x116b8));
    iVar5 = (*(int *)(gen_frame + 0x10008)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x10008));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
    (*(int *)(gen_frame + 0x10008)) = (*(int *)(gen_frame + 0x10008)) + 1;
  } while ((*(int *)(gen_frame + 0x10008)) < 0x1e);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1c,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
  F_00ea7e80(pvVar2,0x1c);
  F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11514)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x1c);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11514)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11514)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114c0)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x1c);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114c0)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114c0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11568)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11568)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11568)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x115bc)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x115bc)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x115bc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1146c)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x1e;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1146c)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x1146c)));
  (*(int *)(gen_frame + 0x10008)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x10008)) + 0xe2],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x116b8));
    iVar5 = (*(int *)(gen_frame + 0x10008)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x10008));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
    (*(int *)(gen_frame + 0x10008)) = (*(int *)(gen_frame + 0x10008)) + 1;
  } while ((*(int *)(gen_frame + 0x10008)) < 0x1e);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1d,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
  F_00ea7e80(pvVar2,0x1d);
  F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11514)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x1d);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11514)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11514)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114c0)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x1d);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114c0)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114c0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11568)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11568)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11568)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x115bc)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x115bc)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x115bc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1146c)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x1e;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1146c)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x1146c)));
  (*(int *)(gen_frame + 0x10008)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x10008)) + 0x100],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x116b8));
    iVar5 = (*(int *)(gen_frame + 0x10008)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x10008));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
    (*(int *)(gen_frame + 0x10008)) = (*(int *)(gen_frame + 0x10008)) + 1;
  } while ((*(int *)(gen_frame + 0x10008)) < 0x1e);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1e,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11610)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11610)));
  F_00ea7e80(pvVar2,0x1e);
  F_0042c880(((undefined1 *)(gen_frame + 0x11610)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11514)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x1e);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11514)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11514)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x114c0)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x1e);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114c0)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x114c0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11568)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11568)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11568)));
  F_00c472af(((undefined1 *)(gen_frame + 0x116b8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x11e],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x115bc)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x115bc)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x116b8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x115bc)));
  F_00c47745((*(uint *)(gen_frame + 0x116d8)) ^ (uint)(uint)(gen_frame + 0x0));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf14 */
byte F_00fc60b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc60b0u, gen_a0, gen_a1, 0u, 0u);
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
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6);
    pcVar7 = (char *)F_0042a990(uVar6);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
      uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6);
      pbVar11 = (byte *)F_0042a990(uVar6);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00fc6202: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00fc6207;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00fc6202;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00fc6207: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
        uVar12 = F_00e8c050(this_01);
        uVar13 = F_00e8c050(this_00);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar13 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14);
                  uVar14 = F_0042a990(uVar14);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_00fc610e;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 1;
        }
      }
    }
  }
LAB_00fc610e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf16 */
byte F_00fc6360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc6360u, gen_a0, gen_a1, 0u, 0u);
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
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: FUN_00fc6530 */
unsigned int F_00fc6530(unsigned int gen_a0)
{
  GEN_ENTER(0xfc6530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x34) = 0;
  *(undefined1 *)(in_ecx + 0x38) = 0;
  *(undefined8 *)(in_ecx + 0x39) = 0;
  *(undefined8 *)(in_ecx + 0x41) = 0;
  *(undefined4 *)(in_ecx + 0x4c) = 0;
  *(undefined4 *)(in_ecx + 0x50) = 0;
  *(undefined4 *)(in_ecx + 0x54) = 0;
  *(undefined4 *)(in_ecx + 0x58) = 0;
  *(undefined4 *)(in_ecx + 0x5c) = 0;
  *(undefined4 *)(in_ecx + 0x60) = 0;
  *(undefined4 *)(in_ecx + 100) = 0;
  *(undefined4 *)(in_ecx + 0x68) = 0;
  *(undefined4 *)(in_ecx + 0x6c) = 0;
  *(undefined4 *)(in_ecx + 0x70) = 0;
  *(undefined4 *)(in_ecx + 0x74) = 0;
  *(undefined4 *)(in_ecx + 0x78) = 0;
  *(undefined4 *)(in_ecx + 0x7c) = 0;
  *(undefined4 *)(in_ecx + 0x80) = 0;
  *(undefined4 *)(in_ecx + 0x84) = 0;
  *(undefined4 *)(in_ecx + 0x88) = 0;
  *(undefined4 *)(in_ecx + 0x8c) = 0;
  *(undefined4 *)(in_ecx + 0x90) = 0;
  *(undefined4 *)(in_ecx + 0x94) = 0;
  *(undefined4 *)(in_ecx + 0x98) = 0;
  *(undefined4 *)(in_ecx + 0x9c) = 0;
  *(undefined4 *)(in_ecx + 0xa0) = 0;
  *(undefined4 *)(in_ecx + 0xa4) = 0;
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  *(undefined4 *)(in_ecx + 0xb4) = 0;
  *(undefined4 *)(in_ecx + 0xb8) = 0;
  *(undefined4 *)(in_ecx + 0xbc) = 0;
  *(undefined4 *)(in_ecx + 0xc0) = 0;
  *(undefined8 *)(in_ecx + 0xc4) = 0;
  *(undefined8 *)(in_ecx + 0xcc) = 0;
  *(undefined8 *)(in_ecx + 0xd4) = 0;
  *(undefined4 *)(in_ecx + 0xdc) = 0;
  *(undefined2 *)(in_ecx + 0xe0) = 0;
  *(undefined8 *)(in_ecx + 0xe2) = 0;
  *(undefined8 *)(in_ecx + 0xea) = 0;
  *(undefined8 *)(in_ecx + 0xf2) = 0;
  *(undefined4 *)(in_ecx + 0xfa) = 0;
  *(undefined2 *)(in_ecx + 0xfe) = 0;
  *(undefined8 *)(in_ecx + 0x100) = 0;
  *(undefined8 *)(in_ecx + 0x108) = 0;
  *(undefined8 *)(in_ecx + 0x110) = 0;
  *(undefined4 *)(in_ecx + 0x118) = 0;
  *(undefined2 *)(in_ecx + 0x11c) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf1 */
uint F_00fc6680(void)
{
  GEN_ENTER(0xfc6680u, 0u, 0u, 0u, 0u);
  return 0x31;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf2 */
uint F_00fc6690(void)
{
  GEN_ENTER(0xfc6690u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136b464);
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf3 */
uint F_00fc66a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc66a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12aeb84) + param_1 * 4);
}

/* ref: FUN_00fc66c0 */
uint F_00fc66c0(unsigned int gen_a0)
{
  GEN_ENTER(0xfc66c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12aeb9c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf4 */
uint F_00fc66e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc66e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  return 0xffffffff;
}

/* ref: FUN_00fc6720 */
uint F_00fc6720(unsigned int gen_a0)
{
  GEN_ENTER(0xfc6720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x1ce;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf6 */
uint F_00fc6730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc6730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136b44c))[param_1];
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf7 */
uint F_00fc6750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc6750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12aeb3c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf8 */
uint F_00fc6770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc6770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12aeb6c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf9 */
uint F_00fc6790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc6790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3c84) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf10 */
uint F_00fc67b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc67b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12aeb54) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf14 */
uint F_00fc67d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc67d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12aeb6c) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12aeb6c) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3c84) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3c84) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12aeb54) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3c84) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12aeb3c) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12aeb54) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12aeb3c) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf13 */
uint F_00fc6850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfc6850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3c84) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12aeb54) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12aeb3c) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12aeb3c) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3c84) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12aeb54) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf12 */
uint F_00fc68d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xfc68d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3c84) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12aeb54) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf11 */
uint F_00fc6960(unsigned int gen_a0)
{
  GEN_ENTER(0xfc6960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,2);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,3);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,4);
  uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,5);
  return uVar6 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf15 */
uint F_00fc69c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc69c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,5,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf19 */
uint F_00fc6a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc6a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,5,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00fc6ac0 */
uint F_00fc6ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xfc6ac0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12aedf4));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  *(undefined2 *)(in_ecx + 0xe) = 0;
  *(undefined1 *)((int)in_ecx + 0x3a) = 0;
  *(undefined1 *)(in_ecx + 4) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00fc6af0 */
unsigned int F_00fc6af0(unsigned int gen_a0)
{
  GEN_ENTER(0xfc6af0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf2 */
uint F_00fc6b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc6b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136b48c) + 0x10))))(&REFG(undefined * PTR32, 0x136b48c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00fc6b30 */
uint F_00fc6b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc6b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136b48c) + 0x10))))(&REFG(undefined * PTR32, 0x136b48c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf4 */
uint F_00fc6b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc6b60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 8;
  case 1: ;
    return in_ecx + 0x10;
  case 2: ;
    return in_ecx + 0x30;
  case 3: ;
    return in_ecx + 0x38;
  case 4: ;
    return in_ecx + 0x39;
  case 5: ;
    return in_ecx + 0x3a;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf3 */
uint F_00fc6bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc6bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  if ((param_2 < *(uint *)(&REFG(undefined, 0x12aeb3c) + param_1 * 4)) && (param_1 == 1)) {
    return (uint)(this + param_2 + 0x10);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf6 */
byte F_00fc6bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc6bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pRVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    pRVar5 = this + 0x10;
    iVar6 = 0x20;
    do {
      *pRVar5 = pRVar5[(int)param_1 - (int)this];
      pRVar5 = pRVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *(int *)(this + 0x30) = param_1[0xc];
    *(int *)(this + 0x34) = param_1[0xd];
    this[0x38] = *(undefined *)(param_1 + 0xe);
    this[0x39] = *(undefined *)((int)param_1 + 0x39);
    uVar4 = (uint)(byte)*(undefined *)((int)param_1 + 0x3a);
    this[0x3a] = *(undefined *)((int)param_1 + 0x3a);
  }
  return (byte)uVar4;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf5 */
uint F_00fc6c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc6c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 RVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pRVar6;
  int iVar7;
  
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      uVar5 = param_1[2];
      *(uint *)(this + 8) = uVar5;
      *(int *)(this + 0xc) = param_1[3];
      return uVar5;
    case 1: ;
      pRVar6 = this + 0x10;
      iVar7 = 0x20;
      do {
        *pRVar6 = pRVar6[(int)param_1 - (int)this];
        pRVar6 = pRVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      return (uint)pRVar6;
    case 2: ;
      uVar5 = param_1[0xc];
      *(uint *)(this + 0x30) = uVar5;
      *(int *)(this + 0x34) = param_1[0xd];
      return uVar5;
    case 3: ;
      this[0x38] = *(undefined *)(param_1 + 0xe);
      return param_2;
    case 4: ;
      RVar1 = *(undefined *)((int)param_1 + 0x39);
      this[0x39] = RVar1;
      return CONCAT31((int3)(param_2 >> 8),RVar1);
    case 5: ;
      this[0x3a] = *(undefined *)((int)param_1 + 0x3a);
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf8 */
byte F_00fc6d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc6d60u, gen_a0, gen_a1, 0u, 0u);
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
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6);
  pcVar7 = (char *)F_0042a990(uVar6);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6);
    pbVar11 = (byte *)F_0042a990(uVar6);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00fc6e63: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00fc6e68;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00fc6e63;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00fc6e68: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
      uVar12 = F_00e8c050(this_00);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_00fc6f1a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00fc6f1a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf22 */
byte F_00fc6f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfc6f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined * puVar6;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar4 = F_00e50570(uVar3);
    *(ulonglong *)(this + 8) = uVar4;
    return 1;
  case 1: ;
    uVar5 = 0xffffffff;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    F_00c4d9ef(this + 0x10,0x20,uVar3,uVar5);
    return 1;
  case 2: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar4 = F_00e50570(uVar3);
    *(ulonglong *)(this + 0x30) = uVar4;
    return 1;
  case 3: ;
    puVar6 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(param_2);
    bVar1 = F_0042b740(pvVar2,puVar6);
    this[0x38] = (undefined1)(bVar1 != 0);
    return 1;
  case 4: ;
    puVar6 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(param_2);
    bVar1 = F_0042b740(pvVar2,puVar6);
    this[0x39] = (undefined1)(bVar1 != 0);
    return 1;
  case 5: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar4 = F_00e50570(uVar3);
    this[0x3a] = SUB81(uVar4,0);
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf17 */
byte F_00fc7050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc7050u, gen_a0, gen_a1, gen_a2, 0u);
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
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar7 = F_00e50570(uVar3 + 2);
  iVar5 = uVar6 + 3;
  *(ulonglong *)(this + 8) = uVar7;
  uVar3 = F_00c51da0(iVar5,0x22);
  F_00c4d9ef(this + 0x10,(uVar3 - iVar5) + 1,iVar5,0xffffffff);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  *(ulonglong *)(this + 0x30) = uVar7;
  uVar3 = F_00c51da0((char *)(uVar6 + 3),0x22);
  this[0x38] = (undefined1)(*(char *)(uVar6 + 3) != '0');
  uVar6 = F_00c51da0((char *)(uVar3 + 3),0x22);
  this[0x39] = (undefined1)(*(char *)(uVar3 + 3) != '0');
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  this[0x3a] = SUB81(uVar7,0);
  if (param_2 != (uint *)0x0) {
    uVar3 = F_00c51da0(uVar3,0x7d);
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf10 */
uint F_00fc71a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc71a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf23 */
byte F_00fc72c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc72c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00ea7fb0(pvVar1,this + 0x10);
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x38]);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x39]);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x3a],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf9 */
uint F_00fc7400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc7400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf11 */
byte F_00fc7420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc7420u, gen_a0, gen_a1, 0u, 0u);
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
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5);
  pcVar6 = (char *)F_0042a990(uVar5);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar9 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
    uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5);
    pbVar10 = (byte *)F_0042a990(uVar5);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00fc7533: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00fc7538;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00fc7533;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00fc7538: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
            uVar12 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13), uVar13 == uVar12)) {
                    uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00fc76a7;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_00fc76a7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf24 */
byte F_00fc76c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc76c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined * puVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  uVar2 = F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e82f00(uVar2);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    *(ulonglong *)(this + 8) = uVar4;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 1: ;
    uVar5 = 0xffffffff;
    uVar2 = F_00e82f00(uVar2);
    uVar2 = F_0042a990(uVar2);
    F_00c4d9ef(this + 0x10,0x20,uVar2,uVar5);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(uVar2);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    *(ulonglong *)(this + 0x30) = uVar4;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 3: ;
    puVar6 = &REFG(undefined, 0x1158a00);
    pvVar3 = (undefined *)F_00e82f00(uVar2);
    bVar1 = F_0042b6a0(pvVar3,puVar6);
    this[0x38] = (undefined1)(bVar1 == 0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 4: ;
    puVar6 = &REFG(undefined, 0x1158a00);
    pvVar3 = (undefined *)F_00e82f00(uVar2);
    bVar1 = F_0042b6a0(pvVar3,puVar6);
    this[0x39] = (undefined1)(bVar1 == 0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 5: ;
    uVar2 = F_00e82f00(uVar2);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    this[0x3a] = SUB81(uVar4,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf18 */
byte F_00fc7860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc7860u, gen_a0, gen_a1, gen_a2, 0u);
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
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar3 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x136b658));
    uVar3 = uVar3 + 9;
    uVar7 = F_00e50570(uVar3);
    *(ulonglong *)(this + 8) = uVar7;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x136b658));
    iVar5 = uVar3 + 9;
    uVar3 = F_00c51da0(iVar5,0x22);
    F_00c4d9ef(this + 0x10,(uVar3 - iVar5) + 1,iVar5,0xffffffff);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x136b658));
    uVar3 = uVar3 + 9;
    uVar7 = F_00e50570(uVar3);
    *(ulonglong *)(this + 0x30) = uVar7;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar6 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x136b658));
    uVar3 = uVar6 + 9;
    this[0x38] = (undefined1)(*(char *)(uVar6 + 9) != '0');
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar6 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x136b658));
    uVar3 = uVar6 + 9;
    this[0x39] = (undefined1)(*(char *)(uVar6 + 9) != '0');
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x136b658));
    uVar3 = uVar3 + 9;
    uVar7 = F_00e50570(uVar3);
    this[0x3a] = SUB81(uVar7,0);
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf13 */
uint F_00fc7b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc7b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf25 */
byte F_00fc7c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc7c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt64");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"String");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,this + 0x10);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt64");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x38]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x39]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x3a],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf14 */
byte F_00fc8430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc8430u, gen_a0, gen_a1, 0u, 0u);
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
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6);
    pcVar7 = (char *)F_0042a990(uVar6);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
      uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6);
      pbVar11 = (byte *)F_0042a990(uVar6);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00fc8582: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00fc8587;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00fc8582;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00fc8587: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
        uVar12 = F_00e8c050(this_01);
        uVar13 = F_00e8c050(this_00);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar13 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14);
                  uVar14 = F_0042a990(uVar14);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_00fc848e;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 1;
        }
      }
    }
  }
LAB_00fc848e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf16 */
byte F_00fc86e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc86e0u, gen_a0, gen_a1, 0u, 0u);
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
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: FUN_00fc88b0 */
unsigned int F_00fc88b0(void)
{
  GEN_ENTER(0xfc88b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf1 */
uint F_00fc88e0(void)
{
  GEN_ENTER(0xfc88e0u, 0u, 0u, 0u, 0u);
  return 0x37;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf2 */
uint F_00fc88f0(void)
{
  GEN_ENTER(0xfc88f0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136b478);
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf3 */
uint F_00fc8900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc8900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12aebe4) + param_1 * 4);
}

/* ref: FUN_00fc8920 */
uint F_00fc8920(unsigned int gen_a0)
{
  GEN_ENTER(0xfc8920u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12aebf4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf4 */
uint F_00fc8940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc8940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  return 0xffffffff;
}

/* ref: FUN_00fc8980 */
uint F_00fc8980(unsigned int gen_a0)
{
  GEN_ENTER(0xfc8980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x1f5;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf6 */
uint F_00fc8990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc8990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136b468))[param_1];
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf7 */
uint F_00fc89b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc89b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12aebb4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf8 */
uint F_00fc89d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc89d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12aebd4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf9 */
uint F_00fc89f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc89f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3c9c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf10 */
uint F_00fc8a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc8a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12aebc4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf14 */
uint F_00fc8a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc8a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12aebd4) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12aebd4) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3c9c) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3c9c) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12aebc4) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3c9c) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12aebb4) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12aebc4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12aebb4) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf13 */
uint F_00fc8ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfc8ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3c9c) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12aebc4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12aebb4) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12aebb4) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3c9c) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12aebc4) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf12 */
uint F_00fc8b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xfc8b30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3c9c) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12aebc4) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf11 */
uint F_00fc8bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xfc8bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,2);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,3);
  return uVar4 + uVar1 + uVar2 + uVar3;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf17 */
uint F_00fc8c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xfc8c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_5 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf16 */
uint F_00fc8c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xfc8c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf15 */
uint F_00fc8c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc8c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,3,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf19 */
uint F_00fc8ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc8ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,3,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00fc8d00 */
uint F_00fc8d00(unsigned int gen_a0)
{
  GEN_ENTER(0xfc8d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12aeebc));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00fc8d20 */
unsigned int F_00fc8d20(unsigned int gen_a0)
{
  GEN_ENTER(0xfc8d20u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf2 */
uint F_00fc8d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc8d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136b490) + 0x10))))(&REFG(undefined * PTR32, 0x136b490),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00fc8d60 */
uint F_00fc8d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc8d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136b490) + 0x10))))(&REFG(undefined * PTR32, 0x136b490),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf4 */
uint F_00fc8d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc8d90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 8;
  case 2: ;
    return in_ecx + 0xc;
  case 3: ;
    return in_ecx + 0x10;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf3 */
uint F_00fc8de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc8de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf6 */
ushort F_00fc8df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc8df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  uVar1 = (ushort)uVar5;
  if ((ushort)uVar4 == uVar1) {
    *(int *)(this + 4) = param_1[1];
    *(short *)(this + 8) = (short)param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    uVar1 = *(ushort *)(param_1 + 4);
    *(ushort *)(this + 0x10) = uVar1;
  }
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf5 */
uint F_00fc8e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc8e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    uVar4 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      uVar4 = param_1[1];
      *(uint *)(this + 4) = uVar4;
      return uVar4;
    case 1: ;
      *(short *)(this + 8) = (short)param_1[2];
      return param_2;
    case 2: ;
      *(int *)(this + 0xc) = param_1[3];
      return param_2;
    case 3: ;
      uVar4 = CONCAT22((short)(param_2 >> 0x10),(short)param_1[4]);
      *(short *)(this + 0x10) = (short)param_1[4];
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf8 */
byte F_00fc8ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc8ef0u, gen_a0, gen_a1, 0u, 0u);
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
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6);
  pcVar7 = (char *)F_0042a990(uVar6);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6);
    pbVar11 = (byte *)F_0042a990(uVar6);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00fc8ff3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00fc8ff8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00fc8ff3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00fc8ff8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
      uVar12 = F_00e8c050(this_00);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_00fc90aa;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00fc90aa: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf22 */
byte F_00fc90c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfc90c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  ulonglong uVar2;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar2;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 8) = (short)uVar2;
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0xc) = (int)uVar2;
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 0x10) = (short)uVar2;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf17 */
byte F_00fc9180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc9180u, gen_a0, gen_a1, gen_a2, 0u);
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
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar7 = F_00e50570(uVar3 + 2);
  *(int *)(this + 4) = (int)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(short *)(this + 8) = (short)uVar7;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  *(int *)(this + 0xc) = (int)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(short *)(this + 0x10) = (short)uVar7;
  if (param_2 != (uint *)0x0) {
    uVar3 = F_00c51da0(uVar3,0x7d);
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf10 */
uint F_00fc9290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc9290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf23 */
byte F_00fc93b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc93b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 8),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x10),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf9 */
uint F_00fc94b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc94b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf11 */
byte F_00fc94d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc94d0u, gen_a0, gen_a1, 0u, 0u);
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
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5);
  pcVar6 = (char *)F_0042a990(uVar5);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar9 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
    uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5);
    pbVar10 = (byte *)F_0042a990(uVar5);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00fc95e3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00fc95e8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00fc95e3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00fc95e8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
            uVar12 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13), uVar13 == uVar12)) {
                    uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00fc9757;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_00fc9757: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf24 */
byte F_00fc9770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc9770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 8) = (short)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0xc) = (int)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 0x10) = (short)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf18 */
byte F_00fc98a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfc98a0u, gen_a0, gen_a1, gen_a2, 0u);
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
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b6e8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 4) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b6e8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(short *)(this + 8) = (short)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b6e8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 0xc) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b6e8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(short *)(this + 0x10) = (short)uVar6;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf13 */
uint F_00fc9aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc9aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf25 */
byte F_00fc9bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfc9bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt16");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 8),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt16");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x10),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf14 */
byte F_00fca130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfca130u, gen_a0, gen_a1, 0u, 0u);
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
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6);
    pcVar7 = (char *)F_0042a990(uVar6);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
      uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6);
      pbVar11 = (byte *)F_0042a990(uVar6);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00fca282: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00fca287;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00fca282;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00fca287: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
        uVar12 = F_00e8c050(this_01);
        uVar13 = F_00e8c050(this_00);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar13 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14);
                  uVar14 = F_0042a990(uVar14);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_00fca18e;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 1;
        }
      }
    }
  }
LAB_00fca18e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf16 */
byte F_00fca3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfca3e0u, gen_a0, gen_a1, 0u, 0u);
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
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf18 */
uint F_00fca5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfca5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint * puVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar2;
  puVar1 = param_3 + 1;
  puVar3 = puVar1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar1 = *(uint *)(param_1 + 4);
    return 8;
  case 1: ;
    *puVar1 = *(uint *)(param_1 + 8);
    return 8;
  case 2: ;
    *puVar1 = *(uint *)(param_1 + 0xc);
    return 8;
  case 3: ;
    *puVar1 = *(uint *)(param_1 + 0x10);
    return 8;
  case 4: ;
    *puVar1 = *(uint *)(param_1 + 0x14);
    return 8;
  case 5: ;
    *puVar1 = *(uint *)(param_1 + 0x18);
    return 8;
  case 6: ;
    *(undefined1 *)puVar1 = *(undefined1 *)(param_1 + 0x1c);
    return 5;
  case 7: ;
    *(undefined1 *)puVar1 = *(undefined1 *)(param_1 + 0x1d);
    return 5;
  case 8: ;
    *(undefined1 *)puVar1 = *(undefined1 *)(param_1 + 0x1e);
    return 5;
  case 9: ;
    uVar2 = *(uint *)(param_1 + 0x28);
    *(undefined8 *)puVar1 = *(undefined8 *)(param_1 + 0x20);
    param_3[3] = uVar2;
    return 0x10;
  case 10: ;
    puVar3 = param_3 + 2;
    *puVar1 = *(uint *)(param_1 + 0x30);
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf20 */
uint F_00fca730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfca730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
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
      *(uint *)(param_3 + 0x10) = *puVar3;
      return 8;
    case 4: ;
      *(uint *)(param_3 + 0x14) = *puVar3;
      return 8;
    case 5: ;
      *(uint *)(param_3 + 0x18) = *puVar3;
      return 8;
    case 6: ;
      *(char *)(param_3 + 0x1c) = (char)*puVar3;
      return 5;
    case 7: ;
      *(char *)(param_3 + 0x1d) = (char)*puVar3;
      return 5;
    case 8: ;
      *(char *)(param_3 + 0x1e) = (char)*puVar3;
      return 5;
    case 9: ;
      *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)puVar3;
      *(uint *)(param_3 + 0x28) = param_2[3];
      return 0x10;
    case 10: ;
      *(uint *)(param_3 + 0x30) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00fca890 */
uint F_00fca890(unsigned int gen_a0)
{
  GEN_ENTER(0xfca890u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12aef84));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *(undefined2 *)(in_ecx + 7) = 0;
  *(undefined1 *)((int)in_ecx + 0x1e) = 0;
  in_ecx[8] = GEN_FLT_TO(in_ecx[8], REFG(float, 0x1375ac0));
  in_ecx[9] = GEN_FLT_TO(in_ecx[9], REFG(float, 0x1375ac4));
  in_ecx[10] = GEN_FLT_TO(in_ecx[10], REFG(float, 0x1375ac8));
  in_ecx[0xc] = 0;
  return (uint)in_ecx;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf6 */
byte F_00fca8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfca8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 4) = param_1[1];
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    *(int *)(this + 0x14) = param_1[5];
    *(int *)(this + 0x18) = param_1[6];
    this[0x1c] = *(undefined *)(param_1 + 7);
    uVar4 = (uint)(byte)*(undefined *)((int)param_1 + 0x1d);
    this[0x1d] = *(undefined *)((int)param_1 + 0x1d);
    this[0x1e] = *(undefined *)((int)param_1 + 0x1e);
    *(int *)(this + 0x20) = param_1[8];
    *(int *)(this + 0x24) = param_1[9];
    *(int *)(this + 0x28) = param_1[10];
    *(int *)(this + 0x30) = param_1[0xc];
  }
  return (byte)uVar4;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf5 */
uint F_00fca990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfca990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 CVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      uVar5 = param_1[1];
      *(uint *)(this + 4) = uVar5;
      return uVar5;
    case 1: ;
      *(int *)(this + 8) = param_1[2];
      return uVar5;
    case 2: ;
      *(int *)(this + 0xc) = param_1[3];
      return uVar5;
    case 3: ;
      uVar5 = param_1[4];
      *(uint *)(this + 0x10) = uVar5;
      return uVar5;
    case 4: ;
      *(int *)(this + 0x14) = param_1[5];
      return uVar5;
    case 5: ;
      *(int *)(this + 0x18) = param_1[6];
      return uVar5;
    case 6: ;
      this[0x1c] = *(undefined *)(param_1 + 7);
      return uVar5;
    case 7: ;
      CVar1 = *(undefined *)((int)param_1 + 0x1d);
      this[0x1d] = CVar1;
      return CONCAT31((int3)(param_2 >> 8),CVar1);
    case 8: ;
      this[0x1e] = *(undefined *)((int)param_1 + 0x1e);
      return uVar5;
    case 9: ;
      *(int *)(this + 0x20) = param_1[8];
      *(int *)(this + 0x24) = param_1[9];
      *(int *)(this + 0x28) = param_1[10];
      return uVar5;
    case 10: ;
      *(int *)(this + 0x30) = param_1[0xc];
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf7 */
uint F_00fcaab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcaab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf19 */
uint F_00fcaad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcaad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf21 */
uint F_00fcaaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcaaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf18 */
uint F_00fcab10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfcab10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint * puVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar2;
  puVar1 = param_3 + 1;
  if (param_2 == 0) {
    puVar3 = param_3 + 2;
    *puVar1 = *(uint *)(param_1 + 4);
  }
  else {
    puVar3 = puVar1;
    if (param_2 == 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)(param_1 + 8);
      return 5;
    }
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf20 */
uint F_00fcab60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfcab60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  puVar3 = param_2;
  if (uVar1 == uVar2) {
    puVar3 = param_2 + 1;
    if (param_1 == 0) {
      *(uint *)(param_3 + 4) = *puVar3;
      puVar3 = param_2 + 2;
    }
    else if (param_1 == 1) {
      *(char *)(param_3 + 8) = (char)*puVar3;
      return 5;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00fcabc0 */
uint F_00fcabc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcabc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12aec64));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)((int)this + 4) = param_1[1];
    *(char *)((int)this + 8) = (char)param_1[2];
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf7 */
uint F_00fcac20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcac20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf19 */
uint F_00fcac40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcac40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf21 */
uint F_00fcac60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcac60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf18 */
uint F_00fcac80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfcac80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  uint * puVar4;
  int iVar5;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar1;
  puVar4 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined1 *)puVar4 = *(undefined1 *)(param_1 + 4);
    return 5;
  case 1: ;
    *puVar4 = *(uint *)(param_1 + 8);
    return 8;
  case 2: ;
    *puVar4 = *(uint *)(param_1 + 0xc);
    return 8;
  case 3: ;
    *puVar4 = *(uint *)(param_1 + 0x10);
    return 8;
  case 4: ;
    *(undefined2 *)puVar4 = *(undefined2 *)(param_1 + 0x14);
    return 6;
  case 5: ;
    *(undefined2 *)puVar4 = *(undefined2 *)(param_1 + 0x16);
    return 6;
  case 6: ;
    *(undefined1 *)puVar4 = *(undefined1 *)(param_1 + 0x18);
    return 5;
  case 7: ;
    *(undefined1 *)puVar4 = *(undefined1 *)(param_1 + 0x19);
    return 5;
  case 8: ;
    *(undefined1 *)puVar4 = *(undefined1 *)(param_1 + 0x1a);
    return 5;
  case 9: ;
    *(undefined1 *)puVar4 = *(undefined1 *)(param_1 + 0x1b);
    return 5;
  case 10: ;
    *(undefined2 *)puVar4 = *(undefined2 *)(param_1 + 0x1c);
    return 6;
  case 0xb: ;
    *(undefined2 *)puVar4 = *(undefined2 *)(param_1 + 0x1e);
    return 6;
  case 0xc: ;
    *(undefined2 *)puVar4 = *(undefined2 *)(param_1 + 0x20);
    return 6;
  case 0xd: ;
    *(undefined2 *)puVar4 = *(undefined2 *)(param_1 + 0x22);
    return 6;
  case 0xe: ;
    *(undefined2 *)puVar4 = *(undefined2 *)(param_1 + 0x24);
    return 6;
  case 0xf: ;
    *(undefined2 *)puVar4 = *(undefined2 *)(param_1 + 0x26);
    return 6;
  case 0x10: ;
    *(undefined2 *)puVar4 = *(undefined2 *)(param_1 + 0x28);
    return 6;
  case 0x11: ;
    *(undefined1 *)puVar4 = *(undefined1 *)(param_1 + 0x2a);
    return 5;
  case 0x12: ;
    *(undefined1 *)puVar4 = *(undefined1 *)(param_1 + 0x2b);
    return 5;
  case 0x13: ;
    *(undefined1 *)puVar4 = *(undefined1 *)(param_1 + 0x2c);
    return 5;
  case 0x14: ;
    *(undefined1 *)puVar4 = *(undefined1 *)(param_1 + 0x2d);
    return 5;
  case 0x15: ;
    *(undefined1 *)puVar4 = *(undefined1 *)(param_1 + 0x2e);
    return 5;
  case 0x16: ;
    *puVar4 = *(uint *)(param_1 + 0x30);
    return 8;
  case 0x17: ;
    *(undefined1 *)puVar4 = 0;
    *(undefined2 *)((int)param_3 + 5) = 5;
    *(undefined1 *)((int)param_3 + 7) = *(undefined1 *)(param_1 + 0x34);
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_1 + 0x35);
    *(undefined1 *)((int)param_3 + 9) = *(undefined1 *)(param_1 + 0x36);
    *(undefined1 *)((int)param_3 + 10) = *(undefined1 *)(param_1 + 0x37);
    *(undefined1 *)((int)param_3 + 0xb) = *(undefined1 *)(param_1 + 0x38);
    return 0xc;
  case 0x18: ;
    *(undefined1 *)puVar4 = 0;
    *(undefined2 *)((int)param_3 + 5) = 8;
    *(undefined1 *)((int)param_3 + 7) = *(undefined1 *)(param_1 + 0x39);
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_1 + 0x3a);
    *(undefined1 *)((int)param_3 + 9) = *(undefined1 *)(param_1 + 0x3b);
    *(undefined1 *)((int)param_3 + 10) = *(undefined1 *)(param_1 + 0x3c);
    *(undefined1 *)((int)param_3 + 0xb) = *(undefined1 *)(param_1 + 0x3d);
    *(undefined1 *)(param_3 + 3) = *(undefined1 *)(param_1 + 0x3e);
    *(undefined1 *)((int)param_3 + 0xd) = *(undefined1 *)(param_1 + 0x3f);
    *(undefined1 *)((int)param_3 + 0xe) = *(undefined1 *)(param_1 + 0x40);
    return 0xf;
  case 0x19: ;
    *(undefined1 *)puVar4 = 0;
    *(undefined2 *)((int)param_3 + 5) = 8;
    *(undefined1 *)((int)param_3 + 7) = *(undefined1 *)(param_1 + 0x41);
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_1 + 0x42);
    *(undefined1 *)((int)param_3 + 9) = *(undefined1 *)(param_1 + 0x43);
    *(undefined1 *)((int)param_3 + 10) = *(undefined1 *)(param_1 + 0x44);
    *(undefined1 *)((int)param_3 + 0xb) = *(undefined1 *)(param_1 + 0x45);
    *(undefined1 *)(param_3 + 3) = *(undefined1 *)(param_1 + 0x46);
    *(undefined1 *)((int)param_3 + 0xd) = *(undefined1 *)(param_1 + 0x47);
    *(undefined1 *)((int)param_3 + 0xe) = *(undefined1 *)(param_1 + 0x48);
    return 0xf;
  case 0x1a: ;
    *(undefined1 *)puVar4 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0x1e;
    puVar2 = (undefined4 *)((int)param_3 + 7);
    iVar5 = 0;
    do {
      *puVar2 = *(undefined4 *)(param_1 + 0x4c + iVar5 * 4);
      iVar5 = iVar5 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar5 < 0x1e);
    return (int)puVar2 - (int)param_3;
  case 0x1b: ;
    *(undefined1 *)puVar4 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0x1e;
    puVar3 = (undefined1 *)((int)param_3 + 7);
    iVar5 = 0;
    do {
      *puVar3 = *(undefined1 *)(iVar5 + 0xc4 + param_1);
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar5 < 0x1e);
    return (int)puVar3 - (int)param_3;
  case 0x1c: ;
    *(undefined1 *)puVar4 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0x1e;
    puVar3 = (undefined1 *)((int)param_3 + 7);
    iVar5 = 0;
    do {
      *puVar3 = *(undefined1 *)(iVar5 + 0xe2 + param_1);
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar5 < 0x1e);
    return (int)puVar3 - (int)param_3;
  case 0x1d: ;
    *(undefined1 *)puVar4 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0x1e;
    puVar3 = (undefined1 *)((int)param_3 + 7);
    iVar5 = 0;
    do {
      *puVar3 = *(undefined1 *)(iVar5 + 0x100 + param_1);
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar5 < 0x1e);
    return (int)puVar3 - (int)param_3;
  case 0x1e: ;
    *(undefined1 *)puVar4 = *(undefined1 *)(param_1 + 0x11e);
    puVar4 = (uint *)((int)param_3 + 5);
  }
  return (int)puVar4 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf17 */
uint F_00fcb090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xfcb090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_5 = uVar1;
  puVar3 = param_5 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0x17: ;
    iVar2 = param_1 + 0x34;
    break;
  case 0x18: ;
    iVar2 = param_1 + 0x39;
    break;
  case 0x19: ;
    iVar2 = param_1 + 0x41;
    break;
  case 0x1a: ;
    uVar1 = F_00e68640(param_1 + 0x4c,param_3,param_4,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_5);
  case 0x1b: ;
    iVar2 = param_1 + 0xc4;
    break;
  case 0x1c: ;
    iVar2 = param_1 + 0xe2;
    break;
  case 0x1d: ;
    iVar2 = param_1 + 0x100;
    break;
  default: ;
    goto switchD_00fcb0b1_default;
  }
  uVar1 = F_00e68370(iVar2,param_3,param_4,puVar3);
  puVar3 = (uint *)((int)puVar3 + uVar1);
switchD_00fcb0b1_default: ;
  return (int)puVar3 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf16 */
uint F_00fcb150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xfcb150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_7 = uVar1;
  puVar3 = param_7 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0x17: ;
    iVar2 = param_1 + 0x34;
    break;
  case 0x18: ;
    iVar2 = param_1 + 0x39;
    break;
  case 0x19: ;
    iVar2 = param_1 + 0x41;
    break;
  case 0x1a: ;
    uVar1 = F_00e68750(param_1 + 0x4c,param_3,param_4,param_5,param_6,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_7);
  case 0x1b: ;
    iVar2 = param_1 + 0xc4;
    break;
  case 0x1c: ;
    iVar2 = param_1 + 0xe2;
    break;
  case 0x1d: ;
    iVar2 = param_1 + 0x100;
    break;
  default: ;
    goto switchD_00fcb175_default;
  }
  uVar1 = F_00e68470(iVar2,param_3,param_4,param_5,param_6,puVar3);
  puVar3 = (uint *)((int)puVar3 + uVar1);
switchD_00fcb175_default: ;
  return (int)puVar3 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf20 */
uint F_00fcb280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfcb280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *(char *)(param_3 + 4) = (char)*puVar3;
      return 5;
    case 1: ;
      *(uint *)(param_3 + 8) = *puVar3;
      return 8;
    case 2: ;
      *(uint *)(param_3 + 0xc) = *puVar3;
      return 8;
    case 3: ;
      *(uint *)(param_3 + 0x10) = *puVar3;
      return 8;
    case 4: ;
      *(short *)(param_3 + 0x14) = (short)*puVar3;
      return 6;
    case 5: ;
      *(short *)(param_3 + 0x16) = (short)*puVar3;
      return 6;
    case 6: ;
      *(char *)(param_3 + 0x18) = (char)*puVar3;
      return 5;
    case 7: ;
      *(char *)(param_3 + 0x19) = (char)*puVar3;
      return 5;
    case 8: ;
      *(char *)(param_3 + 0x1a) = (char)*puVar3;
      return 5;
    case 9: ;
      *(char *)(param_3 + 0x1b) = (char)*puVar3;
      return 5;
    case 10: ;
      *(short *)(param_3 + 0x1c) = (short)*puVar3;
      return 6;
    case 0xb: ;
      *(short *)(param_3 + 0x1e) = (short)*puVar3;
      return 6;
    case 0xc: ;
      *(short *)(param_3 + 0x20) = (short)*puVar3;
      return 6;
    case 0xd: ;
      *(short *)(param_3 + 0x22) = (short)*puVar3;
      return 6;
    case 0xe: ;
      *(short *)(param_3 + 0x24) = (short)*puVar3;
      return 6;
    case 0xf: ;
      *(short *)(param_3 + 0x26) = (short)*puVar3;
      return 6;
    case 0x10: ;
      *(short *)(param_3 + 0x28) = (short)*puVar3;
      return 6;
    case 0x11: ;
      *(char *)(param_3 + 0x2a) = (char)*puVar3;
      return 5;
    case 0x12: ;
      *(char *)(param_3 + 0x2b) = (char)*puVar3;
      return 5;
    case 0x13: ;
      *(char *)(param_3 + 0x2c) = (char)*puVar3;
      return 5;
    case 0x14: ;
      *(char *)(param_3 + 0x2d) = (char)*puVar3;
      return 5;
    case 0x15: ;
      *(char *)(param_3 + 0x2e) = (char)*puVar3;
      return 5;
    case 0x16: ;
      *(uint *)(param_3 + 0x30) = *puVar3;
      return 8;
    case 0x17: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0x34,5);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 0x18: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0x39,8);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 0x19: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0x41,8);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 0x1a: ;
      uVar2 = F_00e68800(puVar3,param_3 + 0x4c,0x1e);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 0x1b: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0xc4,0x1e);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 0x1c: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0xe2,0x1e);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 0x1d: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0x100,0x1e);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 0x1e: ;
      *(char *)(param_3 + 0x11e) = (char)*puVar3;
      puVar3 = (uint *)((int)param_2 + 5);
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00fcb640 */
uint F_00fcb640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcb640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12aed2c));
  F_00fbfbe0(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf7 */
uint F_00fcb660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcb660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf19 */
uint F_00fcb680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcb680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf21 */
uint F_00fcb6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcb6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf18 */
uint F_00fcb6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfcb6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined1 * puVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar1;
  puVar3 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar3 = *(uint *)(param_1 + 8);
    param_3[2] = *(uint *)(param_1 + 0xc);
    return 0xc;
  case 1: ;
    *(undefined1 *)puVar3 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0x20;
    puVar2 = (undefined1 *)((int)param_3 + 7);
    iVar4 = 0;
    do {
      *puVar2 = *(undefined1 *)(iVar4 + 0x10 + param_1);
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar4 < 0x20);
    return (int)puVar2 - (int)param_3;
  case 2: ;
    *puVar3 = *(uint *)(param_1 + 0x30);
    param_3[2] = *(uint *)(param_1 + 0x34);
    return 0xc;
  case 3: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 0x38);
    return 5;
  case 4: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 0x39);
    return 5;
  case 5: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 0x3a);
    puVar3 = (uint *)((int)param_3 + 5);
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf17 */
uint F_00fcb790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xfcb790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 1) {
    uVar1 = F_00e68310(param_1 + 0x10,param_3,param_4,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf16 */
uint F_00fcb7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xfcb7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 1) {
    uVar1 = F_00e683d0(param_1 + 0x10,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: FUN_00fcb830 */
uint F_00fcb830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcb830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12aedf4));
  F_00fc6bf0(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf7 */
uint F_00fcb850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcb850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf19 */
uint F_00fcb870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcb870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf21 */
uint F_00fcb890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcb890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf18 */
uint F_00fcb8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfcb8b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar2 = *(uint *)(param_1 + 4);
    return 8;
  case 1: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 8);
    return 6;
  case 2: ;
    *puVar2 = *(uint *)(param_1 + 0xc);
    return 8;
  case 3: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 0x10);
    puVar2 = (uint *)((int)param_3 + 6);
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf20 */
uint F_00fcb930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfcb930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  puVar3 = param_2;
  if (uVar1 == uVar2) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *(uint *)(param_3 + 4) = *puVar3;
      return 8;
    case 1: ;
      *(short *)(param_3 + 8) = (short)*puVar3;
      return 6;
    case 2: ;
      *(uint *)(param_3 + 0xc) = *puVar3;
      return 8;
    case 3: ;
      *(short *)(param_3 + 0x10) = (short)*puVar3;
      puVar3 = (uint *)((int)param_2 + 6);
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00fcb9d0 */
uint F_00fcb9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcb9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12aeebc));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)((int)this + 4) = param_1[1];
    *(short *)((int)this + 8) = (short)param_1[2];
    *(int *)((int)this + 0xc) = param_1[3];
    *(short *)((int)this + 0x10) = (short)param_1[4];
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf7 */
uint F_00fcba40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcba40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf19 */
uint F_00fcba60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcba60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf21 */
uint F_00fcba80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcba80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,puVar1);
  return uVar2;
}

/* ref: FUN_00fcbaa0 */
uint F_00fcbaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcbaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12aef84));
  F_00fca8f0(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf20 */
uint F_00fcbac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfcbac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *(uint *)(param_3 + 8) = *puVar3;
      *(uint *)(param_3 + 0xc) = param_2[2];
      return 0xc;
    case 1: ;
      uVar2 = F_00e68ea0(puVar3,param_3 + 0x10,0x20);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 2: ;
      *(uint *)(param_3 + 0x30) = *puVar3;
      *(uint *)(param_3 + 0x34) = param_2[2];
      return 0xc;
    case 3: ;
      *(char *)(param_3 + 0x38) = (char)*puVar3;
      return 5;
    case 4: ;
      *(char *)(param_3 + 0x39) = (char)*puVar3;
      return 5;
    case 5: ;
      *(char *)(param_3 + 0x3a) = (char)*puVar3;
      puVar3 = (uint *)((int)param_2 + 5);
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf20 */
byte F_00fcbbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcbbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
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
  undefined * pCVar13;
  char * PTR32 * ppcVar14;
  ulonglong uVar15;
  float fVar16;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pcVar9 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar9,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar6 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  uVar4 = F_00fb9ad0(pcVar9,"\"content\":[");
  if (uVar4 == 0) goto LAB_00fcc4ec;
  pcVar5 = (char *)(uVar4 + 0xb);
  pcVar10 = param_1;
  do {
    pcVar7 = pcVar10;
    pcVar10 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar6 = 1;
  for (pcVar10 = pcVar9; pcVar8 = pcVar7 + -1, pcVar10 < pcVar7 + -1; pcVar10 = pcVar10 + 1) {
    if (*pcVar10 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar10 == '}') && (iVar6 = iVar6 + -1, pcVar8 = pcVar10, iVar6 == 0)) break;
  }
  pcVar9 = (char *)F_00e50750(pcVar9,"\"memberid\":[",pcVar8);
  if (pcVar9 == (char *)0x0) goto LAB_00fcc4ec;
  ((char * PTR32 *)(gen_frame + 0x1c))[1] = pcVar9 + 0xc;
  pcVar2 = *(gen_code32 *)(*(int *)this + 4);
  ((char * PTR32 *)(gen_frame + 0x1c))[0] = pcVar9;
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  pcVar10 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3)));
  (*(char * PTR32 *)(gen_frame + 0x18)) = pcVar10;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (char * PTR32 *)0x0;
  F_00e69310(((char * PTR32 *)(gen_frame + 0x1c)) + 2,pcVar10);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
  pcVar10 = ((char * PTR32 *)(gen_frame + 0x1c))[1];
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
  if (pcVar5 != pcVar9) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar14) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
            F_00e693e0(((char * PTR32 *)(gen_frame + 0x1c)) + 2,1);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
          }
          if (ppcVar14 != (char * PTR32 *)0x0) {
            *ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
            F_00e693e0(((char * PTR32 *)(gen_frame + 0x1c)) + 2,1);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
          }
          if (ppcVar14 != (char * PTR32 *)0x0) {
            *ppcVar14 = pcVar5;
          }
        }
        ppcVar14 = ppcVar14 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = ppcVar14;
        pcVar5 = (char *)F_00c51da0(pcVar5,0x22);
        pcVar10 = ((char * PTR32 *)(gen_frame + 0x1c))[1];
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
          F_00e695d0(((char * PTR32 *)(gen_frame + 0x1c)) + 2,&(*(char * PTR32 *)(gen_frame + 0x34)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar10) goto LAB_00fcc4df;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 + -1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar10);
        }
        else {
          if (cVar1 != '[') goto LAB_00fcbdf3;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_00fcbdbb: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_00fcbdbb;
          }
          F_00e695d0(((char * PTR32 *)(gen_frame + 0x1c)) + 2,&(*(char * PTR32 *)(gen_frame + 0x34)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar5 != pcVar10; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 + -1, iVar6 == 0)) break;
          }
        }
        ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
        if (iVar6 == 1) goto LAB_00fcc4df;
      }
LAB_00fcbdf3: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
    } while (pcVar5 != ((char * PTR32 *)(gen_frame + 0x1c))[0]);
  }
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x18));
  pcVar5 = (char *)((int)ppcVar14 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
  if ((int)pcVar5 <= (int)(*(char * PTR32 *)(gen_frame + 0x18))) {
    (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0x0;
    (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
    (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
    F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),(*(char * PTR32 *)(gen_frame + 0x18)));
    cVar1 = *((char * PTR32 *)(gen_frame + 0x1c))[1];
    ((char * PTR32 *)(gen_frame + 0x1c))[0] = ((char * PTR32 *)(gen_frame + 0x1c))[1];
    ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
    pcVar5 = ((char * PTR32 *)(gen_frame + 0x1c))[1];
    while (((char * PTR32 *)(gen_frame + 0x1c))[0] = pcVar5, cVar1 != ']') {
      if (*pcVar5 == '\"') {
        if ((((char * PTR32 *)(gen_frame + 0x1c)) < ppcVar12) && (ppcVar14 <= ((char * PTR32 *)(gen_frame + 0x1c)))) {
          iVar6 = (int)((char * PTR32 *)(gen_frame + 0x1c)) - (int)ppcVar14;
          if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x10))) {
            uVar4 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar14) >> 2;
            if (0x3ffffffe < uVar4) {
LAB_00fcbf79: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar4 = uVar4 + 1;
            uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
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
              F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar11);
              ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
              ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
            }
          }
          if (ppcVar12 != (char * PTR32 *)0x0) {
            *ppcVar12 = ppcVar14[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x10))) {
            uVar4 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar14) >> 2;
            if (0x3ffffffe < uVar4) goto LAB_00fcbf79;
            uVar4 = uVar4 + 1;
            uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
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
              F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar11);
              ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
              ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
            }
          }
          if (ppcVar12 != (char * PTR32 *)0x0) {
            *ppcVar12 = pcVar5;
          }
        }
        ppcVar12 = ppcVar12 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = ppcVar12;
        pcVar5 = (char *)F_00c51da0(((char * PTR32 *)(gen_frame + 0x1c))[0] + 1,0x22);
        ((char * PTR32 *)(gen_frame + 0x1c))[0] = pcVar5;
        if (pcVar5 == (char *)0x0) {
          if (ppcVar14 != (char * PTR32 *)0x0) {
            F_00406ad0(ppcVar14);
          }
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
            F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
            return 0;
          }
          goto LAB_00fcc4ec;
        }
      }
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
      ((char * PTR32 *)(gen_frame + 0x1c))[0] = pcVar5;
      pcVar9 = (*(char * PTR32 *)(gen_frame + 0x18));
    }
    pcVar5 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)ppcVar14) >> 2);
    (*(char * PTR32 *)(gen_frame + 0x18)) = pcVar5;
    if ((int)pcVar9 < (int)pcVar5) {
      if (ppcVar14 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar14);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00fcc4ec;
    }
    if ((*(char * PTR32 *)(gen_frame + 0x34)) != pcVar5) {
      if (ppcVar14 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar14);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00fcc4ec;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar5 != (char *)0x0) {
        do {
          if (pcVar9 == ppcVar14[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar5);
      }
      if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x34))) {
        uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
        *(int *)(this + 4) = (int)uVar15;
        goto LAB_00fcc05d;
      }
LAB_00fcc36f: ;
      if (ppcVar14 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar14);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00fcc4ec;
    }
LAB_00fcc05d: ;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar5 != (char *)0x0) {
        do {
          if (pcVar9 == ppcVar14[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar5);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fcc36f;
      uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 8) = (int)uVar15;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar5 != (char *)0x0) {
        do {
          if (pcVar9 == ppcVar14[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar5);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fcc36f;
      uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 0xc) = (int)uVar15;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar5 != (char *)0x0) {
        do {
          if (pcVar9 == ppcVar14[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar5);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fcc36f;
      uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 0x10) = (int)uVar15;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar5 != (char *)0x0) {
        do {
          if (pcVar9 == ppcVar14[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar5);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fcc36f;
      fVar16 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(float *)(this + 0x14) = fVar16;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar5 != (char *)0x0) {
        do {
          if (pcVar9 == ppcVar14[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar5);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fcc36f;
      uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 0x18) = (int)uVar15;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,6);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar5 != (char *)0x0) {
        do {
          if (pcVar9 == ppcVar14[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar5);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fcc36f;
      this[0x1c] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10] != '0');
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,7);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar5 != (char *)0x0) {
        do {
          if (pcVar9 == ppcVar14[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar5);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fcc36f;
      this[0x1d] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10] != '0');
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,8);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar5 != (char *)0x0) {
        pcVar10 = (char *)0x0;
        do {
          if (pcVar9 == ppcVar14[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar5);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fcc36f;
      this[0x1e] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10] != '0');
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,9);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar5 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x18)) != (char *)0x0) {
        do {
          if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))[(int)pcVar5]) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x18)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar5) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00fcc4ec;
      }
      pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar5];
      pCVar13 = this + 0x20;
      iVar6 = 3;
      do {
        fVar16 = F_00e50660(pcVar9);
        *(float *)pCVar13 = fVar16;
        uVar4 = F_00c51da0(pcVar9,0x2c);
        pCVar13 = pCVar13 + 4;
        iVar6 = iVar6 + -1;
        pcVar9 = (char *)(uVar4 + 2);
      } while (iVar6 != 0);
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,10);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
    ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
    if (pcVar9 == (char *)0x0) {
LAB_00fcc518: ;
      if (ppcVar14 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar14);
      }
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 1;
    }
    pcVar5 = (char *)0x0;
    if ((*(char * PTR32 *)(gen_frame + 0x18)) != (char *)0x0) {
      do {
        if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x18)));
    }
    if (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      fVar16 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar5]);
      *(float *)(this + 0x30) = fVar16;
      goto LAB_00fcc518;
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
LAB_00fcc4df: ;
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
  }
LAB_00fcc4ec: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf20 */
byte F_00fcc550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcc550u, gen_a0, gen_a1, 0u, 0u);
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
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  uVar3 = F_00fb9ad0(pcVar8,"\"content\":[");
  if (uVar3 == 0) goto LAB_00fcca63;
  pcVar4 = (char *)(uVar3 + 0xb);
  pcVar10 = param_1;
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  iVar5 = 1;
  for (pcVar10 = pcVar8; pcVar7 = pcVar6 + -1, pcVar10 < pcVar6 + -1; pcVar10 = pcVar10 + 1) {
    if (*pcVar10 == '{') {
      iVar5 = iVar5 + 1;
    }
    else if ((*pcVar10 == '}') && (iVar5 = iVar5 + -1, pcVar7 = pcVar10, iVar5 == 0)) break;
  }
  pcVar8 = (char *)F_00e50750(pcVar8,"\"memberid\":[",pcVar7);
  if (pcVar8 == (char *)0x0) goto LAB_00fcca63;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar8 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),uVar3);
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
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
          }
          if (ppcVar13 != (char * PTR32 *)0x0) {
            *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[iVar5 >> 2];
          }
        }
        else {
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),1);
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
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),&(*(char * PTR32 *)(gen_frame + 0x34)));
          pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
          iVar5 = 1;
          if (pcVar4 == pcVar10) goto LAB_00fcc930;
          do {
            if (*pcVar4 == '{') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 != pcVar10);
        }
        else {
          if (cVar1 != '[') goto LAB_00fcc793;
          cVar1 = pcVar4[1];
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
          iVar5 = 1;
          if (cVar1 == '\"') {
LAB_00fcc75b: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
          }
          else if (cVar1 == '[') {
            iVar5 = 2;
            goto LAB_00fcc75b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),&(*(char * PTR32 *)(gen_frame + 0x34)));
          for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar10; pcVar4 = pcVar4 + 1) {
            if (*pcVar4 == '[') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == ']') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
          }
        }
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
        if (iVar5 == 1) goto LAB_00fcc930;
      }
LAB_00fcc793: ;
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x20)));
  }
  pcVar8 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  if ((int)uVar3 < (int)pcVar8) {
LAB_00fcc930: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00fcca63;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar3);
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
LAB_00fcc916: ;
                    
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
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar11);
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
          if (0x3ffffffe < uVar9) goto LAB_00fcc916;
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
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar11);
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
        goto LAB_00fcc930;
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
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00fcca63;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x20)) != pcVar8) {
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00fcca63;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00fcc9f6: ;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
    if (pcVar4 == (char *)0x0) {
LAB_00fcca8f: ;
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
      }
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
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
      this[8] = SUB81(uVar14,0);
      goto LAB_00fcca8f;
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
      fVar15 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(float *)(this + 4) = fVar15;
      goto LAB_00fcc9f6;
    }
  }
  if (ppcVar13 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar13);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
  }
LAB_00fcca63: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf20 */
byte F_00fccac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfccac0u, gen_a0, gen_a1, 0u, 0u);
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
  uint uVar8;
  uint uVar9;
  char * pcVar10;
  char * PTR32 * ppcVar11;
  undefined * pCVar12;
  char * PTR32 * ppcVar13;
  ulonglong uVar14;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pcVar7 = param_1 + 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(pcVar7,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if ((iVar5 != 0) || (uVar3 = F_00fb9ad0(pcVar7,"\"content\":["), uVar3 == 0)) goto LAB_00fccebd;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = (char *)(uVar3 + 0xb);
  pcVar4 = param_1;
  do {
    pcVar10 = pcVar4;
    pcVar4 = pcVar10 + 1;
  } while (*pcVar10 != '\0');
  iVar5 = 1;
  for (pcVar4 = pcVar7; pcVar6 = pcVar10 + -1, pcVar4 < pcVar10 + -1; pcVar4 = pcVar4 + 1) {
    if (*pcVar4 == '{') {
      iVar5 = iVar5 + 1;
    }
    else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, pcVar6 = pcVar4, iVar5 == 0)) break;
  }
  pcVar7 = (char *)F_00e50750(pcVar7,"\"memberid\":[",pcVar6);
  if (pcVar7 == (char *)0x0) goto LAB_00fccebd;
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7 + 0xc;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),uVar3);
  (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x1c));
  pcVar4 = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
  while (pcVar4 != pcVar7) {
    cVar1 = *pcVar4;
    if (cVar1 == '\"') {
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
      if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar11) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
        (*(char * PTR32 *)(gen_frame + 0x1c)) = (char *)((int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) >> 2);
        if (ppcVar11 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
          ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        }
        if (ppcVar11 != (char * PTR32 *)0x0) {
          *ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)(*(char * PTR32 *)(gen_frame + 0x1c))];
        }
      }
      else {
        if (ppcVar11 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
          ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        }
        if (ppcVar11 != (char * PTR32 *)0x0) {
          *ppcVar11 = pcVar4;
        }
      }
      ppcVar11 = ppcVar11 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = ppcVar11;
      pcVar4 = (char *)F_00c51da0(pcVar4,0x22);
    }
    else {
      if (cVar1 == '{') {
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
        pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
        iVar5 = 1;
        if (pcVar4 == (*(char * PTR32 *)(gen_frame + 0x30))) goto LAB_00fccead;
        do {
          if (*pcVar4 == '{') {
            iVar5 = iVar5 + 1;
          }
          else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x30)));
      }
      else {
        if (cVar1 != '[') goto LAB_00fcccf4;
        cVar1 = pcVar4[1];
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
        iVar5 = 1;
        if (cVar1 == '\"') {
LAB_00fcccb9: ;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
        }
        else if (cVar1 == '[') {
          iVar5 = 2;
          goto LAB_00fcccb9;
        }
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
        for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != (*(char * PTR32 *)(gen_frame + 0x30)); pcVar4 = pcVar4 + 1) {
          if (*pcVar4 == '[') {
            iVar5 = iVar5 + 1;
          }
          else if ((*pcVar4 == ']') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
        }
      }
      ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
      if (iVar5 == 1) goto LAB_00fccead;
    }
LAB_00fcccf4: ;
    pcVar4 = pcVar4 + 1;
    (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
  }
  pcVar7 = (char *)((int)ppcVar11 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
  if ((int)uVar3 < (int)pcVar7) {
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00fccebd;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar3);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x30));
  (*(char * PTR32 *)(gen_frame + 0x1c)) = (*(char * PTR32 *)(gen_frame + 0x30));
  ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
  while ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = ppcVar11, cVar1 != ']') {
    if (*(*(char * PTR32 *)(gen_frame + 0x1c)) == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x1c)) < ppcVar13) && (ppcVar11 <= &(*(char * PTR32 *)(gen_frame + 0x1c)))) {
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar8 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar11) >> 2;
          if (0x3ffffffe < uVar8) {
LAB_00fcce93: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar8 = uVar8 + 1;
          uVar9 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar11) >> 2;
          if (uVar9 < uVar8) {
            if (0x3fffffff - (uVar9 >> 1) < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar8) {
              uVar9 = uVar8;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar9);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
          }
        }
        if (ppcVar13 != (char * PTR32 *)0x0) {
          *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)&(*(char * PTR32 *)(gen_frame + 0x1c)) - (int)((int)(uintptr_t)ppcVar11) >> 2];
        }
      }
      else {
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar8 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar11) >> 2;
          if (0x3ffffffe < uVar8) goto LAB_00fcce93;
          uVar8 = uVar8 + 1;
          uVar9 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar11) >> 2;
          if (uVar9 < uVar8) {
            if (0x3fffffff - (uVar9 >> 1) < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar8) {
              uVar9 = uVar8;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar9);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
          }
        }
        if (ppcVar13 != (char * PTR32 *)0x0) {
          *ppcVar13 = (*(char * PTR32 *)(gen_frame + 0x1c));
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppcVar13;
      pcVar7 = (char *)F_00c51da0((*(char * PTR32 *)(gen_frame + 0x1c)) + 1,0x22);
      (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar7;
      if (pcVar7 == (char *)0x0) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
        }
LAB_00fccead: ;
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
        }
        goto LAB_00fccebd;
      }
    }
    (*(char * PTR32 *)(gen_frame + 0x1c)) = (*(char * PTR32 *)(gen_frame + 0x1c)) + 1;
    cVar1 = *(*(char * PTR32 *)(gen_frame + 0x1c));
    ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  }
  pcVar7 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar11) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar7;
  if ((int)uVar3 < (int)pcVar7) {
    if (ppcVar11 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar11);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00fccebd;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x34)) != pcVar7) {
    if (ppcVar11 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar11);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00fccebd;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
  if (pcVar4 != (char *)0x0) {
    pcVar10 = (char *)0x0;
    if (pcVar7 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar11[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar7);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) {
      if (ppcVar11 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar11);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00fccebd;
    }
    uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
    this[4] = SUB81(uVar14,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00fcd039: ;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(int *)(this + 0xc) = (int)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(int *)(this + 0x10) = (int)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(short *)(this + 0x14) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(short *)(this + 0x16) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,6);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      this[0x18] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,7);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      this[0x19] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,8);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      this[0x1a] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,9);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      this[0x1b] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,10);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(short *)(this + 0x1c) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xb);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(short *)(this + 0x1e) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xc);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(short *)(this + 0x20) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xd);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(short *)(this + 0x22) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xe);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(short *)(this + 0x24) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xf);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(short *)(this + 0x26) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x10);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(short *)(this + 0x28) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x11);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      this[0x2a] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x12);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      this[0x2b] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x13);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      this[0x2c] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x14);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      this[0x2d] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x15);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      this[0x2e] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x16);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00fccfef;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(int *)(this + 0x30) = (int)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x17);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar7 != (char *)0x0) {
      pcVar4 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x1c)) != (char *)0x0) {
        do {
          if (pcVar7 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar4]) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x1c)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
        }
        goto joined_r0x00fcdd61;
      }
      pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
      iVar5 = 0;
      do {
        uVar14 = F_00e50570(pcVar7);
        this[iVar5 + 0x34] = SUB81(uVar14,0);
        uVar3 = F_00c51da0(pcVar7,0x2c);
        iVar5 = iVar5 + 1;
        pcVar7 = (char *)(uVar3 + 2);
      } while (iVar5 < 5);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x18);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar7 != (char *)0x0) {
      pcVar4 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x1c)) != (char *)0x0) {
        do {
          if (pcVar7 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar4]) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x1c)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
        }
        goto joined_r0x00fcdd61;
      }
      pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
      iVar5 = 0;
      do {
        uVar14 = F_00e50570(pcVar7);
        this[iVar5 + 0x39] = SUB81(uVar14,0);
        uVar3 = F_00c51da0(pcVar7,0x2c);
        iVar5 = iVar5 + 1;
        pcVar7 = (char *)(uVar3 + 2);
      } while (iVar5 < 8);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x19);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar7 != (char *)0x0) {
      pcVar4 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x1c)) != (char *)0x0) {
        do {
          if (pcVar7 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar4]) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x1c)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
        }
        goto joined_r0x00fcdd61;
      }
      pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
      iVar5 = 0;
      do {
        uVar14 = F_00e50570(pcVar7);
        this[iVar5 + 0x41] = SUB81(uVar14,0);
        uVar3 = F_00c51da0(pcVar7,0x2c);
        iVar5 = iVar5 + 1;
        pcVar7 = (char *)(uVar3 + 2);
      } while (iVar5 < 8);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1a);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar7 != (char *)0x0) {
      pcVar4 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x1c)) != (char *)0x0) {
        do {
          if (pcVar7 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar4]) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x1c)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
        }
        goto joined_r0x00fcdd61;
      }
      pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
      pCVar12 = this + 0x4c;
      (*(int *)(gen_frame + 0x8)) = 0x1e;
      do {
        uVar14 = F_00e50570(pcVar7);
        *(int *)pCVar12 = (int)uVar14;
        uVar3 = F_00c51da0(pcVar7,0x2c);
        pCVar12 = pCVar12 + 4;
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
        pcVar7 = (char *)(uVar3 + 2);
      } while ((*(int *)(gen_frame + 0x8)) != 0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1b);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar7 != (char *)0x0) {
      pcVar4 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x1c)) != (char *)0x0) {
        do {
          if (pcVar7 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar4]) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x1c)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
        }
        goto joined_r0x00fcdd61;
      }
      pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
      iVar5 = 0;
      do {
        uVar14 = F_00e50570(pcVar7);
        this[iVar5 + 0xc4] = SUB81(uVar14,0);
        uVar3 = F_00c51da0(pcVar7,0x2c);
        iVar5 = iVar5 + 1;
        pcVar7 = (char *)(uVar3 + 2);
      } while (iVar5 < 0x1e);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1c);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar7 != (char *)0x0) {
      pcVar4 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x1c)) != (char *)0x0) {
        do {
          if (pcVar7 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar4]) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x1c)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
        }
        goto joined_r0x00fcdd61;
      }
      pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
      iVar5 = 0;
      do {
        uVar14 = F_00e50570(pcVar7);
        this[iVar5 + 0xe2] = SUB81(uVar14,0);
        uVar3 = F_00c51da0(pcVar7,0x2c);
        iVar5 = iVar5 + 1;
        pcVar7 = (char *)(uVar3 + 2);
      } while (iVar5 < 0x1e);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1d);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar7 != (char *)0x0) {
      pcVar4 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x1c)) != (char *)0x0) {
        do {
          if (pcVar7 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar4]) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x1c)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
        }
        goto joined_r0x00fcdd61;
      }
      pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
      iVar5 = 0;
      do {
        uVar14 = F_00e50570(pcVar7);
        this[iVar5 + 0x100] = SUB81(uVar14,0);
        uVar3 = F_00c51da0(pcVar7,0x2c);
        iVar5 = iVar5 + 1;
        pcVar7 = (char *)(uVar3 + 2);
      } while (iVar5 < 0x1e);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1e);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
    ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
    if (pcVar7 == (char *)0x0) {
LAB_00fcdd87: ;
      if (ppcVar11 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar11);
      }
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 1;
    }
    pcVar4 = (char *)0x0;
    if ((*(char * PTR32 *)(gen_frame + 0x1c)) != (char *)0x0) {
      do {
        if (pcVar7 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar4]) break;
        pcVar4 = pcVar4 + 1;
      } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x1c)));
    }
    if (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4]);
      this[0x11e] = SUB81(uVar14,0);
      goto LAB_00fcdd87;
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  else {
    pcVar10 = (char *)0x0;
    if (pcVar7 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar11[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar7);
    }
    if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      uVar14 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(int *)(this + 8) = (int)uVar14;
      goto LAB_00fcd039;
    }
LAB_00fccfef: ;
    if (ppcVar11 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar11);
    }
  }
joined_r0x00fcdd61: ;
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
LAB_00fccebd: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf20 */
byte F_00fcddc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcddc0u, gen_a0, gen_a1, 0u, 0u);
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
  uint uVar8;
  uint uVar9;
  char * PTR32 * ppcVar10;
  char * pcVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  ulonglong uVar14;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pcVar7 = param_1 + 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(pcVar7,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar5 != 0) goto LAB_00fce199;
  pcVar4 = (char *)F_00fb9ad0(pcVar7,"\"content\":[");
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar4;
  if (pcVar4 == (char *)0x0) goto LAB_00fce199;
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar4 + 0xb;
  pcVar4 = param_1;
  do {
    pcVar11 = pcVar4;
    pcVar4 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  iVar5 = 1;
  for (pcVar4 = pcVar7; pcVar6 = pcVar11 + -1, pcVar4 < pcVar11 + -1; pcVar4 = pcVar4 + 1) {
    if (*pcVar4 == '{') {
      iVar5 = iVar5 + 1;
    }
    else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, pcVar6 = pcVar4, iVar5 == 0)) break;
  }
  pcVar7 = (char *)F_00e50750(pcVar7,"\"memberid\":[",pcVar6);
  if (pcVar7 == (char *)0x0) goto LAB_00fce199;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar7 + 0xc;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),uVar3);
  (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x20));
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x1c));
  pcVar4 = (*(char * PTR32 *)(gen_frame + 0x20));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
  while (pcVar4 != pcVar7) {
    cVar1 = *pcVar4;
    if (cVar1 == '\"') {
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
      if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
        iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),1);
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
        }
        if (ppcVar13 != (char * PTR32 *)0x0) {
          *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[iVar5 >> 2];
        }
      }
      else {
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),1);
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
        }
        if (ppcVar13 != (char * PTR32 *)0x0) {
          *ppcVar13 = pcVar4;
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = ppcVar13;
      pcVar4 = (char *)F_00c51da0(pcVar4,0x22);
      pcVar11 = (*(char * PTR32 *)(gen_frame + 0x1c));
    }
    else {
      if (cVar1 == '{') {
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),&(*(char * PTR32 *)(gen_frame + 0x34)));
        pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
        iVar5 = 1;
        if (pcVar4 == pcVar11) goto LAB_00fce18c;
        do {
          if (*pcVar4 == '{') {
            iVar5 = iVar5 + 1;
          }
          else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 != pcVar11);
      }
      else {
        if (cVar1 != '[') goto LAB_00fcdff3;
        cVar1 = pcVar4[1];
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
        iVar5 = 1;
        if (cVar1 == '\"') {
LAB_00fcdfbb: ;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
        }
        else if (cVar1 == '[') {
          iVar5 = 2;
          goto LAB_00fcdfbb;
        }
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),&(*(char * PTR32 *)(gen_frame + 0x34)));
        for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar11; pcVar4 = pcVar4 + 1) {
          if (*pcVar4 == '[') {
            iVar5 = iVar5 + 1;
          }
          else if ((*pcVar4 == ']') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
        }
      }
      ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
      if (iVar5 == 1) goto LAB_00fce18c;
    }
LAB_00fcdff3: ;
    pcVar4 = pcVar4 + 1;
    (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
  }
  pcVar7 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
  if ((int)uVar3 < (int)pcVar7) {
LAB_00fce18c: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
    }
    goto LAB_00fce199;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar3);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x1c));
  (*(char * PTR32 *)(gen_frame + 0x20)) = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
  ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x1c));
  while ((*(char * PTR32 *)(gen_frame + 0x20)) = pcVar7, cVar1 != ']') {
    if (*pcVar7 == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x20)) < ppcVar12) && (ppcVar13 <= &(*(char * PTR32 *)(gen_frame + 0x20)))) {
        iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x20)) - (int)ppcVar13;
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar8 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar8) {
LAB_00fce172: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar8 = uVar8 + 1;
          uVar9 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar9 < uVar8) {
            if (0x3fffffff - (uVar9 >> 1) < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar8) {
              uVar9 = uVar8;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar9);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        pcVar7 = (*(char * PTR32 *)(gen_frame + 0x20));
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = ppcVar13[iVar5 >> 2];
        }
      }
      else {
        if (ppcVar12 == ppcVar10) {
          uVar8 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar8) goto LAB_00fce172;
          uVar8 = uVar8 + 1;
          uVar9 = (int)ppcVar10 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar9 < uVar8) {
            if (0x3fffffff - (uVar9 >> 1) < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar8) {
              uVar9 = uVar8;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar9);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = pcVar7;
        }
      }
      ppcVar12 = ppcVar12 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppcVar12;
      pcVar7 = (char *)F_00c51da0(pcVar7 + 1,0x22);
      ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
      if (pcVar7 == (char *)0x0) {
        if (ppcVar13 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar13);
        }
        goto LAB_00fce18c;
      }
    }
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
    (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar7;
  }
  pcVar7 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2);
  if ((int)uVar3 < (int)pcVar7) {
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00fce199;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x34)) != pcVar7) {
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00fce199;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 != (char *)0x0) {
    pcVar11 = (char *)0x0;
    if (pcVar7 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar13[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar7);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) {
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00fce199;
    }
    uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar11]);
    *(ulonglong *)(this + 8) = uVar14;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 != (char *)0x0) {
    pcVar11 = (char *)0x0;
    if (pcVar7 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar13[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar7);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) {
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00fce199;
    }
    pcVar4 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar11];
    uVar3 = F_00c51da0(pcVar4,0x22);
    F_00c4d9ef(this + 0x10,uVar3 + (1 - (int)pcVar4),pcVar4,0xffffffff);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00fce3dd: ;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar13[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto LAB_00fce390;
      this[0x38] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar11] != '0');
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar13[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto LAB_00fce390;
      this[0x39] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar11] != '0');
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
    if (pcVar4 == (char *)0x0) {
LAB_00fce50c: ;
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
      }
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 1;
    }
    pcVar11 = (char *)0x0;
    if (pcVar7 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar13[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar7);
    }
    if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar11]);
      this[0x3a] = SUB81(uVar14,0);
      goto LAB_00fce50c;
    }
  }
  else {
    pcVar11 = (char *)0x0;
    if (pcVar7 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar13[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar7);
    }
    if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar11]);
      *(ulonglong *)(this + 0x30) = uVar14;
      goto LAB_00fce3dd;
    }
  }
LAB_00fce390: ;
  if (ppcVar13 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar13);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
LAB_00fce199: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf20 */
byte F_00fce540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfce540u, gen_a0, gen_a1, 0u, 0u);
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
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  uVar3 = F_00fb9ad0(pcVar8,"\"content\":[");
  if (uVar3 == 0) goto LAB_00fceb23;
  pcVar4 = (char *)(uVar3 + 0xb);
  pcVar10 = param_1;
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  iVar5 = 1;
  for (pcVar10 = pcVar8; pcVar7 = pcVar6 + -1, pcVar10 < pcVar6 + -1; pcVar10 = pcVar10 + 1) {
    if (*pcVar10 == '{') {
      iVar5 = iVar5 + 1;
    }
    else if ((*pcVar10 == '}') && (iVar5 = iVar5 + -1, pcVar7 = pcVar10, iVar5 == 0)) break;
  }
  pcVar8 = (char *)F_00e50750(pcVar8,"\"memberid\":[",pcVar7);
  if (pcVar8 == (char *)0x0) goto LAB_00fceb23;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar8 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),uVar3);
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
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
          }
          if (ppcVar13 != (char * PTR32 *)0x0) {
            *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[iVar5 >> 2];
          }
        }
        else {
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),1);
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
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),&(*(char * PTR32 *)(gen_frame + 0x34)));
          pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
          iVar5 = 1;
          if (pcVar4 == pcVar10) goto LAB_00fce920;
          do {
            if (*pcVar4 == '{') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 != pcVar10);
        }
        else {
          if (cVar1 != '[') goto LAB_00fce783;
          cVar1 = pcVar4[1];
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
          iVar5 = 1;
          if (cVar1 == '\"') {
LAB_00fce74b: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
          }
          else if (cVar1 == '[') {
            iVar5 = 2;
            goto LAB_00fce74b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),&(*(char * PTR32 *)(gen_frame + 0x34)));
          for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar10; pcVar4 = pcVar4 + 1) {
            if (*pcVar4 == '[') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == ']') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
          }
        }
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
        if (iVar5 == 1) goto LAB_00fce920;
      }
LAB_00fce783: ;
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x20)));
  }
  pcVar8 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  if ((int)uVar3 < (int)pcVar8) {
LAB_00fce920: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00fceb23;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar3);
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
LAB_00fce906: ;
                    
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
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar11);
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
          if (0x3ffffffe < uVar9) goto LAB_00fce906;
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
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar11);
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
        goto LAB_00fce920;
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
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00fceb23;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x20)) != pcVar8) {
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00fceb23;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00fce9ea: ;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
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
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_00fceb04;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(short *)(this + 8) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
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
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_00fceb04;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 0xc) = (int)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
    if (pcVar4 == (char *)0x0) {
LAB_00fceb50: ;
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
      }
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
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
      *(short *)(this + 0x10) = (short)uVar14;
      goto LAB_00fceb50;
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
      goto LAB_00fce9ea;
    }
  }
LAB_00fceb04: ;
  if (ppcVar13 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar13);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
  }
LAB_00fceb23: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf26 */
byte F_00fceb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfceb80u, gen_a0, gen_a1, gen_a2, 0u);
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
  undefined * pCVar10;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"content\":[",0xb);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 4),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 8),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0xc),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x10),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x18),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x1c]);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x1d]);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x1e]);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pCVar10 = this + 0x20;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x3;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%f\",",(int)(ulonglong)gen_d2bits((double)*(float *)pCVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pCVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pCVar10 = pCVar10 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 - uVar5 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - uVar5) + -1);
    iVar3 = param_1[4];
    param_1[4] = iVar3 + -1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x30))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x30)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
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
      param_1[4] = iVar3 + -1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::Cast::vf12 */
byte F_00fcf080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfcf080u, gen_a0, gen_a1, 0u, 0u);
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
  undefined * pCVar10;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"contentdetail\":[",0x11);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 4),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 8),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,2)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0xc),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,3)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x10),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Float\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,5);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,5)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x18),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),6);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,6);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,6)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Bool\",",0x12);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x1c]);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),7);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,7);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,7)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Bool\",",0x12);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x1d]);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),8);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,8)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Bool\",",0x12);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x1e]);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),9);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,9);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,9)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Vector3\",",0x15);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pCVar10 = this + 0x20;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x3;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%f\",",(int)(ulonglong)gen_d2bits((double)*(float *)pCVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pCVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pCVar10 = pCVar10 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 + -1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),10);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,10);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,10)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Float\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x30))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x30)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
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
      param_1[4] = iVar3 + -1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf26 */
byte F_00fd0260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfd0260u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"content\":[",0xb);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 4)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 4)) >> 0x20));
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[8],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf12 */
byte F_00fd0410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd0410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"contentdetail\":[",0x11);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Float\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 4)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 4)) >> 0x20));
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,1)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[8],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf26 */
byte F_00fd0800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfd0800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined * pCVar10;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"content\":[",0xb);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[4],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",*(int *)(this + 8),*(int *)(this + 8) >> 0x1f);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",*(int *)(this + 0xc),*(int *)(this + 0xc) >> 0x1f);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",*(int *)(this + 0x10),*(int *)(this + 0x10) >> 0x1f);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x14),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x16),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x18],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x19],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x1a],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x1b],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x1c),
             (int)*(short *)(this + 0x1c) >> 0x1f);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x1e),
             (int)*(short *)(this + 0x1e) >> 0x1f);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x20),
             (int)*(short *)(this + 0x20) >> 0x1f);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x22),
             (int)*(short *)(this + 0x22) >> 0x1f);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x24),
             (int)*(short *)(this + 0x24) >> 0x1f);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x26),
             (int)*(short *)(this + 0x26) >> 0x1f);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x28),
             (int)*(short *)(this + 0x28) >> 0x1f);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x2a],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x2b],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x2c],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x2d],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x2e],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x30),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar9 + 0x34],0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 5);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 - uVar4 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar7 + uVar4,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - uVar4) + -1);
    iVar9 = param_1[4];
    param_1[4] = iVar9 + -1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar7 + iVar9 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar9 + 0x39],0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 8);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar4) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar7 + uVar4,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - 1) - uVar4);
    iVar9 = param_1[4];
    param_1[4] = iVar9 + -1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar7 + iVar9 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar9 + 0x41],0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 8);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 != uVar4) {
      if ((uint)param_1[5] < 0x10) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
      }
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar7 + uVar4,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - 1) - uVar4);
      iVar9 = param_1[4];
      param_1[4] = iVar9 + -1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar7 + iVar9 + -1) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
    F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
    pCVar10 = this + 0x4c;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x1e;
    do {
      F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pCVar10,0);
      pcVar5 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
      pCVar10 = pCVar10 + 4;
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
    } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
    uVar2 = param_1[4];
    uVar4 = uVar2 - 1;
    if (uVar2 < uVar4) {
                    
      F_00c457e7("invalid string position");
    }
    if (uVar2 != uVar4) {
      if ((uint)param_1[5] < 0x10) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
      }
      if ((uint)param_1[5] < 0x10) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)*param_1;
      }
      F_00c46e20(uVar4 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)),uVar2 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(uVar2 - 1) - uVar4)
      ;
      iVar9 = param_1[4];
      param_1[4] = iVar9 + -1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
      }
      *(undefined1 *)(iVar9 + -1 + (int)puVar7) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
    F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
    iVar9 = 0;
    do {
      F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar9 + 0xc4],0);
      pcVar5 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x1e);
    uVar2 = param_1[4];
    uVar4 = uVar2 - 1;
    if (uVar4 <= uVar2) {
      if (uVar2 != uVar4) {
        if ((uint)param_1[5] < 0x10) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)*param_1;
        }
        if ((uint)param_1[5] < 0x10) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
        }
        F_00c46e20(uVar4 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)),uVar2 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)),(uVar2 - 1) - uVar4);
        iVar9 = param_1[4];
        param_1[4] = iVar9 + -1;
        puVar7 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar7 = (undefined4 *)*param_1;
        }
        *(undefined1 *)(iVar9 + -1 + (int)puVar7) = 0;
      }
      F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
      F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
      iVar9 = 0;
      do {
        F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar9 + 0xe2],0);
        pcVar5 = ((char *)(gen_frame + 0x8));
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x1e);
      uVar2 = param_1[4];
      uVar4 = uVar2 - 1;
      if (uVar2 < uVar4) {
                    
        F_00c457e7("invalid string position");
      }
      if (uVar2 != uVar4) {
        if ((uint)param_1[5] < 0x10) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)*param_1;
        }
        if ((uint)param_1[5] < 0x10) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
        }
        F_00c46e20(uVar4 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)),uVar2 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)),(uVar2 - 1) - uVar4);
        iVar9 = param_1[4];
        param_1[4] = iVar9 + -1;
        puVar7 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar7 = (undefined4 *)*param_1;
        }
        *(undefined1 *)(iVar9 + -1 + (int)puVar7) = 0;
      }
      F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
      F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
      iVar9 = 0;
      do {
        F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar9 + 0x100],0);
        pcVar5 = ((char *)(gen_frame + 0x8));
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x1e);
      uVar2 = param_1[4];
      uVar4 = uVar2 - 1;
      if (uVar2 < uVar4) {
                    
        F_00c457e7("invalid string position");
      }
      if (uVar2 != uVar4) {
        if ((uint)param_1[5] < 0x10) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)*param_1;
        }
        puVar7 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar7 = (undefined4 *)*param_1;
        }
        F_00c46e20((int)puVar7 + uVar4,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar4)
        ;
        iVar9 = param_1[4];
        param_1[4] = iVar9 + -1;
        puVar7 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar7 = (undefined4 *)*param_1;
        }
        *(undefined1 *)((int)puVar7 + iVar9 + -1) = 0;
      }
      F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
      F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x11e],0);
      pcVar5 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
      F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
      uVar2 = param_1[4];
      uVar4 = uVar2 - 1;
      if (uVar4 <= uVar2) {
        if (uVar2 != uVar4) {
          puVar8 = param_1;
          puVar7 = param_1;
          if (0xf < (uint)param_1[5]) {
            puVar7 = (undefined4 *)*param_1;
            puVar8 = (undefined4 *)*param_1;
          }
          F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - 1) - uVar4)
          ;
          iVar9 = param_1[4];
          param_1[4] = iVar9 + -1;
          puVar7 = param_1;
          if (0xf < (uint)param_1[5]) {
            puVar7 = (undefined4 *)*param_1;
          }
          *(undefined1 *)((int)puVar7 + iVar9 + -1) = 0;
        }
        F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return 1;
      }
                    
      F_00c457e7("invalid string position");
    }
                    
    F_00c457e7("invalid string position");
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf12 */
byte F_00fd15c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd15c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  int iVar6;
  undefined * pCVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"contentdetail\":[",0x11);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[4],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,1)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Int32\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",*(int *)(this + 8),*(int *)(this + 8) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Int32\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",*(int *)(this + 0xc),*(int *)(this + 0xc) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,3)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Int32\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",*(int *)(this + 0x10),*(int *)(this + 0x10) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,4)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x14),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,5)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x16),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),6);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,6);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,6)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x18],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),7);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,7);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,7)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x19],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),8);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,8)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x1a],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),9);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,9);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,9)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x1b],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),10);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,10);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,10)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Int16\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x1c),
             (int)*(short *)(this + 0x1c) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0xb);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xb);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0xb)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Int16\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x1e),
             (int)*(short *)(this + 0x1e) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0xc);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0xc)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Int16\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x20),
             (int)*(short *)(this + 0x20) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0xd);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xd);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0xd)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Int16\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x22),
             (int)*(short *)(this + 0x22) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0xe);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xe);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0xe)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Int16\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x24),
             (int)*(short *)(this + 0x24) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0xf);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xf);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0xf)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Int16\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x26),
             (int)*(short *)(this + 0x26) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x10);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x10);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x10)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Int16\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",(int)*(short *)(this + 0x28),
             (int)*(short *)(this + 0x28) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x11);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x11);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x11)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x2a],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x12);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x12);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x12)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x2b],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x13);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x13);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x13)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x2c],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x14);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x14);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x14)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x2d],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x15);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x15);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x15)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x2e],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x16);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x16);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x16)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x30),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x17);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x17);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x17)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar6 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar6 + 0x34],0);
    pcVar4 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar6 = iVar6 + 1;
  } while (iVar6 < 5);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x18);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x18);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x18)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar6 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar6 + 0x39],0);
    pcVar4 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x19);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x19);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x19)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar6 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar6 + 0x41],0);
    pcVar4 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x1a);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1a);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x1a)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pCVar7 = this + 0x4c;
  (*(int *)(gen_frame + 0x4)) = 0x1e;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pCVar7,0);
    pcVar4 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pCVar7 = pCVar7 + 4;
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
  } while ((*(int *)(gen_frame + 0x4)) != 0);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x1b);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1b);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x1b)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar6 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar6 + 0xc4],0);
    pcVar4 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x1e);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x1c);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1c);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x1c)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar6 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar6 + 0xe2],0);
    pcVar4 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x1e);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x1d);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1d);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x1d)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar6 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar6 + 0x100],0);
    pcVar4 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x1e);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0x1e);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1e);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x1e)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x11e],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf26 */
byte F_00fd44b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfd44b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  undefined1 RVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined * pRVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"content\":[",0xb);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
  pRVar7 = this + 0x10;
  do {
    RVar2 = *(undefined1 *)pRVar7;
    pRVar7 = pRVar7 + 1;
  } while (RVar2 != (undefined1)0x0);
  F_00e69490(param_1,this + 0x10,(int)pRVar7 - (int)(this + 0x11));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34));
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x38]);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x39]);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x3a],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf12 */
byte F_00fd4750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd4750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  undefined1 RVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined * pRVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"contentdetail\":[",0x11);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt64\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"String\",",0x14);
  F_00e69490(param_1,"\"value\":\"",9);
  pRVar7 = this + 0x10;
  do {
    RVar2 = *(undefined1 *)pRVar7;
    pRVar7 = pRVar7 + 1;
  } while (RVar2 != (undefined1)0x0);
  F_00e69490(param_1,this + 0x10,(int)pRVar7 - (int)(this + 0x11));
  F_00e69490(param_1,&REFG(undefined, 0x1158c00),3);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt64\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34));
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Bool\",",0x12);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x38]);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,4)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Bool\",",0x12);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x39]);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,5)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x3a],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf26 */
byte F_00fd50e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfd50e0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"content\":[",0xb);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 4),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 8),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0xc),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x10),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf12 */
byte F_00fd5300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd5300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"contentdetail\":[",0x11);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 4),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,1)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 8),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0xc),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,3)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x10),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf15 */
byte F_00fd59d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd59d0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_00fd59fb;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00fd5a7d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,uVar5 - 2,0xffffffff);
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00fd5a7d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
    F_00e69490(param_1,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,iVar10);
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
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
LAB_00fd59fb: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf15 */
byte F_00fd5bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd5bc0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_00fd5beb;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00fd5c6d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,uVar5 - 2,0xffffffff);
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00fd5c6d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
    F_00e69490(param_1,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,iVar10);
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
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
LAB_00fd5beb: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf15 */
byte F_00fd5db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd5db0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_00fd5ddb;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00fd5e5d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,uVar5 - 2,0xffffffff);
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00fd5e5d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
    F_00e69490(param_1,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,iVar10);
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
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
LAB_00fd5ddb: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf15 */
byte F_00fd5fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd5fa0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_00fd5fcb;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00fd604d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,uVar5 - 2,0xffffffff);
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00fd604d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
    F_00e69490(param_1,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,iVar10);
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
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
LAB_00fd5fcb: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf15 */
byte F_00fd6190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6190u, gen_a0, gen_a1, 0u, 0u);
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
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_00fd61bb;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00fd623d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,uVar5 - 2,0xffffffff);
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00fd623d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
    F_00e69490(param_1,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,iVar10);
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
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
LAB_00fd61bb: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf5 */
uint F_00fd6380(void)
{
  GEN_ENTER(0xfd6380u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf1 */
uint F_00fd6390(void)
{
  GEN_ENTER(0xfd6390u, 0u, 0u, 0u, 0u);
  return 0x136b484;
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf5 */
uint F_00fd63a0(void)
{
  GEN_ENTER(0xfd63a0u, 0u, 0u, 0u, 0u);
  return 0x1f;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf1 */
uint F_00fd63b0(void)
{
  GEN_ENTER(0xfd63b0u, 0u, 0u, 0u, 0u);
  return 0x136b488;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf5 */
uint F_00fd63c0(void)
{
  GEN_ENTER(0xfd63c0u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf1 */
uint F_00fd63d0(void)
{
  GEN_ENTER(0xfd63d0u, 0u, 0u, 0u, 0u);
  return 0x136b48c;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf5 */
uint F_00fd63e0(void)
{
  GEN_ENTER(0xfd63e0u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf1 */
uint F_00fd63f0(void)
{
  GEN_ENTER(0xfd63f0u, 0u, 0u, 0u, 0u);
  return 0x136b490;
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf5 */
uint F_00fd6400(void)
{
  GEN_ENTER(0xfd6400u, 0u, 0u, 0u, 0u);
  return 0xb;
}

/* ref: Application::Network::WorkDefinitions::Cast_TypeInfo::vf0 */
uint F_00fd6410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf1 */
uint F_00fd6440(void)
{
  GEN_ENTER(0xfd6440u, 0u, 0u, 0u, 0u);
  return 0x136b480;
}

/* ref: Application::Network::WorkDefinitions::Cast::vf0 */
uint F_00fd6450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup_TypeInfo::vf0 */
uint F_00fd6480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ResistGroup::vf0 */
uint F_00fd64b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd64b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CraftWork_TypeInfo::vf0 */
uint F_00fd64e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd64e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CraftWork::vf0 */
uint F_00fd6510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork_TypeInfo::vf0 */
uint F_00fd6540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::RetainerInfoListWork::vf0 */
uint F_00fd6570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi_TypeInfo::vf0 */
uint F_00fd65a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd65a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ChocoboTaxi::vf0 */
uint F_00fd65d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd65d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf1 */
uint F_00fd6630(void)
{
  GEN_ENTER(0xfd6630u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf2 */
uint F_00fd6640(void)
{
  GEN_ENTER(0xfd6640u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136b774);
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf3 */
uint F_00fd6650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12af1fc) + param_1 * 4);
}

/* ref: FUN_00fd6670 */
uint F_00fd6670(unsigned int gen_a0)
{
  GEN_ENTER(0xfd6670u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12af208) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf4 */
uint F_00fd6690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 3);
  return 0xffffffff;
}

/* ref: FUN_00fd66d0 */
uint F_00fd66d0(unsigned int gen_a0)
{
  GEN_ENTER(0xfd66d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0xe;
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf6 */
uint F_00fd66e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd66e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136b768))[param_1];
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf7 */
uint F_00fd6700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12af1d8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf8 */
uint F_00fd6720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12af1f0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf9 */
uint F_00fd6740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3cb0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf10 */
uint F_00fd6760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12af1e4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf14 */
uint F_00fd6780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12af1f0) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12af1f0) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3cb0) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3cb0) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12af1e4) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3cb0) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12af1d8) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12af1e4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12af1d8) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf13 */
uint F_00fd6800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfd6800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3cb0) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12af1e4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12af1d8) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12af1d8) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3cb0) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12af1e4) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf12 */
uint F_00fd6880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xfd6880u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3cb0) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12af1e4) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf11 */
uint F_00fd6910(unsigned int gen_a0)
{
  GEN_ENTER(0xfd6910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,2);
  return uVar3 + uVar1 + uVar2;
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf17 */
uint F_00fd6940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xfd6940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_5 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf16 */
uint F_00fd6960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xfd6960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf15 */
uint F_00fd6980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfd6980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,1,param_2 + uVar1);
  iVar3 = param_2 + uVar1 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,2,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf19 */
uint F_00fd69d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfd69d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,2,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00fd6a20 */
unsigned int F_00fd6a20(unsigned int gen_a0)
{
  GEN_ENTER(0xfd6a20u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf2 */
uint F_00fd6a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136b850) + 0x10))))(&REFG(undefined * PTR32, 0x136b850),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00fd6a60 */
uint F_00fd6a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfd6a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136b850) + 0x10))))(&REFG(undefined * PTR32, 0x136b850),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf4 */
uint F_00fd6a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6a90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
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

/* ref: Application::Network::WorkDefinitions::Recast::vf3 */
uint F_00fd6ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfd6ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf6 */
uint F_00fd6ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    uVar4 = param_1[1];
    *(uint *)(this + 4) = uVar4;
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf5 */
uint F_00fd6b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfd6b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    if (param_2 == 0) {
      uVar4 = param_1[1];
      *(uint *)(this + 4) = uVar4;
    }
    else {
      if (param_2 == 1) {
        *(int *)(this + 8) = param_1[2];
        return 0;
      }
      uVar4 = param_2 - 2;
      if (uVar4 == 0) {
        *(int *)(this + 0xc) = param_1[3];
        return (uint)param_1;
      }
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf8 */
byte F_00fd6bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6bb0u, gen_a0, gen_a1, 0u, 0u);
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
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6);
  pcVar7 = (char *)F_0042a990(uVar6);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6);
    pbVar11 = (byte *)F_0042a990(uVar6);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00fd6cb3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00fd6cb8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00fd6cb3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00fd6cb8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
      uVar12 = F_00e8c050(this_00);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_00fd6d6a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00fd6d6a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf22 */
byte F_00fd6d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xfd6d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  
  if (param_1 == 0) {
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar2;
    return 1;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return 0;
    }
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    fVar3 = F_00e50660(uVar1);
    *(float *)(this + 0xc) = fVar3;
    return 1;
  }
  uVar1 = F_00e82f00(param_2);
  uVar1 = F_0042a990(uVar1);
  fVar3 = F_00e50660(uVar1);
  *(float *)(this + 8) = fVar3;
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf17 */
byte F_00fd6e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfd6e10u, gen_a0, gen_a1, gen_a2, 0u);
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
  float fVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar7 = F_00e50570(uVar3 + 2);
  *(int *)(this + 4) = (int)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  fVar8 = F_00e50660(uVar6 + 3);
  *(float *)(this + 8) = fVar8;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  fVar8 = F_00e50660(uVar3 + 3);
  *(float *)(this + 0xc) = fVar8;
  if (param_2 != (uint *)0x0) {
    uVar3 = F_00c51da0(uVar6,0x7d);
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf10 */
uint F_00fd6f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd6f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf23 */
byte F_00fd7030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfd7030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 8)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 8)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0xc)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0xc)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf9 */
uint F_00fd7110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd7110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf11 */
byte F_00fd7130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xfd7130u, gen_a0, gen_a1, 0u, 0u);
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
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5);
  pcVar6 = (char *)F_0042a990(uVar5);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar9 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
    uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5);
    pbVar10 = (byte *)F_0042a990(uVar5);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00fd7243: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00fd7248;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00fd7243;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00fd7248: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
            uVar12 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13), uVar13 == uVar12)) {
                    uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00fd73b7;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_00fd73b7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf24 */
byte F_00fd73d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfd73d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if (param_1 == 0) {
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar2;
  }
  else if (param_1 == 1) {
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    fVar3 = F_00e50660(uVar1);
    *(float *)(this + 8) = fVar3;
  }
  else {
    if (param_1 != 2) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return 0;
    }
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    fVar3 = F_00e50660(uVar1);
    *(float *)(this + 0xc) = fVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf18 */
byte F_00fd74a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xfd74a0u, gen_a0, gen_a1, gen_a2, 0u);
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
  float fVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b86c));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 4) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b86c));
    iVar5 = uVar3 + 9;
    fVar7 = F_00e50660(iVar5);
    *(float *)(this + 8) = fVar7;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136b86c));
    iVar5 = uVar3 + 9;
    fVar7 = F_00e50660(iVar5);
    *(float *)(this + 0xc) = fVar7;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

