#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00cca0a0 */
uint F_00cca0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcca0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112a8c4));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  F_00cccb10((int)this + 0x10,(float)(float10)1);
  F_00cccb10((int)this + 0x34,(float)(float10)1);
  F_00cccb10((int)this + 0x58,(float)(float10)1);
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined1 *)((int)this + 0x94) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  *(undefined1 *)((int)this + 0xb0) = 1;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc4));
  *(undefined1 *)((int)this + 0xdc) = 1;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined2 *)((int)this + 0xe4) = 0;
  *(undefined1 *)((int)this + 0xe6) = 0;
  iVar1 = (int)*param_2;
  if (iVar1 != 0) {
    if (iVar1 < 0) {
      uVar2 = F_00cbf660(-iVar1);
      *(uint *)((int)this + 0xc) = uVar2;
      if (uVar2 == 0) {
        if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
          REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcca000));
        }
        ((code *)REFG(gen_code32, 0x15d861c))("refBus_ != NULL","Not Find Referens Bus!!","Bus.cpp",0x3d,
                        "SQEX::CDev::Engine::Sd::Driver::Bus::Bus");
        return (uint)this;
      }
    }
    else {
      (*(char * PTR32 *)(gen_frame + 0x4)) = "CDev.Engine.Sd.SoundDriver";
      (*(undefined4 *)(gen_frame + 0x8)) = 0x10;
      F_00cc6930((undefined *)((int)this + 0x80),0x1c,iVar1 * 2,&(*(char * PTR32 *)(gen_frame + 0x4)),0x10,1);
      F_00d2fdb0((int)this + 0xb4,0x10);
    }
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf0 */
uint F_00cca220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcca220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cc9f30(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cca300 */
unsigned int F_00cca300(unsigned int gen_a0)
{
  GEN_ENTER(0xcca300u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x1f] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[0x23] = 0;
  in_ecx[0x24] = 0;
  in_ecx[0x25] = 0;
  in_ecx[0x26] = 0;
  in_ecx[0x27] = 0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  return 0;
}

/* ref: FUN_00cca3f0 */
uint F_00cca3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcca3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar1 = 0;
  iVar3 = param_2;
  if ((int)(uint)*(byte *)((int)this + 0x42) <= param_2) {
    iVar3 = 0;
    uVar1 = 0xffffffff;
  }
  puVar4 = (undefined4 *)(iVar3 * 0x7c + 0x44 + (int)this);
  puVar5 = param_1;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return uVar1;
}

/* ref: FUN_00cca420 */
uint F_00cca420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcca420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  if ((int)(uint)*(byte *)((int)this + 1) <= param_2) {
    *param_1 = 0x10;
    return 0xffffffff;
  }
  *param_1 = *(undefined4 *)((int)this + param_2 * 4 + 2);
  return 0;
}

/* ref: FUN_00cca460 */
uint F_00cca460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcca460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar1 = 0;
  if (param_2 < (int)(uint)*(byte *)((int)this + 0x614)) {
    puVar3 = (undefined4 *)(param_2 * 0xa0 + 0x618 + (int)this);
  }
  else {
    F_00cca300(((undefined4 *)(gen_frame + 0x8)));
    uVar1 = 0xffffffff;
    puVar3 = ((undefined4 *)(gen_frame + 0x8));
  }
  puVar4 = param_1;
  for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar1;
}

/* ref: FUN_00cca4d0 */
uint F_00cca4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcca4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  uVar2 = 0;
  if ((param_2 < 0) || ((int)(uint)*(byte *)((int)this + 0xb18) <= param_2)) {
    uVar2 = 0xffffffff;
    (*(undefined2 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0xa)) = 0;
    (*(undefined2 *)(gen_frame + 0xe)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    puVar4 = (undefined4 *)&(*(undefined2 *)(gen_frame + 0x8));
  }
  else {
    puVar4 = (undefined4 *)(param_2 * 0x20 + 0xb1c + (int)this);
  }
  puVar5 = param_1;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_00cca550 */
uint F_00cca550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcca550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint local_18;
  
  if ((-1 < param_2) && (param_2 < (int)(uint)*(byte *)((int)this + 0xd1c))) {
    iVar1 = param_2 * 5 + 0x348;
    *param_1 = *(uint *)((int)this + iVar1 * 4);
    param_1[1] = *(uint *)((int)this + iVar1 * 4 + 4);
    param_1[2] = *(uint *)((int)this + iVar1 * 4 + 8);
    param_1[3] = *(uint *)((int)this + iVar1 * 4 + 0xc);
    param_1[4] = *(uint *)((int)this + iVar1 * 4 + 0x10);
    return 0;
  }
  local_18 = local_18 & 0xffffff00;
  *param_1 = local_18;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return 0xffffffff;
}

/* ref: FUN_00cca5c0 */
byte F_00cca5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcca5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  
  ((undefined4 *)(gen_frame + 0xc))[0] = 0;
  ((undefined4 *)(gen_frame + 0xc))[1] = 0;
  ((undefined4 *)(gen_frame + 0xc))[2] = 0;
  ((undefined4 *)(gen_frame + 0xc))[3] = 0;
  ((char *)(gen_frame + 0x8))[0] = '\0';
  uVar1 = F_00cca550(this,((char *)(gen_frame + 0x8)),param_1);
  if ((uVar1 == 0) && (iVar2 = 0, 0 < ((char *)(gen_frame + 0x8))[0])) {
    do {
      if (*(char *)((undefined4 *)(gen_frame + 0xc))[(int)(iVar2)] == '\x04') {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < ((char *)(gen_frame + 0x8))[0]);
  }
  return 0;
}

/* ref: FUN_00cca610 */
byte F_00cca610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcca610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  int iVar3;
  char * pcVar4;
  
  ((int *)(gen_frame + 0x8))[0] = 0;
  ((int *)(gen_frame + 0x8))[1] = 0;
  ((int *)(gen_frame + 0x8))[2] = 0;
  ((int *)(gen_frame + 0x8))[3] = 0;
  ((char *)(gen_frame + 0x4))[0] = '\0';
  uVar2 = F_00cca550(this,((char *)(gen_frame + 0x4)),param_1);
  if ((uVar2 == 0) && (iVar3 = 0, 0 < ((char *)(gen_frame + 0x4))[0])) {
    do {
      if (*(char *)((int *)(gen_frame + 0x8))[(int)(iVar3)] == '\x04') {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < ((char *)(gen_frame + 0x4))[0]);
  }
  ((int *)(gen_frame + 0x8))[4] = 0;
  if (*(char *)((int)this + 0xb18) != '\0') {
    pcVar4 = (char *)((int)this + 0xb1d);
    do {
      if ((pcVar4[-1] == param_1) && (iVar3 = 0, '\0' < *pcVar4)) {
        do {
          bVar1 = F_00cca610(this,(int)pcVar4[iVar3 + 1]);
          if (bVar1 != 0) {
            return 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *pcVar4);
      }
      iVar3 = ((int *)(gen_frame + 0x8))[4] + 1;
      pcVar4 = pcVar4 + 0x20;
      ((int *)(gen_frame + 0x8))[4] = iVar3;
    } while (iVar3 < (int)(uint)*(byte *)((int)this + 0xb18));
  }
  return 0;
}

/* ref: FUN_00cca6d0 */
uint F_00cca6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcca6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0xe78) = *(undefined4 *)(param_1 + 4);
  return 0;
}

/* ref: FUN_00cca6f0 */
uint F_00cca6f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcca6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if (*(char *)((int)this + 0xd1c) != '\0') {
    piVar3 = (int *)((int)this + 0xd20);
    do {
      iVar4 = 0;
      piVar2 = piVar3;
      if ('\0' < (char)*piVar3) {
        do {
          iVar1 = piVar2[1];
          if (iVar1 != 0) {
            F_00406810(iVar1);
          }
          iVar4 = iVar4 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar4 < (char)*piVar3);
      }
      local_8 = local_8 + 1;
      piVar3 = piVar3 + 5;
    } while (local_8 < (int)(uint)*(byte *)((int)this + 0xd1c));
  }
  *(undefined2 *)this = 0;
  *(undefined1 *)((int)this + 0x42) = 0;
  *(undefined1 *)((int)this + 0x614) = 0;
  *(undefined1 *)((int)this + 0xb18) = 0;
  *(undefined1 *)((int)this + 0xd1c) = 0;
  *(undefined4 *)((int)this + 0xe74) = 0;
  *(undefined4 *)((int)this + 0xe78) = 0;
  return 0;
}

/* ref: FUN_00cca790 */
uint F_00cca790(unsigned int gen_a0)
{
  GEN_ENTER(0xcca790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  char * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  short * psVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_00cca6f0(this);
  *(undefined1 *)((int)this + 1) = 0;
  *(undefined4 *)((int)this + 0xe7c) = 1;
  *(undefined4 *)((int)this + 2) = 4;
  *(char *)((int)this + 1) = *(char *)((int)this + 1) + '\x01';
  psVar5 = (short *)((int)this + 2);
  *((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 1) * 4 + 2))) = 0x10020;
  *(char *)((int)this + 1) = *(char *)((int)this + 1) + '\x01';
  *((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 1) * 4 + 2))) = 4;
  pcVar1 = (char *)((int)this + 1);
  *pcVar1 = *pcVar1 + '\x01';
  *(undefined4 *)((int)this + 0xe74) = 0;
  iVar2 = 0;
  if (*pcVar1 != '\0') {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + *psVar5;
      *(int *)((int)this + 0xe74) = iVar4;
      iVar2 = iVar2 + 1;
      psVar5 = psVar5 + 2;
    } while (iVar2 < (int)(uint)*(byte *)((int)this + 1));
  }
  ((undefined4 *)(gen_frame + 0x2c))[1] = 0;
  *(undefined1 *)((int)this + 0x42) = 0;
  ((undefined4 *)(gen_frame + 0x2c))[0] = 0;
  ((undefined4 *)(gen_frame + 0x2c))[2] = 0;
  ((undefined4 *)(gen_frame + 0x2c))[3] = 0;
  ((undefined4 *)(gen_frame + 0x2c))[5] = 0;
  ((undefined4 *)(gen_frame + 0x2c))[6] = 0;
  ((undefined4 *)(gen_frame + 0x2c))[4] = 0;
  puVar3 = ((undefined4 *)(gen_frame + 0x58));
  iVar2 = 4;
  do {
    *(undefined2 *)(puVar3 + -4) = 0;
    puVar3[-3] = 0;
    puVar3[-2] = 0;
    *(undefined2 *)((int)puVar3 + -0xe) = 0;
    *(undefined2 *)(puVar3 + -1) = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined2 *)((int)puVar3 + -2) = 0;
    puVar3 = puVar3 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar6 = ((undefined4 *)(gen_frame + 0x2c));
  puVar7 = (undefined4 *)((int)this + 0x44);
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(char *)((int)this + 0x42) = *(char *)((int)this + 0x42) + '\x01';
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) & 0xffffff00;
  *(undefined4 *)((int)this + 0xd20) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12));
  *(undefined4 *)((int)this + 0xd24) = 0;
  *(undefined4 *)((int)this + 0xd28) = 0;
  *(undefined4 *)((int)this + 0xd2c) = 0;
  *(undefined1 *)((int)this + 0x614) = 0;
  *(undefined1 *)((int)this + 0xb18) = 0;
  *(undefined1 *)((int)this + 0xd1c) = 1;
  *(undefined4 *)((int)this + 0xd30) = 0;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)puVar3;
}

/* ref: FUN_00cca900 */
unsigned int F_00cca900(unsigned int gen_a0)
{
  GEN_ENTER(0xcca900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0xe78) = 0x40;
  return 0;
}

/* ref: FUN_00cca910 */
uint F_00cca910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcca910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  uint * puVar6;
  short * psVar7;
  undefined4 * puVar8;
  int iVar9;
  uint * puVar10;
  char * pcVar11;
  undefined4 * puVar12;
  uint * puVar13;
  undefined4 uVar14;
  char * PTR32 * ppcVar15;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(undefined * PTR32 *)(gen_frame + 0x60)) = this;
  (*(int * PTR32 *)(gen_frame + 0x3c)) = param_1;
  (*(uint *)(gen_frame + 0x84)) = param_1[3];
  if ((*param_1 != 0x46434453) || (param_1[1] != 0)) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
    return 0xffffffff;
  }
  (*(int *)(gen_frame + 0x4c)) = 0;
  (*(uint *)(gen_frame + 0x44)) = param_1[2] & 0xffU;
  if ((param_1[2] & 0xffU) != 0) {
    do {
      iVar5 = (*(int * PTR32 *)(gen_frame + 0x3c))[(*(int *)(gen_frame + 0x4c)) * 4 + 4];
      puVar6 = ((uint *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x3c))[(*(int *)(gen_frame + 0x4c)) * 4 + 5] + (int)(*(int * PTR32 *)(gen_frame + 0x3c)))));
      (*(uint *)(gen_frame + 0x80)) = (*(int * PTR32 *)(gen_frame + 0x3c))[(*(int *)(gen_frame + 0x4c)) * 4 + 6];
      (*(uint *)(gen_frame + 0x84)) = (*(int * PTR32 *)(gen_frame + 0x3c))[(*(int *)(gen_frame + 0x4c)) * 4 + 7];
      (*(uint * PTR32 *)(gen_frame + 0x5c)) = puVar6;
      if (iVar5 == 0x20435445) {
        (*(uint *)(gen_frame + 0x7c)) = puVar6[1];
        (*(uint *)(gen_frame + 0x80)) = puVar6[2];
        (*(uint *)(gen_frame + 0x84)) = puVar6[3];
        *(uint *)((int)this + 0xe7c) = *puVar6 & 0xff;
      }
      else if (iVar5 == 0x20535542) {
        uVar2 = *puVar6;
        (*(uint *)(gen_frame + 0x7c)) = puVar6[1];
        (*(uint *)(gen_frame + 0x80)) = puVar6[2];
        (*(uint *)(gen_frame + 0x84)) = puVar6[3];
        *(undefined1 *)((int)this + 1) = 0;
        if ((byte)uVar2 != 0) {
          do {
            bVar1 = *(byte *)((int)this + 1);
            if (0xf < bVar1) break;
            *(uint *)((int)this + (uint)bVar1 * 4 + 2) = puVar6[bVar1 + 4];
            *(char *)((int)this + 1) = *(char *)((int)this + 1) + '\x01';
          } while (*(byte *)((int)this + 1) < (byte)uVar2);
        }
        iVar5 = 0;
        iVar9 = 0;
        *(undefined4 *)((int)this + 0xe74) = 0;
        if (*(char *)((int)this + 1) != '\0') {
          psVar7 = (short *)((int)this + 2);
          do {
            iVar5 = iVar5 + *psVar7;
            *(int *)((int)this + 0xe74) = iVar5;
            iVar9 = iVar9 + 1;
            psVar7 = psVar7 + 2;
          } while (iVar9 < (int)(uint)*(byte *)((int)this + 1));
        }
      }
      else if (iVar5 == 0x52545441) {
        uVar2 = *puVar6;
        (*(uint *)(gen_frame + 0x7c)) = puVar6[1];
        (*(uint *)(gen_frame + 0x80)) = puVar6[2];
        (*(uint *)(gen_frame + 0x84)) = puVar6[3];
        *(undefined1 *)((int)this + 0x42) = 1;
        if ((byte)uVar2 != 0) {
          do {
            bVar1 = *(byte *)((int)this + 0x42);
            if (0xb < bVar1) break;
            puVar10 = puVar6 + (uint)bVar1 * 0x1f + -0x1b;
            puVar13 = (uint *)((int)this + (uint)bVar1 * 0x7c + 0x44);
            for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            }
            iVar5 = 4;
            do {
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            *(char *)((int)this + 0x42) = *(char *)((int)this + 0x42) + '\x01';
          } while (*(byte *)((int)this + 0x42) <= (byte)uVar2);
        }
      }
      else if (iVar5 == 0x5243414d) {
        uVar2 = *puVar6;
        *(undefined1 *)((int)this + 0x614) = 0;
        if ((byte)uVar2 != 0) {
          do {
            bVar1 = *(byte *)((int)this + 0x614);
            if (7 < bVar1) break;
            puVar10 = puVar6 + (uint)bVar1 * 0x28 + 4;
            puVar13 = (uint *)((int)this + (uint)bVar1 * 0xa0 + 0x618);
            for (iVar5 = 0x28; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            }
            iVar5 = (uint)*(byte *)((int)this + 0x614) * 0xa0;
            iVar9 = 0;
            if ('\0' < *(char *)((int)this + iVar5 + 0x619)) {
              do {
                iVar9 = iVar9 + 1;
              } while (iVar9 < *(char *)((int)this + iVar5 + 0x619));
            }
            *(char *)((int)this + 0x614) = *(char *)((int)this + 0x614) + '\x01';
          } while (*(byte *)((int)this + 0x614) < (byte)uVar2);
        }
      }
      else if (iVar5 == 0x54554f52) {
        uVar2 = *puVar6;
        (*(uint *)(gen_frame + 0x7c)) = puVar6[1];
        (*(uint *)(gen_frame + 0x80)) = puVar6[2];
        (*(uint *)(gen_frame + 0x84)) = puVar6[3];
        *(undefined1 *)((int)this + 0xb18) = 0;
        if ((byte)uVar2 != 0) {
          do {
            puVar10 = puVar6 + (uint)*(byte *)((int)this + 0xb18) * 8 + 4;
            puVar13 = ((uint *)GEN_TOP(((uint)*(byte *)((int)this + 0xb18) * 0x20 + 0xb1c + (int)this)));
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            }
            *(char *)((int)this + 0xb18) = *(char *)((int)this + 0xb18) + '\x01';
          } while (*(byte *)((int)this + 0xb18) < (byte)uVar2);
        }
        iVar5 = 0;
        if (*(char *)((int)this + 0xb18) != '\0') {
          do {
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uint)*(byte *)((int)this + 0xb18));
        }
      }
      else if (iVar5 == 0x54434645) {
        uVar2 = *puVar6;
        (*(int *)(gen_frame + 0x54)) = 0x10;
        *(undefined1 *)((int)this + 0xd1c) = 0;
        if ((byte)uVar2 != 0) {
          do {
            (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)((*(int *)(gen_frame + 0x54)) + 8 + (int)puVar6);
            (*(undefined4 *)(gen_frame + 0x70)) = *(undefined4 *)((*(int *)(gen_frame + 0x54)) + 0xc + (int)puVar6);
            (*(int *)(gen_frame + 0x64)) = *(int *)((*(int *)(gen_frame + 0x54)) + (int)puVar6);
            uVar3 = *(uint *)((*(int *)(gen_frame + 0x54)) + 4 + (int)puVar6);
            pcVar11 = ((char *)GEN_TOP(((int)this + ((uint)*(byte *)((int)this + 0xd1c) * 5 + 0x348) * 4)));
            (*(uint *)(gen_frame + 0x68)) = uVar3;
            (*(char * PTR32 *)(gen_frame + 0x40)) = pcVar11;
            *pcVar11 = (char)uVar3;
            puVar8 = (undefined4 *)((int)puVar6 + (*(int *)(gen_frame + 0x54)) + 0x10);
            iVar5 = (*(int *)(gen_frame + 0x54));
            if ((char)uVar3 != '\0') {
              pcVar11 = pcVar11 + 4;
              (*(undefined1 * PTR32 *)(gen_frame + 0x58)) = (undefined1 *)((int)&(*(uint *)(gen_frame + 0x68)) + 1);
              (*(char * PTR32 *)(gen_frame + 0x48)) = pcVar11;
              (*(uint *)(gen_frame + 0x50)) = uVar3 & 0xff;
              do {
                (*(char * PTR32 *)(gen_frame + 0x48)) = pcVar11;
                puVar12 = puVar8;
                switch((unsigned int)(uintptr_t)(*(*(undefined1 * PTR32 *)(gen_frame + 0x58)))) {
                case 1: ;
                  (*(char * PTR32 *)(gen_frame + 0x34)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x38)) = 0x10;
                  puVar4 = (undefined4 *)F_00cc1070(0x30,&(*(char * PTR32 *)(gen_frame + 0x34)));
                  *(undefined4 * PTR32 *)pcVar11 = puVar4;
                  iVar5 = 0xc;
                  puVar8 = puVar8 + 0xc;
                  goto code_r0x00ccad94;
                case 2: ;
                  ppcVar15 = &(*(char * PTR32 *)(gen_frame + 0x24));
                  (*(char * PTR32 *)(gen_frame + 0x24)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x28)) = 0x10;
                  uVar14 = 0x20;
                  break;
                case 3: ;
                  (*(char * PTR32 *)(gen_frame + 0x14)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x18)) = 0x10;
                  puVar4 = (undefined4 *)F_00cc1070(0x50,&(*(char * PTR32 *)(gen_frame + 0x14)));
                  *(undefined4 * PTR32 *)pcVar11 = puVar4;
                  iVar5 = 0x14;
                  puVar8 = puVar8 + 0x24;
                  goto code_r0x00ccad94;
                case 4: ;
                  ppcVar15 = &(*(char * PTR32 *)(gen_frame + 0xc));
                  (*(char * PTR32 *)(gen_frame + 0xc)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x10)) = 0x10;
                  uVar14 = 0x20;
                  break;
                case 5: ;
                  ppcVar15 = &(*(char * PTR32 *)(gen_frame + 0x4));
                  (*(char * PTR32 *)(gen_frame + 0x4)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x8)) = 0x10;
                  uVar14 = 0x20;
                  break;
                case 6: ;
                  (*(char * PTR32 *)(gen_frame + 0x1c)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x20)) = 0x10;
                  puVar4 = (undefined4 *)F_00cc1070(0xa0,&(*(char * PTR32 *)(gen_frame + 0x1c)));
                  *(undefined4 * PTR32 *)pcVar11 = puVar4;
                  iVar5 = 0x28;
                  puVar8 = puVar8 + 0x28;
                  goto code_r0x00ccad94;
                case 7: ;
                  ppcVar15 = &(*(char * PTR32 *)(gen_frame + 0x2c));
                  (*(char * PTR32 *)(gen_frame + 0x2c)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
                  uVar14 = 0x50;
                  break;
                default: ;
                  goto switchD_00ccac82_default;
                }
                puVar4 = (undefined4 *)F_00cc1070(uVar14,ppcVar15);
                *(undefined4 * PTR32 *)pcVar11 = puVar4;
                iVar5 = 8;
                puVar8 = puVar8 + 8;
code_r0x00ccad94: ;
                for (; this = (*(undefined * PTR32 *)(gen_frame + 0x60)), puVar6 = (*(uint * PTR32 *)(gen_frame + 0x5c)), iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar4 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar4 = puVar4 + 1;
                }
switchD_00ccac82_default: ;
                (*(undefined1 * PTR32 *)(gen_frame + 0x58)) = (*(undefined1 * PTR32 *)(gen_frame + 0x58)) + 1;
                pcVar11 = (*(char * PTR32 *)(gen_frame + 0x48)) + 4;
                uVar3 = (*(uint *)(gen_frame + 0x50)) - 1;
                (*(uint *)(gen_frame + 0x50)) = uVar3;
                (*(char * PTR32 *)(gen_frame + 0x48)) = pcVar11;
                iVar5 = (*(int *)(gen_frame + 0x54));
              } while (uVar3 != 0);
            }
            iVar9 = 4;
            do {
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            *(char *)((int)this + 0xd1c) = *(char *)((int)this + 0xd1c) + '\x01';
            (*(int *)(gen_frame + 0x54)) = iVar5 + 0x10 + (*(int *)(gen_frame + 0x64));
          } while (*(byte *)((int)this + 0xd1c) < (byte)uVar2);
        }
        iVar5 = 0;
        if (*(char *)((int)this + 0xd1c) != '\0') {
          bVar1 = *(byte *)((int)this + 0xd1c);
          do {
            (*(undefined4 *)(gen_frame + 0x78)) = 0;
            (*(uint *)(gen_frame + 0x7c)) = 0;
            (*(uint *)(gen_frame + 0x80)) = 0;
            (*(uint *)(gen_frame + 0x84)) = 0;
            ((char *)(gen_frame + 0x74))[0] = '\0';
            F_00cca550(this,((char *)(gen_frame + 0x74)),iVar5);
            if ('\0' < ((char *)(gen_frame + 0x74))[0]) {
              iVar9 = 0;
              if (0 < ((char *)(gen_frame + 0x74))[0]) {
                do {
                  iVar9 = iVar9 + 1;
                } while (iVar9 < ((char *)(gen_frame + 0x74))[0]);
              }
            }
            iVar5 = iVar5 + 1;
            this = (*(undefined * PTR32 *)(gen_frame + 0x60));
          } while (iVar5 < (int)(uint)bVar1);
        }
      }
      iVar5 = (*(int *)(gen_frame + 0x4c)) + 1;
      (*(int *)(gen_frame + 0x4c)) = iVar5;
    } while (iVar5 < (int)(*(uint *)(gen_frame + 0x44)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_00ccaea0 */
unsigned int F_00ccaea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccaea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  float10 extraout_ST0;
  int iVar6;
  int iVar7;
  
  (*(int *)(gen_frame + 0x0)) = 0;
  if (*(char *)((int)this + 0x614) != '\0') {
    pcVar4 = (char *)((int)this + 0x619);
    do {
      iVar5 = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
      if (*pcVar4 < '\x01') {
LAB_00ccaf2a: ;
        if (pcVar4[-1] == '\x01') {
          iVar5 = *param_1;
          extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(iVar5 + 0x110))(param_1,0);
          ((code *)*(gen_code32 *)(iVar5 + 0x38))
                    (param_1,(undefined4)
                             gen_fl2bits(((float)GEN_TOF((extraout_ST0 * (float10)*(float *)(pcVar4 + 0xf))))))
          ;
        }
      }
      else {
        do {
          piVar1 = (int *)(pcVar4 + iVar5 * 0x10 + 0x1f);
          if (*piVar1 == 1) {
            iVar7 = piVar1[1];
            iVar6 = piVar1[2];
            uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x118))(param_1);
            bVar2 = F_00ccb120(uVar3,iVar6,iVar7);
          }
          else {
            bVar2 = 1;
          }
          (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar2);
          if (iVar5 != 0) {
            bVar2 = F_00ccb1d0((*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),piVar1[3]);
          }
          iVar5 = iVar5 + 1;
          (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
        } while (iVar5 < *pcVar4);
        if (bVar2 != 0) goto LAB_00ccaf2a;
      }
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      pcVar4 = pcVar4 + 0xa0;
    } while ((*(int *)(gen_frame + 0x0)) < (int)(uint)*(byte *)((int)this + 0x614));
  }
  return 0;
}

/* ref: FUN_00ccaf80 */
uint F_00ccaf80(unsigned int gen_a0)
{
  GEN_ENTER(0xccaf80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined2 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int in_ecx;
  undefined1 * puVar5;
  int local_8;
  
  puVar2 = (undefined2 *)((int)this + 2);
  iVar4 = 0xf;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  puVar5 = (undefined1 *)((int)this + 0x44);
  local_8 = 0xb;
  puVar3 = (undefined4 *)((int)this + 0x58);
  do {
    *puVar5 = 0;
    *(undefined1 *)((int)puVar3 + -0x13) = 0;
    *(undefined4 *)((int)puVar3 + -0x12) = 0;
    *(undefined2 *)((int)puVar3 + -0xe) = 0;
    puVar3[-3] = 0;
    puVar3[-2] = 0;
    *(undefined2 *)(puVar3 + -1) = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined2 *)((int)puVar3 + -2) = 0;
    iVar4 = 4;
    puVar1 = puVar3;
    do {
      *(undefined2 *)(puVar1 + 2) = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined2 *)((int)puVar1 + 10) = 0;
      *(undefined2 *)(puVar1 + 5) = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *(undefined2 *)((int)puVar1 + 0x16) = 0;
      iVar4 = iVar4 + -1;
      puVar1 = puVar1 + 6;
    } while (iVar4 != 0);
    puVar5 = puVar5 + 0x7c;
    puVar3 = puVar3 + 0x1f;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  in_ecx = (int)this + 0x618;
  iVar4 = 7;
  do {
    F_00cca300(in_ecx);
    in_ecx = in_ecx + 0xa0;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  puVar2 = (undefined2 *)((int)this + 0xb1c);
  iVar4 = 0xf;
  do {
    *puVar2 = 0;
    *(undefined1 *)((int)puVar2 + 7) = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 10) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    puVar2 = puVar2 + 0x10;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  puVar5 = (undefined1 *)((int)this + 0xd20);
  iVar4 = 0x10;
  do {
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)(puVar5 + 8) = 0;
    *(undefined4 *)(puVar5 + 0xc) = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    puVar5 = puVar5 + 0x14;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(undefined1 *)this = 0;
  F_00cca790(this);
  *(undefined4 *)((int)this + 0xe78) = 0x40;
  return (uint)this;
}

/* ref: FUN_00ccb0b0 */
ushort F_00ccb0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb0b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (ushort)param_1;
}

/* ref: FUN_00ccb0c0 */
ushort F_00ccb0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (ushort)param_1;
}

