#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Application::Network::WorkDefinitions::ThinkState::vf18 */
byte F_00ed7990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed7990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pTVar6;
  ulonglong uVar7;
  float fVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar5 = *(int *)this;
  (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(param_1 + 1);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar5 + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x4)),0x5b);
    iVar5 = *(int *)this;
    (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 - 1);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar5 + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      this[4] = SUB81(uVar7,0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      *(int *)(this + 8) = (int)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      *(int *)(this + 0xc) = (int)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      *(int *)(this + 0x10) = (int)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697a8));
      pcVar4 = (char *)(uVar3 + 10);
      pTVar6 = this + 0x20;
      (*(int *)(gen_frame + 0x0)) = 3;
      do {
        fVar8 = F_00e50660(pcVar4);
        *(float *)pTVar6 = fVar8;
        uVar3 = F_00c51da0(pcVar4,0x2c);
        pTVar6 = pTVar6 + 4;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + -1;
        pcVar4 = (char *)(uVar3 + 2);
      } while ((*(int *)(gen_frame + 0x0)) != 0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar4;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      fVar8 = F_00e50660((char *)(uVar3 + 9));
      *(float *)(this + 0x30) = fVar8;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,6);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      cVar1 = *(char *)(uVar3 + 9);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
      this[0x34] = (undefined1)(cVar1 != '0');
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,7);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      this[0x35] = SUB81(uVar7,0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,8);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      *(int *)(this + 0x38) = (int)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,9);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x3c) + 0x48))))(this + 0x3c,uVar3 + 8,&(*(char * PTR32 *)(gen_frame + 0x4)));
      if ((char)uVar3 == '\0') {
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return 0;
      }
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,10);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697a8));
      pcVar4 = (char *)(uVar3 + 10);
      pTVar6 = this + 0x50;
      (*(int *)(gen_frame + 0x0)) = 3;
      do {
        fVar8 = F_00e50660(pcVar4);
        *(float *)pTVar6 = fVar8;
        uVar3 = F_00c51da0(pcVar4,0x2c);
        pTVar6 = pTVar6 + 4;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + -1;
        pcVar4 = (char *)(uVar3 + 2);
      } while ((*(int *)(gen_frame + 0x0)) != 0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar4;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xb);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      cVar1 = *(char *)(uVar3 + 9);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
      this[0x60] = (undefined1)(cVar1 != '0');
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xc);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    pcVar4 = (*(char * PTR32 *)(gen_frame + 0x4));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      pcVar4 = (char *)(uVar3 + 9);
      uVar7 = F_00e50570(pcVar4);
      this[0x61] = SUB81(uVar7,0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = (int)pcVar4;
    }
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf13 */
uint F_00ed7f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed7f30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ThinkState::vf25 */
byte F_00ed8050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed8050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x380];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined * pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x378)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x37c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_00c472af(((undefined1 *)(gen_frame + 0x358)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x358)));
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_00c472af(((undefined1 *)(gen_frame + 0x358)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x358)));
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7e80(pvVar2,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_00c472af(((undefined1 *)(gen_frame + 0x358)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x358)));
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7e80(pvVar2,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_00c472af(((undefined1 *)(gen_frame + 0x358)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x358)));
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7e80(pvVar2,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,"Vector3");
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 3;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this + 0x20;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x358)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0xc))),
               (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0xc))) >> 0x20));
    F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"value",REFG(undefined4, 0x108cc50));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x4))) >> 0x1f;
    puVar9 = ((undefined1 *)(gen_frame + 0x358));
    pTVar6 = (*(undefined * PTR32 *)(gen_frame + 0x4));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,pTVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x304)));
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)(gen_frame + 0xc)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1);
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) < 3);
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7e80(pvVar2,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_00c472af(((undefined1 *)(gen_frame + 0x358)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x30))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x30)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x358)));
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7e80(pvVar2,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_00c472af(((undefined1 *)(gen_frame + 0x358)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x34]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x358)));
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  pvVar1 = (undefined *)F_00e9e450(param_1,7,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7e80(pvVar2,7);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,7);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,7);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_00c472af(((undefined1 *)(gen_frame + 0x358)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x35],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x358)));
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  pvVar1 = (undefined *)F_00e9e450(param_1,8,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7e80(pvVar2,8);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,8);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,8);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_00c472af(((undefined1 *)(gen_frame + 0x358)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x38),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x358)));
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  pvVar1 = (undefined *)F_00e9e450(param_1,9,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7e80(pvVar2,9);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,9);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,9);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar2,"Class");
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"value",REFG(undefined4, 0x108cc50));
  iVar5 = *(int *)(this + 0x3c);
  uVar4 = F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  ((code *)*(gen_code32 *)(iVar5 + 0x34))(this + 0x3c,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  pvVar1 = (undefined *)F_00e9e450(param_1,10,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7e80(pvVar2,10);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,10);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x208)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,10);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x208)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x208)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1b4)));
  F_00ea7fb0(pvVar2,"Vector3");
  F_0042c880(((undefined1 *)(gen_frame + 0x1b4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x25c)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x25c)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x25c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x2b0)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 3;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x2b0)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x2b0)));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0x50;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0x0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x358)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x4))),
               (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x4))) >> 0x20));
    F_0042cc20(((undefined1 *)(gen_frame + 0x2b0)),"value",REFG(undefined4, 0x108cc50));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0xc))) >> 0x1f;
    puVar9 = ((undefined1 *)(gen_frame + 0x358));
    pTVar6 = (*(undefined * PTR32 *)(gen_frame + 0xc));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x2b0)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,pTVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x2b0)));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 1);
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) < 3);
  pvVar1 = (undefined *)F_00e9e450(param_1,0xb,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x2b0)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x2b0)));
  F_00ea7e80(pvVar2,0xb);
  F_0042c880(((undefined1 *)(gen_frame + 0x2b0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x25c)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xb);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x25c)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x25c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xb);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1b4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x208)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x208)));
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x208)));
  F_00c472af(((undefined1 *)(gen_frame + 0x358)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x60]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x304)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x304)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x358)));
  F_0042c880(((undefined1 *)(gen_frame + 0x304)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xc,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x160)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x160)));
  F_00ea7e80(pvVar2,0xc);
  F_0042c880(((undefined1 *)(gen_frame + 0x160)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10c)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xc);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10c)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xb8)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xc);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0xb8)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xb8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x64)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  F_00c472af(((undefined1 *)(gen_frame + 0x358)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x61],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x358)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x378)) ^ (uint)(uint)(gen_frame + 0x37c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf14 */
byte F_00ed93f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed93f0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ed9542: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00ed9547;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00ed9542;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00ed9547: ;
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
                    if ((char)uVar13 == '\0') goto LAB_00ed944e;
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
LAB_00ed944e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf16 */
byte F_00ed96a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed96a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ed9870 */
unsigned int F_00ed9870(unsigned int gen_a0)
{
  GEN_ENTER(0xed9870u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x30) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf1 */
uint F_00ed98b0(void)
{
  GEN_ENTER(0xed98b0u, 0u, 0u, 0u, 0u);
  return 0x2c;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf2 */
uint F_00ed98c0(void)
{
  GEN_ENTER(0xed98c0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x13695e4);
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf3 */
uint F_00ed98d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed98d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9188) + param_1 * 4);
}

/* ref: FUN_00ed98f0 */
uint F_00ed98f0(unsigned int gen_a0)
{
  GEN_ENTER(0xed98f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12a91a0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf4 */
uint F_00ed9910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed9910u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ed9950 */
uint F_00ed9950(unsigned int gen_a0)
{
  GEN_ENTER(0xed9950u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x1a8;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf6 */
uint F_00ed9960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed9960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x13695cc))[param_1];
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf7 */
uint F_00ed9980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed9980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9140) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf8 */
uint F_00ed99a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed99a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9170) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf9 */
uint F_00ed99c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed99c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3a74) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf10 */
uint F_00ed99e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed99e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9158) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf14 */
uint F_00ed9a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed9a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12a9170) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12a9170) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3a74) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3a74) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12a9158) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a74) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12a9140) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12a9158) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a9140) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf13 */
uint F_00ed9a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xed9a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a74) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12a9158) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a9140) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12a9140) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a74) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12a9158) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf12 */
uint F_00ed9b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xed9b00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a74) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12a9158) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf11 */
uint F_00ed9b90(unsigned int gen_a0)
{
  GEN_ENTER(0xed9b90u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf15 */
uint F_00ed9bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed9bf0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf19 */
uint F_00ed9c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed9c70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ed9cf0 */
uint F_00ed9cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xed9cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12a949c));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  F_00c48350((undefined *)((int)this + 8),0,0x32);
  *(undefined8 *)((int)this + 0x3a) = 0;
  *(undefined8 *)((int)this + 0x42) = 0;
  *(undefined8 *)((int)this + 0x4a) = 0;
  *(undefined1 *)((int)this + 0x52) = 0;
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
  return (uint)this;
}

/* ref: FUN_00ed9da0 */
unsigned int F_00ed9da0(unsigned int gen_a0)
{
  GEN_ENTER(0xed9da0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf2 */
uint F_00ed9db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed9db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369638) + 0x10))))(&REFG(undefined * PTR32, 0x1369638),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00ed9de0 */
uint F_00ed9de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed9de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369638) + 0x10))))(&REFG(undefined * PTR32, 0x1369638),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf4 */
uint F_00ed9e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed9e10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 8;
  case 2: ;
    return in_ecx + 0x3a;
  case 3: ;
    return in_ecx + 0x54;
  case 4: ;
    return in_ecx + 0x78;
  case 5: ;
    return in_ecx + 0x9c;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf3 */
uint F_00ed9e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed9e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 < *(uint *)(&REFG(undefined, 0x12a9140) + param_1 * 4)) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
      return (uint)(this + param_2 + 8);
    case 2: ;
      return (uint)(this + param_2 + 0x3a);
    case 3: ;
      return (uint)(this + param_2 * 2 + 0x54);
    case 4: ;
      return (uint)(this + param_2 * 2 + 0x78);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf6 */
uint F_00ed9ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed9ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined * pFVar6;
  int iVar7;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 4) = param_1[1];
    pFVar6 = this + 8;
    iVar5 = (int)param_1 - (int)this;
    iVar7 = 0x32;
    do {
      *pFVar6 = pFVar6[iVar5];
      pFVar6 = pFVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pFVar6 = this + 0x3a;
    iVar7 = 0x19;
    do {
      *pFVar6 = pFVar6[iVar5];
      pFVar6 = pFVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pFVar6 = this + 0x54;
    iVar7 = 0x12;
    do {
      *(undefined2 *)pFVar6 = *(undefined2 *)(pFVar6 + iVar5);
      pFVar6 = pFVar6 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pFVar6 = this + 0x78;
    iVar7 = 0x12;
    do {
      *(undefined2 *)pFVar6 = *(undefined2 *)(pFVar6 + iVar5);
      pFVar6 = pFVar6 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar4 = param_1[0x27];
    *(uint *)(this + 0x9c) = uVar4;
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf5 */
uint F_00ed9f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed9f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pFVar5;
  int iVar6;
  
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
      pFVar5 = this + 8;
      iVar6 = 0x32;
      do {
        *pFVar5 = pFVar5[(int)param_1 - (int)this];
        pFVar5 = pFVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return (uint)pFVar5;
    case 2: ;
      pFVar5 = this + 0x3a;
      iVar6 = 0x19;
      do {
        *pFVar5 = pFVar5[(int)param_1 - (int)this];
        pFVar5 = pFVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return (uint)pFVar5;
    case 3: ;
      pFVar5 = this + 0x54;
      iVar6 = 0x12;
      do {
        *(undefined2 *)pFVar5 = *((undefined2 *)GEN_TOP((pFVar5 + ((int)param_1 - (int)this))));
        pFVar5 = pFVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return (uint)pFVar5;
    case 4: ;
      pFVar5 = this + 0x78;
      iVar6 = 0x12;
      do {
        *(undefined2 *)pFVar5 = *((undefined2 *)GEN_TOP((pFVar5 + ((int)param_1 - (int)this))));
        pFVar5 = pFVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return (uint)pFVar5;
    case 5: ;
      uVar4 = param_1[0x27];
      *(uint *)(this + 0x9c) = uVar4;
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf8 */
byte F_00eda090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeda090u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00eda193: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00eda198;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00eda193;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00eda198: ;
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
            if ((char)uVar13 == '\0') goto LAB_00eda24a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00eda24a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf22 */
byte F_00eda260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeda260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pFVar4;
  ulonglong uVar5;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    *(int *)(this + 4) = (int)uVar5;
    return 1;
  case 1: ;
    uVar2 = F_00e8c050(param_2);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e50570(uVar1);
      this[iVar3 + 8] = SUB81(uVar5,0);
      iVar3 = iVar3 + 1;
      if (0x31 < iVar3) {
        return 1;
      }
    }
    break;
  case 2: ;
    uVar2 = F_00e8c050(param_2);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e50570(uVar1);
      this[iVar3 + 0x3a] = SUB81(uVar5,0);
      iVar3 = iVar3 + 1;
      if (0x18 < iVar3) {
        return 1;
      }
    }
    break;
  case 3: ;
    uVar2 = F_00e8c050(param_2);
    iVar3 = 0;
    pFVar4 = this + 0x54;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e50570(uVar1);
      *(short *)pFVar4 = (short)uVar5;
      iVar3 = iVar3 + 1;
      pFVar4 = pFVar4 + 2;
      if (0x11 < iVar3) {
        return 1;
      }
    }
    break;
  case 4: ;
    uVar2 = F_00e8c050(param_2);
    iVar3 = 0;
    pFVar4 = this + 0x78;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e50570(uVar1);
      *(short *)pFVar4 = (short)uVar5;
      iVar3 = iVar3 + 1;
      pFVar4 = pFVar4 + 2;
      if (0x11 < iVar3) {
        return 1;
      }
    }
    break;
  case 5: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    *(int *)(this + 0x9c) = (int)uVar5;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf17 */
byte F_00eda430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeda430u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar6 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar3 = F_00c51da0(uVar6 + 2,0x22);
  uVar8 = F_00e50570(uVar6 + 2);
  uVar3 = uVar3 + 1;
  *(int *)(this + 4) = (int)uVar8;
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
    this[iVar5 + 8] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x32);
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
    this[iVar5 + 0x3a] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x19);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x54;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar7);
    *(short *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = (short)uVar8;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
  } while (iVar5 < 0x12);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x78;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e50570(uVar7);
    *(short *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = (short)uVar8;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
    if (0x11 < iVar5) {
LAB_00eda61b: ;
      uVar6 = F_00c51da0(uVar3 + 4,0x22);
      uVar8 = F_00e50570(uVar3 + 4);
      *(int *)(this + 0x9c) = (int)uVar8;
      if (param_2 != (uint *)0x0) {
        uVar3 = F_00c51da0(uVar6,0x7d);
        *param_2 = uVar3;
      }
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00eda61b;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf10 */
uint F_00eda670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeda670u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::FishingWork::vf23 */
byte F_00eda790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeda790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * pFVar3;
  int iVar4;
  undefined1 * puVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,0x32,0);
  iVar4 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar4 + 8],0);
    puVar5 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar4,iVar4 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar5);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x32);
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,0x19,0);
  iVar4 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar4 + 0x3a],0);
    puVar5 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar4,iVar4 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar5);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x19);
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,0x12,0);
  iVar4 = 0;
  pFVar3 = this + 0x54;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)pFVar3,0);
    puVar5 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar4,iVar4 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar5);
    iVar4 = iVar4 + 1;
    pFVar3 = pFVar3 + 2;
  } while (iVar4 < 0x12);
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,0x12,0);
  iVar4 = 0;
  pFVar3 = this + 0x78;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)pFVar3,0);
    puVar5 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar4,iVar4 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar5);
    iVar4 = iVar4 + 1;
    pFVar3 = pFVar3 + 2;
  } while (iVar4 < 0x12);
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x9c),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf9 */
uint F_00eda9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeda9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf11 */
byte F_00eda9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeda9d0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00edaae3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00edaae8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00edaae3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00edaae8: ;
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
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00edac57;
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
LAB_00edac57: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf24 */
byte F_00edac70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedac70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * pFVar3;
  int iVar4;
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
    *(int *)(this + 4) = (int)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 1: ;
    uVar2 = F_00e8c050(this_00);
    iVar4 = 0;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e505e0(uVar1);
      this[iVar4 + 8] = SUB81(uVar5,0);
      iVar4 = iVar4 + 1;
      if (0x31 < iVar4) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 2: ;
    uVar2 = F_00e8c050(this_00);
    iVar4 = 0;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e505e0(uVar1);
      this[iVar4 + 0x3a] = SUB81(uVar5,0);
      iVar4 = iVar4 + 1;
      if (0x18 < iVar4) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 3: ;
    uVar2 = F_00e8c050(this_00);
    iVar4 = 0;
    pFVar3 = this + 0x54;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e505e0(uVar1);
      *(short *)pFVar3 = (short)uVar5;
      iVar4 = iVar4 + 1;
      pFVar3 = pFVar3 + 2;
      if (0x11 < iVar4) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 4: ;
    uVar2 = F_00e8c050(this_00);
    iVar4 = 0;
    pFVar3 = this + 0x78;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e505e0(uVar1);
      *(short *)pFVar3 = (short)uVar5;
      iVar4 = iVar4 + 1;
      pFVar3 = pFVar3 + 2;
      if (0x11 < iVar4) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 5: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    *(int *)(this + 0x9c) = (int)uVar5;
    break;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf18 */
byte F_00edaec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedaec0u, gen_a0, gen_a1, gen_a2, 0u);
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
  undefined * pFVar7;
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
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136983c));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    *(int *)(this + 4) = (int)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369838));
    iVar5 = uVar3 + 10;
    iVar6 = 0;
    do {
      uVar8 = F_00e50570(iVar5);
      this[iVar6 + 8] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(iVar5,0x2c);
      iVar6 = iVar6 + 1;
      iVar5 = uVar3 + 2;
    } while (iVar6 < 0x32);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369838));
    iVar5 = uVar3 + 10;
    iVar6 = 0;
    do {
      uVar8 = F_00e50570(iVar5);
      this[iVar6 + 0x3a] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(iVar5,0x2c);
      iVar6 = iVar6 + 1;
      iVar5 = uVar3 + 2;
    } while (iVar6 < 0x19);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369838));
    iVar5 = uVar3 + 10;
    pFVar7 = this + 0x54;
    (*(int *)(gen_frame + 0x4)) = 0x12;
    do {
      uVar8 = F_00e50570(iVar5);
      *(short *)pFVar7 = (short)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      pFVar7 = pFVar7 + 2;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x4)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369838));
    iVar5 = uVar3 + 10;
    pFVar7 = this + 0x78;
    (*(int *)(gen_frame + 0x4)) = 0x12;
    do {
      uVar8 = F_00e50570(iVar5);
      *(short *)pFVar7 = (short)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      pFVar7 = pFVar7 + 2;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x4)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136983c));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    *(int *)(this + 0x9c) = (int)uVar8;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf13 */
uint F_00edb1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedb1e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::FishingWork::vf25 */
byte F_00edb300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedb300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined * pFVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x32;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 8],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x68));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x10))) >> 0x1f;
    pFVar6 = (*(undefined * PTR32 *)(gen_frame + 0x10));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,pFVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 1);
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) < 0x32);
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x19;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x3a],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x68));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x10))) >> 0x1f;
    pFVar6 = (*(undefined * PTR32 *)(gen_frame + 0x10));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,pFVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 1);
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) < 0x19);
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt16");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x12;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this + 0x54;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(*(undefined * PTR32 *)(gen_frame + 0xc)),0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x10))) >> 0x1f;
    puVar9 = ((undefined1 *)(gen_frame + 0x68));
    pFVar6 = (*(undefined * PTR32 *)(gen_frame + 0x10));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,pFVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)(gen_frame + 0xc)) + 2;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 1);
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) < 0x12);
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt16");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x12;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this + 0x78;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0x0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(*(undefined * PTR32 *)(gen_frame + 0x10)),0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0xc))) >> 0x1f;
    puVar9 = ((undefined1 *)(gen_frame + 0x68));
    pFVar6 = (*(undefined * PTR32 *)(gen_frame + 0xc));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,pFVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 *)(gen_frame + 0x10)) + 2;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 1);
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) < 0x12);
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x9c),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf14 */
byte F_00edbd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedbd50u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00edbea2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00edbea7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00edbea2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00edbea7: ;
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
                    if ((char)uVar13 == '\0') goto LAB_00edbdae;
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
LAB_00edbdae: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf16 */
byte F_00edc000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedc000u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf1 */
uint F_00edc200(void)
{
  GEN_ENTER(0xedc200u, 0u, 0u, 0u, 0u);
  return 0xd3;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf2 */
uint F_00edc210(void)
{
  GEN_ENTER(0xedc210u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x13695ec);
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf3 */
uint F_00edc220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedc220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a91c8) + param_1 * 4);
}

/* ref: FUN_00edc240 */
uint F_00edc240(unsigned int gen_a0)
{
  GEN_ENTER(0xedc240u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12a91cc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf4 */
uint F_00edc260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedc260u, gen_a0, gen_a1, 0u, 0u);
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
  } while ((int)uVar2 < 1);
  return 0xffffffff;
}

/* ref: FUN_00edc2a0 */
uint F_00edc2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xedc2a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x1df;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf6 */
uint F_00edc2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedc2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x13695e8))[param_1];
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf7 */
uint F_00edc2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedc2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a91bc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf8 */
uint F_00edc2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedc2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a91c4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf9 */
uint F_00edc310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedc310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3a8c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf10 */
uint F_00edc330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedc330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a91c0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf14 */
uint F_00edc350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedc350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12a91c4) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12a91c4) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3a8c) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3a8c) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12a91c0) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a8c) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12a91bc) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12a91c0) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a91bc) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf13 */
uint F_00edc3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xedc3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a8c) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12a91c0) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a91bc) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12a91bc) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a8c) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12a91c0) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf12 */
uint F_00edc450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xedc450u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a8c) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12a91c0) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf11 */
uint F_00edc4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xedc4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf17 */
uint F_00edc4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xedc4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf16 */
uint F_00edc510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xedc510u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf15 */
uint F_00edc530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedc530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf19 */
uint F_00edc550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedc550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00edc570 */
uint F_00edc570(unsigned int gen_a0)
{
  GEN_ENTER(0xedc570u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12a9564));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00edc580 */
unsigned int F_00edc580(unsigned int gen_a0)
{
  GEN_ENTER(0xedc580u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf2 */
uint F_00edc590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedc590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136963c) + 0x10))))(&REFG(undefined * PTR32, 0x136963c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00edc5c0 */
uint F_00edc5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedc5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136963c) + 0x10))))(&REFG(undefined * PTR32, 0x136963c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf4 */
uint F_00edc5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedc5f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    return 0;
  }
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf3 */
uint F_00edc610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedc610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf6 */
uint F_00edc620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedc620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2)));
  if ((short)uVar3 == (short)piVar1) {
    *(int *)(this + 4) = param_1[1];
    piVar1 = param_1;
  }
  return (uint)piVar1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf5 */
uint F_00edc670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedc670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2)));
  if (((short)uVar3 == (short)piVar1) && (param_2 == 0)) {
    *(int *)(this + 4) = param_1[1];
    piVar1 = param_1;
  }
  return (uint)piVar1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf8 */
byte F_00edc6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedc6c0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00edc7c3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00edc7c8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00edc7c3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00edc7c8: ;
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
            if ((char)uVar13 == '\0') goto LAB_00edc87a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00edc87a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf22 */
