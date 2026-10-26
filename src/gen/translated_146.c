#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00c2a680 */
uint F_00c2a680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2a680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = *(uint *)((int)this + 0x14);
    pvVar2 = this;
    if (0xf < uVar1) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    if (pvVar2 <= param_1) {
      pvVar2 = this;
      if (0xf < uVar1) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar2)))) {
        if (0xf < uVar1) {
          uVar1 = F_00c2a550(this,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_00c2a550(this,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    F_00c2a1d0(this,param_2,*(undefined4 *)((int)this + 0x10));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  pvVar2 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar2,param_1,param_2);
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + param_2) = 0;
  return (uint)this;
}

/* ref: FUN_00c2a780 */
uint F_00c2a780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00c2a680(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00c2a7b0 */
uint F_00c2a7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00c2a680(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00c2a7e0 */
byte F_00c2a7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  uint uVar2;
  byte bVar3;
  char * pcVar4;
  char * pcVar5;
  undefined * pvVar6;
  uint uVar7;
  
  F_00c2a680(this,&REFG(undefined1, 0x107fc63),0);
  pcVar4 = F_00c46a10(param_1,"://");
  if (pcVar4 != (char *)0x0) {
    F_00c2a680(this,param_1,(int)pcVar4 - (int)param_1);
    pcVar4 = pcVar4 + 3;
    F_00c2a680((undefined *)((int)this + 0x1c),&REFG(undefined1, 0x107fc63),0);
    pcVar5 = F_00c52d60(pcVar4,":/");
    if (pcVar5 != (char *)0x0) {
      F_00c2a680((undefined *)((int)this + 0x1c),pcVar4,(int)pcVar5 - (int)pcVar4);
      if (*pcVar5 == ':') {
        pcVar4 = pcVar5 + 1;
        pcVar5 = (char *)F_00c51da0(pcVar4,0x2f);
        if (pcVar5 == (char *)0x0) {
          return 0;
        }
        F_00c2a680((undefined *)((int)this + 0x38),pcVar4,(int)pcVar5 - (int)pcVar4);
      }
      else {
        uVar2 = *(uint *)((int)this + 0x10);
        uVar7 = uVar2;
        if (3 < uVar2) {
          uVar7 = 4;
        }
        pvVar6 = this;
        if (0xf < *(uint *)((int)this + 0x14)) {
          pvVar6 = *(undefined * PTR32 *)this;
        }
        uVar7 = F_0040d320(pvVar6,&REFG(undefined, 0x110f5fc),uVar7);
        if (((uVar7 == 0) && (3 < uVar2)) && (uVar2 == 4)) {
          F_00c2a680((undefined *)((int)this + 0x38),&REFG(undefined, 0x110f5f8),2);
        }
        else {
          bVar3 = F_00c2a640(this,"https");
          if (bVar3 != 0) {
            F_00c2a7b0((undefined *)((int)this + 0x38),&REFG(undefined, 0x110f5ec));
          }
        }
      }
      if (*pcVar5 != '/') {
        F_00c2a680((undefined *)((int)this + 0x54),&REFG(undefined, 0x1080808),1);
        return 1;
      }
      pcVar4 = pcVar5;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      F_00c2a680((undefined *)((int)this + 0x54),pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c2a940 */
uint F_00c2a940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0xf;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x68) = 0xf;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x54) = 0;
  if (param_1 != 0) {
    F_00c2a7e0(this,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00c2a9a0 */
uint F_00c2a9a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2a9a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[7])REFP(0x110f610));
  return (uint)in_ecx;
}

/* ref: FUN_00c2a9b0 */
unsigned int F_00c2a9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2a9b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[7])REFP(0x110f610));
  return 0;
}

/* ref: Client::SupportDesk::HttpRequest::vf0 */
uint F_00c2a9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x110f610));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2aa40 */
unsigned int F_00c2aa40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xc2aa40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  in_ecx[1] = (undefined4)gen_fl2bits(param_3);
  in_ecx[2] = (undefined4)gen_fl2bits(param_4);
  in_ecx[3] = (undefined4)gen_fl2bits(param_5);
  *in_ecx = param_2;
  in_ecx[4] = (undefined4)gen_fl2bits(param_6);
  return 0;
}

/* ref: FUN_00c2aa80 */
unsigned int F_00c2aa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2aa80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 0x65;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined8 *)((int)this + 0x1c) = *param_2;
  *(undefined8 *)((int)this + 0x24) = param_2[1];
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_2 + 2);
  return 0;
}

/* ref: FUN_00c2aac0 */
uint F_00c2aac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xc2aac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  undefined4 param_11 = (undefined4)gen_a11;
  undefined8 * param_12 = (undefined8 *)(uintptr_t)gen_a12;
  undefined8 * param_13 = (undefined8 *)(uintptr_t)gen_a13;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x28) = param_5;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined1 *)((int)this + 0x30) = (undefined1)param_7;
  *(undefined4 *)((int)this + 0x2c) = param_6;
  *(undefined4 *)((int)this + 0x38) = param_9;
  *(undefined4 *)((int)this + 0x34) = param_8;
  *(undefined4 *)((int)this + 0x40) = param_11;
  *(undefined4 *)this = 0x66;
  *(undefined4 *)((int)this + 4) = 0x90;
  *(undefined1 *)((int)this + 0x3c) = (undefined1)param_10;
  *(undefined8 *)((int)this + 0x44) = *param_12;
  *(undefined8 *)((int)this + 0x4c) = param_12[1];
  *(undefined8 *)((int)this + 0x54) = param_12[2];
  *(undefined8 *)((int)this + 0x5c) = param_12[3];
  *(undefined8 *)((int)this + 100) = *param_13;
  *(undefined8 *)((int)this + 0x6c) = param_13[1];
  *(undefined8 *)((int)this + 0x74) = param_13[2];
  *(undefined8 *)((int)this + 0x7c) = param_13[3];
  *(undefined8 *)((int)this + 0x84) = param_13[4];
  *(undefined8 *)((int)this + 0x8c) = param_13[5];
  return (uint)this;
}

/* ref: FUN_00c2ab90 */
unsigned int F_00c2ab90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc2ab90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 0x67;
  *(undefined4 *)((int)this + 4) = 0x430;
  *(undefined8 *)((int)this + 0x1c) = *param_2;
  *(undefined8 *)((int)this + 0x24) = param_2[1];
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((int)this + 0x30) = (undefined2)param_3;
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  puVar3 = param_4;
  puVar4 = (undefined4 *)((int)this + 0x32);
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return 0;
}

/* ref: FUN_00c2abf0 */
uint F_00c2abf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2abf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = 0x69;
  *(undefined4 *)((int)this + 4) = 0x18;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: FUN_00c2ac30 */
uint F_00c2ac30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ac30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0x263;
  in_ecx[1] = 0x18;
  *(undefined1 *)(in_ecx + 6) = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2ac50 */
uint F_00c2ac50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ac50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0x264;
  in_ecx[1] = 0x18;
  *(undefined1 *)(in_ecx + 6) = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2ac70 */
uint F_00c2ac70(unsigned int gen_a0)
{
  GEN_ENTER(0xc2ac70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a1af40(this);
  return (uint)this;
}

/* ref: FUN_00c2ac80 */
unsigned int F_00c2ac80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2ac80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *in_ecx = 100;
  in_ecx[1] = 0x430;
  *(undefined8 *)(in_ecx + 6) = *param_2;
  *(undefined8 *)(in_ecx + 8) = param_2[1];
  *(undefined8 *)(in_ecx + 10) = param_2[2];
  *(undefined8 *)(in_ecx + 0xc) = param_2[3];
  puVar2 = param_3;
  puVar3 = in_ecx + 0xe;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00c2ace0 */
unsigned int F_00c2ace0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2ace0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 0x65;
  *(undefined4 *)((int)this + 4) = 0x418;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  puVar2 = param_3;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00c2ad20 */
unsigned int F_00c2ad20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ad20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *in_ecx = 0x66;
  in_ecx[1] = 0x30;
  *(undefined8 *)(in_ecx + 6) = *param_2;
  *(undefined8 *)(in_ecx + 8) = param_2[1];
  *(undefined8 *)(in_ecx + 10) = param_2[2];
  *(undefined8 *)(in_ecx + 0xc) = param_2[3];
  return 0;
}

/* ref: FUN_00c2ad60 */
unsigned int F_00c2ad60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2ad60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 0x67;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined2 *)((int)this + 0x20) = (undefined2)param_3;
  return 0;
}

/* ref: FUN_00c2ad90 */
uint F_00c2ad90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ad90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0x68;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2adb0 */
uint F_00c2adb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2adb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = 0x69;
  *(undefined4 *)((int)this + 4) = 0x18;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: FUN_00c2ade0 */
uint F_00c2ade0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ade0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Application::Network::LobbyClient::LobbyLoginParam::vf0 */
uint F_00c2ae10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ae10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2ae50 */
uint F_00c2ae50(unsigned int gen_a0)
{
  GEN_ENTER(0xc2ae50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00427e30();
  return (int)uVar1 - *(int *)((int)this + 0x10);
}

/* ref: FUN_00c2ae90 */
uint F_00c2ae90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2ae90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __time64_t _Var1;
  ulonglong uVar2;
  
  *(uint *)((int)this + 4) = param_1 + param_2 / 1000;
  *(uint *)((int)this + 8) = param_2 % 1000;
  *(undefined4 *)this = 0;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x18) = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x20) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x28) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00c2af00 */
uint F_00c2af00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2af00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042cbc0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00c2af50 */
uint F_00c2af50(unsigned int gen_a0)
{
  GEN_ENTER(0xc2af50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00f36280(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x110f694));
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ClientSelectData::vf1 */
uint F_00c2af80(void)
{
  GEN_ENTER(0xc2af80u, 0u, 0u, 0u, 0u);
  return 0x136a514;
}

/* ref: FUN_00c2afa0 */
uint F_00c2afa0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2afa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00efc4c0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x110f704));
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ZoneInitData::vf1 */
uint F_00c2afd0(void)
{
  GEN_ENTER(0xc2afd0u, 0u, 0u, 0u, 0u);
  return 0x1369c9c;
}

/* ref: Application::Network::LobbyProtoChannel::ClientSelectData::vf0 */
uint F_00c2aff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2aff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00f36370(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ZoneInitData::vf0 */
uint F_00c2b020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00efc530(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2b050 */
unsigned int F_00c2b050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined1 * puVar2;
  
  puVar2 = (undefined1 *)((int)this + 4);
  iVar1 = 0x1a;
  do {
    *puVar2 = puVar2[param_1 - (int)this];
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined1 *)((int)this + 0x1e) = *(undefined1 *)(param_1 + 0x1e);
  *(undefined1 *)((int)this + 0x1f) = *(undefined1 *)(param_1 + 0x1f);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)((int)this + 0x22) = *(undefined1 *)(param_1 + 0x22);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return 0;
}

/* ref: FUN_00c2b0b0 */
uint F_00c2b0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2b0b0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 0x18);
  F_0042b630(in_ecx + 0x6c);
  return in_ecx;
}

/* ref: FUN_00c2b120 */
uint F_00c2b120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b120u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2b160 */
byte F_00c2b160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __time64_t _Var1;
  ulonglong uVar2;
  
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x340) = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x348) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x350) = uVar2;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x3d8) = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x3e0) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 1000) = uVar2;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x3a0) = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x3a8) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x3b0) = uVar2;
  *(undefined4 *)((int)this + 0x2a4) = param_1;
  return 1;
}

/* ref: FUN_00c2b220 */
uint F_00c2b220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c31190(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2b250 */
uint F_00c2b250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c318c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2b280 */
byte F_00c2b280(unsigned int gen_a0)
{
  GEN_ENTER(0xc2b280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  
  if (*(int *)((int)this + 0x290) == 0) {
    if ((**(char * PTR32 *)((int)this + 0x1c) != '\0') && (0 < *(int *)((int)this + 0x18))) {
      pvVar2 = (undefined *)F_00406b90(0x5c0,0,0);
      if (pvVar2 == (undefined *)0x0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = (undefined *)F_00c31a70(pvVar2,(int)this + 0x1c,*(undefined4 *)((int)this + 0x18),
                                      (int)this + 0x184,0);
      }
      *(undefined * PTR32 *)((int)this + 0x290) = pvVar2;
      F_00c31b40(pvVar2,(int)this + 0x1d8);
      F_00c31b30(*(undefined * PTR32 *)((int)this + 0x290),(int)this + 0x22c);
      *(undefined1 *)((int)this + 0x2a0) = 0;
    }
    if (*(undefined * PTR32 *)((int)this + 0x290) == (undefined *)0x0) {
      *(undefined4 *)((int)this + 0x2b4) = 1;
    }
    else {
      bVar1 = F_00c31be0(*(undefined * PTR32 *)((int)this + 0x290));
      if (bVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

/* ref: FUN_00c2b380 */
uint F_00c2b380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2b380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    uVar1 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288),param_1,param_2,param_3);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00c2b3a0 */
uint F_00c2b3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar1 = *param_1;
  *(undefined4 *)((int)this + 0x3c0) = uVar1;
  uVar2 = 0;
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x69;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    uVar2 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: FUN_00c2b430 */
uint F_00c2b430(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc2b430u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  undefined * param_7 = (undefined *)(uintptr_t)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x110f0];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x110dc)) = 0xc2b450;
  (*(uint *)(gen_frame + 0x110dc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  if (*(int *)(param_1 + 0x288) == 0) {
    uVar1 = param_1 & 0xffffff00;
  }
  else {
    uVar1 = F_0042d420(param_7,((undefined1 *)(gen_frame + 0x10c28)),0x400);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x10c80)),uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x10c28)));
    F_00c48350(((undefined4 *)(gen_frame + 0x10cd8)),0,0x400);
    uVar1 = F_0042a970(((undefined1 *)(gen_frame + 0x10c80)));
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x10c80)));
    F_00c46aa0(((undefined4 *)(gen_frame + 0x10cd8)),uVar2,uVar1);
    (*(undefined8 *)(gen_frame + 0x10024)) = CONCAT44((uint)gen_fl2bits(param_3),param_2);
    (*(float *)(gen_frame + 0x10034)) = param_6;
    (*(undefined4 *)(gen_frame + 0x10008)) = 0x67;
    (*(undefined4 *)(gen_frame + 0x1000c)) = 0x430;
    (*(undefined4 *)(gen_frame + 0x10020)) = 0;
    (*(undefined8 *)(gen_frame + 0x1002c)) = CONCAT44((uint)gen_fl2bits(param_5),(uint)gen_fl2bits(param_4));
    (*(undefined2 *)(gen_frame + 0x10038)) = (undefined2)param_8;
    puVar4 = ((undefined4 *)(gen_frame + 0x10cd8));
    puVar5 = ((undefined4 *)(gen_frame + 0x1003a));
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar1 = F_00c308b0(*(undefined * PTR32 *)(param_1 + 0x288),&(*(undefined4 *)(gen_frame + 0x10008)),0,0);
    uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x10c80)));
    uVar1 = CONCAT31((int3)(uVar6 >> 8),(char)uVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x110dc)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar1;
}

/* ref: FUN_00c2b5d0 */
uint F_00c2b5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2b5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x900];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x8ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8f0);
  if (*(int *)((int)this + 0x28c) == 0) {
    uVar1 = (uint)this & 0xffffff00;
  }
  else {
    uVar1 = F_0042d420(param_3,((undefined1 *)(gen_frame + 0x438)),0x400);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x490)),uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x438)));
    F_00c48350(((undefined4 *)(gen_frame + 0x4e8)),0,0x400);
    uVar1 = F_0042a970(((undefined1 *)(gen_frame + 0x490)));
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x490)));
    F_00c46aa0(((undefined4 *)(gen_frame + 0x4e8)),uVar2,uVar1);
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x65;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x418;
    puVar4 = ((undefined4 *)(gen_frame + 0x4e8));
    puVar5 = ((undefined4 *)(gen_frame + 0x20));
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar1 = F_00c31350(*(undefined * PTR32 *)((int)this + 0x28c),&(*(undefined4 *)(gen_frame + 0x0)));
    uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x490)));
    uVar1 = CONCAT31((int3)(uVar6 >> 8),(char)uVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x8ec)) ^ (uint)(uint)(gen_frame + 0x8f0));
  return uVar1;
}

/* ref: FUN_00c2b700 */
uint F_00c2b700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2b700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x980];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x970);
  (*(uint *)(gen_frame + 0x96c)) = uVar1;
  if (*(int *)((int)this + 0x28c) != 0) {
    uVar2 = F_0042b790(param_1);
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = F_0042d420(param_1,((undefined1 *)(gen_frame + 0x490)),0x20);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x438)),uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x490)));
      uVar1 = F_0042d420(param_2,((undefined1 *)(gen_frame + 0x490)),0x400);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x4e8)),uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x490)));
      GEN_V16_SET(((undefined1 *)(gen_frame + 0x940)), 0x0);
      GEN_V16_SET(((undefined1 *)(gen_frame + 0x950)), 0x0);
      uVar1 = F_0042a970(((undefined1 *)(gen_frame + 0x438)));
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x438)));
      F_00c46aa0(((undefined1 *)(gen_frame + 0x940)),uVar2,uVar1);
      F_00c48350(((undefined4 *)(gen_frame + 0x540)),0,0x400);
      uVar1 = F_0042a970(((undefined1 *)(gen_frame + 0x4e8)));
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x4e8)));
      F_00c46aa0(((undefined4 *)(gen_frame + 0x540)),uVar2,uVar1);
      (*(undefined8 *)(gen_frame + 0x18)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x940)) + 0));
      (*(undefined8 *)(gen_frame + 0x20)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x940)) + 8));
      (*(undefined8 *)(gen_frame + 0x28)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x950)) + 0));
      (*(undefined4 *)(gen_frame + 0x0)) = 100;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x430;
      (*(undefined8 *)(gen_frame + 0x30)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x950)) + 8));
      puVar4 = ((undefined4 *)(gen_frame + 0x540));
      puVar5 = ((undefined4 *)(gen_frame + 0x38));
      for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar1 = F_00c31350(*(undefined * PTR32 *)((int)this + 0x28c),&(*(undefined4 *)(gen_frame + 0x0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4e8)));
      uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x438)));
      uVar1 = CONCAT31((int3)(uVar6 >> 8),(char)uVar1);
      goto LAB_00c2b8a6;
    }
  }
  uVar1 = uVar1 & 0xffffff00;
LAB_00c2b8a6: ;
  F_00c47745((*(uint *)(gen_frame + 0x96c)) ^ (uint)(uint)(gen_frame + 0x970));
  return uVar1;
}