/* ref: FUN_00ccb0d0 */
uint F_00ccb0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb0d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ccb0e0 */
unsigned int F_00ccb0e0(float gen_a0)
{
  GEN_ENTER(0xccb0e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00ccb0f0 */
uint F_00ccb0f0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb0f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ccb100 */
byte F_00ccb100(unsigned int gen_a0)
{
  GEN_ENTER(0xccb100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1;
}

/* ref: FUN_00ccb110 */
byte F_00ccb110(unsigned int gen_a0)
{
  GEN_ENTER(0xccb110u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1;
}

/* ref: FUN_00ccb120 */
byte F_00ccb120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccb120u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 1: ;
    return param_2 < param_1;
  case 2: ;
    return param_2 <= param_1;
  case 3: ;
    return param_1 < param_2;
  case 4: ;
    return param_1 <= param_2;
  case 5: ;
    return param_1 == param_2;
  case 6: ;
    return param_1 != param_2;
  case 7: ;
    if (param_1 == 0) {
      return 0;
    }
    break;
  case 8: ;
    if (param_1 != 0) {
      return 1;
    }
    break;
  default: ;
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ccb1d0 */
byte F_00ccb1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccb1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 1: ;
    return (byte)param_2 < (byte)param_1;
  case 2: ;
    return 1 - ((byte)param_1 < (byte)param_2);
  case 3: ;
    return (byte)param_1 < (byte)param_2;
  case 4: ;
    return 1 - ((byte)param_2 < (byte)param_1);
  case 5: ;
    return (byte)param_1 == (byte)param_2;
  case 6: ;
    return (byte)param_1 != (byte)param_2;
  case 7: ;
    if ((byte)param_1 == 0) {
      return 0;
    }
    break;
  case 8: ;
    if ((byte)param_1 != 0) {
      return 1;
    }
    break;
  default: ;
    return 0;
  }
  if ((byte)param_2 == 0) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ccb2c0 */
unsigned int F_00ccb2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  puVar1 = (undefined4 *)((int)this + 0x2c);
  iVar2 = 4;
  do {
    *(undefined2 *)(puVar1 + -4) = 0;
    puVar1[-3] = 0;
    puVar1[-2] = 0;
    *(undefined2 *)((int)puVar1 + -0xe) = 0;
    *(undefined2 *)(puVar1 + -1) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined2 *)((int)puVar1 + -2) = 0;
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00ccb440 */
undefined4 F_00ccb440(unsigned int gen_a0)
{
  GEN_ENTER(0xccb440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = 4;
  do {
    this = (undefined *)((int)this + 4);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return *(undefined4 *)this;
}

/* ref: FUN_00ccb470 */
unsigned int F_00ccb470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccb470u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00ccb490 */
uint F_00ccb490(unsigned int gen_a0)
{
  GEN_ENTER(0xccb490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d8ba8) = param_1;
  return param_1;
}

/* ref: FUN_00ccb4a0 */
uint F_00ccb4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb4a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d8bac) = param_1;
  return param_1;
}

/* ref: FUN_00ccb4b0 */
uint F_00ccb4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccb4b0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != 0) {
    *(uint *)(REFG(int, 0x15d8bb8) + param_2 * 4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ccb4d0 */
uint F_00ccb4d0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb4d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (REFG(undefined4, 0x15d8bc0) <= param_1) {
    return 0;
  }
  return *(uint *)(REFG(int, 0x15d8bb8) + param_1 * 4);
}

/* ref: FUN_00ccb4f0 */
uint F_00ccb4f0(void)
{
  GEN_ENTER(0xccb4f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(int * PTR32, 0x15d8bbc) != (int *)0x0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8bbc) + 0x48))))(REFG(int * PTR32, 0x15d8bbc));
    REFG(int * PTR32, 0x15d8bbc) = (int *)0x0;
  }
  return uVar1;
}

/* ref: FUN_00ccb510 */
uint F_00ccb510(void)
{
  GEN_ENTER(0xccb510u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d8bbc);
}

/* ref: FUN_00ccb520 */
uint F_00ccb520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccb520u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    *(int *)(REFG(int, 0x15d8bc4) + REFG(undefined4, 0x15d8bcc) * 4) = param_1;
    uVar1 = REFG(undefined4, 0x15d8bcc);
    *(undefined4 *)(REFG(int, 0x15d8bc8) + REFG(undefined4, 0x15d8bcc) * 4) = param_2;
    REFG(undefined4, 0x15d8bcc) = REFG(undefined4, 0x15d8bcc) + 1;
  }
  return uVar1;
}

/* ref: FUN_00ccb560 */
uint F_00ccb560(unsigned int gen_a0)
{
  GEN_ENTER(0xccb560u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (REFG(undefined4, 0x15d8bcc) <= param_1) {
    return 0;
  }
  return *(uint *)(REFG(int, 0x15d8bc4) + param_1 * 4);
}

/* ref: FUN_00ccb580 */
uint F_00ccb580(unsigned int gen_a0)
{
  GEN_ENTER(0xccb580u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (REFG(undefined4, 0x15d8bcc) <= param_1) {
    return 0;
  }
  return *(uint *)(REFG(int, 0x15d8bc8) + param_1 * 4);
}

/* ref: FUN_00ccb5a0 */
uint F_00ccb5a0(void)
{
  GEN_ENTER(0xccb5a0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar1 = 0;
  if (REFG(int * PTR32, 0x15d8ba4) != (int *)0x0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x38))))(REFG(int * PTR32, 0x15d8ba4),((undefined1 *)(gen_frame + 0x8)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: FUN_00ccb5e0 */
byte F_00ccb5e0(void)
{
  GEN_ENTER(0xccb5e0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x11220];
  UINT UVar1;
  DWORD dwLen;
  
  (*(uint *)(gen_frame + 0x11218)) = 0xccb5ed;
  (*(uint *)(gen_frame + 0x11218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  UVar1 = gen_imp_GetSystemDirectoryA(((CHAR *)(gen_frame + 0x11010)),0x104);
  if (UVar1 != 0) {
    (*(undefined1 *)(gen_frame + 0x11113)) = 0;
    gen_imp_lstrcpyA(((CHAR *)(gen_frame + 0x11114)),((CHAR *)(gen_frame + 0x11010)));
    gen_imp_lstrcatA(((CHAR *)(gen_frame + 0x11114)),"\\XAudio2_0.dll");
    dwLen = gen_imp_GetFileVersionInfoSizeA(((CHAR *)(gen_frame + 0x11114)),(LPDWORD)0x0);
    if ((dwLen != 0) && (dwLen < 0x1000)) {
      gen_imp_GetFileVersionInfoA(((CHAR *)(gen_frame + 0x11114)),0,dwLen,((undefined1 *)(gen_frame + 0x10010)));
      gen_imp_VerQueryValueA(((undefined1 *)(gen_frame + 0x10010)),"\\",&(*(LPVOID *)(gen_frame + 0x1000c)),&(*(uint *)(gen_frame + 0x10008)));
      if (*(int *)((int)(*(LPVOID *)(gen_frame + 0x1000c)) + 0x10) == 0x90016) {
        F_00c47745((*(uint *)(gen_frame + 0x11218)) ^ (uint)(uint)(gen_frame + 0x0));
        return 1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x11218)) ^ (uint)(uint)(gen_frame + 0x0));
  return 0;
}

/* ref: FUN_00ccb6c0 */
uint F_00ccb6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb6c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x600];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  
  (*(uint *)(gen_frame + 0x5f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5fc);
  F_00c4720f(((char *)(gen_frame + 0x478)),"[XAudio]\n");
  pcVar2 = ((char *)(gen_frame + 0x478));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
  pcVar2 = (char *)(param_1 + -1);
  do {
    pcVar6 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = ((char *)(gen_frame + 0x478));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x478)),"initialized = %d\n",(uint)REFG(undefined1, 0x15d8bd8));
  pcVar2 = ((char *)(gen_frame + 0x478));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
  pcVar2 = (char *)(param_1 + -1);
  do {
    pcVar6 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = ((char *)(gen_frame + 0x478));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x478)),"soundOfSilence = %d\n",(uint)REFG(undefined1, 0x15d8bd9));
  pcVar2 = ((char *)(gen_frame + 0x478));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
  pcVar2 = (char *)(param_1 + -1);
  do {
    pcVar6 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = ((char *)(gen_frame + 0x478));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x478)),"pXA2Engine = %p\n",REFG(int * PTR32, 0x15d8ba4));
  pcVar2 = ((char *)(gen_frame + 0x478));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
  pcVar2 = (char *)(param_1 + -1);
  do {
    pcVar6 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = ((char *)(gen_frame + 0x478));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0xc))))(REFG(int * PTR32, 0x15d8ba4),&(*(uint *)(gen_frame + 0x8)));
  if (uVar3 == 0) {
    F_00c4720f(((char *)(gen_frame + 0x478)),"XA2DeviceCount = %d\n",(*(uint *)(gen_frame + 0x8)));
    pcVar2 = ((char *)(gen_frame + 0x478));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
    pcVar2 = (char *)(param_1 + -1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x478));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    uVar4 = 0;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    if ((*(uint *)(gen_frame + 0x8)) != 0) {
      do {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x10))))(REFG(int * PTR32, 0x15d8ba4),uVar4,((undefined1 *)(gen_frame + 0xc)));
        if (uVar3 == 0) {
          F_00c4720f(((char *)(gen_frame + 0x478)),"Device[%d] Id= %s Name= %s Role= %d Channel= %d Mask= 0x%x\n",uVar4,
                   ((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x20c)),(*(undefined4 *)(gen_frame + 0x40c)),(uint)(*(ushort *)(gen_frame + 0x412)),(*(undefined4 *)(gen_frame + 0x424)));
        }
        else {
          F_00c4720f(((char *)(gen_frame + 0x478)),"Device[%d]ERROR!\n",uVar4);
        }
        pcVar2 = ((char *)(gen_frame + 0x478));
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
        pcVar2 = (char *)(param_1 + -1);
        do {
          pcVar6 = pcVar2 + 1;
          pcVar2 = pcVar2 + 1;
        } while (*pcVar6 != '\0');
        pcVar6 = ((char *)(gen_frame + 0x478));
        for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar2 = pcVar2 + 4;
        }
        uVar4 = uVar4 + 1;
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar2 = pcVar2 + 1;
        }
      } while (uVar4 < (*(uint *)(gen_frame + 0x8)));
    }
    F_00c48350(&(*(undefined4 *)(gen_frame + 0x438)),0,0x40);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x38))))(REFG(int * PTR32, 0x15d8ba4),&(*(undefined4 *)(gen_frame + 0x438)));
    F_00c4720f(((char *)(gen_frame + 0x478)),"SinceLastQuery = %d %d\n",(*(undefined4 *)(gen_frame + 0x438)),(*(undefined4 *)(gen_frame + 0x43c)),(*(undefined4 *)(gen_frame + 0x440)),(*(undefined4 *)(gen_frame + 0x444)));
    pcVar2 = ((char *)(gen_frame + 0x478));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
    pcVar2 = (char *)(param_1 + -1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x478));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    F_00c4720f(((char *)(gen_frame + 0x478)),"Cycles Min= %d Max= %d\n",(*(undefined4 *)(gen_frame + 0x448)),(*(undefined4 *)(gen_frame + 0x44c)));
    pcVar2 = ((char *)(gen_frame + 0x478));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
    pcVar2 = (char *)(param_1 + -1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x478));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    F_00c4720f(((char *)(gen_frame + 0x478)),"Mem= %x Latency= %d Glitch= %d\n",(*(undefined4 *)(gen_frame + 0x450)),(*(undefined4 *)(gen_frame + 0x454)),(*(undefined4 *)(gen_frame + 0x458)));
    pcVar2 = ((char *)(gen_frame + 0x478));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
    pcVar2 = (char *)(param_1 + -1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x478));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    F_00c4720f(((char *)(gen_frame + 0x478)),"SourceVoice %d/%d SubMix= %d\n",(*(undefined4 *)(gen_frame + 0x45c)),(*(undefined4 *)(gen_frame + 0x460)),(*(undefined4 *)(gen_frame + 0x464)));
    pcVar2 = ((char *)(gen_frame + 0x478));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
    pcVar2 = (char *)(param_1 + -1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x478));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    F_00c4720f(((char *)(gen_frame + 0x478)),"XApo Resampler= %d MatrixMix= %d\n",(*(undefined4 *)(gen_frame + 0x468)),(*(undefined4 *)(gen_frame + 0x46c)));
    pcVar2 = ((char *)(gen_frame + 0x478));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
    pcVar2 = (char *)(param_1 + -1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
  }
  else {
    F_00c4720f(((char *)(gen_frame + 0x478)),"XA2DeviceError = %x\n",uVar3);
    pcVar2 = ((char *)(gen_frame + 0x478));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
    pcVar2 = (char *)(param_1 + -1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
  }
  pcVar6 = ((char *)(gen_frame + 0x478));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x5f8)) ^ (uint)(uint)(gen_frame + 0x5fc));
  return uVar3;
}

/* ref: FUN_00ccbb70 */
unsigned int F_00ccbb70(void)
{
  GEN_ENTER(0xccbb70u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined * rclsid;
  HRESULT HVar2;
  
  if (REFG(char, 0x15d8bd8) != '\0') {
    if (REFG(int * PTR32, 0x15d8bbc) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8bbc) + 0x48))))(REFG(int * PTR32, 0x15d8bbc));
      REFG(int * PTR32, 0x15d8bbc) = (int *)0x0;
    }
    if (REFG(int * PTR32, 0x15d8ba4) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x30))))(REFG(int * PTR32, 0x15d8ba4));
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 8))))(REFG(int * PTR32, 0x15d8ba4));
      REFG(int * PTR32, 0x15d8ba4) = (int *)0x0;
    }
    puVar1 = REFG(undefined4 * PTR32, 0x15d8bb0);
    if (REFG(undefined4 * PTR32, 0x15d8bb0) != (undefined4 *)0x0) {
      *REFG(undefined4 * PTR32, 0x15d8bb0) = (*(undefined * PTR32 (*)[3])REFP(0x112ad94));
      F_00406810(puVar1);
      REFG(undefined4 * PTR32, 0x15d8bb0) = (undefined4 *)0x0;
    }
    rclsid = (undefined *)&REFG(undefined, 0x112ad80);
    if (((byte)REFG(undefined4, 0x15d8bb4) & 1) == 0) {
      rclsid = (undefined *)&REFG(undefined, 0x112ad70);
    }
    HVar2 = gen_imp_CoGetClassObject(rclsid,1,(LPVOID)0x0,(undefined *)&REFG(undefined, 0x1082394),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < HVar2) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),0);
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
    }
    if (REFG(int, 0x15d8bb8) != 0) {
      F_00406810(REFG(int, 0x15d8bb8));
      REFG(int, 0x15d8bb8) = 0;
    }
    if (REFG(int, 0x15d8bc4) != 0) {
      F_00406810(REFG(int, 0x15d8bc4));
      REFG(int, 0x15d8bc4) = 0;
    }
    if (REFG(int, 0x15d8bc8) != 0) {
      F_00406810(REFG(int, 0x15d8bc8));
      REFG(int, 0x15d8bc8) = 0;
    }
    gen_imp_CoUninitialize();
    F_00ce45c0();
    REFG(char, 0x15d8bd8) = '\0';
  }
  return 0;
}

/* ref: FUN_00ccbc80 */
uint F_00ccbc80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccbc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: FUN_00ccbd20 */
byte F_00ccbd20(unsigned int gen_a0)
{
  GEN_ENTER(0xccbd20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x840];
  int iVar1;
  HRESULT HVar2;
  uint uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x838)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x83c);
  F_00ccb5e0();
  if (REFG(char, 0x15d8bd8) != '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x838)) ^ (uint)(uint)(gen_frame + 0x83c));
    return 1;
  }
  F_00ce45a0();
  gen_imp_CoInitializeEx((LPVOID)0x0,0);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  if ((REFG(undefined4, 0x15d8bb4) & 1) == 0) {
LAB_00ccbda5: ;
    HVar2 = gen_imp_CoGetClassObject(&REFG(undefined, 0x112ad70),1,0,&REFG(undefined, 0x1082394),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (HVar2 < 0) goto LAB_00ccbdf8;
  }
  else {
    HVar2 = gen_imp_CoGetClassObject(&REFG(undefined, 0x112ad80),1,0,&REFG(undefined, 0x1082394),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (HVar2 < 0) {
      REFG(undefined4, 0x15d8bb4) = 0;
    }
    if ((REFG(undefined4, 0x15d8bb4) & 1) == 0) goto LAB_00ccbda5;
  }
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),1);
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
  uVar3 = F_00ccc110(&REFG(int * PTR32, 0x15d8ba4),REFG(undefined4, 0x15d8bb4),*(undefined4 *)(param_1 + 0x54));
  if (uVar3 == 0) {
    (*(uint *)(gen_frame + 0x4)) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0xc))))(REFG(int * PTR32, 0x15d8ba4),&(*(uint *)(gen_frame + 0x4)));
    uVar4 = 0;
    uVar3 = 0xffffffff;
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      do {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x10))))(REFG(int * PTR32, 0x15d8ba4),uVar4,((undefined1 *)(gen_frame + 0xc)));
        if (((*(uint *)(gen_frame + 0x40c)) & 8) != 0) {
          REFG(undefined4, 0x134c7e4) = (uint)(*(ushort *)(gen_frame + 0x412));
          REFG(undefined4, 0x134c7e8) = (*(undefined4 *)(gen_frame + 0x414));
          *(undefined4 *)&REFG(undefined, 0x15d8bd4) = (*(undefined4 *)(gen_frame + 0x424));
          uVar3 = uVar4;
          break;
        }
        if ((*(uint *)(gen_frame + 0x40c)) != 0) {
          REFG(undefined4, 0x134c7e4) = (uint)(*(ushort *)(gen_frame + 0x412));
          REFG(undefined4, 0x134c7e8) = (*(undefined4 *)(gen_frame + 0x414));
          *(undefined4 *)&REFG(undefined, 0x15d8bd4) = (*(undefined4 *)(gen_frame + 0x424));
          uVar3 = uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (*(uint *)(gen_frame + 0x4)));
      if (uVar3 != 0xffffffff) {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x2c))))(REFG(int * PTR32, 0x15d8ba4));
        uVar3 = *(uint *)(param_1 + 0x38);
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798));
        }
        if (REFG(char, 0x15d7798) != '\0') {
          if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
            F_00ccaf80(&REFG(char, 0x15d7798));
          }
          uVar3 = (uint)REFG(undefined1, 0x15d82b0);
        }
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
        }
        REFG(void * PTR32, 0x15d8bb8) = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c),uVar3 * 4,"CDev.Engine.Sd.SoundDriver",0,0,
                                          0x10)));
        F_00c48350(REFG(void * PTR32, 0x15d8bb8),0,uVar3 * 4);
        iVar1 = *(int *)(param_1 + 0x3c);
        REFG(undefined4, 0x15d8bc0) = uVar3;
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
        }
        REFG(undefined4, 0x15d8bc8) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                 (REFG(int * PTR32, 0x15d778c),iVar1 * 4,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
        iVar1 = *(int *)(param_1 + 0x3c);
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
        }
        REFG(undefined4, 0x15d8bc4) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                 (REFG(int * PTR32, 0x15d778c),iVar1 * 4,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
        REFG(undefined4, 0x15d8bcc) = 0;
        *(undefined4 *)&REFG(undefined, 0x15d8bd0) = 0;
        *(undefined4 *)&REFG(undefined, 0x134c7f0) = *(undefined4 *)(param_1 + 0x58);
        REFG(char, 0x15d8bd8) = 1;
        F_00c47745((*(uint *)(gen_frame + 0x838)) ^ (uint)(uint)(gen_frame + 0x83c));
        return 1;
      }
    }
    (*(undefined1 *)(gen_frame + 0x836)) = 0;
    F_00c472ec(((char *)(gen_frame + 0x438)),0x400,0x3fe,"[sd][Driver][XA2] Error: Sound Device is not found.");
    F_00c473c8(((char *)(gen_frame + 0x438)),0x400,&REFG(undefined, 0x112aa90));
    F_00cbee70(((char *)(gen_frame + 0x438)),2);
    F_00c47745((*(uint *)(gen_frame + 0x838)) ^ (uint)(uint)(gen_frame + 0x83c));
    return 0;
  }
LAB_00ccbdf8: ;
  gen_imp_CoUninitialize();
  F_00c47745((*(uint *)(gen_frame + 0x838)) ^ (uint)(uint)(gen_frame + 0x83c));
  return 0;
}

/* ref: FUN_00ccc080 */
uint F_00ccc080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  if (REFG(undefined4, 0x15d8bbc) == 0) {
    iVar1 = REFG(int, 0x15d8bac);
    if (REFG(int, 0x15d8bac) == 0) {
      iVar1 = REFG(int, 0x15d8ba8);
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)(gen_frame + 0x10));
    (*(undefined4 *)(gen_frame + 0x10)) = 0x80;
    (*(int *)(gen_frame + 0x14)) = iVar1;
    (*(undefined4 *)(gen_frame + 0x8)) = 1;
    if (((REFG(int * PTR32, 0x15d8ba4) != (int *)0x0) && (iVar1 != 0)) &&
       (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                          (REFG(int * PTR32, 0x15d8ba4),&REFG(undefined4, 0x15d8bbc),param_1,param_2 & 0xffff,0,0,&(*(undefined4 *)(gen_frame + 0x8)),0),
       (int)uVar2 < 0)) {
      F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x1b)),"!\"[sd][Driver][XA2] Error: CreateSubmixVoice\"",&REFG(undefined, 0x112aa92),
                   "XA2\\AudioXA2.cpp",0x1ec,
                   "SQEX::CDev::Engine::Sd::Driver::XA2::AudioXA2::CreateDefaultSubmixVoice");
    }
  }
  return REFG(undefined4, 0x15d8bbc);
}

/* ref: FUN_00ccc110 */
uint F_00ccc110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc110u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  undefined * rclsid;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  rclsid = (undefined *)&REFG(undefined, 0x112ad80);
  if (((uint)(*(int * PTR32 *)&gen_args[1]) & 1) == 0) {
    rclsid = (undefined *)&REFG(undefined, 0x112ad70);
  }
  uVar2 = gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112ad60),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x14))))((*(int * PTR32 *)&gen_args[1]),piVar1,(*(undefined4 *)&gen_args[2]));
    if (-1 < (int)uVar2) {
      *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
      return uVar2;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioXA2::EngineCallback::vf2 */
unsigned int F_00ccc1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioXA2::EngineCallback::vf1 */
unsigned int F_00ccc1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioXA2::EngineCallback::vf0 */
unsigned int F_00ccc1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00ccc230 */
uint F_00ccc230(unsigned int gen_a0)
{
  GEN_ENTER(0xccc230u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1);
  return uVar1;
}

/* ref: FUN_00ccc250 */
uint F_00ccc250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc270 */
uint F_00ccc270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc270u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc290 */
uint F_00ccc290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc290u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc2b0 */
uint F_00ccc2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccc2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00ccc2e0 */
uint F_00ccc2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccc2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00ccc310 */
uint F_00ccc310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc310u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc330 */
uint F_00ccc330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc330u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc350 */
uint F_00ccc350(unsigned int gen_a0)
{
  GEN_ENTER(0xccc350u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1);
  return uVar1;
}

/* ref: FUN_00ccc370 */
uint F_00ccc370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc370u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc390 */
uint F_00ccc390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc390u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc3b0 */
uint F_00ccc3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc3b0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc3d0 */
uint F_00ccc3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xccc3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00ccc400 */
uint F_00ccc400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xccc400u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00ccc430 */
uint F_00ccc430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc430u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc450 */
uint F_00ccc450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc450u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc470 */
uint F_00ccc470(unsigned int gen_a0)
{
  GEN_ENTER(0xccc470u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1);
  return uVar1;
}

/* ref: FUN_00ccc490 */
uint F_00ccc490(unsigned int gen_a0)
{
  GEN_ENTER(0xccc490u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  return uVar1;
}

/* ref: FUN_00ccc4b0 */
uint F_00ccc4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc4b0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc4d0 */
uint F_00ccc4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc4d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc4f0 */
uint F_00ccc4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc4f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc510 */
uint F_00ccc510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc510u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc530 */
uint F_00ccc530(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xccc530u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,(undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_00ccc550 */
uint F_00ccc550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xccc550u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ccc570 */
uint F_00ccc570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc570u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x20))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc590 */
uint F_00ccc590(unsigned int gen_a0)
{
  GEN_ENTER(0xccc590u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1);
  return uVar1;
}

/* ref: FUN_00ccc5b0 */
uint F_00ccc5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc5b0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc5d0 */
uint F_00ccc5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc5d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc5f0 */
uint F_00ccc5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xccc5f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
  return uVar1;
}

/* ref: FUN_00ccc610 */
uint F_00ccc610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xccc610u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ccc630 */
uint F_00ccc630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc630u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc650 */
uint F_00ccc650(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xccc650u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,param_2,(undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_00ccc670 */
uint F_00ccc670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc670u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc690 */
uint F_00ccc690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc690u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x20))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc6b0 */
uint F_00ccc6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc6b0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc6d0 */
uint F_00ccc6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc6d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc6f0 */
uint F_00ccc6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccc6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x2c))(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00ccc720 */
uint F_00ccc720(unsigned int gen_a0)
{
  GEN_ENTER(0xccc720u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  return uVar1;
}

/* ref: FUN_00ccc740 */
uint F_00ccc740(unsigned int gen_a0)
{
  GEN_ENTER(0xccc740u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  return uVar1;
}

/* ref: FUN_00ccc760 */
uint F_00ccc760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc760u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc780 */
uint F_00ccc780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc780u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc7a0 */
uint F_00ccc7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc7a0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc7c0 */
uint F_00ccc7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc7c0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc7e0 */
uint F_00ccc7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xccc7e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1);
  return uVar1;
}

/* ref: FUN_00ccc800 */
uint F_00ccc800(unsigned int gen_a0)
{
  GEN_ENTER(0xccc800u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x20))(param_1);
  return uVar1;
}

/* ref: FUN_00ccc820 */
uint F_00ccc820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xccc820u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00ccc850 */
uint F_00ccc850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xccc850u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00ccc880 */
uint F_00ccc880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc880u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x2c))(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc8a0 */
uint F_00ccc8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xccc8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x30))
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00ccc8d0 */
uint F_00ccc8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0xccc8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc930 */
uint F_00ccc930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16)
{
  GEN_ENTER(0xccc930u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  undefined4 param_14 = (undefined4)gen_a13;
  undefined4 param_15 = (undefined4)gen_a14;
  undefined4 param_16 = (undefined4)gen_a15;
  undefined4 param_17 = (undefined4)gen_a16;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x38))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc9a0 */
uint F_00ccc9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc9a0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x3c))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc9c0 */
uint F_00ccc9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc9c0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x40))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccc9e0 */
uint F_00ccc9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc9e0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x44))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccca00 */
uint F_00ccca00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccca00u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x48))(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccca20 */
uint F_00ccca20(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xccca20u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x4c))(param_1,param_2,(undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_00ccca40 */
uint F_00ccca40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccca40u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccca60 */
uint F_00ccca60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccca60u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x54))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccca80 */
uint F_00ccca80(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xccca80u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x58))(param_1,param_2,(undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_00cccaa0 */
uint F_00cccaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcccaa0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00cccac0 */
uint F_00cccac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcccac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x112ad94));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cccaf0 */
uint F_00cccaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcccaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c473c8(param_1,0x400,param_2);
  return uVar1;
}

/* ref: FUN_00cccb10 */
uint F_00cccb10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcccb10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  in_ecx[1] = (undefined4)gen_fl2bits(param_2);
  in_ecx[2] = (undefined4)gen_fl2bits(param_2);
  *in_ecx = (*(undefined * PTR32 (*)[7])REFP(0x112adb0));
  in_ecx[4] = 0;
  in_ecx[3] = (undefined4)gen_fl2bits((float)(float10)0);
  in_ecx[5] = 0;
  in_ecx[6] = (undefined4)gen_fl2bits((float)(float10)0);
  in_ecx[8] = 0;
  in_ecx[7] = (undefined4)gen_fl2bits((float)(float10)1);
  return (uint)in_ecx;
}

/* ref: FUN_00cccb40 */
unsigned int F_00cccb40(unsigned int gen_a0)
{
  GEN_ENTER(0xcccb40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[7])REFP(0x112adb0));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf1 */
uint F_00cccb50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcccb50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 4) = param_2;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(float *)(in_ecx + 8) = param_2;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined4 *)(in_ecx + 0x20) = 0;
  *(float *)(in_ecx + 0xc) = (float)(float10)0;
  *(float *)(in_ecx + 0x18) = (float)(float10)0;
  *(float *)(in_ecx + 0x1c) = (float)(float10)1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf2 */
unsigned int F_00cccb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcccb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if (this[0x20] != (undefined1)0x0) {
    this[0x20] = (undefined1)0x0;
  }
  if (this[0x22] != (undefined1)0x0) {
    this[0x22] = (undefined1)0x0;
  }
  if (0 < *(int *)(this + 0x10)) {
    iVar1 = *(int *)(this + 0x10) - param_1;
    *(int *)(this + 0x10) = iVar1;
    if (iVar1 < 1) {
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 4) = *(undefined4 *)(this + 8);
      return 0;
    }
    *(float *)(this + 4) =
         ((float)GEN_TOF(((float10)*(float *)(this + 0xc) * (float10)param_1 + (float10)*(float *)(this + 4))))
    ;
  }
  return 0;
}

/* ref: FUN_00cccbd0 */
unsigned int F_00cccbd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcccbd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(float *)(in_ecx + 4) = param_2;
  *(float *)(in_ecx + 8) = param_2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf3 */
