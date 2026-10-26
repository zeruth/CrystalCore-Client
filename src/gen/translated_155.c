#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00cb0740 */
float10 F_00cb0740(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0740u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if ((ushort)param_1 == 0) {
    return (float10)0;
  }
  return ((float10)GEN_TOD(gen_bits2f(((param_1 & 0x8000) * 8 | param_1 & 0x3ff) << 0xd |
                             (((ushort)param_1 >> 10 & 0x1f) + 0x70) * 0x800000)));
}

/* ref: FUN_00cb0790 */
ushort F_00cb0790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((ushort *)GEN_TOP((*(int *)(in_ecx + 0x24) + 4 + param_2 * 6)));
}

/* ref: FUN_00cb07c0 */
uint F_00cb07c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb07c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x134c214) = param_1;
  return param_1;
}

/* ref: FUN_00cb07d0 */
uint F_00cb07d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb07d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1 + param_2 * 0xc,0);
  return uVar1;
}

/* ref: FUN_00cb0800 */
uint F_00cb0800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb0800u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cb52f0(param_1 + param_3 * 0xc,param_2);
  return uVar1;
}

/* ref: FUN_00cb0820 */
uint F_00cb0820(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0820u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),param_1);
  return uVar1;
}

/* ref: FUN_00cb0840 */
uint F_00cb0840(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0840u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),param_1);
  return uVar1;
}

/* ref: FUN_00cb0860 */
uint F_00cb0860(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0860u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),param_1);
  return uVar1;
}

/* ref: FUN_00cb0890 */
uint F_00cb0890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (((int)this + 0x18U <= param_1) &&
     (param_1 < (int)this + 0x18U + *(int *)((int)this + 0xc) * 0xc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb08d0 */
uint F_00cb08d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb08d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *param_1 = *(undefined4 *)((int)this + 0x14);
  *(undefined4 * PTR32 *)((int)this + 0x14) = param_1;
  return (uint)param_1;
}

/* ref: FUN_00cb0910 */
uint F_00cb0910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) + 0xc))))
                    (*(int *)((int)this + 8) + 0xc,param_1);
  return uVar1 + *(int *)((int)this + 4);
}

/* ref: FUN_00cb0930 */
uint F_00cb0930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) + 0xc))))
                    (*(int *)((int)this + 8) + 0xc,param_1);
  return uVar1 + *(int *)((int)this + 4);
}

/* ref: FUN_00cb0950 */
uint F_00cb0950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) + 0xc))))
                    (*(int *)((int)this + 8) + 0xc,param_1);
  puVar3 = ((uint *)GEN_TOP((uVar1 + *(int *)((int)this + 4))));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) + 0x60))))
                    (*(int *)((int)this + 8) + 0xc);
  uVar1 = *puVar3;
  if (uVar2 < 3) {
    return uVar1 + 4;
  }
  return (uVar1 & 0xffffff) + (int)puVar3;
}

/* ref: FUN_00cb09a0 */
uint F_00cb09a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb09a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb5870(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cb09f0 */
uint F_00cb09f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb09f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return ~*(uint *)(in_ecx + 4) & 1;
}

/* ref: FUN_00cb0a50 */
byte F_00cb0a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb0b50 */
uint F_00cb0b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb0b60 */
uint F_00cb0b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0b60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb0b70 */
uint F_00cb0b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0b70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb0b80 */
uint F_00cb0b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb0b90 */
uint F_00cb0b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb0ba0 */
uint F_00cb0ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0ba0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb0bb0 */
uint F_00cb0bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0bb0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb0be0 */
uint F_00cb0be0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0be0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb0c10 */
uint F_00cb0c10(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0c10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1,0);
  return uVar1;
}

/* ref: FUN_00cb0c30 */
uint F_00cb0c30(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0c30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1,0);
  return uVar1;
}

/* ref: FUN_00cb0c50 */
uint F_00cb0c50(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),~*(byte *)((int)this + 4));
  if ((~*(byte *)((int)this + 4) & 1) != 0) {
    iVar5 = 0;
    if (*((short *)GEN_TOP((*(int *)((int)this + 8) + 0x78))) != 0) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)((int)this + 8);
        sVar1 = *((short *)GEN_TOP((*(int *)(iVar3 + 0x24) + iVar4)));
        if (sVar1 == 0) {
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0x60))))(iVar3 + 0xc);
          if (uVar2 < 3) {
            uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) + 0xc))))
                              (*(int *)((int)this + 8) + 0xc,iVar5);
            F_00cb5490(((undefined *)GEN_TOP((uVar2 + *(int *)((int)this + 4)))));
          }
        }
        else if (sVar1 == 0xc) {
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xc))))(iVar3 + 0xc,iVar5);
          iVar3 = uVar2 + *(int *)((int)this + 4);
          if (iVar3 != 0) {
            ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),iVar3);
          }
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 6;
      } while (iVar5 < (int)(uint)*((ushort *)GEN_TOP((*(int *)((int)this + 8) + 0x78))));
    }
    uVar2 = 0;
    if (*(int *)((int)this + 4) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*(int *)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    *(undefined4 *)((int)this + 4) = 1;
  }
  return uVar2;
}

/* ref: FUN_00cb0d10 */
unsigned int F_00cb0d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb0d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  char * pcVar8;
  float fVar9;
  ushort * puVar10;
  float * this_00;
  float10 fVar11;
  int local_8;
  
  puVar10 = (ushort *)(param_1 + param_2 * 2);
  F_00cb0c50(this);
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))
                    (REFG(int * PTR32, 0x15d7724),*((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x2c))),0);
  *(uint *)((int)this + 4) = uVar7;
  param_1 = 0;
  if (*((short *)GEN_TOP((*(int *)((int)this + 8) + 0x78))) != 0) {
    local_8 = 0;
    do {
      iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x24)));
      this_00 = ((float *)GEN_TOP(((int)*(short *)(local_8 + 4 + iVar5) + *(int *)((int)this + 4))));
      switch((unsigned int)(uintptr_t)(*(undefined2 *)(local_8 + iVar5))) {
      case 0: ;
        uVar4 = *puVar10;
        puVar10 = puVar10 + 1;
        pcVar8 = param_3;
        for (uVar7 = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8); uVar7 != 0; uVar7 = uVar7 - 1) {
          cVar3 = *pcVar8;
          while (cVar3 != '\0') {
            pcVar8 = pcVar8 + 1;
            cVar3 = *pcVar8;
          }
          pcVar8 = pcVar8 + 1;
        }
        F_00cb5870(this_00,pcVar8);
        break;
      case 1: ;
        *(char *)this_00 = (char)*puVar10;
        puVar10 = (ushort *)((int)puVar10 + 1);
        break;
      case 2: ;
        *(char *)this_00 = (char)*puVar10;
        puVar10 = (ushort *)((int)puVar10 + 1);
        break;
      case 3: ;
        *(char *)this_00 = (char)*puVar10;
        puVar10 = (ushort *)((int)puVar10 + 1);
        break;
      case 4: ;
        *(ushort *)this_00 = CONCAT11((char)*puVar10,*(undefined1 *)((int)puVar10 + 1));
        puVar10 = puVar10 + 1;
        break;
      case 5: ;
        *(ushort *)this_00 = CONCAT11((char)*puVar10,*(undefined1 *)((int)puVar10 + 1));
        puVar10 = puVar10 + 1;
        break;
      case 6: ;
      case 9: ;
        *this_00 = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)*puVar10,
                                                         *(undefined1 *)((int)puVar10 + 1)),
                                                (char)puVar10[1]),*(undefined1 *)((int)puVar10 + 3))
                             );
        puVar10 = puVar10 + 2;
        break;
      case 7: ;
        *this_00 = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)*puVar10,
                                                         *(undefined1 *)((int)puVar10 + 1)),
                                                (char)puVar10[1]),*(undefined1 *)((int)puVar10 + 3))
                             );
        puVar10 = puVar10 + 2;
        break;
      case 8: ;
        fVar11 = F_00cb0740((uint)(ushort)(*puVar10 >> 8 | *puVar10 << 8));
        *this_00 = (float)fVar11;
        puVar10 = puVar10 + 1;
        break;
      case 10: ;
      case 0xb: ;
        uVar4 = *puVar10;
        uVar1 = *(undefined1 *)((int)puVar10 + 1);
        uVar6 = puVar10[1];
        uVar2 = *(undefined1 *)((int)puVar10 + 3);
        *this_00 = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)puVar10[2],
                                                         *(undefined1 *)((int)puVar10 + 5)),
                                                (char)puVar10[3]),*(undefined1 *)((int)puVar10 + 7))
                             );
        this_00[1] = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)uVar4,uVar1),(char)uVar6),uVar2));
        puVar10 = puVar10 + 4;
        break;
      case 0xc: ;
        uVar4 = *puVar10;
        puVar10 = puVar10 + 1;
        fVar9 = gen_bits2f(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))
                                     (REFG(int * PTR32, 0x15d7724),(uint)(ushort)(uVar4 << 8 | uVar4 >> 8),0));
        *this_00 = fVar9;
      }
      param_1 = param_1 + 1;
      local_8 = local_8 + 6;
    } while (param_1 < *((ushort *)GEN_TOP((*(int *)((int)this + 8) + 0x78))));
  }
  return 0;
}

/* ref: FUN_00cb0f70 */
unsigned int F_00cb0f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcb0f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  short * param_4 = (short *)(uintptr_t)gen_a4;
  int iVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  short * psVar6;
  char * pcVar7;
  uint uVar8;
  char * pcVar9;
  undefined1 * puVar10;
  char * pcVar11;
  int iVar12;
  uint * this_00;
  uint local_c;
  int local_8;
  
  iVar1 = param_1 + (int)((int)(uintptr_t)param_2) * 2;
  F_00cb0c50(this);
  param_2 = (char *)((int)param_4 + (int)param_2 * -2);
  pcVar11 = param_2;
  if (*((short *)GEN_TOP((*(int *)((int)this + 8) + 0x78))) != 0) {
    param_4 = *((short * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 0x24)));
    psVar6 = param_4 + 2;
    local_c = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 8) + 0x78)));
    do {
      puVar10 = (undefined1 *)(iVar1 + *psVar6);
      if (*param_4 == 0) {
        pcVar7 = puVar10 + param_3 + ((int)CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),
                                                             puVar10[2]),puVar10[3]) - (int)*psVar6)
        ;
        pcVar9 = pcVar7 + 1;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        pcVar11 = pcVar7 + (int)(pcVar11 + (1 - (int)pcVar9));
      }
      param_4 = param_4 + 3;
      psVar6 = psVar6 + 3;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),pcVar11,0);
  *(uint *)((int)this + 4) = uVar8;
  F_00c46aa0(uVar8,iVar1,pcVar11);
  local_c = 0;
  if (*((short *)GEN_TOP((*(int *)((int)this + 8) + 0x78))) != 0) {
    local_8 = 0;
    do {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x24)));
      iVar12 = (int)*(short *)(local_8 + 4 + iVar4);
      this_00 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + iVar12)));
      switch((unsigned int)(uintptr_t)(*(undefined2 *)(local_8 + iVar4))) {
      case 0: ;
        pcVar9 = ((char *)GEN_TOP(((int)CONCAT31(CONCAT21(CONCAT11((char)*this_00,
                                                          *(undefined1 *)((int)this_00 + 1)),
                                                 *(undefined1 *)((int)this_00 + 2)),
                                        *(undefined1 *)((int)this_00 + 3)) + iVar1 + param_3)));
        pcVar11 = pcVar9;
        do {
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        F_00c46aa0(param_2 + *(int *)((int)this + 4),pcVar9,pcVar11 + (1 - (int)(pcVar9 + 1)));
        *this_00 = (int)param_2 - iVar12;
        F_00cb5570(this_00);
        param_2 = param_2 + (int)(pcVar11 + (1 - (int)(pcVar9 + 1)));
        break;
      case 4: ;
      case 5: ;
        *(ushort *)this_00 = CONCAT11((char)*this_00,*(undefined1 *)((int)this_00 + 1));
        break;
      case 6: ;
      case 7: ;
        *this_00 = CONCAT31(CONCAT21(CONCAT11((char)*this_00,*(undefined1 *)((int)this_00 + 1)),
                                     *(undefined1 *)((int)this_00 + 2)),
                            *(undefined1 *)((int)this_00 + 3));
        break;
      case 8: ;
        uVar3 = (ushort)*this_00;
        uVar5 = uVar3 >> 8 | uVar3 << 8;
        if (uVar5 == 0) {
          *this_00 = 0;
        }
        else {
          *this_00 = ((uVar5 & 0xffff8000) * 8 | uVar5 & 0x3ff) << 0xd |
                     (((uVar3 & 0xff) >> 2 & 0x1f) + 0x70) * 0x800000;
        }
        break;
      case 9: ;
        *this_00 = CONCAT31(CONCAT21(CONCAT11((char)*this_00,*(undefined1 *)((int)this_00 + 1)),
                                     *(undefined1 *)((int)this_00 + 2)),
                            *(undefined1 *)((int)this_00 + 3));
        break;
      case 10: ;
      case 0xb: ;
        uVar8 = *this_00;
        *this_00 = CONCAT31(CONCAT21(CONCAT11((char)this_00[1],*(undefined1 *)((int)this_00 + 5)),
                                     *(undefined1 *)((int)this_00 + 6)),
                            *(undefined1 *)((int)this_00 + 7));
        this_00[1] = CONCAT31(CONCAT21(CONCAT11((char)uVar8,*(undefined1 *)((int)this_00 + 1)),
                                       *(undefined1 *)((int)this_00 + 2)),
                              *(undefined1 *)((int)this_00 + 3));
      }
      local_c = local_c + 1;
      local_8 = local_8 + 6;
    } while (local_c < *((ushort *)GEN_TOP((*(int *)((int)this + 8) + 0x78))));
  }
  return 0;
}

/* ref: FUN_00cb1240 */
uint F_00cb1240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcb1240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129674));
  *(undefined4 *)((int)this + 4) = 1;
  *(int *)((int)this + 8) = param_3;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_3 + 0xc) + 0x60))))((int *)(param_3 + 0xc));
  if (uVar1 < 3) {
    F_00cb0d10(this,param_1,param_2,param_4);
    return (uint)this;
  }
  F_00cb0f70(this,param_1,param_2,(param_4 + param_2 * -2) - param_1,param_5);
  return (uint)this;
}

/* ref: FUN_00cb12c0 */
uint F_00cb12c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb12c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb12d0 */
uint F_00cb12d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb12d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb12f0 */
uint F_00cb12f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb12f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb1330 */
unsigned int F_00cb1330(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1330u, gen_a0, 0u, 0u, 0u);
  undefined * PTR32 * param_1 = (undefined * PTR32 *)(uintptr_t)gen_a0;
  undefined * PTR32 * ppuVar1;
  
  ppuVar1 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  if ((undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220) != &REFG(undefined * PTR32, 0x134c224)) {
    while ((param_1 < ppuVar1 + 6 || (ppuVar1 + 6 + (int)ppuVar1[3] * 3 <= param_1))) {
      if (ppuVar1 != (undefined * PTR32 *)0x0) {
        ppuVar1 = (undefined * PTR32 *)ppuVar1[2];
      }
      if (ppuVar1 == &REFG(undefined * PTR32, 0x134c224)) {
        return 0;
      }
    }
    ppuVar1[4] = ppuVar1[4] + 1;
    *param_1 = ppuVar1[5];
    ppuVar1[5] = (undefined *)param_1;
    if (ppuVar1[4] == ppuVar1[3]) {
      ((code *)*(gen_code32 *)*ppuVar1)(ppuVar1,1);
    }
  }
  return 0;
}

/* ref: FUN_00cb1390 */
unsigned int F_00cb1390(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1390u, gen_a0, 0u, 0u, 0u);
  undefined * PTR32 * param_1 = (undefined * PTR32 *)(uintptr_t)gen_a0;
  undefined * PTR32 * ppuVar1;
  
  ppuVar1 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  if ((undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220) != &REFG(undefined * PTR32, 0x134c224)) {
    while ((param_1 < ppuVar1 + 6 || (ppuVar1 + 6 + (int)ppuVar1[3] * 3 <= param_1))) {
      if (ppuVar1 != (undefined * PTR32 *)0x0) {
        ppuVar1 = (undefined * PTR32 *)ppuVar1[2];
      }
      if (ppuVar1 == &REFG(undefined * PTR32, 0x134c224)) {
        return 0;
      }
    }
    ppuVar1[4] = ppuVar1[4] + 1;
    *param_1 = ppuVar1[5];
    ppuVar1[5] = (undefined *)param_1;
    if (ppuVar1[4] == ppuVar1[3]) {
      ((code *)*(gen_code32 *)*ppuVar1)(ppuVar1,1);
    }
  }
  return 0;
}

/* ref: FUN_00cb13f0 */
uint F_00cb13f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb13f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129674));
  F_00cb0c50(this);
  if ((param_1 & 1) != 0) {
    F_00cb1330(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb1480 */
uint F_00cb1480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return param_1;
}

/* ref: FUN_00cb14b0 */
uint F_00cb14b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb14b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129670));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb15d0 */
uint F_00cb15d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb15d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * PTR32 * ppuVar3;
  uint uVar4;
  int * piVar5;
  
  ppuVar3 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  if ((undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220) != &REFG(undefined * PTR32, 0x134c224)) {
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        puVar2 = (undefined4 *)ppuVar3[5];
        ppuVar3[4] = ppuVar3[4] + -1;
        ppuVar3[5] = (undefined *)*puVar2;
        return (uint)puVar2;
      }
      ppuVar3 = (undefined * PTR32 *)ppuVar3[2];
    } while (ppuVar3 != &REFG(undefined * PTR32, 0x134c224));
  }
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),(REFG(int, 0x134c214) * 3 + 6) * 4,0)))
  ;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x1129678));
    puVar2[3] = REFG(int, 0x134c214);
    uVar4 = 0;
    puVar2[4] = REFG(int, 0x134c214);
    piVar5 = puVar2 + 6;
    if (puVar2[3] != 0) {
      do {
        *piVar5 = (int)(piVar5 + 3);
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 3;
      } while (uVar4 < (uint)puVar2[3]);
    }
    puVar2[uVar4 * 3 + 3] = 0;
    puVar2[5] = puVar2 + 6;
  }
  puVar2[1] = &REFG(undefined * PTR32, 0x134c218);
  puVar2[2] = REFG(undefined * PTR32, 0x134c220);
  if (REFG(undefined * PTR32, 0x134c220) != (undefined *)0x0) {
    *((undefined4 * PTR32 *)GEN_TOP((REFG(undefined * PTR32, 0x134c220) + 4))) = puVar2;
  }
  REFG(int, 0x134c230) = REFG(int, 0x134c230) + 1;
  puVar1 = (undefined4 *)puVar2[5];
  REFG(undefined * PTR32, 0x134c220) = (undefined *)puVar2;
  puVar2[4] = puVar2[4] + -1;
  puVar2[5] = *puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00cb16c0 */