/* ref: FUN_00c2b8c0 */
uint F_00c2b8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x530];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x520);
  (*(uint *)(gen_frame + 0x51c)) = uVar1;
  if (*(int *)((int)this + 0x28c) != 0) {
    uVar2 = F_0042b790(param_1);
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = F_0042d420(param_1,((undefined1 *)(gen_frame + 0x440)),0x20);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x498)),uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x440)));
      GEN_V16_SET(((undefined1 *)(gen_frame + 0x4f0)), 0x0);
      GEN_V16_SET(((undefined1 *)(gen_frame + 0x500)), 0x0);
      uVar1 = F_0042a970(((undefined1 *)(gen_frame + 0x498)));
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x498)));
      F_00c46aa0(((undefined1 *)(gen_frame + 0x4f0)),uVar2,uVar1);
      (*(undefined8 *)(gen_frame + 0x20)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x4f0)) + 0));
      (*(undefined8 *)(gen_frame + 0x28)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x4f0)) + 8));
      (*(undefined8 *)(gen_frame + 0x30)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x500)) + 0));
      (*(undefined4 *)(gen_frame + 0x8)) = 0x66;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
      (*(undefined8 *)(gen_frame + 0x38)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x500)) + 8));
      uVar1 = F_00c31350(*(undefined * PTR32 *)((int)this + 0x28c),&(*(undefined4 *)(gen_frame + 0x8)));
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x498)));
      uVar1 = CONCAT31((int3)(uVar3 >> 8),(char)uVar1);
      goto LAB_00c2b9d7;
    }
  }
  uVar1 = uVar1 & 0xffffff00;
LAB_00c2b9d7: ;
  F_00c47745((*(uint *)(gen_frame + 0x51c)) ^ (uint)(uint)(gen_frame + 0x520));
  return uVar1;
}

/* ref: FUN_00c2b9f0 */
uint F_00c2b9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2b9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x450];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x440);
  (*(uint *)(gen_frame + 0x43c)) = uVar1;
  if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x69;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
    uVar1 = F_00c31350(*(undefined * PTR32 *)((int)this + 0x28c),&(*(undefined4 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x43c)) ^ (uint)(uint)(gen_frame + 0x440));
    return uVar1;
  }
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x440));
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00c2ba80 */
uint F_00c2ba80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2ba80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x450];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x440);
  (*(uint *)(gen_frame + 0x43c)) = uVar1;
  if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x67;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x20;
    (*(ushort *)(gen_frame + 0x20)) = (ushort)(byte)param_3;
    uVar1 = F_00c31350(*(undefined * PTR32 *)((int)this + 0x28c),&(*(undefined4 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x43c)) ^ (uint)(uint)(gen_frame + 0x440));
    return uVar1;
  }
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x440));
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00c2bb20 */
uint F_00c2bb20(unsigned int gen_a0)
{
  GEN_ENTER(0xc2bb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x450];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x440);
  (*(uint *)(gen_frame + 0x43c)) = uVar1;
  if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0x68;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    uVar1 = F_00c31350(*(undefined * PTR32 *)((int)this + 0x28c),&(*(undefined4 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x43c)) ^ (uint)(uint)(gen_frame + 0x440));
    return uVar1;
  }
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x440));
  return uVar1 & 0xffffff00;
}

/* ref: Global::SendLogout */
uint F_00c2bba0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2bba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(uint *)(gen_frame + 0xc2c)) = uVar1;
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0x263;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    (*(undefined1 *)(gen_frame + 0x20)) = 0;
    uVar1 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
    return uVar1;
  }
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00c2bc20 */
uint F_00c2bc20(unsigned int gen_a0)
{
  GEN_ENTER(0xc2bc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(uint *)(gen_frame + 0xc2c)) = uVar1;
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0x264;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    (*(undefined1 *)(gen_frame + 0x20)) = 0;
    uVar1 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
    return uVar1;
  }
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00c2bcc0 */
uint F_00c2bcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2bcc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * puVar1;
  undefined4 * puVar2;
  
  puVar1 = (uint *)F_00e3bd70(*(undefined4 *)(in_ecx + 0x298));
  if (1 < *puVar1) {
    puVar2 = (undefined4 *)F_00e3bd20(param_2);
    puVar1 = (uint *)*puVar2;
    *(undefined4 *)(in_ecx + 0x2d8 + (int)((int)(uintptr_t)puVar1) * 4) = 0;
  }
  return (uint)puVar1;
}

/* ref: FUN_00c2bcf0 */
byte F_00c2bcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2bcf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00e3c520(*(undefined * PTR32 *)((int)this + 0x298),param_1);
  return bVar1;
}

/* ref: FUN_00c2bd00 */
uint F_00c2bd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2bd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e3c590(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2bd30 */
byte F_00c2bd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2bd30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  
  if ((*(int *)(in_ecx + 0x298) != 0) && (param_2 != 0)) {
    bVar1 = F_00e3e870(*(undefined4 *)(param_2 + 100));
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c2bd60 */
uint F_00c2bd60(unsigned int gen_a0)
{
  GEN_ENTER(0xc2bd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  return (uint)uVar1;
}

/* ref: FUN_00c2bd80 */
uint F_00c2bd80(unsigned int gen_a0)
{
  GEN_ENTER(0xc2bd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  return (uint)uVar1;
}

/* ref: FUN_00c2bda0 */
uint F_00c2bda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2bda0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00e3c0b0(in_ecx);
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[39])REFP(0x110f774));
  return (uint)in_ecx;
}

/* ref: Application::Network::MyGameLoginCallback::vf1 */
uint F_00c2bde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc2bde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  int * piVar2;
  
  uVar1 = *(uint *)(this + 4);
  if (uVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int * PTR32 *)(uVar1 + 0x304);
  }
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))
                      (piVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: Application::Network::MyGameLoginCallback::vf2 */
uint F_00c2be10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc2be10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  int * piVar2;
  
  uVar1 = *(uint *)(this + 4);
  if (uVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int * PTR32 *)(uVar1 + 0x304);
  }
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))
                      (piVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: Application::Network::MyGameLoginCallback::vf4 */
unsigned int F_00c2be40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2be40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  if (*(int *)(this + 4) == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x304)));
  }
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_1);
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1,param_2);
  }
  if (*(int *)(this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 0x304))) = 0;
  }
  return 0;
}

/* ref: Application::Network::MyGameLoginCallback::vf19 */
uint F_00c2be90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc2be90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  int * piVar2;
  
  uVar1 = *(uint *)(this + 4);
  if (uVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int * PTR32 *)(uVar1 + 0x304);
  }
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))
                      (piVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: Application::Network::MyGameLoginCallback::vf20 */
uint F_00c2bec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc2bec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  int * piVar2;
  
  uVar1 = *(uint *)(this + 4);
  if (uVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int * PTR32 *)(uVar1 + 0x304);
  }
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x50))
                      (piVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: Application::Network::MyGameLoginCallback::vf22 */
unsigned int F_00c2bef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2bef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  
  if (*(int *)(this + 4) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x304)));
  }
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,param_1);
    ((code *)*(gen_code32 *)(*piVar2 + 0x58))(piVar2,param_1,param_2);
  }
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x2b0) == 0) {
      *(undefined4 *)(iVar1 + 0x2b0) = 2;
    }
    *(undefined4 *)(iVar1 + 0x304) = 0;
  }
  return 0;
}

/* ref: Application::Network::MyGameLoginCallback::vf0 */
uint F_00c2bf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2bf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x110f774));
  F_00e3c0c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2bf90 */
uint F_00c2bf90(unsigned int gen_a0)
{
  GEN_ENTER(0xc2bf90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x6c));
  uVar1 = F_0042c880((undefined *)((int)this + 0x18));
  return (uint)uVar1;
}

/* ref: FUN_00c2bfb0 */
uint F_00c2bfb0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2bfb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00efc530((int)this + 0x200);
  F_00e5bc00((int)this + 0x1d8);
  F_00f36370((int)this + 0xf0);
  F_00e75880((int)this + 0xc0);
  F_0042c880((undefined *)((int)this + 0x6c));
  uVar1 = F_0042c880((undefined *)((int)this + 0x18));
  return (uint)uVar1;
}

/* ref: FUN_00c2bff0 */
byte F_00c2bff0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2bff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x288) != 0;
}

/* ref: FUN_00c2c000 */
uint F_00c2c000(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    uVar1 = F_00c31260(*(undefined * PTR32 *)((int)this + 0x288));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00c2c040 */
uint F_00c2c040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2c040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    uVar1 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288),param_1,param_2,param_3);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00c2c060 */
uint F_00c2c060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2c060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    uVar1 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288),param_1,param_2,param_3);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00c2c080 */
uint F_00c2c080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2c080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    uVar1 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288),param_1,param_2,param_3);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00c2c0a0 */
uint F_00c2c0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2c0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    uVar1 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288),param_1,param_2,param_3);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00c2c0c0 */
uint F_00c2c0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2c0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    uVar1 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288),param_1,param_2,param_3);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00c2c0f0 */
uint F_00c2c0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c0f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00c2c1a0 */
uint F_00c2c1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0((undefined *)((int)this + 8),param_1);
  return (uint)this;
}

/* ref: ScalarTypeLoginParam_VUtf8String_Misc_Sqex_LobbyClient_Network::vf1 */
uint F_00c2c1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x5c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 2;
    *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x110f814));
    F_0042cbc0(puVar1 + 2,(int)this + 8);
    return (uint)puVar1;
  }
  return 0;
}

/* ref: FUN_00c2c210 */
uint F_00c2c210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x110f820));
  F_0042cbc0((undefined *)((int)this + 8),param_1);
  return (uint)this;
}

/* ref: ScalarTypeLoginParam_VUtf8String_Misc_Sqex_LobbyClient_Network::vf1_00c2c240 */
uint F_00c2c240(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x5c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 3;
    *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x110f820));
    F_0042cbc0(puVar1 + 2,(int)this + 8);
    return (uint)puVar1;
  }
  return 0;
}

/* ref: ScalarTypeLoginParam_VUtf8String_Misc_Sqex_LobbyClient_Network::vf0 */
uint F_00c2c280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: ScalarTypeLoginParam_VUtf8String_Misc_Sqex_LobbyClient_Network::vf0_00c2c2b0 */
uint F_00c2c2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2c300 */
uint F_00c2c300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c300u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c2c390 */
uint F_00c2c390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)this;
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

/* ref: FUN_00c2c400 */
uint F_00c2c400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2c420 */
uint F_00c2c420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00c2c450 */
uint F_00c2c450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2c460 */
uint F_00c2c460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c460u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2c490 */
uint F_00c2c490(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c490u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_01050b60(in_ecx + 2);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  return (uint)in_ecx;
}

/* ref: FUN_00c2c4d0 */
uint F_00c2c4d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c4d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_01050b60(in_ecx + 2);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
  return (uint)in_ecx;
}

/* ref: FUN_00c2c500 */
uint F_00c2c500(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c2c510 */
uint F_00c2c510(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c510u, gen_a0, 0u, 0u, 0u);
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

/* ref: PacketBufferTmpl_TZoneProtoDown_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00c2c560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PacketBufferTmpl_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00c2c590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x110f834));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2c5e0 */
uint F_00c2c5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c5e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c2c5f0 */
unsigned int F_00c2c5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00c2c610 */
uint F_00c2c610(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c610u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c2c650 */
unsigned int F_00c2c650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c650u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00c2c670 */
unsigned int F_00c2c670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined1 * puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return 0;
}

/* ref: FUN_00c2c690 */
uint F_00c2c690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c690u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c46e20(param_3,param_1,param_2 - param_1);
  return uVar1 + (param_2 - param_1);
}

/* ref: FUN_00c2c6c0 */
uint F_00c2c6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c6c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00c2c6f0 */
uint F_00c2c6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c6f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((param_2 - in_ecx[1]) * 1000 - in_ecx[2]) + param_3;
  *in_ecx = uVar1;
  return uVar1;
}

/* ref: FUN_00c2c710 */
uint F_00c2c710(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 0x18);
  F_0042b630((int)this + 0x6c);
  F_00e75840((int)this + 0xc0);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[27])REFP(0x10c45d4))
  ;
  F_00f36280((undefined *)((int)this + 0xf0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf0) =
       (*(undefined * PTR32 (*)[27])REFP(0x110f694));
  F_00e5bbd0((int)this + 0x1d8);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d8) = (*(undefined * PTR32 (*)[27])REFP(0x10c4564));
  F_00efc4c0((undefined *)((int)this + 0x200));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x200) =
       (*(undefined * PTR32 (*)[27])REFP(0x110f704));
  return (uint)this;
}

/* ref: FUN_00c2c780 */
uint F_00c2c780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00c2b050(this,param_1);
  return (uint)this;
}

/* ref: FUN_00c2c7a0 */
uint F_00c2c7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int * piVar1;
  undefined4 * puVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  piVar1 = (int *)F_00e3bd70(*(undefined4 *)((int)this + 0x298));
  if (*piVar1 == 2) {
    piVar1 = (int *)F_00e3bd20(param_2);
    if (*(int *)((int)this + *piVar1 * 4 + 0x2d8) == 0) {
      _Var3 = F_00c4b7c2((__time64_t *)0x0);
      piVar1 = (int *)F_00e3bd20(param_2);
      *(int *)((int)this + *piVar1 * 4 + 0x2d8) = (int)_Var3;
      F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
      return (uint)piVar1;
    }
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    puVar2 = (undefined4 *)F_00e3bd20(param_2);
    piVar1 = (int *)*puVar2;
    if ((uint)(*(int *)((int)this + (int)((int)(uintptr_t)piVar1) * 4 + 0x2d8) + *(int *)((int)this + 0x2e4)) <
        (uint)_Var3) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x54)));
      (*(undefined4 *)(gen_frame + 0x5c)) = 6;
      ((undefined4 *)(gen_frame + 0x54))[0] = 0x7d6;
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0x0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)));
      (*(undefined2 *)(gen_frame + 0xb4)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,((undefined4 *)(gen_frame + 0x54)),param_2);
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x60)));
      piVar1 = (int *)uVar4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return (uint)piVar1;
}

/* ref: FUN_00c2c8c0 */
uint F_00c2c8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2c8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  if (*(int *)((int)this + 0x298) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc) ^ (uint)(uint)(gen_frame + 0xcc));
    return param_1 & 0xffffff00;
  }
  if (param_3 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x64)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (undefined * PTR32 *)0x6;
    ((undefined4 *)(gen_frame + 0x64))[0] = 0x7d5;
    F_0042cc20(((byte *)(gen_frame + 0x8)) + 8,"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x70)),((byte *)(gen_frame + 0x8)) + 8);
    F_0042c880(((byte *)(gen_frame + 0x8)) + 8);
    (*(undefined2 *)(gen_frame + 0xc4)) = 0x32c9;
    ((code *)*(gen_code32 *)(*param_2 + 0x10))(param_2,((undefined4 *)(gen_frame + 0x64)),0);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x70)));
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  uVar2 = F_00c2c7a0(this,param_2,param_3);
  this_00 = *(undefined * PTR32 *)(param_3 + 100);
  *(int * PTR32 *)(param_3 + 0x68) = param_2;
  if (this_00 == (undefined *)0x0) goto LAB_00c2ca06;
  bVar1 = F_00e3e870(this_00);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) goto LAB_00c2ca06;
  ((byte *)(gen_frame + 0x8))[4] = 2;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0(((byte *)(gen_frame + 0x8)) + 8,param_1);
  if (*(int *)((int)this_00 + 0xc) == 0) {
    F_00c2c1a0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)),param_1);
    bVar1 = F_00e3edd0(this_00,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)));
    if (bVar1 != 0) {
      F_0042c880(((undefined1 *)(gen_frame + 0x74)));
      goto LAB_00c2ca20;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x74)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  }
  else {
LAB_00c2ca20: ;
    uVar2 = F_00e40ba0(this_00,param_2);
    if ((char)uVar2 != '\0') {
      F_00c2bcc0(this,param_3);
      uVar3 = F_0042c880(((byte *)(gen_frame + 0x8)) + 8);
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  uVar3 = F_0042c880(((byte *)(gen_frame + 0x8)) + 8);
  uVar2 = (uint)uVar3;
LAB_00c2ca06: ;
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00c2ca60 */
uint F_00c2ca60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc2ca60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) = this;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = param_2;
  if (*(int *)((int)this + 0x298) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc) ^ (uint)(uint)(gen_frame + 0xdc));
    return param_1 & 0xffffff00;
  }
  if (param_4 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x74)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x7c)) = (undefined * PTR32 *)0x6;
    ((undefined4 *)(gen_frame + 0x74))[0] = 0x7d5;
    F_0042cc20(((byte *)(gen_frame + 0xc)) + 0x14,"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x80)),((byte *)(gen_frame + 0xc)) + 0x14);
    F_0042c880(((byte *)(gen_frame + 0xc)) + 0x14);
    (*(undefined2 *)(gen_frame + 0xd4)) = 0x32c9;
    ((code *)*(gen_code32 *)(*param_3 + 0x10))(param_3,((undefined4 *)(gen_frame + 0x74)),0);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x80)));
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  uVar2 = F_00c2c7a0(this,param_3,param_4);
  this_00 = *(undefined * PTR32 *)(param_4 + 100);
  *(int * PTR32 *)(param_4 + 0x68) = param_3;
  if (this_00 == (undefined *)0x0) goto LAB_00c2cbae;
  bVar1 = F_00e3e870(this_00);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) goto LAB_00c2cbae;
  ((byte *)(gen_frame + 0xc))[0x10] = 2;
  ((byte *)(gen_frame + 0xc))[0x11] = 0;
  ((byte *)(gen_frame + 0xc))[0x12] = 0;
  ((byte *)(gen_frame + 0xc))[0x13] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) =
       (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0(((byte *)(gen_frame + 0xc)) + 0x14,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)));
  if (*(int *)((int)this_00 + 0xc) == 0) {
    F_00c2c1a0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x7c)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)));
    bVar1 = F_00e3edd0(this_00,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x7c)));
    if (bVar1 != 0) {
      F_0042c880(((undefined1 *)(gen_frame + 0x84)));
      goto LAB_00c2cbc8;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x84)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x7c)) = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  }
  else {
LAB_00c2cbc8: ;
    uVar2 = F_00e40860(this_00,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)),param_3);
    if ((char)uVar2 != '\0') {
      F_00c2bcc0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)),param_4);
      uVar3 = F_0042c880(((byte *)(gen_frame + 0xc)) + 0x14);
      F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  uVar3 = F_0042c880(((byte *)(gen_frame + 0xc)) + 0x14);
  uVar2 = (uint)uVar3;