byte F_00cccbf0(unsigned int gen_a0)
{
  GEN_ENTER(0xcccbf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((((0 < *(int *)(in_ecx + 0x10)) || (*(char *)(in_ecx + 0x20) != '\0')) ||
      (*(char *)(in_ecx + 0x22) != '\0')) && (*(char *)(in_ecx + 0x23) == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cccc10 */
unsigned int F_00cccc10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcccc10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(undefined1 *)(in_ecx + 0x20) = 1;
  *(float *)(in_ecx + 0x1c) = param_2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf5 */
unsigned int F_00cccc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcccc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float10 fVar1;
  
  *(int *)(this + 0x10) = *(int *)(this + 0x10) - param_1;
  if (*(int *)(this + 0x10) < 1) {
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 4) = *(undefined4 *)(this + 8);
    return 0;
  }
  fVar1 = (float10)param_1;
  if (param_1 < 0) {
    fVar1 = fVar1 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 4) =
       ((float)GEN_TOF((fVar1 * (float10)*(float *)(this + 0xc) + (float10)*(float *)(this + 4))));
  return 0;
}

/* ref: FUN_00cccc70 */
unsigned int F_00cccc70(unsigned int gen_a0)
{
  GEN_ENTER(0xcccc70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x23) = 1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf6 */
unsigned int F_00cccc80(unsigned int gen_a0)
{
  GEN_ENTER(0xcccc80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x23) = 0;
  return 0;
}

/* ref: FUN_00cccc90 */
unsigned int F_00cccc90(float gen_a0)
{
  GEN_ENTER(0xcccc90u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00ccccc0 */
float10 F_00ccccc0(float gen_a0)
{
  GEN_ENTER(0xccccc0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)(float)((float10)1 - (float10)param_1 * (float10)param_1);
  return (float10)((float)GEN_TOF(((float10)1 - (float10)((float)GEN_TOF(((fVar1 * fVar1) * fVar1))))));
}

/* ref: FUN_00ccccf0 */
float10 F_00ccccf0(float gen_a0)
{
  GEN_ENTER(0xccccf0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)(float)((float10)1 - (float10)param_1);
  fVar1 = (float10)(float)((float10)1 - fVar1 * fVar1);
  return (float10)((float)GEN_TOF(((fVar1 * fVar1) * fVar1)));
}

/* ref: FUN_00cccd20 */
float10 F_00cccd20(float gen_a0)
{
  GEN_ENTER(0xcccd20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)1;
  fVar2 = (float10)((float)GEN_TOF((fVar1 - (float10)(float)(fVar1 - (float10)param_1) *
                                   (float10)(float)(fVar1 - (float10)param_1))));
  return (float10)((float)GEN_TOF((fVar1 - (float10)((float)GEN_TOF(((fVar2 * fVar2) * fVar2))))));
}

/* ref: FUN_00cccd60 */
unsigned int F_00cccd60(float gen_a0)
{
  GEN_ENTER(0xcccd60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00cccd90 */
uint F_00cccd90(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcccd90u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  if (param_3 == 0) {
    *(float *)(param_1 + 4) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(float *)(param_1 + 8) = param_2;
    return 0;
  }
  *(float *)(param_1 + 8) = param_2;
  uVar1 = param_3 & 0xfffffff;
  *(byte *)(param_1 + 0x21) = (byte)(param_3 >> 0x1c);
  *(uint *)(param_1 + 0x10) = uVar1;
  *(uint *)(param_1 + 0x14) = uVar1;
  *(float *)(param_1 + 0xc) =
       ((float)GEN_TOF((((float10)param_2 - (float10)*(float *)(param_1 + 4)) / (float10)uVar1)));
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 4);
  return uVar1;
}

/* ref: FUN_00cccde0 */
float F_00cccde0(unsigned int gen_a0)
{
  GEN_ENTER(0xcccde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(char *)((int)this + 0x21) != '\0') {
    iVar3 = *(int *)((int)this + 0x14);
    iVar4 = iVar3 - *(int *)((int)this + 0x10);
    fVar5 = (float10)iVar4;
    if (iVar4 < 0) {
      fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar6 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar1 = (float)(fVar5 / fVar6);
    fVar2 = ((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 8) -
                                       (float10)*(float *)((int)this + 0x18)))))));
    switch((unsigned int)(uintptr_t)(*(char *)((int)this + 0x21))) {
    case '\x01': ;
      fVar5 = F_00ccccc0(fVar1);
      return ((float)GEN_TOF((fVar5 * (float10)fVar2 + (float10)*(float *)((int)this + 0x18))));
    case '\x02': ;
      fVar5 = F_00cccd20(fVar1);
      return ((float)GEN_TOF((fVar5 * (float10)fVar2 + (float10)*(float *)((int)this + 8))));
    case '\x03': ;
      fVar5 = F_00ccccf0(fVar1);
      return ((float)GEN_TOF((fVar5 * (float10)fVar2 + (float10)*(float *)((int)this + 0x18))));
    case '\x04': ;
      fVar5 = (float10)(float)((float10)1 - (float10)fVar1 * (float10)fVar1);
      return ((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar5 * fVar5) * fVar5))) * (float10)fVar2 +
                    (float10)*(float *)((int)this + 8))));
    }
  }
  return *(float *)((int)this + 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf4 */
float F_00cccee0(unsigned int gen_a0)
{
  GEN_ENTER(0xcccee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  fVar1 = F_00cccde0(this);
  return ((float)GEN_TOF(((float10)fVar1 * (float10)*(float *)(((int)(uint)(this)) + 0x1c))));
}

/* ref: FUN_00cccf00 */
uint F_00cccf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcccf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x112adb0));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cccf30 */
unsigned int F_00cccf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcccf30u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cccf50 */
uint F_00cccf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcccf50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float fVar1;
  
  fVar1 = *(float *)&REFG(undefined, 0x112addc);
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb10(in_ecx + 1,fVar1);
  F_00cccb10(in_ecx + 10,*(float *)&REFG(undefined, 0x112ade0));
  F_00cccb10(in_ecx + 0x13,(float)(float10)1);
  return (uint)in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf3 */
uint F_00cccfa0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcccfa0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  code * pcVar2;
  
  if (param_3 == 0) {
    pcVar2 = *(gen_code32 *)(*param_1 + 0x28);
  }
  else if (param_3 == 1) {
    pcVar2 = *(gen_code32 *)(*param_1 + 0x2c);
  }
  else {
    if (param_3 != 2) goto LAB_00cccfd6;
    pcVar2 = *(gen_code32 *)(*param_1 + 0x30);
  }
  (*pcVar2)(param_1,(undefined4)gen_fl2bits(param_2),param_4);
LAB_00cccfd6: ;
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf10 */
uint F_00cccff0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcccff0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float10 fVar1;
  uint uVar3;
  float10 fVar4;
  
  fVar1 = (float10)0;
  fVar4 = (float10)param_2;
  if (!(fVar1 <= fVar4) == (GEN_ISNAN(fVar4) || GEN_ISNAN(fVar1))) {
    fVar1 = (float10)1;
    if (!(fVar4 <= fVar1) != (GEN_ISNAN(fVar1) || GEN_ISNAN(fVar4))) {
      param_2 = (float)fVar1;
    }
  }
  else {
    param_2 = (float)fVar1;
  }
  fVar1 = ((float10)GEN_TOD(pow((float10)*(double *)&REFG(undefined, 0x1092098),
                               (float10)((float)GEN_TOF((((float10)1 - (float10)param_2) *
                                               (float10)*(double *)&REFG(undefined, 0x10ac278)))))));
  if (param_3 == 0) {
    F_00cccbd0(param_1 + 4,(float)((float10)(float)fVar1 * (float10)*(double *)&REFG(undefined, 0x112b0a0)));
    return 0;
  }
  uVar3 = F_00cccd90(param_1 + 4,
                       (float)((float10)(float)fVar1 * (float10)*(double *)&REFG(undefined, 0x112b0a0)),param_3);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf11 */
uint F_00ccd080(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccd080u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar1 = (float10)0;
  fVar3 = (float10)param_2;
  if (!(fVar1 <= fVar3) != (GEN_ISNAN(fVar3) || GEN_ISNAN(fVar1))) {
    fVar3 = (float10)(float)fVar1;
  }
  if (param_3 == 0) {
    F_00cccbd0(param_1 + 0x28,(float)fVar3);
    return 0;
  }
  uVar2 = F_00cccd90(param_1 + 0x28,(float)fVar3,param_3);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf12 */
uint F_00ccd0d0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccd0d0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 0x4c,param_2,param_3);
    return uVar1;
  }
  F_00cccbd0(param_1 + 0x4c,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf13 */
uint F_00ccd100(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xccd100u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,(undefined4)gen_fl2bits(param_2),0);
  ((code *)*(gen_code32 *)(*param_1 + 0x2c))(param_1,(undefined4)gen_fl2bits(param_3),0);
  ((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1,(undefined4)gen_fl2bits(param_4),0);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf16 */
uint F_00ccd150(unsigned int gen_a0)
{
  GEN_ENTER(0xccd150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 4))))(this + 4,*(undefined4 *)&REFG(undefined, 0x112addc));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 4))))(this + 0x28,*(undefined4 *)&REFG(undefined, 0x112ade0));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 4))))
                    (this + 0x4c,(undefined4)gen_fl2bits((float)(float10)1));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf4 */
uint F_00ccd190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccd190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0xc))))(this + 4);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 8))))(this + 4,param_1);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))))(this + 0x28);
  bVar3 = (char)uVar1 != '\0';
  if (bVar3) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 8))))(this + 0x28,param_1);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 0xc))))(this + 0x4c);
  if ((char)uVar1 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 8))))(this + 0x4c,param_1);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
    return uVar1;
  }
  if (bVar3 || bVar2) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
  }
  return uVar1;
}

/* ref: FUN_00ccd220 */
float10 F_00ccd220(float gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xccd220u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  float in_xmm3 = (float)gen_a0;
  float in_xmm5 = (float)gen_a1;
  float in_xmm6 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 extraout_ST1;
  float10 fVar7;
  
  fVar2 = F_00c4d590(in_xmm3,in_xmm5,in_xmm6,
                       (float10)(float)((float10)param_5 * (float10)*(double *)&REFG(undefined, 0x1080228)));
  fVar3 = (float10)(float)fVar2;
  fVar4 = (float10)(float)(fVar3 * (float10)param_6);
  fVar2 = (float10)1;
  fVar5 = (float10)(float)(fVar3 * fVar3);
  fVar1 = ((float)GEN_TOF((fVar2 / (fVar5 + (fVar4 + fVar2)))));
  fVar7 = fVar5 * (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar6 = (float10)fVar1;
  *(float *)(param_4 + 0xc) = ((float)GEN_TOF(-(fVar6 * (fVar7 - (float10)*(double *)&REFG(undefined, 0x1092098)))));
  *(float *)(param_4 + 0x10) = ((float)GEN_TOF(-(((fVar2 - fVar4) + fVar5) * fVar6)));
  fVar2 = (float10)((float)GEN_TOF(SQRT((float10)param_7))) * (float10)(float)(fVar3 * (float10)param_6);
  fVar4 = (float10)param_7 * (float10)(float)(fVar3 * fVar3);
  fVar3 = (float10)fVar1;
  *(float *)param_4 = ((float)GEN_TOF((fVar3 * ((fVar2 + (float10)1) + fVar4))));
  *(float *)(param_4 + 4) =
       ((float)GEN_TOF((((float10)param_7 * (float10)(double)fVar7 - (float10)*(double *)&REFG(undefined, 0x1092098)) *
              fVar3)));
  *(float *)(param_4 + 8) = ((float)GEN_TOF(((((float10)1 - fVar2) + fVar4) * fVar3)));
  return extraout_ST1;
}

/* ref: FUN_00ccd2f0 */
float10 F_00ccd2f0(float gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xccd2f0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  float in_xmm3 = (float)gen_a0;
  float in_xmm5 = (float)gen_a1;
  float in_xmm6 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 extraout_ST1;
  
  fVar2 = F_00c4d590(in_xmm3,in_xmm5,in_xmm6,
                       (float10)(float)((float10)param_5 * (float10)*(double *)&REFG(undefined, 0x1080228)));
  fVar3 = (float10)(float)fVar2;
  fVar4 = (float10)(float)(fVar3 * (float10)param_6);
  fVar2 = (float10)1;
  fVar5 = (float10)(float)(fVar3 * fVar3);
  fVar1 = ((float)GEN_TOF((fVar2 / (fVar5 + (fVar4 + fVar2)))));
  fVar6 = (float10)fVar1;
  *(float *)(param_4 + 0xc) =
       ((float)GEN_TOF(-(fVar6 * (fVar5 * (float10)*(double *)&REFG(undefined, 0x1092098) -
                        (float10)*(double *)&REFG(undefined, 0x1092098)))));
  *(float *)(param_4 + 0x10) = ((float)GEN_TOF(-(((fVar2 - fVar4) + fVar5) * fVar6)));
  fVar2 = (float10)((float)GEN_TOF(SQRT((float10)param_7))) * (float10)(float)(fVar3 * (float10)param_6);
  fVar4 = (float10)param_7;
  fVar3 = (float10)(float)(fVar3 * fVar3);
  fVar5 = (float10)fVar1;
  *(float *)param_4 = ((float)GEN_TOF((fVar5 * (fVar3 + (fVar4 + fVar2)))));
  *(float *)(param_4 + 4) = ((float)GEN_TOF((((fVar3 - fVar4) + (fVar3 - fVar4)) * fVar5)));
  *(float *)(param_4 + 8) = ((float)GEN_TOF((((fVar4 - fVar2) + fVar3) * fVar5)));
  return extraout_ST1;
}

/* ref: FUN_00ccd3b0 */
uint F_00ccd3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xccd3b0u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)0;
  param_1[3] = (float)fVar1;
  param_1[4] = (float)fVar1;
  *param_1 = (float)(float10)1;
  param_1[1] = (float)fVar1;
  param_1[2] = (float)fVar1;
  return (uint)param_1;
}

/* ref: FUN_00ccd3e0 */
uint F_00ccd3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xccd3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float10 fVar1;
  
  fVar1 = (float10)0;
  param_1[3] = (float)fVar1;
  param_1[4] = (float)fVar1;
  *param_1 = (float)(float10)1;
  param_1[1] = (float)fVar1;
  param_1[2] = (float)fVar1;
  return (uint)param_1;
}

/* ref: FUN_00ccd400 */
uint F_00ccd400(void)
{
  GEN_ENTER(0xccd400u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00ccd410 */
uint F_00ccd410(void)
{
  GEN_ENTER(0xccd410u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_00ccd420 */
uint F_00ccd420(void)
{
  GEN_ENTER(0xccd420u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: FUN_00ccd430 */
uint F_00ccd430(void)
{
  GEN_ENTER(0xccd430u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: FUN_00ccd440 */
uint F_00ccd440(void)
{
  GEN_ENTER(0xccd440u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: FUN_00ccd450 */
float10 F_00ccd450(float gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xccd450u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  float in_xmm3 = (float)gen_a0;
  float in_xmm5 = (float)gen_a1;
  float in_xmm6 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float10 fVar1;
  
  fVar1 = F_00ccd220(in_xmm3,in_xmm5,in_xmm6,param_4,param_5,param_6,param_7);
  return fVar1;
}

/* ref: FUN_00ccd480 */
uint F_00ccd480(void)
{
  GEN_ENTER(0xccd480u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: FUN_00ccd490 */
float10 F_00ccd490(float gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xccd490u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  float in_xmm3 = (float)gen_a0;
  float in_xmm5 = (float)gen_a1;
  float in_xmm6 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float10 fVar1;
  
  fVar1 = F_00ccd2f0(in_xmm3,in_xmm5,in_xmm6,param_4,param_5,param_6,param_7);
  return fVar1;
}

/* ref: FUN_00ccd4c0 */
uint F_00ccd4c0(void)
{
  GEN_ENTER(0xccd4c0u, 0u, 0u, 0u, 0u);
  return 7;
}

/* ref: FUN_00ccd4d0 */
uint F_00ccd4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccd4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float10 fVar1;
  float fVar3;
  float10 fVar4;
  float local_8;
  
  fVar3 = *(float *)&REFG(undefined, 0x112addc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb10((int)this + 4,fVar3);
  F_00cccb10((int)this + 0x28,*(float *)&REFG(undefined, 0x112ade0));
  F_00cccb10((int)this + 0x4c,(float)(float10)1);
  if (param_1 == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 4))))
              ((int)this + 4,(undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x112addc)));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x28) + 4))))
              ((int)this + 0x28,(undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x112ade0)));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4c) + 4))))
              ((int)this + 0x4c,(undefined4)gen_fl2bits((float)(float10)1));
    return (uint)this;
  }
  local_8 = *(float *)(param_1 + 0x14);
  fVar1 = (float10)0;
  fVar4 = (float10)local_8;
  if (!(fVar1 <= fVar4) == (GEN_ISNAN(fVar4) || GEN_ISNAN(fVar1))) {
    fVar1 = (float10)1;
    if (!(fVar4 <= fVar1) != (GEN_ISNAN(fVar1) || GEN_ISNAN(fVar4))) {
      local_8 = (float)fVar1;
    }
  }
  else {
    local_8 = (float)fVar1;
  }
  fVar1 = ((float10)GEN_TOD(pow((float10)*(double *)&REFG(undefined, 0x1092098),
                               (float10)((float)GEN_TOF((((float10)1 - (float10)local_8) *
                                               (float10)*(double *)&REFG(undefined, 0x10ac278)))))));
  F_00cccbd0((int)this + 4,(float)((float10)(float)fVar1 * (float10)*(double *)&REFG(undefined, 0x112b0a0)));
  local_8 = *(float *)(param_1 + 0x18);
  fVar4 = (float10)0;
  fVar1 = (float10)local_8;
  if (fVar1 <= fVar4 && ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar1)) && fVar4 != fVar1)) {
    local_8 = (float)fVar4;
  }
  F_00cccbd0((int)this + 0x28,local_8);
  F_00cccbd0((int)this + 0x4c,*(float *)(param_1 + 0x1c));
  return (uint)this;
}

/* ref: FUN_00ccd620 */
uint F_00ccd620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccd620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: FUN_00ccd6c0 */
unsigned int F_00ccd6c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xccd6c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  dVar2 = (double)param_2;
  if (!(*(double *)&REFG(undefined, 0x112b0a0) <= dVar2) ==
      ((GEN_ISNAN(dVar2) || GEN_ISNAN(*(double *)&REFG(undefined, 0x112b0a0))) || dVar2 == *(double *)&REFG(undefined, 0x112b0a0))) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xccd620));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("freq <= FILTER_MAX_FREQUENCY",&REFG(undefined, 0x112ade4),"FilterBase.cpp",0xc4,
                    "SQEX::CDev::Engine::Sd::Driver::FilterBase::CalculateLowPassCoefficients");
  }
  fVar6 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar3 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar4 = (float10)REFG(double, 0x1088108);
  fVar5 = (float10)((float)GEN_TOF((((float10)param_3 * fVar4) * (float10)(float)fVar3)));
  fVar3 = (float10)1;
  fVar6 = (float10)(float)fVar6;
  fVar7 = (float10)((float)GEN_TOF((fVar3 / (fVar5 + fVar3))));
  param_1[3] = ((float)GEN_TOF((fVar7 * (fVar6 + fVar6))));
  param_1[4] = ((float)GEN_TOF(((fVar5 - fVar3) * fVar7)));
  fVar1 = ((float)GEN_TOF(((fVar3 - fVar6) * fVar7)));
  param_1[1] = fVar1;
  fVar1 = (float)((float10)fVar1 * fVar4);
  *param_1 = fVar1;
  param_1[2] = fVar1;
  return 0;
}

/* ref: FUN_00ccd7a0 */
unsigned int F_00ccd7a0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xccd7a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  dVar2 = (double)param_2;
  if (!(*(double *)&REFG(undefined, 0x112b0a0) <= dVar2) ==
      ((GEN_ISNAN(dVar2) || GEN_ISNAN(*(double *)&REFG(undefined, 0x112b0a0))) || dVar2 == *(double *)&REFG(undefined, 0x112b0a0))) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xccd620));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("freq <= FILTER_MAX_FREQUENCY",&REFG(undefined, 0x112ade5),"FilterBase.cpp",0xe2,
                    "SQEX::CDev::Engine::Sd::Driver::FilterBase::CalculateHighPassCoefficients");
  }
  fVar5 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar3 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar4 = (float10)((float)GEN_TOF((((float10)param_3 * (float10)REFG(double, 0x1088108)) * (float10)(float)fVar3)));
  fVar3 = (float10)1;
  fVar5 = (float10)(float)fVar5;
  fVar6 = (float10)((float)GEN_TOF((fVar3 / (fVar4 + fVar3))));
  param_1[3] = ((float)GEN_TOF((fVar6 * (fVar5 + fVar5))));
  param_1[4] = ((float)GEN_TOF(((fVar4 - fVar3) * fVar6)));
  fVar1 = ((float)GEN_TOF(-((fVar5 + fVar3) * fVar6)));
  param_1[1] = fVar1;
  fVar1 = (float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x10968b0));
  *param_1 = fVar1;
  param_1[2] = fVar1;
  return 0;
}

/* ref: FUN_00ccd890 */
uint F_00ccd890(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xccd890u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  
  dVar2 = (double)param_2;
  if (!(*(double *)&REFG(undefined, 0x112b0a0) <= dVar2) ==
      ((GEN_ISNAN(dVar2) || GEN_ISNAN(*(double *)&REFG(undefined, 0x112b0a0))) || dVar2 == *(double *)&REFG(undefined, 0x112b0a0))) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xccd620));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("freq <= FILTER_MAX_FREQUENCY",&REFG(undefined, 0x112ade6),"FilterBase.cpp",0x100,
                    "SQEX::CDev::Engine::Sd::Driver::FilterBase::CalculateBandPassCoefficients");
  }
  fVar4 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar1 = ((float)GEN_TOF((((float10)param_3 * (float10)REFG(double, 0x1088108)) * (float10)(float)fVar4)));
  fVar4 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar3 = (float10)((float)GEN_TOF(((float10)1 / ((float10)fVar1 + (float10)1))));
  param_1[3] = ((float)GEN_TOF((fVar3 * ((float10)(float)fVar4 + (float10)(float)fVar4))));
  fVar4 = (float10)fVar1;
  param_1[4] = ((float)GEN_TOF(((fVar4 - (float10)REFG(double, 0x1088130)) * fVar3)));
  fVar1 = (float)(fVar4 * fVar3);
  *param_1 = fVar1;
  param_1[1] = (float)(float10)0;
  param_1[2] = ((float)GEN_TOF(-(float10)fVar1));
  return (uint)param_1;
}

/* ref: FUN_00ccd960 */
uint F_00ccd960(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xccd960u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float10 fVar5;
  
  dVar4 = (double)param_2;
  if (!(*(double *)&REFG(undefined, 0x112b0a0) <= dVar4) ==
      ((GEN_ISNAN(dVar4) || GEN_ISNAN(*(double *)&REFG(undefined, 0x112b0a0))) || dVar4 == *(double *)&REFG(undefined, 0x112b0a0))) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xccd620));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("freq <= FILTER_MAX_FREQUENCY",&REFG(undefined, 0x112ade7),"FilterBase.cpp",0x11e,
                    "SQEX::CDev::Engine::Sd::Driver::FilterBase::CalculateBandEliminateCoefficients"
                   );
  }
  fVar5 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar1 = ((float)GEN_TOF((((float10)param_3 * (float10)REFG(double, 0x1088108)) * (float10)(float)fVar5)));
  fVar2 = ((float)GEN_TOF(((float10)1 / ((float10)fVar1 + (float10)1))));
  fVar5 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar3 = ((float)GEN_TOF(((float10)fVar2 * ((float10)(float)fVar5 + (float10)(float)fVar5))));
  param_1[3] = fVar3;
  param_1[4] = ((float)GEN_TOF((((float10)fVar1 - (float10)REFG(double, 0x1088130)) * (float10)fVar2)));
  *param_1 = fVar2;
  param_1[1] = ((float)GEN_TOF(-(float10)fVar3));
  param_1[2] = fVar2;
  return (uint)param_1;
}

/* ref: FUN_00ccdb20 */
unsigned int F_00ccdb20(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccdb20u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  F_00ccd6c0((undefined4)gen_fl2bits(param_2),param_3,param_4);
  return 0;
}

/* ref: FUN_00ccdb50 */
unsigned int F_00ccdb50(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccdb50u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  F_00ccd7a0((undefined4)gen_fl2bits(param_2),param_3,param_4);
  return 0;
}

/* ref: FUN_00ccdb80 */
uint F_00ccdb80(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccdb80u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ccd890((undefined4)gen_fl2bits(param_2),param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ccdbb0 */
uint F_00ccdbb0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccdbb0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ccd960((undefined4)gen_fl2bits(param_2),param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ccdbe0 */
float10 F_00ccdbe0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xccdbe0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float10 fVar1;
  
  fVar1 = F_00ccda30((undefined4)gen_fl2bits(param_2),param_3,param_4,param_5);
  return fVar1;
}

/* ref: FUN_00ccdc20 */
float10 F_00ccdc20(float gen_a0)
{
  GEN_ENTER(0xccdc20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = ((float10)GEN_TOD(fsin((float10)param_1)));
  return (float10)(float)fVar1;
}

/* ref: FUN_00ccdc40 */
float10 F_00ccdc40(float gen_a0)
{
  GEN_ENTER(0xccdc40u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = ((float10)GEN_TOD(fcos((float10)param_1)));
  return (float10)(float)fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioBounceXA2::vf5 */
unsigned int F_00ccdc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccdc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  code * pcVar1;
  
  if (-1 < param_2) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4));
    *(undefined4 *)(this + 8) = param_1;
    pcVar1 = *(gen_code32 *)(*(int *)this + 4);
    *(int *)(this + 0xc) = param_2;
    (*pcVar1)(this,1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioBounceXA2::vf1 */
unsigned int F_00ccdcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccdcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = *(int * PTR32 *)(this + 8);
    if ((char)param_1 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0xc),0);
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 0xc),0);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioBounceXA2::vf2 */
byte F_00ccdd00(unsigned int gen_a0)
{
  GEN_ENTER(0xccdd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))
              (*(int * PTR32 *)(this + 8),*(undefined4 *)(this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioBounceXA2::vf6 */
uint F_00ccdd40(unsigned int gen_a0)
{
  GEN_ENTER(0xccdd40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00ccdd50 */
uint F_00ccdd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccdd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ce5770(*(undefined * PTR32 *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00ccdd90 */
uint F_00ccdd90(unsigned int gen_a0)
{
  GEN_ENTER(0xccdd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112b0d4));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c),0x50,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  uVar1 = F_00ce53a0(this_00);
  *(uint *)((int)this + 4) = uVar1;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioBounceXA2::vf3 */
unsigned int F_00ccde00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xccde00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioBounceXA2::vf4 */
unsigned int F_00ccde10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccde10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioBounceXA2::vf0 */
uint F_00ccde20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccde20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112b0d4));
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf5 */
unsigned int F_00ccde80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccde80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (-1 < param_2) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4));
    *(undefined4 *)(this + 8) = param_1;
    *(int *)(this + 0xc) = param_2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf1 */
unsigned int F_00ccdeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccdeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = *(int * PTR32 *)(this + 8);
    if ((char)param_1 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0xc),0);
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 0xc),0);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf2 */
byte F_00ccdee0(unsigned int gen_a0)
{
  GEN_ENTER(0xccdee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))
              (*(int * PTR32 *)(this + 8),*(undefined4 *)(this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf6 */
uint F_00ccdf20(unsigned int gen_a0)
{
  GEN_ENTER(0xccdf20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00ccdf30 */
uint F_00ccdf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccdf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112b124));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c),0x44,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  uVar1 = F_00ce5930(this_00);
  *(uint *)((int)this + 4) = uVar1;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf3 */
unsigned int F_00ccdfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xccdfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf4 */
unsigned int F_00ccdfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccdfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf7 */
byte F_00ccdfd0(unsigned int gen_a0)
{
  GEN_ENTER(0xccdfd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x10) == 2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf8 */
uint F_00ccdfe0(unsigned int gen_a0)
{
  GEN_ENTER(0xccdfe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf0 */
uint F_00ccdff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccdff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112b124));
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf5 */
unsigned int F_00cce050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcce050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (-1 < param_2) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4));
    *(undefined4 *)(this + 8) = param_1;
    *(int *)(this + 0xc) = param_2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf1 */
unsigned int F_00cce080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcce080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = *(int * PTR32 *)(this + 8);
    if ((char)param_1 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0xc),0);
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 0xc),0);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf2 */
byte F_00cce0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcce0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))
              (*(int * PTR32 *)(this + 8),*(undefined4 *)(this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf6 */
uint F_00cce0f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcce0f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00cce100 */
uint F_00cce100(unsigned int gen_a0)
{
  GEN_ENTER(0xcce100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112b174));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c),0x50,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  uVar1 = F_00ce5b90(this_00);
  *(uint *)((int)this + 4) = uVar1;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf3 */
unsigned int F_00cce170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcce170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf4 */
unsigned int F_00cce180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcce180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf7 */
byte F_00cce190(void)
{
  GEN_ENTER(0xcce190u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf8 */
uint F_00cce1a0(void)
{
  GEN_ENTER(0xcce1a0u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf0 */
uint F_00cce1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcce1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112b174));
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cce1f0 */
unsigned int F_00cce1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcce1f0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf1 */
unsigned int F_00cce210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcce210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 0x40) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x40);
    if ((char)param_1 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0,0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x40) + 0x30))))
                (*(int * PTR32 *)(this + 0x40),(undefined4)gen_fl2bits((float)(float10)0),0);
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(this,piVar1,0,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x40) + 0x30))))
              (*(int * PTR32 *)(this + 0x40),(undefined4)gen_fl2bits((float)(float10)1),0);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf2 */
