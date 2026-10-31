#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00c07490 */
GEN_OWN_GS GEN_FRAME uint F_00c07490(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc07490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  ulonglong uVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar3 = 0;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar11 = 0xb;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x44))))(piVar2 GEN_EDX_ARG);
    bVar1 = F_00435480(uVar3 GEN_EDX_ARG,uVar11);
    if (bVar1 == 0) {
      uVar11 = 0xc;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x44))))(piVar2 GEN_EDX_ARG);
      bVar1 = F_00435480(uVar3 GEN_EDX_ARG,uVar11);
      if (bVar1 == 0) {
        iVar5 = (-(uint)(*(char *)(param_2 + 2) != '\x01') & 0xffffffbd) + 0x50;
        F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,(int)param_2 + 0x29,REFG(undefined4, 0x108cc50));
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)param_2 + 9,REFG(undefined4, 0x108cc50));
        uVar9 = param_2[1];
        uVar8 = *param_2;
        uVar10 = 0;
        uVar11 = 0;
        puVar7 = ((undefined1 *)(gen_frame + 0x54));
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG);
        uVar3 = F_0043a560(uVar3 GEN_EDX_ARG,puVar7,uVar11);
        puVar7 = ((undefined1 *)(gen_frame + 0x0));
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
        F_0045a450(pvVar4 GEN_EDX_ARG,iVar5,puVar7,uVar3,uVar8,uVar9,uVar10);
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
        F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,(int)param_2 + 9,REFG(undefined4, 0x108cc50));
        uVar11 = 1;
        puVar7 = ((undefined1 *)(gen_frame + 0x54));
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x38))))(piVar2 GEN_EDX_ARG);
        F_00455e50(uVar3 GEN_EDX_ARG,puVar7,uVar11);
      }
      else {
        pvVar4 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
          return 0;
        }
        uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,(int)param_2 + 9,REFG(undefined4, 0x108cc50));
        F_00974fc0(pvVar4 GEN_EDX_ARG,uVar3);
      }
      uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
      uVar3 = (uint)uVar6;
    }
    else {
      pvVar4 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar3 = 0;
      if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
        bVar1 = F_00975010(pvVar4 GEN_EDX_ARG,*param_2,param_2[1]);
        return CONCAT31(extraout_var,bVar1);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00c07620 */
GEN_OWN_GS GEN_FRAME uint F_00c07620(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc07620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * this;
  ulonglong uVar3;
  undefined4 uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
    uVar4 = 0x32;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
    F_0046a880(this GEN_EDX_ARG,uVar4,uVar2);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar2 = (uint)uVar3;
  }
  return uVar2;
}

/* ref: FUN_00c07680 */
GEN_OWN_GS GEN_FRAME uint F_00c07680(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc07680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * this;
  ulonglong uVar3;
  undefined4 uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
    uVar4 = 0x31;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
    F_0046a880(this GEN_EDX_ARG,uVar4,uVar2);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar2 = (uint)uVar3;
  }
  return uVar2;
}

/* ref: FUN_00c076e0 */
GEN_OWN_GS GEN_FRAME uint F_00c076e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc076e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * this;
  ulonglong uVar3;
  undefined4 uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
    uVar4 = 0x2b3;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
    F_0046a880(this GEN_EDX_ARG,uVar4,uVar2);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar2 = (uint)uVar3;
  }
  return uVar2;
}

/* ref: FUN_00c07750 */
GEN_OWN_GS GEN_FRAME uint F_00c07750(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc07750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2a8, 8, 4);
  char cVar1;
  byte bVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  undefined1 * puVar7;
  char * pcVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2a0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2a4));
  bVar2 = *(byte *)(param_2 + 1);
  if ((((bVar2 == 1) || (bVar2 == 2)) || (bVar2 == 3)) &&
     (pvVar3 = ((undefined *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_2[4]))), pvVar3 != ((undefined *)GEN_TOP(0x0)))) {
    pcVar8 = ((char *)GEN_TOP(((int)param_2 + 0x35)));
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    F_00aa5d80(pvVar3 GEN_EDX_ARG,(int)pcVar8 - ((int)param_2 + 0x36),0);
  }
  piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar5 = 0;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    uVar5 = (uint)bVar2;
    if (uVar5 == 1) {
      iVar13 = param_2[3];
      iVar12 = param_2[2];
      iVar9 = (-(uint)((char)param_2[5] != '\x01') & 0xffffffba) + 0x54;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x44))))(piVar4 GEN_EDX_ARG)));
      uVar5 = F_0043fa30(pvVar3 GEN_EDX_ARG,iVar12,iVar13);
      if ((char)uVar5 != '\0') {
        return uVar5;
      }
      uVar11 = 0xb;
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x44))))(piVar4 GEN_EDX_ARG);
      bVar2 = F_00435480(uVar5 GEN_EDX_ARG,uVar11);
      if (bVar2 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)param_2 + 0x35,REFG(undefined4, 0x108cc50));
        F_0042cc20(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,(int)param_2 + 0x15,REFG(undefined4, 0x108cc50));
        iVar13 = param_2[3];
        iVar12 = param_2[2];
        uVar14 = 0;
        uVar11 = 1;
        puVar7 = ((undefined1 *)(gen_frame + 0x0));
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG);
        uVar5 = F_0043a560(uVar5 GEN_EDX_ARG,puVar7,uVar11);
        puVar7 = ((undefined1 *)(gen_frame + 0xa8));
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
        F_0045a450(pvVar3 GEN_EDX_ARG,iVar9,puVar7,uVar5,iVar12,iVar13,uVar14);
        F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
        puVar7 = ((undefined1 *)(gen_frame + 0x0));
      }
      else {
        if (REFG(int, 0x1338ac8) != *param_2) {
          return CONCAT31(extraout_var,bVar2);
        }
        if (REFG(int, 0x1338acc) != param_2[1]) {
          return CONCAT31(extraout_var,bVar2);
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG,(int)param_2 + 0x35,REFG(undefined4, 0x108cc50));
        F_0042cc20(((undefined1 *)(gen_frame + 0x1f8)) GEN_EDX_ARG,(int)param_2 + 0x15,REFG(undefined4, 0x108cc50));
        iVar13 = param_2[3];
        iVar12 = param_2[2];
        uVar14 = 0;
        uVar11 = 1;
        puVar7 = ((undefined1 *)(gen_frame + 0x150));
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG);
        uVar5 = F_0043a560(uVar5 GEN_EDX_ARG,puVar7,uVar11);
        puVar7 = ((undefined1 *)(gen_frame + 0x1f8));
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
        F_0045a450(pvVar3 GEN_EDX_ARG,iVar9,puVar7,uVar5,iVar12,iVar13,uVar14);
        F_0042c880(((undefined1 *)(gen_frame + 0x1f8)) GEN_EDX_ARG);
        puVar7 = ((undefined1 *)(gen_frame + 0x150));
      }
    }
    else if (uVar5 == 2) {
      uVar11 = 0xb;
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x44))))(piVar4 GEN_EDX_ARG);
      bVar2 = F_00435480(uVar5 GEN_EDX_ARG,uVar11);
      if (bVar2 == 0) {
        uVar14 = 2;
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x44))))(piVar4 GEN_EDX_ARG);
        pvVar3 = ((undefined *)GEN_TOP(F_00435440(uVar5 GEN_EDX_ARG,uVar14)));
        if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
          return 0;
        }
        uVar5 = F_00439350(pvVar3 GEN_EDX_ARG,*param_2,param_2[1]);
      }
      else {
        uVar14 = 0xf;
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x44))))(piVar4 GEN_EDX_ARG);
        pvVar3 = ((undefined *)GEN_TOP(F_00435440(uVar5 GEN_EDX_ARG,uVar14)));
        if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
          return 0;
        }
        bVar2 = F_0043a0d0(pvVar3 GEN_EDX_ARG,*param_2,param_2[1]);
        uVar5 = (uint)(char)bVar2;
      }
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      if ((char)param_2[5] == '\x01') {
        uVar5 = uVar5 + 0x56;
      }
      else {
        uVar5 = uVar5 + 0x10;
      }
      uVar5 = uVar5 & 0xffff;
      F_0042cc20(((undefined1 *)(gen_frame + 0x24c)) GEN_EDX_ARG,(int)param_2 + 0x35,REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,(int)param_2 + 0x15,REFG(undefined4, 0x108cc50));
      iVar13 = param_2[3];
      iVar12 = param_2[2];
      uVar14 = 0;
      uVar11 = 0;
      puVar7 = ((undefined1 *)(gen_frame + 0x24c));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG);
      uVar6 = F_0043a560(uVar6 GEN_EDX_ARG,puVar7,uVar11);
      puVar7 = ((undefined1 *)(gen_frame + 0x54));
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
      F_0045a450(pvVar3 GEN_EDX_ARG,uVar5,puVar7,uVar6,iVar12,iVar13,uVar14);
      F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
      puVar7 = ((undefined1 *)(gen_frame + 0x24c));
    }
    else {
      if (uVar5 - 3 != 0) {
        return uVar5 - 3;
      }
      iVar9 = (-(uint)((char)param_2[5] != '\x01') & 0xffffffc3) + 0x55;
      F_0042cc20(((undefined1 *)(gen_frame + 0x1a4)) GEN_EDX_ARG,(int)param_2 + 0x35,REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG,(int)param_2 + 0x15,REFG(undefined4, 0x108cc50));
      iVar13 = param_2[3];
      iVar12 = param_2[2];
      uVar14 = 0;
      uVar11 = 0;
      puVar7 = ((undefined1 *)(gen_frame + 0x1a4));
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG);
      uVar5 = F_0043a560(uVar5 GEN_EDX_ARG,puVar7,uVar11);
      puVar7 = ((undefined1 *)(gen_frame + 0xfc));
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
      F_0045a450(pvVar3 GEN_EDX_ARG,iVar9,puVar7,uVar5,iVar12,iVar13,uVar14);
      F_0042c880(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG);
      puVar7 = ((undefined1 *)(gen_frame + 0x1a4));
    }
    uVar10 = F_0042c880(puVar7 GEN_EDX_ARG);
    uVar5 = (uint)uVar10;
  }
  return uVar5;
}

/* ref: FUN_00c07ad0 */
GEN_OWN GEN_FRAME uint F_00c07ad0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc07ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar3 = 0xf;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x44))))(piVar1 GEN_EDX_ARG);
    this = ((undefined *)GEN_TOP(F_00435440(uVar2 GEN_EDX_ARG,uVar3)));
    uVar2 = 0;
    if (this != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_00439fa0(this GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: Client::Network::Socket::SocketWinsock::Create */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc07b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  SOCKET s;
  int iVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  ((char *)(gen_frame + 0x4))[0] = '\x01';
  ((char *)(gen_frame + 0x4))[1] = '\0';
  ((char *)(gen_frame + 0x4))[2] = '\0';
  ((char *)(gen_frame + 0x4))[3] = '\0';
  *(int *)(this + 8) = (*(int *)&gen_args[0]);
  iVar2 = ((*(int *)&gen_args[0]) != 0) + 1;
  if ((*(int *)&gen_args[0]) == 4) {
    iVar2 = 3;
  }
  s = gen_imp_socket(2,iVar2,(uint)((*(int *)&gen_args[0]) == 4));
  *(SOCKET *)(this + 4) = s;
  if (s != 0xffffffff) {
    if (iVar2 == 2) {
      (*(int *)&gen_args[0]) = 0;
      iVar2 = gen_imp_WSAIoctl(s,0x9800000c,&(*(int *)&gen_args[0]),4,0,0,((undefined1 *)(gen_frame + 0x0)),0,0);
      if (iVar2 == -1) {
        iVar2 = gen_imp_WSAGetLastError();
        return -(uint)(iVar2 != 0x2733);
      }
    }
    else if (iVar1 == 6) {
      gen_imp_setsockopt(s,6,1,((char *)(gen_frame + 0x4)),4);
    }
    return 0;
  }
  return 0xffffffff;
}

/* ref: Client::Network::Socket::SocketWinsock::Close */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c07bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc07bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_closesocket(*(SOCKET *)(this + 4));
  return 0;
}

/* ref: Client::Network::Socket::SocketWinsock::SetNonBlocking */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc07c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined1 SVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  SVar1 = this[0x24];
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x1));
  if (SVar1 == (undefined1)0x0) {
    gen_imp_ioctlsocket(*(SOCKET *)(this + 4),-0x7ffb9982,(ulong *)&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    this[0x24] = (undefined1)0x1;
  }
  return 0;
}

/* ref: Client::Network::Socket::SocketWinsock::BindAddress */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc07c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  SOCKET s;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  s = *(SOCKET *)(this + 4);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x1));
  gen_imp_setsockopt(s,0xffff,4,(char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)),4);
  uVar1 = gen_imp_bind(*(SOCKET *)(this + 4),param_1,param_2);
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::ListenBacklog */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc07c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = gen_imp_listen(*(SOCKET *)(this + 4),param_1);
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::AcceptConnection */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c07ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc07ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_accept(*(SOCKET *)(this + 4),((undefined *)GEN_TOP(0x0)),((int *)GEN_TOP(0x0)));
  if (uVar1 == 0xffffffff) {
    iVar2 = gen_imp_WSAGetLastError();
    if (((iVar2 != 0x2714) && (iVar2 != 0x2733)) && (iVar2 != 0x2745)) {
      return 0xffffffff;
    }
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::ConnectTo */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc07ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_connect(*(SOCKET *)(this + 4),param_1,param_2);
  if (uVar1 == 0xffffffff) {
    iVar2 = gen_imp_WSAGetLastError();
    uVar1 = (iVar2 != 0x2733) - 2;
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::SendData */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc07d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_send(*(SOCKET *)(this + 4),param_1,param_2,0);
  if ((int)uVar1 < 0) {
    iVar2 = gen_imp_WSAGetLastError();
    uVar1 = -(uint)(iVar2 != 0x2733);
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::RecvData */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc07d50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_recv(*(SOCKET *)(this + 4),param_1,param_2,0);
  if (uVar1 == 0xffffffff) {
    iVar2 = gen_imp_WSAGetLastError();
    uVar1 = (iVar2 != 0x2733) - 2;
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::SendDataTo */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc07d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_sendto(*(SOCKET *)(this + 4),param_1,param_2,0,param_3,param_4);
  if (uVar1 == 0xffffffff) {
    iVar2 = gen_imp_WSAGetLastError();
    uVar1 = -(uint)(iVar2 != 0x2733);
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::RecvDataFrom */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc07dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  uint uVar1;
  
  uVar1 = gen_imp_recvfrom(*(SOCKET *)(this + 4),param_1,param_2,0,param_3,param_4);
  if (uVar1 == 0xffffffff) {
    gen_imp_WSAGetLastError();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::GetPendingError */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc07e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  SOCKET s;
  int iVar1;
  
  s = *(SOCKET *)(this + 4);
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x0)) = 4;
  iVar1 = gen_imp_getsockopt(s,0xffff,0x1007,(char *)&(*(uint *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x0)));
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return (*(uint *)(gen_frame + 0x4));
}

/* ref: Client::Network::Socket::SocketWinsock::GetPeerAddress */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc07e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = gen_imp_getpeername(*(SOCKET *)(this + 4),param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if ((iVar1 != -1) && (iVar1 != 0x2736)) {
    return (-(uint)(iVar1 != 0x2749) & 0xffffe8b7) + 0x2749;
  }
  return 0x2736;
}

/* ref: Client::Network::Socket::SocketWinsock::GetLocalAddress */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc07eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = gen_imp_getsockname(*(SOCKET *)(this + 4),param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if (iVar1 != -1) {
    if (iVar1 == 0x2726) {
      return 0x2726;
    }
    if (iVar1 != 0x2736) {
      return 0x1000;
    }
  }
  return 0x2736;
}

/* ref: Client::Network::Socket::SocketWinsock::SetSendTimeout */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc07f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  
  iVar1 = gen_imp_setsockopt(*(SOCKET *)(this + 4),0xffff,0x1005,(char *)&(*(undefined4 *)&gen_args[0]),4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if (iVar1 != -1) {
    if (iVar1 == 0x2726) {
      return 0x2726;
    }
    if (iVar1 != 0x2736) {
      return 0x1000;
    }
  }
  return 0x2736;
}

/* ref: Client::Network::Socket::SocketWinsock::SetRecvTimeout */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc07f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  
  iVar1 = gen_imp_setsockopt(*(SOCKET *)(this + 4),0xffff,0x1006,(char *)&(*(undefined4 *)&gen_args[0]),4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if (iVar1 != -1) {
    if (iVar1 == 0x2726) {
      return 0x2726;
    }
    if (iVar1 != 0x2736) {
      return 0x1000;
    }
  }
  return 0x2736;
}

/* ref: Client::Network::Socket::SocketWinsock::SetMulticastInterface */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c07fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc07fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  SOCKET s;
  int iVar1;
  
  (*(char * PTR32 *)&gen_args[0]) = ((char *)GEN_TOP(gen_imp_inet_addr((*(char * PTR32 *)&gen_args[0]))));
  s = *(SOCKET *)(this + 4);
  iVar1 = gen_imp_setsockopt(s,0,9,(char *)&(*(char * PTR32 *)&gen_args[0]),4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if (iVar1 != -1) {
    if (iVar1 == 0x2726) {
      return 0x2726;
    }
    if (iVar1 != 0x2736) {
      return 0x1000;
    }
  }
  return 0x2736;
}

/* ref: Global::StartupWinsock */
GEN_OWN_GS GEN_FRAME uint F_00c08040(void)
{
  GEN_ENTER(0xc08040u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_GS(0x198, 8, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x190)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x194));
  uVar1 = gen_imp_WSAStartup(2,((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPSegment::RUDPSegment */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08080(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc08080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  *(undefined1 *)(param_1 + 1) = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 6))) = param_4;
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *((undefined1 *)GEN_TOP(((int)param_1 + 5))) = param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 7))) = 0;
  param_1[2] = 0;
  return (uint)param_1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPSegment::RUDPSegment_00c080b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c080b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc080b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  this[4] = *param_1;
  this[5] = param_1[1];
  this[6] = param_1[2];
  this[7] = param_1[3];
  *(undefined4 *)(this + 8) = 0;
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::RUDPSegment::SetAck */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c08120(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc08120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 4))) = *((byte *)GEN_TOP((in_ecx + 4))) | 0x40;
  *((byte *)GEN_TOP((in_ecx + 7))) = param_2;
  return param_2;
}

/* ref: Client::Network::Socket::RUDP2::RUDPSegment::GetLength */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c08160(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc08160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 5)));
}

/* ref: Client::Network::Socket::RUDP2::RUDPSegment::Serialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c08170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc08170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (param_2 < (int)uVar1) {
    return 0;
  }
  *param_1 = this[4];
  param_1[1] = this[5];
  param_1[2] = this[6];
  param_1[3] = this[7];
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPSegment::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c081b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc081b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c081e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c081e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc081e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *((undefined1 *)GEN_TOP(((int)param_1 + 6))) = param_2;
  param_1[2] = 0;
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
  *(undefined2 *)(param_1 + 1) = 0x640;
  *((undefined1 *)GEN_TOP(((int)param_1 + 7))) = param_3;
  return (uint)param_1;
}

/* ref: FUN_00c08210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc08210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 5))) = param_1[1];
  *((undefined1 *)GEN_TOP(((int)this + 6))) = param_1[2];
  *((undefined1 *)GEN_TOP(((int)this + 7))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
  return (uint)this;
}

/* ref: FUN_00c08260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc08260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined1 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 5))) = param_1[1];
  *((undefined1 *)GEN_TOP(((int)this + 6))) = param_1[2];
  uVar1 = param_1[3];
  *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0xc))) = param_1 + 6;
  *((undefined1 *)GEN_TOP(((int)this + 7))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
  *((int *)GEN_TOP(((int)this + 0x10))) = param_2 - 6;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  return (uint)this;
}

/* ref: FUN_00c082b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c082b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc082b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined1 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 5))) = param_1[1];
  *((undefined1 *)GEN_TOP(((int)this + 6))) = param_1[2];
  uVar1 = param_1[3];
  *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0xc))) = param_1 + 4;
  *((undefined1 *)GEN_TOP(((int)this + 7))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
  *((int *)GEN_TOP(((int)this + 0x10))) = param_2 - 6;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  return (uint)this;
}

/* ref: FUN_00c08300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08300(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc08300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)in_ecx + 6))) = param_2;
  *(undefined2 *)(in_ecx + 1) = 0x608;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 7))) = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
  return (uint)in_ecx;
}

/* ref: FUN_00c08330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc08330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 5))) = param_1[1];
  *((undefined1 *)GEN_TOP(((int)this + 6))) = param_1[2];
  *((undefined1 *)GEN_TOP(((int)this + 7))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
  return (uint)this;
}

/* ref: FUN_00c08380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08380(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc08380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)in_ecx + 6))) = param_2;
  *(undefined2 *)(in_ecx + 1) = 0x610;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 7))) = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
  return (uint)in_ecx;
}

/* ref: FUN_00c083b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c083b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc083b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 5))) = param_1[1];
  *((undefined1 *)GEN_TOP(((int)this + 6))) = param_1[2];
  *((undefined1 *)GEN_TOP(((int)this + 7))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c08450(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc08450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x80))) = 1;
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::GetState */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c08460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc08460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((in_ecx + 0x7c))))) {
  default: ;
    return 0;
  case 1: ;
    return 1;
  case 2: ;
  case 3: ;
    return 3;
  case 4: ;
  case 5: ;
    return 4;
  case 6: ;
    return 7;
  }
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::GetPeerAddress */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c084b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc084b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (*(int *)(this + 0x7c) != 4) {
    return 0x2749;
  }
  F_00ba6880(param_1 GEN_EDX_FWD,this + 0x82);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf12 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c084e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc084e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ba7750(*(undefined * PTR32 *)(this + 0x74) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf13 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c084f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc084f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ba89b0(*(undefined * PTR32 *)(this + 0x74) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00c08500 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c08500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc08500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (((*((char *)GEN_TOP(((int)this + 0x80))) != '\0') && (*((int *)GEN_TOP(((int)this + 0x70))) != 0)) &&
     (*((gen_code32 *)GEN_TOP(((int)this + 0x24))) != ((code *)GEN_TOP(0x0)))) {
    ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x24))))(*((int *)GEN_TOP(((int)this + 0x70))));
  }
  return;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::PiggybackAck */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc08530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0xd0)));
  *((undefined4 *)GEN_TOP((in_ecx + 0xd0))) = 0;
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xcc)));
    *((byte *)GEN_TOP((param_2 + 4))) = *((byte *)GEN_TOP((param_2 + 4))) | 0x40;
    *((char *)GEN_TOP((param_2 + 7))) = (char)uVar2;
    uVar3 = param_2;
  }
  return uVar3;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::StopTimers */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c08560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc08560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x170))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x120))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x148))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x198))) = 0;
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::SetState */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc08590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 != *((uint *)GEN_TOP((in_ecx + 0x7c)))) {
    *((uint *)GEN_TOP((in_ecx + 0x7c))) = param_2;
  }
  return param_2;
}