uint F_00cb16c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb16c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * PTR32 * ppuVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  int * piVar6;
  
  ppuVar1 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  while( true ) {
    if (ppuVar1 == &REFG(undefined * PTR32, 0x134c224)) {
      puVar4 = (undefined4 *)F_00cb52f0((REFG(int, 0x134c214) * 3 + 6) * 4,param_2);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = (*(undefined * PTR32 (*)[1])REFP(0x1129678));
        iVar3 = REFG(int, 0x134c214);
        puVar4[3] = REFG(int, 0x134c214);
        puVar4[4] = REFG(int, 0x134c214);
        uVar5 = 0;
        piVar6 = puVar4 + 6;
        if (iVar3 != 0) {
          do {
            *piVar6 = (int)(piVar6 + 3);
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 3;
          } while (uVar5 < (uint)puVar4[3]);
        }
        puVar4[uVar5 * 3 + 3] = 0;
        puVar4[5] = puVar4 + 6;
      }
      puVar4[1] = &REFG(undefined * PTR32, 0x134c218);
      puVar4[2] = REFG(undefined * PTR32, 0x134c220);
      if (REFG(undefined * PTR32, 0x134c220) != (undefined *)0x0) {
        *((undefined4 * PTR32 *)GEN_TOP((REFG(undefined * PTR32, 0x134c220) + 4))) = puVar4;
      }
      REFG(int, 0x134c230) = REFG(int, 0x134c230) + 1;
      puVar2 = (undefined4 *)puVar4[5];
      REFG(undefined * PTR32, 0x134c220) = (undefined *)puVar4;
      puVar4[4] = puVar4[4] + -1;
      puVar4[5] = *puVar2;
      return (uint)puVar2;
    }
    if (ppuVar1[4] != (undefined *)0x0) break;
    ppuVar1 = (undefined * PTR32 *)ppuVar1[2];
  }
  puVar4 = (undefined4 *)ppuVar1[5];
  ppuVar1[4] = ppuVar1[4] + -1;
  ppuVar1[5] = (undefined *)*puVar4;
  return (uint)puVar4;
}

/* ref: FUN_00cb17a0 */
uint F_00cb17a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb17a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129670));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cb1800 */
byte F_00cb1800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) != *(int *)(param_1 + 4);
}

/* ref: FUN_00cb1820 */
uint F_00cb1820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb1820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00cb1870 */
unsigned int F_00cb1870(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1870u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[18])REFP(0x1129680));
  return 0;
}

/* ref: FUN_00cb1880 */
uint F_00cb1880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x1129680));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb18b0 */
uint F_00cb18b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb18b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d7724) = param_1;
  return param_1;
}

/* ref: FUN_00cb18c0 */
uint F_00cb18c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb18c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1,0);
  return uVar1;
}

/* ref: FUN_00cb18e0 */
uint F_00cb18e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb18e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),param_1);
  return uVar1;
}

/* ref: FUN_00cb1960 */
uint F_00cb1960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cb5730(this,param_1);
  return (uint)this;
}

/* ref: FUN_00cb1980 */
uint F_00cb1980(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1980u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb19d0 */
uint F_00cb19d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb19d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)((char)param_1 != '\0') | -(uint)((char)param_2 != '\0') & 2;
}

/* ref: FUN_00cb1a10 */
ushort F_00cb1a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1a10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x7e) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb1a30 */
unsigned int F_00cb1a30(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1a30u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  return 0;
}

/* ref: FUN_00cb1a40 */
uint F_00cb1a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcb1a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + 1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
                    (REFG(int, 0x15d7724) + 4,param_1,(int)this + 4,param_5,param_3,param_4,param_2);
  return uVar1;
}

/* ref: FUN_00cb1a80 */
uint F_00cb1a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcb1a80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + -1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 8))))
                    (REFG(int, 0x15d7724) + 4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: FUN_00cb1ab0 */
byte F_00cb1ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x3ec) != 0;
}

/* ref: FUN_00cb1ac0 */
uint F_00cb1ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1ac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: FUN_00cb1ad0 */
uint F_00cb1ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1ad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3d8);
}

/* ref: FUN_00cb1af0 */
uint F_00cb1af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1b00 */
uint F_00cb1b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1b10 */
uint F_00cb1b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1b10u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00cb1b20 */
byte F_00cb1b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb1b40 */
byte F_00cb1b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb1b80 */
byte F_00cb1b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb1ba0 */
byte F_00cb1ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb1bd0 */
byte F_00cb1bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb1bf0 */
byte F_00cb1bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb1c20 */
byte F_00cb1c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb1c40 */
byte F_00cb1c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb1ca0 */
uint F_00cb1ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb1cb0 */
uint F_00cb1cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1cb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb1cd0 */
uint F_00cb1cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1cd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb1ce0 */
uint F_00cb1ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb1d30 */
uint F_00cb1d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1d30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb1d40 */
uint F_00cb1d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb1d80 */
uint F_00cb1d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1d80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb1d90 */
uint F_00cb1d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1d90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb1da0 */
uint F_00cb1da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1da0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb1db0 */
uint F_00cb1db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1db0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb1dc0 */
uint F_00cb1dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1dd0 */
uint F_00cb1dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1de0 */
uint F_00cb1de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1df0 */
uint F_00cb1df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1df0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1e00 */
uint F_00cb1e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1e10 */
byte F_00cb1e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00cb1e30 */
uint F_00cb1e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1e40 */
uint F_00cb1e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1e50 */
uint F_00cb1e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1e60 */
byte F_00cb1e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00cb1e80 */
uint F_00cb1e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1e90 */
uint F_00cb1e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1ea0 */
uint F_00cb1ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1eb0 */
byte F_00cb1eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1eb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00cb1ed0 */
uint F_00cb1ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ed0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb1ee0 */
uint F_00cb1ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb1ef0 */
uint F_00cb1ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb1f00 */
uint F_00cb1f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1f00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb1f10 */
uint F_00cb1f10(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1f10u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb1f40 */
uint F_00cb1f40(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1f40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1 * 4,0);
  return uVar1;
}

/* ref: FUN_00cb1f90 */
unsigned int F_00cb1f90(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(char *)((int)this + 6) == '\0') && (*(int *)this != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*(int *)this);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: FUN_00cb1fc0 */
unsigned int F_00cb1fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(char *)((int)this + 6) == '\0') && (*(int *)this != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*(int *)this);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: FUN_00cb1ff0 */
uint F_00cb1ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ff0u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106fd08));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = 1;
  F_00cb5730((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb2050 */
uint F_00cb2050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)((int)this + 4) == *(int *)(param_1 + 4)) &&
     (*(int *)((int)this + 0xc) == *(int *)(param_1 + 0xc))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00cb20a0 */
unsigned int F_00cb20a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb20a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(char *)((int)this + 6) == '\0') && (*(int *)this != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*(int *)this);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: FUN_00cb20d0 */
byte F_00cb20d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcb20d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  
  if ((*(int *)&gen_args[1]) != 0) {
    REFG(int, 0x15d7724) = (*(int *)&gen_args[1]);
  }
  if ((*(int *)&gen_args[2]) != 0) {
    F_00cb5730(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(*(int *)&gen_args[2]));
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3e4))) = (*(int *)&gen_args[3]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) + 1;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1000))) = ~-(uint)((*(int *)&gen_args[3]) != 0) & (*(uint *)&gen_args[5]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = (*(undefined4 *)&gen_args[4]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40c))) = 1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
                    (REFG(int, 0x15d7724) + 4,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(int)(*(undefined * PTR32 *)&gen_args[0]) + 4,0,0,0,1);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar1;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  return *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40c)));
}

/* ref: FUN_00cb2160 */
byte F_00cb2160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb2160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),(char)param_2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x100,"%s.exh",param_1);
  *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + 1;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
            ((int *)(REFG(int, 0x15d7724) + 4),((char *)(gen_frame + 0x8)),(int)this + 4,
             -(uint)((char)param_3 != '\0') & 2 | (uint)((char)param_2 != '\0'),0,0,(*(undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 1;
}

/* ref: FUN_00cb2200 */
unsigned int F_00cb2200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  iVar1 = *param_1;
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9)),
                            *(undefined1 *)(iVar1 + 10)),*(undefined1 *)(iVar1 + 0xb));
  if (uVar5 != 0) {
    do {
      piVar3 = (int *)F_00cb58d0(param_1,((undefined1 *)(gen_frame + 0x4)),uVar4);
      uVar2 = *(undefined4 *)(*piVar3 + 4);
      *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + 1;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))(REFG(int, 0x15d7724) + 4,uVar2,(int)this + 4,0,0,0,1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return 0;
}

/* ref: FUN_00cb2290 */
uint F_00cb2290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  short * psVar1;
  short sVar2;
  gen_size32 _Size;
  byte bVar3;
  undefined * pvVar4;
  uint uVar5;
  short * psVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = param_1;
  F_00cb5bc0(((undefined1 *)(gen_frame + 0x28)));
  iVar7 = 0;
  F_00cb5b90(param_1,((undefined1 *)(gen_frame + 0x18)));
  if ((*(uint *)(gen_frame + 0x1c)) != (*(uint *)(gen_frame + 0x2c))) {
    do {
      F_00cb5970(((undefined1 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x34)));
      if ((-1 < (*(int *)(gen_frame + 0x34))) && (iVar7 < (*(int *)(gen_frame + 0x34)))) {
        iVar7 = (*(int *)(gen_frame + 0x34));
      }
      F_00cb5920(((undefined1 *)(gen_frame + 0x18)));
    } while ((*(uint *)(gen_frame + 0x1c)) != (*(uint *)(gen_frame + 0x2c)));
  }
  _Size = (iVar7 + 1) * 4;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),_Size,0)));
  *(undefined * PTR32 *)((int)this + 0x3dc) = pvVar4;
  F_00c48350(pvVar4,0,_Size);
  F_00cb5b90(param_1,((undefined1 *)(gen_frame + 0x0)));
  pvVar4 = param_1;
  if ((*(uint *)(gen_frame + 0x4)) != (*(uint *)(gen_frame + 0x2c))) {
    do {
      bVar3 = 0;
      F_00cb5970(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x34)));
      if (-1 < (*(int *)(gen_frame + 0x34))) {
        psVar6 = *(short * PTR32 *)((int)this + 0x410);
        *(int *)((int)this + 0x3e0) = *(int *)((int)this + 0x3dc) + (*(int *)(gen_frame + 0x34)) * 4;
        if (psVar6 != (short *)0x0) {
          sVar2 = *psVar6;
          while (-1 < sVar2) {
            if (sVar2 == (*(int *)(gen_frame + 0x34))) {
              bVar3 = 1;
              break;
            }
            psVar1 = psVar6 + 1;
            psVar6 = psVar6 + 1;
            sVar2 = *psVar1;
          }
        }
      }
      *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + 1;
      ((code *)*((gen_code32 *)GEN_TOP((REFG(int * PTR32, 0x15d7724)[1] + 4))))
                (REFG(int * PTR32, 0x15d7724) + 1,((undefined1 *)(gen_frame + 0x38)),(int)this + 4,-(uint)bVar3 & 2 | 1,0,0,1);
      F_00cb5920(((undefined1 *)(gen_frame + 0x0)));
      pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x24));
    } while ((*(uint *)(gen_frame + 0x4)) != (*(uint *)(gen_frame + 0x2c)));
  }
  uVar5 = F_00cb5b90(pvVar4,((undefined1 *)(gen_frame + 0xc)));
  if ((*(uint *)(gen_frame + 0x10)) != (*(uint *)(gen_frame + 0x2c))) {
    do {
      F_00cb5970(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x34)));
      if ((-1 < (*(int *)(gen_frame + 0x34))) && (*((int *)GEN_TOP((*(int *)((int)this + 0x3dc) + (*(int *)(gen_frame + 0x34)) * 4))) != 0)) {
        iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x3dc) + (*(int *)(gen_frame + 0x34)) * 4)));
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = iVar7 + -0xc;
        }
        *(short *)(iVar7 + 0x7e) = (short)(*(int *)(gen_frame + 0x34));
      }
      F_00cb5920(((undefined1 *)(gen_frame + 0xc)));
      uVar5 = (*(uint *)(gen_frame + 0x10));
    } while ((*(uint *)(gen_frame + 0x10)) != (*(uint *)(gen_frame + 0x2c)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return uVar5;
}

/* ref: FUN_00cb24c0 */
uint F_00cb24c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb24c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb2510 */
uint F_00cb2510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb2520 */
uint F_00cb2520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb2530 */
uint F_00cb2530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb2540 */
uint F_00cb2540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb2560 */
uint F_00cb2560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb2570 */
uint F_00cb2570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb2590 */
uint F_00cb2590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb25a0 */
uint F_00cb25a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb25a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb25e0 */
uint F_00cb25e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb25e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb2620 */
uint F_00cb2620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb2640 */
uint F_00cb2640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb2680 */
uint F_00cb2680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb26a0 */
uint F_00cb26a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb26a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar1 = *(uint *)(param_1 + 4);
      *((uint *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = uVar1;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return uVar1;
}

/* ref: FUN_00cb26d0 */
uint F_00cb26d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb26d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar1 = *(uint *)(param_1 + 4);
      *((uint *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = uVar1;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return uVar1;
}

/* ref: FUN_00cb2700 */
uint F_00cb2700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2700u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (*(uint *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x106fd40));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) = 1;
  (*(uint *)(gen_frame + 0x1c)) = CONCAT13((char)((uint)uVar2 >> 0x18),0x10000);
  F_00cb5730(&(*(int *)(gen_frame + 0x18)),(*(undefined4 *)&gen_args[1]));
  uVar4 = (*(uint *)(gen_frame + 0x1c)) >> 1 & 0x1f;
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 0x1c + 8)));
  (*(undefined4 *)(gen_frame + 0x28)) = 1;
  uVar5 = (*(uint *)(gen_frame + 0x1c));
  while( true ) {
    (*(uint *)(gen_frame + 0x1c)) = uVar5;
    if (iVar1 == (int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 0x1c + 0xc) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) = (char)(uVar5 >> 0x10);
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      if (((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) == '\0') && ((*(int *)(gen_frame + 0x18)) != 0)) {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x18)));
      }
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
      return 0;
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 100))))(iVar1 + 0xc);
    bVar3 = F_00cb5430(&(*(int *)(gen_frame + 0x18)),uVar5);
    if (bVar3 != 0) break;
    iVar1 = *(int *)(iVar1 + 8);
    uVar5 = (*(uint *)(gen_frame + 0x1c));
  }
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = iVar1 + 0xc;
  }
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  if (((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) == '\0') && ((*(int *)(gen_frame + 0x18)) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x18)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return uVar5;
}

/* ref: FUN_00cb2840 */
uint F_00cb2840(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (uVar2 < 0x20) {
    piVar3 = (int *)(*(int *)this + 0x18 + uVar2 * 0x1c);
    while (*piVar3 == 0) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 7;
      if (0x1f < uVar2) {
        return uVar2;
      }
    }
    *(uint *)((int)this + 8) = uVar2;
    iVar1 = *(int *)this + uVar2 * 0x1c;
    *(int *)((int)this + 4) = iVar1;
    uVar2 = *(uint *)(iVar1 + 8);
    *(uint *)((int)this + 0xc) = uVar2;
  }
  return uVar2;
}

/* ref: FUN_00cb2890 */
uint F_00cb2890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != 0) {
    F_00cb2840(this);
    this = ((undefined *)(uint)(this));
  }
  return (uint)this;
}

/* ref: FUN_00cb28f0 */
byte F_00cb28f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb28f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  *(undefined4 *)((int)this + 0x410) = param_1[5];
  bVar1 = F_00cb20d0(this,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
  return bVar1;
}

/* ref: FUN_00cb2920 */
unsigned int F_00cb2920(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (((*(char *)((int)this + 8) == '\0') && (*(char *)((int)this + 0x18) != '\0')) &&
     (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this), (char)uVar2 == '\0')) {
    for (piVar1 = *(int * PTR32 *)((int)this + 0x44); piVar1 != (int *)((int)this + 0x48);
        piVar1 = (int *)piVar1[2]) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
    *(undefined1 *)((int)this + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_00cb2960 */
uint F_00cb2960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb2700((undefined *)((int)this + 0x58),param_1);
  if (uVar1 == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1,0,0);
    uVar1 = F_00cb2700((undefined *)((int)this + 0x58),param_1);
  }
  return uVar1;
}

/* ref: FUN_00cb29a0 */
byte F_00cb29a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb29a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(undefined4 *)(param_1 + 4);
  }
  return 1;
}

/* ref: FUN_00cb29d0 */
byte F_00cb29d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb29d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(undefined4 *)(param_1 + 4);
  }
  return 1;
}

/* ref: FUN_00cb2a00 */
uint F_00cb2a00(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb2a30 */
uint F_00cb2a30(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb2ac0 */
uint F_00cb2ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return param_1;
}

/* ref: FUN_00cb2af0 */
uint F_00cb2af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0xc) {
      *param_1 = (int)this + 0xc;
      return (uint)param_1;
    }
    if (iVar1 == param_2) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00cb2b60 */