byte F_00cce270(unsigned int gen_a0)
{
  GEN_ENTER(0xcce270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 0x40);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x40) + 0x14))))(*(int * PTR32 *)(this + 0x40),0,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf13 */
byte F_00cce2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcce2a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 == *(int *)(in_ecx + 0x3c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf19 */
unsigned int F_00cce2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcce2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00cce2c0 */
uint F_00cce2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcce2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  float * pfVar9;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  if ((*(int *)((int)this + 0x44) != 0) && (*(int *)((int)this + 0x40) != 0)) {
    fVar5 = F_00ce61c0(this);
    fVar5 = (float10)(float)fVar5;
    fVar6 = (float10)(float)((float10)1 - (float10)REFG(double, 0x1088108) * fVar5);
    fVar7 = (float10)(float)(fVar6 * fVar5);
    fVar5 = (float10)((float)GEN_TOF((fVar7 * ((float10)1 - fVar5))));
    fVar1 = (float)(fVar7 - fVar5);
    iVar4 = REFG(int, 0x15d8bac);
    if (REFG(int, 0x15d8bac) == 0) {
      iVar4 = REFG(int, 0x15d8ba8);
    }
    piVar2 = *(int * PTR32 *)((int)this + 0x40);
    if (*(int *)((int)this + 0x84) == 8) {
      (*(float *)(gen_frame + 0x8)) = fVar1;
      pfVar9 = &(*(float *)(gen_frame + 0x8));
      (*(float *)(gen_frame + 0xc)) = fVar1;
      fVar7 = (float10)0;
      uVar8 = 8;
      (*(float *)(gen_frame + 0x10)) = (float)fVar7;
      (*(float *)(gen_frame + 0x14)) = (float)fVar7;
      (*(float *)(gen_frame + 0x20)) = (float)fVar7;
      (*(float *)(gen_frame + 0x24)) = (float)fVar7;
      (*(float *)(gen_frame + 0x18)) = fVar1;
      (*(float *)(gen_frame + 0x1c)) = fVar1;
    }
    else {
      (*(float *)(gen_frame + 0x10)) = fVar1;
      pfVar9 = &(*(float *)(gen_frame + 0x10));
      (*(float *)(gen_frame + 0x14)) = fVar1;
      uVar8 = 6;
      (*(float *)(gen_frame + 0x18)) = (float)(float10)0;
      (*(float *)(gen_frame + 0x1c)) = (float)(float10)0;
      (*(float *)(gen_frame + 0x20)) = fVar1;
      (*(float *)(gen_frame + 0x24)) = fVar1;
    }
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x24));
    (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x24));
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x1c));
    (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x24));
    ((code *)*(gen_code32 *)(*piVar2 + 0x40))(piVar2,iVar4,1,uVar8,pfVar9,0);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 0x30))))
                      (*(int * PTR32 *)((int)this + 0x44),(undefined4)gen_fl2bits((float)(fVar5 + fVar6)),0
                      );
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_00cce3c0 */
uint F_00cce3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcce3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00cccbd0((int)this + 0x8c,*param_1);
  F_00cccbd0((int)this + 0xb0,(float)(int)gen_fl2bits(param_1[1]));
  F_00cccbd0((int)this + 0xd4,param_1[4]);
  F_00cccbd0((int)this + 0xf8,param_1[5]);
  F_00cccbd0((int)this + 0x11c,param_1[7]);
  F_00cccbd0((int)this + 0x140,param_1[9]);
  F_00cccbd0((int)this + 0x164,param_1[10]);
  F_00cccbd0((int)this + 0x188,param_1[0xb]);
  F_00cccd90((int)this + 0x8c,*param_2,param_3);
  F_00cccd90((int)this + 0xb0,(float)(int)gen_fl2bits(param_2[1]),param_3);
  F_00cccd90((int)this + 0xd4,param_2[4],param_3);
  F_00cccd90((int)this + 0xf8,param_2[5],param_3);
  F_00cccd90((int)this + 0x11c,param_2[7],param_3);
  F_00cccd90((int)this + 0x140,param_2[9],param_3);
  F_00cccd90((int)this + 0x164,param_2[10],param_3);
  uVar1 = F_00cccd90((int)this + 0x188,param_2[0xb],param_3);
  *(undefined4 *)((int)this + 0x88) = param_3;
  return uVar1;
}

/* ref: FUN_00cce510 */
uint F_00cce510(unsigned int gen_a0)
{
  GEN_ENTER(0xcce510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (*(int *)((int)this + 0x40) != 0) {
    (*(float *)(gen_frame + 0x4)) = (float)(float10)0;
    F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x30);
    F_00ccf2a0((int)this + 0x4c,(uint)&(*(float *)(gen_frame + 0x4)));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x18))))
              (*(int * PTR32 *)((int)this + 0x40),0,&(*(float *)(gen_frame + 0x4)),0x34,0);
  }
  uVar1 = F_00cce2c0(this);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf16 */
uint F_00cce580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcce580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * pRVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (param_1 != 0) {
    uVar2 = F_00cce3c0(this,this + 0x4c,&REFG(undefined4, 0x134ca60),param_1);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar2;
  }
  *(undefined4 *)(this + 0x88) = 0;
  puVar4 = &REFG(undefined4, 0x134ca60);
  pRVar5 = this + 0x4c;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pRVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pRVar5 = pRVar5 + 4;
  }
  piVar1 = *(int * PTR32 *)(this + 0x40);
  if (piVar1 != (int *)0x0) {
    (*(float *)(gen_frame + 0x4)) = (float)(float10)0;
    F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x30);
    F_00ccf2a0(this + 0x4c,(uint)&(*(float *)(gen_frame + 0x4)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,0,&(*(float *)(gen_frame + 0x4)),0x34,0);
  }
  uVar2 = F_00cce2c0(this);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf17 */
uint F_00cce630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcce630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * pRVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (param_1 != 0) {
    uVar2 = F_00cce3c0(this,this + 0x4c,&REFG(undefined, 0x134c990) + *(int *)(this + 0x80) * 0x34,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar2;
  }
  *(undefined4 *)(this + 0x88) = 0;
  puVar4 = (undefined4 *)(&REFG(undefined, 0x134c990) + *(int *)(this + 0x80) * 0x34);
  pRVar5 = this + 0x4c;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pRVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pRVar5 = pRVar5 + 4;
  }
  piVar1 = *(int * PTR32 *)(this + 0x40);
  if (piVar1 != (int *)0x0) {
    (*(float *)(gen_frame + 0x4)) = (float)(float10)0;
    F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x30);
    F_00ccf2a0(this + 0x4c,(uint)&(*(float *)(gen_frame + 0x4)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,0,&(*(float *)(gen_frame + 0x4)),0x34,0);
  }
  uVar2 = F_00cce2c0(this);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf4 */
unsigned int F_00cce6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcce6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  int iVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float10 extraout_ST0_06;
  
  if (param_1 != 0) {
    bVar1 = F_00ce61f0(this,param_1);
    if (bVar1 != 0) {
      F_00cce2c0(this);
    }
    if (*(int *)(this + 0x88) != 0) {
      iVar2 = *(int *)(this + 0x88) - param_1;
      *(int *)(this + 0x88) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(this + 0x88) = 0;
      }
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 8))))(this + 0x8c,param_1);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xb0) + 8))))(this + 0xb0,param_1);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xd4) + 8))))(this + 0xd4,param_1);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xf8) + 8))))(this + 0xf8,param_1);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x11c) + 8))))(this + 0x11c,param_1);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x140) + 8))))(this + 0x140,param_1);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x164) + 8))))(this + 0x164,param_1);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x188) + 8))))(this + 0x188,param_1);
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10))))(this + 0x8c);
      *(float *)(this + 0x4c) = (float)extraout_ST0;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xb0) + 0x10))))(this + 0xb0);
      *(int *)(this + 0x50) = (int)extraout_ST0_00;
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xd4) + 0x10))))(this + 0xd4);
      *(float *)(this + 0x5c) = (float)extraout_ST0_01;
      extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xf8) + 0x10))))(this + 0xf8);
      *(float *)(this + 0x60) = (float)extraout_ST0_02;
      extraout_ST0_03 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x11c) + 0x10))))(this + 0x11c);
      *(float *)(this + 0x68) = (float)extraout_ST0_03;
      extraout_ST0_04 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x140) + 0x10))))(this + 0x140);
      *(float *)(this + 0x70) = (float)extraout_ST0_04;
      extraout_ST0_05 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x164) + 0x10))))(this + 0x164);
      *(float *)(this + 0x74) = (float)extraout_ST0_05;
      extraout_ST0_06 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x188) + 0x10))))(this + 0x188);
      *(float *)(this + 0x78) = (float)extraout_ST0_06;
      F_00cce510(this);
    }
  }
  return 0;
}

/* ref: FUN_00cce880 */
uint F_00cce880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcce880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf18 */
uint F_00cce920(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcce920u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  uint uVar5;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  fVar3 = (float10)0;
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 1: ;
    fVar6 = (float10)param_2;
    if (!((float10)REFG(float, 0x10abc60) <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN((float10)REFG(float, 0x10abc60)))) {
      if (fVar3 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar3)) && fVar6 != fVar3)) {
        param_2 = (float)fVar3;
      }
      *(int *)((int)param_1 + 0x50) = (int)param_2;
    }
    else {
      *(int *)((int)param_1 + 0x50) = (int)REFG(float, 0x10abc60);
    }
    break;
  case 2: ;
    fVar6 = (float10)param_2;
    if (!((float10)REFG(float, 0x10abc60) <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN((float10)REFG(float, 0x10abc60)))) {
      if (fVar3 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar3)) && fVar6 != fVar3)) {
        param_2 = (float)fVar3;
      }
      *(int *)((int)param_1 + 0x54) = (int)param_2;
    }
    else {
      *(int *)((int)param_1 + 0x54) = (int)REFG(float, 0x10abc60);
    }
    break;
  case 3: ;
    dVar4 = (double)param_2;
    if (!(REFG(double, 0x1094800) <= dVar4) == (GEN_ISNAN(dVar4) || GEN_ISNAN(REFG(double, 0x1094800)))) {
      if (!(dVar4 <= (double)REFG(float, 0x10a0d00)) == (GEN_ISNAN((double)REFG(float, 0x10a0d00)) || GEN_ISNAN(dVar4))) {
        *(float *)((int)param_1 + 0x5c) = param_2;
      }
      else {
        *(float *)((int)param_1 + 0x5c) = REFG(float, 0x10a0d00);
      }
    }
    else {
      *(float *)((int)param_1 + 0x5c) = REFG(float, 0x1094884);
    }
    break;
  case 4: ;
    dVar4 = (double)param_2;
    if (!(REFG(double, 0x1094800) <= dVar4) == (GEN_ISNAN(dVar4) || GEN_ISNAN(REFG(double, 0x1094800)))) {
      if (!(dVar4 <= (double)REFG(float, 0x10928e4)) == (GEN_ISNAN((double)REFG(float, 0x10928e4)) || GEN_ISNAN(dVar4))) {
        *(float *)((int)param_1 + 0x60) = param_2;
      }
      else {
        *(float *)((int)param_1 + 0x60) = REFG(float, 0x10928e4);
      }
    }
    else {
      *(float *)((int)param_1 + 0x60) = REFG(float, 0x1094884);
    }
    break;
  case 5: ;
    dVar4 = (double)param_2;
    if (!((double)REFG(float, 0x10abc60) <= dVar4) == (GEN_ISNAN(dVar4) || GEN_ISNAN((double)REFG(float, 0x10abc60)))) {
      if (*(double *)&REFG(undefined, 0x10912a8) <= dVar4 &&
          ((!GEN_ISNAN(dVar4) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x10912a8))) && dVar4 != *(double *)&REFG(undefined, 0x10912a8))) {
        param_2 = REFG(float, 0x1094724);
      }
      *(int *)((int)param_1 + 100) = (int)param_2;
    }
    else {
      *(int *)((int)param_1 + 100) = (int)REFG(float, 0x10abc60);
    }
    break;
  case 6: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      if (!(fVar6 <= (float10)REFG(float, 0x10abe50)) == (GEN_ISNAN((float10)REFG(float, 0x10abe50)) || GEN_ISNAN(fVar6))) {
        *(float *)((int)param_1 + 0x68) = param_2;
      }
      else {
        *(float *)((int)param_1 + 0x68) = REFG(float, 0x10abe50);
      }
    }
    else {
      *(float *)((int)param_1 + 0x68) = (float)fVar3;
    }
    break;
  case 7: ;
    dVar4 = (double)param_2;
    if (!((double)REFG(float, 0x10abc60) <= dVar4) == (GEN_ISNAN(dVar4) || GEN_ISNAN((double)REFG(float, 0x10abc60)))) {
      if (*(double *)&REFG(undefined, 0x10a5500) <= dVar4 &&
          ((!GEN_ISNAN(dVar4) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x10a5500))) && dVar4 != *(double *)&REFG(undefined, 0x10a5500))) {
        param_2 = REFG(float, 0x10946bc);
      }
      *(int *)((int)param_1 + 0x6c) = (int)param_2;
    }
    else {
      *(int *)((int)param_1 + 0x6c) = (int)REFG(float, 0x10abc60);
    }
    break;
  case 8: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      fVar2 = (float10)REFG(double, 0x1094800);
      if (fVar2 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar2)) && fVar6 != fVar2)) {
        param_2 = REFG(float, 0x1094884);
      }
      *(float *)((int)param_1 + 0x70) = param_2;
    }
    else {
      *(float *)((int)param_1 + 0x70) = (float)fVar3;
    }
    break;
  case 9: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      fVar2 = (float10)*(double *)&REFG(undefined, 0x1088118);
      if (fVar2 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar2)) && fVar6 != fVar2)) {
        param_2 = REFG(float, 0x10916ec);
      }
      *(float *)((int)param_1 + 0x74) = param_2;
    }
    else {
      *(float *)((int)param_1 + 0x74) = (float)fVar3;
    }
    break;
  case 10: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      fVar2 = (float10)*(double *)&REFG(undefined, 0x1088118);
      if (fVar2 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar2)) && fVar6 != fVar2)) {
        param_2 = REFG(float, 0x10916ec);
      }
      *(float *)((int)param_1 + 0x78) = param_2;
    }
    else {
      *(float *)((int)param_1 + 0x78) = (float)fVar3;
    }
    break;
  case 0xb: ;
    fVar6 = (float10)param_2;
    if (!((float10)REFG(float, 0x10a0d00) <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN((float10)REFG(float, 0x10a0d00)))) {
      if (!(fVar6 <= (float10)REFG(float, 0x10ac04c)) != (GEN_ISNAN((float10)REFG(float, 0x10ac04c)) || GEN_ISNAN(fVar6))) {
        param_2 = REFG(float, 0x10ac04c);
      }
    }
    else {
      param_2 = REFG(float, 0x10a0d00);
    }
    *(float *)((int)param_1 + 0x7c) = param_2;
    break;
  case 0xc: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      fVar2 = (float10)*(double *)&REFG(undefined, 0x1088118);
      if (fVar2 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar2)) && fVar6 != fVar2)) {
        param_2 = REFG(float, 0x10916ec);
      }
      *(float *)((int)param_1 + 0x4c) = param_2;
    }
    else {
      *(float *)((int)param_1 + 0x4c) = (float)fVar3;
    }
    break;
  case 0xd: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      if (!(fVar6 <= (float10)REFG(float, 0x1094880)) == (GEN_ISNAN((float10)REFG(float, 0x1094880)) || GEN_ISNAN(fVar6))) {
        *(float *)((int)param_1 + 0x58) = param_2;
      }
      else {
        *(float *)((int)param_1 + 0x58) = REFG(float, 0x1094880);
      }
    }
    else {
      *(float *)((int)param_1 + 0x58) = (float)fVar3;
    }
  }
  piVar1 = *(int * PTR32 *)((int)param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    (*(float *)(gen_frame + 0x4)) = (float)fVar3;
    F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x30);
    F_00ccf2a0((int)param_1 + 0x4c,(uint)&(*(float *)(gen_frame + 0x4)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,0,&(*(float *)(gen_frame + 0x4)),0x34,0);
  }
  uVar5 = F_00cce2c0(param_1);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf15 */
uint F_00cced60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcced60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pRVar4;
  
  uVar2 = param_1 - 1;
  if (uVar2 < 4) {
    *(uint *)(this + 0x80) = uVar2;
    puVar3 = (undefined4 *)(&REFG(undefined, 0x134c990) + uVar2 * 0x34);
    pRVar4 = this + 0x4c;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pRVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pRVar4 = pRVar4 + 4;
    }
    this = (undefined *)F_00cce510(this);
  }
  return (uint)this;
}

/* ref: FUN_00cceda0 */
uint F_00cceda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcceda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x430];
  LPVOID * ppv;
  int * piVar1;
  undefined * rclsid;
  HRESULT HVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  bool bVar7;
  
  (*(uint *)(gen_frame + 0x428)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x42c);
  F_00ce62e0(this);
  *(undefined4 *)((int)this + 0x84) = param_3;
  ppv = (LPVOID *)((int)this + 0x48);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x112b60c));
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *ppv = (LPVOID)0x0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  F_00cccb10((int)this + 0x8c,(float)(float10)0);
  F_00cccb10((int)this + 0xb0,(float)(float10)0);
  F_00cccb10((int)this + 0xd4,(float)(float10)0);
  F_00cccb10((int)this + 0xf8,(float)(float10)0);
  F_00cccb10((int)this + 0x11c,(float)(float10)0);
  F_00cccb10((int)this + 0x140,(float)(float10)0);
  F_00cccb10((int)this + 0x164,(float)(float10)0);
  F_00cccb10((int)this + 0x188,(float)(float10)0);
  bVar7 = ((byte)REFG(undefined4, 0x15d8bb4) & 1) != 0;
  (*(uint *)(gen_frame + 0x1c)) = (uint)bVar7;
  rclsid = (undefined *)&REFG(undefined, 0x112b590);
  if (!bVar7) {
    rclsid = (undefined *)&REFG(undefined, 0x112b580);
  }
  HVar2 = gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),ppv);
  if (HVar2 < 0) {
    if ((*(uint *)(gen_frame + 0x1c)) != 0) {
      (*(undefined1 *)(gen_frame + 0x427)) = 0;
      F_00c472ec(((char *)(gen_frame + 0x28)),0x400,0x3ff,
                   "[sd][Driver][XA2]Error: XAudio2CreateReverb debug mode. Error code 0x%08X. Retry no debug mode..."
                   ,HVar2);
      F_00cbee70(((char *)(gen_frame + 0x28)),2);
      HVar2 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x112b580),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),ppv);
      (*(undefined1 *)(gen_frame + 0x427)) = 0;
      if (HVar2 < 0) {
        F_00c472ec(((char *)(gen_frame + 0x28)),0x400,0x3ff,"failed\n");
      }
      else {
        F_00c472ec(((char *)(gen_frame + 0x28)),0x400,0x3ff,"success\n");
      }
      F_00cbee70(((char *)(gen_frame + 0x28)),2);
    }
    if (HVar2 < 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcce880));
      }
      ((code *)REFG(gen_code32, 0x15d861c))("SUCCEEDED(hr)","[sd][Driver][XA2]Error: XAudio2CreateReverb",
                      "XA2\\Effects\\ReverbXA2.cpp",0xbb,
                      "SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::ReverbXA2");
    }
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(LPVOID * PTR32 *)(gen_frame + 0x18)) = (LPVOID *)0x0;
  (*(LPVOID * PTR32 *)(gen_frame + 0x18)) = &(*(LPVOID *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  (*(LPVOID *)(gen_frame + 0x8)) = *ppv;
  (*(undefined4 *)(gen_frame + 0x14)) = 1;
  iVar4 = REFG(int, 0x15d8bac);
  if (REFG(int, 0x15d8bac) == 0) {
    iVar4 = REFG(int, 0x15d8ba8);
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = iVar4;
  (*(undefined4 *)(gen_frame + 0x20)) = 1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = &(*(undefined4 *)(gen_frame + 0x0));
  if ((iVar4 != 0) &&
     (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                        (REFG(int * PTR32, 0x15d8ba4),(int)this + 0x40,1,REFG(undefined4, 0x15d8be0),8,3,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x14))),
     (int)uVar3 < 0)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcce880));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][XA2] Error: CreateSubmixVoice\"",&REFG(undefined, 0x112b20d),
                    "XA2\\Effects\\ReverbXA2.cpp",0xd8,
                    "SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::ReverbXA2");
  }
  if ((*(int *)((int)this + 0x40) != 0) &&
     (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                        (REFG(int * PTR32, 0x15d8ba4),(int)this + 0x44,param_3,REFG(undefined4, 0x15d8be0),8,2,&(*(undefined4 *)(gen_frame + 0x20)),0),
     (int)uVar3 < 0)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcce880));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][XA2] Error: CreateSubmixVoice\"",&REFG(undefined, 0x112b20e),
                    "XA2\\Effects\\ReverbXA2.cpp",0xe2,
                    "SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::ReverbXA2");
  }
  *(undefined4 *)((int)this + 0x80) = 2;
  puVar5 = &REFG(undefined4, 0x134c9f8);
  puVar6 = (undefined4 *)((int)this + 0x4c);
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  F_00cce510(this);
  piVar1 = *(int * PTR32 *)((int)this + 0x40);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,0,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x30))))
              (*(int * PTR32 *)((int)this + 0x40),(undefined4)gen_fl2bits((float)(float10)1),0);
  }
  F_00ccb520(*(undefined4 *)((int)this + 0x40),*(undefined4 *)((int)this + 0x44));
  F_00c47745((*(uint *)(gen_frame + 0x428)) ^ (uint)(uint)(gen_frame + 0x42c));
  return (uint)this;
}

/* ref: FUN_00ccf160 */
uint F_00ccf160(unsigned int gen_a0)
{
  GEN_ENTER(0xccf160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x48);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x112b60c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x44);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x40);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0,0);
    if ((int)uVar2 < 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcce880));
      }
      ((code *)REFG(gen_code32, 0x15d861c))("!\"[SD][DRIVER] pWetSubmix_ DisableEffect Error.\"",&REFG(undefined, 0x112b20f),
                      "XA2\\Effects\\ReverbXA2.cpp",0x107,
                      "SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::~ReverbXA2");
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x48))))(*(int * PTR32 *)((int)this + 0x40));
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  F_00cccb40((int)this + 0x188);
  F_00cccb40((int)this + 0x164);
  F_00cccb40((int)this + 0x140);
  F_00cccb40((int)this + 0x11c);
  F_00cccb40((int)this + 0xf8);
  F_00cccb40((int)this + 0xd4);
  F_00cccb40((int)this + 0xb0);
  F_00cccb40((int)this + 0x8c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x112b5b4));
  F_00cccb40((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar2;
}

/* ref: FUN_00ccf270 */
unsigned int F_00ccf270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf270u, gen_a0, gen_a1, 0u, 0u);
  LPVOID * param_1 = (LPVOID *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * rclsid;
  
  rclsid = (undefined *)&REFG(undefined, 0x112b590);
  if ((param_2 & 1) == 0) {
    rclsid = (undefined *)&REFG(undefined, 0x112b580);
  }
  gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),param_1);
  return 0;
}

/* ref: FUN_00ccf2a0 */
byte F_00ccf2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf2a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 local_c;
  
  uVar2 = (*(uint *)&gen_args[1]);
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  *(undefined4 *)((*(uint *)&gen_args[1]) + 0x30) = REFG(float, 0x10916ec);
  *(undefined1 *)((*(uint *)&gen_args[1]) + 0x13) = 6;
  *(undefined4 *)((*(uint *)&gen_args[1]) + 9) = 0x1b060605;
  *(undefined1 *)((*(uint *)&gen_args[1]) + 0x11) = 4;
  *(undefined1 *)((*(uint *)&gen_args[1]) + 0xd) = 0x1b;
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1088118);
  *(float *)((*(uint *)&gen_args[1]) + 0x18) = ((float)GEN_TOF(((float10)(int)(*(undefined4 * PTR32 *)&gen_args[0])[1] / fVar5)));
  *(float *)((*(uint *)&gen_args[1]) + 0x1c) = ((float)GEN_TOF(((float10)(int)(*(undefined4 * PTR32 *)&gen_args[0])[2] / fVar5)));
  fVar6 = (float10)1;
  fVar5 = ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5])));
  if (!(fVar5 <= fVar6) == ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5)) || fVar6 == fVar5)) {
    fVar5 = F_00c49680(((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5]))));
    iVar4 = (int)((double)(float)fVar5 * *(double *)&REFG(undefined, 0x1094788));
    if (iVar4 < -8) {
      iVar4 = -8;
    }
    *(undefined1 *)((*(uint *)&gen_args[1]) + 0x10) = 8;
    if (iVar4 < 0) {
      cVar3 = (char)iVar4 + '\b';
    }
    else {
      cVar3 = '\b';
    }
    *(char *)((*(uint *)&gen_args[1]) + 0x12) = cVar3;
    fVar5 = ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[4])));
  }
  else {
    fVar5 = F_00c49680(((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5]))));
    iVar4 = (int)((double)(float)fVar5 * *(double *)&REFG(undefined, 0x10944a0));
    if (iVar4 < -8) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x10) = 0;
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x12) = 8;
      fVar5 = ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[4]))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5])));
    }
    else if (iVar4 < 0) {
      *(char *)((*(uint *)&gen_args[1]) + 0x10) = (char)iVar4 + '\b';
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x12) = 8;
      fVar5 = ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[4]))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5])));
    }
    else {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x10) = 8;
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x12) = 8;
      fVar5 = ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[4]))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5])));
    }
  }
  *(float *)((*(uint *)&gen_args[1]) + 0x28) = (float)fVar5;
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[7]))) * fVar5))));
  if ((float10)*(float *)&REFG(undefined, 0x112b5ac) <= ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))))) {
    (*(uint *)&gen_args[1]) = *(uint *)&REFG(undefined, 0x112b5a8);
  }
  else if (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))) <= (float10)1) {
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(float10)1);
  }
  local_c = (undefined4)(longlong)TRUNC(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))));
  *(undefined4 *)(uVar2 + 4) = local_c;
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF((fVar5 * ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[9])))))));
  fVar6 = (float10)*(float *)&REFG(undefined, 0x112b5a4);
  fVar5 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))));
  if (!(fVar5 <= fVar6) != ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5)) || fVar6 == fVar5)) {
    (*(uint *)&gen_args[1]) = *(uint *)&REFG(undefined, 0x112b5a0);
  }
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 0)))) = (byte)(int)TRUNC(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))));
  *(byte *)(uVar2 + 8) = (byte)(*(undefined4 * PTR32 *)&gen_args[0]);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1088118);
  *(float *)(uVar2 + 0x20) = (float)((float10)(int)puVar1[6] / fVar5);
  *(float *)(uVar2 + 0x24) = (float)((float10)(int)puVar1[8] / fVar5);
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 0)))) =
       (byte)(int)TRUNC((((float10)GEN_TOD(gen_bits2f(puVar1[10]))) * (float10)*(double *)&REFG(undefined, 0x1094560)) /
                        fVar5);
  *(byte *)(uVar2 + 0xe) = (byte)(*(undefined4 * PTR32 *)&gen_args[0]);
  *(byte *)(uVar2 + 0xf) = (byte)(*(undefined4 * PTR32 *)&gen_args[0]);
  *(undefined4 *)(uVar2 + 0x2c) = puVar1[0xb];
  *(undefined4 *)(uVar2 + 0x14) = puVar1[0xc];
  *(undefined4 *)uVar2 = *puVar1;
  return (byte)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ccf490 */
unsigned int F_00ccf490(unsigned int gen_a0)
{
  GEN_ENTER(0xccf490u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[21])REFP(0x112b5b4));
  F_00cccb40(in_ecx + 2);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf14 */