LAB_00c2cbae: ;
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00c2cb2d */
uint F_00c2cb2d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc2cb2du, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  int in_esi = (int)gen_a1;
  undefined4 in_edi = (undefined4)gen_a2;
  uint in_ebp = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined * this;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  ulonglong uVar4;
  
  uVar3 = F_00c2c7a0(in_ecx,in_edi,in_esi);
  this = *(undefined * PTR32 *)(in_esi + 100);
  *(undefined4 *)(in_esi + 0x68) = in_edi;
  if (this == (undefined *)0x0) goto LAB_00c2cbae;
  bVar2 = F_00e3e870(this);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) goto LAB_00c2cbae;
  uVar1 = *(undefined4 *)(in_ebp - 200);
  *(undefined4 *)(in_ebp - 0xc0) = 2;
  *(undefined * PTR32 * PTR32 *)(in_ebp - 0xc4) =
       (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0((undefined *)(in_ebp - 0xbc),uVar1);
  if (*(int *)((int)this + 0xc) == 0) {
    F_00c2c1a0((undefined *)(in_ebp - 0x60),*(undefined4 *)(in_ebp - 200));
    bVar2 = F_00e3edd0(this,in_ebp - 0x60);
    if (bVar2 != 0) {
      F_0042c880((undefined *)(in_ebp - 0x58));
      goto LAB_00c2cbc8;
    }
    F_0042c880((undefined *)(in_ebp - 0x58));
    *(undefined * PTR32 * PTR32 *)(in_ebp - 0x60) = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  }
  else {
LAB_00c2cbc8: ;
    uVar3 = F_00e40860(this,*(undefined4 *)(in_ebp - 0xd0),in_edi);
    if ((char)uVar3 != '\0') {
      F_00c2bcc0(*(undefined4 *)(in_ebp - 0xcc),in_esi);
      uVar4 = F_0042c880((undefined *)(in_ebp - 0xbc));
      F_00c47745(*(uint *)(in_ebp - 4) ^ in_ebp);
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
  uVar4 = F_0042c880((undefined *)(in_ebp - 0xbc));
  uVar3 = (uint)uVar4;
LAB_00c2cbae: ;
  F_00c47745(*(uint *)(in_ebp - 4) ^ in_ebp);
  return uVar3 & 0xffffff00;
}

/* ref: FUN_00c2cc10 */
uint F_00c2cc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2cc10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  if (*(int *)((int)this + 0x298) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc) ^ (uint)(uint)(gen_frame + 0xcc));
    return param_3 & 0xffffff00;
  }
  if (param_5 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x8)));
    (*(undefined4 *)(gen_frame + 0x10)) = 6;
    ((undefined4 *)(gen_frame + 0x8))[0] = 0x7d5;
    F_0042cc20(((undefined1 *)(gen_frame + 0x74)),"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x74)));
    F_0042c880(((undefined1 *)(gen_frame + 0x74)));
    (*(undefined2 *)(gen_frame + 0x68)) = 0x32c9;
    ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,((undefined4 *)(gen_frame + 0x8)),0);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  uVar2 = F_00c2c7a0(this,param_4,param_5);
  this_00 = *(undefined * PTR32 *)(param_5 + 100);
  *(int * PTR32 *)(param_5 + 0x68) = param_4;
  if (this_00 == (undefined *)0x0) goto LAB_00c2cd92;
  bVar1 = F_00e3e870(this_00);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) goto LAB_00c2cd92;
  (*(undefined4 *)(gen_frame + 0x70)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x74)),param_1);
  if (*(int *)((int)this_00 + 0xc) == 0) {
    bVar1 = F_00e3edd0(this_00,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)));
    if (bVar1 != 0) goto LAB_00c2cd47;
  }
  else {
LAB_00c2cd47: ;
    uVar2 = F_00e3f450(this_00,param_2,param_3,param_4);
    if ((char)uVar2 != '\0') {
      F_00c2bcc0(this,param_5);
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x74)));
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x74)));
  uVar2 = (uint)uVar3;
LAB_00c2cd92: ;
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00c2cdb0 */
uint F_00c2cdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2cdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  if (*(int *)((int)this + 0x298) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc) ^ (uint)(uint)(gen_frame + 0xcc));
    return param_3 & 0xffffff00;
  }
  if (param_5 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x64)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (undefined * PTR32 *)0x6;
    ((undefined4 *)(gen_frame + 0x64))[0] = 0x7d5;
    F_0042cc20(((byte *)(gen_frame + 0x8)) + 8,"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x70)),((byte *)(gen_frame + 0x8)) + 8);
    F_0042c880(((byte *)(gen_frame + 0x8)) + 8);
    (*(undefined2 *)(gen_frame + 0xc4)) = 0x32c9;
    ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,((undefined4 *)(gen_frame + 0x64)),0);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x70)));
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  uVar2 = F_00c2c7a0(this,param_4,param_5);
  this_00 = *(undefined * PTR32 *)(param_5 + 100);
  *(int * PTR32 *)(param_5 + 0x68) = param_4;
  if (this_00 == (undefined *)0x0) goto LAB_00c2cf08;
  bVar1 = F_00e3e870(this_00);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) goto LAB_00c2cf08;
  ((byte *)(gen_frame + 0x8))[4] = 2;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0(((byte *)(gen_frame + 0x8)) + 8,param_1);
  if (*(int *)((int)this_00 + 0xc) == 0) {
    F_00c2c210(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)),param_1);
    bVar1 = F_00e3edd0(this_00,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)));
    if (bVar1 != 0) {
      F_0042c880(((undefined1 *)(gen_frame + 0x74)));
      goto LAB_00c2cf22;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x74)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  }
  else {
LAB_00c2cf22: ;
    uVar2 = F_00e3f450(this_00,param_2,param_3,param_4);
    if ((char)uVar2 != '\0') {
      F_00c2bcc0(this,param_5);
      uVar3 = F_0042c880(((byte *)(gen_frame + 0x8)) + 8);
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  uVar3 = F_0042c880(((byte *)(gen_frame + 0x8)) + 8);
  uVar2 = (uint)uVar3;
LAB_00c2cf08: ;
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00c2cf70 */
uint F_00c2cf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2cf70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  ulonglong uVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(uint *)(gen_frame + 0xcc)) = uVar2;
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_5 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x8)));
      (*(undefined4 *)(gen_frame + 0x10)) = 6;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0x7d5;
      F_0042cc20(&(*(undefined4 *)(gen_frame + 0x70)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x70)));
      F_0042c880(&(*(undefined4 *)(gen_frame + 0x70)));
      (*(undefined2 *)(gen_frame + 0x68)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,((undefined4 *)(gen_frame + 0x8)),0);
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      uVar2 = CONCAT31((int3)(uVar3 >> 8),1);
      goto LAB_00c2d083;
    }
    uVar2 = F_00c2c7a0(this,param_4,param_5);
    this_00 = *(undefined * PTR32 *)(param_5 + 100);
    *(int * PTR32 *)(param_5 + 0x68) = param_4;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        (*(undefined1 *)(gen_frame + 0x78)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x70)) = param_2;
        (*(undefined4 *)(gen_frame + 0x74)) = param_3;
        (*(undefined1 *)(gen_frame + 0x79)) = 0;
        bVar1 = F_00e40d30(this_00,&(*(undefined4 *)(gen_frame + 0x70)),param_4);
        uVar2 = CONCAT31(extraout_var_00,bVar1);
        if (bVar1 != 0) {
          uVar2 = F_00c2bcc0(this,param_5);
          uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
          goto LAB_00c2d083;
        }
      }
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_00c2d083: ;
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return uVar2;
}

/* ref: FUN_00c2d0a0 */
uint F_00c2d0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2d0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  ulonglong uVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(uint *)(gen_frame + 0xcc)) = uVar2;
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_5 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x8)));
      (*(undefined4 *)(gen_frame + 0x10)) = 6;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0x7d5;
      F_0042cc20(&(*(undefined4 *)(gen_frame + 0x70)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x70)));
      F_0042c880(&(*(undefined4 *)(gen_frame + 0x70)));
      (*(undefined2 *)(gen_frame + 0x68)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,((undefined4 *)(gen_frame + 0x8)),0);
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      uVar2 = CONCAT31((int3)(uVar3 >> 8),1);
      goto LAB_00c2d1b3;
    }
    uVar2 = F_00c2c7a0(this,param_4,param_5);
    this_00 = *(undefined * PTR32 *)(param_5 + 100);
    *(int * PTR32 *)(param_5 + 0x68) = param_4;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        (*(undefined1 *)(gen_frame + 0x78)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x70)) = param_2;
        (*(undefined4 *)(gen_frame + 0x74)) = param_3;
        (*(undefined1 *)(gen_frame + 0x79)) = 1;
        bVar1 = F_00e40d30(this_00,&(*(undefined4 *)(gen_frame + 0x70)),param_4);
        uVar2 = CONCAT31(extraout_var_00,bVar1);
        if (bVar1 != 0) {
          uVar2 = F_00c2bcc0(this,param_5);
          uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
          goto LAB_00c2d1b3;
        }
      }
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_00c2d1b3: ;
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return uVar2;
}

/* ref: FUN_00c2d1d0 */
uint F_00c2d1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2d1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  ulonglong uVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(uint *)(gen_frame + 0x118)) = uVar2;
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_5 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0xb4)));
      (*(undefined4 *)(gen_frame + 0xbc)) = 6;
      ((undefined4 *)(gen_frame + 0xb4))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0xc0)),((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      (*(undefined2 *)(gen_frame + 0x114)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,((undefined4 *)(gen_frame + 0xb4)),0);
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0xc0)));
      F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    uVar2 = F_00c2c7a0(this,param_4,param_5);
    this_00 = *(undefined * PTR32 *)(param_5 + 100);
    *(int * PTR32 *)(param_5 + 0x68) = param_4;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        F_0042b630(((undefined1 *)(gen_frame + 0x70)));
        F_0042b630(((undefined1 *)(gen_frame + 0xc4)));
        ((undefined1 *)(gen_frame + 0x58))[0] = (undefined1)param_1;
        (*(undefined2 *)(gen_frame + 0x5a)) = 0;
        (*(undefined4 *)(gen_frame + 0x60)) = param_2;
        (*(undefined4 *)(gen_frame + 0x64)) = param_3;
        (*(undefined8 *)(gen_frame + 0x68)) = 0;
        F_0042aca0(((undefined1 *)(gen_frame + 0x70)));
        F_0042aca0(((undefined1 *)(gen_frame + 0xc4)));
        if (*(int *)((int)this + 0x29c) == 0) {
          uVar2 = F_00406b90(8,0,0);
          if (uVar2 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = F_00c2bda0(uVar2,this);
          }
          *(uint *)((int)this + 0x29c) = uVar2;
        }
        uVar2 = F_00e3f950(this_00,((undefined1 *)(gen_frame + 0x58)),*(undefined4 *)((int)this + 0x29c));
        if ((char)uVar2 != '\0') {
          *(int * PTR32 *)((int)this + 0x304) = param_4;
          F_00427f00((undefined *)((int)this + 0x2e8));
          F_00c2bcc0(this,param_5);
          F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
          uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x70)));
          F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
          return CONCAT31((int3)(uVar3 >> 8),1);
        }
        F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
        uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x70)));
        uVar2 = (uint)uVar3;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00c2d3b0 */
uint F_00c2d3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2d3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  uint param_5 = (uint)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  uVar2 = param_5;
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_5 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)));
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)),((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)));
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,((undefined4 *)(gen_frame + 0x310)),0);
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x31c)));
      uVar2 = CONCAT31((int3)(uVar3 >> 8),1);
      goto LAB_00c2d54d;
    }
    F_00c2c7a0(this,param_4,param_5);
    this_00 = *(undefined * PTR32 *)(param_5 + 100);
    *(int * PTR32 *)(param_5 + 0x68) = param_4;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)));
        (*(undefined8 *)(gen_frame + 0x8)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = (undefined2)param_3;
        (*(undefined4 *)(gen_frame + 0x0)) = 1;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)),param_2);
        F_0042ccf0(((undefined1 *)(gen_frame + 0x6c)),(int)this + 0x1d8);
        F_00e3f250(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00,param_4);
        if (bVar1 != 0) {
          F_00c2bcc0(this,param_5);
          uVar2 = F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
          uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
          goto LAB_00c2d54d;
        }
        uVar2 = F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_00c2d54d: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380));
  return uVar2;
}

/* ref: FUN_00c2d570 */
uint F_00c2d570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc2d570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  ulonglong uVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  (*(uint *)(gen_frame + 0x37c)) = uVar2;
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_6 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x2b8)));
      (*(undefined4 *)(gen_frame + 0x2c0)) = 6;
      ((undefined4 *)(gen_frame + 0x2b8))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x320)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x2c4)),((undefined1 *)(gen_frame + 0x320)));
      F_0042c880(((undefined1 *)(gen_frame + 0x320)));
      (*(undefined2 *)(gen_frame + 0x318)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_5 + 0x10))(param_5,((undefined4 *)(gen_frame + 0x2b8)),0);
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x2c4)));
      uVar2 = CONCAT31((int3)(uVar3 >> 8),1);
      goto LAB_00c2d71b;
    }
    uVar2 = F_00c2c7a0(this,param_5,param_6);
    this_00 = *(undefined * PTR32 *)(param_6 + 100);
    *(int * PTR32 *)(param_6 + 0x68) = param_5;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)));
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x0)) = 2;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        F_0042cc20(((undefined1 *)(gen_frame + 0x320)),&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x320)));
        F_0042c880(((undefined1 *)(gen_frame + 0x320)));
        F_0090e260(((undefined1 *)(gen_frame + 0x1d8)),param_4);
        F_00e3f250(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00,param_5);
        if (bVar1 != 0) {
          F_00c2bcc0(this,param_6);
          uVar2 = F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
          uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
          goto LAB_00c2d71b;
        }
        uVar2 = F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_00c2d71b: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380));
  return uVar2;
}

/* ref: FUN_00c2d730 */
uint F_00c2d730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc2d730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * param_6 = (int *)(uintptr_t)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  uVar2 = param_4;
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_7 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)));
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)),((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)));
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_6 + 0x10))(param_6,((undefined4 *)(gen_frame + 0x310)),0);
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x31c)));
      uVar2 = CONCAT31((int3)(uVar3 >> 8),1);
      goto LAB_00c2d8c3;
    }
    uVar2 = F_00c2c7a0(this,param_6,param_7);
    this_00 = *(undefined * PTR32 *)(param_7 + 100);
    *(int * PTR32 *)(param_7 + 0x68) = param_6;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)));
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x0)) = 7;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)),param_4);
        F_00c2b050(((undefined1 *)(gen_frame + 0xc0)),param_5);
        F_00e3f250(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00,param_6);
        if (bVar1 != 0) {
          F_00c2bcc0(this,param_7);
          uVar2 = F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
          uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
          goto LAB_00c2d8c3;
        }
        uVar2 = F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_00c2d8c3: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380));
  return uVar2;
}

/* ref: FUN_00c2d8e0 */
uint F_00c2d8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc2d8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  uVar2 = param_4;
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_6 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)));
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)),((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)));
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_5 + 0x10))(param_5,((undefined4 *)(gen_frame + 0x310)),0);
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x31c)));
      uVar2 = CONCAT31((int3)(uVar3 >> 8),1);
      goto LAB_00c2da64;
    }
    uVar2 = F_00c2c7a0(this,param_5,param_6);
    this_00 = *(undefined * PTR32 *)(param_6 + 100);
    *(int * PTR32 *)(param_6 + 0x68) = param_5;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)));
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x0)) = 4;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)),param_4);
        F_00e3f250(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00,param_5);
        if (bVar1 != 0) {
          F_00c2bcc0(this,param_6);
          uVar2 = F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
          uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
          goto LAB_00c2da64;
        }
        uVar2 = F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_00c2da64: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380));
  return uVar2;
}

/* ref: FUN_00c2da80 */
uint F_00c2da80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc2da80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  uVar2 = param_4;
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_6 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)));
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)),((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)));
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_5 + 0x10))(param_5,((undefined4 *)(gen_frame + 0x310)),0);
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x31c)));
      uVar2 = CONCAT31((int3)(uVar3 >> 8),1);
      goto LAB_00c2dc04;
    }
    uVar2 = F_00c2c7a0(this,param_5,param_6);
    this_00 = *(undefined * PTR32 *)(param_6 + 100);
    *(int * PTR32 *)(param_6 + 0x68) = param_5;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)));
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x0)) = 3;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)),param_4);
        F_00e3f250(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00,param_5);
        if (bVar1 != 0) {
          F_00c2bcc0(this,param_6);
          uVar2 = F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
          uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
          goto LAB_00c2dc04;
        }
        uVar2 = F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_00c2dc04: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380));
  return uVar2;
}

/* ref: FUN_00c2dc20 */
uint F_00c2dc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc2dc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  int * param_6 = (int *)(uintptr_t)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  uVar2 = param_5;
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_7 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)));
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)),((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)));
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_6 + 0x10))(param_6,((undefined4 *)(gen_frame + 0x310)),0);
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x31c)));
      uVar2 = CONCAT31((int3)(uVar3 >> 8),1);
      goto LAB_00c2ddad;
    }
    uVar2 = F_00c2c7a0(this,param_6,param_7);
    this_00 = *(undefined * PTR32 *)(param_7 + 100);
    *(int * PTR32 *)(param_7 + 0x68) = param_6;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)));
        (*(undefined1 *)(gen_frame + 0x5)) = (undefined1)param_4;
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        (*(undefined4 *)(gen_frame + 0x0)) = 6;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)),param_5);
        F_00e3f250(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00,param_6);
        if (bVar1 != 0) {
          F_00c2bcc0(this,param_7);
          uVar2 = F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
          uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
          goto LAB_00c2ddad;
        }
        uVar2 = F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_00c2ddad: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380));
  return uVar2;
}

/* ref: FUN_00c2de40 */
uint F_00c2de40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2de40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2de50 */
byte F_00c2de50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2de50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c2de80 */
uint F_00c2de80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2de80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c2deb0 */
uint F_00c2deb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2deb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2dec0 */
uint F_00c2dec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2dec0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2ded0 */
uint F_00c2ded0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2ded0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00c2df20 */
byte F_00c2df20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2df20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c2df40 */
uint F_00c2df40(unsigned int gen_a0)
{
  GEN_ENTER(0xc2df40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(int *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_00c2df60 */
uint F_00c2df60(unsigned int gen_a0)
{
  GEN_ENTER(0xc2df60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(int *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_00c2df80 */
unsigned int F_00c2df80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2df80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00c2dfc0 */
unsigned int F_00c2dfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2dfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00c2dfe0 */
uint F_00c2dfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2dfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)0x0;
  if (param_2 != 0) {
    pvVar1 = F_00c48350(param_1,0,param_2);
  }
  return (uint)pvVar1;
}

/* ref: FUN_00c2e000 */
uint F_00c2e000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e000u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c46e20(param_3,param_1,param_2 - param_1);
  return uVar1 + (param_2 - param_1);
}

/* ref: FUN_00c2e020 */
uint F_00c2e020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00c2e050 */
uint F_00c2e050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  double dVar1;
  int * piVar2;
  longlong lVar3;
  byte bVar4;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined4 uVar5;
  undefined3 extraout_var_00 = 0;
  uint uVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  
  if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
    F_00c31370(*(undefined * PTR32 *)((int)this + 0x28c));
    F_01050b60(((undefined1 *)(gen_frame + 0x14)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(undefined8 *)(gen_frame + 0x1c)) = 0;
    bVar4 = F_00c31330(*(undefined * PTR32 *)((int)this + 0x28c),((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    in_EAX = CONCAT31(extraout_var,bVar4);
    while (bVar4 != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 0x2a4);
      if (piVar2 != (int *)0x0) {
        if ((*(int *)(gen_frame + 0x18)) == 0) {
          uVar7 = 0;
          uVar5 = 0;
        }
        else {
          uVar7 = *(undefined4 *)((*(int *)(gen_frame + 0x18)) + 0x14);
          uVar5 = *(undefined4 *)((*(int *)(gen_frame + 0x18)) + 0x24);
        }
        ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2,uVar7,uVar5);
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8),(*(int *)(gen_frame + 0x18)));
      (*(int *)(gen_frame + 0x18)) = 0;
      bVar4 = F_00c31330(*(undefined * PTR32 *)((int)this + 0x28c),((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
      in_EAX = CONCAT31(extraout_var_00,bVar4);
    }
    if ((char)param_1 != '\0') {
      uVar6 = F_00c31550(*(undefined4 *)((int)this + 0x28c));
      fVar8 = (float10)(int)uVar6;
      if ((int)uVar6 < 0) {
        fVar8 = fVar8 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      fVar9 = (float10)*(int *)((int)this + 0x380);
      if (*(int *)((int)this + 0x380) < 0) {
        fVar9 = fVar9 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      dVar1 = ((double)GEN_TOD(((fVar8 * (float10)*(double *)&REFG(undefined, 0x10912a8)) / fVar9)));
      fVar8 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar1),
                           (int)((ulonglong)gen_d2bits(dVar1) >> 0x20));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x24)) + 4)) = ((undefined2)0x27f) | 0xc00;
      (*(longlong *)(gen_frame + 0x24)) = (longlong)TRUNC(fVar8);
      lVar3 = (*(longlong *)(gen_frame + 0x24));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x24)) + 0)) = (undefined4)(longlong)TRUNC(fVar8);
      *(undefined4 *)((int)this + 0x360) = (undefined4)(*(longlong *)(gen_frame + 0x24));
      (*(longlong *)(gen_frame + 0x24)) = lVar3;
      uVar6 = F_00c31560(*(undefined4 *)((int)this + 0x28c));
      fVar8 = (float10)(int)uVar6;
      if ((int)uVar6 < 0) {
        fVar8 = fVar8 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      fVar9 = (float10)*(int *)((int)this + 0x380);
      if (*(int *)((int)this + 0x380) < 0) {
        fVar9 = fVar9 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      dVar1 = ((double)GEN_TOD(((fVar8 * (float10)*(double *)&REFG(undefined, 0x10912a8)) / fVar9)));
      fVar8 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar1),
                           (int)((ulonglong)gen_d2bits(dVar1) >> 0x20));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x24)) + 4)) = ((undefined2)0x27f) | 0xc00;
      (*(longlong *)(gen_frame + 0x24)) = (longlong)TRUNC(fVar8);
      lVar3 = (*(longlong *)(gen_frame + 0x24));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x24)) + 0)) = (undefined4)(longlong)TRUNC(fVar8);
      *(undefined4 *)((int)this + 0x364) = (undefined4)(*(longlong *)(gen_frame + 0x24));
      (*(longlong *)(gen_frame + 0x24)) = lVar3;
      in_EAX = F_00c31570(*(undefined4 *)((int)this + 0x28c));
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    F_01050b70();
  }
  return in_EAX;
}