uint F_00cb2b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return param_1;
}

/* ref: FUN_00cb2b90 */
uint F_00cb2b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0xc) {
      *param_1 = (int)this + 0xc;
      return (uint)param_1;
    }
    if (iVar1 == param_2) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00cb2bd0 */
uint F_00cb2bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 * PTR32 *)((int)this + 8) = (undefined4 *)((int)this + 0xc);
  *(undefined * PTR32 *)((int)this + 0x10) = this;
  return (uint)this;
}

/* ref: FUN_00cb2c00 */
uint F_00cb2c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(uint *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(uVar1 + 8);
  if (*(int *)(uVar1 + 8) != 0) {
    *((int *)GEN_TOP((*(int *)(uVar1 + 8) + 4))) = param_1;
  }
  *(int *)(uVar1 + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return uVar1;
}

/* ref: FUN_00cb2c30 */
uint F_00cb2c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = uVar1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = uVar1;
  }
  if (*(int *)(param_2 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + 4))) = *(undefined4 *)(param_2 + 4);
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  return (uint)param_1;
}

/* ref: FUN_00cb2c60 */
uint F_00cb2c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar2 = param_1;
  while( true ) {
    if (uVar1 == (int)this + 0xcU) {
      return 0;
    }
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  return uVar1;
}

/* ref: FUN_00cb2cc0 */
uint F_00cb2cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return param_1;
}

/* ref: FUN_00cb2cf0 */
uint F_00cb2cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = uVar1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = uVar1;
  }
  if (*(int *)(param_2 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + 4))) = *(undefined4 *)(param_2 + 4);
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  return (uint)param_1;
}

/* ref: FUN_00cb2d20 */
uint F_00cb2d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = *(undefined4 *)(iVar1 + 8);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 8))) = *(undefined4 *)(iVar1 + 8);
    }
    if (*(int *)(iVar1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = *(undefined4 *)(iVar1 + 4);
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return (uint)param_1;
}

/* ref: FUN_00cb2d60 */
uint F_00cb2d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0xc) {
      *param_1 = (int)this + 0xc;
      return (uint)param_1;
    }
    if (iVar1 == param_2) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00cb2da0 */
uint F_00cb2da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb2de0 */
uint F_00cb2de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb2e20 */
uint F_00cb2e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb2e60 */
uint F_00cb2e60(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2e60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb2e80 */
uint F_00cb2e80(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb2ed0 */
uint F_00cb2ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *param_1 = this;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = param_1;
  if (this != (undefined *)0x0) {
    F_00cb2840(param_1);
    puVar1 = ((undefined4 *)(uint)(param_1));
  }
  return (uint)puVar1;
}

/* ref: FUN_00cb2f00 */
uint F_00cb2f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 100))))(param_1 + 0xc);
  uVar3 = *(ushort *)(uVar3 + 4) >> 1 & 0x1f;
  iVar2 = *(int *)((int)this + uVar3 * 0x1c + 0x10);
  *(int *)(param_1 + 4) = iVar2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 8);
  if (*(int *)(iVar2 + 8) != 0) {
    *((int *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = param_1;
  }
  *(int *)(iVar2 + 8) = param_1;
  piVar1 = (int *)((int)this + uVar3 * 0x1c + 0x18);
  *piVar1 = *piVar1 + 1;
  *(int *)((int)this + 0x380) = *(int *)((int)this + 0x380) + 1;
  return 1;
}

/* ref: FUN_00cb2f60 */
uint F_00cb2f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 100))))(param_1 + 0xc);
  uVar2 = *(ushort *)(uVar3 + 4);
  if (*(int *)(param_1 + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(undefined4 *)(param_1 + 4);
  }
  piVar1 = ((int *)GEN_TOP(((int)this + (uVar2 >> 1 & 0x1f) * 0x1c + 0x18)));
  *piVar1 = *piVar1 + -1;
  *(int *)((int)this + 0x380) = *(int *)((int)this + 0x380) + -1;
  return 0xffffffff;
}

/* ref: FUN_00cb2fc0 */
uint F_00cb2fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = (uint *)((int)this + 0x18);
  uVar3 = param_1;
  while (*puVar4 <= uVar3) {
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 - *puVar4;
    puVar4 = puVar4 + 7;
    if (0x1f < uVar2) {
      return 0;
    }
  }
  uVar1 = *(uint *)((int)this + uVar2 * 0x1c + 8);
  while( true ) {
    if (uVar1 == (int)this + uVar2 * 0x1c + 0xc) {
      return 0;
    }
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  return uVar1;
}

/* ref: FUN_00cb3020 */
uint F_00cb3020(unsigned int gen_a0)
{
  GEN_ENTER(0xcb3020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb3070 */
uint F_00cb3070(unsigned int gen_a0)
{
  GEN_ENTER(0xcb3070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb30c0 */
uint F_00cb30c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb30c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_01051d29(this,0x1c,0x20,((code *)REFP(0xcb2e80)));
  return extraout_EAX;
}

/* ref: FUN_00cb30d0 */
uint F_00cb30d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb30d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb3120 */
byte F_00cb3120(unsigned int gen_a0)
{
  GEN_ENTER(0xcb3120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this);
  if ((char)uVar3 != '\0') {
    return 0;
  }
  iVar2 = *(int *)((int)this + 0x3d8);
  *(undefined1 *)((int)this + 8) = 1;
  do {
    if (iVar2 == 0) {
      if ((*(int *)((int)this + 0x3dc) != 0) && (*(int *)((int)this + 0x3dc) != 0)) {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*(int *)((int)this + 0x3dc));
        *(undefined4 *)((int)this + 0x3dc) = 0;
      }
      return 1;
    }
    uVar3 = 0;
    piVar4 = (int *)((int)this + 0x70);
    do {
      if (*piVar4 != 0) {
        puVar5 = *(undefined4 * PTR32 *)((int)this + uVar3 * 0x1c + 0x60);
        goto LAB_00cb3164;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 7;
    } while (uVar3 < 0x20);
    puVar5 = (undefined4 *)0x0;
LAB_00cb3164: ;
    uVar3 = ((code *)*(gen_code32 *)(puVar5[3] + 4))(puVar5 + 3);
    if ((char)uVar3 != '\0') {
      return 0;
    }
    uVar3 = ((code *)*(gen_code32 *)(puVar5[3] + 100))(puVar5 + 3);
    uVar1 = *(ushort *)(uVar3 + 4);
    if (puVar5[1] != 0) {
      *(undefined4 *)(puVar5[1] + 8) = puVar5[2];
    }
    if (puVar5[2] != 0) {
      *(undefined4 *)(puVar5[2] + 4) = puVar5[1];
    }
    piVar4 = ((int *)GEN_TOP(((int)this + (uVar1 >> 1 & 0x1f) * 0x1c + 0x70)));
    *piVar4 = *piVar4 + -1;
    *(int *)((int)this + 0x3d8) = *(int *)((int)this + 0x3d8) + -1;
    ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
    iVar2 = *(int *)((int)this + 0x3d8);
  } while( true );
}

/* ref: FUN_00cb3220 */
byte F_00cb3220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3220u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  
  (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x34)) = ((code *)REFP(0x106fd70));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x30));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x30)))))) { return (byte)(uintptr_t)gen_eh_resume(); }
  (*(undefined2 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(char *)(gen_frame + 0x2e)) = '\x01';
  F_00cb5730(&(*(int *)(gen_frame + 0x28)),(*(undefined4 *)&gen_args[1]));
  iVar6 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58;
  iVar5 = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 1;
  (*(int *)(gen_frame + 0x18)) = iVar6;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)0x0;
  if (iVar6 == 0) goto LAB_00cb3292;
  do {
    F_00cb2840(&(*(int *)(gen_frame + 0x18)));
    iVar5 = (*(int *)(gen_frame + 0x1c));
LAB_00cb3292: ;
    do {
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
      if (iVar5 != 0) goto LAB_00cb329e;
      do {
        if (puVar2 == (undefined4 *)0x0) {
          (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x2e)) == '\0') && ((*(int *)(gen_frame + 0x28)) != 0)) {
            ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x28)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
          return 0;
        }
LAB_00cb329e: ;
        piVar7 = &(*(int *)(gen_frame + 0x28));
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(puVar2[3] + 100))(puVar2 + 3)));
        bVar3 = F_00cb5430(this_00,piVar7);
        if (bVar3 != 0) {
          uVar4 = ((code *)*(gen_code32 *)(puVar2[3] + 100))(puVar2 + 3);
          uVar1 = *(ushort *)(uVar4 + 4);
          if (puVar2[1] != 0) {
            *(undefined4 *)(puVar2[1] + 8) = puVar2[2];
          }
          if (puVar2[2] != 0) {
            *(undefined4 *)(puVar2[2] + 4) = puVar2[1];
          }
          piVar7 = ((int *)GEN_TOP((iVar6 + (uVar1 >> 1 & 0x1f) * 0x1c + 0x18)));
          *piVar7 = *piVar7 + -1;
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3d8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3d8))) + -1;
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
          (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x2e)) == '\0') && ((*(int *)(gen_frame + 0x28)) != 0)) {
            ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x28)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
          return 1;
        }
      } while (iVar5 == 0);
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)puVar2[2];
    } while ((undefined4 *)puVar2[2] != (undefined4 *)(iVar5 + 0xc));
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
  } while( true );
}

/* ref: FUN_00cb3390 */
byte F_00cb3390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3390u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) == (*(int *)&gen_args[1])) {
    return 1;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = (*(int *)&gen_args[1]);
  for (; piVar1 != ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))); piVar1 = (int *)piVar1[2]) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(int *)&gen_args[1]));
  }
  F_00cb3120((*(undefined * PTR32 *)&gen_args[0]));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) + 1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = (*(int *)&gen_args[1]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1000))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40c))) = 1;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
                    (REFG(int, 0x15d7724) + 4,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(int)(*(undefined * PTR32 *)&gen_args[0]) + 4,0,0,0,1);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar2;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  return *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40c)));
}

/* ref: FUN_00cb3430 */
byte F_00cb3430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb3430u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  byte bVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x34)) = ((code *)REFP(0x106fda0));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x30));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x30)))))) { return (byte)(uintptr_t)gen_eh_resume(); }
  (*(undefined2 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(char *)(gen_frame + 0x2e)) = '\x01';
  F_00cb5730(&(*(int *)(gen_frame + 0x28)),(*(undefined4 *)&gen_args[1]));
  iVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 1;
  (*(int *)(gen_frame + 0x18)) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  if ((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58 == 0) goto LAB_00cb34a1;
  do {
    F_00cb2840(&(*(int *)(gen_frame + 0x18)));
    iVar3 = (*(int *)(gen_frame + 0x1c));
LAB_00cb34a1: ;
    do {
      iVar1 = (*(int *)(gen_frame + 0x24));
      if (iVar3 != 0) goto LAB_00cb34a9;
      do {
        if (iVar1 == 0) {
          (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x2e)) == '\0') && ((*(int *)(gen_frame + 0x28)) != 0)) {
            ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x28)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
          return (byte)(*(undefined4 *)&gen_args[2]);
        }
LAB_00cb34a9: ;
        piVar4 = &(*(int *)(gen_frame + 0x28));
        this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 100))))(iVar1 + 0xc)));
        bVar2 = F_00cb5430(this_00,piVar4);
        if (bVar2 != 0) {
          (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x2e)) == '\0') && ((*(int *)(gen_frame + 0x28)) != 0)) {
            ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x28)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
          return 1;
        }
      } while (iVar3 == 0);
      (*(int *)(gen_frame + 0x24)) = *(int *)(iVar1 + 8);
    } while (*(int *)(iVar1 + 8) != iVar3 + 0xc);
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
  } while( true );
}

/* ref: FUN_00cb3550 */
uint F_00cb3550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x28);
  while ((uVar2 = (int)this + 0x2cU, uVar1 != (int)this + 0x2cU && (uVar2 = uVar1, uVar1 != param_1)
         )) {
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  if (uVar2 == (int)this + 0x2cU) {
    *(int *)(param_1 + 4) = (int)this + 0x20;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x28);
    if (*(int *)((int)this + 0x28) != 0) {
      *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + 4))) = param_1;
    }
    *(uint *)((int)this + 0x28) = param_1;
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    return 1;
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00cb35b0 */
uint F_00cb35b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb35b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x44);
    *(undefined1 *)((int)this + 0x18) = 1;
    for (; piVar1 != (int *)((int)this + 0x48); piVar1 = (int *)piVar1[2]) {
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    }
    F_00cb3120(this);
    *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + 1;
    *(undefined4 *)((int)this + 1000) = 0;
    *(undefined1 *)((int)this + 0x40c) = 1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
                      (REFG(int, 0x15d7724) + 4,*(undefined4 *)((int)this + 0x10),(int)this + 4,0,0,0,1);
    *(uint *)((int)this + 0xc) = uVar2;
    *(undefined1 *)((int)this + 8) = 0;
    for (piVar1 = *(int * PTR32 *)((int)this + 0x44); piVar1 != (int *)((int)this + 0x48);
        piVar1 = (int *)piVar1[2]) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    }
    return uVar2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_00cb3660 */
uint F_00cb3660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x44);
  while ((uVar2 = (int)this + 0x48U, uVar1 != (int)this + 0x48U && (uVar2 = uVar1, uVar1 != param_1)
         )) {
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  if (uVar2 == (int)this + 0x48U) {
    *(int *)(param_1 + 4) = (int)this + 0x3c;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x44);
    if (*(int *)((int)this + 0x44) != 0) {
      *((uint *)GEN_TOP((*(int *)((int)this + 0x44) + 4))) = param_1;
    }
    *(uint *)((int)this + 0x44) = param_1;
    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
    return 1;
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00cb36c0 */
uint F_00cb36c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb36c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x3f8);
  while ((uVar2 = (int)this + 0x3fcU, uVar1 != (int)this + 0x3fcU &&
         (uVar2 = uVar1, uVar1 != param_1))) {
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  if (uVar2 == (int)this + 0x3fcU) {
    *(int *)(param_1 + 4) = (int)this + 0x3f0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x3f8);
    if (*(int *)((int)this + 0x3f8) != 0) {
      *((uint *)GEN_TOP((*(int *)((int)this + 0x3f8) + 4))) = param_1;
    }
    *(int *)((int)this + 0x408) = *(int *)((int)this + 0x408) + 1;
    *(uint *)((int)this + 0x3f8) = param_1;
    return 1;
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00cb3730 */
byte F_00cb3730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x3f8);
  while ((iVar2 = (int)this + 0x3fc, iVar1 != (int)this + 0x3fc && (iVar2 = iVar1, iVar1 != param_1)
         )) {
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if (iVar2 != (int)this + 0x3fc) {
    if (param_1 != 0) {
      if (*(int *)(param_1 + 4) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
      }
      if (*(int *)(param_1 + 8) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(undefined4 *)(param_1 + 4);
      }
      *(int *)((int)this + 0x408) = *(int *)((int)this + 0x408) + -1;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb37a0 */
unsigned int F_00cb37a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb37a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x3f8);
  if (this_00 != (undefined *)((int)this + 0x3fc)) {
    piVar3 = (int *)(param_1 + 0xc);
    while( true ) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3);
      bVar1 = F_00cb5430((undefined *)((int)this_00 + 0xc),uVar2);
      if (bVar1 != 0) break;
      if (this_00 != (undefined *)0x0) {
        this_00 = *(undefined * PTR32 *)((int)this_00 + 8);
      }
      if (this_00 == (undefined *)((int)this + 0x3fc)) {
        return 0;
      }
    }
    if (this_00 != (undefined *)0x0) {
      if (*(int *)((int)this_00 + 4) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 4) + 8))) = *(undefined4 *)((int)this_00 + 8);
      }
      if (*(int *)((int)this_00 + 8) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 8) + 4))) = *(undefined4 *)((int)this_00 + 4);
      }
      *(int *)((int)this + 0x408) = *(int *)((int)this + 0x408) + -1;
    }
    F_00cb5bf0(this_00,piVar3);
  }
  return 0;
}

/* ref: FUN_00cb3830 */
uint F_00cb3830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x3dc) != 0) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x3dc) + param_1 * 4)));
  }
  uVar1 = F_00cb2fc0((undefined *)((int)this + 0x58),param_1);
  if (uVar1 != 0) {
    return uVar1 + 0xc;
  }
  return 0;
}

/* ref: FUN_00cb3870 */
uint F_00cb3870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb2fc0((undefined *)((int)this + 0x58),param_1);
  if (uVar1 != 0) {
    return uVar1 + 0xc;
  }
  return 0;
}

/* ref: FUN_00cb38c0 */
uint F_00cb38c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb38c0u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106fe0d));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[18])REFP(0x11296f0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x11296e4));
  (*(undefined4 *)(gen_frame + 0x18)) = 6;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3d8))) != 0) {
    F_00cb3120((*(undefined * PTR32 *)&gen_args[0]));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3fc))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x404)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x404))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x404))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f0))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f4))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f8)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f8))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f4)));
  }
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 4;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 4;
  F_01051d29(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))),0x1c,0x20,((code *)REFP(0xcb2e80)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)));
  }
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 *)(gen_frame + 0x18)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x18)), 1, 3),1);
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16))) == '\0') && (uVar1 = 0, *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[18])REFP(0x1129680));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return uVar1;
}