/* ref: FUN_00c085d0 */
GEN_OWN GEN_NOFRAME unsigned int F_00c085d0(void)
{
  GEN_ENTER(0xc085d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Network::Socket::RUDP2::GetSegmentType */
GEN_OWN GEN_FRAME uint F_00c085e0(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc085e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  
  if (5 < param_2) {
    bVar1 = *param_1;
    if ((char)bVar1 < '\0') {
      return 1;
    }
    if ((bVar1 & 8) != 0) {
      return 5;
    }
    if ((bVar1 & 0x20) != 0) {
      return 3;
    }
    if ((bVar1 & 0x10) != 0) {
      return 4;
    }
    if ((bVar1 & 0x40) != 0) {
      return (param_2 != 6) - 1 & 2;
    }
  }
  return 6;
}

/* ref: FUN_00c08640 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00c08640(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined1 param_8, unsigned int gen_a7), GEN_P(undefined1 param_9, unsigned int gen_a8), GEN_P(undefined1 param_10, unsigned int gen_a9), GEN_P(undefined1 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0xc08640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined1 param_8 = (undefined1)gen_a7;)
  GEN_PIN(undefined1 param_9 = (undefined1)gen_a8;)
  GEN_PIN(undefined1 param_10 = (undefined1)gen_a9;)
  GEN_PIN(undefined1 param_11 = (undefined1)gen_a10;)
  *((undefined1 *)GEN_TOP(((int)param_1 + 6))) = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 7))) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xd))) = param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xe))) = 1;
  *(undefined2 *)(param_1 + 4) = (undefined2)param_4;
  *((undefined2 *)GEN_TOP(((int)param_1 + 0x12))) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 5) = (undefined2)param_6;
  *((undefined2 *)GEN_TOP(((int)param_1 + 0x16))) = (undefined2)param_7;
  *(undefined1 *)(param_1 + 6) = param_8;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x19))) = param_9;
  *(undefined2 *)(param_1 + 1) = 0x1680;
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1a))) = param_10;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1b))) = param_11;
  return 0;
}

/* ref: FUN_00c086b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c086b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc086b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 5))) = param_1[1];
  *((undefined1 *)GEN_TOP(((int)this + 6))) = param_1[2];
  *((undefined1 *)GEN_TOP(((int)this + 7))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
  *((byte *)GEN_TOP(((int)this + 0xc))) = (byte)param_1[4] >> 4;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = param_1[5];
  *((undefined1 *)GEN_TOP(((int)this + 0xe))) = param_1[6];
  *((ushort *)GEN_TOP(((int)this + 0x10))) = CONCAT11(param_1[8],param_1[9]);
  *((ushort *)GEN_TOP(((int)this + 0x12))) = CONCAT11(param_1[10],param_1[0xb]);
  *((ushort *)GEN_TOP(((int)this + 0x14))) = CONCAT11(param_1[0xc],param_1[0xd]);
  *((ushort *)GEN_TOP(((int)this + 0x16))) = CONCAT11(param_1[0xe],param_1[0xf]);
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = param_1[0x10];
  *((undefined1 *)GEN_TOP(((int)this + 0x19))) = param_1[0x11];
  *((undefined1 *)GEN_TOP(((int)this + 0x1a))) = param_1[0x12];
  *((undefined1 *)GEN_TOP(((int)this + 0x1b))) = param_1[0x13];
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::SendSegment */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc08780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x12008, 8, 4);
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  __time64_t _Var4;
  ulonglong uVar5;
  undefined * pRVar6;
  
  (*(uint *)(gen_frame + 0x12000)) = 0xc0878d;
  (*(uint *)(gen_frame + 0x12000)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  if (((uVar3 == 0) || ((3 < (int)uVar3 && ((int)uVar3 < 6)))) &&
     (iVar1 = *(int *)(this + 0xd0), *(undefined4 *)(this + 0xd0) = 0, iVar1 != 0)) {
    uVar2 = *(undefined4 *)(this + 0xcc);
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x40;
    *((char *)GEN_TOP(((int)param_1 + 7))) = (char)uVar2;
  }
  if ((uVar3 == 0) || (uVar3 == 4)) {
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *(int *)(this + 0xe0) = (int)_Var4;
    uVar5 = F_00427d90();
    *(ulonglong *)(this + 0xe8) = uVar5;
    uVar5 = F_00427e30();
    *(ulonglong *)(this + 0xf0) = uVar5;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10000)),0x2000);
  if ((char)uVar3 != '\0') {
    pRVar6 = this + 0x82;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG);
    uVar3 = F_00baa590(*(undefined * PTR32 *)(this + 0x74) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10000)),uVar3,pRVar6);
  }
  return uVar3;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::SendPendingAck */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc08860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0xd0);
  *(undefined4 *)(this + 0xd0) = 0;
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(this + 0xcc);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
    (*(undefined2 *)(gen_frame + 0x4)) = 0x640;
    (*(undefined1 *)(gen_frame + 0x7)) = (char)iVar1;
    (*(undefined1 *)(gen_frame + 0x6)) = (char)((iVar1 + 1) % 0xff);
    uVar2 = F_00c08780(this GEN_EDX_FWD,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  return uVar2;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::EnterTimeWait */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c088c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc088c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  if (*(int *)(this + 0x7c) != 5) {
    *(undefined4 *)(this + 0x7c) = 5;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x20)));
  *(undefined4 *)(this + 0x198) = 1;
  *(int *)(this + 0x19c) = iVar1 * 2;
  *(undefined4 *)(this + 0x1a0) = 0;
  _Var3 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *(int *)(this + 0x180) = (int)_Var3;
  uVar4 = F_00427d90();
  *(ulonglong *)(this + 0x188) = uVar4;
  uVar4 = F_00427e30();
  uVar2 = (uint)uVar4;
  *(ulonglong *)(this + 400) = uVar4;
  if (this[0x80] == (undefined1)0x0) {
    iVar1 = *(int *)(this + 0x7c);
    while (iVar1 != 6) {
      uVar2 = F_00bada50();
      iVar1 = *(int *)(this + 0x7c);
    }
  }
  return uVar2;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c08960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc08960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_InterlockedExchange(((LONG *)GEN_TOP((*(int *)(this + 0x74) + 0x24))),0);
  F_00baba80(*(undefined * PTR32 *)(this + 0x74) GEN_EDX_ARG);
  if (*(int *)(this + 0x7c) != 1) {
    *(undefined4 *)(this + 0x7c) = 1;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::GetReceivableSize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc08990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  bool bVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  uint local_c;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1d0)));
  local_c = 0;
  bVar3 = false;
  if (piVar5 != *(int * PTR32 *)(this + 0x1d0)) {
    do {
      piVar1 = ((int *)GEN_TOP(piVar5[2]));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
      if (uVar4 == 0) {
        piVar2 = ((int *)GEN_TOP(piVar1[5]));
        if (piVar2 == ((int *)GEN_TOP(0x0))) {
          iVar6 = piVar1[4];
        }
        else {
          iVar6 = piVar2[1] - *piVar2;
        }
        local_c = local_c + iVar6;
LAB_00c089ed: ;
        piVar5 = ((int *)GEN_TOP(*piVar5));
      }
      else {
        if (uVar4 != 4) goto LAB_00c089ed;
        if (local_c == 0) {
          bVar3 = true;
        }
        piVar5 = *(int * PTR32 *)(this + 0x1d0);
      }
    } while (piVar5 != *(undefined4 * PTR32 *)(this + 0x1d0));
    if (local_c != 0) {
      return local_c;
    }
    if (bVar3) {
      return 0;
    }
  }
  return 0xffffffff;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::ClearSentList */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c08a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc08a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1ac)));
  if (piVar3 != *(int * PTR32 *)(this + 0x1ac)) {
    do {
      puVar1 = ((undefined4 *)GEN_TOP(piVar3[2]));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
      }
      piVar3 = ((int *)GEN_TOP(*piVar3));
    } while (piVar3 != ((int *)GEN_TOP(*(int *)(this + 0x1ac))));
  }
  piVar3 = *(int * PTR32 *)(this + 0x1ac);
  piVar2 = ((int *)GEN_TOP(*piVar3));
  *piVar3 = (int)piVar3;
  *((int *)GEN_TOP((*(int *)(this + 0x1ac) + 4))) = *(int *)(this + 0x1ac);
  *(undefined4 *)(this + 0x1b0) = 0;
  if (piVar2 != *(int * PTR32 *)(this + 0x1ac)) {
    do {
      piVar3 = ((int *)GEN_TOP(*piVar2));
      F_00429760(piVar2,0xc,0x25c);
      piVar2 = piVar3;
    } while (piVar3 != ((int *)GEN_TOP(*(int *)(this + 0x1ac))));
  }
  return 0;
}

/* ref: FUN_00c08a80 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c08a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc08a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,piVar1[2] - iVar2,0x25c);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  return;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::RUDPImpl */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc08ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0x78;
  *(undefined4 *)(this + 0x30) = 0x2d;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x110e7b4));
  uVar1 = param_2;
  if (param_2 == 0) {
    uVar1 = F_00406b90(0x28,0,0);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00ba85b0(uVar1 GEN_EDX_ARG,1);
    }
  }
  *(undefined4 *)(this + 0x78) = param_3;
  *(uint *)(this + 0x74) = uVar1;
  *(undefined4 *)(this + 0x7c) = 0;
  this[0x80] = (undefined1)0x0;
  F_00ba6710(this + 0x82 GEN_EDX_ARG);
  *(undefined2 *)(this + 0xc2) = 0;
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(0x2c,0,0)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar2 = 0x20;
    puVar2[1] = 0x20;
    puVar2[2] = 0x400;
    puVar2[3] = 3;
    puVar2[4] = 0;
    puVar2[5] = 3;
    puVar2[6] = 3;
    puVar2[7] = 3;
    puVar2[8] = 2000;
    puVar2[9] = 600;
    puVar2[10] = 300;
  }
  *(undefined4 * PTR32 *)(this + 0xc4) = puVar2;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  F_00a1af40(this + 0xe0 GEN_EDX_ARG);
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  F_00a1af40(this + 0x108 GEN_EDX_ARG);
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  F_00a1af40(this + 0x130 GEN_EDX_ARG);
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  F_00a1af40(this + 0x158 GEN_EDX_ARG);
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  F_00a1af40(this + 0x180 GEN_EDX_ARG);
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  this[0x1a8] = (undefined1)0x1;
  *(undefined4 *)(this + 0x1b0) = 0;
  uVar1 = F_004296a0(0xc,0,0x25c);
  *(uint *)(this + 0x1ac) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*(int *)(this + 0x1ac) + 4))) = *(int *)(this + 0x1ac);
  *(undefined4 *)(this + 0x1bc) = 0;
  uVar1 = F_004296a0(0xc,0,0x25c);
  *(uint *)(this + 0x1b8) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*(int *)(this + 0x1b8) + 4))) = *(int *)(this + 0x1b8);
  *(undefined4 *)(this + 0x1c8) = 0;
  uVar1 = F_004296a0(0xc,0,0x25c);
  *(uint *)(this + 0x1c4) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*(int *)(this + 0x1c4) + 4))) = *(int *)(this + 0x1c4);
  *(undefined4 *)(this + 0x1d4) = 0;
  uVar1 = F_004296a0(0xc,0,0x25c);
  *(uint *)(this + 0x1d0) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*(int *)(this + 0x1d0) + 4))) = *(int *)(this + 0x1d0);
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 500) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1dc) = **(undefined4 * PTR32 *)(this + 0xc4);
  *(undefined4 *)(this + 0x1e0) = (*(undefined4 * PTR32 *)(this + 0xc4))[1];
  return (uint)this;
}

/* ref: FUN_00c08d70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc08d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  undefined * this_00;
  
  if (*((char *)GEN_TOP(((int)this + 0x80))) != '\0') {
    uVar1 = F_00406b90(0x28,0,0);
    if (uVar1 == 0) {
      this_00 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      this_00 = ((undefined *)GEN_TOP(F_00ba85b0(uVar1 GEN_EDX_ARG,3)));
    }
    uVar1 = F_00ba6e30(*((undefined4 *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG);
    if (uVar1 == 0) {
      uVar1 = REFG(undefined4, 0x14c5958);
    }
    (*(int * PTR32 *)&gen_args[0])[0x1c] = (int)this_00;
    F_00ba86b0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]));
    F_00ba9ae0(this_00 GEN_EDX_ARG,uVar1);
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x70)));
    if ((uVar1 != 0) && (*((gen_code32 *)GEN_TOP(((int)this + 0x10))) != ((code *)GEN_TOP(0x0)))) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x10))))(uVar1,this_00);
    }
    return uVar1;
  }
  if (*((int *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP(((int)this + 500))) + 4))) < 0x7fffffff) {
    uVar1 = F_00c0eda0(*((undefined * PTR32 *)GEN_TOP(((int)this + 500))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]));
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::ReadReceivedData */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc08e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  uint local_8;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1d0)));
  uVar2 = 0;
  local_8 = 0;
  if (piVar5 != *(int * PTR32 *)(this + 0x1d0)) {
    do {
      piVar1 = ((int *)GEN_TOP(piVar5[2]));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
      if (uVar2 == 0) {
        piVar6 = ((int *)GEN_TOP(piVar1[5]));
        if (piVar6 == ((int *)GEN_TOP(0x0))) {
          iVar4 = piVar1[4];
          iVar3 = piVar1[3];
        }
        else {
          iVar4 = piVar6[1] - *piVar6;
          iVar3 = *piVar6;
        }
        F_00c46aa0(local_8 + param_1,iVar3,iVar4);
        local_8 = local_8 + iVar4;
        piVar6 = ((int *)GEN_TOP(*piVar5));
        if (piVar5 != *(int * PTR32 *)(this + 0x1d0)) {
          *((int * PTR32 *)GEN_TOP(piVar5[1])) = piVar6;
          *((int *)GEN_TOP((*piVar5 + 4))) = piVar5[1];
          F_00429760(piVar5,0xc,0x25c);
          *(int *)(this + 0x1d4) = *(int *)(this + 0x1d4) - 1;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar1)))(piVar1 GEN_EDX_ARG,1);
      }
      else if (uVar2 == 4) {
        if (local_8 == 0) {
          if (piVar5 != *(int * PTR32 *)(this + 0x1d0)) {
            *((int *)GEN_TOP(piVar5[1])) = *piVar5;
            *((int *)GEN_TOP((*piVar5 + 4))) = piVar5[1];
            F_00429760(piVar5,0xc,0x25c);
            *(int *)(this + 0x1d4) = *(int *)(this + 0x1d4) - 1;
          }
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar1)))(piVar1 GEN_EDX_ARG,1);
        }
        piVar6 = *(int * PTR32 *)(this + 0x1d0);
      }
      else {
        piVar6 = ((int *)GEN_TOP(*piVar5));
      }
      uVar2 = local_8;
      piVar5 = piVar6;
    } while (piVar6 != *(int * PTR32 *)(this + 0x1d0));
  }
  return uVar2;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::RemoveChildByAddress */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc08f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = F_00ba6930((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  uVar4 = (uint)(uVar5 >> 0x20);
  this_00 = *(undefined * PTR32 *)(this + 0x1f8);
  (*(ulonglong *)(gen_frame + 0x0)) = uVar5;
  uVar2 = F_00c0d000(this_00 GEN_EDX_ARG,&(*(ulonglong *)(gen_frame + 0x0)));
  uVar1 = *((uint *)GEN_TOP(((int)this_00 + 4)));
  (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(uVar2));
  if (uVar2 != uVar1) {
    if ((*((uint *)GEN_TOP((uVar2 + 0x14))) <= uVar4) &&
       ((uVar4 != *((uint *)GEN_TOP((uVar2 + 0x14))) || (*((uint *)GEN_TOP((uVar2 + 0x10))) <= (uint)uVar5)))) {
      puVar3 = (uint *)&(*(undefined * PTR32 *)&gen_args[0]);
      goto LAB_00c08f7f;
    }
  }
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 4)) = uVar1;
  (*(ulonglong *)(gen_frame + 0x0)) = CONCAT44(uVar1,(undefined4)(*(ulonglong *)(gen_frame + 0x0)));
  puVar3 = ((uint *)GEN_TOP(((int)&(*(ulonglong *)(gen_frame + 0x0)) + 4)));
LAB_00c08f7f: ;
  uVar2 = *puVar3;
  if (uVar2 != uVar1) {
    uVar1 = *((uint *)GEN_TOP((uVar2 + 0x18)));
    F_00c0e0e0(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]),uVar2);
    return uVar1;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::QueueSegment */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c08fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc08fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  piVar4 = (*(int * PTR32 *)&gen_args[0]);
  if (((*(int *)(this + 0x1bc) == 0) && (*(int *)(this + 0x1b0) < *(int *)(this + 0x1dc))) &&
     (*(int *)(this + 0xd8) <= *((int *)GEN_TOP((*(int *)(this + 0xc4) + 0xc))))) {
    *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + 1;
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD)));
    F_00c0ebd0(this + 0x1ac GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
    case 1: ;
    case 4: ;
    case 5: ;
      if (*(int *)(this + 0x120) == 0) {
        F_00c0cbc0(this + 0x108 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + 0xc4) + 0x24))),
                   *((undefined4 *)GEN_TOP((*(int *)(this + 0xc4) + 0x24))));
      }
    }
    F_00c08780(this GEN_EDX_ARG,piVar4);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
    return uVar3;
  }
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
  iVar1 = *(int *)(this + 0x1b8);
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar4 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
  piVar4[1] = iVar2;
  *piVar4 = iVar1;
  if ((uint *)(piVar4 + 2) != ((uint *)GEN_TOP(0x0))) {
    piVar4[2] = (int)(*(int * PTR32 *)&gen_args[0]);
  }
  if (*(int *)(this + 0x1bc) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *(int *)(this + 0x1bc) = *(int *)(this + 0x1bc) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar4;
  *((int * PTR32 *)GEN_TOP(piVar4[1])) = piVar4;
  return (uint)piVar4;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::DeliverInOrderSegments */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c090e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc090e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  ulonglong uVar7;
  
  piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 0x1c4)));
  piVar5 = ((int *)GEN_TOP(*piVar4));
  if (piVar5 != piVar4) {
    do {
      puVar1 = ((undefined4 *)GEN_TOP(piVar5[2]));
      piVar4 = ((int *)GEN_TOP((uint)*((byte *)GEN_TOP(((int)puVar1 + 6)))));
      if (piVar4 == ((int *)GEN_TOP(((*((int *)GEN_TOP((param_1 + 0xcc))) + 1) % 0xff)))) {
        *((int * PTR32 *)GEN_TOP((param_1 + 0xcc))) = piVar4;
        if (param_2 == '\0') {
          piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1)));
        }
        else {
          iVar2 = *((int *)GEN_TOP((param_1 + 0x1d0)));
          iVar3 = *((int *)GEN_TOP((iVar2 + 4)));
          piVar4 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
          piVar4[1] = iVar3;
          *piVar4 = iVar2;
          if (piVar4 + 2 != ((int *)GEN_TOP(0x0))) {
            piVar4[2] = (int)puVar1;
          }
          if (*((int *)GEN_TOP((param_1 + 0x1d4))) == -2) {
                    
            F_00c4579a(((char *)REFP(0x108b258)));
          }
          *((int *)GEN_TOP((param_1 + 0x1d4))) = *((int *)GEN_TOP((param_1 + 0x1d4))) + 1;
          *((int * PTR32 *)GEN_TOP((iVar2 + 4))) = piVar4;
          *((int * PTR32 *)GEN_TOP(piVar4[1])) = piVar4;
        }
        piVar6 = ((int *)GEN_TOP(*piVar5));
        if (piVar5 != *((int * PTR32 *)GEN_TOP((param_1 + 0x1c4)))) {
          *((int * PTR32 *)GEN_TOP(piVar5[1])) = piVar6;
          *((int *)GEN_TOP((*piVar5 + 4))) = piVar5[1];
          uVar7 = F_00429760(piVar5,0xc,0x25c);
          piVar4 = ((int *)GEN_TOP((uint)uVar7));
          *((int *)GEN_TOP((param_1 + 0x1c8))) = *((int *)GEN_TOP((param_1 + 0x1c8))) - 1;
        }
      }
      else {
        piVar6 = ((int *)GEN_TOP(*piVar5));
      }
      piVar5 = piVar6;
    } while (piVar6 != *((int * PTR32 *)GEN_TOP((param_1 + 0x1c4))));
  }
  return (uint)piVar4;
}