byte F_00edc890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xedc890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  ulonglong uVar2;
  
  if (param_1 != 0) {
    return 0;
  }
  uVar1 = F_00e82f00(param_2);
  uVar1 = F_0042a990(uVar1);
  uVar2 = F_00e50570(uVar1);
  *(int *)(this + 4) = (int)uVar2;
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf17 */
byte F_00edc8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedc8d0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (param_2 != (uint *)0x0) {
    uVar3 = F_00c51da0(uVar6,0x7d);
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf10 */
uint F_00edc9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedc9a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf23 */
byte F_00edcac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedcac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  this_00 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_00ea7fb0(this_00,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf9 */
uint F_00edcb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedcb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf11 */
byte F_00edcb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedcb40u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00edcc53: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00edcc58;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00edcc53;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00edcc58: ;
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
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00edcdc7;
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
LAB_00edcdc7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf24 */
byte F_00edcde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedcde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if (param_1 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  uVar1 = F_00e82f00(uVar1);
  uVar1 = F_0042a990(uVar1);
  uVar2 = F_00e50570(uVar1);
  *(int *)(this + 4) = (int)uVar2;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf18 */
byte F_00edce70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedce70u, gen_a0, gen_a1, gen_a2, 0u);
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
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13698d4));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 4) = (int)uVar6;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf13 */
uint F_00edcf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedcf70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf25 */
byte F_00edd090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedd090u, gen_a0, gen_a1, 0u, 0u);
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
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf14 */
byte F_00edd210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedd210u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00edd362: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00edd367;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00edd362;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00edd367: ;
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
                    if ((char)uVar13 == '\0') goto LAB_00edd26e;
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
LAB_00edd26e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf16 */
byte F_00edd4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedd4c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00edd690 */
unsigned int F_00edd690(unsigned int gen_a0)
{
  GEN_ENTER(0xedd690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf1 */
uint F_00edd6c0(void)
{
  GEN_ENTER(0xedd6c0u, 0u, 0u, 0u, 0u);
  return 0x5a;
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf2 */
uint F_00edd6d0(void)
{
  GEN_ENTER(0xedd6d0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x1369608);
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf3 */
uint F_00edd6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedd6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a921c) + param_1 * 4);
}

/* ref: FUN_00edd700 */
uint F_00edd700(unsigned int gen_a0)
{
  GEN_ENTER(0xedd700u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12a9234) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf4 */
uint F_00edd720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedd720u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00edd760 */
uint F_00edd760(unsigned int gen_a0)
{
  GEN_ENTER(0xedd760u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x37d;
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf6 */
uint F_00edd770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedd770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x13695f0))[param_1];
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf7 */
uint F_00edd790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedd790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a91d4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf8 */
uint F_00edd7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedd7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9204) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf9 */
uint F_00edd7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedd7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3a90) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf10 */
uint F_00edd7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedd7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a91ec) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf14 */
uint F_00edd810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedd810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12a9204) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12a9204) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3a90) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3a90) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12a91ec) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a90) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12a91d4) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12a91ec) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a91d4) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf13 */
uint F_00edd890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xedd890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a90) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12a91ec) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a91d4) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12a91d4) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a90) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12a91ec) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf12 */
uint F_00edd910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xedd910u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a90) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12a91ec) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf11 */
uint F_00edd9a0(unsigned int gen_a0)
{
  GEN_ENTER(0xedd9a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf17 */
uint F_00edda00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xedda00u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf16 */
uint F_00edda20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xedda20u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf15 */
uint F_00edda40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedda40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf19 */
uint F_00eddac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeddac0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00eddb40 */
uint F_00eddb40(unsigned int gen_a0)
{
  GEN_ENTER(0xeddb40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12a962c));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  return (uint)this;
}

/* ref: FUN_00eddb70 */
unsigned int F_00eddb70(unsigned int gen_a0)
{
  GEN_ENTER(0xeddb70u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf2 */
uint F_00eddb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeddb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369640) + 0x10))))(&REFG(undefined * PTR32, 0x1369640),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00eddbb0 */
uint F_00eddbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeddbb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369640) + 0x10))))(&REFG(undefined * PTR32, 0x1369640),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf4 */
uint F_00eddbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeddbe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 8;
  case 1: ;
    return in_ecx + 0x10;
  case 2: ;
    return in_ecx + 0x12;
  case 3: ;
    return in_ecx + 0x14;
  case 4: ;
    return in_ecx + 0x18;
  case 5: ;
    return in_ecx + 0x1c;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf3 */
uint F_00eddc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeddc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf6 */
uint F_00eddc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeddc50u, gen_a0, gen_a1, 0u, 0u);
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
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    *(short *)(this + 0x10) = (short)param_1[4];
    *(undefined2 *)(this + 0x12) = *(undefined2 *)((int)param_1 + 0x12);
    *(int *)(this + 0x14) = param_1[5];
    *(int *)(this + 0x18) = param_1[6];
    uVar4 = param_1[7];
    *(uint *)(this + 0x1c) = uVar4;
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf5 */
uint F_00eddcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeddcd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined2 uVar1;
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
      uVar5 = param_1[2];
      *(uint *)(this + 8) = uVar5;
      *(int *)(this + 0xc) = param_1[3];
      return uVar5;
    case 1: ;
      *(short *)(this + 0x10) = (short)param_1[4];
      return uVar5;
    case 2: ;
      uVar1 = *(undefined2 *)((int)param_1 + 0x12);
      *(undefined2 *)(this + 0x12) = uVar1;
      return CONCAT22((short)(param_2 >> 0x10),uVar1);
    case 3: ;
      *(int *)(this + 0x14) = param_1[5];
      return uVar5;
    case 4: ;
      *(int *)(this + 0x18) = param_1[6];
      return uVar5;
    case 5: ;
      uVar5 = param_1[7];
      *(uint *)(this + 0x1c) = uVar5;
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf8 */
byte F_00eddd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeddd90u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00edde93: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00edde98;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00edde93;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00edde98: ;
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
            if ((char)uVar13 == '\0') goto LAB_00eddf4a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00eddf4a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf22 */
byte F_00eddf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeddf60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *(ulonglong *)(this + 8) = uVar2;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 0x10) = (short)uVar2;
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 0x12) = (short)uVar2;
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x14) = (int)uVar2;
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x18) = (int)uVar2;
    return 1;
  case 5: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x1c) = (int)uVar2;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf17 */
byte F_00ede070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xede070u, gen_a0, gen_a1, gen_a2, 0u);
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
  *(ulonglong *)(this + 8) = uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(short *)(this + 0x10) = (short)uVar7;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  *(short *)(this + 0x12) = (short)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(int *)(this + 0x14) = (int)uVar7;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  *(int *)(this + 0x18) = (int)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(int *)(this + 0x1c) = (int)uVar7;
  if (param_2 != (uint *)0x0) {
    uVar3 = F_00c51da0(uVar3,0x7d);
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf10 */
uint F_00ede1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xede1c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ItemBase::vf23 */
byte F_00ede2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xede2e0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x10),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x12),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x14),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x18),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x1c),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf9 */
uint F_00ede440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xede440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf11 */
byte F_00ede460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xede460u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ede573: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ede578;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00ede573;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ede578: ;
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
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00ede6e7;
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
LAB_00ede6e7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf24 */
byte F_00ede700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xede700u, gen_a0, gen_a1, gen_a2, 0u);
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
    *(ulonglong *)(this + 8) = uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 0x10) = (short)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 0x12) = (short)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x14) = (int)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x18) = (int)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 5: ;
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x1c) = (int)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf18 */
byte F_00ede8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xede8a0u, gen_a0, gen_a1, gen_a2, 0u);
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
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369958));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(ulonglong *)(this + 8) = uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369958));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(short *)(this + 0x10) = (short)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369958));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(short *)(this + 0x12) = (short)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369958));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 0x14) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369958));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 0x18) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369958));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 0x1c) = (int)uVar6;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf13 */
uint F_00edeb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedeb40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ItemBase::vf25 */
byte F_00edec60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedec60u, gen_a0, gen_a1, 0u, 0u);
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
  F_00ea7fb0(pvVar2,"UInt16");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x10),0);
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
  F_00ea7fb0(pvVar2,"UInt16");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x12),0);
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
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x14),0);
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
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x18),0);
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
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x1c),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf14 */
byte F_00edf460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedf460u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00edf5b2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00edf5b7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00edf5b2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00edf5b7: ;
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
                    if ((char)uVar13 == '\0') goto LAB_00edf4be;
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
LAB_00edf4be: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf16 */
byte F_00edf710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedf710u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf1 */
uint F_00edf910(void)
{
  GEN_ENTER(0xedf910u, 0u, 0u, 0u, 0u);
  return 0x83;
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf2 */
uint F_00edf920(void)
{
  GEN_ENTER(0xedf920u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x1369624);
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf3 */
uint F_00edf930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedf930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9274) + param_1 * 4);
}

/* ref: FUN_00edf950 */
uint F_00edf950(unsigned int gen_a0)
{
  GEN_ENTER(0xedf950u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12a9280) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf4 */
uint F_00edf970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedf970u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00edf9b0 */
uint F_00edf9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xedf9b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x498;
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf6 */
uint F_00edf9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedf9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136960c))[param_1];
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf7 */
uint F_00edf9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedf9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9250) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf8 */
uint F_00edfa00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedfa00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9268) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf9 */
uint F_00edfa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedfa20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1369618) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf10 */
uint F_00edfa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedfa40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a925c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf14 */
uint F_00edfa60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedfa60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12a9268) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12a9268) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x1369618) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x1369618) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12a925c) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x1369618) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12a9250) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12a925c) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a9250) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf13 */
uint F_00edfae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xedfae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x1369618) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12a925c) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a9250) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12a9250) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x1369618) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12a925c) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf12 */
uint F_00edfb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xedfb60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x1369618) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12a925c) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf11 */
uint F_00edfbf0(unsigned int gen_a0)
{
  GEN_ENTER(0xedfbf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,2);
  return uVar3 + uVar1 + uVar2;
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf17 */
uint F_00edfc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xedfc20u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf16 */
uint F_00edfc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xedfc40u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf15 */
uint F_00edfc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedfc60u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf19 */
uint F_00edfcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedfcb0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00edfd00 */
uint F_00edfd00(unsigned int gen_a0)
{
  GEN_ENTER(0xedfd00u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12a96f4));
  in_ecx[1] = 0;
  F_01002590(in_ecx + 4);
  F_00f904a0(in_ecx + 0x18);
  return (uint)in_ecx;
}

/* ref: FUN_00edfd30 */
unsigned int F_00edfd30(unsigned int gen_a0)
{
  GEN_ENTER(0xedfd30u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12a96f4));
  F_00f904c0(in_ecx + 0x18);
  F_010025e0(in_ecx + 4);
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf2 */
uint F_00edfd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedfd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369644) + 0x10))))(&REFG(undefined * PTR32, 0x1369644),param_1);
  if (-1 < (int)uVar1) {
    return (uint)this;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 8))))(this + 0x10,param_1);
  if (uVar1 == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x60) + 8))))(this + 0x60,param_1);
  }
  return uVar1;
}

/* ref: FUN_00edfdb0 */
uint F_00edfdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedfdb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369644) + 0x10))))(&REFG(undefined * PTR32, 0x1369644),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf4 */
uint F_00edfde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedfde0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    return in_ecx + 4;
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      return 0;
    }
    return in_ecx + 0x60;
  }
  return in_ecx + 0x10;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf3 */
uint F_00edfe10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedfe10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf6 */
uint F_00edfe20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedfe20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  code * pcVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if ((short)uVar4 == (short)uVar5) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x18)));
    *(int *)(this + 4) = param_1[1];
    (*pcVar1)(this + 0x10,param_1 + 4);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x60) + 0x18))))(this + 0x60,param_1 + 0x18);
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf5 */
uint F_00edfe90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xedfe90u, gen_a0, gen_a1, gen_a2, 0u);
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
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x18))))(this + 0x10,param_1 + 4);
        return uVar4;
      }
      uVar4 = param_2 - 2;
      if (uVar4 == 0) {
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x60) + 0x18))))(this + 0x60,param_1 + 0x18);
        return uVar4;
      }
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf8 */
byte F_00edff20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xedff20u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ee0023: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ee0028;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00ee0023;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ee0028: ;
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
            if ((char)uVar13 == '\0') goto LAB_00ee00da;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00ee00da: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf22 */
byte F_00ee00f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee00f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * pPVar2;
  ulonglong uVar3;
  
  if (param_1 == 0) {
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar3 = F_00e505e0(uVar1);
    *(int *)(this + 4) = (int)uVar3;
    return 1;
  }
  if (param_1 == 1) {
    pPVar2 = this + 0x10;
  }
  else {
    if (param_1 != 2) {
      return 0;
    }
    pPVar2 = this + 0x60;
  }
  if ((char)param_3 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)pPVar2 + 0x38))(pPVar2,param_2);
    return 1;
  }
  ((code *)*(gen_code32 *)(*(int *)pPVar2 + 0x20))(pPVar2,param_2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf17 */
byte F_00ee0160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xee0160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar6 = *(int *)this;
  (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(param_1 + 1);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar6 + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar6 == 0) {
    uVar4 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x4)),0x5b);
    (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar4 - 1);
    pcVar5 = (char *)F_00c51da0(uVar4 + 2,0x22);
    uVar7 = F_00e505e0(uVar4 + 2);
    *(int *)(this + 4) = (int)uVar7;
    pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x44)));
    (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar5;
    uVar4 = (*pcVar2)(this + 0x10,pcVar5 + 2,&(*(char * PTR32 *)(gen_frame + 0x4)));
    if ((char)uVar4 != '\0') {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x60) + 0x44))))(this + 0x60,(*(char * PTR32 *)(gen_frame + 0x4)) + 2,&(*(char * PTR32 *)(gen_frame + 0x4)));
      if ((char)uVar4 != '\0') {
        if (param_2 != (uint *)0x0) {
          uVar4 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x4)),0x7d);
          *param_2 = uVar4;
        }
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return 1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf10 */
uint F_00ee0270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee0270u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::PcWork::vf23 */
byte F_00ee0390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xee0390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  code * pcVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  this_00 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 4),*(int *)(this + 4) >> 0x1f);
  F_00ea7fb0(this_00,((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_00e9e450(param_1,1,0);
  if ((char)param_2 == '\0') {
    pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x28)));
  }
  else {
    pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x40)));
  }
  (*pcVar2)(this + 0x10,uVar1);
  uVar1 = F_00e9e450(param_1,2,0);
  if ((char)param_2 == '\0') {
    pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x60) + 0x28)));
  }
  else {
    pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x60) + 0x40)));
  }
  (*pcVar2)(this + 0x60,uVar1);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf9 */
uint F_00ee0440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee0440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf11 */
byte F_00ee0460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee0460u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ee0573: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ee0578;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00ee0573;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ee0578: ;
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
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00ee06e7;
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
LAB_00ee06e7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf24 */
byte F_00ee0700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xee0700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if (param_1 == 0) {
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e505e0(uVar1);
    *(int *)(this + 4) = (int)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return 0;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x60) + 0x2c))))(this + 0x60,uVar1);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x2c))))(this + 0x10,uVar1);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf18 */
byte F_00ee07d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xee07d0u, gen_a0, gen_a1, gen_a2, 0u);
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
  (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(param_1 + 1);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x4)),0x5b);
  iVar5 = *(int *)this;
  (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 - 1);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar5 + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13699e0));
    uVar6 = F_00e505e0((char *)(uVar3 + 9));
    *(int *)(this + 4) = (int)uVar6;
    (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13699e0));
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x48))))(this + 0x10,uVar3 + 8,&(*(char * PTR32 *)(gen_frame + 0x4)));
    if ((char)uVar3 == '\0') goto LAB_00ee097e;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13699e0));
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x60) + 0x48))))(this + 0x60,uVar3 + 8,&(*(char * PTR32 *)(gen_frame + 0x4)));
    if ((char)uVar3 == '\0') {
LAB_00ee097e: ;
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return 0;
    }
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(*(char * PTR32 *)(gen_frame + 0x4));
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf13 */
uint F_00ee09c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee09c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::PcWork::vf25 */
byte F_00ee0ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee0ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pvVar2 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,0);
  pvVar3 = (undefined *)F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar3,uVar5,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,0);
  pvVar3 = (undefined *)F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,"Int32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 4),*(int *)(this + 4) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar2 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,1);
  pvVar3 = (undefined *)F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar3,uVar5,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,1);
  pvVar3 = (undefined *)F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,"Class");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  iVar1 = *(int *)(this + 0x10);
  uVar5 = F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  ((code *)*(gen_code32 *)(iVar1 + 0x34))(this + 0x10,uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar2 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,2);
  pvVar3 = (undefined *)F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar3,uVar5,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,2);
  pvVar3 = (undefined *)F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,"Class");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  iVar1 = *(int *)(this + 0x60);
  uVar5 = F_00ea8380(pvVar2,((undefined1 *)(gen_frame + 0x4)));
  ((code *)*(gen_code32 *)(iVar1 + 0x34))(this + 0x60,uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf14 */
byte F_00ee0ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee0ed0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ee1022: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00ee1027;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00ee1022;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00ee1027: ;
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
                    if ((char)uVar13 == '\0') goto LAB_00ee0f2e;
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
LAB_00ee0f2e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf16 */
byte F_00ee1180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee1180u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ee1350 */
uint F_00ee1350(unsigned int gen_a0)
{
  GEN_ENTER(0xee1350u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_01004b50(in_ecx + 0x10);
  return uVar1;
}

/* ref: FUN_00ee1370 */
uint F_00ee1370(unsigned int gen_a0)
{
  GEN_ENTER(0xee1370u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x12a9294));
  in_ecx[1] = 0;
  in_ecx[4] = (*(undefined * PTR32 (*)[27])REFP(0x12a96f4));
  in_ecx[5] = 0;
  F_01002590(in_ecx + 8);
  F_00f904a0(in_ecx + 0x1c);
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x12a97d4));
  in_ecx[4] = (*(undefined * PTR32 (*)[27])REFP(0x12a9764));
  return (uint)in_ecx;
}

/* ref: FUN_00ee13b0 */
unsigned int F_00ee13b0(unsigned int gen_a0)
{
  GEN_ENTER(0xee13b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x12a97d4));
  in_ecx[4] = (*(undefined * PTR32 (*)[27])REFP(0x12a9764));
  in_ecx[4] = (*(undefined * PTR32 (*)[27])REFP(0x12a96f4));
  F_00f904c0(in_ecx + 0x1c);
  F_010025e0(in_ecx + 8);
  in_ecx[4] = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x12a9294));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf18 */
uint F_00ee1400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee1400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined8 uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar2;
  puVar3 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 4);
    return 5;
  case 1: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 5);
    return 5;
  case 2: ;
    *puVar3 = *(uint *)(param_1 + 8);
    return 8;
  case 3: ;
    *puVar3 = *(uint *)(param_1 + 0xc);
    return 8;
  case 4: ;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)puVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_3 + 3) = uVar1;
    return 0x14;
  case 5: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 0x20);
    return 5;
  case 6: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 0x21);
    return 5;
  case 7: ;
    *puVar3 = *(uint *)(param_1 + 0x28);
    param_3[2] = *(uint *)(param_1 + 0x2c);
    puVar3 = param_3 + 3;
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf20 */
uint F_00ee1520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee1520u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *(char *)(param_3 + 5) = (char)*puVar3;
      return 5;
    case 2: ;
      *(uint *)(param_3 + 8) = *puVar3;
      return 8;
    case 3: ;
      *(uint *)(param_3 + 0xc) = *puVar3;
      return 8;
    case 4: ;
      uVar2 = F_00eed670(puVar3,param_3 + 0x10);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 5: ;
      *(char *)(param_3 + 0x20) = (char)*puVar3;
      return 5;
    case 6: ;
      *(char *)(param_3 + 0x21) = (char)*puVar3;
      return 5;
    case 7: ;
      *(uint *)(param_3 + 0x28) = *puVar3;
      *(uint *)(param_3 + 0x2c) = param_2[2];
      puVar3 = param_2 + 3;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00ee1630 */
uint F_00ee1630(unsigned int gen_a0)
{
  GEN_ENTER(0xee1630u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12a983c));
  *(undefined2 *)(in_ecx + 1) = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  *(undefined8 *)(in_ecx + 4) = REFG(float, 0x1375ad0);
  *(undefined8 *)(in_ecx + 6) = REFG(float, 0x1375ad8);
  *(undefined2 *)(in_ecx + 8) = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  return (uint)in_ecx;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf6 */
uint F_00ee1670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee1670u, gen_a0, gen_a1, 0u, 0u);
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
    this[4] = *(undefined *)(param_1 + 1);
    this[5] = *(undefined *)((int)param_1 + 5);
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    *(int *)(this + 0x14) = param_1[5];
    *(int *)(this + 0x18) = param_1[6];
    *(int *)(this + 0x1c) = param_1[7];
    this[0x20] = *(undefined *)(param_1 + 8);
    this[0x21] = *(undefined *)((int)param_1 + 0x21);
    *(int *)(this + 0x28) = param_1[10];
    uVar4 = param_1[0xb];
    *(uint *)(this + 0x2c) = uVar4;
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf5 */
uint F_00ee1700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xee1700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 WVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined3 uVar6;
  
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    uVar6 = (undefined3)(param_2 >> 8);
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      WVar1 = *(undefined *)(param_1 + 1);
      this[4] = WVar1;
      return CONCAT31(uVar6,WVar1);
    case 1: ;
      this[5] = *(undefined *)((int)param_1 + 5);
      return uVar5;
    case 2: ;
      *(int *)(this + 8) = param_1[2];
      return uVar5;
    case 3: ;
      *(int *)(this + 0xc) = param_1[3];
      return uVar5;
    case 4: ;
      *(int *)(this + 0x10) = param_1[4];
      *(int *)(this + 0x14) = param_1[5];
      *(int *)(this + 0x18) = param_1[6];
      *(int *)(this + 0x1c) = param_1[7];
      return uVar5;
    case 5: ;
      WVar1 = *(undefined *)(param_1 + 8);
      this[0x20] = WVar1;
      return CONCAT31(uVar6,WVar1);
    case 6: ;
      this[0x21] = *(undefined *)((int)param_1 + 0x21);
      return uVar5;
    case 7: ;
      *(int *)(this + 0x28) = param_1[10];
      uVar5 = param_1[0xb];
      *(uint *)(this + 0x2c) = uVar5;
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf7 */
uint F_00ee1800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee1800u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Warp::vf19 */
uint F_00ee1820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee1820u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Warp::vf21 */
uint F_00ee1840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee1840u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf18 */
uint F_00ee1860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee1860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar2 = *(uint *)(param_1 + 4);
    return 8;
  case 1: ;
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 8);
    return 5;
  case 2: ;
    *puVar2 = *(uint *)(param_1 + 0xc);
    return 8;
  case 3: ;
    *puVar2 = *(uint *)(param_1 + 0x10);
    return 8;
  case 4: ;
    *puVar2 = *(uint *)(param_1 + 0x14);
    return 8;
  case 5: ;
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x18);
    return 5;
  case 6: ;
    *(undefined1 *)puVar2 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0x10;
    puVar2 = (uint *)((int)param_3 + 7);
    iVar3 = 0;
    do {
      *puVar2 = *(uint *)(param_1 + 0x1c + iVar3 * 4);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < 0x10);
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf17 */
uint F_00ee1950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xee1950u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (param_2 == 6) {
    uVar1 = F_00e68640(param_1 + 0x1c,param_3,param_4,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf16 */
uint F_00ee19a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xee19a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (param_2 == 6) {
    uVar1 = F_00e68750(param_1 + 0x1c,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf20 */
uint F_00ee19f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee19f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *(uint *)(param_3 + 4) = *puVar3;
      return 8;
    case 1: ;
      *(char *)(param_3 + 8) = (char)*puVar3;
      return 5;
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
      *(char *)(param_3 + 0x18) = (char)*puVar3;
      return 5;
    case 6: ;
      uVar2 = F_00e68800(puVar3,param_3 + 0x1c,0x10);
      puVar3 = (uint *)((int)puVar3 + uVar2);
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00ee1af0 */
uint F_00ee1af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee1af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12a9304));
  F_00ed4040(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf7 */
uint F_00ee1b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee1b10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf19 */
uint F_00ee1b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee1b30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf21 */
uint F_00ee1b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee1b50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf18 */
uint F_00ee1b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee1b70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 4);
    return 5;
  case 1: ;
    *puVar2 = *(uint *)(param_1 + 8);
    return 8;
  case 2: ;
    *puVar2 = *(uint *)(param_1 + 0xc);
    return 8;
  case 3: ;
    *puVar2 = *(uint *)(param_1 + 0x10);
    return 8;
  case 4: ;
    uVar1 = *(uint *)(param_1 + 0x28);
    *(undefined8 *)puVar2 = *(undefined8 *)(param_1 + 0x20);
    param_3[3] = uVar1;
    return 0x10;
  case 5: ;
    *puVar2 = *(uint *)(param_1 + 0x30);
    return 8;
  case 6: ;
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x34);
    return 5;
  case 7: ;
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x35);
    return 5;
  case 8: ;
    *puVar2 = *(uint *)(param_1 + 0x38);
    return 8;
  case 9: ;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x13695b8) + 0x3c))))(REFG(undefined * PTR32, 0x13695b8),param_1 + 0x3c,puVar2);
    return (int)puVar2 + (uVar1 - (int)param_3);
  case 10: ;
    uVar1 = *(uint *)(param_1 + 0x58);
    *(undefined8 *)puVar2 = *(undefined8 *)(param_1 + 0x50);
    param_3[3] = uVar1;
    return 0x10;
  case 0xb: ;
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x60);
    return 5;
  case 0xc: ;
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x61);
    puVar2 = (uint *)((int)param_3 + 5);
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf20 */
uint F_00ee1d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee1d60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)puVar3;
      *(uint *)(param_3 + 0x28) = param_2[3];
      return 0x10;
    case 5: ;
      *(uint *)(param_3 + 0x30) = *puVar3;
      return 8;
    case 6: ;
      *(char *)(param_3 + 0x34) = (char)*puVar3;
      return 5;
    case 7: ;
      *(char *)(param_3 + 0x35) = (char)*puVar3;
      return 5;
    case 8: ;
      *(uint *)(param_3 + 0x38) = *puVar3;
      return 8;
    case 9: ;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x13695b8) + 0x4c))))(REFG(undefined * PTR32, 0x13695b8),puVar3,param_3 + 0x3c)
      ;
      return (int)puVar3 + (uVar2 - (int)param_2);
    case 10: ;
      *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)puVar3;
      *(uint *)(param_3 + 0x58) = param_2[3];
      return 0x10;
    case 0xb: ;
      *(char *)(param_3 + 0x60) = (char)*puVar3;
      return 5;
    case 0xc: ;
      *(char *)(param_3 + 0x61) = (char)*puVar3;
      puVar3 = (uint *)((int)param_2 + 5);
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00ee1f10 */
uint F_00ee1f10(unsigned int gen_a0)
{
  GEN_ENTER(0xee1f10u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12a93cc));
  *(undefined1 *)(in_ecx + 1) = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[8] = GEN_FLT_TO(in_ecx[8], REFG(float, 0x1375ac0));
  in_ecx[9] = GEN_FLT_TO(in_ecx[9], REFG(float, 0x1375ac4));
  in_ecx[10] = GEN_FLT_TO(in_ecx[10], REFG(float, 0x1375ac8));
  in_ecx[0xc] = 0;
  *(undefined2 *)(in_ecx + 0xd) = 0;
  in_ecx[0xe] = 0;
  F_00f67490(in_ecx + 0xf);
  in_ecx[0x14] = GEN_FLT_TO(in_ecx[0x14], REFG(float, 0x1375ac0));
  in_ecx[0x15] = GEN_FLT_TO(in_ecx[0x15], REFG(float, 0x1375ac4));
  in_ecx[0x16] = GEN_FLT_TO(in_ecx[0x16], REFG(float, 0x1375ac8));
  *(undefined2 *)(in_ecx + 0x18) = 0;
  return (uint)in_ecx;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf6 */