uint F_00ccf4b0(void)
{
  GEN_ENTER(0xccf4b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf15 */
unsigned int F_00ccf4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf16 */
unsigned int F_00ccf4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf17 */
unsigned int F_00ccf4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf3 */
uint F_00ccf4f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xccf4f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,(undefined4)gen_fl2bits(param_2),param_4);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf0 */
uint F_00ccf510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x112b5b4));
  F_00cccb40(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf12 */
uint F_00ccf550(unsigned int gen_a0)
{
  GEN_ENTER(0xccf550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf14 */
uint F_00ccf560(unsigned int gen_a0)
{
  GEN_ENTER(0xccf560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf5 */
unsigned int F_00ccf570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccf570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf6 */
uint F_00ccf580(void)
{
  GEN_ENTER(0xccf580u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf0 */
uint F_00ccf590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ccf160(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ccf5c0 */
uint F_00ccf5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c51da0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccf5d0 */
uint F_00ccf5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccf5d0u, gen_a0, gen_a1, gen_a2, 0u);
  gen_size32 in_eax = (gen_size32)gen_a0;
  char * in_ecx = (char *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c4c591(param_3,in_ecx,in_eax);
  return uVar1;
}

/* ref: FUN_00ccf5f0 */
unsigned int F_00ccf5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf5f0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00ccf610 */
unsigned int F_00ccf610(unsigned int gen_a0)
{
  GEN_ENTER(0xccf610u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x112bb98));
  return 0;
}

/* ref: FUN_00ccf620 */
uint F_00ccf620(unsigned int gen_a0)
{
  GEN_ENTER(0xccf620u, gen_a0, 0u, 0u, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  char cVar1;
  bool bVar2;
  
  cVar1 = *in_eax;
  bVar2 = cVar1 < '!';
  do {
    if (cVar1 == '\0') {
      return (uint)in_eax;
    }
    if (cVar1 < '!') {
      bVar2 = true;
    }
    else {
      if (bVar2) {
        return (uint)in_eax;
      }
      bVar2 = false;
    }
    cVar1 = in_eax[1];
    in_eax = in_eax + 1;
  } while( true );
}

/* ref: FUN_00ccf670 */
byte F_00ccf670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf670u, gen_a0, gen_a1, 0u, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  uint * in_esi = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *in_esi = 0;
  if ((in_eax != (char *)0x0) && (*in_eax != '\0')) {
    uVar1 = F_00c4c74c(in_eax);
    *in_esi = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00ccf690 */
byte F_00ccf690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf690u, gen_a0, gen_a1, 0u, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  float * in_esi = (float *)(uintptr_t)gen_a1;
  double dVar1;
  
  *in_esi = (float)(float10)0;
  if ((in_eax != (char *)0x0) && (*in_eax != '\0')) {
    dVar1 = F_00c4acaa(in_eax);
    *in_esi = (float)dVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00ccf6b0 */
byte F_00ccf6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char * pcVar1;
  float * in_esi;
  char cVar2;
  float10 fVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined * pvVar9;
  int iVar10;
  undefined4 * puVar11;
  char * pcVar12;
  undefined4 * puVar13;
  float10 fVar14;
  
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = this;
  (*(int *)(gen_frame + 0x60)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x64)) = param_1;
  do {
    pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x68));
    cVar2 = *(*(char * PTR32 *)(gen_frame + 0x64));
    pcVar12 = (*(char * PTR32 *)(gen_frame + 0x64));
    if (cVar2 < '!') {
      while ((cVar2 != '\0' && (cVar2 < '!'))) {
        pcVar1 = pcVar12 + 1;
        pcVar12 = pcVar12 + 1;
        cVar2 = *pcVar1;
      }
    }
    iVar6 = F_00c4c591(pcVar12,"MAX_SOUND",9);
    if (iVar6 == 0) {
      cVar2 = *pcVar12;
      bVar8 = cVar2 < '!';
      while (cVar2 != '\0') {
        if (cVar2 < '!') {
          bVar4 = true;
        }
        else {
          bVar4 = false;
          if (bVar8) break;
        }
        pcVar1 = pcVar12 + 1;
        pcVar12 = pcVar12 + 1;
        bVar8 = bVar4;
        cVar2 = *pcVar1;
      }
      *(undefined4 *)((int)pvVar9 + 4) = 0;
      if (*pcVar12 == '\0') {
        return 0;
      }
      uVar7 = F_00c4c74c(pcVar12);
      *(uint *)((int)pvVar9 + 4) = uVar7;
    }
    else {
      iVar6 = F_00c4c591(pcVar12,"MAX_BUS",7);
      if (iVar6 == 0) {
        cVar2 = *pcVar12;
        bVar8 = cVar2 < '!';
        while (cVar2 != '\0') {
          if (cVar2 < '!') {
            bVar4 = true;
          }
          else {
            bVar4 = false;
            if (bVar8) break;
          }
          pcVar1 = pcVar12 + 1;
          pcVar12 = pcVar12 + 1;
          bVar8 = bVar4;
          cVar2 = *pcVar1;
        }
      }
      else {
        iVar6 = F_00c4c591(pcVar12,"MAX_REVERB",10);
        if (iVar6 == 0) {
          cVar2 = *pcVar12;
          bVar8 = cVar2 < '!';
          while (cVar2 != '\0') {
            if (cVar2 < '!') {
              bVar8 = true;
            }
            else {
              if (bVar8) break;
              bVar8 = false;
            }
            pcVar1 = pcVar12 + 1;
            pcVar12 = pcVar12 + 1;
            cVar2 = *pcVar1;
          }
          *(undefined4 *)((int)pvVar9 + 8) = 0;
          if (*pcVar12 == '\0') {
            return 0;
          }
          uVar7 = F_00c4c74c(pcVar12);
          *(uint *)((int)pvVar9 + 8) = uVar7;
        }
        else {
          iVar6 = F_00c4c591(pcVar12,"MAX_BANK",8);
          if (iVar6 == 0) {
            cVar2 = *pcVar12;
            bVar8 = cVar2 < '!';
            while (cVar2 != '\0') {
              if (cVar2 < '!') {
                bVar4 = true;
              }
              else {
                bVar4 = false;
                if (bVar8) break;
              }
              pcVar1 = pcVar12 + 1;
              pcVar12 = pcVar12 + 1;
              bVar8 = bVar4;
              cVar2 = *pcVar1;
            }
            *(undefined4 *)((int)pvVar9 + 0xc) = 0;
            if (*pcVar12 == '\0') {
              return 0;
            }
            uVar7 = F_00c4c74c(pcVar12);
            *(uint *)((int)pvVar9 + 0xc) = uVar7;
          }
          else {
            iVar6 = F_00c4c591(pcVar12,"MAX_LAY_SOUNDPAGE",0x11);
            if (iVar6 == 0) {
              pcVar12 = (char *)F_00ccf620(pcVar12);
              *(undefined4 *)((int)pvVar9 + 0x20) = 0;
              if (pcVar12 == (char *)0x0) {
                return 0;
              }
              if (*pcVar12 == '\0') {
                return 0;
              }
              uVar7 = F_00c4c74c(pcVar12);
              *(uint *)((int)pvVar9 + 0x20) = uVar7;
            }
            else {
              iVar6 = F_00c4c591(pcVar12,"MAX_LAY_SOUNDOBJECT",0x13);
              if (iVar6 == 0) {
                pcVar12 = (char *)F_00ccf620(pcVar12);
                *(undefined4 *)((int)pvVar9 + 0x24) = 0;
                if (pcVar12 == (char *)0x0) {
                  return 0;
                }
                if (*pcVar12 == '\0') {
                  return 0;
                }
                uVar7 = F_00c4c74c(pcVar12);
                *(uint *)((int)pvVar9 + 0x24) = uVar7;
              }
              else {
                iVar6 = F_00c4c591(pcVar12,"MAX_LAY_OBSTRUCTION",0x13);
                if (iVar6 == 0) {
                  uVar7 = F_00ccf620(pcVar12);
                  bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x28);
                }
                else {
                  iVar6 = F_00c4c591(pcVar12,"MAX_LAY_LISTENER",0x10);
                  if (iVar6 != 0) {
                    iVar6 = F_00c4c591(pcVar12,"VOLUME_CURVE",0xc);
                    if (iVar6 == 0) {
                      pcVar12 = (char *)F_00ccf620(pcVar12);
                      if (*pcVar12 == '\0') {
                        return 0;
                      }
                      iVar6 = F_00c4c591(pcVar12,"AUTO",4);
                      if (iVar6 == 0) {
                        *(undefined4 *)((int)pvVar9 + 0x30) = 0;
                      }
                      else {
                        iVar6 = F_00c4c591(pcVar12,"SQUARE",6);
                        if (iVar6 == 0) {
                          *(undefined4 *)((int)pvVar9 + 0x30) = 1;
                        }
                        else {
                          iVar6 = F_00c4c591(pcVar12,"WHITE",5);
                          if (iVar6 == 0) {
                            *(undefined4 *)((int)pvVar9 + 0x30) = 2;
                          }
                          else {
                            iVar6 = F_00c4c591(pcVar12,"WII_EMU",7);
                            if (iVar6 == 0) {
                              *(undefined4 *)((int)pvVar9 + 0x30) = 4;
                            }
                            else {
                              iVar6 = F_00c4c591(pcVar12,"ONLY_MUSIC_WHITE",0x10);
                              if (iVar6 == 0) {
                                *(undefined4 *)((int)pvVar9 + 0x30) = 5;
                              }
                              else {
                                iVar6 = F_00c4c591(pcVar12,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x112b730)))),3);
                                if (iVar6 == 0) {
                                  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x30) = 3;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      iVar6 = F_00c4c591(pcVar12,"LISTENER_PAN_MODE",0x11);
                      if (iVar6 == 0) {
                        pcVar12 = (char *)F_00ccf620(pcVar12);
                        if (*pcVar12 == '\0') {
                          return 0;
                        }
                        iVar6 = F_00c4c591(pcVar12,"NORMAL",6);
                        if (iVar6 == 0) {
                          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x34) = 1;
                        }
                      }
                      else {
                        iVar6 = F_00c4c591(pcVar12,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x112b750)))),3);
                        if (iVar6 == 0) {
                          (*(int *)(gen_frame + 0x5c)) = 0;
                          pcVar12 = (char *)F_00ccf620(pcVar12);
                          if (*pcVar12 == '\0') {
                            return 0;
                          }
                          uVar7 = F_00ccf620(pcVar12);
                          bVar5 = F_00ccf670(uVar7,((ushort *)(gen_frame + 0x58)));
                          if (bVar5 == 0) {
                            return 0;
                          }
                          uVar7 = F_00ccf620(uVar7);
                          F_00ccf670(uVar7,&(*(int *)(gen_frame + 0x5c)));
                          param_1 = (char *)(uint)((ushort *)(gen_frame + 0x58))[0];
                          if ((*(int *)(gen_frame + 0x5c)) == 3) {
                            param_1 = ((char *)GEN_TOP(CONCAT22(1,((ushort *)(gen_frame + 0x58))[0])));
                          }
                          iVar6 = (*(int *)(gen_frame + 0x60)) * 4;
                          (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                          *(char * PTR32 *)((int)pvVar9 + iVar6 + 0x94) = param_1;
                        }
                        else {
                          iVar6 = F_00c4c591(pcVar12,"UNUSE_STREAMING",0xf);
                          if (iVar6 == 0) {
                            *(undefined1 *)((int)pvVar9 + 0x1bc) = 1;
                          }
                          else {
                            iVar6 = F_00c4c591(pcVar12,"USE_BOUNCE",10);
                            if (iVar6 != 0) {
                              iVar6 = F_00c4c591(pcVar12,"MAX_STREAMS",0xb);
                              if (iVar6 == 0) {
                                uVar7 = F_00ccf620(pcVar12);
                                bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x40);
                              }
                              else {
                                iVar6 = F_00c4c591(pcVar12,"ENABLE_MAX_STREAMS_RESERVATION",0x1e);
                                if (iVar6 == 0) {
                                  *(undefined1 *)((int)pvVar9 + 0x1bf) = 1;
                                  goto LAB_00ccfee0;
                                }
                                iVar6 = F_00c4c591(pcVar12,"VSYNC_TIME_BASE",0xf);
                                if (iVar6 == 0) {
                                  uVar7 = F_00ccf620(pcVar12);
                                  bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x14);
                                }
                                else {
                                  iVar6 = F_00c4c591(pcVar12,"STREAM_READ_THREAD_PRIORITY",0x1b);
                                  if (iVar6 == 0) {
                                    uVar7 = F_00ccf620(pcVar12);
                                    bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x44);
                                  }
                                  else {
                                    iVar6 = F_00c4c591(pcVar12,"STREAM_READ_THREAD_PROCESSOR",0x1c);
                                    if (iVar6 == 0) {
                                      uVar7 = F_00ccf620(pcVar12);
                                      bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x48);
                                    }
                                    else {
                                      iVar6 = F_00c4c591(pcVar12,"TIMER_VSYNC_PROCESSOR",0x15);
                                      if (iVar6 == 0) {
                                        uVar7 = F_00ccf620(pcVar12);
                                        bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x4c);
                                      }
                                      else {
                                        iVar6 = F_00c4c591(pcVar12,"TIMER_MSEC_PROCESSOR",0x14);
                                        if (iVar6 == 0) {
                                          uVar7 = F_00ccf620(pcVar12);
                                          bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x50);
                                        }
                                        else {
                                          iVar6 = F_00c4c591(pcVar12,"XAUDIO2_PROCESSOR",0x11);
                                          if (iVar6 == 0) {
                                            uVar7 = F_00ccf620(pcVar12);
                                            bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x54);
                                          }
                                          else {
                                            iVar6 = F_00c4c591(pcVar12,"OUTPUT_CHANNELS",0xf);
                                            if (iVar6 == 0) {
                                              uVar7 = F_00ccf620(pcVar12);
                                              bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x60);
                                            }
                                            else {
                                              iVar6 = F_00c4c591(pcVar12,"MULTISTREAM_PRIORITY",0x14
                                                                );
                                              if (iVar6 != 0) {
                                                iVar6 = F_00c4c591(pcVar12,"ENABLE_SCD_PRIORITY",
                                                                   0x13);
                                                if (iVar6 == 0) {
                                                  *(undefined1 *)((int)pvVar9 + 0x1bd) = 1;
                                                }
                                                else {
                                                  iVar6 = F_00c4c591(pcVar12,
                                                  "XAUDIO2_MAX_VOICE_FREQUENCY_RATIO",0x21);
                                                  if (iVar6 == 0) {
                                                    uVar7 = F_00ccf620(pcVar12);
                                                    in_esi = (float *)((int)pvVar9 + 0x58);
                                                    bVar5 = F_00ccf690(uVar7,in_esi);
                                                    if (bVar5 == 0) {
                                                      return 0;
                                                    }
                                                    if (!((float10)*in_esi <= (float10)REFG(float, 0x10b2b38))
                                                        == (GEN_ISNAN((float10)REFG(float, 0x10b2b38)) ||
                                                           GEN_ISNAN((float10)*in_esi))) {
                                                      fVar14 = (float10)*(float *)&REFG(undefined, 0x112bb9c);
                                                      fVar3 = (float10)*in_esi;
                                                      if (fVar3 <= fVar14 &&
                                                          ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar3)) &&
                                                          fVar14 != fVar3)) {
                                                        *in_esi = *(float *)&REFG(undefined, 0x112bb9c);
                                                      }
                                                    }
                                                    else {
                                                      *in_esi = GEN_FLT_TO(*in_esi, REFG(float, 0x10b2b38));
                                                    }
                                                  }
                                                  else {
                                                    iVar6 = F_00c4c591(pcVar12,"STRINGENDO_SETTING",
                                                                       0x12);
                                                    if (iVar6 == 0) {
                                                      uVar7 = F_00ccf620(pcVar12);
                                                      bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 100);
                                                      if (bVar5 == 0) {
                                                        return 0;
                                                      }
                                                      uVar7 = F_00ccf620(uVar7);
                                                      bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x68)
                                                      ;
                                                      goto joined_r0x00ccfc2d;
                                                    }
                                                    iVar6 = F_00c4c591(pcVar12,"STRINGENDO_VOLUMES",
                                                                       0x12);
                                                    if (iVar6 == 0) {
                                                      iVar10 = (int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x6c;
                                                      iVar6 = 0;
                                                      do {
                                                        pcVar12 = (char *)F_00ccf620(pcVar12);
                                                        bVar5 = F_00ccf690(pcVar12,iVar10);
                                                        if (bVar5 == 0) break;
                                                        iVar6 = iVar6 + 1;
                                                        iVar10 = iVar10 + 4;
                                                      } while (iVar6 < 4);
                                                    }
                                                    else {
                                                      iVar6 = F_00c4c591(pcVar12,
                                                  "STRINGENDO_FADE_TIMES",0x15);
                                                  if (iVar6 == 0) {
                                                    iVar6 = 0;
                                                    iVar10 = (int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x7c;
                                                    do {
                                                      pcVar12 = (char *)F_00ccf620(pcVar12);
                                                      bVar5 = F_00ccf670(pcVar12,iVar10);
                                                      if (bVar5 == 0) break;
                                                      iVar6 = iVar6 + 1;
                                                      iVar10 = iVar10 + 4;
                                                    } while (iVar6 < 4);
                                                  }
                                                  else {
                                                    iVar6 = F_00c4c591(pcVar12,
                                                  "FFXIV_BG_LOWPASS_BUSSES",0x17);
                                                  if (iVar6 == 0) {
                                                    uVar7 = F_00ccf620(pcVar12);
                                                    bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x8c);
                                                    if (bVar5 == 0) {
LAB_00ccfe8f: ;
                                                      F_00c48350((undefined *)((int)&(*(undefined4 *)(gen_frame + 0x4)) + 1),0,0x53);
                                                      cVar2 = *(char *)((int)pvVar9 + 0x1bf);
                                                      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = 1;
                                                      puVar11 = &(*(undefined4 *)(gen_frame + 0x4));
                                                      puVar13 = (undefined4 *)((int)pvVar9 + 0x114);
                                                      for (iVar6 = 0x15; iVar6 != 0;
                                                          iVar6 = iVar6 + -1) {
                                                        *puVar13 = *puVar11;
                                                        puVar11 = puVar11 + 1;
                                                        puVar13 = puVar13 + 1;
                                                      }
                                                      *(int *)((int)pvVar9 + 0x38) = (*(int *)(gen_frame + 0x60));
                                                      *(undefined4 *)((int)pvVar9 + 0x3c) = 1;
                                                      if ((cVar2 != '\0') &&
                                                         (-1 < *(int *)((int)pvVar9 + 0x40))) {
                                                        *(int *)((int)pvVar9 + 4) =
                                                             *(int *)((int)pvVar9 + 4) +
                                                             *(int *)((int)pvVar9 + 0x40);
                                                      }
                                                      return 1;
                                                    }
                                                    uVar7 = F_00ccf620(uVar7);
                                                    bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x90);
                                                    if (bVar5 == 0) goto LAB_00ccfe8f;
                                                  }
                                                  else {
                                                    iVar6 = F_00c4c591(pcVar12,
                                                  "CAFE_ENABLE_TV_SURROUND",0x17);
                                                  if (iVar6 == 0) {
                                                    *(undefined1 *)((int)pvVar9 + 0x1c0) = 1;
                                                  }
                                                  else {
                                                    iVar6 = F_00c4c591(pcVar12,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x112b8fc)))),3);
                                                  pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x68));
                                                  if (iVar6 == 0) goto LAB_00ccfe8f;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                                goto LAB_00ccfee0;
                                              }
                                              uVar7 = F_00ccf620(pcVar12);
                                              bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x5c);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto joined_r0x00ccfc2d;
                            }
                            *(undefined1 *)((int)pvVar9 + 0x1be) = 1;
                          }
                        }
                      }
                    }
                    goto LAB_00ccfee0;
                  }
                  uVar7 = F_00ccf620(pcVar12);
                  bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x2c);
                }
joined_r0x00ccfc2d: ;
                if (bVar5 == 0) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
LAB_00ccfee0: ;
    uVar7 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x64)),10);
    (*(char * PTR32 *)(gen_frame + 0x64)) = (char *)(uVar7 + 1);
  } while( true );
}

/* ref: FUN_00ccff00 */
uint F_00ccff00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccff00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float10 fVar1;
  byte bVar2;
  undefined2 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  *(undefined4 *)((int)this + 0x58) = REFG(float, 0x10928e4);
  *(undefined4 *)((int)this + 0x10) = 0x10;
  *(undefined4 *)((int)this + 0x14) = 0x10;
  *(undefined4 *)((int)this + 0x28) = 0x10;
  *(undefined4 *)((int)this + 0x2c) = 8;
  *(undefined4 *)((int)this + 0x40) = 0xffffffff;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  *(undefined4 *)((int)this + 0x60) = 8;
  *(undefined4 *)((int)this + 100) = 0xffffffff;
  *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x90) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112bb98));
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0xc) = 0x180;
  *(undefined4 *)((int)this + 0x18) = 0x3c;
  *(undefined4 *)((int)this + 0x1c) = 0x1e;
  *(undefined4 *)((int)this + 0x20) = 0x20;
  *(undefined4 *)((int)this + 0x24) = 0x80;
  *(undefined4 *)((int)this + 0x30) = 1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  puVar3 = (undefined2 *)((int)this + 0x94);
  iVar4 = 0x1f;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  fVar1 = (float10)0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined1 *)((int)this + 0x1c0) = 0;
  *(float *)((int)this + 0x6c) = (float)fVar1;
  *(float *)((int)this + 0x70) = (float)fVar1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(float *)((int)this + 0x74) = (float)fVar1;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(float *)((int)this + 0x78) = (float)fVar1;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  if ((param_1 != 0) && (bVar2 = F_00ccf6b0(this,param_1), bVar2 != 0)) {
    return (uint)this;
  }
  F_00c48350((undefined *)((int)&(*(undefined4 *)(gen_frame + 0x8)) + 1),0,0x53);
  *(undefined4 *)((int)this + 0x94) = 4;
  *(undefined4 *)((int)this + 0x98) = 0x10020;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
  puVar6 = (undefined4 *)((int)this + 0x114);
  for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)((int)this + 0x9c) = 4;
  *(undefined4 *)((int)this + 0x38) = 3;
  *(undefined4 *)((int)this + 0x3c) = 1;
  return (uint)this;
}

/* ref: FUN_00cd0070 */
uint F_00cd0070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcd0070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: FUN_00cd0110 */
uint F_00cd0110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0110u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x94 + param_2 * 4;
}

/* ref: FUN_00cd0130 */
uint F_00cd0130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (int)*(short *)(in_ecx + 0x94 + param_2 * 4);
}

/* ref: FUN_00cd0150 */
uint F_00cd0150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 0x96 + param_2 * 4) & 1;
}

/* ref: FUN_00cd0170 */
uint F_00cd0170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x54 + 0x114 + in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ConfigReader::vf0 */
uint F_00cd0190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112bb98));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd01c0 */
unsigned int F_00cd01c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd01c0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cd01e0 */
unsigned int F_00cd01e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd01e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd98));
  if (*(int *)((int)this + 4) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    piVar2 = (int *)F_00ccb510();
    if (piVar1 != piVar2) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd8c));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::BusXA2::vf1 */
unsigned int F_00cd0230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00cd0240 */
uint F_00cd0240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcd0240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: FUN_00cd02e0 */
uint F_00cd02e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd02e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int * piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(int *)(gen_frame + 0x44)) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd98));
  *(undefined4 *)((int)this + 4) = 0;
  uVar4 = 0xffffffff;
  iVar3 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = this;
  (*(undefined4 *)(gen_frame + 0x3c)) = param_2;
  (*(int *)(gen_frame + 0x40)) = param_3;
  (*(undefined2 *)(gen_frame + 0x48)) = 0;
  ((char *)(gen_frame + 0x4a))[0x1a] = '\0';
  ((char *)(gen_frame + 0x4a))[0x1b] = '\0';
  ((char *)(gen_frame + 0x4a))[0x1c] = '\0';
  ((char *)(gen_frame + 0x4a))[0x1d] = '\0';
  ((char *)(gen_frame + 0x4a))[0] = '\0';
  ((char *)(gen_frame + 0x4a))[1] = '\0';
  ((char *)(gen_frame + 0x4a))[2] = '\0';
  ((char *)(gen_frame + 0x4a))[3] = '\0';
  ((char *)(gen_frame + 0x4a))[4] = '\0';
  ((char *)(gen_frame + 0x4a))[5] = '\0';
  ((char *)(gen_frame + 0x4a))[6] = '\0';
  ((char *)(gen_frame + 0x4a))[7] = '\0';
  ((char *)(gen_frame + 0x4a))[8] = '\0';
  ((char *)(gen_frame + 0x4a))[9] = '\0';
  ((char *)(gen_frame + 0x4a))[10] = '\0';
  ((char *)(gen_frame + 0x4a))[0xb] = '\0';
  ((char *)(gen_frame + 0x4a))[0xc] = '\0';
  ((char *)(gen_frame + 0x4a))[0xd] = '\0';
  ((char *)(gen_frame + 0x4a))[0xe] = '\0';
  ((char *)(gen_frame + 0x4a))[0xf] = '\0';
  ((char *)(gen_frame + 0x4a))[0x10] = '\0';
  ((char *)(gen_frame + 0x4a))[0x11] = '\0';
  ((char *)(gen_frame + 0x4a))[0x12] = '\0';
  ((char *)(gen_frame + 0x4a))[0x13] = '\0';
  ((char *)(gen_frame + 0x4a))[0x14] = '\0';
  ((char *)(gen_frame + 0x4a))[0x15] = '\0';
  ((char *)(gen_frame + 0x4a))[0x16] = '\0';
  ((char *)(gen_frame + 0x4a))[0x17] = '\0';
  ((char *)(gen_frame + 0x4a))[0x18] = '\0';
  ((char *)(gen_frame + 0x4a))[0x19] = '\0';
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if (REFG(char, 0x15d7798) != '\0') {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
    }
    uVar4 = F_00cca4d0(&REFG(char, 0x15d7798),&(*(undefined2 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x44)) + -1);
    if (uVar4 == 0) {
      (*(int *)(gen_frame + 0x44)) = (int)(char)(*(undefined2 *)(gen_frame + 0x48));
    }
  }
  if ((*(int *)(gen_frame + 0x40)) != 0) {
    iVar3 = *(int *)((*(int *)(gen_frame + 0x40)) + (*(int *)(gen_frame + 0x44)) * 4);
  }
  if ((*(int *)(gen_frame + 0x44)) != 0) {
    (*(int *)(gen_frame + 0x40)) = REFG(int, 0x134c7ec);
    if (uVar4 == 0) {
      cVar2 = (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x48)) + 1));
      if ('\0' < (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x48)) + 1))) {
        iVar5 = 0;
        do {
          if (((char *)(gen_frame + 0x4a))[(int)(iVar5)] == '\0') {
            ((uint *)(gen_frame + 0x8))[(int)(iVar5)] = REFG(undefined4, 0x15d8bac);
            if (REFG(undefined4, 0x15d8bac) == 0) {
              ((uint *)(gen_frame + 0x8))[(int)(iVar5)] = REFG(undefined4, 0x15d8ba8);
            }
          }
          else {
            uVar4 = F_00ccb4d0(((char *)(gen_frame + 0x4a))[(int)(iVar5)] + -1);
            ((uint *)(gen_frame + 0x8))[(int)(iVar5)] = uVar4;
          }
          ((uint *)(gen_frame + 0xc8))[(int)(iVar5 * 2 + 1)] = ((uint *)(gen_frame + 0x8))[(int)(iVar5)];
          ((uint *)(gen_frame + 0xc8))[(int)(iVar5 * 2)] = 0;
          iVar5 = iVar5 + 1;
          cVar2 = (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x48)) + 1));
        } while (iVar5 < (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x48)) + 1)));
      }
      (*(int *)(gen_frame + 0x28)) = (int)cVar2;
      (*(uint * PTR32 *)(gen_frame + 0x2c)) = ((uint *)(gen_frame + 0xc8));
      (*(int *)(gen_frame + 0x30)) = 0;
      (*(char * PTR32 *)(gen_frame + 0x34)) = ((char *)(gen_frame + 0x4a)) + 0x1e;
      if (iVar3 != 0) {
        iVar5 = 0;
        puVar6 = ((undefined4 *)(gen_frame + 0x70));
        do {
          if (*(int *)(iVar3 + iVar5 * 4) == 0) break;
          piVar1 = *(int * PTR32 *)(iVar3 + iVar5 * 4);
          *puVar6 = (*(undefined4 *)(gen_frame + 0x3c));
          puVar6[-1] = 0;
          uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
          puVar6[-2] = uVar4;
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 3;
        } while (iVar5 < 8);
        (*(int *)(gen_frame + 0x30)) = iVar5;
        this = (*(undefined * PTR32 *)(gen_frame + 0x38));
      }
      if ((REFG(int * PTR32, 0x15d8ba4) != (int *)0x0) &&
         (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                            (REFG(int * PTR32, 0x15d8ba4),(int)this + 4,(*(undefined4 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x40)),0,0xff - (*(int *)(gen_frame + 0x44)),
                             &(*(int *)(gen_frame + 0x28)),-(uint)((*(int *)(gen_frame + 0x30)) != 0) & (uint)&(*(int *)(gen_frame + 0x30))), (int)uVar4 < 0)) {
        if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
          REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd0240));
        }
        ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][XA2] Error: CreateSubmixVoice\"","","XA2\\BusXA2.cpp",0x89,
                        "SQEX::CDev::Engine::Sd::Driver::XA2::BusXA2::BusXA2");
      }
      if (iVar3 != 0) {
        iVar5 = 0;
        do {
          if (*(int *)(iVar3 + iVar5 * 4) == 0) break;
          piVar1 = *(int * PTR32 *)(iVar3 + iVar5 * 4);
          ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,*(undefined4 *)((int)this + 4),iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
      }
    }
    else if (iVar3 == 0) {
      uVar4 = F_00ccb510();
      *(uint *)((int)this + 4) = uVar4;
      if (uVar4 == 0) {
        uVar4 = F_00ccc080((*(undefined4 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x40)));
        *(uint *)((int)this + 4) = uVar4;
      }
    }
    else {
      (*(int *)(gen_frame + 0x30)) = 0;
      (*(char * PTR32 *)(gen_frame + 0x34)) = ((char *)(gen_frame + 0x4a)) + 0x1e;
      iVar5 = 0;
      puVar6 = ((undefined4 *)(gen_frame + 0x70));
      do {
        if (*(int *)(iVar3 + iVar5 * 4) == 0) break;
        piVar1 = *(int * PTR32 *)(iVar3 + iVar5 * 4);
        *puVar6 = (*(undefined4 *)(gen_frame + 0x3c));
        puVar6[-1] = 0;
        uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
        puVar6[-2] = uVar4;
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 3;
      } while (iVar5 < 8);
      (*(int *)(gen_frame + 0x30)) = iVar5;
      if ((REFG(int * PTR32, 0x15d8ba4) != (int *)0x0) &&
         (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                            (REFG(int * PTR32, 0x15d8ba4),(int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 4,(*(undefined4 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x40)),0,0xff - (*(int *)(gen_frame + 0x44)),0,
                             -(uint)(iVar5 != 0) & (uint)&(*(int *)(gen_frame + 0x30))), (int)uVar4 < 0)) {
        if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
          REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd0240));
        }
        ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][XA2] Error: CreateSubmixVoice\"",&REFG(undefined, 0x112bc7b),
                        "XA2\\BusXA2.cpp",0xae,"SQEX::CDev::Engine::Sd::Driver::XA2::BusXA2::BusXA2"
                       );
      }
      iVar5 = 0;
      do {
        this = (*(undefined * PTR32 *)(gen_frame + 0x38));
        if (*(int *)(iVar3 + iVar5 * 4) == 0) break;
        piVar1 = *(int * PTR32 *)(iVar3 + iVar5 * 4);
        ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 4),iVar5);
        iVar5 = iVar5 + 1;
        this = (*(undefined * PTR32 *)(gen_frame + 0x38));
      } while (iVar5 < 8);
    }
    F_00ccb4b0(*(undefined4 *)((int)this + 4),(*(int *)(gen_frame + 0x44)) + -1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IDSPBus::vf0 */
uint F_00cd0710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd8c));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::BusXA2::vf0 */
uint F_00cd0750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int * piVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd98));
  if (*(int *)(this + 4) != 0) {
    piVar1 = *(int * PTR32 *)(this + 4);
    piVar2 = (int *)F_00ccb510();
    if (piVar1 != piVar2) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
      *(undefined4 *)(this + 4) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd8c));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd07a0 */
uint F_00cd07a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd07a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if (param_2 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112be30);
    F_00ccd4d0((undefined *)((int)this + 0x14),param_1);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x14;
  *(undefined4 *)((int)this + 4) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c),0x120,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)this;
  }
  uVar1 = F_00ce6310(this_00);
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00cd0850 */
uint F_00cd0850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd0850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  if (param_3 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112be30);
    F_00cccf50((int)this + 0x14,param_2);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x14;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_1 != (undefined *)0x0) {
    piVar1 = (int *)F_00ce6310(param_1);
    *(int * PTR32 *)((int)this + 0xc) = piVar1;
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    return (uint)this;
  }
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c),0x120,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)this;
  }
  uVar2 = F_00ce6310(this_00);
  *(uint *)((int)this + 0xc) = uVar2;
  return (uint)this;
}

/* ref: FUN_00cd0920 */
uint F_00cd0920(unsigned int gen_a0)
{
  GEN_ENTER(0xcd0920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + -0x14) + 4))) + -0x14 + (int)this))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + -0x14) + 4)));
  *((uint *)GEN_TOP(((uVar1 - 0x18) + (int)this))) = uVar1 - 0x14;
  *(undefined4 *)((int)this + -0x10) = 0;
  return uVar1;
}