/* ref: FUN_00c2e1f0 */
unsigned int F_00c2e1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    (*(undefined8 *)(gen_frame + 0x1c)) = 0;
    (*(undefined8 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined8 *)(gen_frame + 0x2c)) = 0;
    (*(undefined8 *)(gen_frame + 0x34)) = 0;
    F_00c30dd0(*(undefined * PTR32 *)((int)this + 0x288),&(*(undefined4 *)(gen_frame + 0xc)));
    *param_1 = (*(undefined4 *)(gen_frame + 0xc));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x10));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x14));
    param_1[3] = (*(undefined4 *)(gen_frame + 0x18));
    param_1[4] = (undefined4)(*(undefined8 *)(gen_frame + 0x1c));
    param_1[5] = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x1c)) + 4));
    param_1[6] = (undefined4)(*(undefined8 *)(gen_frame + 0x24));
    param_1[7] = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x24)) + 4));
    param_1[8] = (undefined4)(*(undefined8 *)(gen_frame + 0x2c));
    param_1[9] = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x2c)) + 4));
    param_1[10] = (undefined4)(*(undefined8 *)(gen_frame + 0x34));
    param_1[0xb] = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x34)) + 4));
  }
  return 0;
}

/* ref: FUN_00c2e290 */
uint F_00c2e290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc2e290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c2d3b0(this,0,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c2e2b0 */
uint F_00c2e2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc2e2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c2d730(this,param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x4)),param_4,param_5,param_6);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return CONCAT31((int3)(uVar2 >> 8),(char)uVar1);
}

/* ref: FUN_00c2e320 */
uint F_00c2e320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c2e330 */
uint F_00c2e330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e330u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c2e340 */
byte F_00c2e340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c2e360 */
uint F_00c2e360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c2e370 */
uint F_00c2e370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c2e380 */
uint F_00c2e380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e380u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_00c2e3a0 */
uint F_00c2e3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c2e3c0 */
byte F_00c2e3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c2e3f0 */
uint F_00c2e3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)0x0;
  if (param_2 != 0) {
    pvVar1 = F_00c48350(param_1,0,param_2);
  }
  return (uint)pvVar1;
}

/* ref: FUN_00c2e410 */
unsigned int F_00c2e410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00c2e430 */
uint F_00c2e430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e430u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c46e20(param_3,param_1,param_2 - param_1);
  return uVar1 + (param_2 - param_1);
}

/* ref: FUN_00c2e460 */
uint F_00c2e460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e460u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00c2e490 */
uint F_00c2e490(unsigned int gen_a0)
{
  GEN_ENTER(0xc2e490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x298);
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar5 = (int *)*piVar1;
    if (piVar5 != (int *)piVar1[1]) {
      do {
        if ((*piVar5 != 0) && (pvVar2 = *(undefined * PTR32 *)(*piVar5 + 100), pvVar2 != (undefined *)0x0)) {
          F_00c31c30(pvVar2);
          puVar3 = *(undefined4 * PTR32 *)(*piVar5 + 100);
          if (puVar3 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
          }
          *(undefined4 *)(*piVar5 + 100) = 0;
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 != *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 4))));
    }
    uVar4 = F_00e3c600(*(undefined * PTR32 *)((int)this + 0x298));
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x298);
    if (pvVar2 != (undefined *)0x0) {
      F_00e3c590(pvVar2);
      uVar4 = F_00406ad0(pvVar2);
    }
    *(undefined4 *)((int)this + 0x298) = 0;
  }
  return uVar4;
}

/* ref: FUN_00c2e520 */
uint F_00c2e520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2e520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *(int *)((int)this + 4) - param_3;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c2e570 */
uint F_00c2e570(unsigned int gen_a0)
{
  GEN_ENTER(0xc2e570u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00c2e5a0 */
unsigned int F_00c2e5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)this) < param_1) {
    uVar3 = 0;
    if ((param_1 != 0) && (uVar3 = F_004069f0(param_1), uVar3 == 0)) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    }
    F_00c46e20(uVar3,*(int *)this,*(int *)((int)this + 4) - *(int *)this);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = uVar3 + param_1;
    *(uint *)((int)this + 4) = uVar3 + (iVar2 - iVar1);
  }
  return 0;
}

/* ref: FUN_00c2e640 */
unsigned int F_00c2e640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar3 = 0;
    if (param_1 != 0) {
      uVar3 = F_004069f0(param_1 * 4);
      if (uVar3 == 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      }
    }
    F_00c46e20(uVar3,*(int *)this,(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = uVar3 + param_1 * 4;
    *(uint *)((int)this + 4) = uVar3 + (iVar2 - iVar1 >> 2) * 4;
  }
  return 0;
}

/* ref: FUN_00c2e6f0 */
uint F_00c2e6f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2e6f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00c2e720 */
unsigned int F_00c2e720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      F_00c2e5a0(this,uVar2);
      return 0;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    F_00c2e5a0(this,uVar2);
  }
  return 0;
}

/* ref: FUN_00c2e780 */
unsigned int F_00c2e780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e780u, gen_a0, gen_a1, 0u, 0u);
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
      F_00c2e640(this,uVar2);
      return 0;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    F_00c2e640(this,uVar2);
  }
  return 0;
}

/* ref: FUN_00c2e7f0 */
uint F_00c2e7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2e7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x290) != (undefined *)0x0) {
    F_00c31c30(*(undefined * PTR32 *)((int)this + 0x290));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x290);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    *(undefined4 *)((int)this + 0x290) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x358) = 0;
    *(undefined4 *)((int)this + 0x35c) = 0;
    F_00c30870(*(undefined * PTR32 *)((int)this + 0x288));
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x288);
    if (pvVar2 != (undefined *)0x0) {
      F_00c31190(pvVar2);
      F_00406ad0(pvVar2);
    }
    *(undefined4 *)((int)this + 0x288) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x360) = 0;
    *(undefined4 *)((int)this + 0x364) = 0;
    F_00c31310(*(undefined * PTR32 *)((int)this + 0x28c));
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x28c);
    if (pvVar2 != (undefined *)0x0) {
      F_00c318c0(pvVar2);
      F_00406ad0(pvVar2);
    }
    *(undefined4 *)((int)this + 0x28c) = 0;
  }
  uVar3 = F_004cc540(this);
  return uVar3;
}

/* ref: FUN_00c2e8b0 */
uint F_00c2e8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2e8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406ad0(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00c2e8e0 */
uint F_00c2e8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2e8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406ad0(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: Global::FinishLogout */
uint F_00c2e910(unsigned int gen_a0)
{
  GEN_ENTER(0xc2e910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int * piVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  F_00c30870(*(undefined * PTR32 *)((int)this + 0x288));
  if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
    F_00c31310(*(undefined * PTR32 *)((int)this + 0x28c));
  }
  uVar1 = *(undefined4 *)((int)this + 0x2a4);
  piVar2 = *(int * PTR32 *)((int)this + 0x2ac);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x2a8);
  F_00c2e7f0(this);
  bVar3 = F_00c2b160(this,uVar1);
  uVar4 = CONCAT31(extraout_var,bVar3);
  *(undefined4 *)((int)this + 0x2a8) = (*(undefined4 *)(gen_frame + 0x8));
  *(int * PTR32 *)((int)this + 0x2ac) = piVar2;
  if (piVar2 != (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar4;
}

/* ref: FUN_00c2e990 */
uint F_00c2e990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc2e990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  __time64_t _Var7;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (param_4 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x54)));
    (*(undefined4 *)(gen_frame + 0x5c)) = 6;
    ((undefined4 *)(gen_frame + 0x54))[0] = 0x7d5;
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)),"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0xb4)) = 0x32c9;
    ((code *)*(gen_code32 *)(*param_3 + 0x10))(param_3,((undefined4 *)(gen_frame + 0x54)),0);
    uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x60)));
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
    return CONCAT31((int3)(uVar6 >> 8),1);
  }
  pcVar1 = *(char * PTR32 *)(param_4 + 8);
  if ((*pcVar1 != '\0') && (0 < *(int *)(param_4 + 4))) {
    uVar2 = *(undefined4 *)((int)this + 0x2a8);
    uVar3 = *(undefined4 *)((int)this + 0x2ac);
    uVar4 = *(undefined4 *)((int)this + 0x2a4);
    F_00c2e7f0(this);
    F_00c2b160(this,uVar4);
    *(undefined4 *)((int)this + 0x2a8) = uVar2;
    *(undefined4 *)((int)this + 0x2ac) = uVar3;
    if (*(undefined * PTR32 *)(param_4 + 100) != (undefined *)0x0) {
      F_00c31c30(*(undefined * PTR32 *)(param_4 + 100));
      puVar5 = *(undefined4 * PTR32 *)(param_4 + 100);
      if (puVar5 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
      }
      *(undefined4 *)(param_4 + 100) = 0;
    }
    *(undefined1 *)(param_4 + 0x70) = 1;
    *(undefined4 *)(param_4 + 0x94) = param_2;
    *(undefined4 *)(param_4 + 0x90) = param_1;
    *(int * PTR32 *)(param_4 + 0x68) = param_3;
    _Var7 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)(param_4 + 0x78) = (int)_Var7;
    uVar6 = F_00427d90();
    *(ulonglong *)(param_4 + 0x80) = uVar6;
    uVar6 = F_00427e30();
    *(ulonglong *)(param_4 + 0x88) = uVar6;
    *(undefined4 *)((int)this + 0x304) = 0;
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
    return CONCAT31((int3)(uVar6 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_00c2eb30 */
uint F_00c2eb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2eb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  gen_size32 _Size;
  
  iVar2 = *(int *)((int)this + 4);
  uVar3 = *(uint *)this;
  if (param_1 < iVar2 - uVar3) {
    iVar1 = uVar3 + param_1;
    if (iVar1 != iVar2) {
      uVar3 = F_00c46e20(iVar1,iVar2,0);
      *(int *)((int)this + 4) = iVar1;
    }
  }
  else if (iVar2 - uVar3 < param_1) {
    F_00c2e720(this,(uVar3 - iVar2) + param_1);
    _Size = (*(int *)this - (int)*(undefined * PTR32 *)((int)this + 4)) + param_1;
    if (_Size != 0) {
      F_00c48350(*(undefined * PTR32 *)((int)this + 4),0,_Size);
    }
    *(uint *)((int)this + 4) = *(int *)this + param_1;
    return *(int *)this + param_1;
  }
  return uVar3;
}

/* ref: FUN_00c2eba0 */
unsigned int F_00c2eba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2eba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00c2e780(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00c2e780(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00c2ec50 */
uint F_00c2ec50(unsigned int gen_a0)
{
  GEN_ENTER(0xc2ec50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004cc540(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x66);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c2ec70 */
uint F_00c2ec70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ec70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  __time64_t _Var3;
  
  *(undefined4 *)this = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x66);
  *(undefined4 * PTR32 *)this = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  **(undefined4 * PTR32 *)this = this;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = *param_1;
  F_0042cbc0((undefined *)((int)this + 0x1c),param_1 + 1);
  *(undefined4 *)((int)this + 0x70) = param_1[0x16];
  F_0042cbc0((undefined *)((int)this + 0x74),param_1 + 0x17);
  *(undefined4 *)((int)this + 200) = param_1[0x2c];
  *(undefined4 *)((int)this + 0xcc) = param_1[0x2d];
  *(undefined4 *)((int)this + 0xd0) = param_1[0x2e];
  *(undefined4 *)((int)this + 0xd4) = param_1[0x2f];
  F_0042cbc0((undefined *)((int)this + 0xd8),param_1 + 0x30);
  F_0042cbc0((undefined *)((int)this + 300),param_1 + 0x45);
  *(undefined4 *)((int)this + 0x180) = param_1[0x5a];
  F_0042cbc0((undefined *)((int)this + 0x184),param_1 + 0x5b);
  F_0042cbc0((undefined *)((int)this + 0x1d8),param_1 + 0x70);
  F_0042cbc0((undefined *)((int)this + 0x22c),param_1 + 0x85);
  *(undefined1 *)((int)this + 0x280) = *(undefined1 *)(param_1 + 0x9b);
  *(undefined4 *)((int)this + 0x284) = param_1[0x9a];
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined2 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined1 *)((int)this + 0x2b8) = 0;
  F_00a1af40((undefined *)((int)this + 0x2c0));
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0x1e;
  F_00a1af40((undefined *)((int)this + 0x2e8));
  *(undefined4 *)((int)this + 0x300) = 0x1e;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  _Var3 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x30c) = (int)_Var3;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  F_00a1af40((undefined *)((int)this + 800));
  *(undefined1 *)((int)this + 0x338) = 0;
  F_00a1af40((undefined *)((int)this + 0x340));
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  F_00a1af40((undefined *)((int)this + 0x368));
  *(undefined4 *)((int)this + 0x380) = 3000;
  *(undefined4 *)((int)this + 900) = 0;
  F_00a1af40((undefined *)((int)this + 0x388));
  F_00a1af40((undefined *)((int)this + 0x3a0));
  *(undefined4 *)((int)this + 0x3b8) = REFG(float, 0x10916ec);
  *(undefined1 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c4) = param_1[0x9c];
  *(undefined4 *)((int)this + 0x3c8) = param_1[0x9d];
  *(undefined4 *)((int)this + 0x3cc) = param_1[0x9e];
  *(undefined4 *)((int)this + 0x3d0) = param_1[0x9f];
  F_00a1af40((undefined *)((int)this + 0x3d8));
  uVar2 = F_00ba7c10();
  if ((int)uVar2 < 0) {
    *(undefined1 *)((int)this + 0x2a1) = 1;
  }
  return (uint)this;
}

/* ref: FUN_00c2ef00 */
uint F_00c2ef00(unsigned int gen_a0)
{
  GEN_ENTER(0xc2ef00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x29c);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x29c) = 0;
  }
  F_00c2e490(this);
  F_00c2e7f0(this);
  F_00bacd70();
  F_0042c880((undefined *)((int)this + 0x22c));
  F_0042c880((undefined *)((int)this + 0x1d8));
  F_0042c880((undefined *)((int)this + 0x184));
  F_0042c880((undefined *)((int)this + 300));
  F_0042c880((undefined *)((int)this + 0xd8));
  F_0042c880((undefined *)((int)this + 0x74));
  F_0042c880((undefined *)((int)this + 0x1c));
  F_004cc540(this);
  uVar2 = F_00429760(*(undefined4 *)this,8,0x66);
  *(undefined4 *)this = 0;
  return (uint)uVar2;
}