uint F_00ee1fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee1fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  code * pcVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if ((short)uVar4 == (short)uVar5) {
    this[4] = *(undefined *)(param_1 + 1);
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    *(int *)(this + 0x20) = param_1[8];
    *(int *)(this + 0x24) = param_1[9];
    *(int *)(this + 0x28) = param_1[10];
    *(int *)(this + 0x30) = param_1[0xc];
    this[0x34] = *(undefined *)(param_1 + 0xd);
    this[0x35] = *(undefined *)((int)param_1 + 0x35);
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x3c) + 0x18)));
    *(int *)(this + 0x38) = param_1[0xe];
    (*pcVar1)(this + 0x3c,param_1 + 0xf);
    *(int *)(this + 0x50) = param_1[0x14];
    *(int *)(this + 0x54) = param_1[0x15];
    *(int *)(this + 0x58) = param_1[0x16];
    uVar5 = (uint)(byte)*(undefined *)(param_1 + 0x18);
    this[0x60] = *(undefined *)(param_1 + 0x18);
    this[0x61] = *(undefined *)((int)param_1 + 0x61);
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf5 */
uint F_00ee2060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xee2060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 TVar1;
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
      TVar1 = *(undefined *)(param_1 + 1);
      this[4] = TVar1;
      return CONCAT31((int3)(param_2 >> 8),TVar1);
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
      *(int *)(this + 0x20) = param_1[8];
      *(int *)(this + 0x24) = param_1[9];
      *(int *)(this + 0x28) = param_1[10];
      return uVar5;
    case 5: ;
      *(int *)(this + 0x30) = param_1[0xc];
      return uVar5;
    case 6: ;
      this[0x34] = *(undefined *)(param_1 + 0xd);
      return uVar5;
    case 7: ;
      this[0x35] = *(undefined *)((int)param_1 + 0x35);
      return uVar5;
    case 8: ;
      uVar5 = param_1[0xe];
      *(uint *)(this + 0x38) = uVar5;
      return uVar5;
    case 9: ;
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x3c) + 0x18))))(this + 0x3c,param_1 + 0xf);
      return uVar5;
    case 10: ;
      *(int *)(this + 0x50) = param_1[0x14];
      *(int *)(this + 0x54) = param_1[0x15];
      *(int *)(this + 0x58) = param_1[0x16];
      return uVar5;
    case 0xb: ;
      this[0x60] = *(undefined *)(param_1 + 0x18);
      return uVar5;
    case 0xc: ;
      this[0x61] = *(undefined *)((int)param_1 + 0x61);
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf7 */
uint F_00ee21c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee21c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ThinkState::vf19 */
uint F_00ee21e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee21e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ThinkState::vf21 */
uint F_00ee2200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2200u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf18 */
uint F_00ee2220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee2220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined1 * puVar2;
  undefined2 * puVar3;
  uint * puVar4;
  int iVar5;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar1;
  puVar4 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar4 = *(uint *)(param_1 + 4);
    return 8;
  case 1: ;
    *(undefined1 *)puVar4 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0x32;
    puVar2 = (undefined1 *)((int)param_3 + 7);
    iVar5 = 0;
    do {
      *puVar2 = *(undefined1 *)(iVar5 + 8 + param_1);
      iVar5 = iVar5 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar5 < 0x32);
    return (int)puVar2 - (int)param_3;
  case 2: ;
    *(undefined1 *)puVar4 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0x19;
    puVar2 = (undefined1 *)((int)param_3 + 7);
    iVar5 = 0;
    do {
      *puVar2 = *(undefined1 *)(iVar5 + 0x3a + param_1);
      iVar5 = iVar5 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar5 < 0x19);
    return (int)puVar2 - (int)param_3;
  case 3: ;
    *(undefined1 *)puVar4 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0x12;
    puVar3 = (undefined2 *)((int)param_3 + 7);
    iVar5 = 0;
    do {
      *puVar3 = *(undefined2 *)(param_1 + 0x54 + iVar5 * 2);
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar5 < 0x12);
    return (int)puVar3 - (int)param_3;
  case 4: ;
    *(undefined1 *)puVar4 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0x12;
    puVar3 = (undefined2 *)((int)param_3 + 7);
    iVar5 = 0;
    do {
      *puVar3 = *(undefined2 *)(param_1 + 0x78 + iVar5 * 2);
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar5 < 0x12);
    return (int)puVar3 - (int)param_3;
  case 5: ;
    *puVar4 = *(uint *)(param_1 + 0x9c);
    puVar4 = param_3 + 2;
  }
  return (int)puVar4 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf17 */
uint F_00ee2350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xee2350u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  case 1: ;
    uVar1 = F_00e68370(param_1 + 8,param_3,param_4,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_5);
  case 2: ;
    uVar1 = F_00e68370(param_1 + 0x3a,param_3,param_4,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_5);
  case 3: ;
    iVar2 = param_1 + 0x54;
    break;
  case 4: ;
    iVar2 = param_1 + 0x78;
    break;
  default: ;
    goto switchD_00ee2371_default;
  }
  uVar1 = F_00e685e0(iVar2,param_3,param_4,puVar3);
  puVar3 = (uint *)((int)puVar3 + uVar1);
switchD_00ee2371_default: ;
  return (int)puVar3 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf16 */
uint F_00ee2400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xee2400u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  case 1: ;
    uVar1 = F_00e68470(param_1 + 8,param_3,param_4,param_5,param_6,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_7);
  case 2: ;
    uVar1 = F_00e68470(param_1 + 0x3a,param_3,param_4,param_5,param_6,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_7);
  case 3: ;
    iVar2 = param_1 + 0x54;
    break;
  case 4: ;
    iVar2 = param_1 + 0x78;
    break;
  default: ;
    goto switchD_00ee2425_default;
  }
  uVar1 = F_00e686a0(iVar2,param_3,param_4,param_5,param_6,puVar3);
  puVar3 = (uint *)((int)puVar3 + uVar1);
switchD_00ee2425_default: ;
  return (int)puVar3 - (int)param_7;
}

/* ref: FUN_00ee24e0 */
uint F_00ee24e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee24e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12a949c));
  F_00ed9ed0(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf7 */
uint F_00ee2500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2500u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::FishingWork::vf19 */
uint F_00ee2520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2520u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::FishingWork::vf21 */
uint F_00ee2540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2540u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf18 */
uint F_00ee2560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee2560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  if (param_2 == 0) {
    *puVar2 = *(uint *)(param_1 + 4);
    puVar2 = param_3 + 2;
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf20 */
uint F_00ee2590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee2590u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if ((uVar1 == uVar2) && (puVar3 = param_2 + 1, param_1 == 0)) {
    *(uint *)(param_3 + 4) = *puVar3;
    puVar3 = param_2 + 2;
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00ee25d0 */
uint F_00ee25d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee25d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12a9564));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)((int)this + 4) = param_1[1];
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf7 */
uint F_00ee2630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2630u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf19 */
uint F_00ee2650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2650u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf21 */
uint F_00ee2670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2670u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf18 */
uint F_00ee2690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee2690u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *puVar2 = *(uint *)(param_1 + 8);
    param_3[2] = *(uint *)(param_1 + 0xc);
    return 0xc;
  case 1: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 0x10);
    return 6;
  case 2: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 0x12);
    return 6;
  case 3: ;
    *puVar2 = *(uint *)(param_1 + 0x14);
    return 8;
  case 4: ;
    *puVar2 = *(uint *)(param_1 + 0x18);
    return 8;
  case 5: ;
    *puVar2 = *(uint *)(param_1 + 0x1c);
    puVar2 = param_3 + 2;
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf20 */
uint F_00ee2750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee2750u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *(uint *)(param_3 + 8) = *puVar3;
      *(uint *)(param_3 + 0xc) = param_2[2];
      return 0xc;
    case 1: ;
      *(short *)(param_3 + 0x10) = (short)*puVar3;
      return 6;
    case 2: ;
      *(short *)(param_3 + 0x12) = (short)*puVar3;
      return 6;
    case 3: ;
      *(uint *)(param_3 + 0x14) = *puVar3;
      return 8;
    case 4: ;
      *(uint *)(param_3 + 0x18) = *puVar3;
      return 8;
    case 5: ;
      *(uint *)(param_3 + 0x1c) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00ee2830 */
uint F_00ee2830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12a962c));
  F_00eddc50(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf7 */
uint F_00ee2850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2850u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ItemBase::vf19 */
uint F_00ee2870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2870u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ItemBase::vf21 */
uint F_00ee2890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2890u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf18 */
uint F_00ee28b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee28b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  if (param_2 == 0) {
    *puVar2 = *(uint *)(param_1 + 4);
    puVar2 = param_3 + 2;
  }
  else {
    if (param_2 == 1) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136961c) + 0x3c))))(REFG(undefined * PTR32, 0x136961c),param_1 + 0x10,puVar2)
      ;
      return (int)puVar2 + (uVar1 - (int)param_3);
    }
    if (param_2 == 2) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x1369620) + 0x3c))))(REFG(undefined * PTR32, 0x1369620),param_1 + 0x60,puVar2)
      ;
      return (int)puVar2 + (uVar1 - (int)param_3);
    }
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf20 */
uint F_00ee2930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee2930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
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
    if (param_1 == 0) {
      *(uint *)(param_3 + 4) = *puVar3;
      puVar3 = param_2 + 2;
    }
    else {
      if (param_1 == 1) {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136961c) + 0x4c))))
                          (REFG(undefined * PTR32, 0x136961c),puVar3,param_3 + 0x10);
        return (int)puVar3 + (uVar2 - (int)param_2);
      }
      if (param_1 == 2) {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x1369620) + 0x4c))))
                          (REFG(undefined * PTR32, 0x1369620),puVar3,param_3 + 0x60);
        return (int)puVar3 + (uVar2 - (int)param_2);
      }
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00ee29c0 */
uint F_00ee29c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee29c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  code * pcVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12a96f4));
  F_01002590((int)this + 0x10);
  F_00f904a0((int)this + 0x60);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar5 == (short)uVar4) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x18)));
    *(int *)((int)this + 4) = param_1[1];
    (*pcVar1)((int)this + 0x10,param_1 + 4);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x60) + 0x18))))((int)this + 0x60,param_1 + 0x18);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf7 */
uint F_00ee2a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2a40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::PcWork::vf19 */
uint F_00ee2a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2a60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::PcWork::vf21 */
uint F_00ee2a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2a80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ee2aa0 */
uint F_00ee2aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12a983c));
  F_00ee1670(this,param_1);
  return (uint)this;
}

/* ref: FUN_00ee2ac0 */
uint F_00ee2ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12a93cc));
  F_00f67490((int)this + 0x3c);
  F_00ee1fa0(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf20 */
uint F_00ee2af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xee2af0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *(uint *)(param_3 + 4) = *puVar3;
      return 8;
    case 1: ;
      uVar2 = F_00e68510(puVar3,param_3 + 8,0x32);
      return (int)puVar3 + (uVar2 - (int)param_2);
    case 2: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0x3a,0x19);
      return (int)puVar3 + (uVar2 - (int)param_2);
    case 3: ;
      uVar2 = F_00e68f70(puVar3,param_3 + 0x54,0x12);
      return (int)puVar3 + (uVar2 - (int)param_2);
    case 4: ;
      uVar2 = F_00e68f70(puVar3,param_3 + 0x78,0x12);
      return (int)puVar3 + (uVar2 - (int)param_2);
    case 5: ;
      *(uint *)(param_3 + 0x9c) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: Application::Network::WorkDefinitions::ManagedPcWork::vf1 */
unsigned int F_00ee2bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xee2bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)(this + 4);
  if (piVar1 != (int *)0x0) {
    (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,0);
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    iVar2 = *((int *)GEN_TOP((this + (uVar3 - 0xa0))));
    *(undefined4 *)(this + -8) = 1;
    *(undefined4 *)(this + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + -0xa0;
    *(undefined * PTR32 *)(iVar2 + 0xc) = this + -0x10;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf20 */
byte F_00ee2c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee2c40u, gen_a0, gen_a1, 0u, 0u);
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
  char * PTR32 * ppcVar9;
  char * pcVar10;
  char * PTR32 * ppcVar11;
  char * PTR32 * ppcVar12;
  undefined * pWVar13;
  ulonglong uVar14;
  float fVar15;
  
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
  if (iVar5 != 0) goto LAB_00ee3018;
  pcVar4 = (char *)F_00fb9ad0(pcVar7,"\"content\":[");
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar4;
  if (pcVar4 == (char *)0x0) goto LAB_00ee3018;
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar4 + 0xb;
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
  if (pcVar7 == (char *)0x0) goto LAB_00ee3018;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar7 + 0xc;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),uVar3);
  (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x30));
  pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
  pcVar4 = (*(char * PTR32 *)(gen_frame + 0x30));
  while (pcVar4 != pcVar7) {
    cVar1 = *pcVar4;
    if (cVar1 == '\"') {
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
      if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar11) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
        iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
        if (ppcVar11 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
          ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        }
        if (ppcVar11 != (char * PTR32 *)0x0) {
          *ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[iVar5 >> 2];
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
      pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
    }
    else {
      if (cVar1 == '{') {
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
        pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
        iVar5 = 1;
        if (pcVar4 == pcVar10) goto LAB_00ee300b;
        do {
          if (*pcVar4 == '{') {
            iVar5 = iVar5 + 1;
          }
          else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 != pcVar10);
      }
      else {
        if (cVar1 != '[') goto LAB_00ee2e73;
        cVar1 = pcVar4[1];
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
        iVar5 = 1;
        if (cVar1 == '\"') {
LAB_00ee2e3b: ;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
        }
        else if (cVar1 == '[') {
          iVar5 = 2;
          goto LAB_00ee2e3b;
        }
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
        for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar10; pcVar4 = pcVar4 + 1) {
          if (*pcVar4 == '[') {
            iVar5 = iVar5 + 1;
          }
          else if ((*pcVar4 == ']') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
        }
      }
      ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
      if (iVar5 == 1) goto LAB_00ee300b;
    }
LAB_00ee2e73: ;
    pcVar4 = pcVar4 + 1;
    (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    uVar3 = (*(uint *)(gen_frame + 0x18));
  }
  pcVar7 = (char *)((int)ppcVar11 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
  if ((int)uVar3 < (int)pcVar7) {
LAB_00ee300b: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    }
    goto LAB_00ee3018;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar3);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x1c));
  (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  ppcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x1c));
  while (cVar1 != ']') {
    if (*pcVar7 == '\"') {
      (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7;
      if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar12) && (ppcVar11 <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
        iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)ppcVar11;
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x10))) {
          uVar3 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar11) >> 2;
          if (0x3ffffffe < uVar3) {
LAB_00ee2ff1: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar3 = uVar3 + 1;
          uVar8 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)ppcVar11) >> 2;
          if (uVar8 < uVar3) {
            if (0x3fffffff - (uVar8 >> 1) < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar3) {
              uVar8 = uVar3;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar8);
            ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        pcVar7 = (*(char * PTR32 *)(gen_frame + 0x30));
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = ppcVar11[iVar5 >> 2];
        }
      }
      else {
        if (ppcVar12 == ppcVar9) {
          uVar3 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar11) >> 2;
          if (0x3ffffffe < uVar3) goto LAB_00ee2ff1;
          uVar3 = uVar3 + 1;
          uVar8 = (int)ppcVar9 - (int)((int)(uintptr_t)ppcVar11) >> 2;
          if (uVar8 < uVar3) {
            if (0x3fffffff - (uVar8 >> 1) < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar3) {
              uVar8 = uVar3;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar8);
            ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = pcVar7;
        }
      }
      ppcVar12 = ppcVar12 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = ppcVar12;
      pcVar7 = (char *)F_00c51da0(pcVar7 + 1,0x22);
      ppcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
      if (pcVar7 == (char *)0x0) {
        if (ppcVar11 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar11);
        }
        goto LAB_00ee300b;
      }
    }
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
    (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7;
  }
  pcVar7 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)ppcVar11) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7;
  if ((int)(*(uint *)(gen_frame + 0x18)) < (int)pcVar7) {
    if (ppcVar11 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar11);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00ee3018;
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
    goto LAB_00ee3018;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
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
      goto LAB_00ee3018;
    }
    uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
    this[4] = SUB81(uVar14,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00ee3199: ;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00ee314f;
      fVar15 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(float *)(this + 8) = fVar15;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00ee314f;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(int *)(this + 0xc) = (int)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar7 == (char *)0x0) {
LAB_00ee3305: ;
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
      F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
      pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
      pcVar7 = (*(char * PTR32 *)(gen_frame + 0x30));
      if (pcVar4 != (char *)0x0) {
        pcVar10 = (char *)0x0;
        if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
          do {
            if (pcVar4 == ppcVar11[(int)pcVar10]) break;
            pcVar10 = pcVar10 + 1;
          } while (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x30)));
        }
        if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) {
          if (ppcVar11 != (char * PTR32 *)0x0) {
            F_00406ad0(ppcVar11);
          }
          goto joined_r0x00ee32c8;
        }
        this[0x20] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10] != '0');
      }
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,6);
      F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
      pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
      if (pcVar4 != (char *)0x0) {
        pcVar10 = (char *)0x0;
        if (pcVar7 != (char *)0x0) {
          do {
            if (pcVar4 == ppcVar11[(int)pcVar10]) break;
            pcVar10 = pcVar10 + 1;
          } while (pcVar10 < pcVar7);
        }
        if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00ee314f;
        this[0x21] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10] != '0');
      }
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,7);
      F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
      pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
      ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
      if (pcVar4 == (char *)0x0) {
LAB_00ee345e: ;
        if (ppcVar11 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar11);
        }
        if (ppcVar12 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar12);
        }
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 1;
      }
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x34))) {
        uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
        *(ulonglong *)(this + 0x28) = uVar14;
        goto LAB_00ee345e;
      }
      goto LAB_00ee314f;
    }
    pcVar4 = (char *)0x0;
    if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
      do {
        if (pcVar7 == ppcVar11[(int)pcVar4]) break;
        pcVar4 = pcVar4 + 1;
      } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x30)));
    }
    if (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
      pWVar13 = this + 0x10;
      (*(uint *)(gen_frame + 0x18)) = 4;
      do {
        fVar15 = F_00e50660(pcVar7);
        *(float *)pWVar13 = fVar15;
        uVar8 = F_00c51da0(pcVar7,0x2c);
        pWVar13 = pWVar13 + 4;
        uVar3 = (*(uint *)(gen_frame + 0x18)) - 1;
        (*(uint *)(gen_frame + 0x18)) = uVar3;
        pcVar7 = (char *)(uVar8 + 2);
      } while (uVar3 != 0);
      goto LAB_00ee3305;
    }
    if (ppcVar11 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar11);
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
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      this[5] = SUB81(uVar14,0);
      goto LAB_00ee3199;
    }
LAB_00ee314f: ;
    if (ppcVar11 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar11);
    }
  }
joined_r0x00ee32c8: ;
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
LAB_00ee3018: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf20 */
byte F_00ee3490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee3490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pAVar1;
  char cVar2;
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
  undefined * pAVar15;
  ulonglong uVar16;
  float fVar17;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  pcVar8 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x38));
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  iVar6 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar6 != 0) goto LAB_00ee3867;
  pcVar5 = (char *)F_00fb9ad0(pcVar8,"\"content\":[");
  ((char * PTR32 *)(gen_frame + 0x1c))[0] = pcVar5;
  if (pcVar5 == (char *)0x0) goto LAB_00ee3867;
  ((char * PTR32 *)(gen_frame + 0x1c))[0] = pcVar5 + 0xb;
  pcVar5 = param_1;
  do {
    pcVar12 = pcVar5;
    pcVar5 = pcVar12 + 1;
  } while (*pcVar12 != '\0');
  iVar6 = 1;
  for (pcVar5 = pcVar8; pcVar7 = pcVar12 + -1, pcVar5 < pcVar12 + -1; pcVar5 = pcVar5 + 1) {
    if (*pcVar5 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar5 == '}') && (iVar6 = iVar6 + -1, pcVar7 = pcVar5, iVar6 == 0)) break;
  }
  pcVar8 = (char *)F_00e50750(pcVar8,"\"memberid\":[",pcVar7);
  if (pcVar8 == (char *)0x0) goto LAB_00ee3867;
  ((char * PTR32 *)(gen_frame + 0x1c))[1] = pcVar8 + 0xc;
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (char * PTR32 *)0x0;
  F_00e69310(((char * PTR32 *)(gen_frame + 0x1c)) + 2,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x34)) = ((char * PTR32 *)(gen_frame + 0x1c))[0];
  pcVar5 = ((char * PTR32 *)(gen_frame + 0x1c))[0];
  pcVar12 = ((char * PTR32 *)(gen_frame + 0x1c))[1];
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
  while (pcVar5 != pcVar8) {
    cVar2 = *pcVar5;
    if (cVar2 == '\"') {
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
      if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
          F_00e693e0(((char * PTR32 *)(gen_frame + 0x1c)) + 2,1);
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
        }
        if (ppcVar13 != (char * PTR32 *)0x0) {
          *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
          F_00e693e0(((char * PTR32 *)(gen_frame + 0x1c)) + 2,1);
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
        }
        if (ppcVar13 != (char * PTR32 *)0x0) {
          *ppcVar13 = pcVar5;
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = ppcVar13;
      pcVar5 = (char *)F_00c51da0(pcVar5,0x22);
      pcVar12 = ((char * PTR32 *)(gen_frame + 0x1c))[1];
    }
    else {
      if (cVar2 == '{') {
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
        F_00e695d0(((char * PTR32 *)(gen_frame + 0x1c)) + 2,&(*(char * PTR32 *)(gen_frame + 0x34)));
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
        iVar6 = 1;
        if (pcVar5 == pcVar12) goto LAB_00ee385a;
        do {
          if (*pcVar5 == '{') {
            iVar6 = iVar6 + 1;
          }
          else if ((*pcVar5 == '}') && (iVar6 = iVar6 + -1, iVar6 == 0)) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 != pcVar12);
      }
      else {
        if (cVar2 != '[') goto LAB_00ee36c3;
        cVar2 = pcVar5[1];
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5 + 1;
        iVar6 = 1;
        if (cVar2 == '\"') {
LAB_00ee368b: ;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5 + 2;
        }
        else if (cVar2 == '[') {
          iVar6 = 2;
          goto LAB_00ee368b;
        }
        F_00e695d0(((char * PTR32 *)(gen_frame + 0x1c)) + 2,&(*(char * PTR32 *)(gen_frame + 0x34)));
        for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar5 != pcVar12; pcVar5 = pcVar5 + 1) {
          if (*pcVar5 == '[') {
            iVar6 = iVar6 + 1;
          }
          else if ((*pcVar5 == ']') && (iVar6 = iVar6 + -1, iVar6 == 0)) break;
        }
      }
      ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
      if (iVar6 == 1) goto LAB_00ee385a;
    }