/* ref: FUN_00c091e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c091e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc091e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,0x25c)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = param_1;
  }
  F_00c0e8e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar1,0);
  return ((*(char *)(gen_frame + 0x4)) != '\0') - 1;
}

/* ref: FUN_00c09240 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c09240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc09240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,piVar1[2] - iVar2,0x25c);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  return;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::Close */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c092a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc092a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  
  if (this[0xc2] != (undefined1)0x0) {
    return 0xffffffff;
  }
  if (*(int *)(this + 0x1f8) == 0) {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x7c))) {
    case 0: ;
    case 1: ;
    case 6: ;
      F_00c08560(this GEN_EDX_FWD);
      if (*(int *)(this + 0x78) == 0) {
        F_00ba74d0(*(undefined * PTR32 *)(this + 0x74) GEN_EDX_ARG);
      }
    case 3: ;
      if (*(int *)(this + 0x7c) != 6) {
        *(undefined4 *)(this + 0x7c) = 6;
      }
      break;
    case 2: ;
    case 4: ;
      iVar4 = (*(int *)(this + 200) + 1) % 0xff;
      (*(undefined2 *)(gen_frame + 0x4)) = 0x610;
      (*(undefined1 *)(gen_frame + 0x7)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
      *(int *)(this + 200) = iVar4;
      (*(undefined1 *)(gen_frame + 0x6)) = (char)iVar4;
      F_00c08fb0(this GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      F_00c088c0(this GEN_EDX_ARG);
      this[0xc2] = (undefined1)0x1;
      return 0;
    case 5: ;
      if (*(int *)(this + 0x198) == 0) {
        F_00c08a10(this GEN_EDX_ARG);
        F_00c088c0(this GEN_EDX_ARG);
        this[0xc2] = (undefined1)0x1;
        return 0;
      }
    }
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1f8) + 4)));
    piVar5 = ((int *)GEN_TOP(*piVar2));
    if (piVar5 != piVar2) {
      do {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar5[6])) + 0x10))))(((int *)GEN_TOP(piVar5[6])) GEN_EDX_ARG);
        if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
          piVar2 = ((int *)GEN_TOP(piVar5[2]));
          if (*((char *)GEN_TOP(((int)piVar2 + 0x21))) == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
            piVar5 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
            while (cVar1 == '\0') {
              cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
              piVar5 = piVar2;
              piVar2 = ((int *)GEN_TOP(*piVar2));
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x21)));
            piVar3 = ((int *)GEN_TOP(piVar5[1]));
            piVar2 = piVar5;
            while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar5[2]))))) {
              cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x21)));
              piVar3 = ((int *)GEN_TOP(piVar5[1]));
              piVar2 = piVar5;
            }
          }
        }
      } while (piVar5 != *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1f8) + 4))));
      this[0xc2] = (undefined1)0x1;
      return 0;
    }
  }
  this[0xc2] = (undefined1)0x1;
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::OnConnectionEstablished */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c09410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc09410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  ulonglong uVar5;
  
  if (this[0xc3] == (undefined1)0x0) {
    this[0xc3] = (undefined1)0x1;
    if (*(undefined * PTR32 *)(this + 0x78) == ((undefined *)GEN_TOP(0x0))) {
      if (((this[0x80] != (undefined1)0x0) && (*(int *)(this + 0x70) != 0)) &&
         ((code *)*(gen_code32 *)(this + 8) != ((code *)GEN_TOP(0x0)))) {
        ((code *)*(gen_code32 *)(this + 8))(*(int *)(this + 0x70),0);
      }
    }
    else {
      F_00c08d70(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_ARG,this);
    }
  }
  else {
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *(int *)(this + 0xe0) = (int)_Var4;
    uVar5 = F_00427d90();
    *(ulonglong *)(this + 0xe8) = uVar5;
    uVar5 = F_00427e30();
    *(ulonglong *)(this + 0xf0) = uVar5;
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *(int *)(this + 0x158) = (int)_Var4;
    uVar5 = F_00427d90();
    *(ulonglong *)(this + 0x160) = uVar5;
    uVar5 = F_00427e30();
    *(ulonglong *)(this + 0x168) = uVar5;
  }
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0xc4) + 0x20)));
  *(undefined4 *)(this + 0xf8) = 1;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = uVar1;
  _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *(int *)(this + 0xe0) = (int)_Var4;
  uVar5 = F_00427d90();
  *(ulonglong *)(this + 0xe8) = uVar5;
  uVar5 = F_00427e30();
  uVar3 = (uint)uVar5;
  *(ulonglong *)(this + 0xf0) = uVar5;
  if (this[0x1a8] != (undefined1)0x0) {
    iVar2 = *((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x20)));
    *(undefined4 *)(this + 0x170) = 1;
    *(int *)(this + 0x174) = iVar2 * 6;
    *(int *)(this + 0x178) = iVar2 * 6;
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *(int *)(this + 0x158) = (int)_Var4;
    uVar5 = F_00427d90();
    *(ulonglong *)(this + 0x160) = uVar5;
    uVar5 = F_00427e30();
    uVar3 = (uint)uVar5;
    *(ulonglong *)(this + 0x168) = uVar5;
  }
  return uVar3;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::RemoveChildConnection */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c09570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc09570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  int * piVar3;
  ulonglong uVar4;
  
  piVar3 = ((int *)GEN_TOP(F_00c08f30(this GEN_EDX_FWD,param_1 + 0x82)));
  if (this[0x80] == (undefined1)0x0) {
    piVar1 = *(int * PTR32 *)(this + 500);
    piVar2 = ((int *)GEN_TOP(*piVar1));
    piVar3 = ((int *)GEN_TOP(*piVar2));
    if (piVar3 != piVar2) {
      while (piVar3[2] != param_1) {
        piVar3 = ((int *)GEN_TOP(*piVar3));
        if (piVar3 == piVar2) {
          return (uint)piVar3;
        }
      }
      if (piVar3 != piVar2) {
        *((int *)GEN_TOP(piVar3[1])) = *piVar3;
        *((int *)GEN_TOP((*piVar3 + 4))) = piVar3[1];
        uVar4 = F_00429760(piVar3,0xc,0x25c);
        piVar3 = ((int *)GEN_TOP((uint)uVar4));
        piVar1 = piVar1 + 1;
        *piVar1 = *piVar1 - 1;
      }
    }
  }
  return (uint)piVar3;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::CreateChildConnection */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c095e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc095e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined * this_00;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x200,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c08ae0(this_00 GEN_EDX_ARG,0,*(undefined4 *)(this + 0x74),this);
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00ba6e30(*(undefined4 *)(this + 0x70) GEN_EDX_ARG)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    pvVar2 = REFG(void * PTR32, 0x14c5958);
  }
  uVar3 = F_00ba7110(pvVar2 GEN_EDX_ARG);
  puVar4 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,0x25c)));
  *puVar4 = *((undefined4 *)GEN_TOP((uVar3 + 8)));
  puVar4[1] = *((undefined4 *)GEN_TOP((uVar3 + 8)));
  puVar4[2] = *((undefined4 *)GEN_TOP((uVar3 + 8)));
  *(undefined2 *)(puVar4 + 4) = 0;
  if (puVar4 + 3 != ((uint *)GEN_TOP(0x0))) {
    puVar4[3] = uVar1;
  }
  F_00c0e8e0(((undefined *)GEN_TOP((uVar3 + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar4,0);
  F_00ba6880(((undefined *)GEN_TOP((uVar1 + 0x82))) GEN_EDX_ARG,param_1);
  if (*((int *)GEN_TOP((uVar1 + 0x7c))) != 1) {
    *((undefined4 *)GEN_TOP((uVar1 + 0x7c))) = 1;
  }
  uVar5 = F_00ba6930(param_1 GEN_EDX_ARG);
  pvVar2 = *(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x1f8);
  puVar4 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x25c)));
  *puVar4 = *((undefined4 *)GEN_TOP(((int)pvVar2 + 4)));
  puVar4[1] = *((undefined4 *)GEN_TOP(((int)pvVar2 + 4)));
  puVar4[2] = *((undefined4 *)GEN_TOP(((int)pvVar2 + 4)));
  *(undefined2 *)(puVar4 + 8) = 0;
  if ((ulonglong *)(puVar4 + 4) != ((ulonglong *)GEN_TOP(0x0))) {
    *(ulonglong *)(puVar4 + 4) = uVar5;
    puVar4[6] = uVar1;
  }
  F_00c0e9c0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8)),puVar4,0);
  return *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x18)));
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::FindOrCreateChildConnection */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c09700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc09700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  (*(ulonglong *)(gen_frame + 0x0)) = F_00ba6930(param_1 GEN_EDX_FWD);
  uVar4 = (uint)((*(ulonglong *)(gen_frame + 0x0)) >> 0x20);
  this_00 = *(undefined * PTR32 *)(this + 0x1f8);
  uVar1 = F_00c0d000(this_00 GEN_EDX_ARG,&(*(ulonglong *)(gen_frame + 0x0)));
  uVar3 = *((uint *)GEN_TOP(((int)this_00 + 4)));
  (*(uint *)(gen_frame + 0x8)) = uVar1;
  if (uVar1 != uVar3) {
    if ((*((uint *)GEN_TOP((uVar1 + 0x14))) <= uVar4) &&
       ((uVar4 != *((uint *)GEN_TOP((uVar1 + 0x14))) || (*((uint *)GEN_TOP((uVar1 + 0x10))) <= (uint)(*(ulonglong *)(gen_frame + 0x0)))))) {
      puVar2 = &(*(uint *)(gen_frame + 0x8));
      goto LAB_00c09750;
    }
  }
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 4)) = uVar3;
  puVar2 = ((uint *)GEN_TOP(((int)&(*(ulonglong *)(gen_frame + 0x0)) + 4)));
LAB_00c09750: ;
  if (*puVar2 != uVar3) {
    return *((uint *)GEN_TOP((*puVar2 + 0x18)));
  }
  uVar3 = F_00c085e0(param_2,param_3);
  if (uVar3 != 1) {
    return 0;
  }
  uVar3 = F_00c095e0(this GEN_EDX_ARG,param_1);
  return uVar3;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::SendQueuedSegments */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c097a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc097a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_EAX = 0;
  int * piVar6;
  uint uVar7;
  __time64_t _Var8;
  ulonglong uVar9;
  
  iVar1 = *(int *)(this + 0x1bc);
  while( true ) {
    if (((iVar1 == 0) || (in_EAX = *(uint *)(this + 0x1b0), *(int *)(this + 0x1dc) <= (int)in_EAX))
       || (*((int *)GEN_TOP((*(int *)(this + 0xc4) + 0xc))) < *(int *)(this + 0xd8))) {
      return in_EAX;
    }
    piVar6 = *(int * PTR32 *)(this + 0x1b8);
    piVar2 = *((int * PTR32 *)GEN_TOP((*piVar6 + 8)));
    piVar3 = ((int *)GEN_TOP(*piVar6));
    if (piVar3 != piVar6) {
      *((int *)GEN_TOP(piVar3[1])) = *piVar3;
      *((int *)GEN_TOP((*piVar3 + 4))) = piVar3[1];
      F_00429760(piVar3,0xc,0x25c);
      *(int *)(this + 0x1bc) = *(int *)(this + 0x1bc) - 1;
    }
    *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + 1;
    iVar1 = *(int *)(this + 0x1ac);
    iVar4 = *((int *)GEN_TOP((iVar1 + 4)));
    piVar6 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
    piVar6[1] = iVar4;
    *piVar6 = iVar1;
    if (piVar6 + 2 != ((int *)GEN_TOP(0x0))) {
      piVar6[2] = (int)piVar2;
    }
    if (*(int *)(this + 0x1b0) == -2) break;
    *(int *)(this + 0x1b0) = *(int *)(this + 0x1b0) + 1;
    *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar6;
    *((int * PTR32 *)GEN_TOP(piVar6[1])) = piVar6;
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
    switch((unsigned int)(uintptr_t)(uVar7)) {
    case 0: ;
    case 1: ;
    case 4: ;
    case 5: ;
      if (*(int *)(this + 0x120) == 0) {
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0xc4) + 0x24)));
        *(undefined4 *)(this + 0x120) = 1;
        *(undefined4 *)(this + 0x124) = uVar5;
        *(undefined4 *)(this + 0x128) = uVar5;
        _Var8 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
        *(int *)(this + 0x108) = (int)_Var8;
        uVar9 = F_00427d90();
        *(ulonglong *)(this + 0x110) = uVar9;
        uVar9 = F_00427e30();
        *(ulonglong *)(this + 0x118) = uVar9;
      }
    }
    in_EAX = F_00c08780(this GEN_EDX_ARG,piVar2);
    iVar1 = *(int *)(this + 0x1bc);
  }
                    
  F_00c4579a("list<T> too long");
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::ProcessAck */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c09930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc09930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  uVar3 = param_1;
  if ((*((byte *)GEN_TOP((param_1 + 4))) & 0x40) != 0) {
    uVar3 = (uint)*((byte *)GEN_TOP((param_1 + 7)));
    *(undefined4 *)(this + 0xd8) = 0;
    if (*(int *)(this + 0x7c) == 2) {
      *(undefined4 *)(this + 0x7c) = 4;
      F_00c09410(this GEN_EDX_FWD);
    }
    piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1ac)));
    if (piVar4 != *(int * PTR32 *)(this + 0x1ac)) {
      do {
        puVar1 = ((undefined4 *)GEN_TOP(piVar4[2]));
        uVar2 = (uint)*((byte *)GEN_TOP(((int)puVar1 + 6)));
        if ((uVar2 == uVar3) ||
           (((uVar3 <= uVar2 || ((int)(uVar3 - uVar2) < 0x80)) &&
            ((uVar2 <= uVar3 || (0x7e < (int)(uVar2 - uVar3))))))) {
          piVar5 = ((int *)GEN_TOP(*piVar4));
          if (piVar4 != *(int * PTR32 *)(this + 0x1ac)) {
            *((int * PTR32 *)GEN_TOP(piVar4[1])) = piVar5;
            *((int *)GEN_TOP((*piVar4 + 4))) = piVar4[1];
            F_00429760(piVar4,0xc,0x25c);
            *(int *)(this + 0x1b0) = *(int *)(this + 0x1b0) - 1;
          }
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
        }
        else {
          piVar5 = ((int *)GEN_TOP(*piVar4));
        }
        piVar4 = piVar5;
      } while (piVar5 != *(int * PTR32 *)(this + 0x1ac));
    }
    uVar3 = F_00c097a0(this GEN_EDX_ARG);
    if (*(int *)(this + 0x1b0) == 0) {
      *(undefined4 *)(this + 0x120) = 0;
      return uVar3;
    }
    _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *(int *)(this + 0x108) = (int)_Var6;
    uVar7 = F_00427d90();
    *(ulonglong *)(this + 0x110) = uVar7;
    uVar7 = F_00427e30();
    uVar3 = (uint)uVar7;
    *(ulonglong *)(this + 0x118) = uVar7;
  }
  return uVar3;
}

/* ref: FUN_00c09a50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c09a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc09a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00c0eeb0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
             *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c09a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c09a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc09a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00c0ece0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[0]));
  if ((*(int *)(gen_frame + 0x4)) == *((int *)GEN_TOP(((int)this + 8)))) {
    return 0xffffffff;
  }
  F_00c0d6f0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  F_00c0eeb0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)));
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::FinishClose */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c09af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc09af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (*(undefined * PTR32 *)(this + 0x78) != ((undefined *)GEN_TOP(0x0))) {
    in_EAX = F_00c09570(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_FWD,this);
  }
  if ((this[0x80] == (undefined1)0x0) || (*(int *)(this + 0x70) == 0)) {
    if (*(int *)(this + 0x70) == 0) {
      in_EAX = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
    }
  }
  else {
    in_EAX = 0;
    if ((code *)*(gen_code32 *)(this + 0x20) != ((code *)GEN_TOP(0x0))) {
      in_EAX = ((code *)*(gen_code32 *)(this + 0x20))(*(int *)(this + 0x70));
      if (((char)in_EAX != '\0') &&
         (puVar1 = *(undefined4 * PTR32 *)(this + 0x70), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
        return uVar2;
      }
    }
  }
  return in_EAX;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::HandleAckSegment */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c09b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc09b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c09930(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::RetransmitSegment */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c09b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc09b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if ((0 < *((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x10)))) &&
     (param_1[2] = param_1[2] + 1, *((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x10))) < param_1[2])) {
    *(undefined4 *)(this + 0xf8) = 0;
    *(undefined4 *)(this + 0x170) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x148) = 0;
    *(undefined4 *)(this + 0x198) = 0;
    if (*(int *)(this + 0x78) == 0) {
      F_00ba74d0(*(undefined * PTR32 *)(this + 0x74) GEN_EDX_FWD);
    }
    if (*(int *)(this + 0x7c) != 6) {
      *(undefined4 *)(this + 0x7c) = 6;
    }
    uVar1 = F_00c09af0(this GEN_EDX_ARG);
    return uVar1;
  }
  F_00c08780(this GEN_EDX_ARG,param_1);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c09bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c09bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc09bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x14,0,0x25c);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x11))) = 1;
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::Receive */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c09c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc09c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * this_00;
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_c;
  
  this_00 = this + 0x1e4;
  iVar4 = *(int *)this_00;
  local_c = 0;
  if (iVar4 != *(int *)(this + 0x1e8)) {
    local_c = *(int *)(this + 0x1e8) - iVar4;
    iVar3 = local_c - param_2;
    if (iVar3 < 1) {
      F_00c46aa0(param_1,iVar4,local_c);
      iVar4 = *(int *)this_00;
      if (iVar4 != *(int *)(this + 0x1e8)) {
        F_00c46e20(iVar4,*(int *)(this + 0x1e8),0);
        *(int *)(this + 0x1e8) = iVar4;
      }
    }
    else {
      F_00c46aa0(param_1,iVar4,param_2);
      F_00c46e20(*(int *)this_00,*(int *)this_00 + param_2,iVar3);
      F_00bb6510(this_00 GEN_EDX_ARG,iVar3);
      local_c = param_2;
    }
  }
  bVar1 = false;
  do {
    if ((int)param_2 <= (int)local_c) {
      return local_c;
    }
    uVar2 = F_00c08990(this GEN_EDX_ARG);
    if ((int)uVar2 < 0) {
      if (bVar1) {
        return local_c;
      }
    }
    else {
      bVar1 = true;
      if (uVar2 == 0) {
        if (local_c == 0) {
          F_00c08e20(this GEN_EDX_ARG,0,0);
        }
        return local_c;
      }
      F_00bb6510(this_00 GEN_EDX_ARG,uVar2);
      iVar3 = param_2 - local_c;
      uVar2 = F_00c08e20(this GEN_EDX_ARG,*(int *)this_00,uVar2);
      iVar4 = uVar2 - iVar3;
      if (iVar4 < 1) {
        F_00c46aa0(local_c + param_1,*(int *)this_00,uVar2);
        iVar4 = *(int *)this_00;
        if (iVar4 != *(int *)(this + 0x1e8)) {
          F_00c46e20(iVar4,*(int *)(this + 0x1e8),0);
          *(int *)(this + 0x1e8) = iVar4;
        }
        local_c = local_c + uVar2;
      }
      else {
        F_00c46aa0(local_c + param_1,*(int *)this_00,iVar3);
        F_00c46e20(*(int *)this_00,*(int *)this_00 + iVar3,iVar4);
        F_00bb6510(this_00 GEN_EDX_ARG,iVar4);
        local_c = local_c + iVar3;
      }
    }
    F_00bada50();
  } while( true );
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::HandleEakSegment */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c09dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc09dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  bool bVar7;
  int local_18;
  uint local_14;
  int local_c;
  
  piVar5 = *((int * PTR32 *)GEN_TOP((param_1 + 0x14)));
  if (piVar5 == ((int *)GEN_TOP(0x0))) {
    local_18 = *((int *)GEN_TOP((param_1 + 0xc)));
    local_c = *((int *)GEN_TOP((param_1 + 0x10)));
  }
  else {
    local_18 = *piVar5;
    local_c = piVar5[1] - *piVar5;
  }
  if ((*((byte *)GEN_TOP((param_1 + 4))) & 0x40) == 0) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = (uint)*((byte *)GEN_TOP((param_1 + 7)));
  }
  uVar4 = (uint)*((byte *)GEN_TOP((local_c - 1 + local_18)));
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1ac)));
  if (piVar5 != *(int * PTR32 *)(this + 0x1ac)) {
    do {
      puVar1 = ((undefined4 *)GEN_TOP(piVar5[2]));
      uVar3 = (uint)*((byte *)GEN_TOP(((int)puVar1 + 6)));
      if ((uVar3 == local_14) ||
         ((((int)local_14 <= (int)uVar3 || ((int)(local_14 - uVar3) < 0x80)) &&
          (((int)uVar3 <= (int)local_14 || (0x7e < (int)(uVar3 - local_14))))))) {
        piVar2 = ((int *)GEN_TOP(*piVar5));
        if (piVar5 != *(int * PTR32 *)(this + 0x1ac)) {
          *((int * PTR32 *)GEN_TOP(piVar5[1])) = piVar2;
          *((int *)GEN_TOP((*piVar5 + 4))) = piVar5[1];
          F_00429760(piVar5,0xc,0x25c);
          *(int *)(this + 0x1b0) = *(int *)(this + 0x1b0) - 1;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
        piVar5 = piVar2;
      }
      else {
        iVar6 = 0;
        bVar7 = local_c == 0;
        if (0 < local_c) {
          do {
            if (uVar3 == *((byte *)GEN_TOP((iVar6 + local_18)))) {
              piVar2 = ((int *)GEN_TOP(*piVar5));
              if (piVar5 != *(int * PTR32 *)(this + 0x1ac)) {
                *((int * PTR32 *)GEN_TOP(piVar5[1])) = piVar2;
                *((int *)GEN_TOP((*piVar5 + 4))) = piVar5[1];
                F_00429760(piVar5,0xc,0x25c);
                *(int *)(this + 0x1b0) = *(int *)(this + 0x1b0) - 1;
              }
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
              piVar5 = piVar2;
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_c);
          bVar7 = iVar6 == local_c;
        }
        if (bVar7) {
          piVar5 = ((int *)GEN_TOP(*piVar5));
        }
      }
    } while (piVar5 != *(int * PTR32 *)(this + 0x1ac));
  }
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1ac)));
  if (piVar5 != *(int * PTR32 *)(this + 0x1ac)) {
    do {
      uVar3 = (uint)*((byte *)GEN_TOP((piVar5[2] + 6)));
      if ((((local_14 != uVar3) &&
           (((int)uVar3 <= (int)local_14 || ((int)(uVar3 - local_14) < 0x80)))) &&
          ((((int)local_14 <= (int)uVar3 || (0x7e < (int)(local_14 - uVar3))) && (uVar4 != uVar3))))
         && (((uVar4 < uVar3 && (0x7f < (int)(uVar3 - uVar4))) ||
             ((uVar3 < uVar4 && ((int)(uVar4 - uVar3) < 0x7f)))))) {
        F_00c09b60(this GEN_EDX_ARG,piVar5[2]);
      }
      piVar5 = ((int *)GEN_TOP(*piVar5));
    } while (piVar5 != ((int *)GEN_TOP(*(int *)(this + 0x1ac))));
  }
  F_00c097a0(this GEN_EDX_ARG);
  uVar4 = F_00c09930(this GEN_EDX_ARG,param_1);
  return uVar4;
}