/* ref: FUN_00cb3a40 */
uint F_00cb3a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb3a50((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00cb3a50 */
uint F_00cb3a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb38c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb3a80 */
byte F_00cb3a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb3a80u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x170];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x164);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  code * pcVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  byte * pbVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined * this_00;
  char * pcVar9;
  char * pcVar10;
  int * piVar11;
  undefined4 uVar12;
  char * pcVar13;
  uint uVar14;
  int iVar15;
  undefined4 * puVar16;
  
  puVar16 = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x158)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x154)) = ((code *)REFP(0x106fe54));
  (*(undefined * PTR32 *)(gen_frame + 0x150)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x14c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x150));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x150)))))) { return (byte)(uintptr_t)gen_eh_resume(); }
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(byte *)(gen_frame + 0x4b)) = 0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0xcb3acb;
  uVar5 = F_00cb9700((*(undefined4 * PTR32 *)&gen_args[1]));
  uVar14 = (uint)uVar5;
  (*(uint *)(gen_frame + 0x40)) = uVar14;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0xcb3adb;
  pbVar6 = (byte *)F_00cb97e0(puVar16);
  pcVar9 = (char *)*puVar16;
  cVar3 = *pcVar9;
  pcVar13 = (char *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar9;
  if (cVar3 != '\0') {
    pcVar10 = ((char *)(gen_frame + 0x4c));
    do {
      if (cVar3 == '.') {
        pcVar13 = pcVar10;
      }
      *pcVar10 = cVar3;
      cVar3 = pcVar10[(int)(pcVar9 + (1 - (int)((char *)(gen_frame + 0x4c))))];
      pcVar10 = pcVar10 + 1;
      uVar14 = (*(uint *)(gen_frame + 0x40));
    } while (cVar3 != '\0');
  }
  *pcVar13 = '\0';
  (*(undefined2 *)(gen_frame + 0x38)) = 0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)((char *)(gen_frame + 0x4c));
  (*(undefined4 *)(gen_frame + 0x158)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x34)) = (char *)0x0;
  (*(char *)(gen_frame + 0x3a)) = '\x01';
  F_00cb5730(&(*(char * PTR32 *)(gen_frame + 0x34)),((char *)(gen_frame + 0x4c)));
  (*(undefined4 *)(gen_frame + 0x158)) = 1;
  if (uVar14 != 0) {
    (*(uint *)(gen_frame + 0x40)) = uVar14;
    do {
      uVar14 = (uint)*pbVar6;
      (*(uint *)(gen_frame + 0x28)) = uVar14;
      (*(byte * PTR32 *)(gen_frame + 0x3c)) = pbVar6 + 1;
      if ((uVar14 == 0) || (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0x1c) == uVar14)) {
        iVar15 = 0;
        uVar14 = 0;
        puVar16 = (undefined4 *)0x0;
        (*(byte *)(gen_frame + 0x4b)) = 1;
        if ((*(undefined * PTR32 *)(gen_frame + 0x44)) != (undefined *)0xffffffa8) {
          uVar7 = 0;
          piVar11 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0x70);
          do {
            if (*piVar11 != 0) {
              puVar16 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar7 * 0x1c + 0x60);
              iVar15 = (int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar7 * 0x1c + 0x58;
              uVar14 = uVar7;
              break;
            }
            uVar7 = uVar7 + 1;
            piVar11 = piVar11 + 7;
          } while (uVar7 < 0x20);
        }
        (*(uint *)(gen_frame + 0x30)) = 0xffffffff;
        do {
          do {
            do {
              if (iVar15 != 0) goto LAB_00cb3bce;
              do {
                pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x44));
                if (puVar16 == (undefined4 *)0x0) {
LAB_00cb3cba: ;
                  pcVar2 = *((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4)));
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0x0;
                  this_00 = ((undefined *)GEN_TOP((*pcVar2)(REFG(int * PTR32, 0x15d7724),0x94,0)));
                  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this_00;
                  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x158)) + 0)) = 2;
                  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x158)) + 0)) = 2;
                  if (this_00 == (undefined *)0x0) {
                    pcVar9 = (char *)0x0;
                  }
                  else {
                    if (((*(uint *)&gen_args[2]) >> 1 & 1) == 0) {
                      uVar12 = *(undefined4 *)((int)pvVar8 + 1000);
                    }
                    else {
                      uVar12 = 0;
                    }
                    (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)uVar12;
                    (*(undefined1 * PTR32 *)(gen_frame + 0x20)) = ((undefined1 *)GEN_TOP((gen_frame + 0x8)));
                    uVar14 = (uint)((byte)(*(uint *)&gen_args[2]) & 1);
                    (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)uVar14;
                    pcVar9 = (char *)F_00cb9050(this_00,(*(uint *)(gen_frame + 0x28)),(*(undefined4 * PTR32 *)(gen_frame + 0x24)),(*(char * PTR32 *)(gen_frame + 0x2c)),(*(byte * PTR32 *)(gen_frame + 0x3c)),
                                                  uVar12,uVar14);
                  }
                  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x158)) + 0)) = 1;
                  (*(undefined4 *)(gen_frame + 0x158)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x158)), 1, 3),1);
                  if (-1 < (int)(*(uint *)(gen_frame + 0x30))) {
                    *(short *)(pcVar9 + 0x7e) = (short)(*(uint *)(gen_frame + 0x30));
                  }
                  if (*(int * PTR32 *)((int)pvVar8 + 0x3e0) != (int *)0x0) {
                    if (pcVar9 == (char *)0x0) {
                      pcVar13 = (char *)0x0;
                    }
                    else {
                      pcVar13 = pcVar9 + 0xc;
                    }
                    **(int * PTR32 *)((int)pvVar8 + 0x3e0) = (int)pcVar13;
                    *(undefined4 *)((int)pvVar8 + 0x3e0) = 0;
                  }
                  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(pcVar9 + 0xc) + 100)));
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0xcb3d6b;
                  uVar14 = (*pcVar2)(pcVar9 + 0xc);
                  uVar14 = *(ushort *)(uVar14 + 4) >> 1 & 0x1f;
                  iVar15 = *(int *)((int)pvVar8 + uVar14 * 0x1c + 0x68);
                  *(int *)(pcVar9 + 4) = iVar15;
                  *(undefined4 *)(pcVar9 + 8) = *(undefined4 *)(iVar15 + 8);
                  if (*(int *)(iVar15 + 8) != 0) {
                    *((char * PTR32 *)GEN_TOP((*(int *)(iVar15 + 8) + 4))) = pcVar9;
                  }
                  *(char * PTR32 *)(iVar15 + 8) = pcVar9;
                  piVar11 = (int *)((int)pvVar8 + uVar14 * 0x1c + 0x70);
                  *piVar11 = *piVar11 + 1;
                  *(int *)((int)pvVar8 + 0x3d8) = *(int *)((int)pvVar8 + 0x3d8) + 1;
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)pcVar9;
                  F_00cb37a0(pvVar8,pcVar9);
                  if (pcVar9[0x81] != '\0') {
                    (*(byte *)(gen_frame + 0x4b)) = 0;
                  }
                  goto LAB_00cb3dc7;
                }
LAB_00cb3bce: ;
                iVar1 = puVar16[3];
                (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = &(*(char * PTR32 *)(gen_frame + 0x34));
                pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 100))(puVar16 + 3)));
                bVar4 = F_00cb5430(pvVar8,(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
                pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x44));
                if (bVar4 != 0) {
                  (*(uint *)(gen_frame + 0x30)) = (uint)*(ushort *)((int)puVar16 + 0x7e);
                  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0x3e0) =
                       *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0x3dc) + (uint)*(ushort *)((int)puVar16 + 0x7e) * 4
                  ;
                  pcVar2 = *(gen_code32 *)(puVar16[3] + 100);
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0xcb3c6c;
                  uVar14 = (*pcVar2)(puVar16 + 3);
                  uVar5 = *(ushort *)(uVar14 + 4);
                  if (puVar16[1] != 0) {
                    *(undefined4 *)(puVar16[1] + 8) = puVar16[2];
                  }
                  if (puVar16[2] != 0) {
                    *(undefined4 *)(puVar16[2] + 4) = puVar16[1];
                  }
                  piVar11 = ((int *)GEN_TOP(((int)pvVar8 + (uVar5 >> 1 & 0x1f) * 0x1c + 0x70)));
                  *piVar11 = *piVar11 + -1;
                  *(int *)((int)pvVar8 + 0x3d8) = *(int *)((int)pvVar8 + 0x3d8) + -1;
                  pcVar2 = *(gen_code32 *)*puVar16;
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0x1;
                  (*pcVar2)(puVar16,1);
                  goto LAB_00cb3cba;
                }
              } while (iVar15 == 0);
              puVar16 = (undefined4 *)puVar16[2];
            } while (puVar16 != (undefined4 *)(iVar15 + 0xc));
            uVar14 = uVar14 + 1;
            puVar16 = (undefined4 *)0x0;
            iVar15 = 0;
          } while (0x1f < uVar14);
          piVar11 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar14 * 0x1c + 0x70);
          uVar7 = uVar14;
          do {
            if (*piVar11 != 0) {
              puVar16 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar7 * 0x1c + 0x60);
              iVar15 = (int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar7 * 0x1c + 0x58;
              uVar14 = uVar7;
              break;
            }
            uVar7 = uVar7 + 1;
            piVar11 = piVar11 + 7;
          } while (uVar7 < 0x20);
        } while( true );
      }
LAB_00cb3dc7: ;
      bVar4 = *(*(byte * PTR32 *)(gen_frame + 0x3c));
      pbVar6 = (*(byte * PTR32 *)(gen_frame + 0x3c));
      while (bVar4 != 0) {
        pbVar6 = pbVar6 + 1;
        bVar4 = *pbVar6;
      }
      pbVar6 = pbVar6 + 1;
      uVar14 = (*(uint *)(gen_frame + 0x40)) - 1;
      (*(uint *)(gen_frame + 0x40)) = uVar14;
    } while (uVar14 != 0);
  }
  (*(undefined4 *)(gen_frame + 0x158)) = 0xffffffff;
  if (((*(char *)(gen_frame + 0x3a)) == '\0') && ((*(char * PTR32 *)(gen_frame + 0x34)) != (char *)0x0)) {
    iVar15 = *REFG(int * PTR32, 0x15d7724);
    (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)(*(char * PTR32 *)(gen_frame + 0x34));
    ((code *)*(gen_code32 *)(iVar15 + 8))(REFG(int * PTR32, 0x15d7724),(*(char * PTR32 *)(gen_frame + 0x34)));
  }
  bVar4 = (*(byte *)(gen_frame + 0x4b));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x150));
  F_00c47745((*(uint *)(gen_frame + 0x14c)) ^ (uint)(uint)(gen_frame + 0x15c));
  return bVar4;
}

/* ref: FUN_00cb3e30 */
uint F_00cb3e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3e30u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x106feb4));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x11296dc));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[18])REFP(0x11296f0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x11296e4));
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 4;
  (*(undefined4 *)(gen_frame + 0x28)) = 4;
  F_01051d8c(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))),0x1c,0x20,((code *)REFP(0xcb2bd0)),((code *)REFP(0xcb2e80)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f0))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3fc))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x404))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f8))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3fc)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x408))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f0)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x410))) = 0;
  REFG(undefined4, 0x15d7724) = (*(undefined4 *)&gen_args[1]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb3f50 */
uint F_00cb3f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3f50u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x38)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x34)) = ((code *)REFP(0x106fee0));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x30));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x30)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]));
  if ((char)uVar3 == '\0') {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if (uVar3 != 0) {
      F_00cb5aa0(((undefined1 *)(gen_frame + 0x20)),uVar3);
      (*(uint *)(gen_frame + 0x38)) = 0;
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
      F_00cb59f0(((undefined1 *)(gen_frame + 0x28)),uVar3,uVar4);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x38)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x38)), 1, 3),1);
      bVar2 = F_00cb58a0(((undefined1 *)(gen_frame + 0x20)));
      if (bVar2 == 0) {
        bVar2 = F_00cb58f0(((undefined1 *)(gen_frame + 0x28)));
        if (bVar2 == 0) {
          (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
          uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
          (*(uint *)(gen_frame + 0x18)) = uVar4;
          (*(uint *)(gen_frame + 0x1c)) = uVar3;
          bVar2 = F_00cb3a80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + -4))),&(*(uint *)(gen_frame + 0x18)),(*(int * PTR32 *)&gen_args[1]));
          if (bVar2 == 0) {
            *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x408))) = 0;
          }
        }
        else {
          F_00cb2290(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + -4))),((undefined1 *)(gen_frame + 0x28)));
        }
      }
      else {
        F_00cb2200(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + -4))),((undefined1 *)(gen_frame + 0x20)));
      }
      uVar3 = (*(uint *)(gen_frame + 0x38));
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x38)) = uVar3 & 0xffffff00;
      F_00cb5a10();
      (*(uint *)(gen_frame + 0x38)) = 0xffffffff;
      F_00cb5b50(((undefined1 *)(gen_frame + 0x20)));
    }
  }
  else {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x408))) = 0;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1000))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1000))) + -1;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 8))))(REFG(int, 0x15d7724) + 4,piVar1);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
  return uVar3;
}

/* ref: FUN_00cb40a0 */
ushort F_00cb40a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb40a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 8 + param_2 * 2);
}

/* ref: FUN_00cb40b0 */
ushort F_00cb40b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb40b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + param_1 * 2 + 8) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb40e0 */
ushort F_00cb40e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb40e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 6) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb4120 */
uint F_00cb4120(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4120u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0xffff0000;
  return (uint)in_ecx;
}

/* ref: FUN_00cb4170 */
byte F_00cb4170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  short * psVar1;
  uint uVar2;
  
  if ((*(short *)((int)this + 4) == (short)param_1[1]) && (*(int *)this == *param_1)) {
    uVar2 = 0;
    if (*(ushort *)((int)this + 6) != 0) {
      psVar1 = (short *)((int)this + 8);
      do {
        if (*psVar1 != *((short *)GEN_TOP((((int)param_1 - (int)this) + (int)psVar1)))) {
          return 0;
        }
        uVar2 = uVar2 + 1;
        psVar1 = psVar1 + 1;
      } while (uVar2 < *(ushort *)((int)this + 6));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb41d0 */
uint F_00cb41d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb41d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(uint *)this = param_1;
  *(undefined2 *)((int)this + 6) = 0;
  *(short *)((int)this + 4) = (short)param_1;
  return param_1 & 0xffff;
}

/* ref: FUN_00cb41f0 */
unsigned int F_00cb41f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb41f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  undefined2 * puVar3;
  ushort * puVar4;
  
  *(undefined4 *)this = param_1;
  uVar2 = 0;
  *(short *)((int)this + 6) = (short)param_3;
  if (param_3 != 0) {
    puVar3 = (undefined2 *)((int)this + 8);
    do {
      *puVar3 = *(undefined2 *)(param_2 + uVar2 * 2);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < param_3);
  }
  uVar1 = *(ushort *)this;
  if ((*(short *)((int)this + 6) != -1) && (*(short *)((int)this + 6) != 0)) {
    uVar2 = (uint)*(ushort *)((int)this + 6);
    puVar4 = (ushort *)((int)this + 8);
    do {
      uVar1 = uVar1 * 2 ^ *puVar4;
      puVar4 = puVar4 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(ushort *)((int)this + 4) = uVar1;
  return 0;
}

/* ref: FUN_00cb4260 */
byte F_00cb4260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  short * psVar2;
  
  uVar1 = 0;
  if (*(ushort *)((int)this + 6) != 0) {
    psVar2 = (short *)((int)this + 8);
    do {
      if (*psVar2 != *(short *)(param_1 + uVar1 * 2)) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 1;
    } while (uVar1 < *(ushort *)((int)this + 6));
  }
  return 1;
}

/* ref: FUN_00cb42a0 */
uint F_00cb42a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb42a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = param_1;
  *(undefined2 *)((int)this + 6) = 0;
  *(short *)((int)this + 4) = (short)param_1;
  return (uint)this;
}

/* ref: FUN_00cb42c0 */
uint F_00cb42c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb42c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  ushort uVar1;
  ushort * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = param_1;
  puVar2 = (ushort *)((int)this + 8);
  *(short *)((int)this + 6) = (short)param_3;
  F_00c46aa0(puVar2,param_2,param_3 * 2);
  uVar1 = *(ushort *)this;
  if ((*(short *)((int)this + 6) != -1) && (*(short *)((int)this + 6) != 0)) {
    uVar3 = (uint)*(ushort *)((int)this + 6);
    do {
      uVar1 = uVar1 * 2 ^ *puVar2;
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(ushort *)((int)this + 4) = uVar1;
  return (uint)this;
}

/* ref: FUN_00cb4320 */
uint F_00cb4320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  
  if (*(ushort *)((int)param_1 + 6) == 0xffff) {
    *(undefined2 *)((int)this + 6) = 0xffff;
    return (uint)this;
  }
  F_00cb41f0(this,*param_1,param_1 + 2,(uint)*(ushort *)((int)param_1 + 6));
  return ((uint)(uint)(this));
}

/* ref: FUN_00cb4360 */
uint F_00cb4360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0xffff0000;
  if (*(ushort *)((int)param_1 + 6) == 0xffff) {
    *(undefined2 *)((int)this + 6) = 0xffff;
    return (uint)this;
  }
  F_00cb41f0(this,*param_1,param_1 + 2,(uint)*(ushort *)((int)param_1 + 6));
  return ((uint)(uint)(this));
}

/* ref: FUN_00cb43b0 */
byte F_00cb43b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb43b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cb4170(this,param_1);
  return bVar1 == 0;
}

/* ref: FUN_00cb43e0 */
byte F_00cb43e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb43e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  iVar6 = 0;
  uVar5 = 0;
  local_8 = 0;
  if (*(int *)((int)this + 4) != 0) {
    do {
      bVar3 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar6))),param_1);
      if ((bVar3 != 0) && (*((int *)GEN_TOP((iVar6 + 0xc + *(int *)((int)this + 0xc)))) == 0)) {
        uVar4 = ((code *)*(gen_code32 *)(*param_2 + 0x28))(param_2,param_1);
        *((uint *)GEN_TOP((iVar6 + 0xc + *(int *)((int)this + 0xc)))) = uVar4;
        piVar2 = *((int * PTR32 *)GEN_TOP((iVar6 + 0xc + *(int *)((int)this + 0xc))));
        uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
        *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + uVar5 * 4))) = uVar4;
      }
      iVar1 = iVar6 + *(int *)((int)this + 0xc);
      if ((*(short *)(iVar1 + 6) != -1) && (*(int *)(iVar1 + 0xc) == 0)) {
        local_8 = local_8 + 1;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x10;
    } while (uVar5 < *(uint *)((int)this + 4));
    if (local_8 != 0) {
      return 0;
    }
  }
  ((code *)*(gen_code32 *)(*(int *)this + 4))
            (this,*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 0x10),
             *(undefined4 *)((int)this + 8));
  return 1;
}