LAB_00ee36c3: ;
    pcVar5 = pcVar5 + 1;
    (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
  }
  pcVar8 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
  if ((int)uVar4 < (int)pcVar8) {
LAB_00ee385a: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
    }
    goto LAB_00ee3867;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar4);
  cVar2 = *((char * PTR32 *)(gen_frame + 0x1c))[1];
  ((char * PTR32 *)(gen_frame + 0x1c))[0] = ((char * PTR32 *)(gen_frame + 0x1c))[1];
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
  pAVar15 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  pcVar8 = ((char * PTR32 *)(gen_frame + 0x1c))[1];
  while ((*(undefined * PTR32 *)(gen_frame + 0x18)) = pAVar15, ((char * PTR32 *)(gen_frame + 0x1c))[0] = pcVar8, cVar2 != ']') {
    if (*pcVar8 == '\"') {
      if ((((char * PTR32 *)(gen_frame + 0x1c)) < ppcVar14) && (ppcVar13 <= ((char * PTR32 *)(gen_frame + 0x1c)))) {
        iVar6 = (int)((char * PTR32 *)(gen_frame + 0x1c)) - (int)ppcVar13;
        if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x10))) {
          uVar9 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) {
LAB_00ee3840: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar9 = uVar9 + 1;
          uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
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
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar10);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        pcVar8 = ((char * PTR32 *)(gen_frame + 0x1c))[0];
        if (ppcVar14 != (char * PTR32 *)0x0) {
          *ppcVar14 = ppcVar13[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar14 == ppcVar11) {
          uVar9 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_00ee3840;
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
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar10);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (ppcVar14 != (char * PTR32 *)0x0) {
          *ppcVar14 = pcVar8;
        }
      }
      ppcVar14 = ppcVar14 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = ppcVar14;
      pcVar8 = (char *)F_00c51da0(pcVar8 + 1,0x22);
      ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
      if (pcVar8 == (char *)0x0) {
        if (ppcVar13 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar13);
        }
        goto LAB_00ee385a;
      }
    }
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar8;
    ((char * PTR32 *)(gen_frame + 0x1c))[0] = pcVar8;
    pAVar15 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  }
  pcVar8 = (char *)((int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2);
  if ((int)uVar4 < (int)pcVar8) {
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00ee3867;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x34)) != pcVar8) {
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00ee3867;
  }
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pAVar15 + 4))(pAVar15)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
  if (pcVar5 != (char *)0x0) {
    pcVar12 = (char *)0x0;
    if (pcVar8 != (char *)0x0) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar12) {
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00ee3867;
    }
    uVar16 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar12]);
    *(int *)(pAVar15 + 4) = (int)uVar16;
  }
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pAVar15 + 4))(pAVar15)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
  if (pcVar5 == (char *)0x0) {
LAB_00ee39e9: ;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pAVar15 + 4))(pAVar15)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar12 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar13[(int)pcVar12]) break;
          pcVar12 = pcVar12 + 1;
        } while (pcVar12 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar12) goto LAB_00ee399f;
      uVar16 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar12]);
      *(int *)(pAVar15 + 0xc) = (int)uVar16;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pAVar15 + 4))(pAVar15)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar12 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar13[(int)pcVar12]) break;
          pcVar12 = pcVar12 + 1;
        } while (pcVar12 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar12) goto LAB_00ee399f;
      uVar16 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar12]);
      *(int *)(pAVar15 + 0x10) = (int)uVar16;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pAVar15 + 4))(pAVar15)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar12 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar13[(int)pcVar12]) break;
          pcVar12 = pcVar12 + 1;
        } while (pcVar12 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar12) goto LAB_00ee399f;
      fVar17 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar12]);
      *(float *)(pAVar15 + 0x14) = fVar17;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pAVar15 + 4))(pAVar15)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar12 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar13[(int)pcVar12]) break;
          pcVar12 = pcVar12 + 1;
        } while (pcVar12 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar12) goto LAB_00ee399f;
      uVar16 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar12]);
      pAVar15[0x18] = SUB81(uVar16,0);
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pAVar15 + 4))(pAVar15)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,6);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x1c))[1],((char *)(gen_frame + 0x38)));
    if (pcVar5 == (char *)0x0) {
LAB_00ee3c1e: ;
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 1;
    }
    pcVar12 = (char *)0x0;
    if (pcVar8 != (char *)0x0) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if (pcVar12 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar12];
      pAVar15 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x1c;
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x10;
      do {
        uVar16 = F_00e50570(pcVar8);
        *(int *)pAVar15 = (int)uVar16;
        uVar4 = F_00c51da0(pcVar8,0x2c);
        pAVar15 = pAVar15 + 4;
        pAVar1 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + -1;
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = pAVar1;
        pcVar8 = (char *)(uVar4 + 2);
      } while (pAVar1 != (undefined *)0x0);
      goto LAB_00ee3c1e;
    }
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
  }
  else {
    pcVar12 = (char *)0x0;
    if (pcVar8 != (char *)0x0) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if (pcVar12 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      uVar16 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar12]);
      pAVar15[8] = SUB81(uVar16,0);
      goto LAB_00ee39e9;
    }
LAB_00ee399f: ;
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
LAB_00ee3867: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf20 */
byte F_00ee3c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee3c50u, gen_a0, gen_a1, 0u, 0u);
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
  uint uVar10;
  char * pcVar11;
  uint uVar12;
  char * PTR32 * ppcVar13;
  char * PTR32 * ppcVar14;
  char * PTR32 * ppcVar15;
  undefined * pTVar16;
  ulonglong uVar17;
  float fVar18;
  
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
  if (uVar4 == 0) goto LAB_00ee4761;
  pcVar5 = (char *)(uVar4 + 0xb);
  pcVar11 = param_1;
  do {
    pcVar7 = pcVar11;
    pcVar11 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar6 = 1;
  for (pcVar11 = pcVar9; pcVar8 = pcVar7 + -1, pcVar11 < pcVar7 + -1; pcVar11 = pcVar11 + 1) {
    if (*pcVar11 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar11 == '}') && (iVar6 = iVar6 + -1, pcVar8 = pcVar11, iVar6 == 0)) break;
  }
  pcVar9 = (char *)F_00e50750(pcVar9,"\"memberid\":[",pcVar8);
  if (pcVar9 == (char *)0x0) goto LAB_00ee4761;
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar9 + 0xc;
  pcVar2 = *(gen_code32 *)(*(int *)this + 4);
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar9;
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),uVar4);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x30));
  ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
  if (pcVar5 != pcVar9) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar15) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
          if (ppcVar15 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
            ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          }
          if (ppcVar15 != (char * PTR32 *)0x0) {
            *ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar15 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
            ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          }
          if (ppcVar15 != (char * PTR32 *)0x0) {
            *ppcVar15 = pcVar5;
          }
        }
        ppcVar15 = ppcVar15 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = ppcVar15;
        pcVar5 = (char *)F_00c51da0(pcVar5,0x22);
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x30));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar11) goto LAB_00ee436c;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 + -1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar11);
        }
        else {
          if (cVar1 != '[') goto LAB_00ee3e93;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_00ee3e5b: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_00ee3e5b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 + -1, iVar6 == 0)) break;
          }
        }
        ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        if (iVar6 == 1) goto LAB_00ee436c;
      }
LAB_00ee3e93: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x1c)));
  }
  pcVar9 = (char *)((int)ppcVar15 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00ee4761;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x30));
  (*(char * PTR32 *)(gen_frame + 0x1c)) = (*(char * PTR32 *)(gen_frame + 0x30));
  ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x30));
  while (cVar1 != ']') {
    if (*pcVar9 == '\"') {
      (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar9;
      if ((&(*(char * PTR32 *)(gen_frame + 0x1c)) < ppcVar14) && (ppcVar15 <= &(*(char * PTR32 *)(gen_frame + 0x1c)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x1c)) - (int)ppcVar15;
        if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar10 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar15) >> 2;
          if (0x3ffffffe < uVar10) {
LAB_00ee4037: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar15) >> 2;
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
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar12);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
            ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        pcVar9 = (*(char * PTR32 *)(gen_frame + 0x1c));
        if (ppcVar14 != (char * PTR32 *)0x0) {
          *ppcVar14 = ppcVar15[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar14 == ppcVar13) {
          uVar10 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar15) >> 2;
          if (0x3ffffffe < uVar10) goto LAB_00ee4037;
          uVar10 = uVar10 + 1;
          uVar12 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar15) >> 2;
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
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar12);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
            ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (ppcVar14 != (char * PTR32 *)0x0) {
          *ppcVar14 = pcVar9;
        }
      }
      ppcVar14 = ppcVar14 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppcVar14;
      pcVar9 = (char *)F_00c51da0(pcVar9 + 1,0x22);
      ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
      if (pcVar9 == (char *)0x0) {
        if (ppcVar15 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar15);
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00ee4761;
      }
    }
    pcVar9 = pcVar9 + 1;
    cVar1 = *pcVar9;
    (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar9;
  }
  pcVar9 = (char *)((int)ppcVar14 - (int)((int)(uintptr_t)ppcVar15) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
    if (ppcVar15 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar15);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00ee4761;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x34)) != pcVar9) {
    if (ppcVar15 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar15);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00ee4761;
  }
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
  if (pcVar5 == (char *)0x0) {
LAB_00ee4119: ;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar15[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar9);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto joined_r0x00ee4462;
      uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      *(int *)(this + 8) = (int)uVar17;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar15[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar9);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto joined_r0x00ee4462;
      uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      *(int *)(this + 0xc) = (int)uVar17;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar15[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar9);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto joined_r0x00ee4462;
      uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      *(int *)(this + 0x10) = (int)uVar17;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar5 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x1c)) != (char *)0x0) {
        do {
          if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar5]) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x1c)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar5) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00ee4761;
      }
      pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar5];
      pTVar16 = this + 0x20;
      iVar6 = 3;
      do {
        fVar18 = F_00e50660(pcVar9);
        *(float *)pTVar16 = fVar18;
        uVar4 = F_00c51da0(pcVar9,0x2c);
        pTVar16 = pTVar16 + 4;
        iVar6 = iVar6 + -1;
        pcVar9 = (char *)(uVar4 + 2);
      } while (iVar6 != 0);
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    pcVar9 = (*(char * PTR32 *)(gen_frame + 0x1c));
    ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x1c)) != (char *)0x0) {
        do {
          if (pcVar5 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x1c)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
        }
LAB_00ee436c: ;
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00ee4761;
      }
      fVar18 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      *(float *)(this + 0x30) = fVar18;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,6);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar15[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar9);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto joined_r0x00ee4462;
      this[0x34] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11] != '0');
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,7);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar15[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar9);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto joined_r0x00ee4462;
      uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      this[0x35] = SUB81(uVar17,0);
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,8);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar15[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar9);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto joined_r0x00ee4462;
      uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      *(int *)(this + 0x38) = (int)uVar17;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,9);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar15[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar9);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto joined_r0x00ee4462;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x3c) + 0x50))))(this + 0x3c,(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      if ((char)uVar4 == '\0') {
        if (ppcVar15 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar15);
        }
        if (ppcVar14 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar14);
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00ee4761;
      }
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,10);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar5 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x1c)) != (char *)0x0) {
        do {
          if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar5]) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x1c)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar5) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00ee4761;
      }
      pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar5];
      pTVar16 = this + 0x50;
      iVar6 = 3;
      do {
        fVar18 = F_00e50660(pcVar9);
        *(float *)pTVar16 = fVar18;
        uVar4 = F_00c51da0(pcVar9,0x2c);
        pTVar16 = pTVar16 + 4;
        iVar6 = iVar6 + -1;
        pcVar9 = (char *)(uVar4 + 2);
      } while (iVar6 != 0);
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xb);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    pcVar9 = (*(char * PTR32 *)(gen_frame + 0x1c));
    ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x1c)) != (char *)0x0) {
        do {
          if (pcVar5 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x1c)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00ee4761;
      }
      this[0x60] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11] != '0');
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xc);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x30)),((char *)(gen_frame + 0x38)));
    ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
    if (pcVar5 == (char *)0x0) {
LAB_00ee478d: ;
      if (ppcVar15 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar15);
      }
      if (ppcVar14 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar14);
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 1;
    }
    pcVar11 = (char *)0x0;
    if (pcVar9 != (char *)0x0) {
      do {
        if (pcVar5 == ppcVar15[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      this[0x61] = SUB81(uVar17,0);
      goto LAB_00ee478d;
    }
  }
  else {
    pcVar11 = (char *)0x0;
    if (pcVar9 != (char *)0x0) {
      do {
        if (pcVar5 == ppcVar15[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      this[4] = SUB81(uVar17,0);
      goto LAB_00ee4119;
    }
  }
joined_r0x00ee4462: ;
  if (ppcVar15 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar15);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
  }
LAB_00ee4761: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf20 */
byte F_00ee47c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee47c0u, gen_a0, gen_a1, 0u, 0u);
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
  undefined * pFVar14;
  ulonglong uVar15;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
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
  if (iVar5 == 0) {
    pcVar4 = (char *)F_00fb9ad0(pcVar7,"\"content\":[");
    (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar4;
    if (pcVar4 != (char *)0x0) {
      (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar4 + 0xb;
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
      if (pcVar7 != (char *)0x0) {
        (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar7 + 0xc;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (char * PTR32 *)0x0;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = (char * PTR32 *)0x0;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
        F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)),uVar3);
        (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x30));
        ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x2c));
        pcVar4 = (*(char * PTR32 *)(gen_frame + 0x30));
        while (pcVar4 != pcVar7) {
          cVar1 = *pcVar4;
          if (cVar1 == '\"') {
            pcVar4 = pcVar4 + 1;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
            if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar12) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
              iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
              if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)),1);
                ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
              }
              if (ppcVar12 != (char * PTR32 *)0x0) {
                *ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[iVar5 >> 2];
              }
            }
            else {
              if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) {
                F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)),1);
                ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
              }
              if (ppcVar12 != (char * PTR32 *)0x0) {
                *ppcVar12 = pcVar4;
              }
            }
            ppcVar12 = ppcVar12 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ppcVar12;
            pcVar4 = (char *)F_00c51da0(pcVar4,0x22);
            pcVar11 = (*(char * PTR32 *)(gen_frame + 0x2c));
          }
          else {
            if (cVar1 == '{') {
              (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)),&(*(char * PTR32 *)(gen_frame + 0x34)));
              pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
              iVar5 = 1;
              if (pcVar4 == pcVar11) goto LAB_00ee4b8b;
              do {
                if (*pcVar4 == '{') {
                  iVar5 = iVar5 + 1;
                }
                else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
                pcVar4 = pcVar4 + 1;
              } while (pcVar4 != pcVar11);
            }
            else {
              if (cVar1 != '[') goto LAB_00ee49f3;
              cVar1 = pcVar4[1];
              (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
              iVar5 = 1;
              if (cVar1 == '\"') {
LAB_00ee49bb: ;
                (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
              }
              else if (cVar1 == '[') {
                iVar5 = 2;
                goto LAB_00ee49bb;
              }
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)),&(*(char * PTR32 *)(gen_frame + 0x34)));
              for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar11; pcVar4 = pcVar4 + 1) {
                if (*pcVar4 == '[') {
                  iVar5 = iVar5 + 1;
                }
                else if ((*pcVar4 == ']') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
              }
            }
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
            if (iVar5 == 1) goto LAB_00ee4b8b;
          }
LAB_00ee49f3: ;
          pcVar4 = pcVar4 + 1;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        }
        pcVar7 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) >> 2);
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
        if ((int)uVar3 < (int)pcVar7) {
LAB_00ee4b8b: ;
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
          }
        }
        else {
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0x0;
          (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
          F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar3);
          cVar1 = *(*(char * PTR32 *)(gen_frame + 0x2c));
          (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x2c));
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
          pFVar14 = (*(undefined * PTR32 *)(gen_frame + 0x18));
          pcVar7 = (*(char * PTR32 *)(gen_frame + 0x2c));
          while ((*(undefined * PTR32 *)(gen_frame + 0x18)) = pFVar14, cVar1 != ']') {
            if (*pcVar7 == '\"') {
              (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7;
              if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
                iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)ppcVar12;
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x10))) {
                  uVar8 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar8) {
LAB_00ee4b71: ;
                    
                    F_00c4579a("vector<T> too long");
                  }
                  uVar8 = uVar8 + 1;
                  uVar9 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
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
                    F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar9);
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
                  }
                }
                pcVar7 = (*(char * PTR32 *)(gen_frame + 0x30));
                if (ppcVar13 != (char * PTR32 *)0x0) {
                  *ppcVar13 = ppcVar12[iVar5 >> 2];
                }
              }
              else {
                if (ppcVar13 == ppcVar10) {
                  uVar8 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar8) goto LAB_00ee4b71;
                  uVar8 = uVar8 + 1;
                  uVar9 = (int)ppcVar10 - (int)((int)(uintptr_t)ppcVar12) >> 2;
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
                    F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar9);
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
                  }
                }
                if (ppcVar13 != (char * PTR32 *)0x0) {
                  *ppcVar13 = pcVar7;
                }
              }
              ppcVar13 = ppcVar13 + 1;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = ppcVar13;
              pcVar7 = (char *)F_00c51da0(pcVar7 + 1,0x22);
              ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
              if (pcVar7 == (char *)0x0) {
                if (ppcVar12 != (char * PTR32 *)0x0) {
                  F_00406ad0(ppcVar12);
                }
                goto LAB_00ee4b8b;
              }
            }
            pcVar7 = pcVar7 + 1;
            cVar1 = *pcVar7;
            (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7;
            pFVar14 = (*(undefined * PTR32 *)(gen_frame + 0x18));
          }
          pcVar7 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2);
          (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7;
          if ((int)uVar3 < (int)pcVar7) {
            if (ppcVar12 != (char * PTR32 *)0x0) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
              F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
              return 0;
            }
          }
          else {
            if ((*(char * PTR32 *)(gen_frame + 0x34)) == pcVar7) {
              piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pFVar14 + 4))(pFVar14)));
              uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
              F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
              pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
              if (pcVar4 != (char *)0x0) {
                pcVar11 = (char *)0x0;
                if (pcVar7 != (char *)0x0) {
                  do {
                    if (pcVar4 == ppcVar12[(int)pcVar11]) break;
                    pcVar11 = pcVar11 + 1;
                  } while (pcVar11 < pcVar7);
                }
                if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) {
                  if (ppcVar12 != (char * PTR32 *)0x0) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
                    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
                    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
                    return 0;
                  }
                  goto LAB_00ee4b98;
                }
                uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar11]);
                *(int *)(pFVar14 + 4) = (int)uVar15;
              }
              piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pFVar14 + 4))(pFVar14)));
              uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
              F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
              pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
              if (pcVar7 != (char *)0x0) {
                pcVar4 = (char *)0x0;
                if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
                  do {
                    if (pcVar7 == ppcVar12[(int)pcVar4]) break;
                    pcVar4 = pcVar4 + 1;
                  } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x30)));
                }
                if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
                  if (ppcVar12 != (char * PTR32 *)0x0) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
                    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
                    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
                    return 0;
                  }
                  goto LAB_00ee4b98;
                }
                pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar4];
                iVar5 = 0;
                do {
                  uVar15 = F_00e50570(pcVar7);
                  (*(undefined * PTR32 *)(gen_frame + 0x18))[iVar5 + 8] = SUB81(uVar15,0);
                  uVar3 = F_00c51da0(pcVar7,0x2c);
                  iVar5 = iVar5 + 1;
                  pcVar7 = (char *)(uVar3 + 2);
                } while (iVar5 < 0x32);
              }
              piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4))((*(undefined * PTR32 *)(gen_frame + 0x18)))));
              uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
              F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
              pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
              if (pcVar7 != (char *)0x0) {
                pcVar4 = (char *)0x0;
                if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
                  do {
                    if (pcVar7 == ppcVar12[(int)pcVar4]) break;
                    pcVar4 = pcVar4 + 1;
                  } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x30)));
                }
                if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
                  if (ppcVar12 != (char * PTR32 *)0x0) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
                    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
                    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
                    return 0;
                  }
                  goto LAB_00ee4b98;
                }
                pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar4];
                iVar5 = 0;
                do {
                  uVar15 = F_00e50570(pcVar7);
                  (*(undefined * PTR32 *)(gen_frame + 0x18))[iVar5 + 0x3a] = SUB81(uVar15,0);
                  uVar3 = F_00c51da0(pcVar7,0x2c);
                  iVar5 = iVar5 + 1;
                  pcVar7 = (char *)(uVar3 + 2);
                } while (iVar5 < 0x19);
              }
              piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4))((*(undefined * PTR32 *)(gen_frame + 0x18)))));
              uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
              F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
              pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
              if (pcVar7 != (char *)0x0) {
                pcVar4 = (char *)0x0;
                if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
                  pcVar4 = (char *)0x0;
                  do {
                    if (pcVar7 == ppcVar12[(int)pcVar4]) break;
                    pcVar4 = pcVar4 + 1;
                  } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x30)));
                }
                if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
                  if (ppcVar12 != (char * PTR32 *)0x0) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
                    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
                    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
                    return 0;
                  }
                  goto LAB_00ee4b98;
                }
                pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar4];
                pFVar14 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x54;
                iVar5 = 0x12;
                do {
                  uVar15 = F_00e50570(pcVar7);
                  *(short *)pFVar14 = (short)uVar15;
                  uVar3 = F_00c51da0(pcVar7,0x2c);
                  pFVar14 = pFVar14 + 2;
                  iVar5 = iVar5 + -1;
                  pcVar7 = (char *)(uVar3 + 2);
                } while (iVar5 != 0);
              }
              piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4))((*(undefined * PTR32 *)(gen_frame + 0x18)))));
              uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
              F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
              pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
              if (pcVar7 != (char *)0x0) {
                pcVar4 = (char *)0x0;
                if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
                  pcVar4 = (char *)0x0;
                  do {
                    if (pcVar7 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))[(int)pcVar4]) break;
                    pcVar4 = pcVar4 + 1;
                  } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x30)));
                }
                if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) != (char * PTR32 *)0x0) {
                    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
                    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
                    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
                    return 0;
                  }
                  goto LAB_00ee4b98;
                }
                pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar4];
                pFVar14 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x78;
                iVar5 = 0x12;
                do {
                  uVar15 = F_00e50570(pcVar7);
                  *(short *)pFVar14 = (short)uVar15;
                  uVar3 = F_00c51da0(pcVar7,0x2c);
                  pFVar14 = pFVar14 + 2;
                  iVar5 = iVar5 + -1;
                  pcVar7 = (char *)(uVar3 + 2);
                } while (iVar5 != 0);
              }
              pFVar14 = (*(undefined * PTR32 *)(gen_frame + 0x18));
              piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4))((*(undefined * PTR32 *)(gen_frame + 0x18)))));
              uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
              F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
              pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
              ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
              ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
              if (pcVar7 != (char *)0x0) {
                pcVar4 = (char *)0x0;
                if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
                  do {
                    if (pcVar7 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))[(int)pcVar4]) break;
                    pcVar4 = pcVar4 + 1;
                  } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x30)));
                }
                if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) != (char * PTR32 *)0x0) {
                    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
                    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
                    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
                    return 0;
                  }
                  goto LAB_00ee4b98;
                }
                uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar4]);
                *(int *)(pFVar14 + 0x9c) = (int)uVar15;
              }
              if (ppcVar12 != (char * PTR32 *)0x0) {
                F_00406ad0(ppcVar12);
              }
              if (ppcVar13 != (char * PTR32 *)0x0) {
                F_00406ad0(ppcVar13);
              }
              F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
              return 1;
            }
            if (ppcVar12 != (char * PTR32 *)0x0) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
              F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
              return 0;
            }
          }
        }
      }
    }
  }