/* ref: FUN_00c09fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c09fb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc09fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  int * this;
  
  this = ((int *)GEN_TOP(0x0));
  *(undefined2 *)(param_1 + 1) = 0x640;
  *((undefined1 *)GEN_TOP(((int)param_1 + 6))) = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 7))) = 0;
  param_1[2] = 0;
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
  param_1[3] = (param_6 != '\0') - 1 & param_4;
  param_1[4] = (param_6 != '\0') - 1 & param_5;
  if (param_6 != '\0') {
    this = ((int *)GEN_TOP(F_00406b90(0x10,0,0)));
    if (this == ((int *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      *this = 0;
      this[1] = 0;
      this[2] = 0;
      F_00bb6510(this GEN_EDX_ARG,param_5);
    }
  }
  param_1[5] = this;
  if (param_6 != '\0') {
    F_00c46aa0(*this,param_4,this[1] - *this);
  }
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x40;
  *((undefined1 *)GEN_TOP(((int)param_1 + 7))) = param_3;
  return (uint)param_1;
}

/* ref: FUN_00c0a050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0a050(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc0a050u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  uint uVar1;
  int * this;
  
  *((byte *)GEN_TOP(((int)param_1 + 5))) = param_5 + 6;
  this = ((int *)GEN_TOP(0x0));
  *(undefined1 *)(param_1 + 1) = 0x20;
  *((undefined1 *)GEN_TOP(((int)param_1 + 6))) = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 7))) = 0;
  param_1[2] = 0;
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
  param_1[3] = (param_6 != '\0') - 1 & param_4;
  if (param_6 == '\0') {
    uVar1 = (uint)param_5;
  }
  else {
    uVar1 = 0;
  }
  param_1[4] = uVar1;
  if (param_6 != '\0') {
    this = ((int *)GEN_TOP(F_00406b90(0x10,0,0)));
    if (this == ((int *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      *this = 0;
      this[1] = 0;
      this[2] = 0;
      F_00bb6510(this GEN_EDX_ARG,(uint)param_5);
    }
  }
  param_1[5] = this;
  if (param_6 != '\0') {
    F_00c46aa0(*this,param_4,this[1] - *this);
  }
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x40;
  *((undefined1 *)GEN_TOP(((int)param_1 + 7))) = param_3;
  return (uint)param_1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::Send */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0a100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0a100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((this[0xc2] == (undefined1)0x0) && (this[0xc3] != (undefined1)0x0)) {
    uVar4 = 0;
    (*(int *)(gen_frame + 0x1c)) = *((int *)GEN_TOP((*(int *)(this + 0xc4) + 8))) - 6;
    if (0 < param_2) {
      do {
        iVar5 = param_2 - uVar4;
        if ((*(int *)(gen_frame + 0x1c)) < iVar5) {
          iVar5 = (*(int *)(gen_frame + 0x1c));
        }
        (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + 0xcc);
        uVar2 = (*(undefined4 *)(gen_frame + 0x18));
        iVar3 = (*(int *)(this + 200) + 1) % 0xff;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x0));
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = (undefined1)*(undefined4 *)(this + 0xcc);
        (*(undefined1 *)(gen_frame + 0x7)) = (undefined1)(*(undefined4 *)(gen_frame + 0x18));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
        (*(int *)(gen_frame + 0xc)) = param_1 + uVar4;
        (*(int *)(gen_frame + 0x10)) = iVar5;
        (*(undefined2 *)(gen_frame + 0x4)) = 0x640;
        *(int *)(this + 200) = iVar3;
        (*(undefined1 *)(gen_frame + 0x6)) = (char)iVar3;
        (*(undefined4 *)(gen_frame + 0x18)) = uVar2;
        F_00c08fb0(this GEN_EDX_FWD,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
        piVar1 = (*(int * PTR32 *)(gen_frame + 0x14));
        uVar4 = uVar4 + iVar5;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
        if ((*(int * PTR32 *)(gen_frame + 0x14)) != ((int *)GEN_TOP(0x0))) {
          iVar5 = *(*(int * PTR32 *)(gen_frame + 0x14));
          if (iVar5 != 0) {
            F_00429760(iVar5,(*(int * PTR32 *)(gen_frame + 0x14))[2] - iVar5,0x25c);
          }
          *piVar1 = 0;
          piVar1[1] = 0;
          piVar1[2] = 0;
          F_00406ad0(piVar1);
        }
      } while ((int)uVar4 < param_2);
    }
    return uVar4;
  }
  return 0xffffffff;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::SendExtendedAck */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0a200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0a200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined1 * puVar4;
  ulonglong uVar5;
  
  uVar2 = 0;
  if (*(int *)(this + 0x1c8) != 0) {
    *(undefined4 *)(this + 0xd0) = 0;
    *(undefined4 *)(this + 0xd4) = 0;
    (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = ((undefined1 *)GEN_TOP(0x0));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    F_00bb6510(&(*(undefined1 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_FWD,*(undefined4 *)(this + 0x1c8));
    piVar3 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1c4)));
    puVar4 = (*(undefined1 * PTR32 *)(gen_frame + 0x18));
    if (piVar3 != *(int * PTR32 *)(this + 0x1c4)) {
      do {
        *puVar4 = *((undefined1 *)GEN_TOP((piVar3[2] + 6)));
        piVar3 = ((int *)GEN_TOP(*piVar3));
        puVar4 = puVar4 + 1;
      } while (piVar3 != ((int *)GEN_TOP(*(int *)(this + 0x1c4))));
    }
    iVar1 = *(int *)(this + 0xcc);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    (*(undefined1 *)(gen_frame + 0x4)) = 0x60;
    (*(undefined1 *)(gen_frame + 0x7)) = (char)iVar1;
    (*(char *)(gen_frame + 0x5)) = ((char)(*(undefined4 *)(gen_frame + 0x1c)) - (char)(*(undefined1 * PTR32 *)(gen_frame + 0x18))) + 6;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(uint *)(gen_frame + 0x10)) = (uint)(byte)((char)(*(undefined4 *)(gen_frame + 0x1c)) - (char)(*(undefined1 * PTR32 *)(gen_frame + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x0));
    (*(undefined1 *)(gen_frame + 0x6)) = (char)((iVar1 + 1) % 0xff);
    (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = (*(undefined1 * PTR32 *)(gen_frame + 0x18));
    F_00c08780(this GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    piVar3 = (*(int * PTR32 *)(gen_frame + 0x14));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    if ((*(int * PTR32 *)(gen_frame + 0x14)) != ((int *)GEN_TOP(0x0))) {
      iVar1 = *(*(int * PTR32 *)(gen_frame + 0x14));
      if (iVar1 != 0) {
        F_00429760(iVar1,(*(int * PTR32 *)(gen_frame + 0x14))[2] - iVar1,0x25c);
      }
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      F_00406ad0(piVar3);
    }
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
    uVar2 = 0;
    if ((*(undefined1 * PTR32 *)(gen_frame + 0x18)) != ((undefined1 *)GEN_TOP(0x0))) {
      uVar5 = F_00429760((*(undefined1 * PTR32 *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x20)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x18)),0x25c);
      uVar2 = (uint)uVar5;
    }
  }
  return uVar2;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::HandleDataSegment */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0a320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0a320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL(0x1c, 4);
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  uVar5 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6)));
  uVar4 = *(uint *)(this + 0xcc);
  if ((uVar5 == uVar4) ||
     ((((int)uVar4 <= (int)uVar5 || ((int)(uVar4 - uVar5) < 0x80)) &&
      (((int)uVar5 <= (int)uVar4 || (0x7e < (int)(uVar5 - uVar4))))))) goto LAB_00c0a4bd;
  if (uVar5 == (int)(uVar4 + 1) % 0xff) {
    if ((*(int *)(this + 0x1d4) == 0) ||
       (*(int *)(this + 0x1c8) + *(int *)(this + 0x1d4) < *(int *)(this + 0x1e0))) {
      *(uint *)(this + 0xcc) = uVar5;
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD)));
      F_00c0ebd0(this + 0x1d0 GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]));
      F_00c090e0(this GEN_EDX_ARG,1);
    }
    goto LAB_00c0a4bd;
  }
  if (*(int *)(this + 0x1e0) <= *(int *)(this + 0x1d4) + *(int *)(this + 0x1c8)) goto LAB_00c0a4bd;
  piVar3 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1c4)));
  (*(char *)(gen_frame + 0x17)) = '\0';
  if (piVar3 == *(int * PTR32 *)(this + 0x1c4)) {
LAB_00c0a44b: ;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    iVar1 = *(int *)(this + 0x1c4);
    uVar4 = *((uint *)GEN_TOP((iVar1 + 4)));
    (*(uint *)(gen_frame + 0xc)) = uVar5;
    (*(uint *)(gen_frame + 0x10)) = uVar4;
    piVar3 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
    *piVar3 = iVar1;
    piVar3[1] = (*(uint *)(gen_frame + 0x10));
    if ((uint *)(piVar3 + 2) != ((uint *)GEN_TOP(0x0))) {
      piVar3[2] = (*(uint *)(gen_frame + 0xc));
    }
    if (*(int *)(this + 0x1c8) == -2) {
                    
      F_00c4579a(((char *)REFP(0x108b258)));
    }
    *(int *)(this + 0x1c8) = *(int *)(this + 0x1c8) + 1;
    *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
    *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  }
  else {
    do {
      if ((*(char *)(gen_frame + 0x17)) != '\0') goto LAB_00c0a4b4;
      uVar5 = (uint)*((byte *)GEN_TOP((piVar3[2] + 6)));
      uVar4 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6)));
      if (uVar4 == uVar5) {
LAB_00c0a437: ;
        (*(char *)(gen_frame + 0x17)) = '\x01';
      }
      else if (((uVar5 <= uVar4) || ((int)(uVar5 - uVar4) < 0x80)) &&
              ((uVar4 <= uVar5 || (0x7e < (int)(uVar4 - uVar5))))) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x10)) = uVar4;
        F_00c0f010(this + 0x1c4 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)),piVar3,&(*(uint *)(gen_frame + 0x10)));
        goto LAB_00c0a437;
      }
      piVar3 = ((int *)GEN_TOP(*piVar3));
    } while (piVar3 != ((int *)GEN_TOP(*(int *)(this + 0x1c4))));
    if ((*(char *)(gen_frame + 0x17)) == '\0') goto LAB_00c0a44b;
  }
LAB_00c0a4b4: ;
  *(int *)(this + 0xd4) = *(int *)(this + 0xd4) + 1;
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
LAB_00c0a4bd: ;
  if ((0 < *(int *)(this + 0xd4)) &&
     ((*((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x18))) == 0 ||
      (*((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x18))) < *(int *)(this + 0xd4))))) {
    F_00c0a200(this GEN_EDX_ARG);
    uVar4 = F_00c09930(this GEN_EDX_ARG,piVar3);
    return uVar4;
  }
  iVar1 = *(int *)(this + 0xd0);
  if ((iVar1 < 1) ||
     ((*((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x14))) != 0 &&
      (iVar1 <= *((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x14))))))) {
    if (*(int *)(this + 0x148) == 0) {
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0xc4) + 0x28)));
      *(undefined4 *)(this + 0x148) = 1;
      *(undefined4 *)(this + 0x14c) = uVar2;
      *(undefined4 *)(this + 0x150) = 0;
      _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
      *(int *)(this + 0x130) = (int)_Var6;
      uVar7 = F_00427d90();
      *(ulonglong *)(this + 0x138) = uVar7;
      uVar7 = F_00427e30();
      *(ulonglong *)(this + 0x140) = uVar7;
    }
  }
  else {
    *(undefined4 *)(this + 0xd0) = 0;
    if (iVar1 != 0) {
      iVar1 = *(int *)(this + 0xcc);
      (*(undefined1 *)(gen_frame + 0x7)) = (char)iVar1;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
      (*(undefined2 *)(gen_frame + 0x4)) = 0x640;
      (*(undefined1 *)(gen_frame + 0x6)) = (char)((iVar1 + 1) % 0xff);
      F_00c08780(this GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      uVar4 = F_00c09930(this GEN_EDX_ARG,piVar3);
      return uVar4;
    }
  }
  uVar4 = F_00c09930(this GEN_EDX_ARG,piVar3);
  return uVar4;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::SendAck */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0a5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0a5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x1c8) != 0) {
    uVar2 = F_00c0a200(this GEN_EDX_FWD);
    return uVar2;
  }
  iVar1 = *(int *)(this + 0xd0);
  *(undefined4 *)(this + 0xd0) = 0;
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(this + 0xcc);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
    (*(undefined2 *)(gen_frame + 0x4)) = 0x640;
    (*(undefined1 *)(gen_frame + 0x7)) = (char)iVar1;
    (*(undefined1 *)(gen_frame + 0x6)) = (char)((iVar1 + 1) % 0xff);
    uVar2 = F_00c08780(this GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  return uVar2;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::Update */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0a640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0a640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 * puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  int * piVar8;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x7c))) {
  case 0: ;
  case 1: ;
  case 6: ;
    goto switchD_00c0a65d_caseD_0;
  case 3: ;
    if ((*(int *)(this + 0x198) != 0) && (bVar3 = F_00c0cc30(this + 0x180 GEN_EDX_FWD), bVar3 != 0)) {
      *(undefined4 *)(this + 0x198) = 0;
      F_00c08500(this GEN_EDX_ARG);
      if (*(int *)(this + 0x7c) != 6) {
        *(undefined4 *)(this + 0x7c) = 6;
      }
    }
    break;
  case 5: ;
    if ((*(int *)(this + 0x198) != 0) &&
       ((*(int *)(this + 0x1b0) == 0 || (bVar3 = F_00c0cc30(this + 0x180 GEN_EDX_ARG), bVar3 != 0)))) {
      F_00c08560(this GEN_EDX_ARG);
      if (*(int *)(this + 0x78) == 0) {
        F_00ba74d0(*(undefined * PTR32 *)(this + 0x74) GEN_EDX_ARG);
      }
      if (*(int *)(this + 0x7c) != 6) {
        *(undefined4 *)(this + 0x7c) = 6;
      }
      F_00c09af0(this GEN_EDX_ARG);
      return 0;
    }
  case 4: ;
    if ((this[0x80] != (undefined1)0x0) && (uVar5 = F_00c08990(this GEN_EDX_ARG), -1 < (int)uVar5)) {
      uVar4 = uVar5;
      if ((int)uVar5 < 1) {
        uVar4 = 1;
      }
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((undefined * PTR32 *)GEN_TOP(0x0));
      (*(uint *)(gen_frame + 0x8)) = 0;
      F_00bb6510(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
      uVar2 = (*(undefined4 *)(gen_frame + 0x0));
      uVar5 = F_00c08e20(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),uVar5);
      if (*(int *)(this + 0x70) != 0) {
        F_00badf20(this + 8 GEN_EDX_ARG,*(int *)(this + 0x70),uVar2,uVar5);
      }
      F_00bb4550(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  bVar3 = F_00c0cc30(this + 0xe0 GEN_EDX_ARG);
  if ((bVar3 != 0) && (*(int *)(this + 0x1b0) == 0)) {
    iVar7 = (*(int *)(this + 200) + 1) % 0xff;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0x608;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 3)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
    *(int *)(this + 200) = iVar7;
    uVar6 = (undefined1)iVar7;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 2)) = uVar6;
    (*(uint *)(gen_frame + 0x8)) = (uint)CONCAT12(uVar6,0x608);
    F_00c08fb0(this GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  }
  bVar3 = F_00c0cc30(this + 0x108 GEN_EDX_ARG);
  if ((bVar3 != 0) && (piVar8 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1ac))), piVar8 != *(int * PTR32 *)(this + 0x1ac)))
  {
    do {
      F_00c09b60(this GEN_EDX_ARG,piVar8[2]);
      piVar8 = ((int *)GEN_TOP(*piVar8));
    } while (piVar8 != ((int *)GEN_TOP(*(int *)(this + 0x1ac))));
  }
  bVar3 = F_00c0cc30(this + 0x130 GEN_EDX_ARG);
  if (bVar3 != 0) {
    F_00c0a5d0(this GEN_EDX_ARG);
  }
  bVar3 = F_00c0cc30(this + 0x158 GEN_EDX_ARG);
  if (bVar3 != 0) {
    *(undefined4 *)(this + 0xf8) = 0;
    *(undefined4 *)(this + 0x170) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x148) = 0;
    *(undefined4 *)(this + 0x198) = 0;
    if (*(int *)(this + 0x78) == 0) {
      F_00ba74d0(*(undefined * PTR32 *)(this + 0x74) GEN_EDX_ARG);
    }
    if (*(int *)(this + 0x7c) != 6) {
      *(undefined4 *)(this + 0x7c) = 6;
    }
    if (*(undefined * PTR32 *)(this + 0x78) != ((undefined *)GEN_TOP(0x0))) {
      F_00c09570(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_ARG,this);
    }
    if ((this[0x80] == (undefined1)0x0) || (*(int *)(this + 0x70) == 0)) {
      if (*(int *)(this + 0x70) == 0) {
        (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
      }
    }
    else if ((((code *)*(gen_code32 *)(this + 0x20) != ((code *)GEN_TOP(0x0))) &&
             (uVar5 = ((code *)*(gen_code32 *)(this + 0x20))(*(int *)(this + 0x70)), (char)uVar5 != '\0')) &&
            (puVar1 = *(undefined4 * PTR32 *)(this + 0x70), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      return 0;
    }
  }
switchD_00c0a65d_caseD_0: ;
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::HandleSynSegment */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0a8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0a8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL(0x40, 0);
  undefined1 * puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 * puVar15;
  uint uVar16;
  
  iVar14 = (*(int *)&gen_args[0]);
  iVar11 = *(int *)(this + 0x7c);
  if (iVar11 != 1) {
    if (iVar11 == 3) {
      *(uint *)(this + 0xcc) = (uint)*((byte *)GEN_TOP(((*(int *)&gen_args[0]) + 6)));
      if (*(int *)(this + 0x7c) != 4) {
        *(undefined4 *)(this + 0x7c) = 4;
      }
      F_00c0a5d0(this GEN_EDX_FWD);
      F_00c09410(this GEN_EDX_ARG);
      uVar16 = F_00c09930(this GEN_EDX_ARG,(*(int *)&gen_args[0]));
      return uVar16;
    }
    if (iVar11 != 6) goto LAB_00c0aa81;
  }
  *(uint *)(this + 0xcc) = (uint)*((byte *)GEN_TOP(((*(int *)&gen_args[0]) + 6)));
  if (*(int *)(this + 0x7c) != 2) {
    *(undefined4 *)(this + 0x7c) = 2;
  }
  if (*(int *)(this + 0xc4) != 0) {
    F_00406ad0(*(int *)(this + 0xc4));
  }
  puVar15 = ((undefined4 *)GEN_TOP(F_00406b90(0x2c,0,0)));
  if (puVar15 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar15 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    uVar7 = *((ushort *)GEN_TOP(((*(int *)&gen_args[0]) + 0x16)));
    (*(uint *)(gen_frame + 0x2c)) = (uint)uVar7;
    bVar2 = *((byte *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1b)));
    (*(byte *)(gen_frame + 0x38)) = bVar2;
    bVar3 = *((byte *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1a)));
    uVar8 = *((ushort *)GEN_TOP(((*(int *)&gen_args[0]) + 0x14)));
    uVar9 = *((ushort *)GEN_TOP(((*(int *)&gen_args[0]) + 0x12)));
    (*(byte *)(gen_frame + 0x39)) = bVar3;
    bVar4 = *((byte *)GEN_TOP(((*(int *)&gen_args[0]) + 0x19)));
    (*(byte *)(gen_frame + 0x3a)) = bVar4;
    bVar5 = *((byte *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18)));
    (*(byte *)(gen_frame + 0x3b)) = bVar5;
    bVar6 = *((byte *)GEN_TOP(((*(int *)&gen_args[0]) + 0xd)));
    uVar10 = *((ushort *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10)));
    (*(uint *)(gen_frame + 0x30)) = (uint)uVar10;
    uVar12 = *(undefined4 *)(this + 0x1e0);
    (*(undefined4 *)(gen_frame + 0x34)) = uVar12;
    *puVar15 = *(undefined4 *)(this + 0x1dc);
    puVar15[1] = uVar12;
    puVar15[2] = (uint)uVar10;
    puVar15[3] = (uint)bVar6;
    puVar15[4] = (uint)bVar5;
    puVar15[5] = (uint)bVar4;
    puVar15[6] = (uint)bVar3;
    puVar15[7] = (uint)bVar2;
    puVar15[8] = (uint)uVar7;
    puVar15[9] = (uint)uVar9;
    puVar15[10] = (uint)uVar8;
  }
  *(undefined4 * PTR32 *)(this + 0xc4) = puVar15;
  uVar12 = puVar15[7];
  (*(undefined4 *)(gen_frame + 0x1c)) = puVar15[6];
  (*(undefined4 *)(gen_frame + 0x20)) = puVar15[5];
  (*(undefined4 *)(gen_frame + 0x24)) = puVar15[4];
  (*(undefined4 *)(gen_frame + 0x28)) = puVar15[8];
  (*(undefined4 *)(gen_frame + 0x34)) = puVar15[10];
  uVar13 = puVar15[3];
  (*(uint *)(gen_frame + 0x30)) = puVar15[9];
  (*(uint *)(gen_frame + 0x2c)) = puVar15[2];
  uVar16 = F_00c4f2dd();
  (*(undefined2 *)(gen_frame + 0x12)) = (undefined2)(*(uint *)(gen_frame + 0x30));
  (*(undefined2 *)(gen_frame + 0x10)) = (undefined2)(*(uint *)(gen_frame + 0x2c));
  (*(undefined1 *)(gen_frame + 0x18)) = (undefined1)(*(undefined4 *)(gen_frame + 0x24));
  (*(undefined2 *)(gen_frame + 0x16)) = (undefined2)(*(undefined4 *)(gen_frame + 0x28));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
  (*(undefined1 *)(gen_frame + 0xc)) = 1;
  (*(undefined1 *)(gen_frame + 0xe)) = 1;
  (*(undefined1 *)(gen_frame + 0x1a)) = (undefined1)(*(undefined4 *)(gen_frame + 0x1c));
  (*(undefined1 *)(gen_frame + 0x1b)) = (char)uVar12;
  (*(undefined2 *)(gen_frame + 0x4)) = 0x16c0;
  *(int *)(this + 200) = (int)uVar16 % 0xff;
  puVar1 = ((undefined1 *)GEN_TOP(((*(int *)&gen_args[0]) + 6)));
  (*(undefined1 *)(gen_frame + 0x6)) = (char)((int)uVar16 % 0xff);
  (*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 0)) = (undefined1)uVar13;
  (*(undefined1 *)(gen_frame + 0xd)) = (undefined1)(*(int *)&gen_args[0]);
  (*(undefined2 *)(gen_frame + 0x14)) = (undefined2)(*(undefined4 *)(gen_frame + 0x34));
  (*(undefined1 *)(gen_frame + 0x19)) = (undefined1)(*(undefined4 *)(gen_frame + 0x20));
  (*(undefined1 *)(gen_frame + 0x7)) = *puVar1;
  F_00c08fb0(this GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
LAB_00c0aa81: ;
  uVar16 = F_00c09930(this GEN_EDX_ARG,iVar14);
  return uVar16;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::HandleRstSegment */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0aaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0aaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL(0x10, 0);
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  piVar4 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(int *)(this + 0x7c);
  if (((iVar1 != 3) && (iVar1 != 6)) && (iVar1 != 5)) {
    *(undefined4 *)(this + 0x7c) = 5;
  }
  uVar5 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6)));
  uVar3 = *(uint *)(this + 0xcc);
  if ((uVar5 == uVar3) ||
     ((((int)uVar3 <= (int)uVar5 || ((int)(uVar3 - uVar5) < 0x80)) &&
      (((int)uVar5 <= (int)uVar3 || (0x7e < (int)(uVar5 - uVar3))))))) goto LAB_00c0ac6b;
  if (uVar5 == (int)(uVar3 + 1) % 0xff) {
    if ((*(int *)(this + 0x1d4) == 0) ||
       (*(int *)(this + 0x1c8) + *(int *)(this + 0x1d4) < *(int *)(this + 0x1e0))) {
      *(uint *)(this + 0xcc) = uVar5;
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD)));
      F_00c0ebd0(this + 0x1d0 GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]));
      F_00c090e0(this GEN_EDX_ARG,1);
    }
    F_00c0a5d0(this GEN_EDX_ARG);
    uVar3 = F_00c09930(this GEN_EDX_ARG,piVar4);
    return uVar3;
  }
  if (*(int *)(this + 0x1e0) <= *(int *)(this + 0x1d4) + *(int *)(this + 0x1c8)) goto LAB_00c0ac6b;
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1c4)));
  (*(char *)(gen_frame + 0xb)) = '\0';
  if (piVar4 == *(int * PTR32 *)(this + 0x1c4)) {
LAB_00c0abf9: ;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    iVar1 = *(int *)(this + 0x1c4);
    uVar3 = *((uint *)GEN_TOP((iVar1 + 4)));
    (*(uint *)(gen_frame + 0x0)) = uVar5;
    (*(uint *)(gen_frame + 0x4)) = uVar3;
    piVar4 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
    *piVar4 = iVar1;
    piVar4[1] = (*(uint *)(gen_frame + 0x4));
    if ((uint *)(piVar4 + 2) != ((uint *)GEN_TOP(0x0))) {
      piVar4[2] = (*(uint *)(gen_frame + 0x0));
    }
    if (*(int *)(this + 0x1c8) == -2) {
                    
      F_00c4579a(((char *)REFP(0x108b258)));
    }
    *(int *)(this + 0x1c8) = *(int *)(this + 0x1c8) + 1;
    *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar4;
    *((int * PTR32 *)GEN_TOP(piVar4[1])) = piVar4;
  }
  else {
    do {
      if ((*(char *)(gen_frame + 0xb)) != '\0') goto LAB_00c0ac62;
      uVar5 = (uint)*((byte *)GEN_TOP((piVar4[2] + 6)));
      uVar3 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6)));
      if (uVar3 == uVar5) {
LAB_00c0abe5: ;
        (*(char *)(gen_frame + 0xb)) = '\x01';
      }
      else if (((uVar5 <= uVar3) || ((int)(uVar5 - uVar3) < 0x80)) &&
              ((uVar3 <= uVar5 || (0x7e < (int)(uVar3 - uVar5))))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x4)) = uVar3;
        F_00c0f010(this + 0x1c4 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),piVar4,&(*(uint *)(gen_frame + 0x4)));
        goto LAB_00c0abe5;
      }
      piVar4 = ((int *)GEN_TOP(*piVar4));
    } while (piVar4 != ((int *)GEN_TOP(*(int *)(this + 0x1c4))));
    if ((*(char *)(gen_frame + 0xb)) == '\0') goto LAB_00c0abf9;
  }