/* ref: FUN_00cb44e0 */
uint F_00cb44e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb44e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  int iVar4;
  uint uVar3;
  
  iVar4 = param_1 * 0x10;
  bVar2 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))),param_2);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    F_00cb4320(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))),param_2);
    if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc + iVar4))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc + iVar4)));
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc + iVar4))) = 0;
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) = 0;
    uVar3 = param_1;
  }
  return uVar3;
}

/* ref: FUN_00cb4540 */
uint F_00cb4540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00cb42a0(((undefined1 *)(gen_frame + 0xc)),param_2);
  iVar4 = param_1 * 0x10;
  bVar2 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))),((undefined1 *)(gen_frame + 0xc)));
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    uVar3 = F_00cb4320(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))),((undefined1 *)(gen_frame + 0xc)));
    if (*((int *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc)))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc))));
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      uVar3 = *(uint *)((int)this + 0xc);
      *(undefined4 *)(iVar4 + 0xc + uVar3) = 0;
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_00cb45d0 */
uint F_00cb45d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb45d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int iVar5;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar3 = F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
  iVar5 = param_1 * 0x10;
  bVar2 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar5))),uVar3);
  uVar4 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    F_00cb4320(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar5))),uVar3);
    if (*((int *)GEN_TOP((iVar5 + 0xc + *(int *)((int)this + 0xc)))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar5 + 0xc + *(int *)((int)this + 0xc))));
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      *((undefined4 *)GEN_TOP((iVar5 + 0xc + *(int *)((int)this + 0xc)))) = 0;
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) = 0;
    uVar4 = param_1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar4;
}

/* ref: FUN_00cb4650 */
uint F_00cb4650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb4660 */
uint F_00cb4660(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1 << 4,0);
  return uVar1;
}

/* ref: FUN_00cb4680 */
uint F_00cb4680(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1 * 4,0);
  return uVar1;
}

/* ref: FUN_00cb46a0 */
uint F_00cb46a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb46a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb46d0 */
uint F_00cb46d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb46d0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb4700 */
uint F_00cb4700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1129738));
  *(uint *)((int)this + 4) = param_1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1 << 4,0);
  *(uint *)((int)this + 0xc) = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1 * 4,0);
  *(uint *)((int)this + 0x10) = uVar1;
  uVar1 = 0;
  if (param_1 != 0) {
    iVar2 = 0;
    do {
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xc) + 6 + iVar2))) = 0xffff;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + uVar1 * 4))) = 0;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar1 < param_1);
  }
  return (uint)this;
}

/* ref: FUN_00cb47a0 */
uint F_00cb47a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb47a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar4 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (*(int *)((int)this + 4) != 0) {
    do {
      uVar3 = F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
      bVar2 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))),uVar3);
      if (bVar2 == 0) {
        F_00cb4320(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))),uVar3);
        if (*((int *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc)))) != 0) {
          piVar1 = *((int * PTR32 *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc))));
          ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
          *((undefined4 *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc)))) = 0;
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + (*(uint *)(gen_frame + 0x8)) * 4))) = 0;
      }
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      iVar4 = iVar4 + 0x10;
    } while ((*(uint *)(gen_frame + 0x8)) < *(uint *)((int)this + 4));
  }
  if (*(int *)((int)this + 0xc) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_00cb4870 */
uint F_00cb4870(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1129738));
  uVar1 = F_00cb47a0(this);
  return uVar1;
}

/* ref: FUN_00cb4880 */
uint F_00cb4880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1129738));
  F_00cb47a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb48d0 */
uint F_00cb48d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb48d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(param_2 + 8) == 0) {
    if (*(int *)(param_2 + 4) == 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4),param_1);
      *(uint *)(param_2 + 4) = uVar2;
    }
    piVar1 = *(int * PTR32 *)(param_2 + 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *(uint *)(param_2 + 8) = uVar2;
      if (uVar2 != 0) {
        uVar2 = F_00cb09f0(uVar2);
        if ((char)uVar2 != '\0') goto LAB_00cb491e;
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 4) + 4))))(*(int * PTR32 *)(param_2 + 4));
    }
  }
LAB_00cb491e: ;
  return *(uint *)(param_2 + 8);
}

/* ref: FUN_00cb49a0 */
uint F_00cb49a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb49a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb49c0 */
byte F_00cb49c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb49c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb49e0 */
byte F_00cb49e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb49e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb4a10 */
uint F_00cb4a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  F_00cb4120(this);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_00cb4320(this,param_1);
  *(undefined8 *)((int)this + 0xc) = *param_2;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 1);
  return (uint)this;
}

/* ref: FUN_00cb4a60 */
uint F_00cb4a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb4a70 */
uint F_00cb4a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb4a80 */
byte F_00cb4a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4a80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00cb4aa0 */
uint F_00cb4aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00cb4120(this);
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_00cb4320(this,param_1);
  *(undefined8 *)((int)this + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return (uint)this;
}

/* ref: FUN_00cb4af0 */
unsigned int F_00cb4af0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x18);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00cb4b30 */
unsigned int F_00cb4b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4b30u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined * this_00;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x106ff0b));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),0x1c,0)));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this_00;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if (this_00 == (undefined *)0x0) {
    this_00 = (undefined *)0x0;
  }
  else {
    F_00cb4120(this_00);
    iVar1 = (*(int *)&gen_args[1]);
    *(undefined4 *)((int)this_00 + 0x10) = 0;
    *(undefined4 *)((int)this_00 + 0x14) = 0;
    *(undefined4 *)((int)this_00 + 0xc) = 1;
    *(undefined4 *)((int)this_00 + 0x18) = 0;
    F_00cb4320(this_00,(*(int *)&gen_args[1]));
    *(undefined8 *)((int)this_00 + 0xc) = *(undefined8 *)(iVar1 + 0xc);
    *(undefined4 *)((int)this_00 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
  }
  *(undefined4 *)((int)this_00 + 0x18) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 1;
  *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = this_00;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return 0;
}

/* ref: FUN_00cb4bd0 */
uint F_00cb4bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 8);
  iVar2 = *param_2;
  if (iVar2 == iVar1) {
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
    *(undefined4 *)((int)this + 8) = uVar3;
    *param_1 = uVar3;
    return (uint)param_1;
  }
  iVar4 = *(int *)(iVar1 + 0x18);
  while( true ) {
    if (iVar4 == 0) {
      *param_1 = 0;
      return (uint)param_1;
    }
    iVar5 = *(int *)(iVar1 + 0x18);
    if (iVar2 == iVar5) break;
    iVar4 = *(int *)(iVar5 + 0x18);
    iVar1 = iVar5;
  }
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  *param_1 = *(undefined4 *)(*param_2 + 0x18);
  return (uint)param_1;
}

/* ref: FUN_00cb4c40 */
uint F_00cb4c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4c40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb4c50 */
uint F_00cb4c50(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4c50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb4c60 */
uint F_00cb4c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x18);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cb4cc0 */
uint F_00cb4cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint in_EAX = 0;
  uint in_ecx;
  
  iVar1 = *(int *)((int)this + 0x10);
  while( true ) {
    if (iVar1 == 0) {
      return in_EAX;
    }
    if (*(int *)(iVar1 + 0x14) == 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4),iVar1);
        *(uint *)(iVar1 + 0x10) = in_EAX;
      }
      piVar2 = *(int * PTR32 *)(iVar1 + 0x10);
      if (piVar2 != (int *)0x0) {
        in_ecx = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
        *(uint *)(iVar1 + 0x14) = in_ecx;
        if ((in_ecx == 0) || (in_EAX = F_00cb09f0(in_ecx), (char)in_EAX == '\0')) {
          in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x10) + 4))))(*(int * PTR32 *)(iVar1 + 0x10));
        }
      }
    }
    if (iVar1 == 0) break;
    iVar1 = *(int *)(iVar1 + 0x18);
  }
  return in_EAX;
}

/* ref: FUN_00cb4d30 */
unsigned int F_00cb4d30(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  for (iVar1 = *(int *)((int)this + 0x10); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    if (*(int *)(iVar1 + 0x14) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x10) + 4))))(*(int * PTR32 *)(iVar1 + 0x10));
    }
    if (iVar1 == 0) break;
  }
  iVar1 = *(int *)((int)this + 0x10);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),iVar1);
    iVar1 = iVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return 0;
}

/* ref: FUN_00cb4d90 */
uint F_00cb4d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4d90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129744));
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cb4dc0 */
unsigned int F_00cb4dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4dc0u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x106ff3b));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1129744));
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  F_00cb4d30((*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x18);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),iVar2);
    iVar2 = iVar1;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return 0;
}

/* ref: FUN_00cb4e40 */
uint F_00cb4e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x10);
  *(int *)((int)this + 0x18) = iVar1;
  if (iVar1 != 0) {
    F_00cb4320(param_1,iVar1);
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14)));
  }
  return 0;
}

/* ref: FUN_00cb4e70 */
uint F_00cb4e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00cb42a0(((undefined1 *)(gen_frame + 0xc)),*param_1);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  *(undefined4 * PTR32 *)((int)this + 0x18) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *param_1 = *puVar1;
    uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00cb4ed0 */
uint F_00cb4ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (*(int *)((int)this + 0x18) != 0) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0x18)));
    *(int *)((int)this + 0x18) = iVar1;
    if (iVar1 != 0) {
      F_00cb4320(param_1,iVar1);
      return *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14)));
    }
  }
  return 0;
}

/* ref: FUN_00cb4f10 */
uint F_00cb4f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00cb42a0(((undefined1 *)(gen_frame + 0xc)),*param_1);
  if (*(int *)((int)this + 0x18) != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x18)));
    *(undefined4 * PTR32 *)((int)this + 0x18) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *param_1 = *puVar1;
      uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14)));
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar2;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00cb4f80 */
uint F_00cb4f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  byte bVar2;
  
  for (iVar1 = *(int *)((int)this + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    bVar2 = F_00cb4170(param_2,iVar1);
    if (bVar2 != 0) {
      *param_1 = iVar1;
      return (uint)param_1;
    }
    if (iVar1 == 0) break;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb4fd0 */
uint F_00cb4fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x10);
  if (iVar3 != 0) {
    while (bVar1 = F_00cb4170(param_1,iVar3), bVar1 == 0) {
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = *(int *)(iVar3 + 0x18);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (iVar3 != 0) {
      uVar2 = F_00cb48d0(this,param_1,iVar3 + 0xc);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00cb5020 */
byte F_00cb5020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0) {
    while (bVar1 = F_00cb4170(param_1,iVar2), bVar1 == 0) {
      if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 0x18), iVar2 == 0)) goto LAB_00cb505d;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 0;
    }
  }
LAB_00cb505d: ;
  F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 4)) = 0;
  (*(undefined8 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_00cb4320(((undefined1 *)(gen_frame + 0xc)),param_1);
  (*(undefined8 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_00cb4b30((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: FUN_00cb50e0 */
byte F_00cb50e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb50e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00cb42a0(((undefined1 *)(gen_frame + 0x0)),param_1);
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0) {
    while (bVar1 = F_00cb4170(((undefined1 *)(gen_frame + 0x0)),iVar2), bVar1 == 0) {
      if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 0x18), iVar2 == 0)) goto LAB_00cb512e;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 0;
    }
  }
LAB_00cb512e: ;
  F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 4)) = 0;
  (*(undefined8 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_00cb4320(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x0)));
  (*(undefined8 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_00cb4b30((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: FUN_00cb51b0 */
unsigned int F_00cb51b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb51b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  int iVar2;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  if (iVar2 != 0) {
    while (bVar1 = F_00cb4170(this_00,iVar2), bVar1 == 0) {
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = *(int *)(iVar2 + 0x18);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if ((iVar2 != 0) &&
       (*(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + -1, *(int *)(iVar2 + 0xc) < 1)) {
      (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)iVar2;
      if (*(int *)(iVar2 + 0x14) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0x10) + 4))))(*(int * PTR32 *)(iVar2 + 0x10));
      }
      F_00cb4bd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined * PTR32 *)&gen_args[1]));
    }
  }
  return 0;
}

/* ref: FUN_00cb5220 */
uint F_00cb5220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = F_00cb42a0(((undefined1 *)(gen_frame + 0xc)),param_1);
  iVar3 = *(int *)((int)this + 0x10);
  if (iVar3 != 0) {
    while( true ) {
      bVar1 = F_00cb4170(((undefined1 *)(gen_frame + 0xc)),iVar3);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) break;
      if (iVar3 == 0) goto LAB_00cb52a1;
      iVar3 = *(int *)(iVar3 + 0x18);
      if (iVar3 == 0) {
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
        return uVar2;
      }
    }
    (*(int *)(gen_frame + 0x8)) = iVar3;
    if ((iVar3 != 0) &&
       (*(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1, *(int *)(iVar3 + 0xc) < 1)) {
      if (*(int *)(iVar3 + 0x14) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 0x10) + 4))))(*(int * PTR32 *)(iVar3 + 0x10));
      }
      uVar2 = F_00cb4bd0((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
    }
  }
LAB_00cb52a1: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_00cb52c0 */
uint F_00cb52c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb52c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4dc0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb52f0 */
uint F_00cb52f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb52f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00c472af(((char *)(gen_frame + 0x8)),0x100,"Common.Component.Excel.%s",param_2);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1,((char *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_00cb5350 */
uint F_00cb5350(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xcb5350u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  F_00c475c9(((char *)(gen_frame + 0x8)),0x400,param_1,((undefined *)&gen_args[1]));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 8) + 4))))(REFG(int, 0x15d7724) + 8,((char *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar1;
}

/* ref: FUN_00cb53b0 */
uint F_00cb53b0(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xcb53b0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  F_00c475c9(((char *)(gen_frame + 0x8)),0x400,param_1,((undefined *)&gen_args[1]));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 8) + 8))))(REFG(int, 0x15d7724) + 8,((char *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar1;
}

/* ref: FUN_00cb5430 */
byte F_00cb5430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if (*(short *)((int)this + 4) != *(short *)(param_1 + 1)) {
    return 0;
  }
  pbVar3 = (byte *)*param_1;
  pbVar2 = *(byte * PTR32 *)this;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5490 */
uint F_00cb5490(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*(int *)this);
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb54b0 */
byte F_00cb54b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb54b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if (**(int * PTR32 *)this != *(int *)*param_1) {
    return 0;
  }
  pbVar3 = (byte *)((int *)*param_1 + 1);
  pbVar2 = ((byte *)GEN_TOP((*(int * PTR32 *)this + 1)));
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5510 */
byte F_00cb5510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  uint * puVar2;
  byte * pbVar3;
  bool bVar4;
  
  if (**(uint * PTR32 *)this != (uint)*(ushort *)(param_1 + 1)) {
    return 0;
  }
  pbVar3 = (byte *)*param_1;
  puVar2 = *(uint * PTR32 *)this + 1;
  while( true ) {
    bVar1 = (byte)*puVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = *(byte *)((int)puVar2 + 1);
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    puVar2 = (uint *)((int)puVar2 + 2);
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5570 */
unsigned int F_00cb5570(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  char cVar2;
  char * pcVar3;
  uint uVar4;
  byte bVar5;
  char * pcVar6;
  
  pcVar6 = ((char *)GEN_TOP(((*(uint *)this & 0xffffff) + (int)this)));
  pcVar3 = pcVar6;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  bVar5 = 0;
  uVar4 = 0;
  if ((int)pcVar3 - (int)(pcVar6 + 1) != -1) {
    do {
      pbVar1 = (byte *)(pcVar6 + uVar4);
      uVar4 = uVar4 + 1;
      bVar5 = bVar5 * '\x02' ^ *pbVar1;
    } while (uVar4 < ((int)pcVar3 - (int)(pcVar6 + 1)) + 1U);
  }
  *(byte *)((int)this + 3) = bVar5;
  return 0;
}

/* ref: FUN_00cb55b0 */
byte F_00cb55b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb55b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if ((char)(*(uint *)((int)(uintptr_t)this) >> 0x18) != (char)(*param_1 >> 0x18)) {
    return 0;
  }
  pbVar2 = ((byte *)GEN_TOP(((*param_1 & 0xffffff) + (int)param_1)));
  pbVar3 = ((byte *)GEN_TOP(((*(uint *)this & 0xffffff) + (int)this)));
  while( true ) {
    bVar1 = *pbVar3;
    bVar4 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar3[1];
    bVar4 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5630 */
byte F_00cb5630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if ((char)(*(uint *)((int)(uintptr_t)this) >> 0x18) != *(char *)*param_1) {
    return 0;
  }
  pbVar3 = (byte *)((char *)*param_1 + 4);
  pbVar2 = ((byte *)GEN_TOP(((*(uint *)this & 0xffffff) + (int)this)));
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb56a0 */
byte F_00cb56a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb56a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if ((char)(*(uint *)((int)(uintptr_t)this) >> 0x18) != *(char *)(param_1 + 1)) {
    return 0;
  }
  pbVar3 = (byte *)*param_1;
  pbVar2 = ((byte *)GEN_TOP(((*(uint *)this & 0xffffff) + (int)this)));
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5710 */
uint F_00cb5710(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5710u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1,0);
  return uVar1;
}

/* ref: FUN_00cb5730 */
unsigned int F_00cb5730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  uint uVar5;
  ushort uVar6;
  
  if ((*(char *)((int)this + 6) == '\0') && (*(int *)this != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*(int *)this);
    *(undefined4 *)this = 0;
  }
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar6 = 0;
  pcVar3 = pcVar3 + (1 - (int)(param_1 + 1));
  *(undefined2 *)((int)this + 4) = 0;
  if (*(char *)((int)this + 6) == '\0') {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),pcVar3,0);
    *(uint *)this = uVar5;
    pcVar4 = (char *)0x0;
    if (pcVar3 != (char *)0x0) {
      do {
        pcVar4[*(int *)this] = param_1[(int)pcVar4];
        pcVar1 = param_1 + (int)pcVar4;
        pcVar4 = pcVar4 + 1;
        *(short *)((int)this + 4) = *(short *)((int)this + 4) * 2 ^ (short)*pcVar1;
      } while (pcVar4 < pcVar3);
    }
  }
  else {
    pcVar4 = (char *)0x0;
    *(char * PTR32 *)this = param_1;
    if (pcVar3 != (char *)0x0) {
      do {
        uVar6 = (short)param_1[(int)pcVar4] ^ uVar6 * 2;
        pcVar4 = pcVar4 + 1;
        *(ushort *)((int)this + 4) = uVar6;
      } while (pcVar4 < pcVar3);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00cb57e0 */
uint F_00cb57e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb57e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  uint * puVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)this != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*(int *)this);
    *(undefined4 *)this = 0;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_1 + 1);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),iVar4 + 5,0);
  *(uint *)this = uVar5;
  uVar6 = 0;
  uVar5 = 0;
  if (iVar4 == -1) {
    **(undefined4 * PTR32 *)this = 0;
    return uVar5;
  }
  do {
    *(char *)(*(int *)this + 4 + uVar5) = param_1[uVar5];
    pcVar3 = param_1 + uVar5;
    uVar5 = uVar5 + 1;
    uVar6 = uVar6 * 2 ^ (int)*pcVar3;
  } while (uVar5 < iVar4 + 1U);
  puVar2 = *(uint * PTR32 *)this;
  *puVar2 = uVar6;
  return (uint)puVar2;
}