LAB_00ee4b98: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf20 */
byte F_00ee5040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee5040u, gen_a0, gen_a1, 0u, 0u);
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
  if (uVar3 != 0) {
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
    if (pcVar8 != (char *)0x0) {
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
              if (pcVar4 == pcVar10) goto LAB_00ee54e5;
              do {
                if (*pcVar4 == '{') {
                  iVar5 = iVar5 + 1;
                }
                else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
                pcVar4 = pcVar4 + 1;
              } while (pcVar4 != pcVar10);
            }
            else {
              if (cVar1 != '[') goto LAB_00ee5283;
              cVar1 = pcVar4[1];
              (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
              iVar5 = 1;
              if (cVar1 == '\"') {
LAB_00ee524b: ;
                (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
              }
              else if (cVar1 == '[') {
                iVar5 = 2;
                goto LAB_00ee524b;
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
            if (iVar5 == 1) goto LAB_00ee54e5;
          }
LAB_00ee5283: ;
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
LAB_00ee5407: ;
                    
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
                if (0x3ffffffe < uVar9) goto LAB_00ee5407;
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
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
                F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
                F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
                return 0;
              }
              goto LAB_00ee54f2;
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
            F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
            return 0;
          }
          goto LAB_00ee54f2;
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
          goto LAB_00ee54f2;
        }
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
        F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
        pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
        ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        if (pcVar4 == (char *)0x0) {
LAB_00ee551e: ;
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
          *(int *)(this + 4) = (int)uVar14;
          goto LAB_00ee551e;
        }
        if (ppcVar13 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar13);
        }
      }
LAB_00ee54e5: ;
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      }
    }
  }
LAB_00ee54f2: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf20 */
byte F_00ee5550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee5550u, gen_a0, gen_a1, 0u, 0u);
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
  if (uVar3 == 0) goto LAB_00ee5c02;
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
  if (pcVar8 == (char *)0x0) goto LAB_00ee5c02;
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
          if (pcVar4 == pcVar10) goto LAB_00ee5930;
          do {
            if (*pcVar4 == '{') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 != pcVar10);
        }
        else {
          if (cVar1 != '[') goto LAB_00ee5793;
          cVar1 = pcVar4[1];
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
          iVar5 = 1;
          if (cVar1 == '\"') {
LAB_00ee575b: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
          }
          else if (cVar1 == '[') {
            iVar5 = 2;
            goto LAB_00ee575b;
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
        if (iVar5 == 1) goto LAB_00ee5930;
      }
LAB_00ee5793: ;
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x20)));
  }
  pcVar8 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  if ((int)uVar3 < (int)pcVar8) {
LAB_00ee5930: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00ee5c02;
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
LAB_00ee5916: ;
                    
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
          if (0x3ffffffe < uVar9) goto LAB_00ee5916;
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
        goto LAB_00ee5930;
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
    goto LAB_00ee5c02;
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
    goto LAB_00ee5c02;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00ee59fd: ;
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
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_00ee5be3;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(short *)(this + 0x10) = (short)uVar14;
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
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_00ee5be3;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(short *)(this + 0x12) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
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
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_00ee5be3;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 0x14) = (int)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
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
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_00ee5be3;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 0x18) = (int)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
    if (pcVar4 == (char *)0x0) {
LAB_00ee5c2e: ;
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
      *(int *)(this + 0x1c) = (int)uVar14;
      goto LAB_00ee5c2e;
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
      *(ulonglong *)(this + 8) = uVar14;
      goto LAB_00ee59fd;
    }
  }
LAB_00ee5be3: ;
  if (ppcVar13 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar13);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
  }
LAB_00ee5c02: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf20 */
byte F_00ee5c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee5c60u, gen_a0, gen_a1, 0u, 0u);
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
  if (uVar3 == 0) goto LAB_00ee6265;
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
  if (pcVar8 == (char *)0x0) goto LAB_00ee6265;
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
          if (pcVar4 == pcVar10) goto LAB_00ee6040;
          do {
            if (*pcVar4 == '{') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 != pcVar10);
        }
        else {
          if (cVar1 != '[') goto LAB_00ee5ea3;
          cVar1 = pcVar4[1];
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
          iVar5 = 1;
          if (cVar1 == '\"') {
LAB_00ee5e6b: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
          }
          else if (cVar1 == '[') {
            iVar5 = 2;
            goto LAB_00ee5e6b;
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
        if (iVar5 == 1) goto LAB_00ee6040;
      }
LAB_00ee5ea3: ;
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x20)));
  }
  pcVar8 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  if ((int)uVar3 < (int)pcVar8) {
LAB_00ee6040: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00ee6265;
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
LAB_00ee6026: ;
                    
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
          if (0x3ffffffe < uVar9) goto LAB_00ee6026;
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
        goto LAB_00ee6040;
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
    goto LAB_00ee6265;
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
    goto LAB_00ee6265;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00ee610a: ;
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
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_00ee6201;
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x50))))(this + 0x10,(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      if ((char)uVar3 == '\0') {
        if (ppcVar13 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar13);
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00ee6265;
      }
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
    if (pcVar4 == (char *)0x0) {
LAB_00ee627d: ;
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
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x60) + 0x50))))(this + 0x60,(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      if ((char)uVar3 != '\0') goto LAB_00ee627d;
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
      }
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      goto LAB_00ee6265;
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
      *(int *)(this + 4) = (int)uVar14;
      goto LAB_00ee610a;
    }
  }
LAB_00ee6201: ;
  if (ppcVar13 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar13);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
LAB_00ee6265: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf26 */
byte F_00ee62b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xee62b0u, gen_a0, gen_a1, gen_a2, 0u);
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
  undefined * pWVar10;
  
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[4],0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[5],0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 8)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 8)) >> 0x20));
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
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pWVar10 = this + 0x10;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x4;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%f\",",(int)(ulonglong)gen_d2bits((double)*(float *)pWVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pWVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pWVar10 = pWVar10 + 4;
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x20]);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x21]);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c));
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

/* ref: Application::Network::WorkDefinitions::Warp::vf12 */
byte F_00ee66e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee66e0u, gen_a0, gen_a1, 0u, 0u);
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
  undefined * pWVar10;
  
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
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[4],0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[5],0);
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
  F_00e69490(param_1,"\"datatype\":\"Float\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 8)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 8)) >> 0x20));
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
  F_00e69490(param_1,"\"datatype\":\"Vector4\",",0x15);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pWVar10 = this + 0x10;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x4;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%f\",",(int)(ulonglong)gen_d2bits((double)*(float *)pWVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pWVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pWVar10 = pWVar10 + 4;
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
  F_00e69490(param_1,"\"datatype\":\"Bool\",",0x12);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x20]);
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x21]);
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
  F_00e69490(param_1,"\"datatype\":\"UInt64\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c));
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

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf26 */
byte F_00ee7470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xee7470u, gen_a0, gen_a1, gen_a2, 0u);
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
  undefined * pAVar11;
  
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[8],0);
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x18],0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pAVar11 = this + 0x1c;
  iVar3 = 0x10;
  do {
    iVar10 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pAVar11,0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pAVar11 = pAVar11 + 4;
    iVar3 = iVar10 + -1;
  } while (iVar10 + -1 != 0);
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
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
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

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf12 */
byte F_00ee7850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee7850u, gen_a0, gen_a1, 0u, 0u);
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
  undefined * pAVar11;
  
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
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[8],0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x18],0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pAVar11 = this + 0x1c;
  iVar3 = 0x10;
  do {
    iVar10 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pAVar11,0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pAVar11 = pAVar11 + 4;
    iVar3 = iVar10 + -1;
  } while (iVar10 + -1 != 0);
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
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
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
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - uVar5) + -1);
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

/* ref: Application::Network::WorkDefinitions::ThinkState::vf26 */
byte F_00ee8450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xee8450u, gen_a0, gen_a1, gen_a2, 0u);
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
  code * pcVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined * pTVar11;
  
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[4],0);
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
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pTVar11 = this + 0x20;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x3;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%f\",",(int)(ulonglong)gen_d2bits((double)*(float *)pTVar11),
               (int)((ulonglong)gen_d2bits((double)*(float *)pTVar11) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pTVar11 = pTVar11 + 4;
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
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - uVar5) + -1);
    iVar3 = param_1[4];
    param_1[4] = iVar3 + -1;
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar9 + iVar3 + -1) = 0;
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x34]);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x35],0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x38),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  if ((char)param_2 == '\0') {
    pcVar8 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x3c) + 0x24)));
  }
  else {
    pcVar8 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x3c) + 0x3c)));
  }
  (*pcVar8)(this + 0x3c,param_1);
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pTVar11 = this + 0x50;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x3;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%f\",",(int)(ulonglong)gen_d2bits((double)*(float *)pTVar11),
               (int)((ulonglong)gen_d2bits((double)*(float *)pTVar11) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pTVar11 = pTVar11 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 - uVar5 != 0) {
      if ((uint)param_1[5] < 0x10) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
      }
      puVar9 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar9 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - uVar5) + -1);
      iVar3 = param_1[4];
      param_1[4] = iVar3 + -1;
      puVar9 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar9 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar9 + iVar3 + -1) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x60]);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x61],0);
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
        puVar10 = param_1;
        puVar9 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar9 = (undefined4 *)*param_1;
          puVar10 = (undefined4 *)*param_1;
        }
        F_00c46e20((int)puVar10 + uVar5,(int)puVar9 + uVar2,(uVar2 - 1) - uVar5);
        iVar3 = param_1[4];
        param_1[4] = iVar3 + -1;
        puVar9 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar9 = (undefined4 *)*param_1;
        }
        *(undefined1 *)((int)puVar9 + iVar3 + -1) = 0;
      }
      F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 1;
    }
                    
    F_00c457e7("invalid string position");
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf12 */
byte F_00ee8a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xee8a50u, gen_a0, gen_a1, 0u, 0u);
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
  undefined * pTVar10;
  
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
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[4],0);
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
  F_00e69490(param_1,"\"datatype\":\"Vector3\",",0x15);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pTVar10 = this + 0x20;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x3;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%f\",",(int)(ulonglong)gen_d2bits((double)*(float *)pTVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pTVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pTVar10 = pTVar10 + 4;
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x34]);
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
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x35],0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x38),0);
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
  F_00e69490(param_1,"\"datatype\":\"Class\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x3c) + 0x30))))(this + 0x3c,param_1);
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
  F_00e69490(param_1,"\"datatype\":\"Vector3\",",0x15);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pTVar10 = this + 0x50;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x3;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%f\",",(int)(ulonglong)gen_d2bits((double)*(float *)pTVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pTVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pTVar10 = pTVar10 + 4;
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0xb);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,0xb);
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
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,0xb)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Bool\",",0x12);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x60]);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0xc);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,0xc);
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
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,0xc)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x61],0);
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

/* ref: Application::Network::WorkDefinitions::FishingWork::vf26 */
byte F_00ee9f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xee9f80u, gen_a0, gen_a1, gen_a2, 0u);
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
  int iVar10;
  undefined * pFVar11;
  
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 4),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar10 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar10 + 8],0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x32);
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
    iVar10 = param_1[4];
    param_1[4] = iVar10 + -1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar7 + iVar10 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar10 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar10 + 0x3a],0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x19);
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
    iVar10 = param_1[4];
    param_1[4] = iVar10 + -1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar7 + iVar10 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pFVar11 = this + 0x54;
  iVar10 = 0x12;
  do {
    iVar9 = iVar10;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)*(ushort *)pFVar11,0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pFVar11 = pFVar11 + 2;
    iVar10 = iVar9 + -1;
  } while (iVar9 + -1 != 0);
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
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar4 + iVar9,(uVar2 - iVar9) - uVar4);
      iVar10 = param_1[4];
      param_1[4] = iVar10 - iVar9;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
      }
      *((undefined1 *)GEN_TOP(((int)puVar7 + (iVar10 - iVar9)))) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
    F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
    pFVar11 = this + 0x78;
    iVar10 = 0x12;
    do {
      iVar9 = iVar10;
      F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)*(ushort *)pFVar11,0);
      pcVar5 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
      pFVar11 = pFVar11 + 2;
      iVar10 = iVar9 + -1;
    } while (iVar9 + -1 != 0);
    uVar2 = param_1[4];
    uVar4 = uVar2 - 1;
    if (uVar2 < uVar4) {
                    
      F_00c457e7("invalid string position");
    }
    if (uVar2 != uVar4) {
      puVar8 = param_1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
        puVar8 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar4 + iVar9,(uVar2 - iVar9) - uVar4);
      iVar10 = param_1[4];
      param_1[4] = iVar10 - iVar9;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
      }
      *((undefined1 *)GEN_TOP(((int)puVar7 + (iVar10 - iVar9)))) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x9c),0);
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
        F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - 1) - uVar4);
        iVar10 = param_1[4];
        param_1[4] = iVar10 + -1;
        puVar7 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar7 = (undefined4 *)*param_1;
        }
        *(undefined1 *)((int)puVar7 + iVar10 + -1) = 0;
      }
      F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 1;
    }
                    
    F_00c457e7("invalid string position");
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf12 */
byte F_00eea4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeea4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
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
  undefined * pFVar10;
  
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
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 4),0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar9 + 8],0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x32);
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
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
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
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar9 + 0x3a],0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x19);
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
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
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
  F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pFVar10 = this + 0x54;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x12;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)*(ushort *)pFVar10,0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pFVar10 = pFVar10 + 2;
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
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
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
  F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pFVar10 = this + 0x78;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x12;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)*(ushort *)pFVar10,0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pFVar10 = pFVar10 + 2;
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
    F_00c46e20(uVar4 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)),uVar2 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(uVar2 - 1) - uVar4);
    iVar9 = param_1[4];
    param_1[4] = iVar9 + -1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *(undefined1 *)(iVar9 + -1 + (int)puVar7) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
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
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x9c),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
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
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - 1) - uVar4);
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

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf26 */
byte F_00eeb120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeeb120u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf12 */
byte F_00eeb280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeeb280u, gen_a0, gen_a1, 0u, 0u);
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
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf26 */
byte F_00eeb500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeeb500u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x12),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x14),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x18),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x1c),0);
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

/* ref: Application::Network::WorkDefinitions::ItemBase::vf12 */
byte F_00eeb7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeeb7b0u, gen_a0, gen_a1, 0u, 0u);
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
  F_00e69490(param_1,"\"datatype\":\"UInt64\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x10),0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x12),0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x14),0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x18),0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x1c),0);
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

/* ref: Application::Network::WorkDefinitions::PcWork::vf26 */
byte F_00eec160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeec160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  code * pcVar6;
  
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",*(int *)(this + 4),*(int *)(this + 4) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  if ((char)param_2 == '\0') {
    pcVar6 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x24)));
  }
  else {
    pcVar6 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x3c)));
  }
  (*pcVar6)(this + 0x10,param_1);
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  if ((char)param_2 == '\0') {
    pcVar6 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x60) + 0x24)));
  }
  else {
    pcVar6 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x60) + 0x3c)));
  }
  (*pcVar6)(this + 0x60,param_1);
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf12 */
byte F_00eec300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeec300u, gen_a0, gen_a1, 0u, 0u);
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
  F_00e69490(param_1,"\"datatype\":\"Int32\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\"",*(int *)(this + 4),*(int *)(this + 4) >> 0x1f);
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
  F_00e69490(param_1,"\"datatype\":\"Class\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x30))))(this + 0x10,param_1);
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
  F_00e69490(param_1,"\"datatype\":\"Class\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x60) + 0x30))))(this + 0x60,param_1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf15 */
byte F_00eec800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeec800u, gen_a0, gen_a1, 0u, 0u);
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
  if ((char)uVar5 == '\0') goto LAB_00eec82b;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00eec8ad: ;
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00eec8ad;
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
LAB_00eec82b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf15 */
byte F_00eec9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeec9f0u, gen_a0, gen_a1, 0u, 0u);
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
  if ((char)uVar5 == '\0') goto LAB_00eeca1b;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00eeca9d: ;
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00eeca9d;
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
LAB_00eeca1b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf15 */
byte F_00eecbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeecbe0u, gen_a0, gen_a1, 0u, 0u);
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
  if ((char)uVar5 == '\0') goto LAB_00eecc0b;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00eecc8d: ;
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00eecc8d;
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
LAB_00eecc0b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf15 */
byte F_00eecdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeecdd0u, gen_a0, gen_a1, 0u, 0u);
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
  if ((char)uVar5 == '\0') goto LAB_00eecdfb;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00eece7d: ;
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00eece7d;
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
LAB_00eecdfb: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf15 */
byte F_00eecfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeecfc0u, gen_a0, gen_a1, 0u, 0u);
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
  if ((char)uVar5 == '\0') goto LAB_00eecfeb;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00eed06d: ;
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00eed06d;
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
LAB_00eecfeb: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf15 */
byte F_00eed1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed1b0u, gen_a0, gen_a1, 0u, 0u);
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
  if ((char)uVar5 == '\0') goto LAB_00eed1db;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00eed25d: ;
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00eed25d;
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
LAB_00eed1db: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf15 */
byte F_00eed3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed3a0u, gen_a0, gen_a1, 0u, 0u);
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
  if ((char)uVar5 == '\0') goto LAB_00eed3cb;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00eed44d: ;
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00eed44d;
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
LAB_00eed3cb: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: FUN_00eed590 */
uint F_00eed590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed590u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  return (uint)in_ecx;
}

/* ref: FUN_00eed5b0 */
uint F_00eed5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 1);
  *param_2 = *param_1;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return 0xc;
}

/* ref: FUN_00eed600 */
uint F_00eed600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed600u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return 0x10;
}

/* ref: FUN_00eed650 */
uint F_00eed650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed650u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  return 0xc;
}

/* ref: FUN_00eed670 */
uint F_00eed670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed670u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  return 0x10;
}

/* ref: Application::Network::WorkDefinitions::ManagedBase::vf0 */
uint F_00eed6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x12a9294));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eed700 */
uint F_00eed700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 4;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf5 */
uint F_00eed720(void)
{
  GEN_ENTER(0xeed720u, 0u, 0u, 0u, 0u);
  return 7;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf1 */
uint F_00eed730(void)
{
  GEN_ENTER(0xeed730u, 0u, 0u, 0u, 0u);
  return 0x1369630;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf5 */
uint F_00eed740(void)
{
  GEN_ENTER(0xeed740u, 0u, 0u, 0u, 0u);
  return 0xd;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf1 */
uint F_00eed750(void)
{
  GEN_ENTER(0xeed750u, 0u, 0u, 0u, 0u);
  return 0x1369634;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf5 */
uint F_00eed760(void)
{
  GEN_ENTER(0xeed760u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf1 */
uint F_00eed770(void)
{
  GEN_ENTER(0xeed770u, 0u, 0u, 0u, 0u);
  return 0x1369638;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf5 */
uint F_00eed780(void)
{
  GEN_ENTER(0xeed780u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf1 */
uint F_00eed790(void)
{
  GEN_ENTER(0xeed790u, 0u, 0u, 0u, 0u);
  return 0x136963c;
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf5 */
uint F_00eed7a0(void)
{
  GEN_ENTER(0xeed7a0u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf1 */
uint F_00eed7b0(void)
{
  GEN_ENTER(0xeed7b0u, 0u, 0u, 0u, 0u);
  return 0x1369640;
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf5 */
uint F_00eed7c0(void)
{
  GEN_ENTER(0xeed7c0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf1 */
uint F_00eed7d0(void)
{
  GEN_ENTER(0xeed7d0u, 0u, 0u, 0u, 0u);
  return 0x1369644;
}

/* ref: FUN_00eed7e0 */
uint F_00eed7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xeed7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00eed810 */
uint F_00eed810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed810u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  return 4;
}

/* ref: FUN_00eed830 */
uint F_00eed830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eedba0((undefined *)((int)this + -0x10),param_1);
  return uVar1;
}

/* ref: FUN_00eed850 */
uint F_00eed850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed850u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_00eed880 */
uint F_00eed880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_00eed8a0 */
uint F_00eed8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf5 */
uint F_00eed8d0(void)
{
  GEN_ENTER(0xeed8d0u, 0u, 0u, 0u, 0u);
  return 8;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf0 */
uint F_00eed8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf1 */
uint F_00eed910(void)
{
  GEN_ENTER(0xeed910u, 0u, 0u, 0u, 0u);
  return 0x136962c;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf0 */
uint F_00eed920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf0 */
uint F_00eed950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf0 */
uint F_00eed980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf0 */
uint F_00eed9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf0 */
uint F_00eed9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeed9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12a93cc));
  F_00f674b0(this + 0x3c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf0 */
uint F_00eeda10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeeda10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf0 */
uint F_00eeda40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeeda40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf0 */
uint F_00eeda70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeeda70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf0 */
uint F_00eedaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeedaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ItemBase_TypeInfo::vf0 */
uint F_00eedad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeedad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ItemBase::vf0 */
uint F_00eedb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeedb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::PcWork_TypeInfo::vf0 */
uint F_00eedb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeedb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::PcWork::vf0 */
uint F_00eedb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeedb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12a96f4));
  F_00f904c0(this + 0x60);
  F_010025e0(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ManagedPcWork::vf0 */
uint F_00eedba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeedba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x12a97d4));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[27])REFP(0x12a9764));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[27])REFP(0x12a96f4));
  F_00f904c0(this + 0x70);
  F_010025e0(this + 0x20);
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x12a9294));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eedbf0 */
uint F_00eedbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeedbf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)((int)this + 0xc);
  *(int *)((int)this + 0xc) = param_1 + -0x10;
  iVar1 = param_2 * 9 + -9;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + iVar1 * -0x10 + -0xa0;
  return iVar1 * 0x10;
}

/* ref: FUN_00eedc20 */
uint F_00eedc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeedc20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0xa0) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 * 9 + -9) * -0x10 + -0xa0;
  return uVar1;
}

/* ref: FUN_00eedc60 */
uint F_00eedc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeedc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  ((code *)*(gen_code32 *)*param_1)(param_1,0);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0xa0) + (int)param_1)));
  param_1[-2] = 1;
  param_1[-3] = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + -0xa0;
  *(undefined4 * PTR32 *)(uVar1 + 0xc) = param_1 + -4;
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf1 */
uint F_00eedcd0(void)
{
  GEN_ENTER(0xeedcd0u, 0u, 0u, 0u, 0u);
  return 9;
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf2 */
uint F_00eedce0(void)
{
  GEN_ENTER(0xeedce0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x1369ab4);
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf3 */
uint F_00eedcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeedcf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9ccc) + param_1 * 4);
}

/* ref: FUN_00eedd10 */
uint F_00eedd10(unsigned int gen_a0)
{
  GEN_ENTER(0xeedd10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12a9ce0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf4 */
uint F_00eedd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeedd30u, gen_a0, gen_a1, 0u, 0u);
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
  } while ((int)uVar2 < 5);
  return 0xffffffff;
}

/* ref: FUN_00eedd70 */
uint F_00eedd70(unsigned int gen_a0)
{
  GEN_ENTER(0xeedd70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x23;
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf6 */
uint F_00eedd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeedd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x1369aa0))[param_1];
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf7 */
uint F_00eedda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeedda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9c90) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf8 */
uint F_00eeddc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeeddc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9cb8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf9 */
uint F_00eedde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeedde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3aa8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf10 */
uint F_00eede00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeede00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9ca4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf14 */
uint F_00eede20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeede20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12a9cb8) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12a9cb8) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3aa8) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3aa8) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12a9ca4) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3aa8) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12a9c90) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12a9ca4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a9c90) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf13 */
uint F_00eedea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeedea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3aa8) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12a9ca4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a9c90) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12a9c90) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3aa8) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12a9ca4) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf12 */
uint F_00eedf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xeedf20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3aa8) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12a9ca4) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf11 */
uint F_00eedfb0(unsigned int gen_a0)
{
  GEN_ENTER(0xeedfb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,2);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,3);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,4);
  return uVar5 + uVar1 + uVar2 + uVar3 + uVar4;
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf17 */
uint F_00eee000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xeee000u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf16 */
uint F_00eee020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xeee020u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf15 */
uint F_00eee040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeee040u, gen_a0, gen_a1, gen_a2, 0u);
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
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::DamageWork_TypeInfo::vf19 */
uint F_00eee0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeee0b0u, gen_a0, gen_a1, gen_a2, 0u);
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
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00eee120 */
unsigned int F_00eee120(unsigned int gen_a0)
{
  GEN_ENTER(0xeee120u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf2 */
uint F_00eee130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeee130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369c8c) + 0x10))))(&REFG(undefined * PTR32, 0x1369c8c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00eee160 */
uint F_00eee160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeee160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369c8c) + 0x10))))(&REFG(undefined * PTR32, 0x1369c8c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf4 */
uint F_00eee190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeee190u, gen_a0, gen_a1, 0u, 0u);
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
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf3 */
uint F_00eee1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeee1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf6 */
byte F_00eee1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeee1f0u, gen_a0, gen_a1, 0u, 0u);
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
    this[0xc] = *(undefined *)(param_1 + 3);
    *(int *)(this + 0x10) = param_1[4];
    uVar4 = (uint)(byte)*(undefined *)(param_1 + 5);
    this[0x14] = *(undefined *)(param_1 + 5);
  }
  return (byte)uVar4;
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf5 */
uint F_00eee260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeee260u, gen_a0, gen_a1, gen_a2, 0u);
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
      *(int *)(this + 8) = param_1[2];
      return uVar4;
    case 2: ;
      this[0xc] = *(undefined *)(param_1 + 3);
      return uVar4;
    case 3: ;
      *(int *)(this + 0x10) = param_1[4];
      return uVar4;
    case 4: ;
      uVar4 = CONCAT31((int3)(param_2 >> 8),*(undefined *)(param_1 + 5));
      this[0x14] = *(undefined *)(param_1 + 5);
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf8 */
byte F_00eee310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeee310u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00eee413: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00eee418;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00eee413;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00eee418: ;
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
            if ((char)uVar13 == '\0') goto LAB_00eee4ca;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00eee4ca: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf22 */