/* ref: FUN_00cd0950 */
unsigned int F_00cd0950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)((int)this + -0x10) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + -0x10);
    if ((char)param_1 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)((int)this + -0xc),0);
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + -0xc),0);
  }
  return 0;
}

/* ref: FUN_00cd0980 */
byte F_00cd0980(unsigned int gen_a0)
{
  GEN_ENTER(0xcd0980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)((int)this + -0x10);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0x10) + 0x14))))
              (*(int * PTR32 *)((int)this + -0x10),*(undefined4 *)((int)this + -0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: FUN_00cd09c0 */
uint F_00cd09c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd09c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar6;
  if (*(int *)((int)this + -0x10) != 0) {
    iVar4 = *(int *)((int)this + -0x14);
    iVar5 = *((int *)GEN_TOP((*(int *)(iVar4 + 4) + -0x14 + (int)this)));
    piVar1 = ((int *)GEN_TOP((*(int *)(iVar4 + 4) + 0x38 + (int)this)));
    piVar2 = ((int *)GEN_TOP((*(int *)(iVar4 + 4) + 0x14 + (int)this)));
    piVar3 = ((int *)GEN_TOP((*(int *)(iVar4 + 4) + -0x10 + (int)this)));
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,(undefined4)gen_fl2bits((float)extraout_ST0));
    extraout_ST0_01 = ((gen_fcode *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,(undefined4)gen_fl2bits((float)extraout_ST0_00));
    ((code *)*(gen_code32 *)(iVar5 + 0x3c))
              (*((int *)GEN_TOP((*(int *)((int)this + -0x14) + 4))) + -0x14 + (int)this,((undefined1 *)(gen_frame + 0x4)),
               (undefined4)gen_fl2bits((float)extraout_ST0_01));
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0x10) + 0x18))))
                      (*(int * PTR32 *)((int)this + -0x10),*(undefined4 *)((int)this + -0xc),((undefined1 *)(gen_frame + 0x4)),0x14,
                       0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar6;
}

/* ref: FUN_00cd0a60 */
uint F_00cd0a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd0a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (-1 < param_2) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 8))))(*(int * PTR32 *)((int)this + -8));
    *(undefined4 *)((int)this + -0x10) = param_1;
    *(int *)((int)this + -0xc) = param_2;
    F_00ce6650(*(undefined4 *)((int)this + -8));
  }
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + -0x14) + 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + -0x14 + (int)this) + 0x24))))(iVar1 + -0x14 + (int)this);
  return uVar2;
}

/* ref: FUN_00cd0ab0 */
uint F_00cd0ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd0ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + -8);
}

/* ref: FUN_00cd0ac0 */
uint F_00cd0ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd0ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd09c0(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))));
  return uVar1;
}

/* ref: FUN_00cd0ad0 */
uint F_00cd0ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd0ad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0ab0(in_ecx - *(int *)(in_ecx + -4));
  return uVar1;
}

/* ref: FUN_00cd0ae0 */
byte F_00cd0ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd0ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cd0980(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))));
  return bVar1;
}

/* ref: FUN_00cd0af0 */
unsigned int F_00cd0af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cd0950(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))),param_1);
  return 0;
}

/* ref: FUN_00cd0b00 */
uint F_00cd0b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd0b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cd0a60(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cd0b10 */
uint F_00cd0b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cd0b70(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))),param_1);
  return uVar1;
}

/* ref: FUN_00cd0b20 */
uint F_00cd0b20(unsigned int gen_a0)
{
  GEN_ENTER(0xcd0b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  uVar1 = *(uint *)(*(int *)this + 4);
  *((uint *)GEN_TOP(((uVar1 - 4) + (int)this))) = uVar1 - 0x14;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x60);
  F_00cccb40((int)this + 0x3c);
  F_00cccb40((int)this + 0x18);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cd0b70 */
uint F_00cd0b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)((int)this + -0x14);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + -0x14) + 4))) + (int)piVar1))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  *((int *)GEN_TOP((*(int *)(*piVar1 + 4) + -4 + (int)piVar1))) = *(int *)(*piVar1 + 4) + -0x14;
  *(undefined4 *)((int)this + -0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (piVar1 != (int *)0x0)) {
    F_00406810(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00cd0be0 */
unsigned int F_00cd0be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0be0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::MasterBusXA2::vf3 */
uint F_00cd0c00(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd0c00u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  float fVar2;
  float10 extraout_ST0;
  
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 0x10,param_2,param_3);
    return uVar1;
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xf0) + 0x30))))
              (*(int * PTR32 *)(param_1 + 0xf0),(undefined4)gen_fl2bits(param_2),0);
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))))(param_1 + 0x10); fVar2 = extraout_ST0;
  F_00cccbd0(param_1 + 0x10,(float)extraout_ST0);
  return (uint)gen_fl2bits(fVar2);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::MasterBusXA2::vf1 */
uint F_00cd0c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined1 MVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  float10 extraout_ST0;
  ulonglong uVar5;
  undefined * pMVar6;
  undefined * pMVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0xc))))(this + 0x10);
  if ((char)uVar4 != '\0') {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 8))))(this + 0x10,param_1);
    if (*(int *)(this + 0xf0) == 0) goto LAB_00cd0d29;
    iVar2 = **(int * PTR32 *)(this + 0xf0);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x10))))(this + 0x10,0);
    uVar4 = ((code *)*(gen_code32 *)(iVar2 + 0x30))
                      (*(undefined4 *)(this + 0xf0),(undefined4)gen_fl2bits((float)extraout_ST0));
  }
  if (*(int *)(this + 0xf0) != 0) {
    MVar1 = this[300];
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x128);
    piVar3 = *(int * PTR32 *)(this + 0xf0);
    pMVar6 = this + 0xf8;
    pMVar7 = this + 0x110;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = pMVar6;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = pMVar7;
    ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3,(int)(char)MVar1,&(*(undefined * PTR32 *)(gen_frame + 0xc)),0xc);
    uVar5 = F_00427d90();
    F_00cd1160(((undefined1 *)(gen_frame + 0x18)),0x40001,(int)uVar5,(int)(uVar5 >> 0x20),pMVar6,pMVar7);
    uVar4 = F_00d2cf60(((undefined1 *)(gen_frame + 0x18)),0x50);
  }
LAB_00cd0d29: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar4;
}

/* ref: FUN_00cd0d40 */
uint F_00cd0d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcd0d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: FUN_00cd0de0 */
uint F_00cd0de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd0de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  float10 fVar2;
  undefined * rclsid;
  HRESULT HVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ce6810(this,param_1);
  fVar2 = (float10)0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112c028));
  *(undefined1 *)((int)this + 300) = 0xff;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(float *)((int)this + 0x110) = (float)fVar2;
  *(float *)((int)this + 0xf8) = (float)fVar2;
  *(float *)((int)this + 0x114) = (float)fVar2;
  *(float *)((int)this + 0xfc) = (float)fVar2;
  *(float *)((int)this + 0x118) = (float)fVar2;
  *(float *)((int)this + 0x100) = (float)fVar2;
  *(float *)((int)this + 0x11c) = (float)fVar2;
  *(float *)((int)this + 0x104) = (float)fVar2;
  *(float *)((int)this + 0x120) = (float)fVar2;
  *(float *)((int)this + 0x108) = (float)fVar2;
  *(float *)((int)this + 0x124) = (float)fVar2;
  *(float *)((int)this + 0x10c) = (float)fVar2;
  piVar7 = REFG(int * PTR32, 0x15d8ba4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = REFG(int * PTR32, 0x15d8ba4);
  if (REFG(int * PTR32, 0x15d8ba4) != (int *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
    rclsid = (undefined *)&REFG(undefined, 0x112c014);
    if (((byte)REFG(undefined4, 0x15d8bb4) & 1) == 0) {
      rclsid = (undefined *)&REFG(undefined, 0x112c004);
    }
    HVar3 = gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),&(*(int * PTR32 *)(gen_frame + 0x14)));
    if (HVar3 < 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd0d40));
      }
      ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][XA2]Error: XAudio2CreateVolumeMeter\"","",
                      "XA2\\MasterBusXA2.cpp",0x4c,
                      "SQEX::CDev::Engine::Sd::Driver::XA2::MasterBusXA2::MasterBusXA2");
    }
    (*(uint * PTR32 *)(gen_frame + 0x8)) = ((uint *)(gen_frame + 0x18));
    iVar4 = 0;
    (*(uint *)(gen_frame + 0x10)) = param_2;
    (*(int *)(gen_frame + 0x4)) = 0;
    if (param_3 != 0) {
      uVar6 = 0;
      do {
        iVar4 = (*(int *)(gen_frame + 0x4));
        piVar7 = (*(int * PTR32 *)(gen_frame + 0xc));
        if (*(int *)(param_3 + uVar6 * 4) == 0) break;
        piVar7 = *(int * PTR32 *)(param_3 + uVar6 * 4);
        uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x20))(piVar7);
        if (uVar5 != 0xffffffff) {
          piVar7 = *(int * PTR32 *)(param_3 + uVar6 * 4);
          uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x20))(piVar7);
          (*(uint *)(gen_frame + 0x10)) = uVar5;
        }
        piVar7 = *(int * PTR32 *)(param_3 + uVar6 * 4);
        uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x18))(piVar7);
        iVar1 = (*(int *)(gen_frame + 0x4));
        ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0x4)) * 3)] = uVar5;
        piVar7 = *(int * PTR32 *)(param_3 + uVar6 * 4);
        uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x1c))(piVar7);
        ((uint *)(gen_frame + 0x18))[(int)(iVar1 * 3 + 1)] = uVar5 & 0xff;
        iVar4 = (*(int *)(gen_frame + 0x4)) + 1;
        uVar6 = uVar6 + 1;
        ((uint *)(gen_frame + 0x18))[(int)(iVar1 * 3 + 2)] = (*(uint *)(gen_frame + 0x10));
        (*(int *)(gen_frame + 0x4)) = iVar4;
        piVar7 = (*(int * PTR32 *)(gen_frame + 0xc));
      } while (uVar6 < 8);
    }
    ((uint *)(gen_frame + 0x18))[(int)(iVar4 * 3)] = (uint)(*(int * PTR32 *)(gen_frame + 0x14));
    *(uint *)((int)this + 0x128) = (*(uint *)(gen_frame + 0x10));
    ((uint *)(gen_frame + 0x18))[(int)(iVar4 * 3 + 1)] = 1;
    ((uint *)(gen_frame + 0x18))[(int)(iVar4 * 3 + 2)] = (*(uint *)(gen_frame + 0x10));
    *(char *)((int)this + 300) = (char)iVar4;
    iVar1 = *piVar7;
    (*(int *)(gen_frame + 0x4)) = iVar4 + 1;
    uVar6 = ((code *)*(gen_code32 *)(iVar1 + 0x28))(piVar7,(int)this + 0xf0,param_2,REFG(int, 0x134c7e8),0,0,&(*(int *)(gen_frame + 0x4)));
    if ((int)uVar6 < 0) {
      REFG(undefined1, 0x15d8bd9) = 1;
    }
    if (param_3 != 0) {
      uVar6 = 0;
      do {
        piVar7 = (*(int * PTR32 *)(gen_frame + 0xc));
        if (*(int *)(param_3 + uVar6 * 4) == 0) break;
        piVar7 = *(int * PTR32 *)(param_3 + uVar6 * 4);
        ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7,*(undefined4 *)((int)this + 0xf0),uVar6);
        uVar6 = uVar6 + 1;
        piVar7 = (*(int * PTR32 *)(gen_frame + 0xc));
      } while (uVar6 < 8);
    }
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)));
    F_00ccb490(*(undefined4 *)((int)this + 0xf0));
    if ((*(int *)((int)this + 0xf0) != 0) && (REFG(int, 0x134c7e8) != REFG(int, 0x134c7ec))) {
      ((code *)*(gen_code32 *)(*piVar7 + 0x24))
                (piVar7,(undefined4 *)((int)this + 0xf4),param_2,REFG(int, 0x134c7ec),0,0xff,0,0);
      F_00ccb4a0(*(undefined4 *)((int)this + 0xf4));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)this;
}

/* ref: FUN_00cd1060 */
uint F_00cd1060(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xf4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112c028));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
    *(undefined4 *)((int)this + 0xf4) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xf0);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0,0);
    if ((int)uVar2 < 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd0d40));
      }
      ((code *)REFG(gen_code32, 0x15d861c))("!\"[SD][DRIVER] MasteringVoice DisableEffect Error.\"","",
                      "XA2\\MasterBusXA2.cpp",0xd9,
                      "SQEX::CDev::Engine::Sd::Driver::XA2::MasterBusXA2::~MasterBusXA2");
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0x48))))(*(int * PTR32 *)((int)this + 0xf0));
    *(undefined4 *)((int)this + 0xf0) = 0;
  }
  uVar2 = F_00ce6850(this);
  return uVar2;
}

/* ref: FUN_00cd1100 */
unsigned int F_00cd1100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1100u, gen_a0, gen_a1, 0u, 0u);
  LPVOID * param_1 = (LPVOID *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * rclsid;
  
  rclsid = (undefined *)&REFG(undefined, 0x112c014);
  if ((param_2 & 1) == 0) {
    rclsid = (undefined *)&REFG(undefined, 0x112c004);
  }
  gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),param_1);
  return 0;
}

/* ref: FUN_00cd1140 */
byte F_00cd1140(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1140u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  REFG(undefined1, 0x15d8bd9) = (byte)param_1;
  return (byte)param_1;
}

/* ref: FUN_00cd1150 */
unsigned int F_00cd1150(float gen_a0)
{
  GEN_ENTER(0xcd1150u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00cd1160 */
unsigned int F_00cd1160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcd1160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = *param_4;
  *(undefined4 *)((int)this + 0x38) = *param_5;
  *(undefined4 *)((int)this + 0x24) = param_4[1];
  *(undefined4 *)((int)this + 0x3c) = param_5[1];
  *(undefined4 *)((int)this + 0x28) = param_4[2];
  *(undefined4 *)((int)this + 0x40) = param_5[2];
  *(undefined4 *)((int)this + 0x2c) = param_4[3];
  *(undefined4 *)((int)this + 0x44) = param_5[3];
  *(undefined4 *)((int)this + 0x30) = param_4[4];
  *(undefined4 *)((int)this + 0x48) = param_5[4];
  *(undefined4 *)((int)this + 0x34) = param_4[5];
  *(undefined4 *)((int)this + 0x4c) = param_5[5];
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::MasterBusXA2::vf0 */
uint F_00cd11e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd11e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cd1060(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd1210 */
unsigned int F_00cd1210(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1210u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[12])REFP(0x112c074));
  F_00cccb40(in_ecx + 10);
  F_00cccb40(in_ecx + 1);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf0 */
uint F_00cd1240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x112c074));
  F_00cccb40(this + 0x28);
  F_00cccb40(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd1280 */
uint F_00cd1280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  F_00ce6b60(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x112c0a8));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c),0x70898,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00ce6be0(this_00);
  }
  *(uint *)((int)this + 0x50) = uVar1;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x10))))(uVar1 + 0x20,(int)this + 0x54,8);
  return (uint)this;
}

/* ref: FUN_00cd1310 */
uint F_00cd1310(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x50);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x112c0a8));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x112c074));
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularPitchShiftXA2::vf5 */
uint F_00cd1360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd1360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  float10 fVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  puVar1 = param_1;
  if (-1 < param_2) {
    *(undefined4 * PTR32 *)(this + 0x5c) = param_1;
    *(int *)(this + 0x60) = param_2;
    ((code *)*(gen_code32 *)*param_1)(param_1,((byte *)(gen_frame + 0xc)));
    fVar2 = (float10)(int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
    if ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) < 0) {
      fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)(this + 0x4c) = (float)fVar2;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x24))(this)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)puVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularPitchShiftXA2::vf1 */
unsigned int F_00cd13c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd13c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 0x5c) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x5c);
    if ((char)param_1 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0x60),0);
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 0x60),0);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularPitchShiftXA2::vf2 */
byte F_00cd13f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd13f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 0x5c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x5c) + 0x14))))
              (*(int * PTR32 *)(this + 0x5c),*(undefined4 *)(this + 0x60),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularPitchShiftXA2::vf9 */
uint F_00cd1430(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0x10))))(this + 4);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0x10)));
  *(float *)(this + 0x54) = (float)((float10)1 / extraout_ST0);
  extraout_ST0_00 = (*pcVar1)(this + 0x28);
  *(float *)(this + 0x58) = (float)extraout_ST0_00;
  piVar2 = *(int * PTR32 *)(this + 0x5c);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,*(undefined4 *)(this + 0x60),this + 0x54,8,0);
  }
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularPitchShiftXA2::vf6 */
uint F_00cd1480(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1480u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x50);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularPitchShiftXA2::vf7 */
byte F_00cd1490(void)
{
  GEN_ENTER(0xcd1490u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularPitchShiftXA2::vf0 */
uint F_00cd14a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd14a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x50);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x112c0a8));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined4 *)(this + 0x5c) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x112c074));
  F_00cccb40(this + 0x28);
  F_00cccb40(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd1500 */
unsigned int F_00cd1500(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1500u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112c104));
  F_00cccb40(in_ecx + 10);
  F_00cccb40(in_ecx + 1);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf0 */
uint F_00cd1530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c104));
  F_00cccb40(this + 0x28);
  F_00cccb40(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd1570 */
uint F_00cd1570(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  F_00ce7460(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x112c14c));
  *(undefined4 *)((int)this + 0x4c) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c),0x78,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x4c) = 0;
    return (uint)this;
  }
  uVar1 = F_00ce7940(this_00);
  *(uint *)((int)this + 0x4c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00cd15e0 */
uint F_00cd15e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd15e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x4c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x112c14c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c104));
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf1 */
unsigned int F_00cd1620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 0x50) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x50);
    if ((char)param_1 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0x54),0);
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 0x54),0);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf2 */
byte F_00cd1650(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 0x50);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x50) + 0x14))))
              (*(int * PTR32 *)(this + 0x50),*(undefined4 *)(this + 0x54),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf9 */
unsigned int F_00cd1690(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 extraout_ST0;
  
  if (*(int *)(this + 0x4c) != 0) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0x10))))(this + 4);
    F_00ce7660(*(undefined4 *)(this + 0x4c),(float)extraout_ST0);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf17 */
unsigned int F_00cd16c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd16c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf14 */
byte F_00cd16d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd16d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x4c) != 0) {
    bVar1 = F_00ce76e0(*(int *)(in_ecx + 0x4c));
    return bVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf15 */
uint F_00cd16e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd16e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ce76a0(*(undefined4 *)(in_ecx + 0x4c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf16 */
unsigned int F_00cd16f0(void)
{
  GEN_ENTER(0xcd16f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf12 */
unsigned int F_00cd1700(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x4c) != 0) {
    F_00ce76c0(*(int *)(in_ecx + 0x4c));
    return 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf13 */
unsigned int F_00cd1710(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x4c) != 0) {
    F_00ce76d0(*(int *)(in_ecx + 0x4c));
    return 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf5 */
uint F_00cd1720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd1720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (-1 < (int)param_2) {
    *(undefined4 *)(this + 0x50) = param_1;
    *(uint *)(this + 0x54) = param_2;
    ((code *)*(gen_code32 *)(*(int *)this + 4))(this,0);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf6 */
uint F_00cd1750(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x4c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf0 */
uint F_00cd1760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x4c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x112c14c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + 0x4c) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c104));
  F_00cccb40(this + 0x28);
  F_00cccb40(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd17c0 */
unsigned int F_00cd17c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd17c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112c1c4));
  F_00cccb40(in_ecx + 0x25);
  F_00cccb40(in_ecx + 0x1c);
  F_00cccb40(in_ecx + 0x13);
  F_00cccb40(in_ecx + 10);
  F_00cccb40(in_ecx + 1);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf0 */
uint F_00cd1800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c1c4));
  F_00cccb40(this + 0x94);
  F_00cccb40(this + 0x70);
  F_00cccb40(this + 0x4c);
  F_00cccb40(this + 0x28);
  F_00cccb40(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd1860 */
uint F_00cd1860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  F_00ce8330(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c20c));
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c),0xa4,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00ce8520(this_00);
  }
  *(uint *)((int)this + 0xbc) = uVar1;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x10))))(uVar1 + 0x20,(int)this + 0xc0,0x14);
  return (uint)this;
}

/* ref: FUN_00cd1900 */
uint F_00cd1900(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xbc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c20c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0xbc) = 0;
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c1c4));
  F_00cccb40((int)this + 0x94);
  F_00cccb40((int)this + 0x70);
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf5 */
uint F_00cd1970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd1970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  float10 fVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  puVar1 = param_1;
  if (-1 < param_2) {
    *(undefined4 * PTR32 *)(this + 0xd4) = param_1;
    *(int *)(this + 0xd8) = param_2;
    ((code *)*(gen_code32 *)*param_1)(param_1,((byte *)(gen_frame + 0xc)));
    fVar2 = (float10)(int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
    if ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) < 0) {
      fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)(this + 0xb8) = (float)fVar2;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x24))(this)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)puVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf1 */
unsigned int F_00cd19e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd19e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 0xd4) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0xd4);
    if ((char)param_1 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0xd8),0);
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 0xd8),0);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf2 */
byte F_00cd1a20(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 0xd4);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xd4) + 0x14))))
              (*(int * PTR32 *)(this + 0xd4),*(undefined4 *)(this + 0xd8),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf9 */
uint F_00cd1a60(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0x10))))(this + 4);
  *(float *)(this + 0xc0) = (float)extraout_ST0;
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0x10))))(this + 0x28);
  *(float *)(this + 0xc4) = (float)extraout_ST0_00;
  extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 0x10))))(this + 0x4c);
  *(float *)(this + 200) = (float)extraout_ST0_01;
  extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x70) + 0x10))))(this + 0x70);
  *(float *)(this + 0xcc) = (float)extraout_ST0_02;
  extraout_ST0_03 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x94) + 0x10))))(this + 0x94);
  *(float *)(this + 0xd0) = (float)extraout_ST0_03;
  piVar1 = *(int * PTR32 *)(this + 0xd4);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,*(undefined4 *)(this + 0xd8),this + 0xc0,0x14,0);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf6 */
uint F_00cd1af0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1af0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xbc);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf0 */
uint F_00cd1b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cd1900(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd1b30 */
unsigned int F_00cd1b30(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1b30u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb40(in_ecx + 1);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StringendoEffectBase::vf0 */
uint F_00cd1b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb40(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd1b80 */
uint F_00cd1b80(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  F_00ce8a80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c2ac));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c),0x20084,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00ce8aa0(this_00);
  }
  *(uint *)((int)this + 0x28) = uVar1;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x10))))(uVar1 + 0x20,(int)this + 0x2c,4);
  return (uint)this;
}

/* ref: FUN_00cd1c10 */
uint F_00cd1c10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x28);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c2ac));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf5 */
uint F_00cd1c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd1c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  puVar1 = param_1;
  if (-1 < param_2) {
    *(undefined4 * PTR32 *)(this + 0x30) = param_1;
    *(int *)(this + 0x34) = param_2;
    ((code *)*(gen_code32 *)*param_1)(param_1,((undefined1 *)(gen_frame + 0xc)));
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x24))(this)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)puVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf1 */
unsigned int F_00cd1ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 0x30) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x30);
    if ((char)param_1 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0x34),0);
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 0x34),0);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf2 */
byte F_00cd1cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 0x30);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x14))))
              (*(int * PTR32 *)(this + 0x30),*(undefined4 *)(this + 0x34),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf9 */
uint F_00cd1d10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0x10))))(this + 4);
  piVar1 = *(int * PTR32 *)(this + 0x30);
  *(float *)(this + 0x2c) = (float)((float10)1 / extraout_ST0);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,*(undefined4 *)(this + 0x34),this + 0x2c,4,0);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf6 */
uint F_00cd1d50(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1d50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf0 */
uint F_00cd1d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x28);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c2ac));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x30) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb40(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd1dc0 */
unsigned int F_00cd1dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1dc0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cd1df0 */
unsigned int F_00cd1df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  byte bVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar1 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x10) = *param_1;
    *(undefined4 *)((int)this + 0x14) = param_1[1];
    *(undefined4 *)((int)this + 0x18) = param_1[2];
    *(undefined4 *)((int)this + 0x1c) = param_1[3];
    bVar2 = F_00ce9330(param_1);
    if (bVar2 != 0) {
      puVar3 = (undefined4 *)F_00ce9590(param_1,3);
      *(undefined4 *)((int)this + 0x1c8) = *puVar3;
      *(undefined4 *)((int)this + 0x1cc) = puVar3[1];
      *(undefined4 *)((int)this + 0x1d0) = puVar3[2];
      *(undefined4 *)((int)this + 0x1d4) = puVar3[3];
      puVar3 = (undefined4 *)F_00ce95c0(param_1,3);
      param_1 = (undefined4 *)0x0;
      if (*(char *)((int)this + 0x1cc) != '\0') {
        puVar5 = (undefined4 *)((int)this + 0x1d8);
        do {
          param_1 = (undefined4 *)((int)param_1 + 1);
          *puVar5 = *puVar3;
          puVar5[1] = puVar3[1];
          puVar5[2] = puVar3[2];
          puVar5[3] = puVar3[3];
          puVar3 = puVar3 + 4;
          puVar5 = puVar5 + 4;
        } while ((int)param_1 < (int)(uint)*(byte *)((int)this + 0x1cc));
      }
      uVar4 = F_00ce93d0((undefined *)((int)this + 0x1c8));
      F_00c46aa0((int)this + 0x228,puVar1 + (*(byte *)((int)this + 0x1cc) + 2) * 4,uVar4);
      return 0;
    }
    *(undefined1 *)((int)this + 0x1cc) = 1;
    *(float *)((int)this + 0x1dc) = (float)(float10)1;
    *(undefined4 *)((int)this + 0x1c8) = 0;
    *(undefined1 *)((int)this + 0x1d8) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf107 */
byte F_00cd1f00(void)
{
  GEN_ENTER(0xcd1f00u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00cd1f10 */
unsigned int F_00cd1f10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  iVar5 = 0;
  (*(char *)(gen_frame + 0x8b)) = '\0';
  if (0 < *(int *)((int)this + 700)) {
    puVar2 = (undefined4 *)((int)this + 0x2c0);
    do {
      bVar1 = F_00cd65b0(*puVar2);
      if (bVar1 != 0) {
        F_00cd8a90((undefined *)*puVar2);
        *puVar2 = 0;
        (*(char *)(gen_frame + 0x8b)) = '\x01';
      }
      iVar5 = iVar5 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar5 < *(int *)((int)this + 700));
    if ((*(char *)(gen_frame + 0x8b)) != '\0') {
      iVar5 = 0;
      if (0 < *(int *)((int)this + 700)) {
        iVar4 = *(int *)((int)this + 700);
        piVar3 = (int *)((int)this + 0x2c0);
        do {
          if (*piVar3 != 0) {
            ((int *)(gen_frame + 0x8))[(int)(iVar5)] = *piVar3;
            iVar5 = iVar5 + 1;
          }
          piVar3 = piVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (0 < iVar5) {
        piVar3 = ((int *)(gen_frame + 0x8));
        piVar6 = (int *)((int)this + 0x2c0);
        for (iVar4 = iVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar6 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar6 = piVar6 + 1;
        }
      }
      if (iVar5 < *(int *)((int)this + 700)) {
        puVar2 = (undefined4 *)((int)this + iVar5 * 4 + 0x2c0);
        iVar4 = iVar5;
        do {
          *puVar2 = 0;
          iVar4 = iVar4 + 1;
          puVar2 = puVar2 + 1;
        } while (iVar4 < *(int *)((int)this + 700));
      }
      *(int *)((int)this + 700) = iVar5;
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf10 */
unsigned int F_00cd1fe0(void)
{
  GEN_ENTER(0xcd1fe0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf104 */
uint F_00cd1ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int iVar1;
  undefined * pRVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar2 = this + 0x2c0;
    do {
      in_EAX = F_00cd8390(*(undefined * PTR32 *)pRVar2);
      iVar1 = iVar1 + 1;
      pRVar2 = pRVar2 + 4;
    } while (iVar1 < *(int *)(this + 700));
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf3 */
byte F_00cd2020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd2020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * pRVar3;
  
  if ((*(uint *)(this + 0xf8) >> 2 & 1) != 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar3 = this + 0x2c0;
    do {
      uVar1 = F_00cd9930(*(undefined4 *)pRVar3,param_1,1);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pRVar3 = pRVar3 + 4;
    } while (iVar2 < *(int *)(this + 700));
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf2 */
uint F_00cd2080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd2080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  if (((byte)this[0xf8] & 8) != 0) {
    return 5;
  }
  uVar1 = F_00427d90();
  *(int *)(this + 0x118) = (int)uVar1;
  *(undefined4 *)(this + 0x110) = param_1;
  *(int *)(this + 0x11c) = (int)(uVar1 >> 0x20);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf12 */
uint F_00cd20c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd20c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
  return uVar1;
}

/* ref: FUN_00cd20e0 */
byte F_00cd20e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd20e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = *(byte *)this;
  *(byte *)this = '\x01' << ((byte)param_1 & 0x1f) | bVar1;
  return bVar1 == 0;
}

/* ref: FUN_00cd2110 */
byte F_00cd2110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd2110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)this;
  bVar2 = ~('\x01' << ((byte)param_1 & 0x1f)) & bVar1;
  *(byte *)this = bVar2;
  if ((bVar1 != 0) && (bVar2 == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cd2150 */
byte F_00cd2150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd2150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return ((byte)(1 << ((byte)param_1 & 0x1f)) & *(byte *)this) != 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf6 */
uint F_00cd2170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd2170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0,param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf5 */
uint F_00cd2190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd2190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 RVar1;
  
  RVar1 = this[0x130];
  this[0x130] = (undefined1)('\x01' << ((byte)param_1 & 0x1f) | (byte)RVar1);
  if (RVar1 == (undefined1)0x0) {
    *(uint *)(this + 300) = *(uint *)(this + 300) & 2 | param_2 * 4 | 1;
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf8 */
uint F_00cd21e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd21e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,0,param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf7 */
uint F_00cd2200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd2200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 RVar1;
  undefined1 RVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  
  RVar1 = this[0x130];
  RVar2 = (undefined1)(~('\x01' << ((byte)param_1 & 0x1f)) & (byte)RVar1);
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),RVar2);
  this[0x130] = RVar2;
  if ((RVar1 != (undefined1)0x0) && (RVar2 == (undefined1)0x0)) {
    uVar3 = *(uint *)(this + 300) & 2 | param_2 * 4;
    *(uint *)(this + 300) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00cd2330 */
float F_00cd2330(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x370) + 0x10))))((int)this + 0x370);
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x10))))((int)this + 0x20);
  fVar1 = *(float *)((int)this + 0x100);
  fVar2 = *(float *)((int)this + 0x104);
  extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x138) + 0x10))))((int)this + 0x138);
  extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xb0) + 0x10))))((int)this + 0xb0);
  return ((float)GEN_TOF((extraout_ST0_02 *
                (float10)((double)GEN_TOD((extraout_ST0_01 *
                                 (float10)((double)GEN_TOD((((extraout_ST0_00 * (float10)(double)extraout_ST0
                                                    ) * (float10)fVar1) * (float10)fVar2)))))))));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf15 */