LAB_00c0ac62: ;
  *(int *)(this + 0xd4) = *(int *)(this + 0xd4) + 1;
LAB_00c0ac6b: ;
  piVar4 = (*(int * PTR32 *)&gen_args[0]);
  if ((0 < *(int *)(this + 0xd4)) &&
     ((*((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x18))) == 0 ||
      (*((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x18))) < *(int *)(this + 0xd4))))) {
    F_00c0a200(this GEN_EDX_ARG);
    uVar3 = F_00c09930(this GEN_EDX_ARG,piVar4);
    return uVar3;
  }
  if ((0 < *(int *)(this + 0xd0)) &&
     ((*((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x14))) == 0 ||
      (*((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x14))) < *(int *)(this + 0xd0))))) {
    F_00c08860(this GEN_EDX_ARG);
    uVar3 = F_00c09930(this GEN_EDX_ARG,piVar4);
    return uVar3;
  }
  if (*(int *)(this + 0x148) == 0) {
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0xc4) + 0x28)));
    *(undefined4 *)(this + 0x148) = 1;
    *(undefined4 *)(this + 0x14c) = uVar2;
    *(undefined4 *)(this + 0x150) = 0;
    _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *(int *)(this + 0x130) = (int)_Var6;
    uVar7 = F_00427d90();
    *(ulonglong *)(this + 0x138) = uVar7;
    uVar7 = F_00427e30();
    *(ulonglong *)(this + 0x140) = uVar7;
  }
  uVar3 = F_00c09930(this GEN_EDX_ARG,piVar4);
  return uVar3;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::HandleNulSegment */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0ad40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ad40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x10, 0);
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  uVar5 = (uint)*((byte *)GEN_TOP(((int)param_1 + 6)));
  uVar3 = *(uint *)(this + 0xcc);
  if ((uVar5 == uVar3) ||
     ((((int)uVar3 <= (int)uVar5 || ((int)(uVar3 - uVar5) < 0x80)) &&
      (((int)uVar5 <= (int)uVar3 || (0x7e < (int)(uVar5 - uVar3))))))) goto LAB_00c0aecb;
  iVar1 = *(int *)(this + 0x1d4);
  if (uVar5 == (int)(uVar3 + 1) % 0xff) {
    if ((iVar1 == 0) || (*(int *)(this + 0x1c8) + iVar1 < *(int *)(this + 0x1e0))) {
      *(uint *)(this + 0xcc) = uVar5;
      F_00c090e0(this GEN_EDX_FWD,0);
    }
    F_00c0a5d0(this GEN_EDX_ARG);
    uVar3 = F_00c09930(this GEN_EDX_ARG,param_1);
    return uVar3;
  }
  if (*(int *)(this + 0x1e0) <= iVar1 + *(int *)(this + 0x1c8)) goto LAB_00c0aecb;
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1c4)));
  (*(char *)(gen_frame + 0xb)) = '\0';
  if (piVar4 == *(int * PTR32 *)(this + 0x1c4)) {
LAB_00c0ae5b: ;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    iVar1 = *(int *)(this + 0x1c4);
    uVar3 = *((uint *)GEN_TOP((iVar1 + 4)));
    (*(uint *)(gen_frame + 0x0)) = uVar5;
    (*(uint *)(gen_frame + 0x4)) = uVar3;
    piVar4 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
    *piVar4 = iVar1;
    piVar4[1] = (*(uint *)(gen_frame + 0x4));
    if ((uint *)(piVar4 + 2) != ((uint *)GEN_TOP(0x0))) {
      piVar4[2] = (*(uint *)(gen_frame + 0x0));
    }
    if (*(int *)(this + 0x1c8) == -2) {
                    
      F_00c4579a(((char *)REFP(0x108b258)));
    }
    *(int *)(this + 0x1c8) = *(int *)(this + 0x1c8) + 1;
    *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar4;
    *((int * PTR32 *)GEN_TOP(piVar4[1])) = piVar4;
  }
  else {
    do {
      if ((*(char *)(gen_frame + 0xb)) != '\0') goto LAB_00c0aec4;
      uVar5 = (uint)*((byte *)GEN_TOP((piVar4[2] + 6)));
      uVar3 = (uint)*((byte *)GEN_TOP(((int)param_1 + 6)));
      if (uVar3 == uVar5) {
LAB_00c0ae47: ;
        (*(char *)(gen_frame + 0xb)) = '\x01';
      }
      else if (((uVar5 <= uVar3) || ((int)(uVar5 - uVar3) < 0x80)) &&
              ((uVar3 <= uVar5 || (0x7e < (int)(uVar3 - uVar5))))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x4)) = uVar3;
        F_00c0f010(this + 0x1c4 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),piVar4,&(*(uint *)(gen_frame + 0x4)));
        goto LAB_00c0ae47;
      }
      piVar4 = ((int *)GEN_TOP(*piVar4));
    } while (piVar4 != ((int *)GEN_TOP(*(int *)(this + 0x1c4))));
    if ((*(char *)(gen_frame + 0xb)) == '\0') goto LAB_00c0ae5b;
  }
LAB_00c0aec4: ;
  *(int *)(this + 0xd4) = *(int *)(this + 0xd4) + 1;
LAB_00c0aecb: ;
  if ((0 < *(int *)(this + 0xd4)) &&
     ((*((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x18))) == 0 ||
      (*((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x18))) < *(int *)(this + 0xd4))))) {
    F_00c0a200(this GEN_EDX_ARG);
    uVar3 = F_00c09930(this GEN_EDX_ARG,param_1);
    return uVar3;
  }
  if ((0 < *(int *)(this + 0xd0)) &&
     ((*((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x14))) == 0 ||
      (*((int *)GEN_TOP((*(int *)(this + 0xc4) + 0x14))) < *(int *)(this + 0xd0))))) {
    F_00c08860(this GEN_EDX_ARG);
    uVar3 = F_00c09930(this GEN_EDX_ARG,param_1);
    return uVar3;
  }
  if (*(int *)(this + 0x148) == 0) {
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0xc4) + 0x28)));
    *(undefined4 *)(this + 0x148) = 1;
    *(undefined4 *)(this + 0x14c) = uVar2;
    *(undefined4 *)(this + 0x150) = 0;
    _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *(int *)(this + 0x130) = (int)_Var6;
    uVar7 = F_00427d90();
    *(ulonglong *)(this + 0x138) = uVar7;
    uVar7 = F_00427e30();
    *(ulonglong *)(this + 0x140) = uVar7;
  }
  uVar3 = F_00c09930(this GEN_EDX_ARG,param_1);
  return uVar3;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::ReceivePacket */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00c0afb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0afb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x74, 12, 4);
  byte bVar1;
  uint uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  
  if (param_2 < 6) {
LAB_00c0afc6: ;
    uVar2 = 6;
  }
  else {
    bVar1 = *param_1;
    if ((char)bVar1 < '\0') {
      uVar2 = 1;
    }
    else if ((bVar1 & 8) == 0) {
      if ((bVar1 & 0x20) == 0) {
        if ((bVar1 & 0x10) == 0) {
          if ((bVar1 & 0x40) == 0) goto LAB_00c0afc6;
          uVar2 = (param_2 != 6) - 1 & 2;
          if (5 < uVar2) goto switchD_00c0b019_caseD_1;
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 5;
    }
                    
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xc0b130) + uVar2))))) {
    case 0: ;
      *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + 1;
    }
  }
switchD_00c0b019_caseD_1: ;
  if (this[0x1a8] != (undefined1)0x0) {
    _Var3 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *(int *)(this + 0x158) = (int)_Var3;
    uVar4 = F_00427d90();
    *(ulonglong *)(this + 0x160) = uVar4;
    uVar4 = F_00427e30();
    *(ulonglong *)(this + 0x168) = uVar4;
  }
  if (uVar2 < 6) {
                    
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
      uVar2 = F_00c08260(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,param_1,param_2);
      F_00c0a320(this GEN_EDX_ARG,uVar2);
      F_00c09240(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      return;
    case 1: ;
      uVar2 = F_00c086b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,param_2);
      F_00c0a8a0(this GEN_EDX_ARG,uVar2);
      return;
    case 2: ;
      uVar2 = F_00c08210(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,param_1,param_2);
      F_00c09930(this GEN_EDX_ARG,uVar2);
      return;
    case 3: ;
      uVar2 = F_00c082b0(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG,param_1,param_2);
      F_00c09dd0(this GEN_EDX_ARG,uVar2);
      F_00c08a80(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
      return;
    case 4: ;
      uVar2 = F_00c083b0(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,param_1,param_2);
      F_00c0aaa0(this GEN_EDX_ARG,uVar2);
      return;
    case 5: ;
      uVar2 = F_00c08330(((undefined1 *)(gen_frame + 0x4c)) GEN_EDX_ARG,param_1,param_2);
      F_00c0ad40(this GEN_EDX_ARG,uVar2);
    }
  }
  return;
}

/* ref: Global::OnSocketReceive */
GEN_OWN GEN_FRAME unsigned int F_00c0b1d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc0b1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x4c, 4, 4);
  uint uVar1;
  undefined * this;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48);
  ((byte *)(gen_frame + 0x0))[0x44] = (char)uVar1;
  ((byte *)(gen_frame + 0x0))[0x45] = (char)(uVar1 >> 8);
  ((byte *)(gen_frame + 0x0))[0x46] = (char)(uVar1 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x47] = (char)(uVar1 >> 0x18);
  this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x24)));
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  if (*(int *)(this + 0x1f8) != 0) {
    uVar2 = param_2;
    uVar3 = param_3;
    uVar1 = F_00ba7220(((byte *)(gen_frame + 0x0)) + 4 GEN_EDX_ARG,param_4,0);
    this = ((undefined *)GEN_TOP(F_00c09700(this GEN_EDX_ARG,uVar1,uVar2,uVar3)));
    F_00ba6730();
  }
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00c0afb0(this GEN_EDX_ARG,param_2,param_3);
  }
  return;
}