byte F_00eee4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeee4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  ulonglong uVar4;
  float fVar5;
  undefined * puVar6;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 4) = (int)uVar4;
    return 1;
  case 1: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 8) = (int)uVar4;
    return 1;
  case 2: ;
    puVar6 = &REFG(undefined, 0x1158a00);
    pvVar3 = (undefined *)F_00e82f00(param_2);
    bVar1 = F_0042b740(pvVar3,puVar6);
    this[0xc] = (undefined1)(bVar1 != 0);
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    fVar5 = F_00e50660(uVar2);
    *(float *)(this + 0x10) = fVar5;
    return 1;
  case 4: ;
    puVar6 = &REFG(undefined, 0x1158a00);
    pvVar3 = (undefined *)F_00e82f00(param_2);
    bVar1 = F_0042b740(pvVar3,puVar6);
    this[0x14] = (undefined1)(bVar1 != 0);
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf17 */
byte F_00eee5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeee5c0u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar7 = F_00e50570(uVar6 + 3);
  *(int *)(this + 8) = (int)uVar7;
  uVar6 = F_00c51da0((char *)(uVar3 + 3),0x22);
  this[0xc] = (undefined1)(*(char *)(uVar3 + 3) != '0');
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  fVar8 = F_00e50660(uVar6 + 3);
  *(float *)(this + 0x10) = fVar8;
  uVar6 = F_00c51da0((char *)(uVar3 + 3),0x22);
  this[0x14] = (undefined1)(*(char *)(uVar3 + 3) != '0');
  if (param_2 != (uint *)0x0) {
    uVar3 = F_00c51da0(uVar6,0x7d);
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf10 */
uint F_00eee6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeee6e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::DamageWork::vf23 */
byte F_00eee800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeee800u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0xc]);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x10))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x10)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x14]);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf9 */
uint F_00eee930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeee930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf11 */
byte F_00eee950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeee950u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00eeea63: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00eeea68;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00eeea63;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00eeea68: ;
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
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00eeebd7;
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
LAB_00eeebd7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf24 */
byte F_00eeebf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeeebf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  ulonglong uVar4;
  float fVar5;
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
    *(int *)(this + 4) = (int)uVar4;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 1: ;
    uVar2 = F_00e82f00(uVar2);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 8) = (int)uVar4;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 2: ;
    puVar6 = &REFG(undefined, 0x1158a00);
    pvVar3 = (undefined *)F_00e82f00(uVar2);
    bVar1 = F_0042b6a0(pvVar3,puVar6);
    this[0xc] = (undefined1)(bVar1 == 0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(uVar2);
    uVar2 = F_0042a990(uVar2);
    fVar5 = F_00e50660(uVar2);
    *(float *)(this + 0x10) = fVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 4: ;
    puVar6 = &REFG(undefined, 0x1158a00);
    pvVar3 = (undefined *)F_00e82f00(uVar2);
    bVar1 = F_0042b6a0(pvVar3,puVar6);
    this[0x14] = (undefined1)(bVar1 == 0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf18 */
byte F_00eeed60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeeed60u, gen_a0, gen_a1, gen_a2, 0u);
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
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369ca0));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 4) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369ca0));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 8) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369ca0));
    iVar5 = uVar3 + 9;
    this[0xc] = (undefined1)(*(char *)(uVar3 + 9) != '0');
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369ca0));
    iVar5 = uVar3 + 9;
    fVar7 = F_00e50660(iVar5);
    *(float *)(this + 0x10) = fVar7;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369ca0));
    iVar5 = uVar3 + 9;
    this[0x14] = (undefined1)(*(char *)(uVar3 + 9) != '0');
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf13 */
uint F_00eeefb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeeefb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::DamageWork::vf25 */
byte F_00eef0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeef0d0u, gen_a0, gen_a1, 0u, 0u);
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
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),0);
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
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0xc]);
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
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x10))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x10)) >> 0x20));
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
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x14]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf14 */
byte F_00eef790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeef790u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00eef8e2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00eef8e7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00eef8e2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00eef8e7: ;
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
                    if ((char)uVar13 == '\0') goto LAB_00eef7ee;
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
LAB_00eef7ee: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DamageWork::vf16 */
byte F_00eefa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeefa40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00eefc10 */
uint F_00eefc10(unsigned int gen_a0)
{
  GEN_ENTER(0xeefc10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined1 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined1 *)(in_ecx + 0x14) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf1 */
uint F_00eefc50(void)
{
  GEN_ENTER(0xeefc50u, 0u, 0u, 0u, 0u);
  return 0x1c;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf2 */
uint F_00eefc60(void)
{
  GEN_ENTER(0xeefc60u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x1369b4c);
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf3 */
uint F_00eefc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeefc70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9ec0) + param_1 * 4);
}

/* ref: FUN_00eefc90 */
uint F_00eefc90(unsigned int gen_a0)
{
  GEN_ENTER(0xeefc90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12a9f90) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf4 */
uint F_00eefcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeefcb0u, gen_a0, gen_a1, 0u, 0u);
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
  } while ((int)uVar2 < 0x25);
  return 0xffffffff;
}

/* ref: FUN_00eefcf0 */
uint F_00eefcf0(unsigned int gen_a0)
{
  GEN_ENTER(0xeefcf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x11d;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf6 */
uint F_00eefd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeefd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x1369ab8))[param_1];
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf7 */
uint F_00eefd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeefd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9cf8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf8 */
uint F_00eefd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeefd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9e28) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf9 */
uint F_00eefd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeefd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1369b50) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf10 */
uint F_00eefd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeefd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9d90) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf14 */
uint F_00eefda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeefda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12a9e28) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12a9e28) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x1369b50) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x1369b50) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12a9d90) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x1369b50) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12a9cf8) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12a9d90) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a9cf8) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf13 */
uint F_00eefe20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeefe20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x1369b50) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12a9d90) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a9cf8) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12a9cf8) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x1369b50) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12a9d90) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf12 */
uint F_00eefea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xeefea0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x1369b50) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12a9d90) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf11 */
uint F_00eeff30(unsigned int gen_a0)
{
  GEN_ENTER(0xeeff30u, gen_a0, 0u, 0u, 0u);
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
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  
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
  uVar32 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x1f);
  uVar33 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x20);
  uVar34 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x21);
  uVar35 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x22);
  uVar36 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x23);
  uVar37 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0x24);
  return uVar37 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 + uVar8 + uVar9 + uVar10 +
                  uVar11 + uVar12 + uVar13 + uVar14 + uVar15 + uVar16 + uVar17 + uVar18 + uVar19 +
                  uVar20 + uVar21 + uVar22 + uVar23 + uVar24 + uVar25 + uVar26 + uVar27 + uVar28 +
                  uVar29 + uVar30 + uVar31 + uVar32 + uVar33 + uVar34 + uVar35 + uVar36;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf15 */
uint F_00ef0120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xef0120u, gen_a0, gen_a1, gen_a2, 0u);
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
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x1f,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x20,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x21,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x22,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x23,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0x24,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::CharaCommon_TypeInfo::vf19 */
uint F_00ef0370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xef0370u, gen_a0, gen_a1, gen_a2, 0u);
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
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x1f,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x20,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x21,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x22,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x23,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x24,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00ef05c0 */
uint F_00ef05c0(unsigned int gen_a0)
{
  GEN_ENTER(0xef05c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12aa214));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  F_00f3f7f0(in_ecx + 8);
  in_ecx[0x84] = 0;
  in_ecx[0x85] = 0;
  *(undefined1 *)((int)in_ecx + 0x232) = 0;
  in_ecx[0x8e] = 0;
  in_ecx[0x8f] = 0;
  in_ecx[0x90] = 0;
  in_ecx[0x91] = 0;
  in_ecx[0x92] = 0;
  in_ecx[0x93] = 0;
  F_00e53100(in_ecx + 0x9e);
  in_ecx[0xa7] = 0;
  in_ecx[0xa8] = 0;
  in_ecx[0xaa] = 0;
  in_ecx[0xb3] = 0;
  in_ecx[0xb4] = 0;
  in_ecx[0xb8] = 0;
  in_ecx[0xa9] = 0;
  in_ecx[0xac] = 0;
  in_ecx[0xad] = 0;
  in_ecx[0xae] = 0;
  in_ecx[0xaf] = 0;
  in_ecx[0xb0] = 0;
  in_ecx[0xb1] = 0;
  *(undefined1 *)(in_ecx + 0xb2) = 0;
  in_ecx[0xb5] = 0;
  in_ecx[0xb6] = 0;
  *(undefined1 *)((int)in_ecx + 0x2df) = 0;
  *(undefined8 *)(in_ecx + 0x86) = 0;
  *(undefined8 *)(in_ecx + 0x88) = 0;
  *(undefined8 *)(in_ecx + 0x8a) = 0;
  *(undefined2 *)(in_ecx + 0x8c) = 0;
  in_ecx[0x94] = 0;
  in_ecx[0x95] = 0;
  in_ecx[0x96] = 0;
  in_ecx[0x97] = 0;
  in_ecx[0x98] = 0;
  in_ecx[0x99] = 0;
  in_ecx[0x9a] = 0;
  in_ecx[0x9b] = 0;
  in_ecx[0x9c] = 0;
  in_ecx[0x9d] = 0;
  *(undefined2 *)(in_ecx + 0xb7) = 0;
  *(undefined1 *)((int)in_ecx + 0x2de) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ef0710 */
unsigned int F_00ef0710(unsigned int gen_a0)
{
  GEN_ENTER(0xef0710u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12aa214));
  F_00e53130(in_ecx + 0x9e);
  F_00f24af0(in_ecx + 8);
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf2 */
uint F_00ef0740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef0740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369c90) + 0x10))))(&REFG(undefined * PTR32, 0x1369c90),param_1);
  if (-1 < (int)uVar1) {
    return (uint)this;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 8))))(this + 0x20,param_1);
  if (uVar1 == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x278) + 8))))(this + 0x278,param_1);
  }
  return uVar1;
}

/* ref: FUN_00ef0790 */
uint F_00ef0790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xef0790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369c90) + 0x10))))(&REFG(undefined * PTR32, 0x1369c90),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf4 */
uint F_00ef07c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef07c0u, gen_a0, gen_a1, 0u, 0u);
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
    return in_ecx + 0xd;
  case 4: ;
    return in_ecx + 0xe;
  case 5: ;
    return in_ecx + 0xf;
  case 6: ;
    return in_ecx + 0x10;
  case 7: ;
    return in_ecx + 0x12;
  case 8: ;
    return in_ecx + 0x13;
  case 9: ;
    return in_ecx + 0x20;
  case 10: ;
    return in_ecx + 0x210;
  case 0xb: ;
    return in_ecx + 0x214;
  case 0xc: ;
    return in_ecx + 0x218;
  case 0xd: ;
    return in_ecx + 0x232;
  case 0xe: ;
    return in_ecx + 0x238;
  case 0xf: ;
    return in_ecx + 0x240;
  case 0x10: ;
    return in_ecx + 0x248;
  case 0x11: ;
    return in_ecx + 0x250;
  case 0x12: ;
    return in_ecx + 0x278;
  case 0x13: ;
    return in_ecx + 0x29c;
  case 0x14: ;
    return in_ecx + 0x2a0;
  case 0x15: ;
    return in_ecx + 0x2a4;
  case 0x16: ;
    return in_ecx + 0x2a5;
  case 0x17: ;
    return in_ecx + 0x2a6;
  case 0x18: ;
    return in_ecx + 0x2a7;
  case 0x19: ;
    return in_ecx + 0x2a8;
  case 0x1a: ;
    return in_ecx + 0x2b0;
  case 0x1b: ;
    return in_ecx + 0x2b8;
  case 0x1c: ;
    return in_ecx + 0x2c0;
  case 0x1d: ;
    return in_ecx + 0x2c8;
  case 0x1e: ;
    return in_ecx + 0x2cc;
  case 0x1f: ;
    return in_ecx + 0x2d0;
  case 0x20: ;
    return in_ecx + 0x2d4;
  case 0x21: ;
    return in_ecx + 0x2d8;
  case 0x22: ;
    return in_ecx + 0x2dc;
  case 0x23: ;
    return in_ecx + 0x2df;
  case 0x24: ;
    return in_ecx + 0x2e0;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf3 */
uint F_00ef09d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xef09d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 < *(uint *)(&REFG(undefined, 0x12a9cf8) + param_1 * 4)) {
    if (param_1 == 0xc) {
      return (uint)(this + param_2 + 0x218);
    }
    if (param_1 == 0x11) {
      return (uint)(this + param_2 * 4 + 0x250);
    }
    if (param_1 == 0x22) {
      return (uint)(this + param_2 + 0x2dc);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf6 */
uint F_00ef0a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef0a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  code * pcVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pCVar6;
  int iVar7;
  
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if ((short)uVar4 == (short)uVar5) {
    *(int *)(this + 4) = param_1[1];
    *(int *)(this + 8) = param_1[2];
    this[0xc] = *(undefined *)(param_1 + 3);
    this[0xd] = *(undefined *)((int)param_1 + 0xd);
    this[0xe] = *(undefined *)((int)param_1 + 0xe);
    this[0xf] = *(undefined *)((int)param_1 + 0xf);
    *(short *)(this + 0x10) = (short)param_1[4];
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x18)));
    this[0x12] = *(undefined *)((int)param_1 + 0x12);
    this[0x13] = *(undefined *)((int)param_1 + 0x13);
    (*pcVar1)(this + 0x20,param_1 + 8);
    *(int *)(this + 0x210) = param_1[0x84];
    *(int *)(this + 0x214) = param_1[0x85];
    pCVar6 = this + 0x218;
    iVar7 = 0x1a;
    do {
      *pCVar6 = pCVar6[(int)param_1 - (int)this];
      pCVar6 = pCVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    this[0x232] = *(undefined *)((int)param_1 + 0x232);
    *(int *)(this + 0x238) = param_1[0x8e];
    *(int *)(this + 0x23c) = param_1[0x8f];
    *(int *)(this + 0x240) = param_1[0x90];
    *(int *)(this + 0x244) = param_1[0x91];
    *(int *)(this + 0x248) = param_1[0x92];
    *(int *)(this + 0x24c) = param_1[0x93];
    *(int *)(this + 0x250) = param_1[0x94];
    *(int *)(this + 0x254) = param_1[0x95];
    *(int *)(this + 600) = param_1[0x96];
    *(int *)(this + 0x25c) = param_1[0x97];
    *(int *)(this + 0x260) = param_1[0x98];
    *(int *)(this + 0x264) = param_1[0x99];
    *(int *)(this + 0x268) = param_1[0x9a];
    *(int *)(this + 0x26c) = param_1[0x9b];
    *(int *)(this + 0x270) = param_1[0x9c];
    *(int *)(this + 0x274) = param_1[0x9d];
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x278) + 0x18))))(this + 0x278,param_1 + 0x9e);
    *(int *)(this + 0x29c) = param_1[0xa7];
    *(int *)(this + 0x2a0) = param_1[0xa8];
    this[0x2a4] = *(undefined *)(param_1 + 0xa9);
    this[0x2a5] = *(undefined *)((int)param_1 + 0x2a5);
    this[0x2a6] = *(undefined *)((int)param_1 + 0x2a6);
    this[0x2a7] = *(undefined *)((int)param_1 + 0x2a7);
    *(int *)(this + 0x2a8) = param_1[0xaa];
    *(int *)(this + 0x2b0) = param_1[0xac];
    *(int *)(this + 0x2b4) = param_1[0xad];
    *(int *)(this + 0x2b8) = param_1[0xae];
    *(int *)(this + 700) = param_1[0xaf];
    *(int *)(this + 0x2c0) = param_1[0xb0];
    *(int *)(this + 0x2c4) = param_1[0xb1];
    this[0x2c8] = *(undefined *)(param_1 + 0xb2);
    *(int *)(this + 0x2cc) = param_1[0xb3];
    *(int *)(this + 0x2d0) = param_1[0xb4];
    *(int *)(this + 0x2d4) = param_1[0xb5];
    *(int *)(this + 0x2d8) = param_1[0xb6];
    this[0x2dc] = *(undefined *)(param_1 + 0xb7);
    this[0x2dd] = *(undefined *)((int)param_1 + 0x2dd);
    uVar5 = (uint)(byte)*(undefined *)((int)param_1 + 0x2de);
    this[0x2de] = *(undefined *)((int)param_1 + 0x2de);
    this[0x2df] = *(undefined *)((int)param_1 + 0x2df);
    *(int *)(this + 0x2e0) = param_1[0xb8];
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf5 */
uint F_00ef0cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xef0cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 CVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined3 uVar7;
  undefined * pCVar6;
  int iVar8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    uVar7 = (undefined3)(param_2 >> 8);
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      uVar5 = param_1[1];
      *(uint *)(this + 4) = uVar5;
      return uVar5;
    case 1: ;
      *(int *)(this + 8) = param_1[2];
      return uVar5;
    case 2: ;
      this[0xc] = *(undefined *)(param_1 + 3);
      return uVar5;
    case 3: ;
      CVar1 = *(undefined *)((int)param_1 + 0xd);
      this[0xd] = CVar1;
      return CONCAT31(uVar7,CVar1);
    case 4: ;
      this[0xe] = *(undefined *)((int)param_1 + 0xe);
      return uVar5;
    case 5: ;
      this[0xf] = *(undefined *)((int)param_1 + 0xf);
      return uVar5;
    case 6: ;
      iVar8 = param_1[4];
      *(short *)(this + 0x10) = (short)iVar8;
      return CONCAT22((short)(param_2 >> 0x10),(short)iVar8);
    case 7: ;
      this[0x12] = *(undefined *)((int)param_1 + 0x12);
      return uVar5;
    case 8: ;
      this[0x13] = *(undefined *)((int)param_1 + 0x13);
      return uVar5;
    case 9: ;
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x18))))(this + 0x20,param_1 + 8);
      return uVar5;
    case 10: ;
      uVar5 = param_1[0x84];
      *(uint *)(this + 0x210) = uVar5;
      return uVar5;
    case 0xb: ;
      *(int *)(this + 0x214) = param_1[0x85];
      return uVar5;
    case 0xc: ;
      pCVar6 = this + 0x218;
      iVar8 = 0x1a;
      do {
        *pCVar6 = pCVar6[(int)param_1 - (int)this];
        pCVar6 = pCVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      return (uint)pCVar6;
    case 0xd: ;
      CVar1 = *(undefined *)((int)param_1 + 0x232);
      this[0x232] = CVar1;
      return CONCAT31(uVar7,CVar1);
    case 0xe: ;
      *(int *)(this + 0x238) = param_1[0x8e];
      *(int *)(this + 0x23c) = param_1[0x8f];
      return uVar5;
    case 0xf: ;
      uVar5 = param_1[0x90];
      *(uint *)(this + 0x240) = uVar5;
      *(int *)(this + 0x244) = param_1[0x91];
      return uVar5;
    case 0x10: ;
      *(int *)(this + 0x248) = param_1[0x92];
      uVar5 = param_1[0x93];
      *(uint *)(this + 0x24c) = uVar5;
      return uVar5;
    case 0x11: ;
      *(int *)(this + 0x250) = param_1[0x94];
      *(int *)(this + 0x254) = param_1[0x95];
      *(int *)(this + 600) = param_1[0x96];
      *(int *)(this + 0x25c) = param_1[0x97];
      *(int *)(this + 0x260) = param_1[0x98];
      *(int *)(this + 0x264) = param_1[0x99];
      *(int *)(this + 0x268) = param_1[0x9a];
      *(int *)(this + 0x26c) = param_1[0x9b];
      uVar5 = param_1[0x9c];
      *(uint *)(this + 0x270) = uVar5;
      *(int *)(this + 0x274) = param_1[0x9d];
      return uVar5;
    case 0x12: ;
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x278) + 0x18))))(this + 0x278,param_1 + 0x9e);
      return uVar5;
    case 0x13: ;
      *(int *)(this + 0x29c) = param_1[0xa7];
      return uVar5;
    case 0x14: ;
      *(int *)(this + 0x2a0) = param_1[0xa8];
      return uVar5;
    case 0x15: ;
      this[0x2a4] = *(undefined *)(param_1 + 0xa9);
      return uVar5;
    case 0x16: ;
      this[0x2a5] = *(undefined *)((int)param_1 + 0x2a5);
      return uVar5;
    case 0x17: ;
      CVar1 = *(undefined *)((int)param_1 + 0x2a6);
      this[0x2a6] = CVar1;
      return CONCAT31(uVar7,CVar1);
    case 0x18: ;
      this[0x2a7] = *(undefined *)((int)param_1 + 0x2a7);
      return uVar5;
    case 0x19: ;
      *(int *)(this + 0x2a8) = param_1[0xaa];
      return uVar5;
    case 0x1a: ;
      *(int *)(this + 0x2b0) = param_1[0xac];
      uVar5 = param_1[0xad];
      *(uint *)(this + 0x2b4) = uVar5;
      return uVar5;
    case 0x1b: ;
      *(int *)(this + 0x2b8) = param_1[0xae];
      *(int *)(this + 700) = param_1[0xaf];
      return uVar5;
    case 0x1c: ;
      uVar5 = param_1[0xb0];
      *(uint *)(this + 0x2c0) = uVar5;
      *(int *)(this + 0x2c4) = param_1[0xb1];
      return uVar5;
    case 0x1d: ;
      this[0x2c8] = *(undefined *)(param_1 + 0xb2);
      return uVar5;
    case 0x1e: ;
      *(int *)(this + 0x2cc) = param_1[0xb3];
      return uVar5;
    case 0x1f: ;
      *(int *)(this + 0x2d0) = param_1[0xb4];
      return uVar5;
    case 0x20: ;
      uVar5 = param_1[0xb5];
      *(uint *)(this + 0x2d4) = uVar5;
      return uVar5;
    case 0x21: ;
      *(int *)(this + 0x2d8) = param_1[0xb6];
      return uVar5;
    case 0x22: ;
      this[0x2dc] = *(undefined *)(param_1 + 0xb7);
      CVar1 = *(undefined *)((int)param_1 + 0x2dd);
      this[0x2dd] = CVar1;
      this[0x2de] = *(undefined *)((int)param_1 + 0x2de);
      return CONCAT31(uVar7,CVar1);
    case 0x23: ;
      this[0x2df] = *(undefined *)((int)param_1 + 0x2df);
      return uVar5;
    case 0x24: ;
      *(int *)(this + 0x2e0) = param_1[0xb8];
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf8 */
byte F_00ef1150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef1150u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ef1253: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ef1258;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00ef1253;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ef1258: ;
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
            if ((char)uVar13 == '\0') goto LAB_00ef130a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00ef130a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf22 */
byte F_00ef1320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xef1320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  undefined * pCVar5;
  int iVar6;
  ulonglong uVar7;
  float fVar8;
  undefined * puVar9;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e505e0(uVar4);
    *(int *)(this + 4) = (int)uVar7;
    return 1;
  case 1: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(int *)(this + 8) = (int)uVar7;
    return 1;
  case 2: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0xc] = SUB81(uVar7,0);
    return 1;
  case 3: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0xd] = SUB81(uVar7,0);
    return 1;
  case 4: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0xe] = SUB81(uVar7,0);
    return 1;
  case 5: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0xf] = SUB81(uVar7,0);
    return 1;
  case 6: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(short *)(this + 0x10) = (short)uVar7;
    return 1;
  case 7: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0x12] = SUB81(uVar7,0);
    return 1;
  case 8: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0x13] = SUB81(uVar7,0);
    return 1;
  case 9: ;
    pCVar5 = this + 0x20;
    goto LAB_00ef1483;
  case 10: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e505e0(uVar4);
    *(int *)(this + 0x210) = (int)uVar7;
    return 1;
  case 0xb: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e505e0(uVar4);
    *(int *)(this + 0x214) = (int)uVar7;
    return 1;
  case 0xc: ;
    uVar4 = F_00e8c050(param_2);
    iVar6 = 0;
    while (iVar6 < (int)uVar4) {
      uVar3 = F_00e9e450(param_2,iVar6,iVar6 >> 0x1f);
      uVar3 = F_00e82f00(uVar3);
      uVar3 = F_0042a990(uVar3);
      uVar7 = F_00e50570(uVar3);
      this[iVar6 + 0x218] = SUB81(uVar7,0);
      iVar6 = iVar6 + 1;
      if (0x19 < iVar6) {
        return 1;
      }
    }
    break;
  case 0xd: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0x232] = SUB81(uVar7,0);
    return 1;
  case 0xe: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(ulonglong *)(this + 0x238) = uVar7;
    return 1;
  case 0xf: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(ulonglong *)(this + 0x240) = uVar7;
    return 1;
  case 0x10: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(ulonglong *)(this + 0x248) = uVar7;
    return 1;
  case 0x11: ;
    uVar4 = F_00e8c050(param_2);
    iVar6 = 0;
    pCVar5 = this + 0x250;
    while (iVar6 < (int)uVar4) {
      uVar3 = F_00e9e450(param_2,iVar6,iVar6 >> 0x1f);
      uVar3 = F_00e82f00(uVar3);
      uVar3 = F_0042a990(uVar3);
      uVar7 = F_00e50570(uVar3);
      *(int *)pCVar5 = (int)uVar7;
      iVar6 = iVar6 + 1;
      pCVar5 = pCVar5 + 4;
      if (9 < iVar6) {
        return 1;
      }
    }
    break;
  case 0x12: ;
    pCVar5 = this + 0x278;