/* ref: FUN_00cb5870 */
uint F_00cb5870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00cb57e0(this,param_1);
  }
  return uVar1;
}

/* ref: FUN_00cb5890 */
uint F_00cb5890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb58a0 */
byte F_00cb58a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb58a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  pcVar1 = (char *)*in_ecx;
  if ((((*pcVar1 == 'E') && (pcVar1[1] == 'X')) && (pcVar1[2] == 'L')) && (pcVar1[3] == 'F')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb58d0 */
uint F_00cb58d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb58d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)((int)this + 4) + param_2 * 8;
  return (uint)param_1;
}

/* ref: FUN_00cb58f0 */
byte F_00cb58f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb58f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  pcVar1 = (char *)*in_ecx;
  if ((((*pcVar1 == 'E') && (pcVar1[1] == 'X')) && (pcVar1[2] == 'L')) && (pcVar1[3] == 'T')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb5920 */
uint F_00cb5920(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(char * PTR32 *)((int)this + 4) != (char *)0x0) {
    cVar1 = **(char * PTR32 *)((int)this + 4);
    while ((cVar1 != '\n' &&
           ((cVar1 != '\r' || (cVar1 = '\r', *((char *)GEN_TOP((*(int *)((int)this + 4) + 1))) != '\n'))))) {
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      cVar1 = **(char * PTR32 *)((int)this + 4);
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + (cVar1 != '\n') + 1;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == *(uint *)(*(int *)this + 4)) {
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00cb5970 */
unsigned int F_00cb5970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb5970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  char cVar1;
  byte bVar2;
  bool bVar3;
  char * pcVar4;
  char * pcVar5;
  byte * pbVar6;
  
  pcVar5 = *(char * PTR32 *)((int)this + 4);
  cVar1 = *pcVar5;
  pcVar4 = param_1;
  while (cVar1 != ',') {
    pcVar5 = pcVar5 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar5;
  }
  builtin_strncpy(pcVar4,".exh",5);
  pbVar6 = (byte *)(pcVar5 + 1);
  bVar3 = false;
  *param_2 = 0;
  while (((bVar2 = *pbVar6, bVar2 != 0 && (bVar2 != 0xd)) && (bVar2 != 10))) {
    if (bVar2 == 0x2d) {
      bVar3 = true;
      pbVar6 = pbVar6 + 1;
    }
    else {
      if ((byte)(bVar2 - 0x30) < 10) {
        *param_2 = (bVar2 - 0x30) + *param_2 * 10;
      }
      pbVar6 = pbVar6 + 1;
    }
  }
  if (bVar3) {
    *param_2 = -*param_2;
  }
  return 0;
}

/* ref: FUN_00cb59f0 */
uint F_00cb59f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb59f0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_2 + param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00cb5a10 */
unsigned int F_00cb5a10(void)
{
  GEN_ENTER(0xcb5a10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00cb5a20 */
uint F_00cb5a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *(undefined4 * PTR32 *)this = param_1;
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  F_00cb5920(this);
  return ((uint)(uint)(this));
}

/* ref: FUN_00cb5a50 */
uint F_00cb5a50(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1 * 8,0);
  return uVar1;
}

/* ref: FUN_00cb5a70 */
uint F_00cb5a70(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5a70u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb5aa0 */
uint F_00cb5aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  char * pcVar3;
  int iVar4;
  
  *(char * PTR32 *)this = param_1;
  if ((((*param_1 == 'E') && (param_1[1] == 'X')) && (param_1[2] == 'L')) && (param_1[3] == 'F')) {
    iVar4 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),iVar4 * 8,0)));
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
    pcVar3 = (char *)(*(int *)this + 0x10);
    do {
      *puVar2 = pcVar3;
      cVar1 = *pcVar3;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      pcVar3 = pcVar3 + 1;
      puVar2[1] = pcVar3;
      cVar1 = *pcVar3;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
      while (cVar1 != '\n') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      pcVar3 = pcVar3 + 1;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00cb5b50 */
uint F_00cb5b50(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  pcVar1 = *(char * PTR32 *)this;
  if ((((*pcVar1 == 'E') && (pcVar1[1] == 'X')) && (pcVar1[2] == 'L')) &&
     ((pcVar1[3] == 'F' && (pcVar1 = (char *)0x0, *(int *)((int)this + 4) != 0)))) {
    pcVar1 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*(int *)((int)this + 4))));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)pcVar1;
}

/* ref: FUN_00cb5b90 */
uint F_00cb5b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *param_1 = this;
  if (this == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)this;
  }
  param_1[1] = uVar1;
  param_1[2] = 0xffffffff;
  F_00cb5920(param_1);
  return ((uint)(uint)(param_1));
}

/* ref: FUN_00cb5bc0 */
uint F_00cb5bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5bc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  F_00cb5920(param_1);
  return ((uint)(uint)(param_1));
}

/* ref: FUN_00cb5bf0 */
uint F_00cb5bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1,*(undefined4 *)((int)this + 0x14));
  return uVar1;
}

/* ref: FUN_00cb5c10 */
uint F_00cb5c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 6) = 0;
  F_00cb5730(this,param_1);
  return (uint)this;
}

/* ref: FUN_00cb5c30 */
uint F_00cb5c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5c30u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106ff68));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x12))) = 0;
  F_00cb5730(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(undefined4 *)&gen_args[1]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb5ca0 */
uint F_00cb5ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb5ca0u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106ff98));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x12))) = 0;
  F_00cb5730(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(undefined4 *)&gen_args[2]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb5d10 */
uint F_00cb5d10(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5d10u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106ffc8));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x12))) == '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return uVar1;
}

/* ref: FUN_00cb5da0 */
uint F_00cb5da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5da0u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106fff8));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x12))) == '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  if (((*(uint *)&gen_args[1]) & 1) != 0) {
    F_00406ad0((*(undefined * PTR32 *)&gen_args[0]));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb5e50 */
uint F_00cb5e50(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5e50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1,0);
  return uVar1;
}

/* ref: FUN_00cb5e70 */
uint F_00cb5e70(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5e70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),param_1);
  return uVar1;
}

/* ref: FUN_00cb5e90 */
unsigned int F_00cb5e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cb5730(this,param_1);
  return 0;
}

/* ref: FUN_00cb5ea0 */
uint F_00cb5ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  F_00cb5730(this,*param_1);
  return (uint)this;
}

/* ref: FUN_00cb5ec0 */
uint F_00cb5ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cb5730(this,param_1);
  return (uint)this;
}

/* ref: FUN_00cb5ee0 */
unsigned int F_00cb5ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5ee0u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  do {
  } while (*param_1 != '\0');
  return 0;
}

/* ref: FUN_00cb5f00 */
unsigned int F_00cb5f00(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5f00u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x1129778));
  return 0;
}

/* ref: FUN_00cb5f10 */
uint F_00cb5f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1129778));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb5f80 */
uint F_00cb5f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5f80u, gen_a0, gen_a1, 0u, 0u);
  char in_cl = (char)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  if (in_cl == '\0') {
    return 0xffffffff;
  }
  if (*param_2 != '\0') {
    do {
    } while (*param_2 != in_cl);
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb5fd0 */
uint F_00cb5fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5fd0u, gen_a0, 0u, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*in_esi != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*in_esi);
    *in_esi = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6010 */
uint F_00cb6010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcb6010u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(uint *)((int)this + 0x54) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 8))))
                      (*(int * PTR32 *)((int)this + 0x58),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return *(uint *)((int)this + 0x54);
}

/* ref: FUN_00cb6030 */
uint F_00cb6030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcb6030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x54) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 0x14))))
                      (*(int * PTR32 *)((int)this + 0x58),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cb6050 */
unsigned int F_00cb6050(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6050u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((0 < *(int *)(param_1 + 0x60)) && (*(int *)(param_1 + 100) != 0)) {
                    
                    
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 100) + 0x10))))();
    return 0;
  }
  return 0;
}

/* ref: FUN_00cb6070 */
uint F_00cb6070(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x134c234))[param_1];
}

/* ref: FUN_00cb6090 */
uint F_00cb6090(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6090u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x134c268) + param_1 * 4);
}

/* ref: FUN_00cb60b0 */
uint F_00cb60b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb60b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x134c29c) + param_1 * 4);
}

/* ref: FUN_00cb60d0 */
uint F_00cb60d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb60d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 100) + 0x1c))))
                            (*(int * PTR32 *)((int)this + 100),param_1)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    if (uVar2 != 0) {
      uVar2 = F_00cb09f0(uVar2);
      if ((char)uVar2 != '\0') {
        return (uint)piVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb6110 */
uint F_00cb6110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x54) == 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 0x20))))
                              (*(int * PTR32 *)((int)this + 0x58),param_1,param_2)));
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      if (uVar2 != 0) {
        uVar2 = F_00cb09f0(uVar2);
        if ((char)uVar2 != '\0') {
          F_00cb4320(param_2,piVar1 + 2);
          return (uint)piVar1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb6170 */
uint F_00cb6170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (*(int *)((int)this + 0x54) == 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x58);
    F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,param_1,((undefined1 *)(gen_frame + 0xc)))));
    if (piVar1 == (int *)0x0) {
      *param_2 = -1;
    }
    else {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      if (uVar2 != 0) {
        uVar2 = F_00cb09f0(uVar2);
        if ((char)uVar2 != '\0') {
          *param_2 = piVar1[2];
          F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
          return (uint)piVar1;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00cb6200 */
uint F_00cb6200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcb6200u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 0x24))))
                    (*(int * PTR32 *)((int)this + 0x58),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00cb6210 */
uint F_00cb6210(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x6e);
}

/* ref: FUN_00cb6220 */
ushort F_00cb6220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6220u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x6e) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb6230 */
uint F_00cb6230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return param_1;
}

/* ref: FUN_00cb6240 */
uint F_00cb6240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6240u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*((ushort *)GEN_TOP((*(int *)(in_ecx + 0x24) + 2 + param_2 * 6)));
}

/* ref: FUN_00cb6260 */
uint F_00cb6260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x18) +
                (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 2 + param_1 * 6))) * 6)));
}

/* ref: FUN_00cb6280 */
uint F_00cb6280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 4 +
                (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 2 + param_1 * 6))) * 6)));
}

/* ref: FUN_00cb62a0 */
byte F_00cb62a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb62a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((short *)GEN_TOP((*(int *)((int)this + 0x24) + 2 + param_1 * 6))) != -1;
}

/* ref: FUN_00cb62d0 */
uint F_00cb62d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb62d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: FUN_00cb62e0 */
unsigned int F_00cb62e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb62e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  return 0;
}

/* ref: FUN_00cb6360 */
uint F_00cb6360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6370 */
byte F_00cb6370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb63b0 */
uint F_00cb63b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb63b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb63d0 */
byte F_00cb63d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb63d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb6410 */
uint F_00cb6410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00cb6430 */
unsigned int F_00cb6430(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129814));
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
      return 0;
    }
    F_00406b30(puVar1 + -1);
  }
  return 0;
}

/* ref: FUN_00cb6460 */
byte F_00cb6460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6460u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx != param_2;
}

/* ref: FUN_00cb6490 */
uint F_00cb6490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb64d0 */
uint F_00cb64d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb64d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  if ((param_1 & 2) != 0) {
    F_01051d29(this,0x58,*(int *)((int)this + -4),((code *)REFP(0xcb6430)));
    if ((param_1 & 1) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(int)this - 4U);
    }
    return (int)this - 4U;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129814));
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 + -1);
    }
    else {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
  }
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cb6590 */
uint F_00cb6590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb65a0 */
uint F_00cb65a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb65a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb65f0 */
uint F_00cb65f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb65f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb6600 */
uint F_00cb6600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6620 */
uint F_00cb6620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb6630 */
uint F_00cb6630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6640 */
byte F_00cb6640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6640u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00cb6660 */
uint F_00cb6660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00cb6680 */
uint F_00cb6680(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6680u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129814));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cb66a0 */
uint F_00cb66a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb66a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb66b0 */
uint F_00cb66b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb66b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb66d0 */
byte F_00cb66d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb66d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb66f0 */
uint F_00cb66f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb66f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6710 */
uint F_00cb6710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb6720 */
uint F_00cb6720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb6760 */
uint F_00cb6760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb6770 */
uint F_00cb6770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb6780 */
uint F_00cb6780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb6790 */
uint F_00cb6790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb67a0 */
uint F_00cb67a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb67a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb67b0 */
uint F_00cb67b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb67b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1 * 6,0);
  return uVar1;
}

/* ref: FUN_00cb67d0 */
uint F_00cb67d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb67d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),param_1 * 2,0);
  return uVar1;
}

/* ref: FUN_00cb67f0 */
uint F_00cb67f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb67f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6820 */
uint F_00cb6820(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6820u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6850 */
uint F_00cb6850(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6850u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6880 */
unsigned int F_00cb6880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6880u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  if (*param_2 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*param_2);
    *param_2 = 0;
  }
  param_2[0x41] = 0;
  if (in_eax != (char *)0x0) {
    pcVar2 = in_eax;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),pcVar2 + (1 - (int)(in_eax + 1)),0);
    *param_2 = uVar3;
    F_00c46aa0(uVar3,in_eax,pcVar2 + (1 - (int)(in_eax + 1)));
    pcVar2 = (char *)*param_2;
    while (*pcVar2 != '\0') {
      if (*param_3 == '\0') {
        param_2[param_2[0x41] + 1] = (uint)pcVar2;
        param_2[0x41] = param_2[0x41] + 1;
        while( true ) {
          if (*pcVar2 == '\0') {
            return 0;
          }
          if (*param_3 != '\0') break;
          pcVar2 = pcVar2 + 1;
        }
        do {
        } while (*param_3 != *pcVar2);
        *pcVar2 = '\0';
        pcVar2 = pcVar2 + 1;
      }
      else {
        do {
        } while (*param_3 != *pcVar2);
        pcVar2 = pcVar2 + 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb6940 */
uint F_00cb6940(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6940u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  undefined * PTR32 * ppvVar1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070028));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  ppvVar1 = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe))) == '\0') && (ppvVar1 = (undefined * PTR32 *)0x0, *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0)
     ) {
    ppvVar1 = ((undefined * PTR32 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) == '\0') && (ppvVar1 = (undefined * PTR32 *)0x0, *(int *)(*(undefined * PTR32 *)&gen_args[0]) != 0)) {
    ppvVar1 = ((undefined * PTR32 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*(int *)(*(undefined * PTR32 *)&gen_args[0]))));
    *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)ppvVar1;
}

/* ref: FUN_00cb69d0 */
uint F_00cb69d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb69d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x84);
}

/* ref: FUN_00cb69e0 */
uint F_00cb69e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb69e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6a20 */
uint F_00cb6a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6a20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb6a30 */
uint F_00cb6a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6a30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb6a40 */
unsigned int F_00cb6a40(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129810));
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00cb6a80 */
uint F_00cb6a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),0xc,0)));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = *(undefined4 *)((int)this + 8);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar1;
    return (uint)puVar1;
  }
  REFG(uint, 0x00000008) = *(undefined4 *)((int)this + 8);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00cb6ae0 */
uint F_00cb6ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 8);
  iVar2 = *param_2;
  if (iVar2 == iVar1) {
    uVar3 = *(undefined4 *)(iVar1 + 8);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
    *(undefined4 *)((int)this + 8) = uVar3;
    *param_1 = uVar3;
    return (uint)param_1;
  }
  iVar4 = *(int *)(iVar1 + 8);
  while( true ) {
    if (iVar4 == 0) {
      *param_1 = 0;
      return (uint)param_1;
    }
    iVar5 = *(int *)(iVar1 + 8);
    if (iVar2 == iVar5) break;
    iVar4 = *(int *)(iVar5 + 8);
    iVar1 = iVar5;
  }
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 8);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  *param_1 = *(undefined4 *)(*param_2 + 8);
  return (uint)param_1;
}