/* ref: Global::UpdateConnections */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0b250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0b250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  piVar4 = ((int *)GEN_TOP(*piVar3));
  if (piVar4 != piVar3) {
    do {
      piVar5 = piVar4;
      if (*((char *)GEN_TOP(((int)piVar4 + 0x11))) == '\0') {
        piVar5 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar5 + 0x11))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar5 + 0x11)));
          piVar3 = ((int *)GEN_TOP(*piVar5));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar3 + 0x11)));
            piVar5 = piVar3;
            piVar3 = ((int *)GEN_TOP(*piVar3));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x11)));
          piVar2 = ((int *)GEN_TOP(piVar4[1]));
          piVar3 = piVar4;
          while ((piVar5 = piVar2, cVar1 == '\0' && (piVar3 == ((int *)GEN_TOP(piVar5[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x11)));
            piVar2 = ((int *)GEN_TOP(piVar5[1]));
            piVar3 = piVar5;
          }
        }
      }
      piVar3 = ((int *)GEN_TOP(F_00c0a640(((undefined *)GEN_TOP(piVar4[3])) GEN_EDX_FWD)));
      piVar4 = piVar5;
    } while (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 8))));
  }
  return (uint)piVar3;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::~RUDPImpl */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0b2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0b2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 * puVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  undefined4 in_ecx;
  int * piVar7;
  ulonglong uVar8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x110e7b4));
  F_00c0a640(this GEN_EDX_FWD);
  if (*(int *)(this + 0x78) == 0) {
    in_ecx = *(undefined4 *)(this + 0x70);
  }
  else {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 0x78) + 0x70)));
  }
  pvVar3 = ((undefined *)GEN_TOP(F_00ba6e30(in_ecx GEN_EDX_ARG)));
  if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
    pvVar3 = REFG(void * PTR32, 0x14c5958);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar4 = F_00ba7110(pvVar3 GEN_EDX_ARG);
  F_00c0ece0(((undefined *)GEN_TOP((uVar4 + 4))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x4)) != *((int *)GEN_TOP((uVar4 + 8)))) {
    F_00c0d6f0(((undefined *)GEN_TOP((uVar4 + 4))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    F_00c0eeb0(((undefined *)GEN_TOP((uVar4 + 4))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)));
  }
  if (*(int *)(this + 0xc4) != 0) {
    F_00406ad0(*(int *)(this + 0xc4));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1ac)));
  if (piVar7 != *(int * PTR32 *)(this + 0x1ac)) {
    do {
      puVar1 = ((undefined4 *)GEN_TOP(piVar7[2]));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      }
      piVar7 = ((int *)GEN_TOP(*piVar7));
    } while (piVar7 != ((int *)GEN_TOP(*(int *)(this + 0x1ac))));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1b8)));
  if (piVar7 != *(int * PTR32 *)(this + 0x1b8)) {
    do {
      puVar1 = ((undefined4 *)GEN_TOP(piVar7[2]));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      }
      piVar7 = ((int *)GEN_TOP(*piVar7));
    } while (piVar7 != ((int *)GEN_TOP(*(int *)(this + 0x1b8))));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1c4)));
  if (piVar7 != *(int * PTR32 *)(this + 0x1c4)) {
    do {
      puVar1 = ((undefined4 *)GEN_TOP(piVar7[2]));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      }
      piVar7 = ((int *)GEN_TOP(*piVar7));
    } while (piVar7 != ((int *)GEN_TOP(*(int *)(this + 0x1c4))));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1d0)));
  if (piVar7 != *(int * PTR32 *)(this + 0x1d0)) {
    do {
      puVar1 = ((undefined4 *)GEN_TOP(piVar7[2]));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      }
      piVar7 = ((int *)GEN_TOP(*piVar7));
    } while (piVar7 != ((int *)GEN_TOP(*(int *)(this + 0x1d0))));
  }
  piVar7 = *(int * PTR32 *)(this + 500);
  if (piVar7 != ((int *)GEN_TOP(0x0))) {
    piVar6 = ((int *)GEN_TOP(*piVar7));
    piVar5 = ((int *)GEN_TOP(*piVar6));
    *piVar6 = (int)piVar6;
    *((int *)GEN_TOP((*piVar7 + 4))) = *piVar7;
    piVar7[1] = 0;
    if (piVar5 != ((int *)GEN_TOP(*piVar7))) {
      do {
        piVar6 = ((int *)GEN_TOP(*piVar5));
        F_00429760(piVar5,0xc,0x25c);
        piVar5 = piVar6;
      } while (piVar6 != ((int *)GEN_TOP(*piVar7)));
    }
    F_00429760(*piVar7,0xc,0x25c);
    F_00406ad0(piVar7);
  }
  pvVar3 = *(undefined * PTR32 *)(this + 0x1f8);
  if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
    F_00c0ef70(pvVar3 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4))))
    ;
    F_00429760(*((undefined4 *)GEN_TOP(((int)pvVar3 + 4))),0x28,0x25c);
    F_00406ad0(pvVar3);
  }
  if ((*(int *)(this + 0x78) == 0) &&
     (puVar1 = *(undefined4 * PTR32 *)(this + 0x74), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
  }
  iVar2 = *(int *)(this + 0x1e4);
  if (iVar2 != 0) {
    F_00429760(iVar2,*(int *)(this + 0x1ec) - iVar2,0x25c);
  }
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  piVar7 = *(int * PTR32 *)(this + 0x1d0);
  piVar6 = ((int *)GEN_TOP(*piVar7));
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)(this + 0x1d0) + 4))) = *(int *)(this + 0x1d0);
  *(undefined4 *)(this + 0x1d4) = 0;
  if (piVar6 != *(int * PTR32 *)(this + 0x1d0)) {
    do {
      piVar7 = ((int *)GEN_TOP(*piVar6));
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != ((int *)GEN_TOP(*(int *)(this + 0x1d0))));
  }
  F_00429760(*(undefined4 *)(this + 0x1d0),0xc,0x25c);
  piVar7 = *(int * PTR32 *)(this + 0x1c4);
  piVar6 = ((int *)GEN_TOP(*piVar7));
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)(this + 0x1c4) + 4))) = *(int *)(this + 0x1c4);
  *(undefined4 *)(this + 0x1c8) = 0;
  if (piVar6 != *(int * PTR32 *)(this + 0x1c4)) {
    do {
      piVar7 = ((int *)GEN_TOP(*piVar6));
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != ((int *)GEN_TOP(*(int *)(this + 0x1c4))));
  }
  F_00429760(*(undefined4 *)(this + 0x1c4),0xc,0x25c);
  piVar7 = *(int * PTR32 *)(this + 0x1b8);
  piVar6 = ((int *)GEN_TOP(*piVar7));
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)(this + 0x1b8) + 4))) = *(int *)(this + 0x1b8);
  *(undefined4 *)(this + 0x1bc) = 0;
  if (piVar6 != *(int * PTR32 *)(this + 0x1b8)) {
    do {
      piVar7 = ((int *)GEN_TOP(*piVar6));
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != ((int *)GEN_TOP(*(int *)(this + 0x1b8))));
  }
  F_00429760(*(undefined4 *)(this + 0x1b8),0xc,0x25c);
  piVar7 = *(int * PTR32 *)(this + 0x1ac);
  piVar6 = ((int *)GEN_TOP(*piVar7));
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)(this + 0x1ac) + 4))) = *(int *)(this + 0x1ac);
  *(undefined4 *)(this + 0x1b0) = 0;
  if (piVar6 != *(int * PTR32 *)(this + 0x1ac)) {
    do {
      piVar7 = ((int *)GEN_TOP(*piVar6));
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != ((int *)GEN_TOP(*(int *)(this + 0x1ac))));
  }
  uVar8 = F_00429760(*(undefined4 *)(this + 0x1ac),0xc,0x25c);
  F_00ba6730();
  return (uint)uVar8;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::AttachSocket */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0b630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0b630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  undefined * pRVar2;
  
  uVar1 = *(uint *)(this + 0x74);
  if (*((int *)GEN_TOP((uVar1 + 0x24))) == 0) {
    this_00 = ((undefined *)GEN_TOP(F_00ba6e30(*(undefined4 *)(this + 0x70) GEN_EDX_FWD)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      this_00 = REFG(void * PTR32, 0x14c5958);
    }
    pRVar2 = this;
    this_01 = ((undefined *)GEN_TOP(F_00ba7110(this_00 GEN_EDX_ARG)));
    F_00c091e0(this_01 GEN_EDX_ARG,pRVar2);
    gen_imp_InterlockedExchange(((LONG *)GEN_TOP((*(int *)(this + 0x74) + 0x24))),(LONG)this);
    F_00ba79d0(*(undefined4 *)(this + 0x74) GEN_EDX_ARG,((code *)REFP(0xc0b1d0)));
    F_00ba7aa0(*(undefined * PTR32 *)(this + 0x74) GEN_EDX_ARG,0,0xffffffff);
    uVar1 = F_00ba9ae0(*(undefined * PTR32 *)(this + 0x74) GEN_EDX_ARG,this_00);
  }
  return uVar1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0b6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0b6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c0b630(this GEN_EDX_FWD);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::Listen */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0b6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0b6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  F_00c0b630(this GEN_EDX_FWD);
  if (this[0x80] == (undefined1)0x0) {
    puVar1 = ((uint *)GEN_TOP(F_00406b90(0xc,0,0)));
    if (puVar1 == ((uint *)GEN_TOP(0x0))) {
      puVar1 = ((uint *)GEN_TOP(0x0));
    }
    else {
      puVar1[1] = 0;
      uVar2 = F_004296a0(0xc,0,0x25c);
      *puVar1 = uVar2;
      *((uint *)GEN_TOP(uVar2)) = uVar2;
      *((uint *)GEN_TOP((*puVar1 + 4))) = *puVar1;
    }
    *(uint * PTR32 *)(this + 500) = puVar1;
  }
  uVar2 = F_00406b90(0x10,0,0);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    *((undefined4 *)GEN_TOP((uVar2 + 8))) = 0;
    uVar3 = F_004296a0(0x28,0,0x25c);
    *((uint *)GEN_TOP((uVar2 + 4))) = uVar3;
    *((uint *)GEN_TOP(uVar3)) = uVar3;
    *((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 4))) = *((int *)GEN_TOP((uVar2 + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 8))) = *((int *)GEN_TOP((uVar2 + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x20))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x21))) = 1;
  }
  *(uint *)(this + 0x1f8) = uVar2;
  uVar2 = F_00ba7510(*(undefined * PTR32 *)(this + 0x74) GEN_EDX_ARG,param_1,param_2);
  return uVar2;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::Accept */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0b770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0b770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  F_00c0b630(this GEN_EDX_FWD);
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 500) + 4)));
  while (iVar1 == 0) {
    F_00bada50();
    iVar1 = *((int *)GEN_TOP((*(int *)(this + 500) + 4)));
  }
  piVar2 = *(int * PTR32 *)(this + 500);
  piVar3 = ((int *)GEN_TOP(*piVar2));
  iVar1 = *((int *)GEN_TOP((*piVar3 + 8)));
  piVar4 = ((int *)GEN_TOP(*piVar3));
  if (piVar4 != piVar3) {
    *((int *)GEN_TOP(piVar4[1])) = *piVar4;
    *((int *)GEN_TOP((*piVar4 + 4))) = piVar4[1];
    F_00429760(piVar4,0xc,0x25c);
    piVar2 = piVar2 + 1;
    *piVar2 = *piVar2 - 1;
  }
  *((undefined4 *)GEN_TOP((iVar1 + 0x70))) = param_2;
  F_00bb1770(param_1 GEN_EDX_ARG,iVar1);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::Connect */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0b7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0b7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  __time64_t _Var7;
  ulonglong uVar8;
  
  F_00c0b630(this GEN_EDX_FWD);
  if ((this[0xc2] != (undefined1)0x0) || (this[0xc3] != (undefined1)0x0)) {
    return 0xffffffff;
  }
  F_00ba6880(this + 0x82 GEN_EDX_ARG,param_1);
  if (*(int *)(this + 0x7c) != 3) {
    *(undefined4 *)(this + 0x7c) = 3;
  }
  iVar1 = *(int *)(this + 0xc4);
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0x14)));
  (*(undefined4 *)(gen_frame + 0x30)) = *((undefined4 *)GEN_TOP((iVar1 + 0x10)));
  uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 0x18)));
  uVar4 = *((undefined4 *)GEN_TOP((iVar1 + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x2c)) = *((undefined4 *)GEN_TOP((iVar1 + 0x20)));
  (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP((iVar1 + 0x28)));
  (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP((iVar1 + 0x24)));
  (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP((iVar1 + 8)));
  (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP((iVar1 + 0xc)));
  uVar6 = F_00c4f2dd();
  *(int *)(this + 200) = (int)uVar6 % 0xff;
  F_00c08640(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(char)((int)uVar6 % 0xff),(char)(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
               (char)(*(undefined4 *)(gen_frame + 0x30)),(char)uVar2,(char)uVar3,(char)uVar4);
  F_00c08fb0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  *(undefined4 *)(this + 0x198) = 1;
  *(int *)(this + 0x19c) = *(int *)(this + 0x2c) * 1000;
  *(undefined4 *)(this + 0x1a0) = 0;
  _Var7 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *(int *)(this + 0x180) = (int)_Var7;
  uVar8 = F_00427d90();
  *(ulonglong *)(this + 0x188) = uVar8;
  uVar8 = F_00427e30();
  *(ulonglong *)(this + 400) = uVar8;
  if (this[0x80] == (undefined1)0x0) {
    bVar5 = F_00c0cc30(this + 0x180 GEN_EDX_ARG);
    while ((bVar5 != 0 && (F_00bada50(), *(int *)(this + 0x7c) != 4))) {
      bVar5 = F_00c0cc30(this + 0x180 GEN_EDX_ARG);
    }
    *(undefined4 *)(this + 0x198) = 0;
    if (*(int *)(this + 0x7c) != 4) {
      F_00c08a10(this GEN_EDX_ARG);
      *(undefined4 *)(this + 0xd4) = 0;
      *(undefined4 *)(this + 0xd8) = 0;
      *(undefined4 *)(this + 0xd0) = 0;
      *(undefined4 *)(this + 0x120) = 0;
      if (*(int *)(this + 0x7c) == 3) {
        F_00c08500(this GEN_EDX_ARG);
      }
      else if (*(int *)(this + 0x7c) != 5) {
        return 0xffffffff;
      }
      if (*(int *)(this + 0x7c) != 6) {
        *(undefined4 *)(this + 0x7c) = 6;
      }
      return 0xffffffff;
    }
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::ACKSegment::vf2 */
GEN_OWN GEN_NOFRAME uint F_00c0b9b0(void)
{
  GEN_ENTER(0xc0b9b0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf2 */
GEN_OWN GEN_NOFRAME uint F_00c0b9c0(void)
{
  GEN_ENTER(0xc0b9c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::vf2 */
GEN_OWN GEN_NOFRAME uint F_00c0b9d0(void)
{
  GEN_ENTER(0xc0b9d0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Client::Network::Socket::RUDP2::NULSegment::vf2 */
GEN_OWN GEN_NOFRAME uint F_00c0b9e0(void)
{
  GEN_ENTER(0xc0b9e0u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Client::Network::Socket::RUDP2::RSTSegment::vf2 */
GEN_OWN GEN_NOFRAME uint F_00c0b9f0(void)
{
  GEN_ENTER(0xc0b9f0u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: FUN_00c0ba30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0ba30(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ba30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c0ba60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0ba60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ba60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00c0bb20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0bb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0bb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a1af40(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  return (uint)this;
}

/* ref: FUN_00c0bc00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0bc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9), GEN_P(undefined4 param_10, unsigned int gen_a10), GEN_P(undefined4 param_11, unsigned int gen_a11))
{
  GEN_ENTER(0xc0bc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a11;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_7;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_8;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_9;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_10;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_11;
  return (uint)this;
}

/* ref: FUN_00c0bda0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0bda0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0bda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf2 */
GEN_OWN GEN_NOFRAME uint F_00c0bdc0(void)
{
  GEN_ENTER(0xc0bdc0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::Write */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c0bdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0bdd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if ((int)uVar1 <= param_2) {
    *param_1 = this[4];
    param_1[1] = this[5];
    param_1[2] = this[6];
    param_1[3] = this[7];
    param_1[4] = (undefined1)((char)this[0xc] << 4);
    param_1[5] = this[0xd];
    param_1[6] = this[0xe];
    param_1[7] = (undefined1)0x0;
    param_1[8] = this[0x11];
    param_1[9] = this[0x10];
    param_1[10] = this[0x13];
    param_1[0xb] = this[0x12];
    param_1[0xc] = this[0x15];
    param_1[0xd] = this[0x14];
    param_1[0xe] = this[0x17];
    param_1[0xf] = this[0x16];
    param_1[0x10] = this[0x18];
    param_1[0x11] = this[0x19];
    param_1[0x12] = this[0x1a];
    param_1[0x13] = this[0x1b];
    return 1;
  }
  return 0;
}

/* ref: Global::IteratorEquals_00c0bed0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c0bed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0bed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: Global::IteratorNotEquals_00c0bef0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c0bef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0bef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0bf10 */
GEN_OWN GEN_FRAME uint F_00c0bf10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0bf10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0bf20 */
GEN_OWN GEN_FRAME uint F_00c0bf20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0bf20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00c0bf30 */
GEN_OWN GEN_FRAME uint F_00c0bf30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0bf30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: Global::DeallocateElements12 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0bf60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0bf60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0bf90 */
GEN_OWN GEN_FRAME uint F_00c0bf90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0bf90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::LessUInt_00c0bfc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0bfc0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0bfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  return (uint)(*param_1 < *param_2);
}

/* ref: Global::IteratorEquals2_00c0bfe0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c0bfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0bfe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00c0c010 */
GEN_OWN GEN_FRAME uint F_00c0c010(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c020 */
GEN_OWN GEN_FRAME uint F_00c0c020(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: Global::DeallocateElements12b */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0c030(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x25c);
  return (uint)uVar1;
}

/* ref: Global::TreeNodeColorRef_00c0c060 */
GEN_OWN GEN_FRAME uint F_00c0c060(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x20;
}

/* ref: Global::TreeNodeIsNilRef_00c0c070 */
GEN_OWN GEN_FRAME uint F_00c0c070(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x21;
}

/* ref: FUN_00c0c080 */
GEN_OWN GEN_FRAME uint F_00c0c080(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c090 */
GEN_OWN GEN_FRAME uint F_00c0c090(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00c0c0a0 */
GEN_OWN GEN_FRAME uint F_00c0c0a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00c0c0b0 */
GEN_OWN GEN_FRAME uint F_00c0c0b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: Global::TreeMaxNode_00c0c0c0 */
GEN_OWN GEN_FRAME uint F_00c0c0c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x21)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x21)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: Global::TreeMinNode_00c0c0e0 */
GEN_OWN GEN_FRAME uint F_00c0c0e0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x21)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x21)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: Global::DeallocateElements40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0c120(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x25c);
  return (uint)uVar1;
}

/* ref: Global::IteratorEquals3_00c0c150 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c0c150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: Global::ListIteratorPostIncrement_00c0c190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0c190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: Global::IteratorEquals4_00c0c1b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c0c1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: Global::AllocateElements12 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0c210(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00c0c240 */
GEN_OWN GEN_FRAME uint F_00c0c240(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c250 */
GEN_OWN GEN_FRAME uint F_00c0c250(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::DeallocateElements20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0c280(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0x25c);
  return (uint)uVar1;
}

/* ref: Global::IteratorFromNode_00c0c2b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0c2b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c2c0 */
GEN_OWN GEN_FRAME uint F_00c0c2c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: Global::AllocateElements12b */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0c2e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x25c);
  return uVar1;
}

/* ref: Global::TreeIteratorIncrement_00c0c340 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c0c340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0c340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x21))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x21))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x21)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x21)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x21)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x21)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: Global::IteratorFromNode2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0c390(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::SmallTreeNodeColorRef */
GEN_OWN GEN_FRAME uint F_00c0c3a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: Global::SmallTreeNodeIsNilRef_00c0c3b0 */
GEN_OWN GEN_FRAME uint F_00c0c3b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x11;
}

/* ref: FUN_00c0c3c0 */
GEN_OWN GEN_FRAME uint F_00c0c3c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00c0c3d0 */
GEN_OWN GEN_FRAME uint F_00c0c3d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: Global::SmallTreeMaxNode */
GEN_OWN GEN_FRAME uint F_00c0c3e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x11)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x11)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: Global::SmallTreeMinNode_00c0c400 */
GEN_OWN GEN_FRAME uint F_00c0c400(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x11)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: Global::AllocateElements20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0c420(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0x25c);
  return uVar1;
}

/* ref: Global::AllocateElements40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0c450(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00c0c480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0c480(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0c490(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c4e0 */
GEN_OWN GEN_FRAME uint F_00c0c4e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c4f0 */
GEN_OWN GEN_FRAME uint F_00c0c4f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c4f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c500 */
GEN_OWN GEN_FRAME uint F_00c0c500(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c510 */
GEN_OWN GEN_FRAME uint F_00c0c510(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c530 */
GEN_OWN GEN_FRAME uint F_00c0c530(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::ConstructPointerValue */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0c570(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: Global::ConstructPointerValue2 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0c5a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: Global::TreeIteratorDecrement_00c0c600 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0c600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0c600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x11))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x11))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x11))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x11))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x11)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x11)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x11))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: Global::TreeIteratorDecrementLarge_00c0c670 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0c670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0c670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x21))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x21))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x21))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x21)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x21)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x21))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00c0c6d0 */
GEN_OWN GEN_FRAME uint F_00c0c6d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c6e0 */
GEN_OWN GEN_FRAME uint F_00c0c6e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c6f0 */
GEN_OWN GEN_FRAME uint F_00c0c6f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c6f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c700 */
GEN_OWN GEN_FRAME uint F_00c0c700(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c710 */
GEN_OWN GEN_FRAME uint F_00c0c710(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairConstruct_00c0c720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0c720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c740 */
GEN_OWN GEN_FRAME uint F_00c0c740(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c750 */
GEN_OWN GEN_FRAME uint F_00c0c750(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c760 */
GEN_OWN GEN_FRAME uint F_00c0c760(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairConstruct8And4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0c7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_2;
  return (uint)this;
}

/* ref: Global::AllocatorConstruct_00c0c800 */
GEN_OWN GEN_FRAME uint F_00c0c800(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::AllocatorConstruct2_00c0c820 */
GEN_OWN GEN_FRAME uint F_00c0c820(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::IteratorBoolPairConstruct_00c0c840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0c840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c860 */
GEN_OWN GEN_FRAME uint F_00c0c860(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::IteratorBoolPairConstruct2_00c0c870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0c870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0c890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00c0c8b0 */
GEN_OWN GEN_FRAME uint F_00c0c8b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairConstruct8And4_2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0c8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c8c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_2;
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::ACKSegment::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0c8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0c8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined1 AVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(0xc,0,0)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (((byte)this[4] & 0x40) == 0) {
      AVar2 = (undefined1)0xff;
    }
    else {
      AVar2 = this[7];
    }
    *((undefined *)GEN_TOP(((int)puVar1 + 6))) = this[6];
    puVar1[2] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
    *(undefined2 *)(puVar1 + 1) = 0x640;
    *((undefined *)GEN_TOP(((int)puVar1 + 7))) = AVar2;
    return (uint)puVar1;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::ACKSegment::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0c930(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::GetSize */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0c960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0c960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x14);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    return ((uint)(byte)this[5] + piVar1[1]) - *piVar1;
  }
  return (uint)(byte)this[5] + *(int *)(this + 0x10);
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::Serialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c0c980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (param_2 < (int)uVar2) {
    return 0;
  }
  *param_1 = this[4];
  param_1[1] = this[5];
  param_1[2] = this[6];
  param_1[3] = this[7];
  if (*(int *)(this + 0x14) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x14);
    F_00c46aa0(param_1 + 6,*piVar1,piVar1[1] - *piVar1);
    return 1;
  }
  F_00c46aa0(param_1 + 6,*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10));
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::Serialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c0ca30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0ca30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (param_2 < (int)uVar2) {
    return 0;
  }
  *param_1 = this[4];
  param_1[1] = this[5];
  param_1[2] = this[6];
  param_1[3] = this[7];
  if (*(int *)(this + 0x14) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x14);
    F_00c46aa0(param_1 + 4,*piVar1,piVar1[1] - *piVar1);
    return 1;
  }
  F_00c46aa0(param_1 + 4,*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10));
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::NULSegment::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0cae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 NVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(0xc,0,0)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    NVar1 = this[6];
    *(undefined2 *)(puVar2 + 1) = 0x608;
    *((undefined *)GEN_TOP(((int)puVar2 + 6))) = NVar1;
    *((undefined1 *)GEN_TOP(((int)puVar2 + 7))) = 0;
    puVar2[2] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
    return (uint)puVar2;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::NULSegment::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0cb20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0cb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Network::Socket::RUDP2::RSTSegment::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0cb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 RVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(0xc,0,0)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    RVar1 = this[6];
    *(undefined2 *)(puVar2 + 1) = 0x610;
    *((undefined *)GEN_TOP(((int)puVar2 + 6))) = RVar1;
    *((undefined1 *)GEN_TOP(((int)puVar2 + 7))) = 0;
    puVar2[2] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
    return (uint)puVar2;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RSTSegment::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0cb90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0cb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::Start_00c0cbc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0cbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0cbc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __time64_t _Var1;
  ulonglong uVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_2;
  _Var1 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *(int *)this = (int)_Var1;
  uVar2 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 8))) = uVar2;
  uVar2 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)this + 0x10))) = uVar2;
  return (uint)uVar2;
}

/* ref: Global::Poll */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00c0cc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cc30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  __time64_t _Var2;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) == 1) {
    uVar1 = F_00427d90();
    if (((int)(uVar1 >> 0x20) - *((int *)GEN_TOP(((int)this + 0xc))) !=
         (uint)((uint)uVar1 < *((uint *)GEN_TOP(((int)this + 8))))) ||
       (*((uint *)GEN_TOP(((int)this + 0x1c))) <= (uint)uVar1 - *((uint *)GEN_TOP(((int)this + 8))))) {
      if (*((int *)GEN_TOP(((int)this + 0x20))) == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
        return 1;
      }
      _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
      *(int *)this = (int)_Var2;
      uVar1 = F_00427d90();
      *((ulonglong *)GEN_TOP(((int)this + 8))) = uVar1;
      uVar1 = F_00427e30();
      *((ulonglong *)GEN_TOP(((int)this + 0x10))) = uVar1;
      *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 2;
      return 1;
    }
  }
  else if (*((int *)GEN_TOP(((int)this + 0x18))) == 2) {
    uVar1 = F_00427d90();
    if (((int)(uVar1 >> 0x20) - *((int *)GEN_TOP(((int)this + 0xc))) !=
         (uint)((uint)uVar1 < *((uint *)GEN_TOP(((int)this + 8))))) ||
       (*((uint *)GEN_TOP(((int)this + 0x20))) <= (uint)uVar1 - *((uint *)GEN_TOP(((int)this + 8))))) {
      _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
      *(int *)this = (int)_Var2;
      uVar1 = F_00427d90();
      *((ulonglong *)GEN_TOP(((int)this + 8))) = uVar1;
      uVar1 = F_00427e30();
      *((ulonglong *)GEN_TOP(((int)this + 0x10))) = uVar1;
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::Clone */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0cce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 SVar1;
  undefined1 SVar2;
  undefined1 SVar3;
  undefined1 SVar4;
  undefined1 SVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 * puVar10;
  
  puVar10 = ((undefined4 *)GEN_TOP(F_00406b90(0x1c,0,0)));
  if (puVar10 != ((undefined4 *)GEN_TOP(0x0))) {
    SVar1 = this[0x1b];
    SVar2 = this[0x1a];
    SVar3 = this[0x19];
    SVar4 = this[0x18];
    uVar6 = *(undefined2 *)(this + 0x14);
    uVar7 = *(undefined2 *)(this + 0x12);
    uVar8 = *(undefined2 *)(this + 0x10);
    uVar9 = *(undefined2 *)(this + 0x16);
    SVar5 = this[0xd];
    *((undefined *)GEN_TOP(((int)puVar10 + 6))) = this[6];
    *((undefined1 *)GEN_TOP(((int)puVar10 + 7))) = 0;
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 1;
    *((undefined1 *)GEN_TOP(((int)puVar10 + 0xe))) = 1;
    *(undefined2 *)(puVar10 + 4) = uVar8;
    *((undefined2 *)GEN_TOP(((int)puVar10 + 0x12))) = uVar7;
    *(undefined2 *)(puVar10 + 5) = uVar6;
    *(undefined *)(puVar10 + 6) = SVar4;
    *((undefined2 *)GEN_TOP(((int)puVar10 + 0x16))) = uVar9;
    *((undefined *)GEN_TOP(((int)puVar10 + 0x19))) = SVar3;
    *((undefined *)GEN_TOP(((int)puVar10 + 0xd))) = SVar5;
    *(undefined2 *)(puVar10 + 1) = 0x1680;
    *puVar10 = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
    *((undefined *)GEN_TOP(((int)puVar10 + 0x1a))) = SVar2;
    *((undefined *)GEN_TOP(((int)puVar10 + 0x1b))) = SVar1;
    return (uint)puVar10;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0cda0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0cda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::IteratorNotEqual_00c0cdf0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c0cdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0cdf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::IteratorNotEqual_00c0ce10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c0ce10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ce10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::IteratorNotEqual_00c0ce40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c0ce40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ce40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::GetNodeValue_00c0ce80 */
GEN_OWN GEN_FRAME uint F_00c0ce80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0ce80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::IteratorFromNode_00c0ce90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0ce90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0ce90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::PostIncrement_00c0cea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0cea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0cea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: Global::TreeRotateLeft_00c0cef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0cef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0cef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x21))) == '\0') {
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

/* ref: Global::GetNodeValue_00c0cf50 */
GEN_OWN GEN_FRAME uint F_00c0cf50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0cf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00c0cf70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0cf70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cf70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c0c340(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c0cf90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0cf90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0cf90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeLowerBound_00c0d000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x21))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0');
  }
  return (uint)puVar2;
}