LAB_00ef1483: ;
    if ((char)param_3 == '\0') {
      ((code *)*(gen_code32 *)(*(int *)pCVar5 + 0x20))(pCVar5,param_2);
      return 1;
    }
    ((code *)*(gen_code32 *)(*(int *)pCVar5 + 0x38))(pCVar5,param_2);
    return 1;
  case 0x13: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    fVar8 = F_00e50660(uVar4);
    *(float *)(this + 0x29c) = fVar8;
    return 1;
  case 0x14: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    fVar8 = F_00e50660(uVar4);
    *(float *)(this + 0x2a0) = fVar8;
    return 1;
  case 0x15: ;
    puVar9 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(param_2);
    bVar1 = F_0042b740(pvVar2,puVar9);
    this[0x2a4] = (undefined1)(bVar1 != 0);
    return 1;
  case 0x16: ;
    puVar9 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(param_2);
    bVar1 = F_0042b740(pvVar2,puVar9);
    this[0x2a5] = (undefined1)(bVar1 != 0);
    return 1;
  case 0x17: ;
    puVar9 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(param_2);
    bVar1 = F_0042b740(pvVar2,puVar9);
    this[0x2a6] = (undefined1)(bVar1 != 0);
    return 1;
  case 0x18: ;
    puVar9 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(param_2);
    bVar1 = F_0042b740(pvVar2,puVar9);
    this[0x2a7] = (undefined1)(bVar1 != 0);
    return 1;
  case 0x19: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    fVar8 = F_00e50660(uVar4);
    *(float *)(this + 0x2a8) = fVar8;
    return 1;
  case 0x1a: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(ulonglong *)(this + 0x2b0) = uVar7;
    return 1;
  case 0x1b: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(ulonglong *)(this + 0x2b8) = uVar7;
    return 1;
  case 0x1c: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(ulonglong *)(this + 0x2c0) = uVar7;
    return 1;
  case 0x1d: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0x2c8] = SUB81(uVar7,0);
    return 1;
  case 0x1e: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    fVar8 = F_00e50660(uVar4);
    *(float *)(this + 0x2cc) = fVar8;
    return 1;
  case 0x1f: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    fVar8 = F_00e50660(uVar4);
    *(float *)(this + 0x2d0) = fVar8;
    return 1;
  case 0x20: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(int *)(this + 0x2d4) = (int)uVar7;
    return 1;
  case 0x21: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e505e0(uVar4);
    *(int *)(this + 0x2d8) = (int)uVar7;
    return 1;
  case 0x22: ;
    uVar4 = F_00e8c050(param_2);
    iVar6 = 0;
    while (iVar6 < (int)uVar4) {
      uVar3 = F_00e9e450(param_2,iVar6,iVar6 >> 0x1f);
      uVar3 = F_00e82f00(uVar3);
      uVar3 = F_0042a990(uVar3);
      uVar7 = F_00e50570(uVar3);
      this[iVar6 + 0x2dc] = SUB81(uVar7,0);
      iVar6 = iVar6 + 1;
      if (2 < iVar6) {
        return 1;
      }
    }
    break;
  case 0x23: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0x2df] = SUB81(uVar7,0);
    return 1;
  case 0x24: ;
    uVar4 = F_00e82f00(param_2);
    uVar4 = F_0042a990(uVar4);
    fVar8 = F_00e50660(uVar4);
    *(float *)(this + 0x2e0) = fVar8;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf17 */
byte F_00ef1a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xef1a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  ulonglong uVar9;
  float fVar10;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar6 = *(int *)this;
  (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)(param_1 + 1);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar6 + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  F_00c472af(((char *)(gen_frame + 0x18)),0x40,"\"classid\":%llu",uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x18)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x18)) + 1))));
  if (iVar6 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  uVar4 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x14)),0x5b);
  (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)(uVar4 - 1);
  pcVar5 = (char *)F_00c51da0(uVar4 + 2,0x22);
  uVar9 = F_00e505e0(uVar4 + 2);
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
  *(int *)(this + 4) = (int)uVar9;
  pcVar7 = (char *)F_00c51da0(pcVar5 + 3,0x22);
  uVar9 = F_00e50570(pcVar5 + 3);
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
  *(int *)(this + 8) = (int)uVar9;
  pcVar5 = (char *)F_00c51da0(pcVar7 + 3,0x22);
  uVar9 = F_00e50570(pcVar7 + 3);
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
  this[0xc] = SUB81(uVar9,0);
  pcVar7 = (char *)F_00c51da0(pcVar5 + 3,0x22);
  uVar9 = F_00e50570(pcVar5 + 3);
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
  this[0xd] = SUB81(uVar9,0);
  pcVar5 = (char *)F_00c51da0(pcVar7 + 3,0x22);
  uVar9 = F_00e50570(pcVar7 + 3);
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
  this[0xe] = SUB81(uVar9,0);
  pcVar7 = (char *)F_00c51da0(pcVar5 + 3,0x22);
  uVar9 = F_00e50570(pcVar5 + 3);
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
  this[0xf] = SUB81(uVar9,0);
  pcVar5 = (char *)F_00c51da0(pcVar7 + 3,0x22);
  uVar9 = F_00e50570(pcVar7 + 3);
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
  *(short *)(this + 0x10) = (short)uVar9;
  pcVar7 = (char *)F_00c51da0(pcVar5 + 3,0x22);
  uVar9 = F_00e50570(pcVar5 + 3);
  this[0x12] = SUB81(uVar9,0);
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
  pcVar5 = (char *)F_00c51da0(pcVar7 + 3,0x22);
  uVar9 = F_00e50570(pcVar7 + 3);
  this[0x13] = SUB81(uVar9,0);
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x44)));
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
  uVar4 = (*pcVar2)(this + 0x20,pcVar5 + 2,&(*(char * PTR32 *)(gen_frame + 0x14)));
  if ((char)uVar4 != '\0') {
    pcVar7 = (*(char * PTR32 *)(gen_frame + 0x14)) + 3;
    pcVar5 = (char *)F_00c51da0(pcVar7,0x22);
    uVar9 = F_00e505e0(pcVar7);
    *(int *)(this + 0x210) = (int)uVar9;
    (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
    uVar4 = F_00c51da0(pcVar5 + 3,0x22);
    uVar9 = F_00e505e0(pcVar5 + 3);
    *(int *)(this + 0x214) = (int)uVar9;
    (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)(uVar4 + 1);
    pcVar5 = (char *)F_00fb9a80((char *)(uVar4 + 1),0x5b,0x5d);
    iVar6 = 0;
    do {
      pcVar7 = (*(char * PTR32 *)(gen_frame + 0x14)) + 3;
      pcVar8 = (char *)F_00c51da0(pcVar7,0x22);
      if ((pcVar5 < pcVar7) || (pcVar5 < pcVar8)) {
        pcVar8 = pcVar5 + -1;
        break;
      }
      uVar9 = F_00e50570(pcVar7);
      this[iVar6 + 0x218] = SUB81(uVar9,0);
      iVar6 = iVar6 + 1;
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar8;
    } while (iVar6 < 0x1a);
    (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar8 + 1;
    pcVar5 = (char *)F_00c51da0(pcVar8 + 4,0x22);
    uVar9 = F_00e50570(pcVar8 + 4);
    (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
    this[0x232] = SUB81(uVar9,0);
    pcVar7 = (char *)F_00c51da0(pcVar5 + 3,0x22);
    uVar9 = F_00e50570(pcVar5 + 3);
    (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
    *(ulonglong *)(this + 0x238) = uVar9;
    pcVar5 = (char *)F_00c51da0(pcVar7 + 3,0x22);
    uVar9 = F_00e50570(pcVar7 + 3);
    (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
    *(ulonglong *)(this + 0x240) = uVar9;
    uVar4 = F_00c51da0(pcVar5 + 3,0x22);
    uVar9 = F_00e50570(pcVar5 + 3);
    *(ulonglong *)(this + 0x248) = uVar9;
    (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)(uVar4 + 1);
    pcVar5 = (char *)F_00fb9a80((char *)(uVar4 + 1),0x5b,0x5d);
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = this + 0x250;
    iVar6 = 0;
    do {
      pcVar8 = (*(char * PTR32 *)(gen_frame + 0x14)) + 3;
      pcVar7 = (char *)F_00c51da0(pcVar8,0x22);
      if ((pcVar5 < pcVar8) || (pcVar5 < pcVar7)) {
        pcVar7 = pcVar5 + -1;
        break;
      }
      uVar9 = F_00e50570(pcVar8);
      *(int *)(*(undefined * PTR32 *)(gen_frame + 0xc)) = (int)uVar9;
      iVar6 = iVar6 + 1;
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)(gen_frame + 0xc)) + 4;
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
    } while (iVar6 < 10);
    iVar6 = *(int *)(this + 0x278);
    (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7 + 1;
    uVar4 = ((code *)*(gen_code32 *)(iVar6 + 0x44))(this + 0x278,pcVar7 + 3,&(*(char * PTR32 *)(gen_frame + 0x14)));
    if ((char)uVar4 != '\0') {
      pcVar7 = (*(char * PTR32 *)(gen_frame + 0x14)) + 3;
      pcVar5 = (char *)F_00c51da0(pcVar7,0x22);
      fVar10 = F_00e50660(pcVar7);
      *(float *)(this + 0x29c) = fVar10;
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
      pcVar7 = (char *)F_00c51da0(pcVar5 + 3,0x22);
      fVar10 = F_00e50660(pcVar5 + 3);
      *(float *)(this + 0x2a0) = fVar10;
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
      pcVar5 = (char *)F_00c51da0(pcVar7 + 3,0x22);
      this[0x2a4] = (undefined1)(pcVar7[3] != '0');
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
      pcVar7 = (char *)F_00c51da0(pcVar5 + 3,0x22);
      this[0x2a5] = (undefined1)(pcVar5[3] != '0');
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
      pcVar5 = (char *)F_00c51da0(pcVar7 + 3,0x22);
      this[0x2a6] = (undefined1)(pcVar7[3] != '0');
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
      pcVar7 = (char *)F_00c51da0(pcVar5 + 3,0x22);
      this[0x2a7] = (undefined1)(pcVar5[3] != '0');
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
      pcVar5 = (char *)F_00c51da0(pcVar7 + 3,0x22);
      fVar10 = F_00e50660(pcVar7 + 3);
      *(float *)(this + 0x2a8) = fVar10;
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
      pcVar7 = (char *)F_00c51da0(pcVar5 + 3,0x22);
      uVar9 = F_00e50570(pcVar5 + 3);
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
      *(ulonglong *)(this + 0x2b0) = uVar9;
      pcVar5 = (char *)F_00c51da0(pcVar7 + 3,0x22);
      uVar9 = F_00e50570(pcVar7 + 3);
      *(ulonglong *)(this + 0x2b8) = uVar9;
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
      pcVar7 = (char *)F_00c51da0(pcVar5 + 3,0x22);
      uVar9 = F_00e50570(pcVar5 + 3);
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
      *(ulonglong *)(this + 0x2c0) = uVar9;
      pcVar5 = (char *)F_00c51da0(pcVar7 + 3,0x22);
      uVar9 = F_00e50570(pcVar7 + 3);
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
      this[0x2c8] = SUB81(uVar9,0);
      pcVar7 = (char *)F_00c51da0(pcVar5 + 3,0x22);
      fVar10 = F_00e50660(pcVar5 + 3);
      *(float *)(this + 0x2cc) = fVar10;
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
      pcVar5 = (char *)F_00c51da0(pcVar7 + 3,0x22);
      fVar10 = F_00e50660(pcVar7 + 3);
      *(float *)(this + 0x2d0) = fVar10;
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
      pcVar7 = (char *)F_00c51da0(pcVar5 + 3,0x22);
      uVar9 = F_00e50570(pcVar5 + 3);
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
      *(int *)(this + 0x2d4) = (int)uVar9;
      uVar4 = F_00c51da0(pcVar7 + 3,0x22);
      uVar9 = F_00e505e0(pcVar7 + 3);
      *(int *)(this + 0x2d8) = (int)uVar9;
      (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)(uVar4 + 1);
      pcVar5 = (char *)F_00fb9a80((char *)(uVar4 + 1),0x5b,0x5d);
      iVar6 = 0;
      while( true ) {
        pcVar8 = (*(char * PTR32 *)(gen_frame + 0x14)) + 3;
        pcVar7 = (char *)F_00c51da0(pcVar8,0x22);
        if ((pcVar5 < pcVar8) || (pcVar5 < pcVar7)) break;
        uVar9 = F_00e50570(pcVar8);
        this[iVar6 + 0x2dc] = SUB81(uVar9,0);
        iVar6 = iVar6 + 1;
        (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
        if (2 < iVar6) {
LAB_00ef1f60: ;
          (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7 + 1;
          pcVar5 = (char *)F_00c51da0(pcVar7 + 4,0x22);
          uVar9 = F_00e50570(pcVar7 + 4);
          this[0x2df] = SUB81(uVar9,0);
          (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar5;
          pcVar7 = (char *)F_00c51da0(pcVar5 + 3,0x22);
          fVar10 = F_00e50660(pcVar5 + 3);
          *(float *)(this + 0x2e0) = fVar10;
          (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar7;
          if (param_2 != (uint *)0x0) {
            uVar4 = F_00c51da0(pcVar7,0x7d);
            *param_2 = uVar4;
          }
          F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
          return 1;
        }
      }
      pcVar7 = pcVar5 + -1;
      goto LAB_00ef1f60;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf10 */
uint F_00ef1fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef1fd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf23 */
byte F_00ef20f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xef20f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  uint uVar2;
  undefined * pvVar3;
  code * pcVar4;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 4),*(int *)(this + 4) >> 0x1f);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0xc],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0xd],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0xe],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0xf],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x10),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,7,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x12],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,8,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x13],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  uVar2 = F_00e9e450(param_1,9,0);
  if ((char)param_2 == '\0') {
    pcVar4 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x28)));
  }
  else {
    pcVar4 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x40)));
  }
  (*pcVar4)(this + 0x20,uVar2);
  pvVar1 = (undefined *)F_00e9e450(param_1,10,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x210),*(int *)(this + 0x210) >> 0x1f);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xb,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x214),*(int *)(this + 0x214) >> 0x1f);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xc,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,0x1a,0);
  iVar5 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar5 + 0x218],0);
    puVar6 = ((undefined1 *)(gen_frame + 0x8));
    pvVar3 = (undefined *)F_00e9e450(pvVar1,iVar5,iVar5 >> 0x1f);
    F_00ea7fb0(pvVar3,puVar6);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1a);
  pvVar1 = (undefined *)F_00e9e450(param_1,0xd,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x232],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xe,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x238),*(undefined4 *)(this + 0x23c)
            );
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xf,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x240),*(undefined4 *)(this + 0x244)
            );
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x10,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x248),*(undefined4 *)(this + 0x24c)
            );
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x11,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,10,0);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0x250;
  iVar5 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x4)),0);
    puVar6 = ((undefined1 *)(gen_frame + 0x8));
    pvVar3 = (undefined *)F_00e9e450(pvVar1,iVar5,iVar5 >> 0x1f);
    F_00ea7fb0(pvVar3,puVar6);
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 4;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 10);
  uVar2 = F_00e9e450(param_1,0x12,0);
  if ((char)param_2 == '\0') {
    pcVar4 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x278) + 0x28)));
  }
  else {
    pcVar4 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x278) + 0x40)));
  }
  (*pcVar4)(this + 0x278,uVar2);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x13,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x29c)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x29c)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x14,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x2a0)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x2a0)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x15,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x2a4]);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x16,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x2a5]);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x17,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x2a6]);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x18,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x2a7]);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x19,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x2a8)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x2a8)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1a,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x2b0),*(undefined4 *)(this + 0x2b4)
            );
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1b,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x2b8),*(undefined4 *)(this + 700));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1c,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x2c0),*(undefined4 *)(this + 0x2c4)
            );
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1d,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x2c8],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1e,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x2cc)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x2cc)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1f,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x2d0)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x2d0)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x20,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x2d4),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x21,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x2d8),*(int *)(this + 0x2d8) >> 0x1f);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x22,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,3,0);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x2dc],0);
    puVar6 = ((undefined1 *)(gen_frame + 0x8));
    pvVar3 = (undefined *)F_00e9e450(pvVar1,(*(undefined * PTR32 *)(gen_frame + 0x4)),(int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x4))) >> 0x1f);
    F_00ea7fb0(pvVar3,puVar6);
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1);
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) < 3);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x23,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x2df],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x24,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x2e0)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x2e0)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf9 */
uint F_00ef2970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef2970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf11 */
byte F_00ef2990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef2990u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ef2aa3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ef2aa8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00ef2aa3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ef2aa8: ;
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
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00ef2c17;
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
LAB_00ef2c17: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf24 */
byte F_00ef2c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xef2c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined * pCVar6;
  ulonglong uVar7;
  float fVar8;
  undefined * puVar9;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e505e0(uVar4);
    *(int *)(this + 4) = (int)uVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 1: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(int *)(this + 8) = (int)uVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 2: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0xc] = SUB81(uVar7,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 3: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0xd] = SUB81(uVar7,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 4: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0xe] = SUB81(uVar7,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 5: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0xf] = SUB81(uVar7,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 6: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(short *)(this + 0x10) = (short)uVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 7: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0x12] = SUB81(uVar7,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 8: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0x13] = SUB81(uVar7,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 9: ;
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x2c))))(this + 0x20,pvVar2);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 10: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e505e0(uVar4);
    *(int *)(this + 0x210) = (int)uVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0xb: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e505e0(uVar4);
    *(int *)(this + 0x214) = (int)uVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0xc: ;
    uVar4 = F_00e8c050(pvVar2);
    iVar5 = 0;
    while (iVar5 < (int)uVar4) {
      uVar3 = F_00e9e450(pvVar2,iVar5,iVar5 >> 0x1f);
      uVar3 = F_00e82f00(uVar3);
      uVar3 = F_0042a990(uVar3);
      uVar7 = F_00e505e0(uVar3);
      this[iVar5 + 0x218] = SUB81(uVar7,0);
      iVar5 = iVar5 + 1;
      if (0x19 < iVar5) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 0xd: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0x232] = SUB81(uVar7,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0xe: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(ulonglong *)(this + 0x238) = uVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0xf: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(ulonglong *)(this + 0x240) = uVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x10: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(ulonglong *)(this + 0x248) = uVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x11: ;
    uVar4 = F_00e8c050(pvVar2);
    pCVar6 = this + 0x250;
    iVar5 = 0;
    while (iVar5 < (int)uVar4) {
      uVar3 = F_00e9e450(pvVar2,iVar5,iVar5 >> 0x1f);
      uVar3 = F_00e82f00(uVar3);
      uVar3 = F_0042a990(uVar3);
      uVar7 = F_00e505e0(uVar3);
      *(int *)pCVar6 = (int)uVar7;
      iVar5 = iVar5 + 1;
      pCVar6 = pCVar6 + 4;
      if (9 < iVar5) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 0x12: ;
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x278) + 0x2c))))(this + 0x278,pvVar2);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x13: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    fVar8 = F_00e50660(uVar4);
    *(float *)(this + 0x29c) = fVar8;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x14: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    fVar8 = F_00e50660(uVar4);
    *(float *)(this + 0x2a0) = fVar8;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x15: ;
    puVar9 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(pvVar2);
    bVar1 = F_0042b6a0(pvVar2,puVar9);
    this[0x2a4] = (undefined1)(bVar1 == 0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x16: ;
    puVar9 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(pvVar2);
    bVar1 = F_0042b6a0(pvVar2,puVar9);
    this[0x2a5] = (undefined1)(bVar1 == 0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x17: ;
    puVar9 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(pvVar2);
    bVar1 = F_0042b6a0(pvVar2,puVar9);
    this[0x2a6] = (undefined1)(bVar1 == 0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x18: ;
    puVar9 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(pvVar2);
    bVar1 = F_0042b6a0(pvVar2,puVar9);
    this[0x2a7] = (undefined1)(bVar1 == 0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x19: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    fVar8 = F_00e50660(uVar4);
    *(float *)(this + 0x2a8) = fVar8;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x1a: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(ulonglong *)(this + 0x2b0) = uVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x1b: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(ulonglong *)(this + 0x2b8) = uVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x1c: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(ulonglong *)(this + 0x2c0) = uVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x1d: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0x2c8] = SUB81(uVar7,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x1e: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    fVar8 = F_00e50660(uVar4);
    *(float *)(this + 0x2cc) = fVar8;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x1f: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    fVar8 = F_00e50660(uVar4);
    *(float *)(this + 0x2d0) = fVar8;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x20: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    *(int *)(this + 0x2d4) = (int)uVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x21: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e505e0(uVar4);
    *(int *)(this + 0x2d8) = (int)uVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x22: ;
    uVar4 = F_00e8c050(pvVar2);
    iVar5 = 0;
    while (iVar5 < (int)uVar4) {
      uVar3 = F_00e9e450(pvVar2,iVar5,iVar5 >> 0x1f);
      uVar3 = F_00e82f00(uVar3);
      uVar3 = F_0042a990(uVar3);
      uVar7 = F_00e505e0(uVar3);
      this[iVar5 + 0x2dc] = SUB81(uVar7,0);
      iVar5 = iVar5 + 1;
      if (2 < iVar5) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 0x23: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar7 = F_00e50570(uVar4);
    this[0x2df] = SUB81(uVar7,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 0x24: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    fVar8 = F_00e50660(uVar4);
    *(float *)(this + 0x2e0) = fVar8;
    break;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf18 */
byte F_00ef34e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xef34e0u, gen_a0, gen_a1, gen_a2, 0u);
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
  iVar5 = *(int *)this;
  (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(param_1 + 1);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar5 + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x4)),0x5b);
    iVar5 = *(int *)this;
    (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 - 1);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar5 + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e505e0((char *)(uVar3 + 9));
      *(int *)(this + 4) = (int)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      *(int *)(this + 8) = (int)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      this[0xc] = SUB81(uVar7,0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      this[0xd] = SUB81(uVar7,0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      this[0xe] = SUB81(uVar7,0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      this[0xf] = SUB81(uVar7,0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,6);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      *(short *)(this + 0x10) = (short)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,7);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      this[0x12] = SUB81(uVar7,0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,8);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      this[0x13] = SUB81(uVar7,0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,9);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x48))))(this + 0x20,uVar3 + 8,&(*(char * PTR32 *)(gen_frame + 0x4)));
      if ((char)uVar3 == '\0') {
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return 0;
      }
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,10);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e505e0((char *)(uVar3 + 9));
      *(int *)(this + 0x210) = (int)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xb);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e505e0((char *)(uVar3 + 9));
      *(int *)(this + 0x214) = (int)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xc);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d30));
      pcVar4 = (char *)(uVar3 + 10);
      iVar5 = 0;
      do {
        uVar7 = F_00e50570(pcVar4);
        this[iVar5 + 0x218] = SUB81(uVar7,0);
        uVar3 = F_00c51da0(pcVar4,0x2c);
        iVar5 = iVar5 + 1;
        pcVar4 = (char *)(uVar3 + 2);
        (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar4;
      } while (iVar5 < 0x1a);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xd);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      this[0x232] = SUB81(uVar7,0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xe);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      *(ulonglong *)(this + 0x238) = uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xf);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      *(ulonglong *)(this + 0x240) = uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x10);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      *(ulonglong *)(this + 0x248) = uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x11);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d30));
      pcVar4 = (char *)(uVar3 + 10);
      pCVar6 = this + 0x250;
      (*(int *)(gen_frame + 0x0)) = 10;
      do {
        uVar7 = F_00e50570(pcVar4);
        *(int *)pCVar6 = (int)uVar7;
        uVar3 = F_00c51da0(pcVar4,0x2c);
        pcVar4 = (char *)(uVar3 + 2);
        pCVar6 = pCVar6 + 4;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + -1;
        (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar4;
      } while ((*(int *)(gen_frame + 0x0)) != 0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x12);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x278) + 0x48))))(this + 0x278,uVar3 + 8,&(*(char * PTR32 *)(gen_frame + 0x4)));
      if ((char)uVar3 == '\0') {
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return 0;
      }
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x13);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      fVar8 = F_00e50660((char *)(uVar3 + 9));
      *(float *)(this + 0x29c) = fVar8;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x14);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      fVar8 = F_00e50660((char *)(uVar3 + 9));
      *(float *)(this + 0x2a0) = fVar8;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x15);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      cVar1 = *(char *)(uVar3 + 9);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
      this[0x2a4] = (undefined1)(cVar1 != '0');
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x16);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      cVar1 = *(char *)(uVar3 + 9);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
      this[0x2a5] = (undefined1)(cVar1 != '0');
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x17);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      cVar1 = *(char *)(uVar3 + 9);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
      this[0x2a6] = (undefined1)(cVar1 != '0');
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x18);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      cVar1 = *(char *)(uVar3 + 9);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
      this[0x2a7] = (undefined1)(cVar1 != '0');
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x19);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      fVar8 = F_00e50660((char *)(uVar3 + 9));
      *(float *)(this + 0x2a8) = fVar8;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1a);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      *(ulonglong *)(this + 0x2b0) = uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1b);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      *(ulonglong *)(this + 0x2b8) = uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1c);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      *(ulonglong *)(this + 0x2c0) = uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1d);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      this[0x2c8] = SUB81(uVar7,0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1e);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      fVar8 = F_00e50660((char *)(uVar3 + 9));
      *(float *)(this + 0x2cc) = fVar8;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1f);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      fVar8 = F_00e50660((char *)(uVar3 + 9));
      *(float *)(this + 0x2d0) = fVar8;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x20);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      *(int *)(this + 0x2d4) = (int)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x21);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e505e0((char *)(uVar3 + 9));
      *(int *)(this + 0x2d8) = (int)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x22);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d30));
      pcVar4 = (char *)(uVar3 + 10);
      iVar5 = 0;
      do {
        uVar7 = F_00e50570(pcVar4);
        this[iVar5 + 0x2dc] = SUB81(uVar7,0);
        uVar3 = F_00c51da0(pcVar4,0x2c);
        iVar5 = iVar5 + 1;
        pcVar4 = (char *)(uVar3 + 2);
        (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar4;
      } while (iVar5 < 3);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x23);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      uVar7 = F_00e50570((char *)(uVar3 + 9));
      this[0x2df] = SUB81(uVar7,0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)(uVar3 + 9);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x24);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    pcVar4 = (*(char * PTR32 *)(gen_frame + 0x4));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369d34));
      pcVar4 = (char *)(uVar3 + 9);
      fVar8 = F_00e50660(pcVar4);
      *(float *)(this + 0x2e0) = fVar8;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = (int)pcVar4;
    }
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf13 */
uint F_00ef4350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef4350u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf25 */
byte F_00ef4470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef4470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x11c70];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x11c68)) = 0xef447d;
  (*(uint *)(gen_frame + 0x11c68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,"Int32");
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 4),*(int *)(this + 4) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7e80(pvVar2,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0xc],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7e80(pvVar2,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0xd],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7e80(pvVar2,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0xe],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7e80(pvVar2,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0xf],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7e80(pvVar2,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,"UInt16");
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x10),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,7,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7e80(pvVar2,7);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,7);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,7);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x12],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,8,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7e80(pvVar2,8);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,8);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,8);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x13],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,9,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7e80(pvVar2,9);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,9);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,9);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,"Class");
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"value",REFG(undefined4, 0x108cc50));
  iVar6 = *(int *)(this + 0x20);
  uVar4 = F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  ((code *)*(gen_code32 *)(iVar6 + 0x34))(this + 0x20,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,10,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7e80(pvVar2,10);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,10);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,10);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x117b0)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x117b0)));
  F_00ea7fb0(pvVar2,"Int32");
  F_0042c880(((undefined1 *)(gen_frame + 0x117b0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x210),*(int *)(this + 0x210) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11aa4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11aa4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11aa4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xb,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x118ac)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x118ac)));
  F_00ea7e80(pvVar2,0xb);
  F_0042c880(((undefined1 *)(gen_frame + 0x118ac)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x119fc)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xb);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x119fc)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x119fc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1175c)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xb);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1175c)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1175c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11b4c)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11b4c)));
  F_00ea7fb0(pvVar2,"Int32");
  F_0042c880(((undefined1 *)(gen_frame + 0x11b4c)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x214),*(int *)(this + 0x214) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11804)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11804)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11804)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xc,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11af8)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11af8)));
  F_00ea7e80(pvVar2,0xc);
  F_0042c880(((undefined1 *)(gen_frame + 0x11af8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11a50)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xc);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11a50)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11a50)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x119a8)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xc);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x119a8)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x119a8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11900)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11900)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11900)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11858)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11858)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x11858)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11ba0)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x1a;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11ba0)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x11ba0)));
  (*(int *)(gen_frame + 0x10004)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x10004)) + 0x218],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x11ba0)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x11c48));
    iVar5 = (*(int *)(gen_frame + 0x10004)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x10004));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11ba0)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x11ba0)));
    (*(int *)(gen_frame + 0x10004)) = (*(int *)(gen_frame + 0x10004)) + 1;
  } while ((*(int *)(gen_frame + 0x10004)) < 0x1a);
  pvVar1 = (undefined *)F_00e9e450(param_1,0xd,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11ba0)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11ba0)));
  F_00ea7e80(pvVar2,0xd);
  F_0042c880(((undefined1 *)(gen_frame + 0x11ba0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11858)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xd);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11858)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11858)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11900)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xd);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11900)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11900)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x119a8)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x119a8)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x119a8)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x232],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11a50)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11a50)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11a50)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xe,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11af8)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11af8)));
  F_00ea7e80(pvVar2,0xe);
  F_0042c880(((undefined1 *)(gen_frame + 0x11af8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11804)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xe);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11804)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11804)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11b4c)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xe);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11b4c)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11b4c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1175c)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1175c)));
  F_00ea7fb0(pvVar2,"UInt64");
  F_0042c880(((undefined1 *)(gen_frame + 0x1175c)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x238),*(undefined4 *)(this + 0x23c)
            );
  F_0042cc20(((undefined1 *)(gen_frame + 0x119fc)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x119fc)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x119fc)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0xf,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x118ac)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x118ac)));
  F_00ea7e80(pvVar2,0xf);
  F_0042c880(((undefined1 *)(gen_frame + 0x118ac)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11aa4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xf);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11aa4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11aa4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x117b0)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xf);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x117b0)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x117b0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7fb0(pvVar2,"UInt64");
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x240),*(undefined4 *)(this + 0x244)
            );
  F_0042cc20(((undefined1 *)(gen_frame + 0x1160c)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1160c)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1160c)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x10,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11660)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11660)));
  F_00ea7e80(pvVar2,0x10);
  F_0042c880(((undefined1 *)(gen_frame + 0x11660)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x116b4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x10);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x116b4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x116b4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x110cc)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x10);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x110cc)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x110cc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11564)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11564)));
  F_00ea7fb0(pvVar2,"UInt64");
  F_0042c880(((undefined1 *)(gen_frame + 0x11564)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x248),*(undefined4 *)(this + 0x24c)
            );
  F_0042cc20(((undefined1 *)(gen_frame + 0x112c4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x112c4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x112c4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x11,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114bc)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114bc)));
  F_00ea7e80(pvVar2,0x11);
  F_0042c880(((undefined1 *)(gen_frame + 0x114bc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11174)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x11);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11174)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11174)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11414)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x11);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11414)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11414)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1121c)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1121c)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x1121c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1136c)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1136c)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x1136c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11954)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 10;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11954)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x11954)));
  (*(undefined * PTR32 *)(gen_frame + 0x1000c)) = this + 0x250;
  (*(int *)(gen_frame + 0x10004)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x1000c)),0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x11954)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x11c48));
    iVar5 = (*(int *)(gen_frame + 0x10004)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x10004));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11954)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x11954)));
    (*(undefined * PTR32 *)(gen_frame + 0x1000c)) = (*(undefined * PTR32 *)(gen_frame + 0x1000c)) + 4;
    (*(int *)(gen_frame + 0x10004)) = (*(int *)(gen_frame + 0x10004)) + 1;
  } while ((*(int *)(gen_frame + 0x10004)) < 10);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x12,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11954)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11954)));
  F_00ea7e80(pvVar2,0x12);
  F_0042c880(((undefined1 *)(gen_frame + 0x11954)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1136c)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x12);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1136c)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1136c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1121c)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x12);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1121c)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1121c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11414)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11414)));
  F_00ea7fb0(pvVar2,"Class");
  F_0042c880(((undefined1 *)(gen_frame + 0x11414)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11174)),"value",REFG(undefined4, 0x108cc50));
  iVar6 = *(int *)(this + 0x278);
  uVar4 = F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11174)));
  ((code *)*(gen_code32 *)(iVar6 + 0x34))(this + 0x278,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11174)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x13,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x114bc)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x114bc)));
  F_00ea7e80(pvVar2,0x13);
  F_0042c880(((undefined1 *)(gen_frame + 0x114bc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x112c4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x13);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x112c4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x112c4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11564)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x13);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11564)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11564)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x110cc)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x110cc)));
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x110cc)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x29c)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x29c)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x116b4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x116b4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x116b4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x14,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11660)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11660)));
  F_00ea7e80(pvVar2,0x14);
  F_0042c880(((undefined1 *)(gen_frame + 0x11660)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1160c)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x14);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1160c)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1160c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11ba0)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x14);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11ba0)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11ba0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11858)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11858)));
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x11858)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x2a0)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x2a0)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11900)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11900)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11900)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x15,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x119a8)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x119a8)));
  F_00ea7e80(pvVar2,0x15);
  F_0042c880(((undefined1 *)(gen_frame + 0x119a8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11a50)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x15);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11a50)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11a50)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11af8)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x15);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11af8)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11af8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11804)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11804)));
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x11804)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x2a4]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11b4c)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11b4c)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11b4c)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x16,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1175c)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1175c)));
  F_00ea7e80(pvVar2,0x16);
  F_0042c880(((undefined1 *)(gen_frame + 0x1175c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x119fc)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x16);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x119fc)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x119fc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x118ac)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x16);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x118ac)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x118ac)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11aa4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11aa4)));
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x11aa4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x2a5]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x117b0)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x117b0)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x117b0)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x17,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11bf4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11bf4)));
  F_00ea7e80(pvVar2,0x17);
  F_0042c880(((undefined1 *)(gen_frame + 0x11bf4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10400)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x17);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10400)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10400)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10358)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x17);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10358)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10358)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x102b0)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x102b0)));
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x102b0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x2a6]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10208)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10208)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10208)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x18,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10160)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10160)));
  F_00ea7e80(pvVar2,0x18);
  F_0042c880(((undefined1 *)(gen_frame + 0x10160)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x100b8)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x18);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x100b8)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x100b8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10010)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x18);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10010)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10010)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1025c)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1025c)));
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x1025c)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x2a7]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10d30)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10d30)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10d30)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x19,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10f7c)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10f7c)));
  F_00ea7e80(pvVar2,0x19);
  F_0042c880(((undefined1 *)(gen_frame + 0x10f7c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10748)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x19);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10748)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10748)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10ed4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x19);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10ed4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10ed4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x101b4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x101b4)));
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x101b4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x2a8)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x2a8)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10e2c)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10e2c)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10e2c)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1a,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x106a0)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x106a0)));
  F_00ea7e80(pvVar2,0x1a);
  F_0042c880(((undefined1 *)(gen_frame + 0x106a0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11024)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x1a);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11024)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11024)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10d84)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x1a);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10d84)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10d84)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10304)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10304)));
  F_00ea7fb0(pvVar2,"UInt64");
  F_0042c880(((undefined1 *)(gen_frame + 0x10304)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x2b0),*(undefined4 *)(this + 0x2b4)
            );
  F_0042cc20(((undefined1 *)(gen_frame + 0x10c88)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10c88)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10c88)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1b,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x105f8)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x105f8)));
  F_00ea7e80(pvVar2,0x1b);
  F_0042c880(((undefined1 *)(gen_frame + 0x105f8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10be0)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x1b);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10be0)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10be0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10064)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x1b);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10064)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10064)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10b38)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10b38)));
  F_00ea7fb0(pvVar2,"UInt64");
  F_0042c880(((undefined1 *)(gen_frame + 0x10b38)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x2b8),*(undefined4 *)(this + 700));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10550)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10550)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10550)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1c,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10a90)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10a90)));
  F_00ea7e80(pvVar2,0x1c);
  F_0042c880(((undefined1 *)(gen_frame + 0x10a90)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x104fc)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x1c);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x104fc)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x104fc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x109e8)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x1c);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x109e8)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x109e8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x104a8)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x104a8)));
  F_00ea7fb0(pvVar2,"UInt64");
  F_0042c880(((undefined1 *)(gen_frame + 0x104a8)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x2c0),*(undefined4 *)(this + 0x2c4)
            );
  F_0042cc20(((undefined1 *)(gen_frame + 0x10940)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10940)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10940)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1d,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10454)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10454)));
  F_00ea7e80(pvVar2,0x1d);
  F_0042c880(((undefined1 *)(gen_frame + 0x10454)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10898)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x1d);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10898)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10898)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1010c)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x1d);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1010c)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1010c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x107f0)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x107f0)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x107f0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x2c8],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x103ac)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x103ac)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x103ac)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1e,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10fd0)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10fd0)));
  F_00ea7e80(pvVar2,0x1e);
  F_0042c880(((undefined1 *)(gen_frame + 0x10fd0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10f28)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x1e);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10f28)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10f28)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10e80)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x1e);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10e80)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10e80)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10dd8)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10dd8)));
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x10dd8)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x2cc)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x2cc)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10cdc)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10cdc)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10cdc)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x1f,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10c34)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10c34)));
  F_00ea7e80(pvVar2,0x1f);
  F_0042c880(((undefined1 *)(gen_frame + 0x10c34)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10b8c)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x1f);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10b8c)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10b8c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10ae4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x1f);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10ae4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10ae4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10a3c)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10a3c)));
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x10a3c)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x2d0)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x2d0)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10994)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10994)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10994)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x20,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x108ec)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x108ec)));
  F_00ea7e80(pvVar2,0x20);
  F_0042c880(((undefined1 *)(gen_frame + 0x108ec)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10844)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x20);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x10844)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10844)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1079c)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x20);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1079c)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1079c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x106f4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x106f4)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x106f4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x2d4),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1064c)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x1064c)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1064c)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x21,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x105a4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x105a4)));
  F_00ea7e80(pvVar2,0x21);
  F_0042c880(((undefined1 *)(gen_frame + 0x105a4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x115b8)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x21);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x115b8)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x115b8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11510)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x21);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11510)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11510)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11468)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11468)));
  F_00ea7fb0(pvVar2,"Int32");
  F_0042c880(((undefined1 *)(gen_frame + 0x11468)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x2d8),*(int *)(this + 0x2d8) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x113c0)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x113c0)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x113c0)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x22,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11318)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11318)));
  F_00ea7e80(pvVar2,0x22);
  F_0042c880(((undefined1 *)(gen_frame + 0x11318)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11270)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x22);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11270)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11270)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x111c8)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x22);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x111c8)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x111c8)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11120)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11120)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x11120)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11078)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11078)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x11078)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11708)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 3;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11708)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x11708)));
  (*(int *)(gen_frame + 0x10004)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x10004)) + 0x2dc],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x11708)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x11c48));
    iVar5 = (*(int *)(gen_frame + 0x10004)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x10004));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11708)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x11708)));
    (*(int *)(gen_frame + 0x10004)) = (*(int *)(gen_frame + 0x10004)) + 1;
  } while ((*(int *)(gen_frame + 0x10004)) < 3);
  pvVar1 = (undefined *)F_00e9e450(param_1,0x23,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11708)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11708)));
  F_00ea7e80(pvVar2,0x23);
  F_0042c880(((undefined1 *)(gen_frame + 0x11708)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11078)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x23);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11078)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x11078)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11120)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x23);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11120)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11120)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x111c8)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x111c8)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x111c8)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x2df],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11270)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11270)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x11270)));
  pvVar1 = (undefined *)F_00e9e450(param_1,0x24,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x11318)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11318)));
  F_00ea7e80(pvVar2,0x24);
  F_0042c880(((undefined1 *)(gen_frame + 0x11318)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x113c0)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x24);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x113c0)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x113c0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11468)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x24);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11468)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x11468)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x11510)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x11510)));
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x11510)));
  F_00c472af(((undefined1 *)(gen_frame + 0x11c48)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x2e0)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x2e0)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x115b8)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x115b8)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x11c48)));
  F_0042c880(((undefined1 *)(gen_frame + 0x115b8)));
  F_00c47745((*(uint *)(gen_frame + 0x11c68)) ^ (uint)(uint)(gen_frame + 0x0));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf14 */