/* ref: FUN_00c2efa0 */
uint F_00c2efa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2efa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined * pvVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  *(undefined1 *)((int)this + 0x2a0) = 1;
  uVar4 = param_1;
  if (0 < param_2) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x8)),(int)this + 0x184);
    F_01046b00(((undefined1 *)(gen_frame + 0x5c)));
    uVar1 = REFG(undefined4, 0x108cc50);
    uVar4 = F_0042a990(param_1);
    F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),uVar4,uVar1);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0xd4)));
    F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
    (*(undefined2 *)(gen_frame + 0xb0)) = (short)param_2;
    if (**(char * PTR32 *)((int)this + 300) != '\0') {
      F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),(*(undefined * PTR32 (*)[1])REFP(0x110f854)),REFG(undefined4, 0x108cc50));
      uVar4 = F_0042bba0((undefined *)((int)this + 300),((undefined1 *)(gen_frame + 0xd4)));
      F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0xb4)) = 0;
      }
      else {
        F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),&REFG(undefined, 0x110f84c),REFG(undefined4, 0x108cc50));
        uVar4 = F_0042bba0((undefined *)((int)this + 300),((undefined1 *)(gen_frame + 0xd4)));
        F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
        if (uVar4 == 0) {
          (*(undefined4 *)(gen_frame + 0xb4)) = 2;
        }
        else {
          F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),"RUDP2",REFG(undefined4, 0x108cc50));
          uVar4 = F_0042bba0((undefined *)((int)this + 300),((undefined1 *)(gen_frame + 0xd4)));
          F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
          if (uVar4 == 0) {
            (*(undefined4 *)(gen_frame + 0xb4)) = 3;
          }
        }
      }
    }
    if (param_3 != 0) {
      F_00c472af(((undefined1 *)(gen_frame + 0x128)),0x20,&REFG(undefined, 0x110f840),param_3);
      F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),((undefined1 *)(gen_frame + 0x128)),REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0xd4)));
      F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
    }
    uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x8)));
    F_00c2eb30(((int *)(gen_frame + 0xbc)),uVar4 + 1);
    iVar2 = ((int *)(gen_frame + 0xbc))[0];
    uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x8)));
    iVar5 = uVar4 + 1;
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x8)));
    F_00c46aa0(iVar2,uVar4,iVar5);
    (*(undefined2 *)(gen_frame + 0xba)) = 0x14d;
    (*(undefined4 *)(gen_frame + 0xcc)) = *(undefined4 *)((int)this + 0x3c4);
    (*(undefined4 *)(gen_frame + 0xd0)) = *(undefined4 *)((int)this + 0x3c8);
    if (*(int *)((int)this + 0x288) == 0) {
      pvVar6 = (undefined *)F_00406b90(0x7c,0,0);
      if (pvVar6 == (undefined *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = F_00c31240(pvVar6,((undefined1 *)(gen_frame + 0x5c)));
      }
      *(uint *)((int)this + 0x288) = uVar4;
    }
    if (((int *)(gen_frame + 0xbc))[0] != 0) {
      F_00406ad0(((int *)(gen_frame + 0xbc))[0]);
    }
    ((int *)(gen_frame + 0xbc))[0] = 0;
    ((int *)(gen_frame + 0xbc))[1] = 0;
    ((int *)(gen_frame + 0xbc))[2] = 0;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
    uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x8)));
    uVar4 = (uint)uVar7;
  }
  if (*(undefined * PTR32 *)((int)this + 0x288) == (undefined *)0x0) {
LAB_00c2f23a: ;
    if ((0 < param_2) && (*(char *)((int)this + 0x280) != '\0')) {
      F_0042cbc0(((undefined1 *)(gen_frame + 0x8)),(int)this + 0x184);
      F_00e35070(((undefined1 *)(gen_frame + 0x5c)));
      uVar1 = REFG(undefined4, 0x108cc50);
      uVar4 = F_0042a990(param_1);
      F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),uVar4,uVar1);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0xd4)));
      F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
      (*(undefined2 *)(gen_frame + 0xb0)) = (short)param_2;
      if (**(char * PTR32 *)((int)this + 300) != '\0') {
        F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),(*(undefined * PTR32 (*)[1])REFP(0x110f854)),REFG(undefined4, 0x108cc50));
        uVar4 = F_0042bba0((undefined *)((int)this + 300),((undefined1 *)(gen_frame + 0xd4)));
        F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
        if (uVar4 == 0) {
          (*(undefined4 *)(gen_frame + 0xb4)) = 0;
        }
        else {
          F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),&REFG(undefined, 0x110f84c),REFG(undefined4, 0x108cc50));
          uVar4 = F_0042bba0((undefined *)((int)this + 300),((undefined1 *)(gen_frame + 0xd4)));
          F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
          if (uVar4 == 0) {
            (*(undefined4 *)(gen_frame + 0xb4)) = 2;
          }
          else {
            F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),"RUDP2",REFG(undefined4, 0x108cc50));
            uVar4 = F_0042bba0((undefined *)((int)this + 300),((undefined1 *)(gen_frame + 0xd4)));
            F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
            if (uVar4 == 0) {
              (*(undefined4 *)(gen_frame + 0xb4)) = 3;
            }
          }
        }
      }
      if (param_3 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x128)),0x20,&REFG(undefined, 0x110f840),param_3);
        F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),((undefined1 *)(gen_frame + 0x128)),REFG(undefined4, 0x108cc50));
        F_0042ccf0(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0xd4)));
        F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
      }
      uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x8)));
      F_00c2eb30(((int *)(gen_frame + 0xbc)),uVar4 + 1);
      iVar2 = ((int *)(gen_frame + 0xbc))[0];
      uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x8)));
      iVar5 = uVar4 + 1;
      uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x8)));
      F_00c46aa0(iVar2,uVar4,iVar5);
      (*(undefined2 *)(gen_frame + 0xba)) = 0x14d;
      (*(undefined4 *)(gen_frame + 0xcc)) = *(undefined4 *)((int)this + 0x3cc);
      (*(undefined4 *)(gen_frame + 0xd0)) = *(undefined4 *)((int)this + 0x3d0);
      if (*(int *)((int)this + 0x28c) == 0) {
        pvVar6 = (undefined *)F_00406b90(0x7c,0,0);
        if (pvVar6 == (undefined *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = F_00c31970(pvVar6,((undefined1 *)(gen_frame + 0x5c)));
        }
        *(uint *)((int)this + 0x28c) = uVar4;
      }
      if (((int *)(gen_frame + 0xbc))[0] != 0) {
        F_00406ad0(((int *)(gen_frame + 0xbc))[0]);
      }
      ((int *)(gen_frame + 0xbc))[0] = 0;
      ((int *)(gen_frame + 0xbc))[1] = 0;
      ((int *)(gen_frame + 0xbc))[2] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
      uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x8)));
      uVar4 = (uint)uVar7;
    }
    if (*(undefined * PTR32 *)((int)this + 0x28c) == (undefined *)0x0) goto LAB_00c2f49b;
    bVar3 = F_00c312d0(*(undefined * PTR32 *)((int)this + 0x28c));
    uVar4 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 != 0) goto LAB_00c2f49b;
  }
  else {
    bVar3 = F_00c30830(*(undefined * PTR32 *)((int)this + 0x288));
    uVar4 = CONCAT31(extraout_var,bVar3);
    if (bVar3 != 0) goto LAB_00c2f23a;
  }
  uVar4 = F_00c2e7f0(this);
LAB_00c2f49b: ;
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return uVar4;
}

/* ref: FUN_00c2f4b0 */
uint F_00c2f4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2f4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x298) == 0) {
    pvVar1 = (undefined *)F_00406b90(0x28,0,0);
    if (pvVar1 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00e3c560(pvVar1,*(undefined4 *)((int)this + 0xd0));
    }
    *(uint *)((int)this + 0x298) = uVar2;
    pvVar1 = (undefined *)F_00406b90(0x98,0,0);
    if (pvVar1 == (undefined *)0x0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = (undefined *)F_00e3bcb0(pvVar1);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    *(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)this + 0x18);
    F_0042ccf0((undefined *)((int)pvVar1 + 8),(int)this + 0x1c);
    uVar2 = F_00e3bd60(*(undefined4 *)((int)this + 0x298));
    *(uint *)((int)pvVar1 + 0x5c) = uVar2;
    F_00c2eba0(*(undefined * PTR32 *)((int)this + 0x298),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    *(undefined4 *)((int)this + 0x2dc) = 0;
    pvVar1 = (undefined *)F_00406b90(0x98,0,0);
    if (pvVar1 == (undefined *)0x0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = (undefined *)F_00e3bcb0(pvVar1);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    *(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)this + 0x70);
    F_0042ccf0((undefined *)((int)pvVar1 + 8),(int)this + 0x74);
    uVar2 = F_00e3bd60(*(undefined4 *)((int)this + 0x298));
    *(uint *)((int)pvVar1 + 0x5c) = uVar2;
    F_00c2eba0(*(undefined * PTR32 *)((int)this + 0x298),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    *(undefined4 *)((int)this + 0x2e0) = 0;
  }
  puVar3 = (undefined4 *)F_00e3c380(*(undefined * PTR32 *)((int)this + 0x298));
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_1;
    return (uint)puVar3;
  }
  puVar3 = (undefined4 *)F_00e3c4e0(*(undefined * PTR32 *)((int)this + 0x298));
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_1;
  }
  return (uint)puVar3;
}

/* ref: FUN_00c2f5f0 */
undefined * F_00c2f5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2f5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  __time64_t _Var3;
  
  *(undefined4 *)this = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x66);
  *(undefined4 * PTR32 *)this = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  **(undefined4 * PTR32 *)this = this;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xd6d2;
  F_0042cc20((undefined *)((int)this + 0x1c),"xiv-0017",REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x70) = 0xd6d2;
  F_0042cc20((undefined *)((int)this + 0x74),"xiv-0017",REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 200) = 0x1e;
  *(undefined4 *)((int)this + 0xcc) = 5;
  *(undefined4 *)((int)this + 0xd0) = 1;
  *(undefined4 *)((int)this + 0xd4) = 0;
  F_0042cc20((undefined *)((int)this + 0xd8),"xiv-0017",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 300),(*(undefined * PTR32 (*)[1])REFP(0x110f854)),REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x180) = 0;
  F_0042cc20((undefined *)((int)this + 0x184),"10005",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x1d8),"dev_test",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x22c),&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
  *(undefined1 *)((int)this + 0x280) = 1;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined2 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined1 *)((int)this + 0x2b8) = 0;
  F_00a1af40((undefined *)((int)this + 0x2c0));
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0x1e;
  F_00a1af40((undefined *)((int)this + 0x2e8));
  *(undefined4 *)((int)this + 0x300) = 0x1e;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  _Var3 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x30c) = (int)_Var3;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  F_00a1af40((undefined *)((int)this + 800));
  *(undefined1 *)((int)this + 0x338) = 0;
  F_00a1af40((undefined *)((int)this + 0x340));
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  F_00a1af40((undefined *)((int)this + 0x368));
  *(undefined4 *)((int)this + 0x380) = 3000;
  *(undefined4 *)((int)this + 900) = 0;
  F_00a1af40((undefined *)((int)this + 0x388));
  F_00a1af40((undefined *)((int)this + 0x3a0));
  *(undefined4 *)((int)this + 0x3b8) = REFG(float, 0x10916ec);
  *(undefined1 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0x2d;
  *(undefined4 *)((int)this + 0x3c8) = 0x14;
  *(undefined4 *)((int)this + 0x3cc) = 600;
  *(undefined4 *)((int)this + 0x3d0) = 0x14;
  F_00a1af40((undefined *)((int)this + 0x3d8));
  uVar2 = F_00ba7c10();
  if ((int)uVar2 < 0) {
    *(undefined1 *)((int)this + 0x2a1) = 1;
  }
  return this;
}

/* ref: Global::ZoneClientUpdate */
uint F_00c2fb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2fb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc60];
  float fVar1;
  double dVar2;
  int * piVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  __time64_t _Var13;
  ulonglong uVar14;
  
  uVar7 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc50);
  (*(uint *)(gen_frame + 0xc4c)) = uVar7;
  if (*(undefined * PTR32 *)((int)this + 0x288) == (undefined *)0x0) goto LAB_00c302ef;
  F_00c308f0(*(undefined * PTR32 *)((int)this + 0x288));
  F_01050b60(((undefined1 *)(gen_frame + 0x8)));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  (*(float *)(gen_frame + 0xc)) = 0.0;
  (*(undefined8 *)(gen_frame + 0x10)) = 0;
  bVar6 = F_00c30890(*(undefined * PTR32 *)((int)this + 0x288),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  while (bVar6 != 0) {
    _Var13 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x388) = (int)_Var13;
    uVar14 = F_00427d90();
    *(ulonglong *)((int)this + 0x390) = uVar14;
    uVar14 = F_00427e30();
    *(ulonglong *)((int)this + 0x398) = uVar14;
    (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0xc));
    if ((*(float *)(gen_frame + 0xc)) == 0.0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
    }
    iVar8 = *(int *)(iVar8 + 8);
    if (*(char *)((int)this + 0x338) == '\0') {
      if (*(uint *)((int)this + 900) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)((int)this + 900) >> 1;
      }
      *(uint *)((int)this + 0x30c) = uVar7 / 1000 + iVar8;
      *(uint *)((int)this + 0x310) = uVar7 % 1000;
      *(undefined4 *)((int)this + 0x308) = 0;
      _Var13 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)((int)this + 800) = (int)_Var13;
      uVar14 = F_00427d90();
      *(ulonglong *)((int)this + 0x328) = uVar14;
      uVar14 = F_00427e30();
      *(ulonglong *)((int)this + 0x330) = uVar14;
      *(undefined1 *)((int)this + 0x338) = 1;
      _Var13 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)((int)this + 0x3d8) = (int)_Var13;
      uVar14 = F_00427d90();
      *(ulonglong *)((int)this + 0x3e0) = uVar14;
      uVar14 = F_00427e30();
      *(ulonglong *)((int)this + 1000) = uVar14;
    }
    if (*(uint *)((int)this + 900) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)((int)this + 900) >> 1;
    }
    *(uint *)((int)this + 0x308) =
         ((iVar8 - *(int *)((int)this + 0x30c)) * 1000 - *(int *)((int)this + 0x310)) + uVar7;
    if ((*(float *)(gen_frame + 0x1c)) == 0.0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)((int)gen_fl2bits((*(float *)(gen_frame + 0x1c))) + 0x14);
    }
    if ((uVar7 & 0x5ff80000) == 0x5ff80000) {
      uVar7 = 0x5ff80002 - ((uVar7 & 1) != 0);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x2a4);
    if (piVar3 != (int *)0x0) {
      if ((*(float *)(gen_frame + 0xc)) == 0.0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
      }
      ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,uVar7,uVar9);
    }
    if ((*(float *)(gen_frame + 0xc)) == 0.0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
    }
    if (*(short *)(iVar8 + 2) == 0x65) {
      uVar14 = F_00427d90();
      uVar7 = (uint)uVar14;
      if ((*(float *)(gen_frame + 0xc)) == 0.0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
      }
      uVar4 = *(uint *)(iVar8 + 0x10);
      if (uVar4 < uVar7) {
        iVar8 = uVar7 - uVar4;
      }
      else {
        iVar8 = (uVar7 - uVar4) + -1;
      }
      *(int *)((int)this + 900) = iVar8;
      if ((*(float *)(gen_frame + 0xc)) == 0.0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
      }
      if (99 < *(uint *)(iVar8 + 0x14)) {
        if ((*(float *)(gen_frame + 0xc)) == 0.0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
        }
        F_00c30920(*(undefined4 *)((int)this + 0x288),(uint)*(ushort *)(iVar8 + 0x14));
      }
    }
    else if (*(short *)(iVar8 + 2) == 0x19a) {
      piVar3 = *(int * PTR32 *)((int)this + 0x2a8);
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
      }
      (*(undefined4 *)(gen_frame + 0x28)) = 0x69;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0x18;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x44)) + 0)) = *(undefined4 *)((int)this + 0x3c0);
      (*(undefined8 *)(gen_frame + 0x44)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x44)) + 4)),*(undefined4 *)((int)this + 0x3c0));
      F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 8) + 0x10))))
              (*(int * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 8),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc))));
    (*(float *)(gen_frame + 0xc)) = 0.0;
    bVar6 = F_00c30890(*(undefined * PTR32 *)((int)this + 0x288),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  uVar14 = F_00427d90();
  iVar10 = (uint)uVar14 - *(uint *)((int)this + 0x3e0);
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f(((int)(uVar14 >> 0x20) - *(int *)((int)this + 0x3e4)) -
                         (uint)((uint)uVar14 < *(uint *)((int)this + 0x3e0)));
  _Var13 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x3d8) = (int)_Var13;
  uVar14 = F_00427d90();
  *(ulonglong *)((int)this + 0x3e0) = uVar14;
  uVar14 = F_00427e30();
  *(ulonglong *)((int)this + 1000) = uVar14;
  uVar14 = F_00427e30();
  iVar8 = (uint)uVar14 - *(uint *)((int)this + 0x398);
  uVar7 = ((int)(uVar14 >> 0x20) - *(int *)((int)this + 0x39c)) -
          (uint)((uint)uVar14 < *(uint *)((int)this + 0x398));
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = iVar8;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = uVar7 & 0x7fffffff;
  (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(uVar7,iVar8) & 0x7fffffffffffffff;
  fVar11 = (float10)(*(ulonglong *)(gen_frame + 0x20));
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = uVar7 & 0x80000000;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 0;
  (*(ulonglong *)(gen_frame + 0x20)) = (ulonglong)(uVar7 & 0x80000000) << 0x20;
  if ((float10)*(double *)&REFG(undefined, 0x110f888) <= -(float10)(longlong)(*(ulonglong *)(gen_frame + 0x20)) + fVar11) {
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = iVar10;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x7fffffff;
    (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))),iVar10) & 0x7fffffffffffffff;
    fVar11 = (float10)(*(ulonglong *)(gen_frame + 0x20));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x80000000;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 0;
    (*(ulonglong *)(gen_frame + 0x20)) = (ulonglong)((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x80000000) << 0x20;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x3b8) -
                   (-(float10)(longlong)(*(ulonglong *)(gen_frame + 0x20)) + fVar11) / (float10)*(double *)&REFG(undefined, 0x1094560))));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    *(float *)((int)this + 0x3b8) = fVar1;
    uVar9 = REFG(float, 0x110f878);
    if ((double)fVar1 < *(double *)&REFG(undefined, 0x110f880)) {
LAB_00c2ff99: ;
      *(undefined4 *)((int)this + 0x3b8) = uVar9;
    }
  }
  else {
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = iVar10;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x7fffffff;
    (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))),iVar10) & 0x7fffffffffffffff;
    fVar11 = (float10)(*(ulonglong *)(gen_frame + 0x20));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x80000000;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 0;
    (*(ulonglong *)(gen_frame + 0x20)) = (ulonglong)((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x80000000) << 0x20;
    fVar1 = ((float)GEN_TOF(((-(float10)(longlong)(*(ulonglong *)(gen_frame + 0x20)) + fVar11) / (float10)*(double *)&REFG(undefined, 0x1094560) +
                   (float10)*(float *)((int)this + 0x3b8))));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    *(float *)((int)this + 0x3b8) = fVar1;
    uVar9 = REFG(float, 0x10916ec);
    if (*(double *)&REFG(undefined, 0x1088118) < (double)fVar1) goto LAB_00c2ff99;
  }
  uVar7 = F_00c30900(*(undefined4 *)((int)this + 0x288));
  if ((int)uVar7 < 4) {
    uVar14 = F_00427d90();
    uVar7 = (uint)uVar14 - *(uint *)((int)this + 0x348);
    iVar8 = ((int)(uVar14 >> 0x20) - *(int *)((int)this + 0x34c)) -
            (uint)((uint)uVar14 < *(uint *)((int)this + 0x348));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = iVar8;
    (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(iVar8,(int)(*(ulonglong *)(gen_frame + 0x20)));
    if ((iVar8 != 0) || (9999 < uVar7)) {
      (*(undefined4 *)(gen_frame + 0x28)) = 0x65;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0x28;
      uVar14 = F_00427d90();
      (*(undefined4 *)(gen_frame + 0x54)) = 0;
      (*(undefined8 *)(gen_frame + 0x44)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = (int)uVar14;
      (*(undefined8 *)(gen_frame + 0x4c)) = 0;
      if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
        F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288),&(*(undefined4 *)(gen_frame + 0x28)),0x65,0);
      }
      _Var13 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)((int)this + 0x340) = (int)_Var13;
      uVar14 = F_00427d90();
      *(ulonglong *)((int)this + 0x348) = uVar14;
      uVar14 = F_00427e30();
      uVar7 = (uint)uVar14;
      *(ulonglong *)((int)this + 0x350) = uVar14;
    }
    if ((char)param_1 != '\0') {
      uVar7 = F_00c30be0(*(undefined4 *)((int)this + 0x288));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = uVar7;
      (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(uVar7,(int)(*(ulonglong *)(gen_frame + 0x20)));
      fVar11 = (float10)(int)uVar7;
      if ((int)uVar7 < 0) {
        fVar11 = fVar11 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      fVar12 = (float10)*(int *)((int)this + 0x380);
      if (*(int *)((int)this + 0x380) < 0) {
        fVar12 = fVar12 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      dVar2 = ((double)GEN_TOD(((fVar11 * (float10)*(double *)&REFG(undefined, 0x10912a8)) / fVar12)));
      fVar11 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar2),
                            (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 2)) = ((undefined2)0x27f);
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 0))));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = ((undefined2)0x27f) | 0xc00;
      (*(ulonglong *)(gen_frame + 0x20)) = (longlong)TRUNC(fVar11);
      lVar5 = (*(ulonglong *)(gen_frame + 0x20));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = (int)(longlong)TRUNC(fVar11);
      *(int *)((int)this + 0x358) = (int)(*(ulonglong *)(gen_frame + 0x20));
      (*(ulonglong *)(gen_frame + 0x20)) = lVar5;
      uVar7 = F_00c30bf0(*(undefined4 *)((int)this + 0x288));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = uVar7;
      (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(uVar7,(int)(*(ulonglong *)(gen_frame + 0x20)));
      fVar11 = (float10)(int)uVar7;
      if ((int)uVar7 < 0) {
        fVar11 = fVar11 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      fVar12 = (float10)*(int *)((int)this + 0x380);
      if (*(int *)((int)this + 0x380) < 0) {
        fVar12 = fVar12 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      dVar2 = ((double)GEN_TOD(((fVar11 * (float10)*(double *)&REFG(undefined, 0x10912a8)) / fVar12)));
      fVar11 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar2),
                            (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 2)) = ((undefined2)0x27f);
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 0))));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = ((undefined2)0x27f) | 0xc00;
      (*(ulonglong *)(gen_frame + 0x20)) = (longlong)TRUNC(fVar11);
      lVar5 = (*(ulonglong *)(gen_frame + 0x20));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = (int)(longlong)TRUNC(fVar11);
      *(int *)((int)this + 0x35c) = (int)(*(ulonglong *)(gen_frame + 0x20));
      (*(ulonglong *)(gen_frame + 0x20)) = lVar5;
      uVar7 = F_00c30c00(*(undefined4 *)((int)this + 0x288));
    }
  }
  else {
    uVar7 = F_00c30900(*(undefined4 *)((int)this + 0x288));
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar7);
    F_004cd120(this,&(*(float *)(gen_frame + 0x1c)));
    uVar7 = F_00c31260(*(undefined * PTR32 *)((int)this + 0x288));
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar7);
    F_004cd120(this,&(*(float *)(gen_frame + 0x1c)));
    _Var13 = F_00c4b7c2((__time64_t *)0x0);
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)_Var13);
    F_004cd120(this,&(*(float *)(gen_frame + 0x1c)));
    if (*(int *)((int)this + 0x2ac) != 0) {
      uVar7 = F_00c30900(*(undefined4 *)((int)this + 0x288));
      if (uVar7 == 4) {
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 1;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = 0x2775;
        (*(ulonglong *)(gen_frame + 0x20)) = 0x277500000001;
      }
      else {
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 2;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = 90000;
        (*(ulonglong *)(gen_frame + 0x20)) = 0x15f9000000002;
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2ac) + 4))))(*(int * PTR32 *)((int)this + 0x2ac),&(*(ulonglong *)(gen_frame + 0x20)));
    }
    F_00c30870(*(undefined * PTR32 *)((int)this + 0x288));
    if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
      F_00c31310(*(undefined * PTR32 *)((int)this + 0x28c));
    }
    uVar9 = *(undefined4 *)((int)this + 0x2a4);
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = *(undefined4 *)((int)this + 0x2ac);
    (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(*(undefined4 *)((int)this + 0x2ac),(int)(*(ulonglong *)(gen_frame + 0x20)));
    *(undefined4 *)((int)this + 0x3b8) = 0;
    (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x2a8);
    F_00c2e7f0(this);
    F_00c2b160(this,uVar9);
    *(float *)((int)this + 0x2a8) = (*(float *)(gen_frame + 0x1c));
    *(uint *)((int)this + 0x2ac) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
    uVar7 = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
  }
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  F_01050b70();
LAB_00c302ef: ;
  F_00c47745((*(uint *)(gen_frame + 0xc4c)) ^ (uint)(uint)(gen_frame + 0xc50));
  return uVar7;
}