/* ref: Global::IteratorFromNode_00c0d050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d050(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::IteratorFromNode_00c0d060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d060(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeIteratorIncrement_00c0d070 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c0d070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x11))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x11))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x11)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x11)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x11)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x11)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: Global::TreeRotateLeft_00c0d0f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x11))) == '\0') {
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

/* ref: Global::PostIncrement_00c0d180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00c0c340(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: Global::ConstructElement_00c0d1d0 */
GEN_OWN GEN_FRAME uint F_00c0d1d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::Pair_00c0d200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::ConstructElement_00c0d220 */
GEN_OWN GEN_FRAME uint F_00c0d220(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c0d240 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0d240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c0c600(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c0d260 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0d260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c0c670(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::IteratorBoolPair_00c0d270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::IteratorBoolPair_00c0d290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::Pair_00c0d2b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_2;
  return (uint)this;
}

/* ref: Global::TreeBuyNode_00c0d2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,0x25c)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: Global::ListBuyNode_00c0d320 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0d320(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: Global::IteratorBoolPair_00c0d360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::IteratorBoolPair_00c0d380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::CopyConstruct_00c0d3a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: Global::CopyConstruct_00c0d3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: Global::Begin_00c0d3e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d3e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: Global::End_00c0d3f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d3f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: Global::Begin_00c0d440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::End_00c0d460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00c0d4a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0d4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c0c340(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::IteratorFromNode_00c0d570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d570(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::Tree28RotateLeft */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x21))) == '\0') {
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

/* ref: Global::InitIterator_00c0d650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d650(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::InitIterator_00c0d660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d660(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::UIntSetIteratorIncrement */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0d670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c0d070(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::ListIncreaseSize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: Global::ListAllocNode_00c0d6b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0d6b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: Global::UIntSetEqualRange */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x11))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x11))) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x11))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x11))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x11))) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x11))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: Global::UIntSetLowerBoundNode */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_00c0d780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x11))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x11))) == '\0');
  }
  return puVar2;
}

/* ref: Global::ListIncreaseSize_00c0d830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: Global::ListAllocNode_00c0d860 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0d860(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: Global::UIntSetEraseSubtree */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00c0d8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x11)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00c0d8e0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x14,0x25c);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
  }
  return;
}

/* ref: Global::UIntSetRotateLeft */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x11))) == '\0') {
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

/* ref: Global::Tree28EraseSubtree */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00c0d980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x21)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00c0d980(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x28,0x25c);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x21)));
  }
  return;
}

/* ref: FUN_00c0d9c0 */
GEN_OWN GEN_FRAME uint F_00c0d9c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = *param_3;
  return (uint)param_1;
}

/* ref: Global::ListInsertBefore */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0d9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d9e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: Global::UIntSetInsertNode */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0da50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc0da50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x14,0x25c);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x10)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x10))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x10))) == '\0') {
        *(undefined1 *)(piVar5 + 4) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x10))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x11))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x10))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x11))) == '\0') {
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
LAB_00c0dc4d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x10))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x11))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x10))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x11))) == '\0') {
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
        goto LAB_00c0dc4d;
      }
      *(undefined1 *)(piVar5 + 4) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x10))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x10)));
  } while( true );
}

/* ref: Global::Tree28InsertNode */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0dc80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc0dc80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x28,0x25c);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x20)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x20))) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x21))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x21))) == '\0') {
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
LAB_00c0de7d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x20))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x21))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x21))) == '\0') {
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
        goto LAB_00c0de7d;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x20)));
  } while( true );
}

/* ref: FUN_00c0deb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0deb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0deb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c0c670(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::InitIteratorBoolPair_00c0dec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0dec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0dec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::InitIteratorBoolPair_00c0dee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0dee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0dee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::UIntSetDistance */
GEN_OWN GEN_FRAME unsigned int F_00c0df00(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc0df00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = *param_3;
    piVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      *param_3 = iVar5;
      if (*((char *)GEN_TOP(((int)piVar4 + 0x11))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x11))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
            piVar4 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x11)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x11)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: Global::CopyConstruct12Bytes */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0df70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0df70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: Global::ListDestroy_00c0dfd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0dfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0dfd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00429760(piVar2,0xc,0x25c);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x25c);
  return (uint)uVar3;
}

/* ref: Global::ListBegin_00c0e020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e020(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: Global::ListEnd_00c0e030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e030(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: Global::ListBegin_00c0e080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e080(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: Global::ListEnd_00c0e090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e090(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: Global::TreeBegin_00c0e0b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e0b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::TreeEnd_00c0e0d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e0d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::Tree28Erase */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e0e0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00c0c340(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x21))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 8))) = (char)piVar3[8];
      *(char *)(piVar3 + 8) = (char)iVar1;
      goto LAB_00c0e1fa;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00c0c0e0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      uVar5 = F_00c0c0c0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00c0e1fa: ;
  if ((char)piVar3[8] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[8] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00c0d5d0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x20))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x20))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x20))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x20))) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_00c0cef0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x20))) = 1;
              F_00c0d5d0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00c0e2b8: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00c0cef0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x20))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x20))) == '\x01'))
            goto LAB_00c0e2b8;
            if (*((char *)GEN_TOP((*piVar6 + 0x20))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x20))) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_00c0d5d0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x20))) = 1;
            F_00c0cef0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  F_00429760(piVar3,0x28,0x25c);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::UIntSetIteratorPostIncrement */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0e340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00c0d070(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: Global::InitIterator_00c0e360 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0e360(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::ListInsertBefore_00c0e370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0e370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: Global::UIntSetLowerBound */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0e420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x11))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x11))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: Global::UIntSetEqualRangeWrapper */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0e460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c0d6f0(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: Global::InitIterator_00c0e480 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0e480(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::ListInsertBefore_00c0e490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0e490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00c0e580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0e580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c0d000(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: Global::UIntSetErase */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e5a0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x11))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00c0d070(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x11))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[4];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 4))) = (char)piVar3[4];
      *(char *)(piVar3 + 4) = (char)iVar1;
      goto LAB_00c0e6ba;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00c0c400(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
      uVar5 = F_00c0c3e0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00c0e6ba: ;
  if ((char)piVar3[4] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[4] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00c0d920(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x10))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x10))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x10))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x10))) = 1;
                *(undefined1 *)(piVar6 + 4) = 0;
                F_00c0d0f0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 4) = (char)piVar4[4];
              *(undefined1 *)(piVar4 + 4) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x10))) = 1;
              F_00c0d920(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00c0e778: ;
            *(undefined1 *)(piVar6 + 4) = 0;
          }
        }
        else {
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00c0d0f0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x10))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x10))) == '\x01'))
            goto LAB_00c0e778;
            if (*((char *)GEN_TOP((*piVar6 + 0x10))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x10))) = 1;
              *(undefined1 *)(piVar6 + 4) = 0;
              F_00c0d920(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 4) = (char)piVar4[4];
            *(undefined1 *)(piVar4 + 4) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x10))) = 1;
            F_00c0d0f0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 4) = 1;
  }
  F_00429760(piVar3,0x14,0x25c);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::UIntSetClear */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0e800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0e800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
  while (cVar1 == '\0') {
    F_00c0d8e0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x14,0x25c);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x11)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: Global::MapClear */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0e860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0e860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x21)));
  while (cVar1 == '\0') {
    F_00c0d980(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x28,0x25c);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x21)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00c0e8c0 */
GEN_OWN GEN_FRAME unsigned int F_00c0e8c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0e8c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00c0df00(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: Global::SetInsertNode */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0e8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x11))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x11))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00c0da50(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00c0c600(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00c0da50(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00429760((*(int *)&gen_args[1]),0x14,0x25c);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::MapInsertNode64 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0e9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0e9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  char cVar1;
  bool bVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  bool local_8;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x21)));
  local_8 = true;
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar2 = local_8;
  do {
    if (cVar1 != '\0') {
      (*(undefined4 * PTR32 *)&gen_args[2]) = puVar3;
      if (bVar2) {
        if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
          puVar5 = ((undefined4 *)GEN_TOP(F_00c0dc80(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar3,(*(int *)&gen_args[1]))));
          *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
          *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00c0c670(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      }
      puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
      if (((uint)(*(undefined4 * PTR32 *)&gen_args[2])[5] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14)))) &&
         (((uint)(*(undefined4 * PTR32 *)&gen_args[2])[5] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) ||
          ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[4] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))))))) {
        puVar5 = ((undefined4 *)GEN_TOP(F_00c0dc80(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),bVar2,puVar3,(*(int *)&gen_args[1]))));
        *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
        *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
      F_00429760((*(int *)&gen_args[1]),0x28,0x25c);
      *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
      if (((uint)puVar5[5] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14)))) ||
         (((uint)puVar5[5] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) &&
          ((uint)puVar5[4] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))))))) {
        local_8 = false;
        goto LAB_00c0ea33;
      }
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      local_8 = true;
    }
    else {
      if ((*((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) < (uint)puVar5[5]) ||
         ((*((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) <= (uint)puVar5[5] &&
          (*((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))) <= (uint)puVar5[4])))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      local_8 = !bVar2;
      if (local_8) {
        puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      }
      else {
LAB_00c0ea33: ;
        puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      }
    }
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x21)));
    puVar3 = puVar5;
    puVar5 = puVar4;
    bVar2 = local_8;
  } while( true );
}

/* ref: Global::ListInsert_00c0eae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0eae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc0eae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_2 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
  *piVar2 = param_2;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_3;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_2 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  *param_1 = *((undefined4 *)GEN_TOP((param_2 + 4)));
  return (uint)param_1;
}

/* ref: Global::ConstructValue12 */
GEN_OWN GEN_FRAME uint F_00c0eb60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0eb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
  }
  return (uint)param_2;
}

/* ref: Global::ListPushBack_00c0ebd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0ebd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ebd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = *param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: Global::ListPushBack_00c0ec30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0ec30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ec30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = *param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: Global::ListErase_00c0ec90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0ec90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0ec90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(param_2[1])) = *param_2;
    *((int *)GEN_TOP((*param_2 + 4))) = param_2[1];
    F_00429760(param_2,0xc,0x25c);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: Global::SetFind */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0ece0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0ece0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x11))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x11))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: Global::~List */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0ed50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0ed50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00429760(piVar2,0xc,0x25c);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x25c);
  return (uint)uVar3;
}

/* ref: Global::ListPushBack_00c0eda0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0eda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0eda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = *param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: Global::ListErase_00c0ee00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0ee00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0ee00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(param_2[1])) = *param_2;
    *((int *)GEN_TOP((*param_2 + 4))) = param_2[1];
    F_00429760(param_2,0xc,0x25c);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: Global::MapFind64 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0ee50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0ee50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c0d000(this GEN_EDX_FWD,param_2);
  if (uVar1 != *((uint *)GEN_TOP(((int)this + 4)))) {
    if ((*((uint *)GEN_TOP((uVar1 + 0x14))) <= param_2[1]) &&
       ((param_2[1] != *((uint *)GEN_TOP((uVar1 + 0x14))) || (*((uint *)GEN_TOP((uVar1 + 0x10))) <= *param_2)))) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *((uint *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: Global::SetEraseRange */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0eeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc0eeb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00c0e800(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x11))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x11))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x11)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x11)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00c0e5a0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: Global::SetClear */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0ef50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0ef50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00c0eeb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                        *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: Global::MapEraseRange */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0ef70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc0ef70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00c0e860(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x21))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x21))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x21)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x21)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00c0e0e0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: Global::ListInsert_00c0f010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc0f010u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_2 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25c)));
  *piVar2 = param_2;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_3;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((uint *)GEN_TOP((param_2 + 4))) = (uint)piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  *param_1 = *((uint *)GEN_TOP((param_2 + 4)));
  return (uint)param_1;
}

/* ref: Global::SetInsert */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0f080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,0x25c)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_2;
  }
  F_00c0e8e0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: Global::MapBuyNode */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x25c)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar3 + 8) = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  if (puVar3 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar3[4] = *param_1;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
  }
  return (uint)puVar3;
}

/* ref: Global::ScalarDeletingDestructor_00c0f130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f130(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    F_00429760(iVar1,param_1[2] - iVar1,0x25c);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::ListPopFront_00c0f1c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0f1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  ulonglong uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)this));
  if (piVar1 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(piVar1[1])) = *piVar1;
    *((int *)GEN_TOP((*piVar1 + 4))) = piVar1[1];
    uVar2 = F_00429760(piVar1,0xc,0x25c);
    piVar1 = ((int *)GEN_TOP((uint)uVar2));
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  return (uint)piVar1;
}

/* ref: Global::~Set */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00c0eeb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: Global::MapEraseKey */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00c0d6f0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]));
  (*(uint *)&gen_args[0]) = 0;
  F_00c0df00((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[0]),0);
  F_00c0eeb0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  return (*(uint *)&gen_args[0]);
}

/* ref: Global::ListPopFront_00c0f290 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0f290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  ulonglong uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)this));
  if (piVar1 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(piVar1[1])) = *piVar1;
    *((int *)GEN_TOP((*piVar1 + 4))) = piVar1[1];
    uVar2 = F_00429760(piVar1,0xc,0x25c);
    piVar1 = ((int *)GEN_TOP((uint)uVar2));
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  return (uint)piVar1;
}

/* ref: Global::MapClear_00c0f2c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00c0ef70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                        *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: Global::MapInsert64 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0f2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x25c)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar3 + 8) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (puVar3 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar3[4] = *param_2;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
  }
  F_00c0e9c0(this GEN_EDX_ARG,param_1,puVar3,0);
  return param_1;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f350(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  
  piVar1 = ((int *)GEN_TOP(param_1[5]));
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,piVar1[2] - iVar2,0x25c);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
  }
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::ScalarDeletingDestructor_00c0f3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f3c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00c0ed50(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::~Set_00c0f3f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f3f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00c0eeb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: Global::~Map */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00c0ef70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f4b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  
  piVar1 = ((int *)GEN_TOP(param_1[5]));
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,piVar1[2] - iVar2,0x25c);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
  }
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::~Map_00c0f520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00c0ef70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: Global::~Map_00c0f5a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00c0ef70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: Global::ByteVector */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  F_00bb6510(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Global::ScalarDeletingDestructor_00c0f640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f640(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = param_1;
  F_00c0ef70(param_1 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)param_1 + 4))),
                *((undefined4 * PTR32 *)GEN_TOP(((int)param_1 + 4))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)param_1 + 4))),0x28,0x25c);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::Clone */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 DVar1;
  undefined1 DVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  int * piVar7;
  int iVar8;
  
  if (*(int *)(this + 0x14) == 0) {
    puVar6 = ((undefined4 *)GEN_TOP(F_00406b90(0x18,0,0)));
    if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    if (((byte)this[4] & 0x40) == 0) {
      DVar1 = (undefined1)0xff;
    }
    else {
      DVar1 = this[7];
    }
    uVar5 = *(undefined4 *)(this + 0x10);
    iVar8 = *(int *)(this + 0xc);
    DVar2 = this[6];
    *(undefined2 *)(puVar6 + 1) = 0x640;
    *((undefined *)GEN_TOP(((int)puVar6 + 6))) = DVar2;
    *((undefined1 *)GEN_TOP(((int)puVar6 + 7))) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = ((int *)GEN_TOP(F_00406b90(0x10,0,0)));
    if (piVar7 == ((int *)GEN_TOP(0x0))) {
      piVar7 = ((int *)GEN_TOP(0x0));
    }
    else {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7 GEN_EDX_ARG,uVar5);
    }
  }
  else {
    puVar6 = ((undefined4 *)GEN_TOP(F_00406b90(0x18,0,0)));
    if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    piVar7 = *(int * PTR32 *)(this + 0x14);
    iVar3 = piVar7[1];
    iVar4 = *piVar7;
    iVar8 = *piVar7;
    if (((byte)this[4] & 0x40) == 0) {
      DVar1 = (undefined1)0xff;
    }
    else {
      DVar1 = this[7];
    }
    DVar2 = this[6];
    *(undefined2 *)(puVar6 + 1) = 0x640;
    *((undefined *)GEN_TOP(((int)puVar6 + 6))) = DVar2;
    *((undefined1 *)GEN_TOP(((int)puVar6 + 7))) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = ((int *)GEN_TOP(F_00406b90(0x10,0,0)));
    if (piVar7 == ((int *)GEN_TOP(0x0))) {
      piVar7 = ((int *)GEN_TOP(0x0));
    }
    else {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7 GEN_EDX_ARG,iVar3 - iVar4);
    }
  }
  puVar6[5] = piVar7;
  F_00c46aa0(*piVar7,iVar8,piVar7[1] - *piVar7);
  *((undefined *)GEN_TOP(((int)puVar6 + 7))) = DVar1;
  *(byte *)(puVar6 + 1) = *(byte *)(puVar6 + 1) | 0x40;
  return (uint)puVar6;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::Clone */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 EVar1;
  undefined1 EVar2;
  undefined1 EVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  int * piVar7;
  int local_14;
  
  if (*(int *)(this + 0x14) == 0) {
    puVar6 = ((undefined4 *)GEN_TOP(F_00406b90(0x18,0,0)));
    if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    if (((byte)this[4] & 0x40) == 0) {
      EVar1 = (undefined1)0xff;
    }
    else {
      EVar1 = this[7];
    }
    EVar2 = this[0x10];
    local_14 = *(int *)(this + 0xc);
    EVar3 = this[6];
    *(undefined1 *)(puVar6 + 1) = 0x20;
    *((byte *)GEN_TOP(((int)puVar6 + 5))) = (char)EVar2 + 6;
    *((undefined *)GEN_TOP(((int)puVar6 + 6))) = EVar3;
    *((undefined1 *)GEN_TOP(((int)puVar6 + 7))) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = ((int *)GEN_TOP(F_00406b90(0x10,0,0)));
    if (piVar7 != ((int *)GEN_TOP(0x0))) {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7 GEN_EDX_ARG,(uint)(byte)EVar2);
      goto LAB_00c0f913;
    }
  }
  else {
    puVar6 = ((undefined4 *)GEN_TOP(F_00406b90(0x18,0,0)));
    if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    piVar7 = *(int * PTR32 *)(this + 0x14);
    iVar4 = piVar7[1];
    iVar5 = *piVar7;
    local_14 = *piVar7;
    if (((byte)this[4] & 0x40) == 0) {
      EVar1 = (undefined1)0xff;
    }
    else {
      EVar1 = this[7];
    }
    EVar2 = this[6];
    *(undefined1 *)(puVar6 + 1) = 0x20;
    *((char *)GEN_TOP(((int)puVar6 + 5))) = (char)(iVar4 - iVar5) + '\x06';
    *((undefined *)GEN_TOP(((int)puVar6 + 6))) = EVar2;
    *((undefined1 *)GEN_TOP(((int)puVar6 + 7))) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = ((int *)GEN_TOP(F_00406b90(0x10,0,0)));
    if (piVar7 != ((int *)GEN_TOP(0x0))) {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7 GEN_EDX_ARG,iVar4 - iVar5 & 0xff);
      goto LAB_00c0f913;
    }
  }
  piVar7 = ((int *)GEN_TOP(0x0));
LAB_00c0f913: ;
  puVar6[5] = piVar7;
  F_00c46aa0(*piVar7,local_14,piVar7[1] - *piVar7);
  *((undefined *)GEN_TOP(((int)puVar6 + 7))) = EVar1;
  *(byte *)(puVar6 + 1) = *(byte *)(puVar6 + 1) | 0x40;
  return (uint)puVar6;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f950(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00c0b2c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Network::Socket::PollerWinsock::AddSocket */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0f990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0f990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined * pPVar3;
  
  if (param_2 != 1) {
    return 0;
  }
  uVar1 = *(uint *)(this + 0x148);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x14c;
    do {
      if (*(uint *)pPVar3 == param_1) break;
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
    } while (uVar2 < uVar1);
  }
  if ((uVar2 == uVar1) && (uVar1 < 0x40)) {
    *(uint *)(this + uVar2 * 4 + 0x14c) = param_1;
    *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
  }
  uVar1 = *(uint *)(this + 0x24c);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x250;
    do {
      if (*(uint *)pPVar3 == param_1) break;
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
    } while (uVar2 < uVar1);
  }
  if ((uVar2 == uVar1) && (uVar1 < 0x40)) {
    *(uint *)(this + uVar2 * 4 + 0x250) = param_1;
    *(int *)(this + 0x24c) = *(int *)(this + 0x24c) + 1;
  }
  if (*(uint *)(this + 0x350) < param_1) {
    *(uint *)(this + 0x350) = param_1;
  }
  return 0;
}