byte F_00ef7de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef7de0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ef7f32: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00ef7f37;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00ef7f32;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00ef7f37: ;
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
                    if ((char)uVar13 == '\0') goto LAB_00ef7e3e;
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
LAB_00ef7e3e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaCommon::vf16 */
byte F_00ef8090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef8090u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ef8260 */
uint F_00ef8260(unsigned int gen_a0)
{
  GEN_ENTER(0xef8260u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined2 *)(in_ecx + 0xc) = 0;
  *(undefined1 *)(in_ecx + 0xe) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  F_00f2c570(in_ecx + 0x20);
  *(undefined4 *)(in_ecx + 0x210) = 0;
  *(undefined4 *)(in_ecx + 0x214) = 0;
  *(undefined1 *)(in_ecx + 0x232) = 0;
  F_00e54d10(in_ecx + 0x278);
  *(undefined4 *)(in_ecx + 0x2a4) = 0;
  *(undefined4 *)(in_ecx + 0x2b0) = 0;
  *(undefined4 *)(in_ecx + 0x2b4) = 0;
  *(undefined4 *)(in_ecx + 0x2b8) = 0;
  *(undefined4 *)(in_ecx + 700) = 0;
  *(undefined4 *)(in_ecx + 0x2c0) = 0;
  *(undefined4 *)(in_ecx + 0x2c4) = 0;
  *(undefined4 *)(in_ecx + 0x2d4) = 0;
  *(undefined4 *)(in_ecx + 0x2d8) = 0;
  *(undefined4 *)(in_ecx + 0x29c) = 0;
  *(undefined4 *)(in_ecx + 0x2a0) = 0;
  *(undefined4 *)(in_ecx + 0x2a8) = 0;
  *(undefined4 *)(in_ecx + 0x2cc) = 0;
  *(undefined4 *)(in_ecx + 0x2d0) = 0;
  *(undefined2 *)(in_ecx + 0x2dc) = 0;
  *(undefined2 *)(in_ecx + 0x2de) = 0;
  *(undefined4 *)(in_ecx + 0x2e0) = 0;
  return 0;
}

/* ref: FUN_00ef8320 */
uint F_00ef8320(unsigned int gen_a0)
{
  GEN_ENTER(0xef8320u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x12a9294));
  in_ecx[1] = 0;
  F_00ef05c0(in_ecx + 4);
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x12aa2f4));
  in_ecx[4] = (*(undefined * PTR32 (*)[27])REFP(0x12aa284));
  return (uint)in_ecx;
}

/* ref: FUN_00ef8350 */
unsigned int F_00ef8350(unsigned int gen_a0)
{
  GEN_ENTER(0xef8350u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x12aa2f4));
  in_ecx[4] = (*(undefined * PTR32 (*)[27])REFP(0x12aa284));
  in_ecx[4] = (*(undefined * PTR32 (*)[27])REFP(0x12aa214));
  F_00e53130(in_ecx + 0xa2);
  F_00f24af0(in_ecx + 0xc);
  in_ecx[4] = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x12a9294));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf1 */
uint F_00ef83b0(void)
{
  GEN_ENTER(0xef83b0u, 0u, 0u, 0u, 0u);
  return 0x2d;
}

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf2 */
uint F_00ef83c0(void)
{
  GEN_ENTER(0xef83c0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x1369bf4);
}

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf3 */
uint F_00ef83d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef83d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12aa054) + param_1 * 4);
}

/* ref: FUN_00ef83f0 */
uint F_00ef83f0(unsigned int gen_a0)
{
  GEN_ENTER(0xef83f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12aa064) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf4 */
uint F_00ef8410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef8410u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ef8450 */
uint F_00ef8450(unsigned int gen_a0)
{
  GEN_ENTER(0xef8450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x1be;
}

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf6 */
uint F_00ef8460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef8460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x1369be4))[param_1];
}

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf7 */
uint F_00ef8480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef8480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12aa024) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf8 */
uint F_00ef84a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef84a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12aa044) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf9 */
uint F_00ef84c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef84c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3abc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf10 */
uint F_00ef84e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef84e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12aa034) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf14 */
uint F_00ef8500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef8500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12aa044) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12aa044) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3abc) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3abc) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12aa034) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3abc) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12aa024) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12aa034) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12aa024) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf13 */
uint F_00ef8580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xef8580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3abc) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12aa034) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12aa024) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12aa024) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3abc) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12aa034) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf12 */
uint F_00ef8600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xef8600u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3abc) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12aa034) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf11 */
uint F_00ef8690(unsigned int gen_a0)
{
  GEN_ENTER(0xef8690u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf15 */
uint F_00ef86d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xef86d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Application::Network::WorkDefinitions::QuestWork_TypeInfo::vf19 */
uint F_00ef8730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xef8730u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ef8790 */
uint F_00ef8790(unsigned int gen_a0)
{
  GEN_ENTER(0xef8790u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12aa35c));
  *(undefined2 *)(in_ecx + 1) = 0;
  *(undefined2 *)((int)in_ecx + 6) = 0;
  in_ecx[2] = 0;
  *(undefined2 *)(in_ecx + 3) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ef87b0 */
unsigned int F_00ef87b0(unsigned int gen_a0)
{
  GEN_ENTER(0xef87b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::QuestWork::vf2 */
uint F_00ef87c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef87c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369c94) + 0x10))))(&REFG(undefined * PTR32, 0x1369c94),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00ef87f0 */
uint F_00ef87f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xef87f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369c94) + 0x10))))(&REFG(undefined * PTR32, 0x1369c94),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::QuestWork::vf4 */
uint F_00ef8820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef8820u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 6;
  case 2: ;
    return in_ecx + 7;
  case 3: ;
    return in_ecx + 8;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::QuestWork::vf3 */
uint F_00ef8870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xef8870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  if ((param_2 < *(uint *)(&REFG(undefined, 0x12aa024) + param_1 * 4)) && (param_1 == 3)) {
    return (uint)(this + param_2 + 8);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::QuestWork::vf6 */
uint F_00ef88a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xef88a0u, gen_a0, gen_a1, 0u, 0u);
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
    *(short *)(this + 4) = (short)param_1[1];
    this[6] = *(undefined *)((int)param_1 + 6);
    this[7] = *(undefined *)((int)param_1 + 7);
    this[8] = *(undefined *)(param_1 + 2);
    this[9] = *(undefined *)((int)param_1 + 9);
    this[10] = *(undefined *)((int)param_1 + 10);
    uVar4 = (uint)(byte)*(undefined *)((int)param_1 + 0xb);
    this[0xb] = *(undefined *)((int)param_1 + 0xb);
    this[0xc] = *(undefined *)(param_1 + 3);
    this[0xd] = *(undefined *)((int)param_1 + 0xd);
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::QuestWork::vf5 */
uint F_00ef8930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xef8930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
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
      iVar1 = param_1[1];
      *(short *)(this + 4) = (short)iVar1;
      return CONCAT22((short)(param_2 >> 0x10),(short)iVar1);
    case 1: ;
      this[6] = *(undefined *)((int)param_1 + 6);
      return param_2;
    case 2: ;
      this[7] = *(undefined *)((int)param_1 + 7);
      return param_2;
    case 3: ;
      this[8] = *(undefined *)(param_1 + 2);
      this[9] = *(undefined *)((int)param_1 + 9);
      this[10] = *(undefined *)((int)param_1 + 10);
      uVar5 = (uint)(byte)*(undefined *)((int)param_1 + 0xb);
      this[0xb] = *(undefined *)((int)param_1 + 0xb);
      this[0xc] = *(undefined *)(param_1 + 3);
      this[0xd] = *(undefined *)((int)param_1 + 0xd);
    }
  }
  return uVar5;
}