uint F_00cd23a0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd23a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  uVar1 = *(uint *)(param_1 + 0xf8) >> 3;
  if (((uVar1 & 1) == 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 700))) {
    puVar3 = (undefined4 *)(param_1 + 0x2c0);
    do {
      uVar1 = F_00cd6630(*puVar3,param_2,param_3,param_4);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 700));
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf17 */
unsigned int F_00cd23f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd23f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * pRVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x168))(this);
  if ((((char)uVar1 == '\0') && (this[0x340] == (undefined1)0x0)) &&
     (iVar2 = 0, 0 < *(int *)(this + 700))) {
    pRVar3 = this + 0x2c0;
    do {
      F_00cd66f0(*(undefined * PTR32 *)pRVar3,param_1);
      iVar2 = iVar2 + 1;
      pRVar3 = pRVar3 + 4;
    } while (iVar2 < *(int *)(this + 700));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf18 */
unsigned int F_00cd2440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd2440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)param_1;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x168))(this);
  if (((char)uVar2 == '\0') &&
     (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x164))(this), (char)uVar2 == '\0')) {
    *(undefined4 *)(this + 0xd4) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0xd8) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)(this + 0xdc) = *(undefined4 *)((int)param_1 + 8);
    iVar3 = 0;
    *(undefined4 *)(this + 0xe0) = *(undefined4 *)((int)param_1 + 0xc);
    if (0 < *(int *)(this + 700)) {
      param_1 = this + 0x2c0;
      do {
        F_00cd7670(*(undefined * PTR32 *)param_1,puVar1);
        param_1 = param_1 + 4;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 700));
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf20 */
unsigned int F_00cd2540(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd2540u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = 0;
  *(float *)(param_1 + 0xf4) = param_2;
  if (0 < *(int *)(param_1 + 700)) {
    puVar2 = (undefined4 *)(param_1 + 0x2c0);
    do {
      F_00cd6740(*puVar2,param_2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 700));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf22 */
uint F_00cd2620(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd2620u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint in_ecx;
  byte bVar2;
  
  in_ecx = ((code *)*(gen_code32 *)(*param_1 + 0xc4))(param_1);
  bVar2 = 0;
  bVar1 = (byte)in_ecx;
  (*(uint *)(gen_frame + 0x7)) = (*(uint *)(gen_frame + 0x7)) & 0xffffff00;
  if (bVar1 != 0) {
    do {
      in_ecx = ((code *)*(gen_code32 *)(*param_1 + 0xcc))(param_1,(*(uint *)(gen_frame + 0x7)));
      if (in_ecx != 0) {
        F_00cd6890(in_ecx,param_2);
      }
      bVar2 = bVar2 + 1;
      (*(uint *)(gen_frame + 0x7)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x7)), 1, 3),bVar2);
    } while (bVar2 < bVar1);
  }
  return in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf23 */
unsigned int F_00cd2680(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd2680u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  F_00cccc10(in_ecx + 0x20,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf24 */
unsigned int F_00cd26a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd26a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  F_00cccc10(in_ecx + 0x44,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf37 */
unsigned int F_00cd27d0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd27d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x168))(param_1);
  if (((char)uVar1 == '\0') && (iVar2 = 0, 0 < param_1[0xaf])) {
    piVar3 = param_1 + 0xb0;
    do {
      F_00cd7720(*piVar3,param_2,param_3,param_4);
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < param_1[0xaf]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf66 */
unsigned int F_00cd2830(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pRVar1;
  int iVar2;
  float fVar3;
  float local_8;
  
  local_8 = (float)(float10)0;
  iVar2 = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar1 = this + 0x2c0;
    do {
      fVar3 = F_00cd76f0(*(undefined * PTR32 *)pRVar1);
      if (!((float10)fVar3 <= (float10)local_8) != (GEN_ISNAN((float10)local_8) || GEN_ISNAN((float10)fVar3))) {
        local_8 = fVar3;
      }
      iVar2 = iVar2 + 1;
      pRVar1 = pRVar1 + 4;
    } while (iVar2 < *(int *)(this + 700));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf67 */
float F_00cd2890(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  if (0 < *(int *)(this + 700)) {
    fVar1 = F_00cd83d0(*(undefined * PTR32 *)(this + 0x2c0));
    return fVar1;
  }
  return (float)(float10)0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf77 */
byte F_00cd28b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd28b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (byte)(*(uint *)(in_ecx + 0xf8) >> 2) & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf78 */
byte F_00cd28c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd28c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 700) == 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf79 */
byte F_00cd28d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd28d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined * this_00;
  bool bVar2;
  
  bVar2 = true;
  if (((byte)this[300] & 1) == 0) {
    this_00 = (undefined *)F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),(uint)(byte)this[0x11]);
    bVar1 = F_00cbb1b0(this_00);
    F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
    bVar2 = bVar1 != 0;
  }
  return bVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf73 */
byte F_00cd2910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd2910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte * pbVar4;
  undefined * pRVar5;
  int iVar6;
  uint uVar7;
  undefined * pRVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  pbVar4 = param_1;
  pbVar4[0] = 0;
  pbVar4[1] = 0;
  pbVar4[2] = 0;
  pbVar4[3] = 0;
  pbVar4[4] = 0;
  pbVar4[5] = 0;
  pbVar4[6] = 0;
  pbVar4[7] = 0;
  pbVar4[8] = 0;
  pbVar4[9] = 0;
  pbVar4[10] = 0;
  pbVar4[0xb] = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar8 = this + 0x2c0;
    do {
      bVar1 = F_00cd65b0(*(undefined4 *)pRVar8);
      if (bVar1 != 0) {
LAB_00cd2ac7: ;
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return 0;
      }
      bVar1 = F_00cd7de0(*(undefined * PTR32 *)pRVar8,&(*(uint *)(gen_frame + 0x30)),1);
      uVar7 = (*(uint *)(gen_frame + 0x30));
      iVar2 = (*(int *)(gen_frame + 0x40));
      while ((*(uint *)(gen_frame + 0x30)) = uVar7, (*(int *)(gen_frame + 0x40)) = iVar2, bVar1 != 0) {
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x34)) + param_2;
        (*(uint *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0xc));
        iVar6 = 0;
        (*(byte *)(gen_frame + 0x17)) = 1;
        if (0 < *(int *)(this + 700)) {
          pRVar5 = this + 0x2c0;
          do {
            if (iVar6 != (*(int *)(gen_frame + 0x8))) {
              bVar1 = F_00cd7de0(*(undefined * PTR32 *)pRVar5,((byte *)(gen_frame + 0x18)),1);
              while (bVar1 != 0) {
                uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 4)) + param_2;
                (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 4)) = uVar3;
                if (((iVar2 == (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 16))) && (uVar7 <= uVar3)) &&
                   ((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 0)) <= (*(uint *)(gen_frame + 0xc)))) {
                  (*(byte *)(gen_frame + 0x17)) = (*(byte *)(gen_frame + 0x17)) + 1;
                  if (uVar7 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 0))) {
                    uVar7 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 0));
                  }
                  if (uVar3 < (*(uint *)(gen_frame + 0xc))) {
                    (*(uint *)(gen_frame + 0xc)) = uVar3;
                  }
                  break;
                }
                bVar1 = F_00cd7de0(*(undefined * PTR32 *)pRVar5,((byte *)(gen_frame + 0x18)),0);
              }
            }
            iVar6 = iVar6 + 1;
            pRVar5 = pRVar5 + 4;
          } while (iVar6 < *(int *)(this + 700));
        }
        if ((*(int *)(gen_frame + 0x40)) == 0xc) {
          if (*param_1 < (*(byte *)(gen_frame + 0x17))) {
            *param_1 = (*(byte *)(gen_frame + 0x17));
          }
        }
        else if ((*(int *)(gen_frame + 0x40)) == 6) {
          if (param_1[1] < (*(byte *)(gen_frame + 0x17))) {
            param_1[1] = (*(byte *)(gen_frame + 0x17));
          }
        }
        else {
          if (((*(int *)(gen_frame + 0x40)) != 1) && ((*(int *)(gen_frame + 0x40)) != 0)) goto LAB_00cd2ac7;
          if (param_1[2] < (*(byte *)(gen_frame + 0x17))) {
            param_1[2] = (*(byte *)(gen_frame + 0x17));
          }
        }
        if (-1 < (*(int *)(gen_frame + 0x44))) {
          iVar2 = 0;
          if (param_1[3] != 0) {
            pbVar4 = param_1 + 4;
            do {
              if (*(short *)pbVar4 == (*(int *)(gen_frame + 0x44))) goto LAB_00cd2a7b;
              iVar2 = iVar2 + 1;
              pbVar4 = pbVar4 + 2;
            } while (iVar2 < (int)(uint)param_1[3]);
          }
          *(short *)(param_1 + (uint)param_1[3] * 2 + 4) = (short)(*(int *)(gen_frame + 0x44));
          param_1[3] = param_1[3] + 1;
        }
LAB_00cd2a7b: ;
        bVar1 = F_00cd7de0(*(undefined * PTR32 *)pRVar8,&(*(uint *)(gen_frame + 0x30)),0);
        uVar7 = (*(uint *)(gen_frame + 0x30));
        iVar2 = (*(int *)(gen_frame + 0x40));
      }
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
      pRVar8 = pRVar8 + 4;
    } while ((*(int *)(gen_frame + 0x8)) < *(int *)(this + 700));
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf87 */
byte F_00cd2ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_00d2ccd0();
  ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,((undefined1 *)(gen_frame + 0xc)),(uint)(byte)this[0x11]);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xd4))(piVar2);
  if (((char)uVar3 != '\0') && (((byte)this[0x14] & 2) != 0)) {
LAB_00cd2b36: ;
    F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
    return 1;
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xcc))(piVar2);
  if ((char)uVar3 != '\0') {
    bVar1 = F_00cbb420(((undefined1 *)(gen_frame + 0xc)));
    if (bVar1 != 0) goto LAB_00cd2b36;
  }
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf88 */
byte F_00cd2b60(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  undefined * pRVar3;
  
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if ((REFG(char, 0x15d7798) != '\0') && (iVar2 = 0, this[0x1cc] != (undefined1)0x0)) {
    pRVar3 = this + 0x1d8;
    do {
      if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
        F_00ccaf80(&REFG(char, 0x15d7798));
      }
      bVar1 = F_00cca610(&REFG(char, 0x15d7798),(uint)(byte)*pRVar3);
      if (bVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      pRVar3 = pRVar3 + 0x10;
    } while (iVar2 < (int)(uint)(byte)this[0x1cc]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf29 */
uint F_00cd2bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd2bf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x178) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf30 */
uint F_00cd2c00(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2c00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x178);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf57 */
uint F_00cd2c10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2c10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((int *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x10))) * 1000 + (uint)*(ushort *)(in_ecx + 0x1c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf97 */
uint F_00cd2c30(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x1c)));
}

/* ref: FUN_00cd2c40 */
uint F_00cd2c40(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd2c40u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar1 = (float10)0;
  fVar3 = (float10)param_2;
  if (!(fVar1 <= fVar3) != (GEN_ISNAN(fVar3) || GEN_ISNAN(fVar1))) {
    fVar3 = (float10)(float)fVar1;
  }
  if (param_3 == 0) {
    F_00cccbd0(param_1 + 0x8c,(float)fVar3);
    return 0;
  }
  uVar2 = F_00cccd90(param_1 + 0x8c,(float)fVar3,param_3);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf33 */
uint F_00cd2fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd2fd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x20))))(*(int * PTR32 *)(param_1 + 0xc));
  if (uVar2 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*(ushort *)(param_1 + 0x1c);
  }
  uVar5 = 3;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0xc))))(*(int * PTR32 *)(param_1 + 0xc),uVar2);
  uVar2 = F_00ce9640(uVar2,uVar5);
  if (uVar2 == 0) {
    *(undefined1 *)(param_1 + 0x36d) = (undefined1)param_2;
    return 0;
  }
  if (param_2 < *(byte *)(uVar2 + 2)) {
    uVar3 = (uint)*(byte *)(param_1 + 0x36d);
    if ((uVar3 != param_2) || ((char)param_3 != '\0')) {
      if (param_2 < uVar3) {
        iVar4 = *(int *)(uVar2 + 0x1c + uVar3 * 0x10);
      }
      else {
        iVar4 = *(int *)(uVar2 + 0x18 + uVar3 * 0x10);
      }
      if ((char)param_3 != '\0') {
        iVar4 = 0;
      }
      fVar1 = *(float *)(uVar2 + 0x14 + param_2 * 0x10);
      if (iVar4 != 0) {
        uVar2 = F_00cccd90(param_1 + 0x370,fVar1,iVar4);
        *(undefined1 *)(param_1 + 0x36d) = (undefined1)param_2;
        return uVar2;
      }
      F_00cccbd0(param_1 + 0x370,fVar1);
      *(undefined1 *)(param_1 + 0x36d) = (undefined1)param_2;
    }
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf75 */
byte F_00cd30a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd30a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  bVar1 = F_00ce9390(this + 0x10);
  if (bVar1 == 0) {
    return 0;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x20))))(*(int * PTR32 *)(this + 0xc));
  if (uVar2 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*(ushort *)(this + 0x1c);
  }
  uVar4 = 3;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0xc))))(*(int * PTR32 *)(this + 0xc),uVar2);
  puVar3 = (undefined4 *)F_00ce96e0(uVar2,uVar4);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  param_1[3] = puVar3[3];
  return 1;
}

/* ref: FUN_00cd3150 */
uint F_00cd3150(unsigned int gen_a0)
{
  GEN_ENTER(0xcd3150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  bVar2 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x28)) || GEN_ISNAN((float10)*(float *)(in_ecx + 0x24));
  if (bVar2 == (bVar2 || (float10)*(float *)(in_ecx + 0x28) == (float10)*(float *)(in_ecx + 0x24)))
  {
    F_00cccc70(in_ecx + 0x20);
  }
  bVar2 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x4c)) || GEN_ISNAN((float10)*(float *)(in_ecx + 0x48));
  if (bVar2 == (bVar2 || (float10)*(float *)(in_ecx + 0x4c) == (float10)*(float *)(in_ecx + 0x48)))
  {
    F_00cccc70(in_ecx + 0x44);
  }
  bVar2 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x70)) || GEN_ISNAN((float10)*(float *)(in_ecx + 0x6c));
  if (bVar2 == (bVar2 || (float10)*(float *)(in_ecx + 0x70) == (float10)*(float *)(in_ecx + 0x6c)))
  {
    F_00cccc70(in_ecx + 0x68);
  }
  fVar4 = (float10)*(float *)(in_ecx + 0x90);
  fVar5 = (float10)*(float *)(in_ecx + 0x94);
  bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
  bVar3 = bVar2 || fVar5 == fVar4;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   (ushort)!(fVar4 <= fVar5) << 8 | (ushort)bVar2 << 10 | (ushort)bVar3 << 0xe);
  if (bVar2 == bVar3) {
    F_00cccc70(in_ecx + 0x8c);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00cd31c0 */
unsigned int F_00cd31c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd31c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x18))))((int)this + 0x20);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x44) + 0x18))))((int)this + 0x44);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x68) + 0x18))))((int)this + 0x68);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0x18))))((int)this + 0x8c);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf38 */
uint F_00cd3200(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd3200u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  F_00cccbd0(param_1 + 0xb0,param_2);
  fVar4 = (float10)param_2;
  fVar5 = (float10)param_3;
  bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
  bVar3 = bVar2 || fVar5 == fVar4;
  if (bVar2 == bVar3) {
    uVar1 = F_00cccd90(param_1 + 0xb0,param_3,param_4);
    return uVar1;
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),
                  (ushort)!(fVar4 <= fVar5) << 8 | (ushort)bVar2 << 10 | (ushort)bVar3 << 0xe);
}

/* ref: FUN_00cd3250 */
uint F_00cd3250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd3250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00d2ccf0();
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xcc))(piVar1);
  return uVar2;
}

/* ref: FUN_00cd3290 */
byte F_00cd3290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcd3290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  char cVar2;
  byte bVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 fVar9;
  float * pfVar10;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(int * PTR32 *)(gen_frame + 0x20)) = this;
  (*(byte *)(gen_frame + 0x27)) = 0;
  if ((*(int *)((int)this + 0x134) != 0) && (iVar7 = 0, *(char *)(param_1 + 3) != '\0')) {
    do {
      uVar6 = (uint)*(byte *)(param_1 + iVar7);
      bVar3 = 0;
      switch((unsigned int)(uintptr_t)(uVar6 & 0xf)) {
      case 0: ;
        bVar3 = 1;
        break;
      case 1: ;
        (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(int * PTR32 *)(gen_frame + 0x20))[0x59] / (float10)*(double *)&REFG(undefined, 0x1097260));
        bVar3 = F_00ce9ad0(uVar6,(int)((double)(float)((float10)(*(int * PTR32 *)(gen_frame + 0x20))[0x59] /
                                                        (float10)*(double *)&REFG(undefined, 0x1097260)) *
                                        *(double *)&REFG(undefined, 0x10912a8)),
                             *(undefined4 *)(param_1 + 4 + iVar7 * 4));
        break;
      case 2: ;
        pfVar10 = *(float * PTR32 *)(param_1 + 4 + iVar7 * 4);
        extraout_ST0 = ((gen_fcode *)*(gen_code32 *)((*(int * PTR32 *)(gen_frame + 0x20))[8] + 0x10))((*(int * PTR32 *)(gen_frame + 0x20)) + 8);
        fVar8 = extraout_ST0;
        goto LAB_00cd3339;
      case 3: ;
        piVar4 = (int *)F_00d2ccf0();
        pfVar10 = &(*(float *)(gen_frame + 0x4));
        ((code *)*(gen_code32 *)(*piVar4 + 0xcc))(piVar4,*param_6,param_6[1]);
        puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + 0x19c))((*(int * PTR32 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x28)))));
        piVar4 = (int *)F_00d2ccf0();
        ((code *)*(gen_code32 *)(*piVar4 + 0xcc))(piVar4,*puVar5,puVar5[1]);
        (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0xc)) - (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x8)));
        fVar8 = (float10)*(float *)(param_1 + 4 + iVar7 * 4);
        (*(float *)(gen_frame + 0x18)) = (float)(fVar8 * fVar8);
        fVar8 = (float10)(float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x8)));
        fVar9 = (float10)(float)((float10)(*(float *)(gen_frame + 0xc)) - (float10)(*(float *)(gen_frame + 0x14)));
        fVar1 = (float)(fVar9 * fVar9 + fVar8 * fVar8);
        (*(float *)(gen_frame + 0x18)) = fVar1;
        fVar8 = (float10)fVar1;
LAB_00cd3339: ;
        bVar3 = F_00ce9bb0((uint)*(byte *)(param_1 + iVar7),(float)fVar8,((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10))));
        break;
      case 4: ;
        bVar3 = F_00ce9ad0(uVar6,param_2,*(undefined4 *)(param_1 + 4 + iVar7 * 4));
        break;
      case 5: ;
        bVar3 = F_00ce9ad0(uVar6,(uint)*(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x20)) + 0x12) - param_3,
                             *(undefined4 *)(param_1 + 4 + iVar7 * 4));
        break;
      case 6: ;
        if (param_4 != 0 || param_5 != 0) {
          bVar3 = F_00ce9ad0(uVar6,(*(int * PTR32 *)(gen_frame + 0x20))[0x60],param_4);
        }
        break;
      default: ;
        bVar3 = 0;
      }
      if (iVar7 == 0) {
        (*(byte *)(gen_frame + 0x27)) = bVar3;
      }
      else {
        cVar2 = *(char *)(param_1 + 1 + iVar7);
        if (cVar2 == '\0') {
          (*(byte *)(gen_frame + 0x27)) = (*(byte *)(gen_frame + 0x27)) & bVar3;
        }
        else if (cVar2 == '\x01') {
          (*(byte *)(gen_frame + 0x27)) = (*(byte *)(gen_frame + 0x27)) | bVar3;
        }
        else {
          (*(byte *)(gen_frame + 0x27)) = bVar3;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(byte *)(param_1 + 3));
    if ((*(byte *)(gen_frame + 0x27)) != 0) {
      (*(int * PTR32 *)(gen_frame + 0x20))[0x4d] = (*(int * PTR32 *)(gen_frame + 0x20))[0x4d] + 1;
    }
  }
  bVar3 = (*(byte *)(gen_frame + 0x27));
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return bVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf86 */
uint F_00cd34d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcd34d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x154))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x150))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf62 */
uint F_00cd34f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd34f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x1c);
}

/* ref: FUN_00cd3540 */
byte F_00cd3540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd3540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(byte *)((int)this + 0x368) < 8) {
    *((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0x368) * 4 + 0x348))) = param_1;
    *(char *)((int)this + 0x368) = *(char *)((int)this + 0x368) + '\x01';
    return 1;
  }
  return 0;
}

/* ref: FUN_00cd3570 */
byte F_00cd3570(unsigned int gen_a0)
{
  GEN_ENTER(0xcd3570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (*(char *)((int)this + 0x368) != '\0') {
    do {
      bVar1 = F_00cc2c00(*(undefined4 *)((int)this + (uint)bVar2 * 4 + 0x348));
      if (bVar1 != 0) {
        return 0;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < *(byte *)((int)this + 0x368));
  }
  return 1;
}

/* ref: FUN_00cd3600 */
byte F_00cd3600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd3600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar2 = *(int *)((int)this + iVar3 * 8);
    if (iVar2 < 0) {
      pcVar1 = (char *)((int)this + iVar3 * 8 + 4);
      *pcVar1 = *pcVar1 + (char)param_2;
      *(int *)((int)this + iVar3 * 8) = param_1;
      *(char *)((int)this + 0x80) = *(char *)((int)this + 0x80) + '\x01';
      return 1;
    }
    if (iVar2 == param_1) break;
    iVar3 = iVar3 + 1;
    if (0xf < iVar3) {
      return 0;
    }
  }
  pcVar1 = (char *)((int)this + iVar3 * 8 + 4);
  *pcVar1 = *pcVar1 + (char)param_2;
  return 1;
}

/* ref: FUN_00cd3660 */
byte F_00cd3660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd3660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar2 = 0;
  if (*(byte *)(param_1 + 0x20) != 0) {
    piVar4 = param_1;
    do {
      uVar3 = 0;
      if (*(byte *)((int)this + 0x80) == 0) {
        return 0;
      }
      piVar1 = this;
      while (*piVar1 != *piVar4) {
        uVar3 = uVar3 + 1;
        piVar1 = piVar1 + 2;
        if (*(byte *)((int)this + 0x80) <= uVar3) {
          return 0;
        }
      }
      if (*(byte *)(piVar1 + 1) < *(byte *)(piVar4 + 1)) {
        return 0;
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar2 < *(byte *)(param_1 + 0x20));
  }
  return 1;
}

/* ref: FUN_00cd36d0 */
unsigned int F_00cd36d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd36d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char * pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(char *)(param_1 + 0x80) != '\0') {
    do {
      cVar2 = *(char *)(param_1 + 4 + uVar6 * 8);
      iVar3 = *(int *)(param_1 + uVar6 * 8);
      iVar5 = 0;
      do {
        iVar4 = *(int *)((int)this + iVar5 * 8);
        if (iVar4 < 0) {
          pcVar1 = (char *)((int)this + iVar5 * 8 + 4);
          *pcVar1 = *pcVar1 + cVar2;
          *(int *)((int)this + iVar5 * 8) = iVar3;
          *(char *)((int)this + 0x80) = *(char *)((int)this + 0x80) + '\x01';
          break;
        }
        if (iVar4 == iVar3) {
          pcVar1 = (char *)((int)this + iVar5 * 8 + 4);
          *pcVar1 = *pcVar1 + cVar2;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x10);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(param_1 + 0x80));
  }
  return 0;
}

/* ref: FUN_00cd3730 */
byte F_00cd3730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd3730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(byte *)((int)this + 0x80) != 0) {
    do {
      if ((param_1 == *(int *)((int)this + uVar1 * 8)) &&
         (*(char *)((int)this + uVar1 * 8 + 4) != '\0')) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)((int)this + 0x80));
  }
  return 0;
}

/* ref: FUN_00cd3770 */
byte F_00cd3770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd3770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(byte *)(param_1 + 0x80) != 0) {
    do {
      uVar1 = 0;
      if (*(byte *)((int)this + 0x80) != 0) {
        do {
          if ((*(int *)(param_1 + uVar2 * 8) == *(int *)((int)this + uVar1 * 8)) &&
             (*(char *)((int)this + uVar1 * 8 + 4) != '\0')) {
            return 1;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(byte *)((int)this + 0x80));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x80));
  }
  return 0;
}

/* ref: FUN_00cd37e0 */
uint F_00cd37e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd37e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = 0;
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x8)) = (uint)this & 0xffffff00;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this);
  if ((char)uVar2 != '\0') {
    uVar4 = 0;
    do {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this,(*(uint *)(gen_frame + 0x8)));
      if ((uVar2 != 0) && (piVar1 = *(int * PTR32 *)(uVar2 + 4), piVar1 != (int *)0x0)) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        if ((char)uVar2 == '\0') {
          uVar4 = uVar4 + 1;
        }
      }
      bVar3 = bVar3 + 1;
      (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),bVar3);
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this);
    } while (bVar3 < (byte)uVar2);
  }
  return uVar4;
}