/* ref: FUN_00c30310 */
uint F_00c30310(unsigned int gen_a0)
{
  GEN_ENTER(0xc30310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  undefined * pvVar6;
  __time64_t _Var7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  piVar1 = *(int * PTR32 *)((int)this + 0x304);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,0);
  }
  if (*(undefined * PTR32 *)((int)this + 0x298) == (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x294) = 0;
  }
  else {
    F_00e3c330(*(undefined * PTR32 *)((int)this + 0x298));
    uVar5 = F_00e3c350(*(undefined * PTR32 *)((int)this + 0x298));
    *(uint *)((int)this + 0x294) = uVar5;
    F_00e3c4d0(*(undefined * PTR32 *)((int)this + 0x298));
  }
  iVar2 = *(int *)((int)this + 0x294);
  if (((iVar2 != 0) && (*(char *)(iVar2 + 0x70) != '\0')) &&
     (_Var7 = F_00c4b7c2((__time64_t *)0x0), 0x1e < (uint)((int)_Var7 - *(int *)(iVar2 + 0x78)))) {
    F_00e3ee60(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x294) + 0x68))),*(int *)((int)this + 0x294));
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x294) + 0x70))) = 0;
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x2b0))) {
  case 0: ;
    iVar2 = *(int *)((int)this + 0x294);
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x70) != '\0')) {
      if (*(int *)(iVar2 + 100) == 0) {
        pvVar6 = (undefined *)F_00406b90(0x5c0,0,0);
        if (pvVar6 == (undefined *)0x0) {
          uVar5 = 0;
        }
        else {
          iVar2 = *(int *)((int)this + 0x294);
          uVar5 = F_00c31a70(pvVar6,iVar2 + 8,*(undefined4 *)(iVar2 + 4),(int)this + 0x184,iVar2);
        }
        *((uint *)GEN_TOP((*(int *)((int)this + 0x294) + 100))) = uVar5;
      }
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x294) + 100)));
      if ((iVar2 != 0) && (bVar4 = F_00e3e7d0(iVar2), bVar4 == 0)) {
        F_00e37350(((undefined1 *)(gen_frame + 0x10)));
        F_0042ccf0(((undefined1 *)(gen_frame + 0x10)),*(int *)((int)this + 0x294) + 8);
        iVar2 = *(int *)((int)this + 0x294);
        (*(undefined2 *)(gen_frame + 0x64)) = *(undefined2 *)(iVar2 + 4);
        F_00e3efd0(*(undefined * PTR32 *)(iVar2 + 100),((undefined1 *)(gen_frame + 0x10)),*(undefined4 *)(iVar2 + 0x90),
                     *(undefined4 *)(iVar2 + 0x94),*(undefined4 *)(iVar2 + 0x68));
        *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x294) + 0x70))) = 0;
        F_0042c880(((undefined1 *)(gen_frame + 0x10)));
      }
    }
    if (*(int *)((int)this + 0x290) != 0) {
      *(undefined4 *)((int)this + 0x2b0) = 1;
    }
    break;
  case 1: ;
    F_00c2f870(this);
    if (*(char *)((int)this + 0x2a0) != '\0') {
      piVar1 = *(int * PTR32 *)((int)this + 0x304);
      *(undefined4 *)((int)this + 0x2b0) = 3;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,0);
        *(undefined4 *)((int)this + 0x304) = 0;
        F_00c2e490(this);
      }
    }
    break;
  case 2: ;
  case 3: ;
    *(undefined4 *)((int)this + 0x2b0) = 4;
  }
  if ((*(int *)((int)this + 0x294) != 0) &&
     (pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x294) + 100))), pvVar6 != (undefined *)0x0)) {
    F_00c338f0(pvVar6);
  }
  uVar5 = *(uint *)((int)this + 0x2b0);
  if (((0 < (int)uVar5) && (*(char *)((int)this + 0x2a0) != '\0')) && (uVar5 != 5)) {
    _Var7 = F_00c4b7c2((__time64_t *)0x0);
    uVar5 = (int)_Var7 - *(int *)((int)this + 0x2e8);
    if ((*(uint *)((int)this + 0x300) < uVar5) && (*(int *)((int)this + 0x2ac) != 0)) {
      if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
        F_00c30870(*(undefined * PTR32 *)((int)this + 0x288));
      }
      if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
        F_00c31310(*(undefined * PTR32 *)((int)this + 0x28c));
      }
      uVar3 = *(undefined4 *)((int)this + 0x2a4);
      piVar1 = *(int * PTR32 *)((int)this + 0x2ac);
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 0x2a8);
      F_00c2e7f0(this);
      F_00c2b160(this,uVar3);
      *(undefined4 *)((int)this + 0x2a8) = (*(undefined4 *)(gen_frame + 0xc));
      *(int * PTR32 *)((int)this + 0x2ac) = piVar1;
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x2776;
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,&(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar5;
}

/* ref: FUN_00c305d0 */
uint F_00c305d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc305d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c2efa0(this,param_1,(uint)*(ushort *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 0x58),param_1 + 0x5c,param_1 + 0xb0);
  return uVar1;
}

/* ref: Application::Network::MyGameLoginCallback::vf23 */
unsigned int F_00c30600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0) {
    F_00c2efa0(*(undefined * PTR32 *)(this + 4),param_1,(uint)*(ushort *)(param_1 + 0x54),
                 *(undefined4 *)(param_1 + 0x58),param_1 + 0x5c,param_1 + 0xb0);
  }
  return 0;
}

/* ref: FUN_00c30630 */
uint F_00c30630(unsigned int gen_a0)
{
  GEN_ENTER(0xc30630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this_00;
  uint uVar1;
  ulonglong uVar2;
  __time64_t _Var3;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar1 = (*(uint *)(gen_frame + 0x4)) >> 8;
  (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffffff00;
  uVar2 = F_00427d90();
  if (((int)(uVar2 >> 0x20) - *(int *)((int)this + 0x374) !=
       (uint)((uint)uVar2 < *(uint *)((int)this + 0x370))) ||
     (*(uint *)((int)this + 0x380) <= (uint)uVar2 - *(uint *)((int)this + 0x370))) {
    (*(uint *)(gen_frame + 0x4)) = CONCAT31((int3)uVar1,1);
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x368) = (int)_Var3;
    uVar2 = F_00427d90();
    *(ulonglong *)((int)this + 0x370) = uVar2;
    uVar2 = F_00427e30();
    *(ulonglong *)((int)this + 0x378) = uVar2;
  }
  if (*(int *)((int)this + 0x2b0) == 4) {
    F_00c2fb20(this,(*(uint *)(gen_frame + 0x4)));
    if (((*(undefined * PTR32 *)((int)this + 0x28c) == (undefined *)0x0) ||
        (uVar1 = F_00c31990(*(undefined * PTR32 *)((int)this + 0x28c)), uVar1 != 0)) &&
       (this_00 = *(undefined * PTR32 *)((int)this + 0x288), this_00 != (undefined *)0x0)) {
      uVar1 = F_00c2aac0(((undefined1 *)(gen_frame + 0x8)),0,0,0,0,0,0,0,0,0,0,0,"client",&REFG(undefined1, 0x107fc63));
      uVar1 = F_00c308b0(this_00,uVar1,0,0);
      if ((char)uVar1 != '\0') {
        *(undefined4 *)((int)this + 0x2b0) = 5;
        F_00c2e490(this);
      }
    }
  }
  else if (*(int *)((int)this + 0x2b0) == 5) {
    F_00c2fb20(this,(*(uint *)(gen_frame + 0x4)));
    goto LAB_00c30764;
  }
  F_00c30310(this);
LAB_00c30764: ;
  F_00bada50();
  uVar2 = F_00427d90();
  uVar1 = (uint)uVar2 - *(uint *)((int)this + 0x3a8);
  if (((int)(uVar2 >> 0x20) - *(int *)((int)this + 0x3ac) !=
       (uint)((uint)uVar2 < *(uint *)((int)this + 0x3a8))) || (99 < uVar1)) {
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x3a0) = (int)_Var3;
    uVar2 = F_00427d90();
    *(ulonglong *)((int)this + 0x3a8) = uVar2;
    uVar2 = F_00427e30();
    *(ulonglong *)((int)this + 0x3b0) = uVar2;
    F_01050d70((undefined *)((int)this + 0x308));
    uVar1 = F_00c2e050(this,(*(uint *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar1;
}

/* ref: FUN_00c307f0 */
uint F_00c307f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc307f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00c30830 */
byte F_00c30830(unsigned int gen_a0)
{
  GEN_ENTER(0xc30830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(200,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_01047a50(this_00,this);
    *(uint *)((int)this + 0x78) = uVar1;
    return uVar1 != 0;
  }
  *(undefined4 *)((int)this + 0x78) = 0;
  return 0;
}

/* ref: FUN_00c30870 */
unsigned int F_00c30870(unsigned int gen_a0)
{
  GEN_ENTER(0xc30870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  return 0;
}

/* ref: FUN_00c30890 */
byte F_00c30890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    bVar1 = F_01047bd0(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c308b0 */
uint F_00c308b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc308b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x4)) = param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = param_3;
    bVar1 = F_01047820(*(undefined * PTR32 *)((int)this + 0x78),param_1,&(*(undefined4 *)(gen_frame + 0x4)));
    return CONCAT31(extraout_var,bVar1);
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00c308f0 */
unsigned int F_00c308f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc308f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_01047b20(*(undefined * PTR32 *)((int)this + 0x78));
    return 0;
  }
  return 0;
}

/* ref: FUN_00c30900 */
uint F_00c30900(unsigned int gen_a0)
{
  GEN_ENTER(0xc30900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0xc0)));
}

/* ref: FUN_00c30920 */
unsigned int F_00c30920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 0x78) != 0) {
    F_010477e0(*(int *)(in_ecx + 0x78),param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_00c30990 */
unsigned int F_00c30990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *(undefined4 *)((int)this + 0xc) = param_1[3];
    *(undefined4 *)((int)this + 0x10) = param_1[4];
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    *(undefined4 *)((int)this + 0x18) = param_1[6];
    *(undefined4 *)((int)this + 0x1c) = param_1[7];
    *(undefined4 *)((int)this + 0x28) = param_1[10];
    *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
    *(undefined4 *)((int)this + 0x20) = param_1[8];
    *(undefined4 *)((int)this + 0x24) = param_1[9];
  }
  return 0;
}

/* ref: FUN_00c30a00 */
byte F_00c30a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c30a30 */
uint F_00c30a30(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c30a40 */
uint F_00c30a40(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c30a50 */
uint F_00c30a50(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c30a60 */
uint F_00c30a60(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c30a70 */
uint F_00c30a70(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c30a90 */
uint F_00c30a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30aa0 */
byte F_00c30aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c30ac0 */
byte F_00c30ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c30ae0 */
uint F_00c30ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xc30ae0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c30af0 */
uint F_00c30af0(unsigned int gen_a0)
{
  GEN_ENTER(0xc30af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c30b00 */
uint F_00c30b00(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c30b10 */
uint F_00c30b10(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c30b20 */
uint F_00c30b20(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c30b50 */
uint F_00c30b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30b80 */
uint F_00c30b80(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c30b90 */
uint F_00c30b90(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c30ba0 */
uint F_00c30ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xc30ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10c8));
  iVar1 = *(int *)((int)this + 0x10a4);
  iVar2 = *(int *)((int)this + 0x10a0);
  iVar3 = *(int *)((int)this + 0x34);
  iVar4 = *(int *)((int)this + 0x30);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10c8));
  return ((iVar1 - iVar2) - iVar3) + iVar4;
}

/* ref: FUN_00c30be0 */
uint F_00c30be0(unsigned int gen_a0)
{
  GEN_ENTER(0xc30be0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  uVar1 = F_01044460(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))));
  return uVar1;
}

/* ref: FUN_00c30bf0 */
uint F_00c30bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xc30bf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  uVar1 = F_01044480(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))));
  return uVar1;
}

/* ref: FUN_00c30c00 */
uint F_00c30c00(unsigned int gen_a0)
{
  GEN_ENTER(0xc30c00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) != 0) {
    uVar1 = F_010444a0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00c30c10 */
uint F_00c30c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)((int)this + 8);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (param_1 != puVar2) {
    *param_1 = *puVar2;
    param_1[1] = *(undefined4 *)(iVar1 + 0x24);
    param_1[2] = *(undefined4 *)(iVar1 + 0x28);
    param_1[3] = *(undefined4 *)(iVar1 + 0x2c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x30);
    param_1[5] = *(undefined4 *)(iVar1 + 0x34);
    param_1[6] = *(undefined4 *)(iVar1 + 0x38);
    param_1[7] = *(undefined4 *)(iVar1 + 0x3c);
    param_1[10] = *(undefined4 *)(iVar1 + 0x48);
    param_1[0xb] = *(undefined4 *)(iVar1 + 0x4c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x40);
    puVar2 = *(undefined4 * PTR32 *)(iVar1 + 0x44);
    param_1[9] = puVar2;
  }
  return (uint)puVar2;
}

/* ref: FUN_00c30cc0 */
uint F_00c30cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30ce0 */
uint F_00c30ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30d10 */
uint F_00c30d10(unsigned int gen_a0)
{
  GEN_ENTER(0xc30d10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c30d20 */
uint F_00c30d20(unsigned int gen_a0)
{
  GEN_ENTER(0xc30d20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c30d30 */
undefined4 * F_00c30d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00c30d60 */
undefined4 * F_00c30d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00c30dd0 */
unsigned int F_00c30dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_00c30c10(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00c30e90 */
uint F_00c30e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30ea0 */
uint F_00c30ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30eb0 */
uint F_00c30eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c30ef0 */
uint F_00c30ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c30f30 */
unsigned int F_00c30f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  if (param_1 != (undefined4 *)(iVar1 + 0x20)) {
    *param_1 = *(undefined4 *)(iVar1 + 0x20);
    param_1[1] = *(undefined4 *)(iVar1 + 0x24);
    param_1[2] = *(undefined4 *)(iVar1 + 0x28);
    param_1[3] = *(undefined4 *)(iVar1 + 0x2c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x30);
    param_1[5] = *(undefined4 *)(iVar1 + 0x34);
    param_1[6] = *(undefined4 *)(iVar1 + 0x38);
    param_1[7] = *(undefined4 *)(iVar1 + 0x3c);
    param_1[10] = *(undefined4 *)(iVar1 + 0x48);
    param_1[0xb] = *(undefined4 *)(iVar1 + 0x4c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x40);
    param_1[9] = *(undefined4 *)(iVar1 + 0x44);
  }
  iVar1 = *(int *)((int)this + 8);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  return 0;
}

/* ref: FUN_00c30fc0 */
uint F_00c30fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30fc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c30fd0 */
uint F_00c30fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30fd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c30fe0 */
uint F_00c30fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c31050 */
uint F_00c31050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c310c0 */
unsigned int F_00c310c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc310c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_00c30f30(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00c310e0 */
uint F_00c310e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc310e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))();
  piVar2 = (int *)F_00c30fe0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*piVar2 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar1 = *(uint *)(*piVar2 + 0x10);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
    return uVar1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
  return 0;
}

/* ref: FUN_00c31130 */
uint F_00c31130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31130u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))))();
  F_00c31050(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
    return 0;
  }
  uVar1 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
  return uVar1;
}