/* ref: FUN_00cb6b50 */
uint F_00cb6b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb6b60 */
uint F_00cb6b60(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6b60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb6b80 */
uint F_00cb6b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6b80u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070063));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 *)(gen_frame + 0x18)) = 1;
  F_00cb5730((*(undefined * PTR32 *)&gen_args[0]),*(*(undefined4 * PTR32 *)&gen_args[1]));
  F_00cb5730(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),*(*(undefined4 * PTR32 *)&gen_args[2]));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb6c00 */
uint F_00cb6c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6c00u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(*(uint * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x1070093));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x1129820));
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(uint * PTR32 *)&gen_args[1]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  if ((*(uint * PTR32 *)&gen_args[1]) == (uint *)0x0) {
    (*(uint * PTR32 *)&gen_args[1]) = (uint *)F_00406a50(4);
  }
  else {
    uVar3 = -(uint)((int)(ZEXT48((*(uint * PTR32 *)&gen_args[1])) * 0x58 >> 0x20) != 0) | (uint)(ZEXT48((*(uint * PTR32 *)&gen_args[1])) * 0x58);
    (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))
                                (REFG(int * PTR32, 0x15d7724),-(uint)(0xfffffffb < uVar3) | uVar3 + 4,0)));
  }
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 1;
  (*(undefined4 *)(gen_frame + 0x28)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x28)), 1, 3),1);
  if ((*(uint * PTR32 *)&gen_args[1]) == (uint *)0x0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  }
  else {
    puVar1 = (*(uint * PTR32 *)&gen_args[1]) + 1;
    *(*(uint * PTR32 *)&gen_args[1]) = uVar2;
    F_01051d8c(puVar1,0x58,uVar2,((code *)REFP(0xcb6680)),((code *)REFP(0xcb6430)));
    *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = puVar1;
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb6cd0 */
unsigned int F_00cb6cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00cb6ce0 */
uint F_00cb6ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6ce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: FUN_00cb6cf0 */
byte F_00cb6cf0(void)
{
  GEN_ENTER(0xcb6cf0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00cb6d00 */
unsigned int F_00cb6d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00cb6d10 */
unsigned int F_00cb6d10(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 8) != 0) {
    iVar3 = 0;
    do {
      puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3))) + 8))))
                         (*(int *)((int)this + 4) + iVar3)));
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3))) + 0xc))))
                (*(int *)((int)this + 4) + iVar3,0);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (uVar2 < *(uint *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined8 *)((int)this + 0x18) = 0;
  *(undefined8 *)((int)this + 0x20) = 0;
  *(undefined8 *)((int)this + 0x28) = 0;
  *(undefined8 *)((int)this + 0x30) = 0;
  *(undefined8 *)((int)this + 0x38) = 0;
  *(undefined8 *)((int)this + 0x40) = 0;
  *(undefined8 *)((int)this + 0x48) = 0;
  *(undefined8 *)((int)this + 0x50) = 0;
  return 0;
}

/* ref: FUN_00cb6d90 */
byte F_00cb6d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar4 = 0;
  if (*(int *)((int)this + 8) != 0) {
    iVar5 = 0;
    do {
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar5))) + 8))))
                                 (*(int *)((int)this + 4) + iVar5)));
      pcVar1 = *(gen_code32 *)(*param_1 + 4);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
      uVar3 = (*pcVar1)(param_1,*(int *)((int)this + 4) + 8 + iVar5,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_2);
      if ((char)uVar3 == '\0') {
        return 0;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x18;
    } while (uVar4 < *(uint *)((int)this + 8));
  }
  return 1;
}

/* ref: FUN_00cb6df0 */
uint F_00cb6df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  F_00cb4320(((undefined *)GEN_TOP((*(int *)((int)this + 4) + 8 + *(int *)((int)this + 8) * 0x18))),param_1);
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 8) * 0x18)));
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_2);
  uVar2 = *(ushort *)(param_1 + 4) & 0xf;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x14 + *(int *)((int)this + 8) * 0x18))) =
       *(undefined4 *)((int)this + uVar2 * 4 + 0x18);
  *(int *)((int)this + uVar2 * 4 + 0x18) = *(int *)((int)this + 4) + *(int *)((int)this + 8) * 0x18;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return uVar2;
}

/* ref: FUN_00cb6e60 */
uint F_00cb6e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((*(uint *)(in_ecx + 0x10) <= param_2) && (param_2 <= *(uint *)(in_ecx + 0x14))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb6e90 */
uint F_00cb6e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (*(int *)((int)this + 4) != 0) {
    for (uVar1 = *((uint *)GEN_TOP(((int)this + (*(ushort *)(param_1 + 4) & 0xf) * 4 + 0x18))); uVar1 != 0;
        uVar1 = *(uint *)(uVar1 + 0x14)) {
      bVar2 = F_00cb4170((undefined *)(uVar1 + 8),param_1);
      if (bVar2 != 0) {
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb6ee0 */
uint F_00cb6ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00cb4320(param_2,*(int *)((int)this + 4) + 8 + param_1 * 0x18);
  }
  return *(int *)((int)this + 4) + param_1 * 0x18;
}

/* ref: FUN_00cb6f10 */
uint F_00cb6f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  uint * in_EAX = 0;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(uint *)((int)this + 0xc) != 0) {
    iVar2 = *(int *)((int)this + 8);
    in_EAX = (uint *)(iVar2 + 0x14);
    do {
      if ((in_EAX[-1] <= *param_1) && (*param_1 <= *in_EAX)) {
        iVar4 = uVar3 * 0x58 + iVar2;
        F_00cb4320(((undefined *)GEN_TOP((*(int *)(iVar4 + 4) + 8 + *(int *)(uVar3 * 0x58 + 8 + iVar2) * 0x18))),
                     param_1);
        piVar1 = ((int *)GEN_TOP((*(int *)(iVar4 + 4) + *(int *)(iVar4 + 8) * 0x18)));
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_2);
        uVar3 = (ushort)param_1[1] & 0xf;
        *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 4) + 0x14 + *(int *)(iVar4 + 8) * 0x18))) =
             *(undefined4 *)(iVar4 + 0x18 + uVar3 * 4);
        *(int *)(iVar4 + 0x18 + uVar3 * 4) = *(int *)(iVar4 + 4) + *(int *)(iVar4 + 8) * 0x18;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        return 1;
      }
      uVar3 = uVar3 + 1;
      in_EAX = in_EAX + 0x16;
    } while (uVar3 < *(uint *)((int)this + 0xc));
  }
  return (uint)in_EAX & 0xffffff00;
}

/* ref: FUN_00cb6fc0 */
uint F_00cb6fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_c;
  int local_8;
  
  local_c = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    local_8 = 0;
    do {
      iVar4 = 0;
      iVar3 = *(int *)((int)this + 8) + local_8;
      uVar2 = 0;
      if (*(int *)(iVar3 + 8) != 0) {
        do {
          puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + iVar4))) + 8))))
                             (*(int *)(iVar3 + 4) + iVar4)));
          if (puVar1 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
          }
          ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + iVar4))) + 0xc))))(*(int *)(iVar3 + 4) + iVar4,0);
          uVar2 = uVar2 + 1;
          iVar4 = iVar4 + 0x18;
        } while (uVar2 < *(uint *)(iVar3 + 8));
      }
      local_8 = local_8 + 0x58;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined8 *)(iVar3 + 0x18) = 0;
      *(undefined8 *)(iVar3 + 0x20) = 0;
      *(undefined8 *)(iVar3 + 0x28) = 0;
      *(undefined8 *)(iVar3 + 0x30) = 0;
      *(undefined8 *)(iVar3 + 0x38) = 0;
      *(undefined8 *)(iVar3 + 0x40) = 0;
      *(undefined8 *)(iVar3 + 0x48) = 0;
      in_EAX = local_c + 1;
      *(undefined8 *)(iVar3 + 0x50) = 0;
      local_c = in_EAX;
    } while (in_EAX < *(uint *)((int)this + 0xc));
  }
  return in_EAX;
}

/* ref: FUN_00cb7080 */
uint F_00cb7080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 0xc) != 0) {
    puVar4 = ((uint *)GEN_TOP((*(int *)((int)this + 8) + 0x14)));
    do {
      if ((puVar4[-1] <= *param_1) && (*param_1 <= *puVar4)) {
        iVar3 = uVar2 * 0x58 + *(int *)((int)this + 8);
        if (*(int *)(iVar3 + 4) == 0) {
          return 0;
        }
        uVar2 = *((uint *)GEN_TOP((iVar3 + 0x18 + ((ushort)param_1[1] & 0xf) * 4)));
        if (uVar2 == 0) {
          return 0;
        }
        do {
          bVar1 = F_00cb4170((undefined *)(uVar2 + 8),param_1);
          if (bVar1 != 0) {
            return uVar2;
          }
          uVar2 = *(uint *)(uVar2 + 0x14);
        } while (uVar2 != 0);
        return 0;
      }
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x16;
    } while (uVar2 < *(uint *)((int)this + 0xc));
  }
  return 0;
}

/* ref: FUN_00cb7100 */
uint F_00cb7100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb7100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 0xc) != 0) {
    puVar3 = ((uint *)GEN_TOP((*(int *)((int)this + 8) + 8)));
    uVar4 = param_1;
    do {
      if (uVar4 < *puVar3) {
        iVar1 = *(int *)((int)this + 8) + uVar2 * 0x58;
        if (param_2 != (undefined *)0x0) {
          F_00cb4320(param_2,*(int *)(iVar1 + 4) + 8 + uVar4 * 0x18);
        }
        return *(int *)(iVar1 + 4) + uVar4 * 0x18;
      }
      uVar2 = uVar2 + 1;
      uVar4 = uVar4 - *puVar3;
      puVar3 = puVar3 + 0x16;
    } while (uVar2 < *(uint *)((int)this + 0xc));
  }
  return 0;
}

/* ref: FUN_00cb7160 */
unsigned int F_00cb7160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb7160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    (*(int *)(gen_frame + 0x8)) = 0;
    do {
      iVar4 = *(int *)((int)this + 8) + (*(int *)(gen_frame + 0x8));
      uVar3 = 0;
      if (*(int *)(iVar4 + 8) != 0) {
        iVar5 = 0;
        do {
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + iVar5))) + 8))))
                            (*(int *)(iVar4 + 4) + iVar5);
          pcVar1 = *(gen_code32 *)(*param_1 + 4);
          (*(uint *)(gen_frame + 0x0)) = uVar2;
          uVar2 = (*pcVar1)(param_1,*(int *)(iVar4 + 4) + 8 + iVar5,&(*(uint *)(gen_frame + 0x0)),param_2);
          if ((char)uVar2 == '\0') {
            return 0;
          }
          uVar3 = uVar3 + 1;
          iVar5 = iVar5 + 0x18;
        } while (uVar3 < *(uint *)(iVar4 + 8));
      }
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x58;
      uVar3 = (*(uint *)(gen_frame + 0x4)) + 1;
      (*(uint *)(gen_frame + 0x4)) = uVar3;
    } while (uVar3 < *(uint *)((int)this + 0xc));
  }
  return 0;
}

/* ref: FUN_00cb71f0 */
uint F_00cb71f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb71f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129810));
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cb7250 */
uint F_00cb7250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb7290 */
uint F_00cb7290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb72a0 */
uint F_00cb72a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb72a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb72b0 */
uint F_00cb72b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb72b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar1 = *(uint *)(param_1 + 4);
      *((uint *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = uVar1;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return uVar1;
}

/* ref: FUN_00cb72e0 */
uint F_00cb72e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb72e0u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x10700c3));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 1;
  (*(undefined4 *)(gen_frame + 0x28)) = 1;
  F_00cb5730((*(undefined * PTR32 *)&gen_args[0]),*(*(undefined4 * PTR32 *)&gen_args[1]));
  F_00cb5730(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),puVar1[2]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb7390 */
uint F_00cb7390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7390u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x10700e8));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe))) == '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) == '\0') && (*(int *)(*(undefined * PTR32 *)&gen_args[0]) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*(int *)(*(undefined * PTR32 *)&gen_args[0]));
    *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  }
  if (((*(uint *)&gen_args[1]) & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(undefined * PTR32 *)&gen_args[0]));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb7440 */
uint F_00cb7440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar1 = *(uint *)(param_1 + 4);
      *((uint *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = uVar1;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return uVar1;
}

/* ref: FUN_00cb7470 */
uint F_00cb7470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 100) + 0x1c))))
                            (*(int * PTR32 *)((int)this + 100),param_1)));
  if (piVar2 == (int *)0x0) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x4c);
    if (this_00 != (undefined *)((int)this + 0x50)) {
      while( true ) {
        bVar1 = F_00cb9a40(this_00,param_1);
        if (bVar1 != 0) break;
        if (this_00 != (undefined *)0x0) {
          this_00 = *(undefined * PTR32 *)((int)this_00 + 8);
        }
        if (this_00 == (undefined *)((int)this + 0x50)) {
          return 0;
        }
      }
      F_00cbac50(this_00,param_1);
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    uVar3 = F_00cb09f0(uVar3);
    if ((char)uVar3 != '\0') {
      return (uint)piVar2;
    }
  }
  return 0;
}

/* ref: FUN_00cb74f0 */
unsigned int F_00cb74f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb74f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  code * pcVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x8c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    bVar3 = F_00cb43e0((undefined *)*puVar1,param_1,(int)this + 0xc);
    if ((bVar3 == 0) || (puVar1[1] = puVar1[1] + -1, 0 < (int)puVar1[1])) {
      puVar1 = (undefined4 *)puVar1[2];
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar1;
    }
    else {
      puVar4 = (undefined4 *)F_00cb6ae0((undefined *)((int)this + 0x84),((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
      puVar4 = (undefined4 *)*puVar4;
      pcVar2 = *((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar4;
      (*pcVar2)(REFG(int * PTR32, 0x15d7724),puVar1);
      puVar1 = puVar4;
    }
  }
  return 0;
}

/* ref: FUN_00cb7570 */
uint F_00cb7570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x54) != 0) {
    uVar2 = F_00cb7470((undefined *)((int)this + -0xc),param_1);
    return uVar2;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 0x1c))))
                            (*(int * PTR32 *)((int)this + 0x58),param_1)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    if (uVar2 != 0) {
      uVar2 = F_00cb09f0(uVar2);
      if ((char)uVar2 != '\0') {
        return (uint)piVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb75c0 */
uint F_00cb75c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb75c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00cb42a0(((undefined1 *)(gen_frame + 0xc)),param_1);
  if (*(int *)((int)this + 0x54) != 0) {
    uVar2 = F_00cb7470((undefined *)((int)this + -0xc),((undefined1 *)(gen_frame + 0xc)));
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar2;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 0x1c))))
                            (*(int * PTR32 *)((int)this + 0x58),((undefined1 *)(gen_frame + 0xc)))));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    if (uVar2 != 0) {
      uVar2 = F_00cb09f0(uVar2);
      if ((char)uVar2 != '\0') {
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
        return (uint)piVar1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00cb7650 */
uint F_00cb7650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb7650u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x44];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  int * piVar7;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x1070120));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) == 0) {
    (*(undefined2 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(char *)(gen_frame + 0x1a)) = '\x01';
    F_00cb5730(&(*(int *)(gen_frame + 0x14)),(*(uint *)&gen_args[2]));
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58)));
    (*(undefined4 *)(gen_frame + 0x28)) = 1;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    (*(uint *)(gen_frame + 0x1c)) = uVar3;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))))((*(undefined * PTR32 *)&gen_args[0]));
    (*(uint *)&gen_args[2]) = 0;
    if (uVar4 < 3) {
      if (uVar3 != 0) {
        do {
          piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]))));
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5)));
          if ((pvVar6 != (undefined *)0x0) && (uVar3 = F_00cb09f0(pvVar6), (char)uVar3 != '\0')) {
            piVar7 = &(*(int *)(gen_frame + 0x14));
            pvVar6 = (undefined *)F_00cb0910(pvVar6,(*(undefined4 *)&gen_args[1]));
            bVar2 = F_00cb5510(pvVar6,piVar7);
            if (bVar2 != 0) {
LAB_00cb7732: ;
              (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
              if (((*(char *)(gen_frame + 0x1a)) == '\0') && ((*(int *)(gen_frame + 0x14)) != 0)) {
                ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x14)));
              }
              (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
              return (uint)piVar5;
            }
          }
          (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 1;
        } while ((*(uint *)&gen_args[2]) < (*(uint *)(gen_frame + 0x1c)));
      }
    }
    else if (uVar3 != 0) {
      do {
        piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]))));
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5)));
        if ((pvVar6 != (undefined *)0x0) && (uVar3 = F_00cb09f0(pvVar6), (char)uVar3 != '\0')) {
          piVar7 = &(*(int *)(gen_frame + 0x14));
          pvVar6 = (undefined *)F_00cb0910(pvVar6,(*(undefined4 *)&gen_args[1]));
          bVar2 = F_00cb56a0(pvVar6,piVar7);
          if (bVar2 != 0) goto LAB_00cb7732;
        }
        (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 1;
      } while ((*(uint *)&gen_args[2]) < (*(uint *)(gen_frame + 0x1c)));
    }
    (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
    if (((*(char *)(gen_frame + 0x1a)) == '\0') && ((*(int *)(gen_frame + 0x14)) != 0)) {
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x14)));
    }
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return 0;
}