/* ref: FUN_00cd38f0 */
uint F_00cd38f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcd38f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  byte bVar5;
  int iVar6;
  undefined * this_00;
  ushort * puVar7;
  uint uVar8;
  int * piVar9;
  ulonglong uVar10;
  float fVar11;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  *(undefined4 *)((int)this + 8) = param_1;
  (*(int *)(gen_frame + 0x20)) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112c6ec));
  *(int *)((int)this + 0xc) = param_2;
  F_00cccb10((int)this + 0x20,(float)(float10)1);
  F_00cccb10((int)this + 0x44,(float)(float10)1);
  F_00cccb10((int)this + 0x68,(float)(float10)0);
  F_00cccb10((int)this + 0x8c,(float)(float10)0);
  F_00cccb10((int)this + 0xb0,(float)(float10)1);
  fVar4 = (float10)0;
  *(float *)((int)this + 0xd4) = (float)fVar4;
  *(float *)((int)this + 0xd8) = (float)fVar4;
  *(float *)((int)this + 0xdc) = (float)fVar4;
  fVar3 = (float10)1;
  *(float *)((int)this + 0xe0) = (float)fVar3;
  *(float *)((int)this + 0xf0) = (float)fVar3;
  *(float *)((int)this + 0xe4) = (float)fVar4;
  *(float *)((int)this + 0xe8) = (float)fVar4;
  *(float *)((int)this + 0xec) = (float)fVar4;
  *(undefined4 *)((int)this + 0xf4) = REFG(float, 0x1090708);
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(float *)((int)this + 0x100) = (float)fVar3;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(float *)((int)this + 0x104) = (float)fVar3;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(float *)((int)this + 0x108) = (float)fVar3;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined1 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined1 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  F_00cccb10((int)this + 0x138,(float)fVar3);
  *(float *)((int)this + 0x15c) = (float)(float10)0;
  *(undefined4 *)((int)this + 0x160) = 0xffffffff;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x194));
  *(undefined1 *)((int)this + 0x1ac) = 1;
  *(byte *)((int)this + 0x36c) = *(byte *)((int)this + 0x36c) & 0xfe;
  *(undefined1 *)((int)this + 0x2b8) = (undefined1)param_7;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0xffffffff;
  *(undefined1 *)((int)this + 0x1c4) = (undefined1)param_8;
  *(undefined1 *)((int)this + 0x1c5) = 0;
  *(undefined1 *)((int)this + 0x2b9) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  *(undefined1 *)((int)this + 0x340) = 0;
  *(undefined4 *)((int)this + 0x344) = 0xffffffff;
  *(undefined2 *)((int)this + 0x36a) = 0;
  *(undefined1 *)((int)this + 0x36d) = 0;
  F_00cccb10((int)this + 0x370,(float)(float10)1);
  REFG(char, 0x15d8c00) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8be8));
  REFG(undefined4, 0x15d8be4) = gen_bits2f((int)gen_fl2bits(REFG(undefined4, 0x15d8be4)) + 1);
  if (REFG(undefined4, 0x15d8be4) == 0.0) {
    REFG(undefined4, 0x15d8be4) = 1.4013e-45;
  }
  (*(float *)(gen_frame + 0x1c)) = REFG(undefined4, 0x15d8be4);
  if (REFG(char, 0x15d8c00) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8be8));
  }
  *(float *)((int)this + 0x1b0) = (*(float *)(gen_frame + 0x1c));
  F_00ce1250(*(undefined * PTR32 *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  F_00c48350((undefined *)((int)this + 0x228),0,0x90);
  if ((*(int *)(gen_frame + 0x20)) == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  else {
    F_00cd1df0(this,(*(int *)(gen_frame + 0x20)));
  }
  *(undefined4 *)((int)this + 0x348) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x350) = 0xffffffff;
  *(undefined4 *)((int)this + 0x354) = 0xffffffff;
  *(undefined4 *)((int)this + 0x358) = 0xffffffff;
  *(undefined4 *)((int)this + 0x35c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x360) = 0xffffffff;
  *(undefined4 *)((int)this + 0x364) = 0xffffffff;
  *(undefined1 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  F_00c48350((undefined *)((int)this + 0x2c0),0,0x80);
  iVar6 = 0;
  *(undefined4 *)((int)this + 700) = 0;
  if (0 < param_5) {
    piVar9 = (int *)((int)this + 0x2c0);
    do {
      iVar2 = *(int *)(param_4 + iVar6 * 4);
      if (iVar2 == 0) break;
      *piVar9 = iVar2;
      *(int *)((int)this + 700) = *(int *)((int)this + 700) + 1;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < param_5);
  }
  if ((char)param_6 != '\0') {
    if (1 < *(uint *)(param_2 + 0xc)) {
      *(undefined4 *)((int)this + 0x100) = *(undefined4 *)((int)this + 0x18);
      this_00 = (undefined *)F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),(uint)*(byte *)((int)this + 0x11));
      fVar11 = F_00cbb330(this_00);
      (*(float *)(gen_frame + 0x1c)) = fVar11;
      F_00cccc10((int)this + 0x20,fVar11);
      F_00cbaf10(((undefined1 *)(gen_frame + 0x0)));
      *(undefined1 *)((int)this + 0x128) = 1;
      F_00cd2250(this,(float)(float10)1,0);
    }
    puVar7 = (ushort *)F_00ce9920((*(int *)(gen_frame + 0x20)),0,3);
    if (*(int *)((int)this + 700) == 1) {
      *(uint *)((int)this + 0x344) = (uint)*puVar7;
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    if (0 < *(int *)((int)this + 700)) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)((int)this + 0x2c0);
      do {
        F_00cd8640((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)),this,(*(int *)(gen_frame + 0x20)));
        uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x10))))
                          (*(int * PTR32 *)((int)this + 0xc),(uint)*puVar7);
        if (uVar8 != 0) {
          F_00cd78c0((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)),uVar8,(uint)*puVar7);
        }
        if ((puVar7[1] & 0x4000) == 0) {
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x14))))
                            (*(int * PTR32 *)((int)this + 0xc),(uint)puVar7[1]);
          (*(uint *)(gen_frame + 0x10)) = uVar8;
          if (uVar8 != 0) {
            piVar9 = (int *)F_00d2ccd0();
            (*(int * PTR32 *)(gen_frame + 0x14)) = piVar9;
            ((code *)*(gen_code32 *)(*piVar9 + 0x4c))(piVar9,((undefined1 *)(gen_frame + 0x0)),(uint)*(byte *)((int)this + 0x11));
            uVar8 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0xd4))((*(int * PTR32 *)(gen_frame + 0x14)));
            if (((char)uVar8 == '\0') || ((*(byte *)((int)this + 0x14) & 2) == 0)) {
              uVar8 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0xcc))((*(int * PTR32 *)(gen_frame + 0x14)));
              if ((char)uVar8 != '\0') {
                bVar5 = F_00cbb420(((undefined1 *)(gen_frame + 0x0)));
                if (bVar5 != 0) goto LAB_00cd3d2f;
              }
              fVar11 = (*(float *)(gen_frame + 0x1c));
              (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 0)) = 0;
              (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)gen_fl2bits(fVar11) & 0xffffff00);
            }
            else {
LAB_00cd3d2f: ;
              (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 0)) = 1;
              (*(float *)(gen_frame + 0x1c)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x1c)), 1, 3),1));
            }
            F_00cbaf10(((undefined1 *)(gen_frame + 0x0)));
            F_00cd7980((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x10)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))),param_7);
          }
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 1;
        iVar6 = (*(int *)(gen_frame + 0x20)) + 1;
        puVar7 = puVar7 + 2;
        (*(int *)(gen_frame + 0x20)) = iVar6;
      } while (iVar6 < *(int *)((int)this + 700));
    }
  }
  iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10)));
  uVar1 = *(ushort *)((int)this + 0x1c);
  (*(undefined1 *)(gen_frame + 0x24)) = *(undefined1 *)((int)this + 0x13);
  uVar10 = F_00427d90();
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(uint *)(gen_frame + 0x34)) = (uint)*(byte *)((int)this + 0x11);
  (*(ulonglong *)(gen_frame + 0x38)) = uVar10;
  (*(undefined4 *)(gen_frame + 0x28)) = 0x10001;
  (*(int *)(gen_frame + 0x30)) = iVar6 * 1000 + (uint)uVar1;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined1 *)(gen_frame + 0x48)) = (*(undefined1 *)(gen_frame + 0x24));
  (*(undefined1 *)(gen_frame + 0x49)) = 0;
  (*(undefined2 *)(gen_frame + 0x4a)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x28)),0x30);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00cd3df0 */
uint F_00cd3df0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd3df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ushort uVar1;
  undefined4 uVar2;
  int * piVar3;
  byte bVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  uint extraout_EAX = 0;
  int iVar9;
  short * psVar10;
  
  uVar1 = *(ushort *)((int)this + 0x1c);
  bVar4 = *(byte *)((int)this + 0x11);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112c6ec));
  iVar9 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10)));
  (*(ulonglong *)(gen_frame + 0x1c)) = F_00427d90();
  uVar2 = *(undefined4 *)((int)this + 8);
  (*(int *)(gen_frame + 0x14)) = iVar9 * 1000 + (uint)uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x10002;
  (*(undefined4 *)(gen_frame + 0x10)) = uVar2;
  (*(uint *)(gen_frame + 0x18)) = (uint)bVar4;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0xc)),0x20);
  if (*(int *)((int)this + 0x124) != 0) {
    pvVar5 = (undefined *)F_00d2dd30(((undefined1 *)(gen_frame + 0x2c)),*(int *)((int)this + 0x124));
    F_00cbd280(pvVar5);
    F_00cbbdb0(((undefined1 *)(gen_frame + 0x2c)));
  }
  F_00ce1280(*(undefined * PTR32 *)((int)this + 0xc));
  *(undefined1 *)((int)this + 0x1ac) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x194));
  piVar8 = (int *)((int)this + 0x168);
  iVar9 = 4;
  do {
    if (*piVar8 != 0) {
      piVar3 = (int *)*piVar8;
      if (*(int *)((int)this + 0x10c) == 0) {
        ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,*(undefined4 *)((int)this + 8));
      }
      else {
        ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,*(int *)((int)this + 0x10c));
      }
    }
    piVar8 = piVar8 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  bVar4 = F_00ce9350((int)this + 0x10);
  if ((bVar4 != 0) && (*(char *)((int)this + 0x2b9) != '\0')) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x20))))(*(int * PTR32 *)((int)this + 0xc));
    if (uVar6 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)*(ushort *)((int)this + 0x1c);
    }
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0xc))))(*(int * PTR32 *)((int)this + 0xc));
    uVar6 = F_00ce95f0(uVar7,uVar6);
    pvVar5 = (undefined *)F_00cbf660((uint)*(byte *)(uVar6 + 1));
    if (pvVar5 != (undefined *)0x0) {
      F_00cc9590(pvVar5,*(undefined4 *)(uVar6 + 4));
    }
  }
  iVar9 = 0;
  if (*(char *)((int)this + 0x1bb) != '\0') {
    psVar10 = (short *)((int)this + 0x1bc);
    do {
      piVar8 = (int *)F_00d2ccd0();
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x90))(piVar8,(int)*psVar10);
      if (uVar6 != 0) {
        *(short *)(uVar6 + 0x20) = *(short *)(uVar6 + 0x20) + -1;
      }
      iVar9 = iVar9 + 1;
      psVar10 = psVar10 + 1;
    } while (iVar9 < (int)(uint)*(byte *)((int)this + 0x1bb));
  }
  if (*(char *)((int)this + 0x1ac) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x194));
  }
  F_00cccb40((int)this + 0x370);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x194));
  F_00cccb40((int)this + 0x138);
  F_00cccb40((int)this + 0xb0);
  F_00cccb40((int)this + 0x8c);
  F_00cccb40((int)this + 0x68);
  F_00cccb40((int)this + 0x44);
  F_00cccb40((int)this + 0x20);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[104])REFP(0x112c544));
  return extraout_EAX;
}

/* ref: FUN_00cd3fd0 */
uint F_00cd3fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd3fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar3 = F_00427d90();
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 8);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x10004;
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  (*(ulonglong *)(gen_frame + 0x18)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  uVar1 = F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x8)),0x30);
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0xf8) = 8;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_00cd4080 */
uint F_00cd4080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd4080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar3 = F_00427d90();
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 8);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x10005;
  (*(ulonglong *)(gen_frame + 0x18)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  uVar1 = F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x8)),0x30);
  *(uint *)((int)this + 0xf8) = *(uint *)((int)this + 0xf8) | 0x10;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_00cd4120 */
uint F_00cd4120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd4120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar3 = F_00427d90();
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 8);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x10006;
  (*(ulonglong *)(gen_frame + 0x18)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x8)),0x30);
  *(uint *)((int)this + 0xf8) = *(uint *)((int)this + 0xf8) & 0xffffffef;
  uVar3 = F_00427d90();
  *(ulonglong *)((int)this + 0x118) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf72 */
uint F_00cd41d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd41d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined * pRVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar2 = this + 0x2c0;
    do {
      if (*(int *)(*(int *)pRVar2 + 0x1b4) == param_1) {
        return *((uint *)GEN_TOP((*(int *)(this + iVar1 * 4 + 0x2c0) + 0x1c)));
      }
      iVar1 = iVar1 + 1;
      pRVar2 = pRVar2 + 4;
    } while (iVar1 < *(int *)(this + 700));
  }
  return 0xffffffff;
}

/* ref: FUN_00cd4220 */
byte F_00cd4220(unsigned int gen_a0)
{
  GEN_ENTER(0xcd4220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this);
  bVar3 = 0;
  (*(uint *)(gen_frame + 0x7)) = (*(uint *)(gen_frame + 0x7)) & 0xffffff00;
  if ((byte)uVar1 != 0) {
    do {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 200))(this,(*(uint *)(gen_frame + 0x7)));
      if ((uVar2 == 0) || (*(int *)(uVar2 + 0x24) == 0)) {
        return 0;
      }
      bVar3 = bVar3 + 1;
      (*(uint *)(gen_frame + 0x7)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x7)), 1, 3),bVar3);
    } while (bVar3 < (byte)uVar1);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf27 */
unsigned int F_00cd4280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd4280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * pRVar2;
  
  this[0x1ac] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x194));
  iVar1 = 0;
  pRVar2 = this + 0x168;
  do {
    if (*(int *)pRVar2 == 0) {
      *(undefined4 *)(this + iVar1 * 4 + 0x168) = param_1;
      break;
    }
    iVar1 = iVar1 + 1;
    pRVar2 = pRVar2 + 4;
  } while (iVar1 < 4);
  if (this[0x1ac] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x194));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf28 */
unsigned int F_00cd42d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd42d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined * pRVar2;
  
  this[0x1ac] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x194));
  iVar1 = 0;
  pRVar2 = this + 0x168;
  do {
    if (*(int *)pRVar2 == param_1) {
      *(undefined4 *)(this + iVar1 * 4 + 0x168) = 0;
      break;
    }
    iVar1 = iVar1 + 1;
    pRVar2 = pRVar2 + 4;
  } while (iVar1 < 4);
  if (this[0x1ac] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x194));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf32 */
uint F_00cd4320(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd4320u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int * in_ecx;
  int iVar1;
  float10 fVar2;
  uint uVar3;
  float10 fVar4;
  float10 extraout_ST0;
  
  fVar4 = (float10)param_2;
  fVar2 = (float10)0;
  if (fVar4 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar4)) && fVar2 != fVar4)) {
    param_2 = (float)fVar2;
  }
  in_ecx = param_1 + 0x23;
  if (param_3 == 0) {
    F_00cccbd0(in_ecx,param_2);
  }
  else {
    F_00cccd90(in_ecx,param_2,param_3);
  }
  iVar1 = *param_1;
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*in_ecx + 0x10))(in_ecx);
  uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x1b0))(param_1,(undefined4)gen_fl2bits((float)extraout_ST0));
  return uVar3;
}

/* ref: FUN_00cd4390 */
byte F_00cd4390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd4390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined4 *)((int)this + 0x134) = 0;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    if ((*(byte *)((int)this + 0x14) & 0x80) != 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
        F_00ccaf80(&REFG(char, 0x15d7798));
      }
      if (REFG(char, 0x15d7798) != '\0') {
        F_00ccb2c0(((undefined1 *)(gen_frame + 0xc)));
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798));
        }
        uVar1 = F_00cca3f0(&REFG(char, 0x15d7798),((undefined1 *)(gen_frame + 0xc)),(uint)*(ushort *)((int)this + 0x16));
        if ((uVar1 != 0) || ((*(short *)(gen_frame + 0x10)) != *(short *)(param_1 + 4))) goto LAB_00cd442b;
        goto LAB_00cd4473;
      }
    }
    uVar1 = F_00ce9a60(*(undefined4 *)((int)this + 0xc),(int)this + 0x10);
    if ((uVar1 == 0) || (*(short *)(param_1 + 4) != *(short *)(uVar1 + 2))) {
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return 0;
    }
  }
LAB_00cd4473: ;
  if ((*(byte *)(param_1 + 6) & 2) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
    if (uVar1 < *(uint *)(param_1 + 8)) goto LAB_00cd442b;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
    if (*(uint *)(param_1 + 0xc) < uVar1) goto LAB_00cd442b;
  }
  if ((*(byte *)(param_1 + 6) & 0x10) != 0) {
    if (((param_2 == 0 && param_3 == 0) || (*(int *)((int)this + 0x180) != param_2)) ||
       (*(int *)((int)this + 0x184) != param_3)) {
LAB_00cd442b: ;
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return 0;
    }
  }
  *(int *)((int)this + 0x134) = *(int *)((int)this + 0x134) + 1;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 1;
}

/* ref: FUN_00cd44f0 */
byte F_00cd44f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd44f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    if ((*((byte *)GEN_TOP((*(int *)((int)this + 0xc) + 0x48))) & 8) == 0) {
      bVar1 = F_00cd4220(this);
      if (bVar1 == 0) {
        return 0;
      }
      ((code *)*(gen_code32 *)(*(int *)this + 0x124))(this,(int)this + 0x1b8,0);
      return 1;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x1b8) = *param_1;
    *(undefined4 *)((int)this + 0x1bc) = param_1[1];
    *(undefined4 *)((int)this + 0x1c0) = param_1[2];
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf106 */
byte F_00cd4560(unsigned int gen_a0)
{
  GEN_ENTER(0xcd4560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  undefined * pRVar5;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x1ac))(this);
  if ((char)uVar2 == '\0') {
    return 0;
  }
  if ((*((byte *)GEN_TOP((*(int *)(this + 0xc) + 0x48))) & 8) == 0) {
    bVar1 = F_00cd4220(this);
    if (bVar1 == 0) {
      return 0;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x124))(this,this + 0x1b8,0);
  }
  iVar4 = 0;
  if (this[0x1bb] != (undefined1)0x0) {
    pRVar5 = this + 0x1bc;
    do {
      piVar3 = (int *)F_00d2ccd0();
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x90))(piVar3,(int)*(short *)pRVar5);
      if (uVar2 != 0) {
        *(short *)(uVar2 + 0x20) = *(short *)(uVar2 + 0x20) + 1;
      }
      iVar4 = iVar4 + 1;
      pRVar5 = pRVar5 + 2;
    } while (iVar4 < (int)(uint)(byte)this[0x1bb]);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf4 */
uint F_00cd45f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd45f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float10 fVar1;
  uint uVar2;
  undefined * pRVar3;
  int iVar4;
  float10 extraout_ST0;
  
  if ((param_1 != 0) && ((*(uint *)(this + 0xf8) >> 4 & 1) == 0)) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x10))))(this + 0x20);
    fVar1 = (float10)0;
    if ((GEN_ISNAN(fVar1) || GEN_ISNAN(extraout_ST0)) ==
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(extraout_ST0)) || fVar1 == extraout_ST0)) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,(undefined4)gen_fl2bits((float)fVar1),param_1);
      uVar2 = F_00cd3fd0(this,param_1);
      return uVar2;
    }
  }
  uVar2 = F_00cd3fd0(this,0);
  iVar4 = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar3 = this + 0x2c0;
    do {
      uVar2 = F_00cd87f0(*(undefined * PTR32 *)pRVar3,0);
      iVar4 = iVar4 + 1;
      pRVar3 = pRVar3 + 4;
    } while (iVar4 < *(int *)(this + 700));
  }
  return uVar2;
}

/* ref: FUN_00cd4680 */
uint F_00cd4680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcd4680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: FUN_00cd4720 */
uint F_00cd4720(unsigned int gen_a0)
{
  GEN_ENTER(0xcd4720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined * this_00;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  if ((*(uint *)((int)this + 0xf8) >> 3 & 1) != 0) {
    return 5;
  }
  uVar6 = F_00427d90();
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
  (*(uint *)(gen_frame + 0x44)) = uVar3;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  uVar7 = *(undefined4 *)((int)this + 8);
  (*(uint *)(gen_frame + 0xc)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10003;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar7;
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x44));
  (*(ulonglong *)(gen_frame + 0x14)) = uVar6;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x4)),0x20);
  iVar1 = *(int *)((int)this + 0xf8);
  if (iVar1 == 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0xc);
    if ((*(byte *)(piVar4 + 0x12) & 8) != 0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x88))(piVar4);
      if ((char)uVar3 == '\0') goto LAB_00cd4897;
    }
    piVar4 = (int *)F_00d2ccd0();
    iVar1 = *piVar4;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
    ((code *)*(gen_code32 *)(iVar1 + 0x4c))(piVar4,((undefined1 *)(gen_frame + 0x34)),uVar3);
    uVar3 = F_00cbaf80(((undefined1 *)(gen_frame + 0x34)));
    if ((int)uVar3 < 1) {
      F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x4b)),"0 < busCtrl.GetMaxInputs()","","RootSound.cpp",0x321,
                   "SQEX::CDev::Engine::Sd::Driver::RootSound::StartCore");
    }
    uVar3 = F_00cbaf80(((undefined1 *)(gen_frame + 0x34)));
    uVar5 = F_00cbafb0(((undefined1 *)(gen_frame + 0x34)));
    if ((int)uVar3 < (int)uVar5) {
      uVar3 = F_00cbb480(((undefined1 *)(gen_frame + 0x34)),1);
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this);
      if (uVar3 != uVar5) {
        uVar7 = 0;
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4,((undefined1 *)(gen_frame + 0x24)),uVar3)));
        F_00cbdbf0(this_00,uVar7);
        F_00cbbdb0(((undefined1 *)(gen_frame + 0x24)));
      }
      *(undefined4 *)((int)this + 0xf8) = 1;
      F_00cbaf10(((undefined1 *)(gen_frame + 0x34)));
      return 1;
    }
    F_00cbaf10(((undefined1 *)(gen_frame + 0x34)));
  }
  else {
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 2) {
      return 2;
    }
  }
LAB_00cd4897: ;
  bVar2 = F_00ce9350((int)this + 0x10);
  if ((bVar2 != 0) && (*(char *)((int)this + 0x2b9) == '\0')) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x20))))(*(int * PTR32 *)((int)this + 0xc));
    if (uVar3 == 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*(ushort *)((int)this + 0x1c);
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0xc))))(*(int * PTR32 *)((int)this + 0xc));
    uVar3 = F_00ce95f0(uVar5,uVar3);
    uVar5 = F_00cbf660((uint)*(byte *)(uVar3 + 1));
    if (uVar5 != 0) {
      *(undefined1 *)((int)this + 0x2b9) = 1;
      F_00cc94b0(uVar5,*(float *)(uVar3 + 8),*(undefined4 *)(uVar3 + 4));
    }
  }
  *(uint *)((int)this + 0xf8) = *(uint *)((int)this + 0xf8) | 4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf81 */
byte F_00cd4920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd4920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * pRVar4;
  uint uVar5;
  byte local_5;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == *(uint *)(this + 0xc)) {
    return 1;
  }
  uVar3 = (uint)(byte)this[0x1bb];
  local_5 = 0;
  if (4 < uVar3) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd4680));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("(usingExtBanksCount <= sizeof(maxUseVoiceInfo_.useRefBanks)/sizeof(maxUseVoiceInfo_.useRefBanks[0])) && \"External Bank Reference overflow!\""
                    ,"","RootSound.cpp",0x610,
                    "SQEX::CDev::Engine::Sd::Driver::RootSound::IsBelongedToBank");
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    pRVar4 = this + 0x1bc;
    while( true ) {
      piVar1 = (int *)F_00d2ccd0();
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x90))(piVar1,(int)*(short *)pRVar4);
      if ((uVar2 != 0) && (param_1 == uVar2)) break;
      uVar5 = uVar5 + 1;
      pRVar4 = pRVar4 + 2;
      if (uVar3 <= uVar5) {
        return 0;
      }
    }
    local_5 = 1;
  }
  return local_5;
}

/* ref: FUN_00cd49f0 */
uint F_00cd49f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd49f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x240];
  int * piVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_ECX = 0;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x238)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x23c);
  uVar4 = F_00cc6440(((int *)(gen_frame + 0x44)),0x10);
  (*(uint *)(gen_frame + 0x88)) = uVar4;
  if (uVar4 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
    return 0;
  }
  if (((int *)(gen_frame + 0x44))[0] == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd4680));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112c4cc),"","RootSound.cpp",0x81e,
                    "SQEX::CDev::Engine::Sd::Driver::RootSound::RequestStopSoundsForVoiceResWait");
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      if ((undefined *)((int *)(gen_frame + 0x44))[(int)(uVar5)] != this) {
        piVar1 = (int *)((int *)(gen_frame + 0x44))[(int)(uVar5)];
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xc0))(this);
        (*(byte *)(gen_frame + 0x93)) = (byte)uVar4;
        uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0xc0))(piVar1);
        uVar4 = (*(uint *)(gen_frame + 0x88));
        if ((*(byte *)(gen_frame + 0x93)) < (byte)uVar5) {
          F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
          return 2;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  iVar6 = 0;
  ((undefined1 *)(gen_frame + 0x124))[0x7c] = 0;
  do {
    *(undefined4 *)(((undefined1 *)(gen_frame + 0x124)) + iVar6 * 8 + -4) = 0xffffffff;
    ((undefined1 *)(gen_frame + 0x124))[(int)(iVar6 * 8)] = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  (*(undefined4 *)(gen_frame + 0x1a2)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x1a6)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0x1aa)) = 0;
  ((undefined1 *)(gen_frame + 0x1b0))[0x7c] = 0;
  iVar6 = 0;
  do {
    *(undefined4 *)(((undefined1 *)(gen_frame + 0x1b0)) + iVar6 * 8 + -4) = 0xffffffff;
    ((undefined1 *)(gen_frame + 0x1b0))[(int)(iVar6 * 8)] = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  (*(undefined1 *)(gen_frame + 0x236)) = 0;
  (*(undefined4 *)(gen_frame + 0x22e)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x232)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x8c)) = 0;
  F_00c48350(((int *)(gen_frame + 0x4)),0,0x40);
  (*(uint *)(gen_frame + 0x84)) = 0;
  if (uVar4 != 0) {
    do {
      piVar1 = (int *)((int *)(gen_frame + 0x44))[(int)((*(uint *)(gen_frame + 0x84)))];
      if ((((piVar1 != this) && ((*(byte *)(piVar1 + 0xdb) & 1) == 0)) &&
          ((*(byte *)(piVar1 + 0x3e) & 3) == 0)) &&
         ((REFG(char, 0x134ced0) == '\0' ||
          (uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x150))(piVar1), (char)uVar4 == '\0')))) {
        ((undefined1 *)(gen_frame + 0x98))[0x7c] = 0;
        iVar6 = 0;
        do {
          *(undefined4 *)(((undefined1 *)(gen_frame + 0x98)) + iVar6 * 8 + -4) = 0xffffffff;
          ((undefined1 *)(gen_frame + 0x98))[(int)(iVar6 * 8)] = 0;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x10);
        (*(undefined1 *)(gen_frame + 0x11e)) = 0;
        (*(undefined4 *)(gen_frame + 0x116)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x11a)) = 0xffffffff;
        bVar3 = F_00cd3770(&(*(undefined4 *)(gen_frame + 0x94)),&(*(undefined4 *)(gen_frame + 0x120)));
        if (bVar3 != 0) {
          F_00cd36d0(&(*(undefined4 *)(gen_frame + 0x1ac)),extraout_ECX);
          ((int *)(gen_frame + 0x4))[(int)((*(uint *)(gen_frame + 0x8c)))] = (int)piVar1;
          (*(uint *)(gen_frame + 0x8c)) = (*(uint *)(gen_frame + 0x8c)) + 1;
          bVar3 = F_00cd3660(&(*(undefined4 *)(gen_frame + 0x1ac)),&(*(undefined4 *)(gen_frame + 0x120)));
          if (bVar3 != 0) {
            uVar4 = 0;
            if ((*(uint *)(gen_frame + 0x8c)) != 0) {
              do {
                piVar1 = (int *)((int *)(gen_frame + 0x4))[(int)(uVar4)];
                pcVar2 = *(gen_code32 *)(*piVar1 + 0xd0);
                *(byte *)(piVar1 + 0xdb) = *(byte *)(piVar1 + 0xdb) | 1;
                uVar7 = 0;
                uVar5 = (*pcVar2)(piVar1);
                F_00cc2ec0(uVar5,uVar7);
                uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0xd0))(piVar1);
                if (*(byte *)((int)this + 0x368) < 8) {
                  *((uint *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0x368) * 4 + 0x348))) = uVar5;
                  *(char *)((int)this + 0x368) = *(char *)((int)this + 0x368) + '\x01';
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < (*(uint *)(gen_frame + 0x8c)));
            }
            F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
            return 1;
          }
        }
      }
      uVar4 = (*(uint *)(gen_frame + 0x84)) + 1;
      (*(uint *)(gen_frame + 0x84)) = uVar4;
    } while (uVar4 < (*(uint *)(gen_frame + 0x88)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
  return 0;
}

/* ref: FUN_00cd4d10 */
byte F_00cd4d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd4d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  
  *(short *)((int)this + 0x36a) = *(short *)((int)this + 0x36a) + (short)param_1;
  if (1000 < *(ushort *)((int)this + 0x36a)) {
    pcVar1 = *(gen_code32 *)(*(int *)this + 0xd0);
    uVar5 = 0;
    *(undefined4 *)((int)this + 0xf8) = 4;
    uVar3 = (*pcVar1)(this);
    F_00cc2ec0(uVar3,uVar5);
    *(undefined2 *)((int)this + 0x36a) = 0;
  }
  bVar4 = 0;
  if (*(char *)((int)this + 0x368) != '\0') {
    do {
      bVar2 = F_00cc2c00(*(undefined4 *)((int)this + (uint)bVar4 * 4 + 0x348));
      if (bVar2 != 0) {
        return 0;
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < *(byte *)((int)this + 0x368));
  }
  pcVar1 = *(gen_code32 *)(*(int *)this + 4);
  *(undefined4 *)((int)this + 0xf8) = 4;
  (*pcVar1)(this);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf1 */
uint F_00cd4f90(unsigned int gen_a0)
{
  GEN_ENTER(0xcd4f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined * this_00;
  undefined * pRVar2;
  int iVar3;
  float10 extraout_ST0;
  
  F_00cd4720(this);
  if (((byte)this[0xf8] & 1) != 0) {
    return 1;
  }
  if ((*(uint *)(this + 0xf8) >> 1 & 1) != 0) {
    return 2;
  }
  this_00 = (undefined *)F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),(uint)(byte)this[0x11]);
  bVar1 = F_00cbb1b0(this_00);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  if (bVar1 != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0);
    F_00cd3150(this);
    iVar3 = 0;
    if (0 < *(int *)(this + 700)) {
      pRVar2 = this + 0x2c0;
      do {
        F_00cd6460(*(undefined * PTR32 *)pRVar2);
        iVar3 = iVar3 + 1;
        pRVar2 = pRVar2 + 4;
      } while (iVar3 < *(int *)(this + 700));
    }
  }
  if (-1 < *(int *)(this + 0x160)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,(undefined4)gen_fl2bits((float)(float10)0),0);
    ((code *)*(gen_code32 *)(*(int *)this + 0x38))
              (this,*(undefined4 *)(this + 0x15c),*(undefined4 *)(this + 0x160));
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x1a0))(this);
  iVar3 = *(int *)this;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10))))(this + 0x8c);
  ((code *)*(gen_code32 *)(iVar3 + 0x1b0))(this,(undefined4)gen_fl2bits((float)extraout_ST0));
  ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this,(uint)(byte)this[0x36d],1);
  if ((this[0x340] != (undefined1)0x0) && (iVar3 = 0, 0 < *(int *)(this + 700))) {
    pRVar2 = this + 0x2c0;
    do {
      F_00cd8d60(*(undefined * PTR32 *)pRVar2,iVar3,1);
      iVar3 = iVar3 + 1;
      pRVar2 = pRVar2 + 4;
    } while (iVar3 < *(int *)(this + 700));
  }
  return 0;
}

/* ref: FUN_00cd58a0 */
uint F_00cd58a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd58a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  longlong uStack_18;
  
  uStack_18 = CONCAT44(param_2,param_1);
  *(int *)this = (int)((ulonglong)(uStack_18 * 300000) / 1000000);
  return (uint)this;
}

/* ref: FUN_00cd58e0 */
uint F_00cd58e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd58e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(int *)this = *(int *)this + *param_1;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ISound::vf0 */
uint F_00cd5910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[104])REFP(0x112c544));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd5950 */
byte F_00cd5950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5950u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x22) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00cd5a20 */
uint F_00cd5a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5a20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (uint)((*(uint *)((*(int *)&gen_args[0]) + 0xf8) & (*(uint *)&gen_args[1])) != 0);
}