/* ref: FUN_00c31190 */
uint F_00c31190(unsigned int gen_a0)
{
  GEN_ENTER(0xc31190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406ad0(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar2 = F_0042c880(this);
  return (uint)uVar2;
}

/* ref: FUN_00c311d0 */
uint F_00c311d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc311d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xbc) == 0) {
    return 0;
  }
  (*(int *)(gen_frame + 0x8)) = *(int *)((int)this + 0xbc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
  piVar1 = (int *)F_00c30fe0((undefined *)((int)this + 0x1c),((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
  if (*piVar1 == *(int *)((int)this + 0x20)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  }
  else {
    this_00 = *(undefined * PTR32 *)(*piVar1 + 0x10);
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_00c31130(this_00,*(undefined4 *)((int)this + 0xbc));
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00c31240 */
uint F_00c31240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_01046cd0(this,param_1);
  *(undefined4 *)((int)this + 0x78) = 0;
  return (uint)this;
}

/* ref: FUN_00c31260 */
uint F_00c31260(unsigned int gen_a0)
{
  GEN_ENTER(0xc31260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    uVar1 = F_00c311d0(*(undefined * PTR32 *)((int)this + 0x78));
    if (uVar1 != 0) {
      if (*(int *)(uVar1 + 0x20) != 0) {
        return *((uint *)GEN_TOP((*(int *)(uVar1 + 0x20) + 8)));
      }
      return *(uint *)(uVar1 + 0x1c);
    }
  }
  return 0;
}

/* ref: FUN_00c312d0 */
byte F_00c312d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc312d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0xc4,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00e28fa0(this_00,this);
    *(uint *)((int)this + 0x78) = uVar1;
    return uVar1 != 0;
  }
  *(undefined4 *)((int)this + 0x78) = 0;
  return 0;
}

/* ref: FUN_00c31310 */
unsigned int F_00c31310(unsigned int gen_a0)
{
  GEN_ENTER(0xc31310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  return 0;
}

/* ref: FUN_00c31330 */
byte F_00c31330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    bVar1 = F_00e290e0(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c31350 */
uint F_00c31350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    bVar1 = F_00e28d90(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return CONCAT31(extraout_var,bVar1);
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00c31370 */
unsigned int F_00c31370(unsigned int gen_a0)
{
  GEN_ENTER(0xc31370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_00e29060(*(undefined * PTR32 *)((int)this + 0x78));
    return 0;
  }
  return 0;
}

/* ref: FUN_00c313b0 */
byte F_00c313b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc313b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c313d0 */
uint F_00c313d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc313d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c313e0 */
uint F_00c313e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc313e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c313f0 */
uint F_00c313f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc313f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c31400 */
uint F_00c31400(unsigned int gen_a0)
{
  GEN_ENTER(0xc31400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c31410 */
uint F_00c31410(unsigned int gen_a0)
{
  GEN_ENTER(0xc31410u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c31430 */
uint F_00c31430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31440 */
byte F_00c31440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c31460 */
byte F_00c31460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c31480 */
uint F_00c31480(unsigned int gen_a0)
{
  GEN_ENTER(0xc31480u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c31490 */
uint F_00c31490(unsigned int gen_a0)
{
  GEN_ENTER(0xc31490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c314a0 */
uint F_00c314a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc314a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c314b0 */
uint F_00c314b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc314b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c314c0 */
uint F_00c314c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc314c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c314f0 */
uint F_00c314f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc314f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31510 */
uint F_00c31510(unsigned int gen_a0)
{
  GEN_ENTER(0xc31510u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c31520 */
uint F_00c31520(unsigned int gen_a0)
{
  GEN_ENTER(0xc31520u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c31550 */
uint F_00c31550(unsigned int gen_a0)
{
  GEN_ENTER(0xc31550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  uVar1 = F_00e33cd0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))));
  return uVar1;
}

/* ref: FUN_00c31560 */
uint F_00c31560(unsigned int gen_a0)
{
  GEN_ENTER(0xc31560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  uVar1 = F_00e33cf0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))));
  return uVar1;
}

/* ref: FUN_00c31570 */
uint F_00c31570(unsigned int gen_a0)
{
  GEN_ENTER(0xc31570u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) != 0) {
    uVar1 = F_00e33d10(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00c315a0 */
uint F_00c315a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc315a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c315c0 */
uint F_00c315c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc315c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c315e0 */
uint F_00c315e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc315e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c315f0 */
uint F_00c315f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc315f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c31600 */
undefined4 * F_00c31600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00c31630 */
undefined4 * F_00c31630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00c31670 */
uint F_00c31670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31680 */
uint F_00c31680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31690 */
uint F_00c31690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c316d0 */
uint F_00c316d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc316d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c31710 */
uint F_00c31710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c31720 */
uint F_00c31720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c31730 */
uint F_00c31730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c317a0 */
uint F_00c317a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc317a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c31810 */
uint F_00c31810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31810u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))();
  piVar2 = (int *)F_00c31730(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*piVar2 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar1 = *(uint *)(*piVar2 + 0x10);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
    return uVar1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
  return 0;
}

/* ref: FUN_00c31860 */
uint F_00c31860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31860u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))))();
  F_00c317a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
    return 0;
  }
  uVar1 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
  return uVar1;
}

/* ref: FUN_00c318c0 */
uint F_00c318c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc318c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406ad0(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar2 = F_0042c880(this);
  return (uint)uVar2;
}

/* ref: FUN_00c31900 */
uint F_00c31900(unsigned int gen_a0)
{
  GEN_ENTER(0xc31900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xbc) == 0) {
    return 0;
  }
  (*(int *)(gen_frame + 0x8)) = *(int *)((int)this + 0xbc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
  piVar1 = (int *)F_00c31730((undefined *)((int)this + 0x1c),((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
  if (*piVar1 == *(int *)((int)this + 0x20)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  }
  else {
    this_00 = *(undefined * PTR32 *)(*piVar1 + 0x10);
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_00c31860(this_00,*(undefined4 *)((int)this + 0xbc));
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00c31970 */
uint F_00c31970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00e351c0(this,param_1);
  *(undefined4 *)((int)this + 0x78) = 0;
  return (uint)this;
}

/* ref: FUN_00c31990 */
uint F_00c31990(unsigned int gen_a0)
{
  GEN_ENTER(0xc31990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    uVar1 = F_00c31900(*(undefined * PTR32 *)((int)this + 0x78));
    if (uVar1 != 0) {
      if (*(int *)(uVar1 + 0x20) != 0) {
        return *((uint *)GEN_TOP((*(int *)(uVar1 + 0x20) + 8)));
      }
      return *(uint *)(uVar1 + 0x1c);
    }
  }
  return 0;
}

/* ref: FUN_00c319e0 */
byte F_00c319e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc319e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this != 0) && (*(int *)this == *param_1)) {
    return *(int *)((int)this + 4) == param_1[1];
  }
  return 0;
}

/* ref: FUN_00c31a30 */
uint F_00c31a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  LOCK();
  uVar1 = *(uint *)this;
  if (param_1 == uVar1) {
    *(undefined4 *)this = param_2;
    uVar1 = param_1;
  }
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00c31a50 */
uint F_00c31a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_00c31a70 */
uint F_00c31a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc31a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00e40eb0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110f8a0));
  F_00e37350((undefined *)((int)this + 0x358));
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  F_0042cbc0((undefined *)((int)this + 0x3b8),param_3);
  F_0042b630((int)this + 0x40c);
  F_0042b630((int)this + 0x460);
  F_0042b630((int)this + 0x4b4);
  *(undefined2 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x510) = 0;
  F_0042b630((int)this + 0x514);
  F_0042b630((int)this + 0x568);
  F_0042ccf0((undefined *)((int)this + 0x358),param_1);
  *(undefined2 *)((int)this + 0x3ac) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x350) = param_4;
  return (uint)this;
}

/* ref: FUN_00c31b30 */
uint F_00c31b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0((undefined *)((int)this + 0x460),param_1);
  return uVar1;
}

/* ref: FUN_00c31b40 */
uint F_00c31b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(char *)*param_1 != '\0') {
    bVar1 = F_0042b6a0(param_1,&REFG(undefined, 0x10c4408));
    if (bVar1 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x110f8a4),REFG(undefined4, 0x108cc50));
      F_0042ccf0((undefined *)((int)this + 0x40c),((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar2 = F_0042e360((undefined *)((int)this + 0x40c),param_1);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return uVar2;
    }
  }
  uVar2 = F_0042aca0((int)this + 0x40c);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00c31be0 */
byte F_00c31be0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0xe0,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00e47780(this_00,(int)this + 0x358);
    *(uint *)((int)this + 0x3b0) = uVar1;
    return uVar1 != 0;
  }
  *(undefined4 *)((int)this + 0x3b0) = 0;
  return 0;
}

/* ref: FUN_00c31c30 */
unsigned int F_00c31c30(unsigned int gen_a0)
{
  GEN_ENTER(0xc31c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x3b0);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x3b0) = 0;
  }
  return 0;
}

/* ref: FUN_00c31c60 */
uint F_00c31c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x3b0) != (undefined *)0x0) {
    bVar1 = F_00e47880(*(undefined * PTR32 *)((int)this + 0x3b0),param_1);
    return CONCAT31(extraout_var,bVar1);
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00c31c80 */
byte F_00c31c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc31c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  if (*(int *)((int)this + 0x3b0) != 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = param_3;
    bVar1 = F_00e476f0(param_1,&(*(undefined4 *)(gen_frame + 0x4)));
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c31cd0 */
byte F_00c31cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x3b4) != 3) && (*(int *)(in_ecx + 0x3b4) != 4)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c31cf0 */
byte F_00c31cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31cf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x3b4) == 2;
}

/* ref: FUN_00c31d00 */
byte F_00c31d00(unsigned int gen_a0)
{
  GEN_ENTER(0xc31d00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x3b4) != 2) {
    return 0;
  }
  if ((**(char * PTR32 *)(in_ecx + 0x4b4) != '\0') && (*(short *)(in_ecx + 0x508) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c31d30 */
unsigned int F_00c31d30(unsigned int gen_a0)
{
  GEN_ENTER(0xc31d30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x3b4) == 2) {
    *(undefined4 *)(in_ecx + 0x3b4) = 0;
  }
  return 0;
}

/* ref: FUN_00c31dc0 */
uint F_00c31dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31dc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_01050b60(in_ecx + 2);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  return (uint)in_ecx;
}

/* ref: PacketBufferTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00c31de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c31e60 */
uint F_00c31e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00c31e70 */
uint F_00c31e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31e70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00c31e80 */
uint F_00c31e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31e80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00c31ea0 */
byte F_00c31ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c31ec0 */
uint F_00c31ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c31ed0 */
uint F_00c31ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ed0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c31ee0 */
uint F_00c31ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c31ef0 */
uint F_00c31ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ef0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c31f00 */
uint F_00c31f00(unsigned int gen_a0)
{
  GEN_ENTER(0xc31f00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c31f10 */
uint F_00c31f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31f10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00c31f40 */
uint F_00c31f40(unsigned int gen_a0)
{
  GEN_ENTER(0xc31f40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c31f50 */
uint F_00c31f50(unsigned int gen_a0)
{
  GEN_ENTER(0xc31f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c31f60 */
uint F_00c31f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31f70 */
byte F_00c31f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c31f90 */
byte F_00c31f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c31fb0 */
byte F_00c31fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c31fd0 */
byte F_00c31fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c31ff0 */
uint F_00c31ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c32000 */
uint F_00c32000(unsigned int gen_a0)
{
  GEN_ENTER(0xc32000u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c32010 */
uint F_00c32010(unsigned int gen_a0)
{
  GEN_ENTER(0xc32010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c32020 */
uint F_00c32020(unsigned int gen_a0)
{
  GEN_ENTER(0xc32020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c32030 */
uint F_00c32030(unsigned int gen_a0)
{
  GEN_ENTER(0xc32030u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c32040 */
uint F_00c32040(unsigned int gen_a0)
{
  GEN_ENTER(0xc32040u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c32050 */
uint F_00c32050(unsigned int gen_a0)
{
  GEN_ENTER(0xc32050u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c32060 */
uint F_00c32060(unsigned int gen_a0)
{
  GEN_ENTER(0xc32060u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c32070 */
uint F_00c32070(unsigned int gen_a0)
{
  GEN_ENTER(0xc32070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c32080 */
uint F_00c32080(unsigned int gen_a0)
{
  GEN_ENTER(0xc32080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c320c0 */
uint F_00c320c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc320c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c320d0 */
uint F_00c320d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc320d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32130 */
unsigned int F_00c32130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined4 *)((int)this + 0xc) != param_1) {
    *(undefined4 *)((int)this + 0xc) = *param_1;
    *(undefined4 *)((int)this + 0x10) = param_1[1];
  }
  return 0;
}

/* ref: FUN_00c32180 */
uint F_00c32180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32190 */
uint F_00c32190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00c321c0 */
uint F_00c321c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc321c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c321d0 */
uint F_00c321d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc321d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c321e0 */
uint F_00c321e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc321e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c32250 */
uint F_00c32250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c32280 */
uint F_00c32280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00c322a0 */
byte F_00c322a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc322a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c322d0 */
uint F_00c322d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc322d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c322f0 */
uint F_00c322f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc322f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c32300 */
uint F_00c32300(unsigned int gen_a0)
{
  GEN_ENTER(0xc32300u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x15555556) && (uVar1 = F_004069f0(param_1 * 0xc), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00c323a0 */
byte F_00c323a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc323a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c323c0 */
uint F_00c323c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc323c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c323d0 */
uint F_00c323d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc323d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c323e0 */
unsigned int F_00c323e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc323e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00c32400 */
uint F_00c32400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32410 */
byte F_00c32410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0xc) == *(int *)this)) {
    return *(int *)(param_1 + 0x10) == *(int *)((int)this + 4);
  }
  return 0;
}

/* ref: FUN_00c32440 */
uint F_00c32440(unsigned int gen_a0)
{
  GEN_ENTER(0xc32440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10e0));
  iVar1 = *(int *)((int)this + 0x10a4);
  iVar2 = *(int *)((int)this + 0x10a0);
  iVar3 = *(int *)((int)this + 0x34);
  iVar4 = *(int *)((int)this + 0x30);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10e0));
  return ((iVar1 - iVar2) - iVar3) + iVar4;
}

/* ref: FUN_00c32480 */
uint F_00c32480(unsigned int gen_a0)
{
  GEN_ENTER(0xc32480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x3b0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110f8a0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x3b0) = 0;
  }
  F_0042c880((undefined *)((int)this + 0x568));
  F_0042c880((undefined *)((int)this + 0x514));
  F_0042c880((undefined *)((int)this + 0x4b4));
  F_0042c880((undefined *)((int)this + 0x460));
  F_0042c880((undefined *)((int)this + 0x40c));
  F_0042c880((undefined *)((int)this + 0x3b8));
  F_0042c880((undefined *)((int)this + 0x358));
  uVar2 = F_00e40a10(this);
  return uVar2;
}

/* ref: FUN_00c32510 */
uint F_00c32510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)((int)this + 8);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (param_1 != puVar2) {
    *param_1 = *puVar2;
    param_1[1] = *(undefined4 *)(iVar1 + 0x24);
    param_1[2] = *(undefined4 *)(iVar1 + 0x28);
    param_1[3] = *(undefined4 *)(iVar1 + 0x2c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x30);
    param_1[5] = *(undefined4 *)(iVar1 + 0x34);
    param_1[6] = *(undefined4 *)(iVar1 + 0x38);
    param_1[7] = *(undefined4 *)(iVar1 + 0x3c);
    param_1[10] = *(undefined4 *)(iVar1 + 0x48);
    param_1[0xb] = *(undefined4 *)(iVar1 + 0x4c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x40);
    puVar2 = *(undefined4 * PTR32 *)(iVar1 + 0x44);
    param_1[9] = puVar2;
  }
  return (uint)puVar2;
}

/* ref: FUN_00c32590 */
uint F_00c32590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c325c0 */
uint F_00c325c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc325c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c325d0 */
uint F_00c325d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc325d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c325e0 */
uint F_00c325e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc325e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x38))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*param_2,0);
  if (uVar2 != 0) {
    *(uint *)(param_1 + 0xc) = uVar2;
    return param_1;
  }
  return 0;
}

/* ref: FUN_00c32660 */
uint F_00c32660(unsigned int gen_a0)
{
  GEN_ENTER(0xc32660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c32670 */
uint F_00c32670(unsigned int gen_a0)
{
  GEN_ENTER(0xc32670u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c32680 */
uint F_00c32680(unsigned int gen_a0)
{
  GEN_ENTER(0xc32680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c326a0 */
undefined4 * F_00c326a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc326a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00c326d0 */
undefined4 * F_00c326d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc326d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00c32700 */
undefined4 * F_00c32700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00c32730 */
uint F_00c32730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32740 */
uint F_00c32740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (((-1 < param_1) || ((uint)-param_1 <= (uint)piVar1[8])) &&
     ((param_1 < 1 || ((uint)(piVar1[8] + param_1) < 0x241)))) {
    if (param_1 != 0) {
      piVar1[8] = piVar1[8] + param_1;
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1);
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)piVar1;
  }
  piVar1[8] = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)piVar1;
}

/* ref: FUN_00c327b0 */
byte F_00c327b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc327b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c327f0 */
uint F_00c327f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc327f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x15555556) && (uVar1 = F_004069f0(param_1 * 0xc), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00c32840 */
byte F_00c32840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong * puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined2 uStack_1a;
  
  if (*(char *)((int)this + 0x18) != '\0') {
    LOCK();
    iVar6 = *(int *)((int)this + 0x14);
    if (iVar6 == 0) {
      *(int *)((int)this + 0x14) = 1;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 != 0) {
      return 0;
    }
  }
  if (*(int *)((int)this + 0x10) != 0) {
    if (*(char *)((int)this + 0x18) != '\0') {
      LOCK();
      *(undefined4 *)((int)this + 0x14) = 0;
      UNLOCK();
    }
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x20);
  uVar9 = iVar6 + 0x13U & 0xfffffffc;
  if (*(int *)((int)this + 0xc) + 0x20 + uVar9 <= *(uint *)this) {
    if (*(int *)((int)this + 0xc) == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x18))) = 1;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 0;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
      **(undefined1 * PTR32 *)((int)this + 8) = 0x52;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 1))) = 0x52;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 2))) = 0xa0;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 3))) = 0x41;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = 0xff;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    puVar7 = ((ulonglong *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8))));
    *puVar7 = CONCAT44(uVar4,iVar6 + 0x13U) & 0xfffffffffffffffc;
    puVar7[1] = CONCAT26(uStack_1a,CONCAT24(3,uVar5));
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x10;
    F_00c46aa0(*(int *)((int)this + 8) + *(int *)((int)this + 0xc),*(undefined4 *)(param_1 + 0x24),
               iVar6);
    if (param_2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*param_2 + 0x18))
                (param_2,uVar4,*(int *)((int)this + 0xc) + *(int *)((int)this + 8),iVar6);
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + iVar6;
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
    *piVar1 = *piVar1 + uVar9;
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
    *psVar2 = *psVar2 + 1;
    uVar10 = F_0046ff40();
    *((ulonglong *)GEN_TOP((*(int *)((int)this + 8) + 8))) = uVar10;
    for (uVar8 = iVar6 + 0x10; uVar8 < uVar9; uVar8 = uVar8 + 1) {
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8)))) = 0;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    }
    if (*(char *)((int)this + 0x18) != '\0') {
      LOCK();
      *(undefined4 *)((int)this + 0x14) = 0;
      UNLOCK();
    }
    return 1;
  }
  if (*(char *)((int)this + 0x18) != '\0') {
    LOCK();
    *(undefined4 *)((int)this + 0x14) = 0;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00c32a00 */
unsigned int F_00c32a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32a00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00c32a20 */
uint F_00c32a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32a20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c32a30 */
byte F_00c32a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c32a70 */
uint F_00c32a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc32a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  int * piVar2;
  
  piVar2 = param_2;
  if (param_2 == param_3) {
    *param_1 = (int)param_2;
    return (uint)param_1;
  }
  do {
    iVar1 = *(int *)(piVar2[2] + 0xc);
    if (((iVar1 != 0) && (iVar1 == param_4)) && (*(int *)(piVar2[2] + 0x10) == param_5)) break;
    piVar2 = (int *)*piVar2;
  } while (piVar2 != param_3);
  *param_1 = (int)piVar2;
  return (uint)param_1;
}