/* ref: Client::Network::Socket::PollerWinsock::UnwatchSocket */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0fa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0fa30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined * pPVar3;
  
  if (param_2 == 1) {
    uVar1 = *(uint *)(this + 0x148);
    if (uVar1 != 0) {
      pPVar3 = this + 0x14c;
      uVar2 = 0;
LAB_00c0fa52: ;
      if (*(int *)pPVar3 != param_1) goto code_r0x00c0fa56;
      if (uVar2 < uVar1 - 1) {
        pPVar3 = this + uVar2 * 4 + 0x14c;
        do {
          *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
          uVar2 = uVar2 + 1;
          pPVar3 = pPVar3 + 4;
        } while (uVar2 < *(int *)(this + 0x148) - 1U);
      }
      *(int *)(this + 0x148) = *(int *)(this + 0x148) - 1;
    }
LAB_00c0fa8a: ;
    uVar1 = *(uint *)(this + 0x24c);
    uVar2 = 0;
    if (uVar1 != 0) {
      pPVar3 = this + 0x250;
      while (*(int *)pPVar3 != param_1) {
        uVar2 = uVar2 + 1;
        pPVar3 = pPVar3 + 4;
        if (uVar1 <= uVar2) {
          return 0;
        }
      }
      if (uVar2 < uVar1 - 1) {
        pPVar3 = this + uVar2 * 4 + 0x250;
        do {
          *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
          uVar2 = uVar2 + 1;
          pPVar3 = pPVar3 + 4;
        } while (uVar2 < *(int *)(this + 0x24c) - 1U);
      }
      *(int *)(this + 0x24c) = *(int *)(this + 0x24c) - 1;
    }
  }
  return 0;
code_r0x00c0fa56: ;
  uVar2 = uVar2 + 1;
  pPVar3 = pPVar3 + 4;
  if (uVar1 <= uVar2) goto LAB_00c0fa8a;
  goto LAB_00c0fa52;
}

/* ref: Client::Network::Socket::PollerWinsock::CheckLastError */
GEN_OWN GEN_NOFRAME uint F_00c0faf0(void)
{
  GEN_ENTER(0xc0faf0u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = gen_imp_WSAGetLastError();
  return -(uint)(iVar1 != 0x2734);
}

/* ref: Client::Network::Socket::PollerWinsock::Poll */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00c0fb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0fb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x220, 0, 4);
  undefined * readfds;
  char cVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined * pPVar8;
  int * piVar9;
  undefined * pfVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  if (*(int *)(this + 0xc) == 0) {
    return 0;
  }
  piVar9 = *(int * PTR32 *)(this + 8);
  readfds = (undefined *)(this + 0x44);
  (*(uint *)((char *)(readfds))) = 0;
  piVar4 = ((int *)GEN_TOP(*piVar9));
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (piVar4 != piVar9) {
    do {
      iVar7 = piVar4[4];
      *((undefined2 *)GEN_TOP((iVar7 + 4))) = 0;
      *((undefined1 *)GEN_TOP((iVar7 + 6))) = 0;
      uVar2 = (*(uint *)((char *)(readfds)));
      uVar6 = 0;
      if (uVar2 != 0) {
        pPVar8 = this + 0x48;
        do {
          if (*(int *)pPVar8 == piVar4[3]) break;
          uVar6 = uVar6 + 1;
          pPVar8 = pPVar8 + 4;
        } while (uVar6 < uVar2);
      }
      if ((uVar6 == uVar2) && (uVar2 < 0x40)) {
        *(int *)(this + uVar6 * 4 + 0x48) = piVar4[3];
        (*(uint *)((char *)(readfds))) = (*(uint *)((char *)(readfds))) + 1;
      }
      if ((*(uint *)(gen_frame + 0x8)) < (uint)piVar4[3]) {
        (*(uint *)(gen_frame + 0x8)) = piVar4[3];
      }
      if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) == '\0') {
        piVar9 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar9 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar9 + 0x15)));
          piVar4 = piVar9;
          piVar9 = ((int *)GEN_TOP(*piVar9));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar9 + 0x15)));
            piVar4 = piVar9;
            piVar9 = ((int *)GEN_TOP(*piVar9));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x15)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar9 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar9 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x15)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar9 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)(this + 8));
  }
  pPVar8 = this + 0x148;
  pfVar10 = ((undefined *)(gen_frame + 0x10));
  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 - 1) {
    (*(uint *)((char *)(pfVar10))) = *(uint *)pPVar8;
    pPVar8 = pPVar8 + 4;
    pfVar10 = (undefined *)((SOCKET *)(((char *)(pfVar10) + 4)));
  }
  (*(gen_long *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = 0;
  (*(gen_long *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = 0;
  pPVar8 = this + 0x24c;
  pfVar10 = ((undefined *)(gen_frame + 0x114));
  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 - 1) {
    (*(uint *)((char *)(pfVar10))) = *(uint *)pPVar8;
    pPVar8 = pPVar8 + 4;
    pfVar10 = (undefined *)((SOCKET *)(((char *)(pfVar10) + 4)));
  }
  iVar7 = gen_imp_select((*(uint *)(gen_frame + 0x8)) + 1,readfds,((undefined *)(gen_frame + 0x10)),((undefined *)(gen_frame + 0x114)),&(*(undefined8 *)(gen_frame + 0x0)));
  if (iVar7 != 0) {
    if (-1 < iVar7) {
      piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 8)));
      if (piVar9 != *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 8)) {
        do {
          iVar7 = piVar9[4];
          iVar5 = gen_imp___WSAFDIsSet(piVar9[3],readfds);
          *((bool *)GEN_TOP((iVar7 + 4))) = iVar5 != 0;
          iVar5 = gen_imp___WSAFDIsSet(piVar9[3],((undefined *)(gen_frame + 0x10)));
          *((bool *)GEN_TOP((iVar7 + 5))) = iVar5 != 0;
          iVar5 = gen_imp___WSAFDIsSet(piVar9[3],((undefined *)(gen_frame + 0x114)));
          *((bool *)GEN_TOP((iVar7 + 6))) = iVar5 != 0;
          if (*((char *)GEN_TOP(((int)piVar9 + 0x15))) == '\0') {
            piVar4 = ((int *)GEN_TOP(piVar9[2]));
            if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) == '\0') {
              cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
              piVar9 = piVar4;
              piVar4 = ((int *)GEN_TOP(*piVar4));
              while (cVar1 == '\0') {
                cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
                piVar9 = piVar4;
                piVar4 = ((int *)GEN_TOP(*piVar4));
              }
            }
            else {
              cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
              piVar3 = ((int *)GEN_TOP(piVar9[1]));
              piVar4 = piVar9;
              while ((piVar9 = piVar3, cVar1 == '\0' && (piVar4 == ((int *)GEN_TOP(piVar9[2]))))) {
                cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
                piVar3 = ((int *)GEN_TOP(piVar9[1]));
                piVar4 = piVar9;
              }
            }
          }
        } while (piVar9 != *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 8));
      }
      return 1;
    }
    return 0xffffffff;
  }
  return 0;
}

/* ref: Client::Network::Socket::PollerWinsock::AddSocket_00c0fd50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0fd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0fd50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c11300((undefined *)this GEN_EDX_FWD,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  if (*(uint *)(this + 0x350) < param_1) {
    *(uint *)(this + 0x350) = param_1;
  }
  return uVar1;
}

/* ref: FUN_00c0fd80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0fd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0fd80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c116d0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x350))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x148))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e818));
  return (uint)this;
}

/* ref: FUN_00c0fdb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c0fdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0fdb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e818));
  uVar1 = F_00c11750(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Network::Socket::PollerWinsock::RemoveSocket */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c0fdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0fdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined * pPVar3;
  
  uVar1 = F_00c11830((undefined *)this GEN_EDX_FWD,param_1);
  if ((int)uVar1 < 0) {
    return 0xffffffff;
  }
  uVar1 = *(uint *)(this + 0x44);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x48;
LAB_00c0fdf0: ;
    if (*(int *)pPVar3 != param_1) goto code_r0x00c0fdf4;
    if (uVar2 < uVar1 - 1) {
      pPVar3 = this + uVar2 * 4 + 0x48;
      do {
        *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
        uVar2 = uVar2 + 1;
        pPVar3 = pPVar3 + 4;
      } while (uVar2 < *(int *)(this + 0x44) - 1U);
    }
    *(int *)(this + 0x44) = *(int *)(this + 0x44) - 1;
  }
LAB_00c0fe1b: ;
  uVar1 = *(uint *)(this + 0x148);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x14c;
    do {
      if (*(int *)pPVar3 == param_1) {
        if (uVar2 < uVar1 - 1) {
          pPVar3 = this + uVar2 * 4 + 0x14c;
          do {
            *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
            uVar2 = uVar2 + 1;
            pPVar3 = pPVar3 + 4;
          } while (uVar2 < *(int *)(this + 0x148) - 1U);
        }
        *(int *)(this + 0x148) = *(int *)(this + 0x148) - 1;
        break;
      }
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
    } while (uVar2 < uVar1);
  }
  uVar1 = *(uint *)(this + 0x24c);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x250;
    while (*(int *)pPVar3 != param_1) {
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
      if (uVar1 <= uVar2) {
        return 0;
      }
    }
    if (uVar2 < uVar1 - 1) {
      pPVar3 = this + uVar2 * 4 + 0x250;
      do {
        *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
        uVar2 = uVar2 + 1;
        pPVar3 = pPVar3 + 4;
      } while (uVar2 < *(int *)(this + 0x24c) - 1U);
    }
    *(int *)(this + 0x24c) = *(int *)(this + 0x24c) - 1;
  }
  return 0;
code_r0x00c0fdf4: ;
  uVar2 = uVar2 + 1;
  pPVar3 = pPVar3 + 4;
  if (uVar1 <= uVar2) goto LAB_00c0fe1b;
  goto LAB_00c0fdf0;
}

/* ref: FUN_00c0fed0 */
GEN_OWN GEN_FRAME uint F_00c0fed0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0fed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: Global::TreeMax_00c0fee0 */
GEN_OWN GEN_FRAME uint F_00c0fee0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0fee0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00c0ff20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0ff20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ff20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c0ffa0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0ffa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ffa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00c0ffd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c0ffd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ffd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c10010 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c10010(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc10010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c10060 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c10060(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc10060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00c100b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c100b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc100b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00c10100 */
GEN_OWN GEN_FRAME uint F_00c10100(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc10100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c10110 */
GEN_OWN GEN_FRAME uint F_00c10110(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc10110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::TreeIteratorDecrement_00c10180 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c10180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10180u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00c101e0 */
GEN_OWN GEN_FRAME uint F_00c101e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc101e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c101f0 */
GEN_OWN GEN_FRAME uint F_00c101f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc101f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c10200 */
GEN_OWN GEN_FRAME uint F_00c10200(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc10200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c10210 */
GEN_OWN GEN_FRAME byte F_00c10210(void)
{
  GEN_ENTER(0xc10210u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00c10240 */
GEN_OWN GEN_FRAME uint F_00c10240(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc10240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairConstruct_00c10280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c10280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c102a0 */
GEN_OWN GEN_FRAME uint F_00c102a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc102a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairIteratorBoolConstruct_00c102b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c102b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc102b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::PairCopyConstruct */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c102d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc102d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c102f0 */
GEN_OWN GEN_FRAME uint F_00c102f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc102f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairConstruct2_00c10300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c10300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c10320 */
GEN_OWN GEN_FRAME uint F_00c10320(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc10320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c10330 */
GEN_OWN GEN_FRAME uint F_00c10330(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc10330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::TreeRotateLeft_00c10370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c10370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc10370u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::TreeNodeKeyPtr */
GEN_OWN GEN_FRAME uint F_00c103d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc103d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::TreeLowerBound_00c10410 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_00c10410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc10410u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c10460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c10460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00bae660(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: Global::ConstructValue_00c104b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c104b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc104b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: Global::TreeIteratorPreDecrement */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c104e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc104e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c10180(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::PairIteratorBoolConstruct2_00c104f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c104f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc104f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::PairConstruct3_00c10510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c10510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::PairIteratorBoolConstruct3_00c10530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c10530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c10550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c10550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc10550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c10570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c10570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc10570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: Global::ConstructPtrAt */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c10590(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc10590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: Global::IncrementTreeIterator */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c105d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc105d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bae660(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::TreeRotateLeft_00c105e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c105e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc105e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::FreeContainerProxy */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c10660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: Global::TreeEraseSubtree_00c106e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00c106e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc106e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00c106e0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x18,0x25a);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00c10720 */
GEN_OWN GEN_FRAME uint F_00c10720(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc10720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: Global::ConstructPtrAt2 */
GEN_OWN GEN_FRAME uint F_00c10740(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc10740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::DecrementTreeIterator */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c10760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c10180(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::MakeIteratorBoolPair_00c10770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c10770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00c10790 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00c10790(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: Global::ConstructPtrAt3 */
GEN_OWN GEN_FRAME uint F_00c107b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc107b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::ConstructPtrAt4 */
GEN_OWN GEN_FRAME uint F_00c107d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc107d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::DequeTidy_00c10830 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c10830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 - 1;
      *((int *)GEN_TOP(((int)this + 0x10))) = iVar2;
      if (iVar2 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar2 != 0) {
    iVar2 = iVar2 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))),0x10,0x25a);
    }
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x25a);
    uVar3 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: Global::TreeClear_00c108f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c108f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc108f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00c106e0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x18,0x25a);
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

/* ref: Global::TreeInsertAt_00c10950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c10950(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc10950u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x18,0x25a);
                    
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
LAB_00c10b4d: ;
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
        goto LAB_00c10b4d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: Global::ConstructPairAt_00c10b80 */
GEN_OWN GEN_FRAME uint F_00c10b80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc10b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
  }
  return (uint)param_2;
}

/* ref: Global::UninitializedCopyPtrs_00c10ba0 */
GEN_OWN GEN_FRAME unsigned int F_00c10ba0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc10ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: Global::UninitializedFillNull */
GEN_OWN GEN_FRAME unsigned int F_00c10bd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc10bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: Global::TreeEraseAt_00c10c00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c10c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10c00u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00bae660(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_00c10d1a;
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
      piVar4 = ((int *)GEN_TOP(F_00bae620(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00c0fee0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00c10d1a: ;
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
            F_00c105e0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00c10370(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00c105e0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00c10dd8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00c10370(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00c10dd8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00c105e0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00c10370(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0x25a);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::DequeDestroy_00c10e60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c10e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00c10830(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: Global::TreeLowerBound_00c10e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c10e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10e90u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::TreeEraseRange_00c10f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c10f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc10f10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00c108f0(this GEN_EDX_FWD);
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
    F_00c10c00(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: Global::TreeInsertNode_00c10fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c10fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc10fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = ((undefined4 *)GEN_TOP(F_00c10950(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00c10180(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00c10950(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00429760((*(int *)&gen_args[1]),0x18,0x25a);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::TreeBuyNode_00c11090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c11090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc11090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,0x25a)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar2 + 5) = 0;
  uVar1 = param_1[1];
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2[3] = *param_1;
    puVar2[4] = uVar1;
  }
  return (uint)puVar2;
}

/* ref: Global::UninitializedCopyPtrs2_00c110e0 */
GEN_OWN GEN_FRAME unsigned int F_00c110e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc110e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: Global::UninitializedFillNull2 */
GEN_OWN GEN_FRAME unsigned int F_00c11110(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc11110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: Global::DequeDestroy2_00c11140 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c11140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc11140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00c10830(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: Global::TreeFind_00c11170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c11170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc11170u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::TreeEraseAll_00c11220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c11220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc11220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00c10f10(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))
  ;
  return uVar1;
}

/* ref: Global::TreeInsertValue_00c11240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c11240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc11240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,0x25a)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar2 + 5) = 0;
  uVar1 = param_2[1];
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2[3] = *param_2;
    puVar2[4] = uVar1;
  }
  F_00c10fb0(this GEN_EDX_ARG,param_1,puVar2,0);
  return param_1;
}

/* ref: FUN_00c112a0 */
GEN_OWN GEN_FRAME unsigned int F_00c112a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc112a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00c112d0 */
GEN_OWN GEN_FRAME unsigned int F_00c112d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc112d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: Client::Network::Socket::PollerBase::AddSocket */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c11300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc11300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*(int *)&gen_args[0]) == -1) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  piVar1 = ((int *)GEN_TOP(F_00c11170(this + 4 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)),&(*(int *)&gen_args[0]))));
  if (*piVar1 == *(int *)(this + 8)) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    if (uVar2 != 0) {
      (*(int *)(gen_frame + 0x8)) = (*(int *)&gen_args[0]);
      (*(uint *)(gen_frame + 0xc)) = uVar2;
      F_00c11240(this + 4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(int *)(gen_frame + 0x8)));
      *((undefined2 *)GEN_TOP((uVar2 + 4))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 6))) = 0;
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar2;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Global::DequeDestroy3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c113a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc113a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00c10830(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: Global::TreeDestroy_00c113d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c113d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc113d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00c10f10(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,0x25a);
  return (uint)uVar1;
}

/* ref: Global::DequeGrowMap_00c11450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c11450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc11450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0x3fffffff - uVar6 < param_1) {
                    
    F_00c4579a(((char *)REFP(0x1090ac0)));
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= 0x3fffffff - uVar7)) {
    param_1 = uVar7;
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0xc))) >> 2;
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((uVar6 + param_1) * 4,0,0x25a)));
  iVar5 = *((int *)GEN_TOP(((int)this + 8)));
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  puVar8 = puVar3 + uVar7;
  for (puVar4 = ((undefined4 *)GEN_TOP((iVar2 + uVar7 * 4))); puVar4 != ((undefined4 *)GEN_TOP((iVar2 + iVar5 * 4)));
      puVar4 = puVar4 + 1) {
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *((int *)GEN_TOP(((int)this + 4)));
    puVar8 = puVar3;
    for (puVar4 = ((undefined4 *)GEN_TOP((iVar5 + param_1 * 4))); uVar6 = param_1,
        puVar4 != ((undefined4 *)GEN_TOP((iVar5 + uVar7 * 4))); puVar4 = puVar4 + 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar9 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x25a);
    uVar6 = (uint)uVar9;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  return uVar6;
}

/* ref: Global::TreeDestroy2_00c115d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c115d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc115d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00c10f10(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,0x25a);
  return (uint)uVar1;
}

/* ref: Global::DequePushBack_00c11650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c11650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc11650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10))) & 3U) == 0) &&
     (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 4U >> 2)) {
    F_00c11450(this GEN_EDX_FWD,1);
  }
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  uVar4 = uVar3 >> 2;
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar4) {
    uVar4 = uVar4 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x25a);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 3) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return uVar4;
}

/* ref: FUN_00c116d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c116d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc116d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e7f0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar2 = F_004296a0(0x18,0,0x25a);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
  *((uint *)GEN_TOP(uVar2)) = uVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x15))) = 1;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x14)));
  *puVar1 = 0;
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x25a)));
  *puVar1 = puVar3;
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2c));
  return (uint)this;
}

/* ref: FUN_00c11750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c11750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc11750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e7f0));
  F_00bb57c0(this GEN_EDX_FWD);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2c));
  F_00c10830(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x14))),8,0x25a);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_00c10f10(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
             *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x18,0x25a);
  return (uint)uVar1;
}

/* ref: Client::Network::Socket::PollerBase::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c117c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc117c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00c11750(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Network::Socket::PollerWinsock::CreatePeerSocket */
GEN_OWN GEN_NOFRAME uint F_00c117f0(void)
{
  GEN_ENTER(0xc117f0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(8,0,0)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[1] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x110478c));
    return (uint)puVar1;
  }
  return 0;
}

/* ref: FUN_00c11820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c11820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc11820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c11650(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Network::Socket::PollerBase::RemoveSocket */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c11830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc11830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int * piVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2c);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x4)) = lpCriticalSection;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*(int *)&gen_args[0]) == -1) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0xffffffff;
  }
  piVar2 = ((int *)GEN_TOP(F_00c11170(this + 4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(int *)&gen_args[0]))));
  iVar1 = *piVar2;
  if (iVar1 == *(int *)(this + 8)) {
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
    return 0xffffffff;
  }
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x10))) + 7))) = 1;
  F_00c11650(this + 0x14 GEN_EDX_ARG,iVar1 + 0x10);
  F_00c10c00(this + 4 GEN_EDX_ARG,&(*(int *)&gen_args[0]),iVar1);
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
  return 0;
}

/* ref: Client::Network::Socket::PollerWinsock::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c118d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc118d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x110e818));
  F_00c11750(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::LuaMemTooBig */
GEN_OWN GEN_NOFRAME uint F_00c11910(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc11910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00c02740(param_1,((char *)REFP(0x1347d34)));
  return 0;
}

/* ref: Global::LuaMemRealloc */
GEN_OWN GEN_NOFRAME uint F_00c11930(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc11930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x10)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0xc))))(*((undefined4 *)GEN_TOP((iVar1 + 0x10))),param_2,param_3,param_4);
  if ((uVar2 == 0) && (param_4 != 0)) {
                    
    F_00bb93a0(param_1,4);
  }
  *((int *)GEN_TOP((iVar1 + 0x44))) = *((int *)GEN_TOP((iVar1 + 0x44))) + (param_4 - param_3);
  return uVar2;
}