/* ref: FUN_00cb7800 */
byte F_00cb7800(unsigned int gen_a0)
{
  GEN_ENTER(0xcb7800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int in_ecx_00;
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(in_ecx + 0x40);
  while( true ) {
    in_ecx_00 = iVar1;
    if (in_ecx_00 == in_ecx + 0x44) {
      return 0;
    }
    bVar2 = F_00cb9a30(in_ecx_00);
    if (bVar2 != 0) break;
    iVar1 = 0;
    if (in_ecx_00 != 0) {
      iVar1 = *(int *)(in_ecx_00 + 8);
    }
  }
  return 1;
}

/* ref: FUN_00cb7830 */
uint F_00cb7830(unsigned int gen_a0)
{
  GEN_ENTER(0xcb7830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb7860 */
unsigned int F_00cb7860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7860u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  undefined4 * this_00;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x107015e));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  this_00 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),0x14,0)));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = this_00;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    *this_00 = 0;
    *(undefined2 *)(this_00 + 1) = 0;
    *(undefined1 *)((int)this_00 + 6) = 0;
    this_00[2] = 0;
    *(undefined2 *)(this_00 + 3) = 0;
    *(undefined1 *)((int)this_00 + 0xe) = 0;
    this_00[4] = 0;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 2;
    (*(undefined4 *)(gen_frame + 0x28)) = 2;
    F_00cb5730(this_00,*(*(undefined4 * PTR32 *)&gen_args[1]));
    F_00cb5730(this_00 + 2,puVar1[2]);
  }
  this_00[4] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = this_00;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return 0;
}

/* ref: FUN_00cb7910 */
uint F_00cb7910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb7910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  byte bVar2;
  
  for (iVar1 = *(int *)((int)this + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    bVar2 = F_00cb5430(param_2,iVar1);
    if (bVar2 != 0) {
      *param_1 = iVar1;
      return (uint)param_1;
    }
    if (iVar1 == 0) break;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb7990 */
uint F_00cb7990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return param_1;
}

/* ref: FUN_00cb79c0 */
uint F_00cb79c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb79c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = uVar1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = uVar1;
  }
  if (*(int *)(param_2 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + 4))) = *(undefined4 *)(param_2 + 4);
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  return (uint)param_1;
}

/* ref: FUN_00cb79f0 */
uint F_00cb79f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb79f0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(in_ecx + 8);
  if (piVar1 != (int *)0x0) {
    do {
      if (*param_3 == *piVar1) {
        *param_2 = piVar1;
        return (uint)param_2;
      }
      piVar1 = (int *)piVar1[2];
    } while (piVar1 != (int *)0x0);
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: FUN_00cb7a30 */
uint F_00cb7a30(unsigned int gen_a0)
{
  GEN_ENTER(0xcb7a30u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070188));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x1129820));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  uVar2 = F_00cb6fc0((*(undefined * PTR32 *)&gen_args[0]));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      uVar3 = F_00406b30(puVar1 + -1);
      uVar2 = (uint)uVar3;
    }
    else {
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
  }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return uVar2;
}

/* ref: FUN_00cb7ab0 */
uint F_00cb7ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb7ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb7ae0 */
uint F_00cb7ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb7b20 */
uint F_00cb7b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7b20u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x10701b8));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x1129820));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_00cb6fc0((*(undefined * PTR32 *)&gen_args[0]));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 + -1);
    }
    else {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  if (((*(uint *)&gen_args[1]) & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(undefined * PTR32 *)&gen_args[0]));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb7bc0 */
uint F_00cb7bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb7bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb7c10 */
uint F_00cb7c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb7c50 */
uint F_00cb7c50(unsigned int gen_a0)
{
  GEN_ENTER(0xcb7c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * PTR32 * ppvVar2;
  int * piVar3;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x10701e8));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  piVar3 = *(int * PTR32 *)((int)this + 8);
  ppvVar2 = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (*(int * PTR32 *)((int)this + 8) != (int *)0x0) {
    do {
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = ppvVar2;
      piVar1 = (int *)piVar3[4];
      (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      if ((*(char *)((int)piVar3 + 0xe) == '\0') && (piVar3[2] != 0)) {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),piVar3[2]);
        piVar3[2] = 0;
      }
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      if ((*(char *)((int)piVar3 + 6) == '\0') && (*piVar3 != 0)) {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*piVar3);
        *piVar3 = 0;
      }
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),piVar3);
      piVar3 = piVar1;
      ppvVar2 = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
    } while (piVar1 != (int *)0x0);
    *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 8) = 0;
    *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0xc) = 0;
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
    return (uint)(*(undefined * PTR32 *)(gen_frame + 0x1c));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)&(*(undefined * PTR32 *)(gen_frame + 0x20));
}

/* ref: FUN_00cb7d50 */
uint F_00cb7d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb7d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = *(undefined4 *)(iVar1 + 8);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 8))) = *(undefined4 *)(iVar1 + 8);
    }
    if (*(int *)(iVar1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = *(undefined4 *)(iVar1 + 4);
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return (uint)param_1;
}

/* ref: FUN_00cb7d90 */
uint F_00cb7d90(unsigned int gen_a0)
{
  GEN_ENTER(0xcb7d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb7df0 */
uint F_00cb7df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7df0u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x26c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x264);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  undefined * pvVar2;
  undefined4 * this_00;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  undefined * PTR32 * ppuVar10;
  bool bVar11;
  undefined * puVar12;
  
  (*(int *)(gen_frame + 0x258)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x254)) = ((code *)REFP(0x1070274));
  (*(undefined * PTR32 *)(gen_frame + 0x250)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x250));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x250)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined * PTR32 *)(gen_frame + 0x24c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x11c)) = 0;
  (*(uint *)(gen_frame + 0x220)) = 0;
  (*(int *)(gen_frame + 0x258)) = 0;
  F_00cb6880((*(uint *)&gen_args[1]),&(*(int *)(gen_frame + 0x11c)),&REFG(undefined, 0x1126194));
  (*(uint *)&gen_args[1]) = 0;
  if ((*(uint *)(gen_frame + 0x220)) != 0) {
    do {
      uVar3 = (*(uint *)&gen_args[1]);
      (*(int *)(gen_frame + 0x14)) = 0;
      (*(int *)(gen_frame + 0x118)) = 0;
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 1;
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 1;
      F_00cb6880(((byte * PTR32 *)(gen_frame + 0x120))[(int)((*(uint *)&gen_args[1]))],&(*(int *)(gen_frame + 0x14)),&REFG(undefined, 0x1126148));
      if ((*(int *)(gen_frame + 0x118)) == 2) {
        (*(int *)(gen_frame + 0x244)) = 0;
        (*(char *)(gen_frame + 0x24a)) = '\0';
        F_00cb5730(&(*(int *)(gen_frame + 0x244)),(*(undefined4 *)(gen_frame + 0x1c)));
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 2;
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 2;
        (*(int *)(gen_frame + 0x23c)) = 0;
        (*(char *)(gen_frame + 0x242)) = '\0';
        F_00cb5730(&(*(int *)(gen_frame + 0x23c)),(*(undefined4 *)(gen_frame + 0x18)));
        (*(int *)(gen_frame + 0x228)) = 0;
        (*(undefined2 *)(gen_frame + 0x22c)) = 0;
        (*(char *)(gen_frame + 0x22e)) = '\0';
        (*(int *)(gen_frame + 0x230)) = 0;
        (*(undefined2 *)(gen_frame + 0x234)) = 0;
        (*(char *)(gen_frame + 0x236)) = '\0';
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 5;
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 5;
        (*(undefined4 *)(gen_frame + 0x238)) = 0;
        F_00cb5730(&(*(int *)(gen_frame + 0x228)),(*(int *)(gen_frame + 0x23c)));
        F_00cb5730(&(*(int *)(gen_frame + 0x230)),(*(int *)(gen_frame + 0x244)));
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 6;
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 6;
        this_00 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),0x14,0)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x224)) = this_00;
        if (this_00 == (undefined4 *)0x0) {
          this_00 = (undefined4 *)0x0;
        }
        else {
          *this_00 = 0;
          *(undefined2 *)(this_00 + 1) = 0;
          *(undefined1 *)((int)this_00 + 6) = 0;
          this_00[2] = 0;
          *(undefined2 *)(this_00 + 3) = 0;
          *(undefined1 *)((int)this_00 + 0xe) = 0;
          this_00[4] = 0;
          (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 9;
          (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 9;
          F_00cb5730(this_00,(*(int *)(gen_frame + 0x228)));
          F_00cb5730(this_00 + 2,(*(int *)(gen_frame + 0x230)));
          uVar3 = (*(uint *)&gen_args[1]);
        }
        this_00[4] = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24c)) + 0x3c);
        *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24c)) + 0x40) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24c)) + 0x40) + 1;
        *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24c)) + 0x3c) = this_00;
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 10;
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 10;
        if (((*(char *)(gen_frame + 0x236)) == '\0') && ((*(int *)(gen_frame + 0x230)) != 0)) {
          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x230)));
          (*(int *)(gen_frame + 0x230)) = 0;
        }
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 3;
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 3;
        if (((*(char *)(gen_frame + 0x22e)) == '\0') && ((*(int *)(gen_frame + 0x228)) != 0)) {
          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x228)));
          (*(int *)(gen_frame + 0x228)) = 0;
        }
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 2;
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 2;
        if (((*(char *)(gen_frame + 0x242)) == '\0') && ((*(int *)(gen_frame + 0x23c)) != 0)) {
          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x23c)));
          (*(int *)(gen_frame + 0x23c)) = 0;
        }
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 1;
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 1;
        if (((*(char *)(gen_frame + 0x24a)) == '\0') && ((*(int *)(gen_frame + 0x244)) != 0)) {
          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x244)));
          (*(int *)(gen_frame + 0x244)) = 0;
        }
      }
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x258)) + 0)) = 0;
      (*(int *)(gen_frame + 0x258)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x258)), 1, 3) << 8;
      if ((*(int *)(gen_frame + 0x14)) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x14)));
      }
      (*(uint *)&gen_args[1]) = uVar3 + 1;
    } while ((*(uint *)&gen_args[1]) < (*(uint *)(gen_frame + 0x220)));
  }
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x24c));
  puVar12 = &REFG(undefined, 0x1118a38);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24c)) + 0xc) + 0x38))))((int)(*(undefined * PTR32 *)(gen_frame + 0x24c)) + 0xc,"SHEET");
  F_00cb6880(uVar3,&(*(int *)(gen_frame + 0x11c)),puVar12);
  if ((*(uint *)(gen_frame + 0x220)) != 0) {
    ppuVar10 = (*(undefined * PTR32 (*)[1])REFP(0x1129850));
    pbVar4 = ((byte * PTR32 *)(gen_frame + 0x120))[0];
    do {
      bVar1 = *pbVar4;
      bVar11 = bVar1 < *(byte *)ppuVar10;
      if (bVar1 != *(byte *)ppuVar10) {
LAB_00cb8052: ;
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00cb8057;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar11 = bVar1 < *(byte *)((int)ppuVar10 + 1);
      if (bVar1 != *(byte *)((int)ppuVar10 + 1)) goto LAB_00cb8052;
      pbVar4 = pbVar4 + 2;
      ppuVar10 = (undefined * PTR32 *)((int)ppuVar10 + 2);
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00cb8057: ;
    if (iVar5 == 0) {
      sVar7 = 0;
      while (*((byte * PTR32 *)(gen_frame + 0x120))[1] != '\0') {
        sVar7 = (char)*((byte * PTR32 *)(gen_frame + 0x120))[1] + -0x30 + sVar7 * 10;
      }
      *(short *)((int)pvVar2 + 0x7a) = sVar7;
    }
  }
  puVar12 = &REFG(undefined, 0x1118a38);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)pvVar2 + 0xc) + 0x38))))((int)pvVar2 + 0xc,"TABLE");
  F_00cb6880(uVar3,&(*(int *)(gen_frame + 0x11c)),puVar12);
  uVar3 = (*(uint *)(gen_frame + 0x220));
  if ((*(uint *)(gen_frame + 0x220)) != 0) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),(*(uint *)(gen_frame + 0x220)) * 2,0);
    uVar9 = 0;
    *(uint *)((int)pvVar2 + 0x20) = uVar6;
    if (uVar3 != 0) {
      do {
        uVar8 = 0;
        while (*((byte * PTR32 *)(gen_frame + 0x120))[(int)(uVar9)] != 0) {
          uVar8 = (char)*((byte * PTR32 *)(gen_frame + 0x120))[(int)(uVar9)] + -0x30 + uVar8 * 10;
        }
        *((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24c)) + 0x20) + uVar9 * 2))) = uVar8 & 0xff;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar3);
    }
  }
  (*(int *)(gen_frame + 0x258)) = 0xffffffff;
  uVar3 = 0;
  if ((*(int *)(gen_frame + 0x11c)) != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x11c)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x250));
  return uVar3;
}

/* ref: Global::SheetRegisterWaiter */
byte F_00cb8140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  uint local_c;
  int local_8;
  
  iVar4 = 0;
  local_8 = 0;
  local_c = 0;
  if (*(int *)((int)param_1 + 4) != 0) {
    do {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,*(int *)((int)param_1 + 0xc) + iVar4)));
      if (piVar2 == (int *)0x0) {
        local_8 = local_8 + 1;
      }
      else {
        ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
        bVar1 = F_00cb43e0(param_1,*(int *)((int)param_1 + 0xc) + iVar4,
                             -(uint)(this != (undefined *)0xc) & (uint)this);
        if (bVar1 != 0) {
          return 1;
        }
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + 0x10;
    } while (local_c < *(uint *)((int)param_1 + 4));
    if (local_8 != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 0x80);
      while( true ) {
        if (piVar2 == (int *)0x0) {
          puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),0xc,0)));
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3[2] = 0;
            *puVar3 = param_1;
            puVar3[1] = 1;
          }
          puVar3[2] = *(undefined4 *)((int)this + 0x80);
          *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + 1;
          *(undefined4 * PTR32 *)((int)this + 0x80) = puVar3;
          return 1;
        }
        if (param_1 == (undefined *)*piVar2) break;
        piVar2 = (int *)piVar2[2];
      }
      piVar2[1] = piVar2[1] + 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00cb8230 */
unsigned int F_00cb8230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8230u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80)));
  if (piVar1 != (int *)0x0) {
    while ((*(int * PTR32 *)&gen_args[1]) != (int *)*piVar1) {
      piVar1 = (int *)piVar1[2];
      if (piVar1 == (int *)0x0) {
        return 0;
      }
    }
    piVar1[1] = piVar1[1] + -1;
    if (piVar1[1] < 1) {
      (*(int * PTR32 *)&gen_args[1]) = piVar1;
      F_00cb6ae0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int * PTR32 *)&gen_args[1]));
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),piVar1);
    }
  }
  return 0;
}

/* ref: FUN_00cb8290 */
uint F_00cb8290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8290u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x10702b0));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined2 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(char *)(gen_frame + 0xe)) = '\x01';
  F_00cb5730(&(*(int *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[1]));
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  (*(undefined4 *)(gen_frame + 0x18)) = 1;
  if (iVar3 != 0) {
    while( true ) {
      bVar2 = F_00cb5430(&(*(int *)(gen_frame + 0x8)),iVar3);
      if (bVar2 != 0) break;
      if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x10), iVar3 == 0)) goto LAB_00cb82fa;
    }
    if (iVar3 != 0) {
      uVar1 = *(uint *)(iVar3 + 8);
      (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
      if (((*(char *)(gen_frame + 0xe)) == '\0') && ((*(int *)(gen_frame + 0x8)) != 0)) {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x8)));
      }
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
      return uVar1;
    }
  }
LAB_00cb82fa: ;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  if (((*(char *)(gen_frame + 0xe)) == '\0') && ((*(int *)(gen_frame + 0x8)) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x8)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return 0;
}

/* ref: FUN_00cb8370 */
uint F_00cb8370(unsigned int gen_a0)
{
  GEN_ENTER(0xcb8370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112980c));
  uVar1 = F_00cb7c50(this);
  return uVar1;
}

/* ref: FUN_00cb8380 */
unsigned int F_00cb8380(unsigned int gen_a0)
{
  GEN_ENTER(0xcb8380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)((int)this + 0x20);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[1] != 0) {
        *(undefined4 *)(puVar2[1] + 8) = puVar2[2];
      }
      if (puVar2[2] != 0) {
        *(undefined4 *)(puVar2[2] + 4) = puVar2[1];
      }
      *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + -1;
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
    iVar1 = *(int *)((int)this + 0x20);
  }
  return 0;
}

/* ref: FUN_00cb83d0 */
uint F_00cb83d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb83d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112980c));
  F_00cb7c50(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cb8400 */
uint F_00cb8400(unsigned int gen_a0)
{
  GEN_ENTER(0xcb8400u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x107031d));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[3])REFP(0x11298cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined * PTR32 (*)[27])REFP(0x1129860));
  (*(undefined4 *)(gen_frame + 0x28)) = 6;
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
  while (iVar1 != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[1] != 0) {
        *(undefined4 *)(puVar2[1] + 8) = puVar2[2];
      }
      if (puVar2[2] != 0) {
        *(undefined4 *)(puVar2[2] + 4) = puVar2[1];
      }
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) + -1;
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100)));
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  }
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 5;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 5;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) = (*(undefined * PTR32 (*)[1])REFP(0x1129810));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c)));
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),iVar1);
    iVar1 = iVar3;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 4;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 4;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
  }
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 2;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = (*(undefined * PTR32 (*)[1])REFP(0x112980c));
  F_00cb7c50(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 1;
  (*(undefined4 *)(gen_frame + 0x28)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x28)), 1, 3),1);
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a))) == '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined * PTR32 (*)[27])REFP(0x1129778));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  }
  uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (uVar4 != 0) {
    *(undefined4 *)(uVar4 + 4) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return uVar4;
}

/* ref: FUN_00cb85d0 */
uint F_00cb85d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb85d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00cb42a0(((undefined4 *)(gen_frame + 0xc)),*param_3);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,param_1,param_2,((undefined4 *)(gen_frame + 0xc)));
  *param_3 = ((undefined4 *)(gen_frame + 0xc))[0];
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00cb8630 */
uint F_00cb8630(unsigned int gen_a0)
{
  GEN_ENTER(0xcb8630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x68);
}

/* ref: FUN_00cb8640 */
uint F_00cb8640(unsigned int gen_a0)
{
  GEN_ENTER(0xcb8640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x6c);
}

/* ref: FUN_00cb8650 */
uint F_00cb8650(unsigned int gen_a0)
{
  GEN_ENTER(0xcb8650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