/* ref: FUN_00c32ac0 */
uint F_00c32ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Application::Network::LobbyClientModule::vf0 */
uint F_00c32b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c32480(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c32b40 */
unsigned int F_00c32b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x3b0) != (undefined *)0x0) {
    F_00c32510(*(undefined * PTR32 *)((int)this + 0x3b0),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00c32c00 */
uint F_00c32c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32c10 */
uint F_00c32c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32c20 */
uint F_00c32c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32c50 */
uint F_00c32c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if ((param_1 < 0) && ((uint)piVar1[8] < (uint)-param_1)) {
    piVar1[8] = 0;
  }
  else if ((param_1 < 1) || ((uint)(piVar1[8] + param_1) < 0x241)) {
    if (param_1 != 0) {
      piVar1[8] = piVar1[8] + param_1;
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1);
    }
  }
  else {
    piVar1[8] = 0;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if (piVar1 + 3 != (int *)(uVar2 + 8)) {
    piVar1[3] = *(int *)(uVar2 + 8);
    piVar1[4] = *(int *)(uVar2 + 0xc);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,piVar1[9],piVar1[8]);
  return (uint)piVar1;
}

/* ref: FUN_00c32d00 */
uint F_00c32d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c32d40 */
uint F_00c32d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c32d80 */
uint F_00c32d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c32dc0 */
uint F_00c32dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32de0 */
uint F_00c32de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32de0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c32df0 */
uint F_00c32df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (0x3ffffffeU - *(int *)((int)this + 4) < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00c32e20 */
uint F_00c32e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c32e30 */
unsigned int F_00c32e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32e30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00c32e50 */
unsigned int F_00c32e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  if (param_1 != (undefined4 *)(iVar1 + 0x20)) {
    *param_1 = *(undefined4 *)(iVar1 + 0x20);
    param_1[1] = *(undefined4 *)(iVar1 + 0x24);
    param_1[2] = *(undefined4 *)(iVar1 + 0x28);
    param_1[3] = *(undefined4 *)(iVar1 + 0x2c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x30);
    param_1[5] = *(undefined4 *)(iVar1 + 0x34);
    param_1[6] = *(undefined4 *)(iVar1 + 0x38);
    param_1[7] = *(undefined4 *)(iVar1 + 0x3c);
    param_1[10] = *(undefined4 *)(iVar1 + 0x48);
    param_1[0xb] = *(undefined4 *)(iVar1 + 0x4c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x40);
    param_1[9] = *(undefined4 *)(iVar1 + 0x44);
  }
  iVar1 = *(int *)((int)this + 8);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  return 0;
}

/* ref: FUN_00c32ee0 */
uint F_00c32ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  gen_size32 * psVar4;
  undefined4 uVar5;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x10);
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,*puVar1,0);
  if (uVar3 == 0) {
    return 0;
  }
  param_1[5] = uVar3;
  if (param_1 != (int *)0xfffffff8) {
    *(undefined4 *)(uVar3 + 0x14) = *(undefined4 *)((int)this + 0x14);
    if (*(int *)((int)this + 0x20) == 0) {
      uVar5 = *(undefined4 *)((int)this + 0x1c);
    }
    else {
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + 8)));
    }
    *(undefined4 *)(uVar3 + 0x18) = uVar5;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    *(undefined4 *)(uVar3 + 0x20) = *puVar1;
    psVar4 = ((gen_size32 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    F_00c48350(*(undefined * PTR32 *)(uVar3 + 0x24),0,*psVar4);
    if (param_1[5] != 0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,*(undefined4 *)(param_1[5] + 0x24));
      return (uint)(param_1 + 2);
    }
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,0);
    return (uint)(param_1 + 2);
  }
  return 0;
}

/* ref: FUN_00c32fb0 */
uint F_00c32fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32fb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c32fc0 */
uint F_00c32fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32fc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c32fd0 */
uint F_00c32fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32fd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c32fe0 */
uint F_00c32fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c33050 */
uint F_00c33050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc33050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c330c0 */
uint F_00c330c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc330c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c33130 */
uint F_00c33130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c33140 */
uint F_00c33140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c33150 */
byte F_00c33150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc33150u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  F_00c32fe0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)))) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  piVar1 = *(int * PTR32 *)((*(int *)&gen_args[1]) + 0x10);
  if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar4 == '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50));
  uVar2 = (undefined3)(*(int *)&gen_args[1]);
  (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) = piVar1[5] == 0;
  bVar3 = F_00c32840(piVar1 + 2,(*(undefined4 *)&gen_args[2]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))));
  if ((bVar3 != 0) &&
     (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 1, (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) != '\0')) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + 1;
  }
  (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 3)) = bVar3;
  if (((char)(*(undefined4 *)&gen_args[3]) != '\0') && (piVar1[5] != 0)) {
    uVar2 = (undefined3)(*(undefined4 *)&gen_args[2]);
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,(*(undefined * PTR32 *)&gen_args[0]));
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 3));
}

/* ref: FUN_00c33230 */
uint F_00c33230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc33230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00406ad0(param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00c33270 */
uint F_00c33270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc33270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    if (puVar1 + 2 != (undefined4 *)0x0) {
      puVar1[2] = *param_3;
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00c332c0 */
uint F_00c332c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc332c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00c32a70(((undefined1 *)(gen_frame + 0x8)),param_2,param_3,param_4,param_5);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00c332f0 */
unsigned int F_00c332f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc332f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x3b0) != (undefined *)0x0) {
    F_00c32e50(*(undefined * PTR32 *)((int)this + 0x3b0),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00c33310 */
uint F_00c33310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33310u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))();
  piVar2 = (int *)F_00c33050(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*piVar2 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar1 = *(uint *)(*piVar2 + 0x10);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
    return uVar1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
  return 0;
}

/* ref: FUN_00c33360 */
uint F_00c33360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33360u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))))();
  F_00c330c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
    return 0;
  }
  uVar1 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
  return uVar1;
}

/* ref: FUN_00c333c0 */
uint F_00c333c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc333c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)this));
  if (piVar1 != *(int * PTR32 *)this) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    piVar1 = (int *)F_00406ad0(piVar1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00c333f0 */
uint F_00c333f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc333f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = (int *)F_004069f0(0xc);
  if (piVar2 == (int *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  }
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) == 0x3ffffffe) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00c33470 */
uint F_00c33470(unsigned int gen_a0)
{
  GEN_ENTER(0xc33470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xbc) == 0) {
    return 0;
  }
  (*(int *)(gen_frame + 0x8)) = *(int *)((int)this + 0xbc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
  piVar1 = (int *)F_00c33050((undefined *)((int)this + 0x1c),((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
  if (*piVar1 == *(int *)((int)this + 0x20)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  }
  else {
    this_00 = *(undefined * PTR32 *)(*piVar1 + 0x10);
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_00c33360(this_00,*(undefined4 *)((int)this + 0xbc));
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00c334e0 */
uint F_00c334e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc334e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = **(int * PTR32 *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004069f0(0xc);
  if (piVar3 == (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  }
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == 0x3ffffffe) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00c33560 */
uint F_00c33560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004069f0(0xc);
  if (piVar3 == (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  }
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == 0x3ffffffe) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00c33650 */
uint F_00c33650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33650u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  iVar2 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != 0) {
    if (*(int *)((*(int *)&gen_args[1]) + 0xc) != 0) {
      piVar4 = (int *)F_00c32a70(((undefined1 *)(gen_frame + 0x4)),**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),
                                   *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),*(undefined4 *)((*(int *)&gen_args[1]) + 0xc),
                                   *(undefined4 *)((*(int *)&gen_args[1]) + 0x10));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      if ((undefined4 *)*piVar4 != puVar1) {
        puVar5 = (undefined4 *)
                 F_00c32a70(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)*piVar4,puVar1,*(undefined4 *)(iVar2 + 0xc),
                              *(undefined4 *)(iVar2 + 0x10));
        puVar5 = (undefined4 *)*puVar5;
        if (puVar5 != puVar1) {
          iVar2 = puVar5[2];
          F_00c33230(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),((undefined1 *)(gen_frame + 0x4)),puVar5);
          piVar4 = *(int * PTR32 *)(iVar2 + 8);
          ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4,iVar2);
        }
      }
    }
    F_00c33560(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(int *)&gen_args[1]));
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar6 = 0;
  if ((int *)*piVar4 != piVar4) {
    piVar3 = (int *)*piVar4;
    uVar6 = ((int *)*piVar4)[2];
    if (piVar3 != piVar4) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      F_00406ad0(piVar3);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
    }
  }
  return uVar6;
}

/* ref: FUN_00c33710 */
unsigned int F_00c33710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33710u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  if ((*(int *)&gen_args[1]) != 0) {
    F_00c334e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(int *)&gen_args[1]));
  }
  return 0;
}

/* ref: FUN_00c33730 */
uint F_00c33730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33730u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined4 * puVar7;
  int iVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) == 0) {
    uVar3 = 0;
    if ((*(uint *)&gen_args[1]) != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(uint *)&gen_args[1]) + 8) + 0x10))))(*(int * PTR32 *)((*(uint *)&gen_args[1]) + 8),(*(uint *)&gen_args[1]));
      return uVar3;
    }
  }
  else {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 8)));
    }
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
    (*(uint *)&gen_args[1]) = F_00c33650(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))),(*(uint *)&gen_args[1]));
    while ((*(uint *)&gen_args[1]) != 0) {
      if (iVar8 == 0) {
joined_r0x00c338c0: ;
        if ((*(uint *)&gen_args[1]) != 0) {
          F_00c334e0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 4))),&(*(uint *)&gen_args[1]));
        }
        break;
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(iVar8 + 0x68);
      gen_imp_EnterCriticalSection(lpCriticalSection);
      puVar7 = *(undefined4 * PTR32 *)(iVar8 + 0x10);
      if (*(char *)((int)puVar7[1] + 0x15) == '\0') {
        puVar4 = (undefined4 *)puVar7[1];
        do {
          if ((uint)puVar4[3] < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
            puVar5 = (undefined4 *)puVar4[2];
          }
          else {
            puVar5 = (undefined4 *)*puVar4;
            puVar7 = puVar4;
          }
          puVar4 = puVar5;
        } while (*(char *)((int)puVar5 + 0x15) == '\0');
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar7;
      if ((puVar7 == *(undefined4 * PTR32 *)(iVar8 + 0x10)) || (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) < (uint)puVar7[3])
         ) {
        (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = *(undefined4 * PTR32 *)(iVar8 + 0x10);
        ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
      }
      else {
        ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
      }
      if (*ppuVar6 == *(undefined4 * PTR32 *)(iVar8 + 0x10)) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        goto joined_r0x00c338c0;
      }
      piVar1 = ((int *)GEN_TOP((*ppuVar6)[4]));
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if ((char)uVar3 == '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x14));
        goto joined_r0x00c338c0;
      }
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x50));
      (*(bool *)(gen_frame + 0x1b)) = piVar1[5] == 0;
      bVar2 = F_00c32840(piVar1 + 2,(*(uint *)&gen_args[1]),*(undefined4 *)(iVar8 + 0x80));
      (*(byte *)(gen_frame + 0x1a)) = bVar2;
      if ((bVar2 != 0) && (*(int *)(iVar8 + 0x24) = *(int *)(iVar8 + 0x24) + 1, (*(bool *)(gen_frame + 0x1b)) != false)) {
        *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + 1;
      }
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x50));
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x14));
      if ((*(byte *)(gen_frame + 0x1a)) == 0) goto joined_r0x00c338c0;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(uint *)&gen_args[1]) + 8) + 0x10))))(*(int * PTR32 *)((*(uint *)&gen_args[1]) + 8),(*(uint *)&gen_args[1]));
      (*(uint *)&gen_args[1]) = F_00c33650(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x24),0);
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x14));
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
  }
  return uVar3;
}

/* ref: FUN_00c338d0 */
uint F_00c338d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc338d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c32c50(param_1,param_2);
  uVar1 = F_00c33730(*(undefined * PTR32 *)((int)this + 0x20),uVar1);
  return uVar1;
}

/* ref: FUN_00c338f0 */
uint F_00c338f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc338f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (*(undefined * PTR32 *)((int)this + 0x3b0) == (undefined *)0x0) goto LAB_00c33c5a;
  if (*(int *)((int)this + 0x3b4) == 0) {
    this_00 = (undefined *)F_00c33470(*(undefined * PTR32 *)((int)this + 0x3b0));
    (*(undefined * PTR32 *)(gen_frame + 0x50)) = this_00;
    if (this_00 != (undefined *)0x0) {
      if (**(char * PTR32 *)((int)this + 0x460) == '\0') {
LAB_00c33958: ;
        if ((**(char * PTR32 *)((int)this + 0x514) != '\0') || (**(char * PTR32 *)((int)this + 0x568) != '\0'))
        goto LAB_00c33a19;
        F_00e39ed0((undefined *)((int *)(gen_frame + 0x18)),0x1f5,0x38,0);
        uVar2 = F_00c32ee0(this_00,((int *)(gen_frame + 0x18)));
        if (uVar2 != 0) {
          puVar3 = (undefined4 *)F_00e3bc00(((int *)(gen_frame + 0x18)));
          *(int *)((int)this + 0x510) = *(int *)((int)this + 0x510) + 1;
          *puVar3 = *(undefined4 *)((int)this + 0x510);
          uVar2 = F_0042a990((int)this + 0x3b8);
          uVar2 = F_00c4c74c(uVar2);
          puVar3[1] = uVar2 | 0x80000000;
          *(undefined8 *)(puVar3 + 2) = 0;
          *(undefined8 *)(puVar3 + 4) = 0;
          *(undefined8 *)(puVar3 + 6) = 0;
          *(undefined8 *)(puVar3 + 8) = 0;
          uVar2 = F_0042a970((int)this + 0x40c);
          uVar4 = F_0042a990((int)this + 0x40c);
          F_00c4d9ef(puVar3 + 2,0x20,uVar4,uVar2);
          goto LAB_00c33b2b;
        }
      }
      else {
        bVar1 = F_0042b6a0((undefined *)((int)this + 0x460),&REFG(undefined, 0x10c4408));
        if (bVar1 != 0) goto LAB_00c33958;
LAB_00c33a19: ;
        F_00e39ed0((undefined *)((int *)(gen_frame + 0x18)),0x1f6,0x98,0);
        uVar2 = F_00c32ee0(this_00,((int *)(gen_frame + 0x18)));
        if (uVar2 != 0) {
          puVar3 = (undefined4 *)F_00e3bc20(((int *)(gen_frame + 0x18)));
          *(int *)((int)this + 0x510) = *(int *)((int)this + 0x510) + 1;
          *puVar3 = *(undefined4 *)((int)this + 0x510);
          uVar2 = F_0042a990((int)this + 0x3b8);
          uVar2 = F_00c4c74c(uVar2);
          puVar3[1] = uVar2 | 0x80000000;
          *(undefined8 *)(puVar3 + 2) = 0;
          *(undefined8 *)(puVar3 + 4) = 0;
          *(undefined8 *)(puVar3 + 6) = 0;
          *(undefined8 *)(puVar3 + 8) = 0;
          F_00c48350(puVar3 + 10,0,0x40);
          uVar2 = F_0042a970((int)this + 0x40c);
          uVar4 = F_0042a990((int)this + 0x40c);
          F_00c4d9ef(puVar3 + 2,0x20,uVar4,uVar2);
          uVar2 = F_0042a970((int)this + 0x460);
          uVar4 = F_0042a990((int)this + 0x460);
          F_00c4d9ef(puVar3 + 0x1a,0x20,uVar4,uVar2);
          bVar1 = F_0042b6a0((undefined *)((int)this + 0x460),&REFG(undefined, 0x10c4408));
          if (bVar1 != 0) {
            F_0042cc20(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
            F_0042ccf0((undefined *)((int)this + 0x460),((undefined1 *)(gen_frame + 0x54)));
            F_0042c880(((undefined1 *)(gen_frame + 0x54)));
          }
LAB_00c33b2b: ;
          iVar5 = (*(int *)(gen_frame + 0x2c));
          (*(int *)(gen_frame + 0x2c)) = 0;
          uVar2 = ((code *)*(gen_code32 *)(((int *)(gen_frame + 0x18))[0] + 4))(((int *)(gen_frame + 0x18)));
          if ((undefined4 *)(iVar5 + 0xc) != (undefined4 *)(uVar2 + 8)) {
            *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(uVar2 + 8);
            *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(uVar2 + 0xc);
          }
          ((code *)*(gen_code32 *)(((int *)(gen_frame + 0x18))[0] + 0xc))
                    (((int *)(gen_frame + 0x18)),*(undefined4 *)(iVar5 + 0x24),*(undefined4 *)(iVar5 + 0x20));
          F_00c33730(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x20),iVar5);
          *(undefined4 *)((int)this + 0x3b4) = 1;
        }
      }
      F_00e39da0(((int *)(gen_frame + 0x18)));
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x3b0) != (undefined *)0x0) {
    F_00e47910(*(undefined * PTR32 *)((int)this + 0x3b0));
  }
  F_01050b60(((undefined1 *)(gen_frame + 0x8)));
  iVar5 = 0;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(undefined8 *)(gen_frame + 0x10)) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x3b0) != (undefined *)0x0) {
    bVar1 = F_00e47880(*(undefined * PTR32 *)((int)this + 0x3b0),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    if (bVar1 != 0) {
      if ((*(int *)(gen_frame + 0xc)) != 0) {
        iVar5 = *(int *)((*(int *)(gen_frame + 0xc)) + 0x24);
      }
      if (*(short *)(iVar5 + 2) == 0x1f5) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x54)),iVar5 + 0x1c,REFG(undefined4, 0x108cc50));
        F_0042ccf0((undefined *)((int)this + 0x4b4),((undefined1 *)(gen_frame + 0x54)));
        F_0042c880(((undefined1 *)(gen_frame + 0x54)));
        *(undefined2 *)((int)this + 0x508) = *(undefined2 *)(iVar5 + 0x1a);
        *(undefined4 *)((int)this + 0x50c) = *(undefined4 *)(iVar5 + 0x14);
        *(undefined4 *)((int)this + 0x3b4) = 2;
      }
    }
  }
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  F_01050b70();
LAB_00c33c5a: ;
  uVar2 = F_00e40300(this);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar2;
}

