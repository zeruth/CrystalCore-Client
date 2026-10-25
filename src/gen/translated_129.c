#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00b59c20 */
uint F_00b59c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint in_EAX = 0;
  undefined4 * puVar4;
  uint uVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    in_EAX = 0;
    if (puVar4 != (undefined4 *)0x0) {
      while (puVar4 != param_1) {
        puVar4 = (undefined4 *)puVar4[8];
        if (puVar4 == (undefined4 *)0x0) {
          return 0;
        }
      }
      if (param_1[0x101] != 0) {
        uVar5 = param_1[0x101] - 1;
        param_1[0x101] = uVar5;
        if (uVar5 != 0) {
          return uVar5;
        }
      }
      iVar1 = param_1[7];
      iVar2 = param_1[8];
      if (iVar1 == 0) {
        *(int *)((int)this + 4) = iVar2;
      }
      else {
        *(int *)(iVar1 + 0x20) = iVar2;
      }
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x1c) = iVar1;
      }
      bVar3 = F_00bc3b60(param_1);
      if (bVar3 != 0) {
        F_00b5aa40(REFG(undefined4, 0x14c4e84),param_1);
        uVar5 = ((code *)*(gen_code32 *)*param_1)(param_1,1);
        return uVar5;
      }
      in_EAX = F_00b5a380(param_1 + 7,(int)this + 8);
    }
  }
  return in_EAX;
}

/* ref: FUN_00b59cb0 */
unsigned int F_00b59cb0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb59cb0u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  bool bVar4;
  undefined4 * in_ecx;
  byte bVar5;
  undefined * pvVar6;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    pvVar6 = *(undefined * PTR32 *)(param_1 + 0xc);
    bVar4 = true;
    if (pvVar6 != (undefined *)0x0) {
      do {
        bVar5 = F_00bcc9f0(pvVar6);
        if (bVar5 == 0) {
          F_00bccaa0(pvVar6);
          bVar4 = false;
        }
        pvVar6 = *(undefined * PTR32 *)((int)pvVar6 + 8);
      } while (pvVar6 != (undefined *)0x0);
      if (!bVar4) goto LAB_00b59d03;
    }
    if (((*(int *)(param_1 + 0xc) == 0) ||
        (pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x14))), pvVar6 == (undefined *)0x0)) ||
       (bVar5 = F_00bc4530(pvVar6), bVar5 != 0)) {
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
  }
LAB_00b59d03: ;
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    F_00bc4c50(iVar1,param_2,param_3);
  }
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 8);
  while (in_ecx = puVar2, in_ecx != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)in_ecx[8];
    F_00bc4c50(in_ecx,param_2,param_3);
    bVar5 = F_00bc3b60(in_ecx);
    if (bVar5 != 0) {
      iVar1 = in_ecx[7];
      iVar3 = in_ecx[8];
      if (iVar1 == 0) {
        *(int *)(param_1 + 8) = iVar3;
      }
      else {
        *(int *)(iVar1 + 0x20) = iVar3;
      }
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x1c) = iVar1;
      }
      F_00b5aa40(REFG(undefined4, 0x14c4e84),in_ecx);
      ((code *)*(gen_code32 *)*in_ecx)(in_ecx,1);
    }
  }
  return 0;
}

/* ref: FUN_00b59d90 */
uint F_00b59d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb59d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *(uint *)((int)this + 0xc);
  while( true ) {
    if (uVar1 == 0) {
      uVar1 = F_00406b90(0x24,0,0);
      if (uVar1 == 0) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = (undefined *)F_00bcc920(uVar1);
      }
      *(undefined4 *)((int)this_00 + 4) = 0;
      *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)((int)this + 0xc);
      if (*(int *)((int)this + 0xc) != 0) {
        *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = this_00;
      }
      *(undefined * PTR32 *)((int)this + 0xc) = this_00;
      F_00bccac0(this_00,param_1,param_2);
      *(undefined1 *)((int)this_00 + 0xf) = 1;
      return (uint)this_00;
    }
    if (param_1 == *(int *)(uVar1 + 0x10)) break;
    uVar1 = *(uint *)(uVar1 + 8);
  }
  *(undefined1 *)(uVar1 + 0xf) = 1;
  return uVar1;
}

/* ref: FUN_00b59e40 */
uint F_00b59e40(unsigned int gen_a0)
{
  GEN_ENTER(0xb59e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00b59aa0(this);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (this != (undefined *)0x0) {
    uVar2 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  }
  return uVar2;
}

/* ref: FUN_00b59e60 */
uint F_00b59e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * pvVar2;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbadf0(((undefined1 *)(gen_frame + 0x8)),param_1,0);
  pvVar2 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (pvVar2 == (undefined *)0x0) {
      pvVar2 = (undefined *)F_00406b90(0x4a8,0,0);
      if (pvVar2 == (undefined *)0x0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = (undefined *)F_00bc51a0(pvVar2);
      }
      *(undefined4 *)((int)pvVar2 + 0x1c) = 0;
      *(undefined4 *)((int)pvVar2 + 0x20) = *(undefined4 *)((int)this + 4);
      if (*(int *)((int)this + 4) != 0) {
        *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x1c))) = pvVar2;
      }
      *(undefined * PTR32 *)((int)this + 4) = pvVar2;
      *(undefined4 *)((int)pvVar2 + 0x14) = 0;
      *(undefined4 *)((int)pvVar2 + 0x18) = 0;
      F_00bc3b80(pvVar2,param_1);
      return (uint)pvVar2;
    }
    uVar1 = F_00bbaea0(pvVar2,((undefined1 *)(gen_frame + 0x8)));
    if ((char)uVar1 != '\0') break;
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x20);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00b59f00 */
uint F_00b59f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    return 0;
  }
  pvVar2 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (pvVar2 == (undefined *)0x0) {
      pvVar2 = (undefined *)F_00406b90(0x4a8,0,0);
      if (pvVar2 == (undefined *)0x0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = (undefined *)F_00bc51a0(pvVar2);
      }
      *(undefined4 *)((int)pvVar2 + 0x1c) = 0;
      *(undefined4 *)((int)pvVar2 + 0x20) = *(undefined4 *)((int)this + 4);
      if (*(int *)((int)this + 4) != 0) {
        *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x1c))) = pvVar2;
      }
      *(undefined * PTR32 *)((int)this + 4) = pvVar2;
      F_00bccc00(pvVar2,param_1);
      return (uint)pvVar2;
    }
    uVar1 = F_00bbaea0(pvVar2,param_1);
    if ((char)uVar1 != '\0') break;
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x20);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00b59f90 */
uint F_00b59f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)F_00406b90(0x4a8,0,0);
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = (undefined *)F_00bc51a0(pvVar1);
  }
  *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
  *(undefined4 *)((int)pvVar1 + 0x20) = *(undefined4 *)((int)this + 4);
  if (*(int *)((int)this + 4) != 0) {
    *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x1c))) = pvVar1;
  }
  *(undefined * PTR32 *)((int)this + 4) = pvVar1;
  F_00bc4480(pvVar1,param_1);
  return (uint)pvVar1;
}

/* ref: FUN_00b59ff0 */
uint F_00b59ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xb59ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pvVar2;
  uint in_EAX = 0;
  uint uVar3;
  
  pvVar1 = *(undefined * PTR32 *)((int)this + 4);
  while (pvVar2 = pvVar1, pvVar2 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)pvVar2 + 0x20);
    if (((*(int *)((int)pvVar2 + 0x18) != 0) && ((*(byte *)((int)pvVar2 + 0x3fc) & 1) == 0)) &&
       (*(char *)((int)pvVar2 + 0x12) == '\0')) {
      uVar3 = F_00bbafd0(pvVar2);
      if (uVar3 != 0) {
        *(byte *)(uVar3 + 100) = *(byte *)(uVar3 + 100) & 0xfe;
      }
      if (((*(uint *)((int)pvVar2 + 0x3fc) & 1) == 0) && (*(int *)((int)pvVar2 + 0x404) != 0)) {
        *(int *)((int)pvVar2 + 0x404) = *(int *)((int)pvVar2 + 0x404) + -1;
      }
      in_EAX = *(uint *)((int)pvVar2 + 0x3fc) | 1;
      *(uint *)((int)pvVar2 + 0x3fc) = in_EAX;
    }
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 8);
  while (pvVar2 = pvVar1, pvVar2 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)pvVar2 + 0x20);
    if (((*(int *)((int)pvVar2 + 0x18) != 0) && ((*(byte *)((int)pvVar2 + 0x3fc) & 1) == 0)) &&
       (*(char *)((int)pvVar2 + 0x12) == '\0')) {
      uVar3 = F_00bbafd0(pvVar2);
      if (uVar3 != 0) {
        *(byte *)(uVar3 + 100) = *(byte *)(uVar3 + 100) & 0xfe;
      }
      if (((*(uint *)((int)pvVar2 + 0x3fc) & 1) == 0) && (*(int *)((int)pvVar2 + 0x404) != 0)) {
        *(int *)((int)pvVar2 + 0x404) = *(int *)((int)pvVar2 + 0x404) + -1;
      }
      in_EAX = *(uint *)((int)pvVar2 + 0x3fc) | 1;
      *(uint *)((int)pvVar2 + 0x3fc) = in_EAX;
    }
  }
  return in_EAX;
}

/* ref: FUN_00b5a0c0 */
uint F_00b5a0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  byte bVar4;
  uint in_EAX = 0;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 * puVar10;
  int iVar11;
  
  pvVar3 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) != (undefined *)0x0) {
    uVar5 = F_00a5f290(REFG(undefined4, 0x1379694));
    in_EAX = 0;
    if (uVar5 != 0) {
      if ((*(char *)((int)this + 0x15) == '\0') && (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0)) {
        F_00bbadf0(*(undefined * PTR32 *)((int)this + 0x10),(uint)*(ushort *)((int)pvVar3 + 0x88),pvVar3);
      }
      uVar6 = F_00b59e60(this,(uint)*(ushort *)((int)pvVar3 + 0x88));
      if (*(uint *)((int)this + 0x10) != uVar6) {
        puVar10 = *(undefined4 * PTR32 *)((int)this + 0xc);
        while (puVar10 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)puVar10[2];
          F_00bcc8c0(puVar10);
          ((code *)*(gen_code32 *)*puVar10)(puVar10,1);
          puVar10 = puVar2;
        }
        *(undefined4 *)((int)this + 0xc) = 0;
      }
      *(int *)(uVar6 + 0x404) = *(int *)(uVar6 + 0x404) + 1;
      iVar11 = *(int *)((int)this + 0x10);
      if ((iVar11 != 0) && (*(int *)(iVar11 + 0x404) != 0)) {
        *(int *)(iVar11 + 0x404) = *(int *)(iVar11 + 0x404) + -1;
      }
      puVar10 = *(undefined4 * PTR32 *)((int)this + 0xc);
      *(uint *)((int)this + 0x10) = uVar6;
      *(undefined1 *)((int)this + 0x15) = 1;
      if ((puVar10 != (undefined4 *)0x0) && ((char)param_1 != '\0')) {
        do {
          iVar11 = puVar10[1];
          puVar2 = (undefined4 *)puVar10[2];
          if (iVar11 == 0) {
            *(undefined4 * PTR32 *)((int)this + 0xc) = puVar2;
          }
          else {
            *(undefined4 * PTR32 *)(iVar11 + 8) = puVar2;
          }
          if (puVar2 != (undefined4 *)0x0) {
            puVar2[1] = iVar11;
          }
          F_00bcc8c0(puVar10);
          ((code *)*(gen_code32 *)*puVar10)(puVar10,1);
          puVar10 = puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      for (iVar11 = *(int *)((int)this + 0xc); iVar11 != 0; iVar11 = *(int *)(iVar11 + 8)) {
        *(undefined1 *)(iVar11 + 0xf) = 0;
      }
      uVar7 = F_00aafad0();
      iVar11 = 0;
      if (0 < (int)uVar7) {
        do {
          bVar4 = F_00ac3740(&REFG(undefined, 0x14bcf40),iVar11);
          if (bVar4 != 0) {
            uVar8 = F_00ab1ed0(iVar11);
            uVar9 = (uint)*(short *)(uVar8 + 0x1a);
            if (((*(char *)(uVar5 + 0x1688) == '\x05') || (*(char *)(uVar5 + 0x1688) == '\x17')) &&
               (*(byte *)(uVar8 + 0x1e) != 0)) {
              uVar9 = (uint)*(byte *)(uVar8 + 0x1e);
            }
            F_00b59d90(this,uVar9,uVar6);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)uVar7);
      }
      uVar7 = F_00aaffb0();
      iVar11 = 0;
      in_EAX = uVar7;
      if (0 < (int)uVar7) {
        do {
          in_EAX = F_00ab2a20(iVar11);
          if ((in_EAX != 0) && (*(char *)(in_EAX + 0x11) != '\0')) {
            switch((unsigned int)(uintptr_t)(iVar11)) {
            case 0x70: ;
            case 0x71: ;
            case 0x72: ;
              cVar1 = *(char *)(uVar5 + 0x1688);
              in_EAX = CONCAT31((int3)(uVar5 >> 8),cVar1);
              if ((cVar1 == '\x05') || (cVar1 == '\x17')) goto LAB_00b5a294;
              break;
            case 0x76: ;
            case 0x77: ;
            case 0x78: ;
              cVar1 = *(char *)(uVar5 + 0x1688);
              in_EAX = CONCAT31((int3)(in_EAX >> 8),cVar1);
              if ((cVar1 != '\x05') && (cVar1 != '\x17')) goto LAB_00b5a294;
            default: ;
            }
            in_EAX = F_00b59d90(this,iVar11,uVar6);
          }
LAB_00b5a294: ;
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)uVar7);
      }
      puVar10 = *(undefined4 * PTR32 *)((int)this + 0xc);
      while (puVar2 = puVar10, puVar2 != (undefined4 *)0x0) {
        puVar10 = (undefined4 *)puVar2[2];
        if (*(char *)((int)puVar2 + 0xf) == '\0') {
          iVar11 = puVar2[1];
          if (iVar11 == 0) {
            *(undefined4 * PTR32 *)((int)this + 0xc) = puVar10;
          }
          else {
            *(undefined4 * PTR32 *)(iVar11 + 8) = puVar10;
          }
          if (puVar10 != (undefined4 *)0x0) {
            puVar10[1] = iVar11;
          }
          F_00bcc8c0(puVar2);
          in_EAX = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
      }
      *(undefined1 *)((int)this + 0x14) = 0;
    }
  }
  return in_EAX;
}

/* ref: FUN_00b5a320 */
uint F_00b5a320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a320u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b5a340 */
uint F_00b5a340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b5a350 */
uint F_00b5a350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a350u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b5a370 */
uint F_00b5a370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b5a380 */
uint F_00b5a380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = *param_1;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 0x1c) = (int)this + -0x1c;
  }
  *param_1 = (int)this + -0x1c;
  return (uint)param_1;
}

/* ref: FUN_00b5a3b0 */
unsigned int F_00b5a3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x20) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x1c) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b5a3e0 */
unsigned int F_00b5a3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = *param_1;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = (int)this + -4;
  }
  *param_1 = (int)this + -4;
  return 0;
}

/* ref: FUN_00b5a410 */
unsigned int F_00b5a410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Object::ObjectManager::vf0 */
uint F_00b5a440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f14a0));
  F_00b59aa0(this);
  REFG(undefined4, 0x14c4e78) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5a480 */
uint F_00b5a480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::SchedulerState::vf1 */
byte F_00b5a4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a4a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 8);
}

/* ref: Client::System::Scheduler::Resource::SchedulerResourceParser::vf0 */
uint F_00b5a4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f1534));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5a520 */
byte F_00b5a520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x248) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b5a530 */
unsigned int F_00b5a530(float gen_a0)
{
  GEN_ENTER(0xb5a530u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b5a550 */
uint F_00b5a550(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f153c));
  *(undefined4 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x38));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_00b5a5a0 */
uint F_00b5a5a0(void)
{
  GEN_ENTER(0xb5a5a0u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  if (REFG(undefined4, 0x14c4e84) == 0) {
    this = (undefined *)F_00406b90(0x50,0,0);
    if (this != (undefined *)0x0) {
      REFG(undefined4, 0x14c4e84) = F_00b5a550(this);
      return REFG(undefined4, 0x14c4e84);
    }
    REFG(undefined4, 0x14c4e84) = 0;
  }
  return REFG(undefined4, 0x14c4e84);
}

/* ref: FUN_00b5a5d0 */
byte F_00b5a5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a5d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this;
  uint uVar2;
  
  if (*(char *)*param_1 == '\0') {
    return 1;
  }
  this = (undefined *)F_00b5c850(REFG(undefined4, 0x14c4e90),param_1);
  if ((this != (undefined *)0x0) &&
     ((uVar2 = *(uint *)((int)this + 0x5c) >> 1, (uVar2 & 1) == 0 || ((uVar2 & 1) == 0)))) {
    bVar1 = F_00bcd860(this);
    return bVar1 == 0;
  }
  return 0;
}

/* ref: FUN_00b5a620 */
uint F_00b5a620(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a620u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)*param_1 != '\0') {
    uVar1 = F_00b5c850(REFG(undefined4, 0x14c4e90),param_1);
    param_1 = (undefined4 *)0x0;
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 0x5c) = *(uint *)(uVar1 + 0x5c) & 0xfffffff7;
      param_1 = (undefined4 *)F_00b5c650(uVar1);
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00b5a660 */
byte F_00b5a660(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a660u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbadf0(((undefined1 *)(gen_frame + 0x8)),param_1,0);
  bVar1 = F_00b59620(REFG(undefined4, 0x14c4e78),((undefined1 *)(gen_frame + 0x8)));
  return bVar1;
}

/* ref: FUN_00b5a6a0 */
byte F_00b5a6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a6a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbadd0(((undefined1 *)(gen_frame + 0x8)),param_1);
  bVar1 = F_00b59620(REFG(undefined4, 0x14c4e78),((undefined1 *)(gen_frame + 0x8)));
  return bVar1;
}

/* ref: FUN_00b5a6f0 */
uint F_00b5a6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a6f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 4 + param_2 * 4);
}

/* ref: FUN_00b5a700 */
byte F_00b5a700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb5a700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  byte bVar2;
  
  if ((*param_3 != 0) ||
     (iVar1 = *(int *)((int)this + param_2 * 4 + 4), *param_3 = iVar1, iVar1 != 0)) {
    bVar2 = F_00b68ad0((undefined *)*param_3,param_1,param_4);
    if (bVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b5a740 */
byte F_00b5a740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb5a740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  byte bVar2;
  
  if ((*param_4 != 0) ||
     (iVar1 = *(int *)((int)this + param_3 * 4 + 4), *param_4 = iVar1, iVar1 != 0)) {
    bVar2 = F_00b68b20((undefined *)*param_4,param_1,param_2,param_5);
    if (bVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b5a780 */
byte F_00b5a780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb5a780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  byte bVar2;
  
  if ((*param_3 != 0) ||
     (iVar1 = *(int *)((int)this + param_2 * 4 + 4), *param_3 = iVar1, iVar1 != 0)) {
    bVar2 = F_00b68bc0((undefined *)*param_3,param_1,param_4);
    if (bVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b5a7c0 */
unsigned int F_00b5a7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  
  iVar1 = 6;
  do {
    this = (undefined *)((int)this + 4);
    for (this_00 = *(undefined * PTR32 *)this; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc))
    {
      F_00b68540(this_00);
      F_00b68380(this_00);
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00b5a800 */
byte F_00b5a800(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a800u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0x746d62;
  if (*(char *)*param_1 == '\0') {
    return 1;
  }
  this = (undefined *)F_00b5e210(REFG(undefined4, 0x14c4e90),param_1,&(*(undefined4 *)(gen_frame + 0x8)),1);
  *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) | 8;
  uVar2 = *(uint *)((int)this + 0x5c) >> 1;
  if (((uVar2 & 1) != 0) && ((uVar2 & 1) != 0)) {
    return 0;
  }
  bVar1 = F_00bcd860(this);
  return bVar1 == 0;
}

/* ref: FUN_00b5a860 */
uint F_00b5a860(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a860u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa60];
  byte bVar1;
  undefined * this;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0xa58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa5c);
  this = (undefined *)F_00b5c850(REFG(undefined4, 0x14c4e90),param_1);
  if ((this != (undefined *)0x0) &&
     ((uVar2 = *(uint *)((int)this + 0x5c) >> 1, (uVar2 & 1) == 0 || ((uVar2 & 1) == 0)))) {
    bVar1 = F_00bcd860(this);
    if (bVar1 == 0) {
      F_00b5c440(((undefined1 *)(gen_frame + 0x8)));
      uVar2 = F_00bcd800(this,((undefined1 *)(gen_frame + 0x0)));
      uVar2 = F_00bce080(uVar2);
      F_00c47745((*(uint *)(gen_frame + 0xa58)) ^ (uint)(uint)(gen_frame + 0xa5c));
      return uVar2;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa58)) ^ (uint)(uint)(gen_frame + 0xa5c));
  return 0;
}

/* ref: FUN_00b5a8f0 */
uint F_00b5a8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa80];
  byte bVar1;
  undefined * this;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xa78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa7c);
  this = (undefined *)F_00b5c850(REFG(undefined4, 0x14c4e90),param_2);
  uVar3 = 0;
  if (this != (undefined *)0x0) {
    uVar2 = *(uint *)((int)this + 0x5c) >> 1;
    if (((uVar2 & 1) == 0) || (uVar3 = (*(uint *)((int)this + 0x5c) >> 9) << 8, (uVar2 & 1) == 0)) {
      bVar1 = F_00bcd860(this);
      uVar3 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 0) {
        F_00b5c440(((undefined1 *)(gen_frame + 0x28)));
        uVar3 = F_00bcd800(this,((undefined1 *)(gen_frame + 0x20)));
        uVar2 = F_00bcdea0(uVar3);
        uVar3 = 0;
        if (uVar2 != 0) {
          F_00bccbd0(((undefined1 *)(gen_frame + 0x4)));
          F_00bbadf0(((undefined1 *)(gen_frame + 0x4)),param_1,0);
          uVar3 = F_00bccde0(((undefined1 *)(gen_frame + 0x4)),uVar2,0,0,7);
          if (uVar3 != 0) {
            F_00bccbf0(((undefined1 *)(gen_frame + 0x4)));
            F_00c47745((*(uint *)(gen_frame + 0xa78)) ^ (uint)(uint)(gen_frame + 0xa7c));
            return CONCAT31((int3)(uVar3 >> 8),1);
          }
          F_00bccbf0(((undefined1 *)(gen_frame + 0x4)));
          uVar3 = 0;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa78)) ^ (uint)(uint)(gen_frame + 0xa7c));
  return uVar3 & 0xffffff00;
}

/* ref: FUN_00b5a9d0 */
uint F_00b5a9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  int local_8;
  
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  local_8 = 6;
  do {
    this = (undefined *)((int)this + 4);
    for (this_00 = *(undefined * PTR32 *)this; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc))
    {
      F_00b696f0(this_00,param_1);
    }
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  F_0052ef80(REFG(undefined4, 0x1375b00),param_1);
  uVar1 = F_00b59850(REFG(undefined4, 0x14c4e78),param_1);
  return uVar1;
}

/* ref: FUN_00b5aa40 */
unsigned int F_00b5aa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5aa40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int in_ecx_00;
  int local_8;
  
  local_8 = 6;
  do {
    in_ecx = in_ecx + 1;
    for (in_ecx_00 = *in_ecx; in_ecx_00 != 0; in_ecx_00 = *(int *)(in_ecx_00 + 0xc)) {
      F_00b68cc0(in_ecx_00,param_2);
    }
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

/* ref: FUN_00b5aa80 */
uint F_00b5aa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5aa80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (((param_1 == *(int *)((int)this + 0x20)) && (*(int *)((int)this + 0x2c) != 0)) &&
     (bVar2 = F_00bbad60(((undefined *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x9a8))),param_1), bVar2 != 0)) {
    return *(uint *)((int)this + 0x2c);
  }
  uVar1 = *(uint *)((int)this + 0x18);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    bVar2 = F_00bbad60((undefined *)(uVar1 + 0x9a8),param_1);
    if (bVar2 != 0) break;
    uVar1 = *(uint *)(uVar1 + 0xc);
  }
  *(uint *)((int)this + 0x2c) = uVar1;
  *(int *)((int)this + 0x20) = param_1;
  return uVar1;
}

/* ref: FUN_00b5aaf0 */
uint F_00b5aaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5aaf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(int *)((int)this + 0x34) != 0) &&
     (uVar1 = F_00bbaea0(((undefined *)GEN_TOP((*(int *)((int)this + 0x34) + 0x9a8))),param_2),
     (char)uVar1 != '\0')) {
    return *(uint *)((int)this + 0x34);
  }
  uVar1 = *(uint *)((int)this + param_1 * 4 + 4);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = F_00bbaea0((undefined *)(uVar1 + 0x9a8),param_2);
    if ((char)uVar2 != '\0') break;
    uVar1 = *(uint *)(uVar1 + 0xc);
  }
  *(uint *)((int)this + 0x34) = uVar1;
  *(uint *)((int)this + 0x28) = uVar1 + 0x9a8;
  return uVar1;
}

/* ref: FUN_00b5ab70 */
unsigned int F_00b5ab70(unsigned int gen_a0)
{
  GEN_ENTER(0xb5ab70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  
  iVar1 = 6;
  do {
    this = (undefined *)((int)this + 4);
    for (this_00 = *(undefined * PTR32 *)this; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc))
    {
      F_00b68650(this_00,1);
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00b5aba0 */
uint F_00b5aba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5aba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1c);
  *(uint *)((int)this + 0x1c) = uVar1 + 1;
  *param_1 = uVar1 & 0x3fffffff | 0x40000000;
  return (uint)param_1;
}

/* ref: FUN_00b5abd0 */
byte F_00b5abd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb5abd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  byte bVar2;
  
  if (*param_3 == 0) {
    *param_3 = *(int *)((int)this + param_2 * 4 + 4);
    *param_4 = 0;
    if (*param_3 == 0) {
      return 0;
    }
  }
  do {
    bVar2 = F_00b68a60((undefined *)*param_3,param_1,param_4);
    if (bVar2 != 0) {
      return 1;
    }
    *param_4 = 0;
    iVar1 = *(int *)(*param_3 + 0xc);
    *param_3 = iVar1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00b5ac30 */
byte F_00b5ac30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5ac30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * this_00;
  byte bVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    bVar1 = F_00b68a60(this_00,param_1,param_2);
    if (bVar1 != 0) break;
    *param_2 = 0;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
  }
  return 1;
}

/* ref: FUN_00b5ac70 */
uint F_00b5ac70(unsigned int gen_a0)
{
  GEN_ENTER(0xb5ac70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  undefined4 * puVar4;
  int local_c;
  int * local_8;
  
  piVar3 = (int *)((int)this + 4);
  local_c = 6;
  local_8 = piVar3;
  do {
    puVar4 = (undefined4 *)*local_8;
    if (puVar4 != (undefined4 *)0x0) {
      do {
        iVar1 = puVar4[2];
        puVar2 = (undefined4 *)puVar4[3];
        if (iVar1 == 0) {
          *local_8 = (int)puVar2;
        }
        else {
          *(undefined4 * PTR32 *)(iVar1 + 0xc) = puVar2;
        }
        if (puVar2 != (undefined4 *)0x0) {
          puVar2[2] = iVar1;
        }
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar4)(puVar4,1)));
        puVar4 = puVar2;
      } while (puVar2 != (undefined4 *)0x0);
      *(undefined4 *)((int)this + 0x20) = 0xffffffff;
      *(undefined4 *)((int)this + 0x2c) = 0;
      *(undefined4 *)((int)this + 0x24) = 0;
      *(undefined4 *)((int)this + 0x30) = 0;
      *(undefined4 *)((int)this + 0x28) = 0;
      *(undefined4 *)((int)this + 0x34) = 0;
      *local_8 = 0;
    }
    local_8 = local_8 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return (uint)piVar3;
}

/* ref: FUN_00b5ad00 */
uint F_00b5ad00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5ad00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined * this_00;
  
  (*(int *)(gen_frame + 0x4)) = 6;
LAB_00b5ad15: ;
  this = (undefined *)((int)this + 4);
  this_00 = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  do {
    if (this_00 == (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)this;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      goto joined_r0x00b5ad2b;
    }
    while( true ) {
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      in_EAX = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) break;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
joined_r0x00b5ad2b: ;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      if (this_00 == (undefined *)0x0) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        if ((*(int *)(gen_frame + 0x4)) == 0) {
          return in_EAX;
        }
        goto LAB_00b5ad15;
      }
    }
    bVar1 = F_00bd0880((*(undefined * PTR32 *)(gen_frame + 0x8)),3,param_2);
    in_EAX = CONCAT31(extraout_var_00,bVar1);
  } while( true );
}

/* ref: FUN_00b5ad70 */
uint F_00b5ad70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5ad70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b68d80(this_00,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00b5ada0 */
uint F_00b5ada0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5ada0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b68de0(this_00,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00b5add0 */
unsigned int F_00b5add0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5add0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this_00;
  
  (*(int *)(gen_frame + 0x4)) = 6;
LAB_00b5ade5: ;
  this = (undefined *)((int)this + 4);
  this_00 = (undefined *)0x0;
  (*(int *)(gen_frame + 0x8)) = 0;
  do {
    if (this_00 == (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)this;
      (*(int *)(gen_frame + 0x8)) = 0;
      goto joined_r0x00b5adfb;
    }
    while (bVar1 = F_00b68a60(this_00,param_1,&(*(int *)(gen_frame + 0x8))), bVar1 == 0) {
      (*(int *)(gen_frame + 0x8)) = 0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
joined_r0x00b5adfb: ;
      (*(int *)(gen_frame + 0x8)) = 0;
      if (this_00 == (undefined *)0x0) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        if ((*(int *)(gen_frame + 0x4)) == 0) {
          return 0;
        }
        goto LAB_00b5ade5;
      }
    }
    *(undefined1 *)((*(int *)(gen_frame + 0x8)) + 0x248) = 1;
  } while( true );
}

/* ref: FUN_00b5ae40 */
uint F_00b5ae40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ae40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b68620(this_00);
  }
  return uVar1;
}

/* ref: FUN_00b5ae60 */
uint F_00b5ae60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5ae60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b684e0(this_00,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00b5ae90 */
uint F_00b5ae90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ae90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b68540(this_00);
  }
  return uVar1;
}

/* ref: FUN_00b5aeb0 */
uint F_00b5aeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5aeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b69a60(this_00,param_2);
  }
  return uVar1;
}

/* ref: FUN_00b5aed0 */
uint F_00b5aed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5aed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b68560(this_00,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00b5af00 */
uint F_00b5af00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5af00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b685b0(this_00,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00b5af30 */
uint F_00b5af30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5af30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  int iVar3;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  iVar3 = 0;
  do {
    this = (undefined *)((int)this + 4);
    this_00 = *(undefined * PTR32 *)this;
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
    for (; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc)) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      bVar1 = F_00b68a60(this_00,param_1,&(*(int * PTR32 *)(gen_frame + 0x8)));
      in_EAX = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 4))((*(int * PTR32 *)(gen_frame + 0x8)));
        return uVar2;
      }
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: FUN_00b5afa0 */
byte F_00b5afa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5afa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b68700(this_00,param_2);
    return uVar1 != 0;
  }
  return 1;
}

/* ref: FUN_00b5afd0 */
uint F_00b5afd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5afd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  uVar2 = F_00b68700(this_00,param_2);
  if (uVar2 == 0) {
    return 1;
  }
  if (uVar2 == 0xffffffff) {
    return 0xffffff00;
  }
  bVar1 = F_00b68760(this_00,param_2);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00b5b020 */
byte F_00b5b020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  
  pvVar2 = (undefined *)F_00b5aa80(this,param_1);
  if ((pvVar2 != (undefined *)0x0) && (uVar3 = F_00b68700(pvVar2,param_2), uVar3 == 0)) {
    return 1;
  }
  pvVar2 = (undefined *)F_00b5aa80(this,param_1);
  if (pvVar2 != (undefined *)0x0) {
    uVar3 = F_00b68700(pvVar2,param_2);
    if (uVar3 == 0) {
      return 1;
    }
    if (uVar3 != 0xffffffff) {
      bVar1 = F_00b687c0(pvVar2,param_2);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_00b5b090 */
uint F_00b5b090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00b5aa80(this,param_1);
  if (pvVar1 != (undefined *)0x0) {
    uVar2 = F_00b68700(pvVar1,param_2);
    if (uVar2 == 0) {
      return 0xffffffff;
    }
  }
  uVar2 = 0xffffffff;
  pvVar1 = (undefined *)F_00b5aa80(this,param_1);
  if (pvVar1 != (undefined *)0x0) {
    uVar2 = F_00b68890(pvVar1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00b5b0f0 */
uint F_00b5b0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar3 = 0;
  do {
    this = (undefined *)((int)this + 4);
    this_00 = *(undefined * PTR32 *)this;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    for (; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 != 0) {
        uVar2 = F_00bcff00((*(undefined * PTR32 *)(gen_frame + 0x8)));
        return uVar2;
      }
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return 0;
}

/* ref: FUN_00b5b160 */
uint F_00b5b160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_ecx;
  undefined3 extraout_var = 0;
  
  in_ecx = F_00b5aa80(this,param_1);
  if (in_ecx != 0) {
    bVar1 = F_00b68840(in_ecx,param_2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00b5b190 */
uint F_00b5b190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb5b190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b5aa80(param_1,param_2);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00b688d0(uVar1,param_3,param_4);
  }
  return uVar2;
}

/* ref: FUN_00b5b1c0 */
uint F_00b5b1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb5b1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b5aa80(param_1,param_2);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00b68920(uVar1,param_3,param_4);
  }
  return uVar2;
}

/* ref: FUN_00b5b1f0 */
unsigned int F_00b5b1f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb5b1f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this;
  
  (*(int *)(gen_frame + 0x4)) = 6;
LAB_00b5b205: ;
  param_1 = param_1 + 1;
  this = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  do {
    if (this == (undefined *)0x0) {
      this = (undefined *)*param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      goto joined_r0x00b5b21b;
    }
    while (bVar1 = F_00b68a60(this,param_2,&(*(undefined4 *)(gen_frame + 0x8))), bVar1 == 0) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      this = *(undefined * PTR32 *)((int)this + 0xc);
joined_r0x00b5b21b: ;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      if (this == (undefined *)0x0) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        if ((*(int *)(gen_frame + 0x4)) == 0) {
          return 0;
        }
        goto LAB_00b5b205;
      }
    }
    F_00bcfc00((*(undefined4 *)(gen_frame + 0x8)),param_3);
  } while( true );
}

/* ref: FUN_00b5b260 */
uint F_00b5b260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar2 = 0;
  do {
    this = (undefined *)((int)this + 4);
    this_00 = *(undefined * PTR32 *)this;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    for (; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 != 0) {
        return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return 0;
}

/* ref: FUN_00b5b2d0 */
uint F_00b5b2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this_00;
  undefined * this_01;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    this_01 = (undefined *)F_00b68410(this_00);
    if (this_01 != (undefined *)0x0) {
      F_00bc40d0(this_01,param_2);
    }
    bVar1 = F_00b689c0(this_00,param_2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b5b310 */
uint F_00b5b310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5b310u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 uVar1;
  byte bVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  pvVar3 = (undefined *)F_00b5aa80((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[1]));
  uVar1 = (*(undefined4 *)&gen_args[3]);
  (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)0x0;
  this_00 = pvVar3;
  while ((this_00 != (undefined *)0x0 || (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))), this_00 != (undefined *)0x0)
         )) {
    bVar2 = F_00b68ad0(this_00,(*(undefined4 *)&gen_args[2]),&(*(undefined * PTR32 *)&gen_args[1]));
    if (bVar2 == 0) {
      return CONCAT31(extraout_var,bVar2);
    }
    pvVar3 = (undefined *)F_00bc3440((*(undefined * PTR32 *)&gen_args[1]),2,uVar1,0);
  }
  return (uint)pvVar3;
}

/* ref: FUN_00b5b370 */
uint F_00b5b370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b5aa80(this,param_1);
  if (uVar1 != 0) {
    return *(uint *)(uVar1 + 0x18);
  }
  return 0;
}

/* ref: FUN_00b5b390 */
uint F_00b5b390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5b390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 uVar1;
  uint in_ecx;
  undefined4 * puVar2;
  
  in_ecx = F_00b5aa80(this,param_2);
  if ((in_ecx != 0) && (param_3 < *(uint *)(in_ecx + 0x18))) {
    puVar2 = (undefined4 *)F_00b68c10(in_ecx,param_3);
    uVar1 = *puVar2;
    param_1[1] = puVar2[1];
    *param_1 = uVar1;
    return (uint)param_1;
  }
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00b5b3e0 */
unsigned int F_00b5b3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5b3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (this_00 != (undefined *)0x0) {
    while( true ) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 != 0) break;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
      if (this_00 == (undefined *)0x0) {
        return 0;
      }
    }
    F_00bd0c80((*(undefined * PTR32 *)(gen_frame + 0x8)),param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00b5b440 */
unsigned int F_00b5b440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (this_00 != (undefined *)0x0) {
    while( true ) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 != 0) break;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
      if (this_00 == (undefined *)0x0) {
        return 0;
      }
    }
    F_00bcfad0((*(undefined * PTR32 *)(gen_frame + 0x8)),param_2);
  }
  return 0;
}

/* ref: FUN_00b5b4a0 */
uint F_00b5b4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5b4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  undefined * pvVar2;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  pvVar2 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),2,(*(undefined * PTR32 *)&gen_args[2]));
  (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x0;
  this_00 = pvVar2;
  while ((this_00 != (undefined *)0x0 || (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))), this_00 != (undefined *)0x0))
        ) {
    bVar1 = F_00b68b20(this_00,(*(undefined4 *)&gen_args[1]),0xffffffff,&(*(undefined * PTR32 *)&gen_args[2]));
    if (bVar1 == 0) {
      return CONCAT31(extraout_var,bVar1);
    }
    pvVar2 = (undefined *)F_00bcfad0((*(undefined * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  }
  return (uint)pvVar2;
}

/* ref: FUN_00b5b500 */
uint F_00b5b500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5b500u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  undefined * pvVar2;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  pvVar2 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),2,(*(undefined * PTR32 *)&gen_args[2]));
  (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x0;
  this_00 = pvVar2;
  while ((this_00 != (undefined *)0x0 || (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))), this_00 != (undefined *)0x0))
        ) {
    bVar1 = F_00b68bc0(this_00,(*(undefined4 *)&gen_args[1]),&(*(undefined * PTR32 *)&gen_args[2]));
    if (bVar1 == 0) {
      return CONCAT31(extraout_var,bVar1);
    }
    pvVar2 = (undefined *)F_00bcfad0((*(undefined * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  }
  return (uint)pvVar2;
}

/* ref: FUN_00b5b550 */
unsigned int F_00b5b550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this_00;
  
  (*(int *)(gen_frame + 0x4)) = 6;
LAB_00b5b565: ;
  this = (undefined *)((int)this + 4);
  this_00 = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  do {
    if (this_00 == (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)this;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      goto joined_r0x00b5b57b;
    }
    while (bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8))), bVar1 == 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
joined_r0x00b5b57b: ;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      if (this_00 == (undefined *)0x0) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        if ((*(int *)(gen_frame + 0x4)) == 0) {
          return 0;
        }
        goto LAB_00b5b565;
      }
    }
    F_00bd0910((*(undefined * PTR32 *)(gen_frame + 0x8)));
  } while( true );
}

/* ref: FUN_00b5b5c0 */
byte F_00b5b5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 1;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    if (bVar1 != 0) break;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
  }
  if (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) != '\0') {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b5b620 */
byte F_00b5b620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b620u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  undefined * this_00;
  
  this_00 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),2,(*(undefined4 *)&gen_args[2]));
  (*(undefined4 *)&gen_args[2]) = 0;
  if ((this_00 != (undefined *)0x0) || (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))), this_00 != (undefined *)0x0)) {
    bVar1 = F_00b68b20(this_00,(*(undefined4 *)&gen_args[1]),0xffffffff,&(*(undefined4 *)&gen_args[2]));
    if (bVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00b5b670 */
byte F_00b5b670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b670u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  undefined * this_00;
  
  this_00 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),2,(*(undefined4 *)&gen_args[2]));
  (*(undefined4 *)&gen_args[2]) = 0;
  if ((this_00 != (undefined *)0x0) || (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))), this_00 != (undefined *)0x0)) {
    bVar1 = F_00b68bc0(this_00,(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]));
    if (bVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00b5b6c0 */
byte F_00b5b6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  (*(int *)(gen_frame + 0x4)) = 0;
LAB_00b5b6d1: ;
  this = (undefined *)((int)this + 4);
  this_00 = (undefined *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  do {
    if (this_00 == (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)this;
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      goto joined_r0x00b5b6e1;
    }
    while (bVar1 = F_00b68a60(this_00,param_1,&(*(int * PTR32 *)(gen_frame + 0x8))), bVar1 == 0) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
joined_r0x00b5b6e1: ;
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      if (this_00 == (undefined *)0x0) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
        if (5 < (*(int *)(gen_frame + 0x4))) {
          return 0;
        }
        goto LAB_00b5b6d1;
      }
    }
    if ((*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 0xd) != '\0') &&
       (uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8))), (char)uVar2 == '\0')) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00b5b740 */
byte F_00b5b740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
    bVar1 = F_00b68a60(this_00,param_1,&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (bVar1 != 0) break;
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
  }
  if (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 0xd) == '\0') {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)));
  if ((char)uVar2 != '\0') {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b5b7a0 */
byte F_00b5b7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b7a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  this_00 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),2,(*(int * PTR32 *)&gen_args[2]));
  (*(int * PTR32 *)&gen_args[2]) = (int *)0x0;
  do {
    if ((this_00 == (undefined *)0x0) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))), this_00 == (undefined *)0x0))
    {
      return 0;
    }
    bVar1 = F_00b68b20(this_00,(*(undefined4 *)&gen_args[1]),0xffffffff,&(*(int * PTR32 *)&gen_args[2]));
    if (bVar1 == 0) {
      return 0;
    }
  } while ((*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0xd))) == '\0') ||
          (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x10))))((*(int * PTR32 *)&gen_args[2])), (char)uVar2 != '\0'));
  return 1;
}

/* ref: FUN_00b5b810 */
byte F_00b5b810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b810u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  this_00 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),2,(*(int * PTR32 *)&gen_args[2]));
  (*(int * PTR32 *)&gen_args[2]) = (int *)0x0;
  do {
    if ((this_00 == (undefined *)0x0) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))), this_00 == (undefined *)0x0))
    {
      return 0;
    }
    bVar1 = F_00b68bc0(this_00,(*(undefined4 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[2]));
    if (bVar1 == 0) {
      return 0;
    }
  } while ((*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0xd))) == '\0') ||
          (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x10))))((*(int * PTR32 *)&gen_args[2])), (char)uVar2 != '\0'));
  return 1;
}

/* ref: FUN_00b5b880 */
uint F_00b5b880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  (*(int *)(gen_frame + 0x4)) = 6;
LAB_00b5b895: ;
  this = (undefined *)((int)this + 4);
  this_00 = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  do {
    if (this_00 == (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)this;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      goto joined_r0x00b5b8ab;
    }
    while( true ) {
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      in_EAX = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) break;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
joined_r0x00b5b8ab: ;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      if (this_00 == (undefined *)0x0) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        if ((*(int *)(gen_frame + 0x4)) == 0) {
          return in_EAX;
        }
        goto LAB_00b5b895;
      }
    }
    in_EAX = F_00bc3440((*(undefined * PTR32 *)(gen_frame + 0x8)),2,param_2,0);
  } while( true );
}

/* ref: FUN_00b5b8f0 */
unsigned int F_00b5b8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (this_00 != (undefined *)0x0) {
    while( true ) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 != 0) break;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
      if (this_00 == (undefined *)0x0) {
        return 0;
      }
    }
    F_00bc3440((*(undefined * PTR32 *)(gen_frame + 0x8)),2,param_2,0);
  }
  return 0;
}

/* ref: FUN_00b5b950 */
unsigned int F_00b5b950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * pvVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  pvVar2 = *(undefined * PTR32 *)((int)this + 8);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  if (pvVar2 != (undefined *)0x0) {
    while( true ) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      bVar1 = F_00b68a60(pvVar2,param_1,&(*(int * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 != 0) break;
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0xc);
      if (pvVar2 == (undefined *)0x0) {
        return 0;
      }
    }
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 100))((*(int * PTR32 *)(gen_frame + 0x8)))));
    F_00bc36e0(pvVar2);
  }
  return 0;
}

/* ref: FUN_00b5b9b0 */
unsigned int F_00b5b9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (this_00 != (undefined *)0x0) {
    while( true ) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 != 0) break;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
      if (this_00 == (undefined *)0x0) {
        return 0;
      }
    }
    F_00bc1f20((*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_00b5ba00 */
uint F_00b5ba00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ba00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint in_ecx;
  
  uVar1 = F_00b596a0(REFG(undefined4, 0x14c4e78),param_1);
  if (uVar1 != 0) {
    F_00bc3ba0(uVar1);
  }
  in_ecx = F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (in_ecx != 0) {
    uVar1 = F_00b68c40(in_ecx);
  }
  return uVar1;
}

/* ref: FUN_00b5ba40 */
uint F_00b5ba40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ba40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00b596a0(REFG(undefined4, 0x14c4e78),param_1);
  if (pvVar1 != (undefined *)0x0) {
    F_00bc4380(pvVar1);
  }
  pvVar1 = (undefined *)F_00b5aa80(this,param_1);
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    uVar2 = F_00b68c80(pvVar1);
  }
  return uVar2;
}

/* ref: FUN_00b5ba80 */
byte F_00b5ba80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ba80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * this_00;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  if (this_00 != (undefined *)0x0) {
    bVar1 = F_00b69af0(this_00);
    return bVar1;
  }
  return 1;
}

/* ref: FUN_00b5bab0 */
uint F_00b5bab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5bab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbacc0(((undefined1 *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00b5a9d0(this,((undefined1 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_00b5bae0 */
uint F_00b5bae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5bae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbadd0(((undefined1 *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00b5a9d0(this,((undefined1 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_00b5bb10 */
unsigned int F_00b5bb10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5bb10u, gen_a0, 0u, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * this;
  byte bVar4;
  int * piVar5;
  int local_8;
  
  local_8 = 6;
  piVar5 = param_1;
  do {
    piVar5 = piVar5 + 1;
    for (iVar1 = *piVar5; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      F_00b698f0(iVar1,param_2,param_3);
    }
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  param_2 = 8.40779e-45;
  piVar5 = param_1;
  do {
    piVar5 = piVar5 + 1;
    puVar2 = (undefined4 *)*piVar5;
    while (this = puVar2, this != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)this[3];
      bVar4 = F_00b69050(this);
      if (bVar4 != 0) {
        iVar1 = this[2];
        iVar3 = this[3];
        if (iVar1 == 0) {
          *piVar5 = iVar3;
        }
        else {
          *(int *)(iVar1 + 0xc) = iVar3;
        }
        if (iVar3 != 0) {
          *(int *)(iVar3 + 8) = iVar1;
        }
        if ((undefined4 *)param_1[0xb] == this) {
          param_1[8] = -1;
          param_1[0xb] = 0;
        }
        if ((undefined4 *)param_1[0xc] == this) {
          param_1[9] = 0;
          param_1[0xc] = 0;
        }
        if ((undefined4 *)param_1[0xd] == this) {
          param_1[10] = 0;
          param_1[0xd] = 0;
        }
        ((code *)*(gen_code32 *)*this)(this,1);
      }
    }
    param_2 = gen_bits2f((int)gen_fl2bits(param_2) + -1);
  } while (param_2 != 0.0);
  return 0;
}

/* ref: FUN_00b5bbf0 */
uint F_00b5bbf0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5bbf0u, gen_a0, 0u, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 uVar1;
  byte bVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  undefined * this;
  
  pvVar3 = (undefined *)F_00b5aa80((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]));
  uVar1 = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 *)&gen_args[2]) = 0;
  this = pvVar3;
  while ((this != (undefined *)0x0 || (this = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))), this != (undefined *)0x0))) {
    bVar2 = F_00b68ad0(this,uVar1,&(*(undefined4 *)&gen_args[2]));
    if (bVar2 == 0) {
      return CONCAT31(extraout_var,bVar2);
    }
    pvVar3 = (undefined *)F_00bd1550((*(undefined4 *)&gen_args[2]),(*(float *)&gen_args[1]));
  }
  return (uint)pvVar3;
}

/* ref: FUN_00b5bc50 */
uint F_00b5bc50(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb5bc50u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined * this;
  
  (*(int *)(gen_frame + 0x4)) = 6;
LAB_00b5bc65: ;
  param_1 = param_1 + 1;
  this = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  do {
    if (this == (undefined *)0x0) {
      this = (undefined *)*param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      goto joined_r0x00b5bc7b;
    }
    while( true ) {
      bVar1 = F_00b68a60(this,param_2,&(*(undefined4 *)(gen_frame + 0x8)));
      in_EAX = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) break;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      this = *(undefined * PTR32 *)((int)this + 0xc);
joined_r0x00b5bc7b: ;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      if (this == (undefined *)0x0) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        if ((*(int *)(gen_frame + 0x4)) == 0) {
          return in_EAX;
        }
        goto LAB_00b5bc65;
      }
    }
    in_EAX = F_00bd1550((*(undefined4 *)(gen_frame + 0x8)),param_3);
  } while( true );
}

/* ref: FUN_00b5bcc0 */
unsigned int F_00b5bcc0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb5bcc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this;
  
  (*(int *)(gen_frame + 0x8)) = param_1;
  this = *(undefined * PTR32 *)(param_1 + 8);
  (*(int *)(gen_frame + 0x8)) = 0;
  if (this != (undefined *)0x0) {
    while( true ) {
      (*(int *)(gen_frame + 0x8)) = 0;
      bVar1 = F_00b68a60(this,param_2,&(*(int *)(gen_frame + 0x8)));
      if (bVar1 != 0) break;
      (*(int *)(gen_frame + 0x8)) = 0;
      this = *(undefined * PTR32 *)((int)this + 0xc);
      if (this == (undefined *)0x0) {
        return 0;
      }
    }
    F_00bd1550((*(int *)(gen_frame + 0x8)),param_3);
  }
  return 0;
}

/* ref: FUN_00b5bd20 */
uint F_00b5bd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5bd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00406b90(0x9f8,0,0);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00b68450(uVar2,param_1);
  }
  *(undefined4 *)(uVar2 + 8) = 0;
  *(undefined4 *)(uVar2 + 0xc) = *(undefined4 *)((int)this + param_1 * 4 + 4);
  iVar1 = *(int *)((int)this + param_1 * 4 + 4);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 8) = uVar2;
  }
  *(uint *)((int)this + param_1 * 4 + 4) = uVar2;
  return uVar2;
}

/* ref: FUN_00b5bd80 */
unsigned int F_00b5bd80(unsigned int gen_a0)
{
  GEN_ENTER(0xb5bd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f153c));
  F_00b5ac70(this);
  REFG(undefined4, 0x14c4e84) = 0;
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x38));
  return 0;
}

/* ref: FUN_00b5bdb0 */
uint F_00b5bdb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5bdb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b5ac70(this);
  if (this != (undefined *)0x0) {
    uVar1 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  }
  return uVar1;
}

/* ref: FUN_00b5bdd0 */
uint F_00b5bdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5bdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b5aa80(this,param_1);
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0x9f4) = 1;
    return uVar1;
  }
  uVar1 = F_00406b90(0x9f8,0,0);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00b68450(uVar1,5);
  }
  *(undefined4 *)(uVar1 + 8) = 0;
  *(undefined4 *)(uVar1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  if (*(int *)((int)this + 0x18) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 8))) = uVar1;
  }
  *(uint *)((int)this + 0x18) = uVar1;
  F_00bbadb0(uVar1 + 0x9a8,param_1,0);
  *(undefined1 *)(uVar1 + 0x9f4) = 1;
  return uVar1;
}

/* ref: FUN_00b5be60 */
uint F_00b5be60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb5be60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint uVar1;
  undefined * this_00;
  
  this_00 = (undefined *)F_00b5bdd0(this,param_2);
  uVar1 = *(uint *)((int)this + 0x1c);
  *(uint *)((int)this + 0x1c) = uVar1 + 1;
  *param_1 = uVar1 & 0x3fffffff | 0x40000000;
  F_00b69120(this_00,param_1,param_3,param_4,param_5,param_6,0);
  return (uint)param_1;
}

/* ref: FUN_00b5beb0 */
uint F_00b5beb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5beb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00b5b260(this,param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1);
  return uVar2;
}

/* ref: FUN_00b5bee0 */
uint F_00b5bee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5bee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  if (this_00 == (undefined *)0x0) {
    uVar1 = F_00406b90(0x9f8,0,0);
    if (uVar1 == 0) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = (undefined *)F_00b68450(uVar1,1);
    }
    *(undefined4 *)((int)this_00 + 8) = 0;
    *(undefined4 *)((int)this_00 + 0xc) = *(undefined4 *)((int)this + 8);
    if (*(int *)((int)this + 8) != 0) {
      *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 8))) = this_00;
    }
    *(undefined * PTR32 *)((int)this + 8) = this_00;
  }
  uVar1 = *(uint *)((int)this + 0x1c);
  *(uint *)((int)this + 0x1c) = uVar1 + 1;
  *param_1 = uVar1 & 0x3fffffff | 0x40000000;
  F_00b69380(this_00,param_1,param_2,param_3);
  return (uint)param_1;
}

/* ref: FUN_00b5bf60 */
uint F_00b5bf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xb5bf60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  if (param_3 == (undefined *)0x0) {
    param_3 = (undefined *)F_00b5aaf0(this,5,param_4);
    if (param_3 == (undefined *)0x0) {
      param_3 = (undefined *)F_00b5aaf0(this,2,param_4);
      if (param_3 == (undefined *)0x0) {
        param_3 = (undefined *)F_00b5bd20(this,2);
        F_00bbb060((undefined *)((int)param_3 + 0x9a8),param_4);
      }
    }
  }
  uVar1 = *(uint *)((int)this + 0x1c);
  *(uint *)((int)this + 0x1c) = uVar1 + 1;
  *param_1 = uVar1 & 0x3fffffff | 0x40000000;
  F_00b693d0(param_3,param_1,param_2,param_4,param_5,param_6,param_7);
  return (uint)param_1;
}

/* ref: FUN_00b5bff0 */
uint F_00b5bff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xb5bff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[12];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  uint uVar1;
  undefined4 uVar2;
  undefined * this_00;
  
  uVar2 = (*(undefined4 *)&gen_args[4]);
  if (*(*(int * PTR32 *)&gen_args[2]) != 0x424c4d54) {
    uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = uVar1 + 1;
    *(*(uint * PTR32 *)&gen_args[1]) = uVar1 & 0x3fffffff | 0x40000000;
    return (uint)(*(uint * PTR32 *)&gen_args[1]);
  }
  this_00 = (*(undefined * PTR32 *)&gen_args[3]);
  if ((*(undefined * PTR32 *)&gen_args[3]) == (undefined *)0x0) {
    this_00 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),5,(*(undefined4 *)&gen_args[4]));
    if (this_00 == (undefined *)0x0) {
      this_00 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),2,uVar2);
      if (this_00 == (undefined *)0x0) {
        this_00 = (undefined *)F_00b5bd20((*(undefined * PTR32 *)&gen_args[0]),2);
        F_00bbb060((undefined *)((int)this_00 + 0x9a8),uVar2);
      }
    }
  }
  (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) & 0x3fffffff | 0x40000000)));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 1;
  F_00b69440(this_00,&(*(undefined * PTR32 *)&gen_args[3]),(*(int * PTR32 *)&gen_args[2]),uVar2,(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]),
               (*(undefined4 *)&gen_args[11]));
  *(*(uint * PTR32 *)&gen_args[1]) = (uint)(*(undefined * PTR32 *)&gen_args[3]);
  return (uint)(*(uint * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00b5c0c0 */
uint F_00b5c0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined * this_00;
  
  uVar1 = F_00bbac80(((undefined1 *)(gen_frame + 0x18)));
  if (param_1 != 0) {
    F_00bbadd0(((undefined1 *)(gen_frame + 0x18)),param_1);
    this_00 = (undefined *)F_00b5aaf0(this,3,((undefined1 *)(gen_frame + 0x18)));
    if (this_00 != (undefined *)0x0) {
      F_00b69a60(this_00,0);
    }
    F_00bbac80(((undefined1 *)(gen_frame + 0x4)));
    F_00bbadd0(((undefined1 *)(gen_frame + 0x4)),param_1);
    uVar1 = F_00b5a9d0(this,((undefined1 *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00b5c120 */
uint F_00b5c120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8)
{
  GEN_ENTER(0xb5c120u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  memcpy(&gen_args[8], &gen_a8, sizeof gen_a8);
  undefined4 uVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[3]);
  if ((*(int *)&gen_args[2]) != 0) {
    uVar2 = F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),3,(*(uint *)&gen_args[3]));
    if (uVar2 == 0) {
      uVar2 = F_00406b90(0x9f8,0,0);
      if (uVar2 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_00b68450(uVar2,3);
      }
      *(undefined4 *)(uVar2 + 8) = 0;
      *(undefined4 *)(uVar2 + 0xc) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 8))) = uVar2;
      }
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar2;
      F_00bbb060((undefined *)(uVar2 + 0x9a8),uVar1);
    }
    (*(uint *)&gen_args[3]) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) & 0x3fffffff | 0x40000000;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 1;
    in_EAX = F_00b694c0(uVar2,&(*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]),uVar1,(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),
                          (*(float *)&gen_args[8]));
  }
  return in_EAX;
}

/* ref: FUN_00b5c1e0 */
uint F_00b5c1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int iVar2;
  int iVar3;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x18)));
  F_00bbadf0(((undefined1 *)(gen_frame + 0x18)),param_1,0);
  uVar1 = F_00bbaf90(((undefined1 *)(gen_frame + 0x18)));
  if (uVar1 != 0) {
    iVar2 = uVar1 + 0x16c0;
    iVar3 = 3;
    do {
      if (iVar2 != 0) {
        F_00bbac80(((undefined1 *)(gen_frame + 0x4)));
        F_00bbadd0(((undefined1 *)(gen_frame + 0x4)),iVar2);
        F_00b5a9d0(this,((undefined1 *)(gen_frame + 0x4)));
      }
      iVar2 = iVar2 + 0x7a0;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar1 = F_00b5a9d0(this,((undefined1 *)(gen_frame + 0x18)));
  return uVar1;
}

/* ref: FUN_00b5c260 */
uint F_00b5c260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8)
{
  GEN_ENTER(0xb5c260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float param_9 = (float)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint in_EAX = 0;
  
  if (param_3 != 0) {
    F_00bbac80(((undefined1 *)(gen_frame + 0x4)));
    F_00bbac80(((undefined1 *)(gen_frame + 0x18)));
    F_00bbadd0(((undefined1 *)(gen_frame + 0x4)),param_4);
    F_00bbadf0(((undefined1 *)(gen_frame + 0x18)),param_5,0);
    in_EAX = F_00b5c120(param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x18)),param_6,param_7,param_8,param_9)
    ;
  }
  return in_EAX;
}

/* ref: FUN_00b5c2e0 */
byte F_00b5c2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c2e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00bbadb0(in_ecx + 0x9a8,param_2,0);
  return bVar1;
}

/* ref: FUN_00b5c300 */
uint F_00b5c300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00bbad60((undefined *)((int)this + 0x9a8),param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00b5c310 */
unsigned int F_00b5c310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bbb060((undefined *)((int)this + 0x9a8),param_1);
  return 0;
}

/* ref: FUN_00b5c330 */
uint F_00b5c330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bbaea0((undefined *)((int)this + 0x9a8),param_1);
  return uVar1;
}

/* ref: FUN_00b5c3b0 */
uint F_00b5c3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c3b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b5c3d0 */
uint F_00b5c3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c3d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b5c3e0 */
uint F_00b5c3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5c3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  *(uint *)this = param_1 & 0x3fffffff | param_2 << 0x1e;
  return (uint)this;
}

/* ref: FUN_00b5c440 */
uint F_00b5c440(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0x27;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f1534));
  puVar1 = (undefined4 *)((int)this + 0x48);
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined2 *)(puVar1 + 0xb) = 1;
    *(undefined1 *)((int)puVar1 + 0x2e) = 0;
    puVar1 = puVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return (uint)this;
}

/* ref: FUN_00b5c490 */
unsigned int F_00b5c490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = *param_1;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 8) = (int)this + -8;
  }
  *param_1 = (int)this + -8;
  return 0;
}

/* ref: FUN_00b5c4c0 */
unsigned int F_00b5c4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::ActionTimelineManager::vf0 */
uint F_00b5c4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f153c));
  F_00b5ac70(this);
  REFG(undefined4, 0x14c4e84) = 0;
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5c540 */
uint F_00b5c540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b5c560 */
uint F_00b5c560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b5c570 */
uint F_00b5c570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_00b5c5a0 */
unsigned int F_00b5c5a0(float gen_a0)
{
  GEN_ENTER(0xb5c5a0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b5c5c0 */
uint F_00b5c5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f2de8));
  *(undefined4 *)((int)this + 4) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined1 *)((int)this + 0x78) = 0;
  *(undefined2 *)((int)this + 0x20) = 1;
  return (uint)this;
}

/* ref: FUN_00b5c5f0 */
uint F_00b5c5f0(void)
{
  GEN_ENTER(0xb5c5f0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  if (REFG(undefined4, 0x14c4e90) == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)F_00406b90(0x7c,0,0);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10f2de8));
      puVar1[1] = 0;
      gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
      puVar1[0x1d] = 0;
      *(undefined1 *)(puVar1 + 0x1e) = 0;
      *(undefined2 *)(puVar1 + 8) = 1;
      REFG(undefined4, 0x14c4e90) = puVar1;
      return (uint)puVar1;
    }
    REFG(undefined4, 0x14c4e90) = (undefined4 *)0x0;
  }
  return (uint)REFG(undefined4, 0x14c4e90);
}

/* ref: FUN_00b5c650 */
uint F_00b5c650(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c650u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  
  if (param_1 != (undefined *)0x0) {
    in_EAX = F_00bcd4b0(param_1);
  }
  return in_EAX;
}

/* ref: FUN_00b5c670 */
byte F_00b5c670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x20) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b5c680 */
byte F_00b5c680(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(char *)((int)this + 0x20) == '\0') {
    return 1;
  }
  bVar1 = F_005e1640();
  return bVar1 != 0;
}

/* ref: FUN_00b5c6a0 */
uint F_00b5c6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c6a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  do {
    if (*param_1 == **((int * PTR32 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x133b520) + uVar1)))) {
      return (&REFG(undefined4, 0x133b518))[iVar2 * 7];
    }
    uVar1 = uVar1 + 0x1c;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0xd58);
  return 0xffffffff;
}

/* ref: FUN_00b5c6f0 */
uint F_00b5c6f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c6f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if ((0x79 < param_1) ||
     (puVar2 = &REFG(undefined4, 0x133b518) + param_1 * 7, (&REFG(undefined4, 0x133b518))[param_1 * 7] != param_1)) {
    iVar3 = 0;
    uVar1 = 0;
    do {
      if (*(uint *)((int)&REFG(undefined4, 0x133b518) + uVar1) == param_1) {
        return (uint)(&REFG(undefined4, 0x133b518) + iVar3 * 7);
      }
      uVar1 = uVar1 + 0x1c;
      iVar3 = iVar3 + 1;
    } while (uVar1 < 0xd58);
    puVar2 = (undefined4 *)0x0;
  }
  return (uint)puVar2;
}

/* ref: FUN_00b5c750 */
uint F_00b5c750(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 0xc);
}

/* ref: FUN_00b5c770 */
byte F_00b5c770(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c770u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(byte *)(uVar1 + 0x18);
}

/* ref: FUN_00b5c790 */
byte F_00b5c790(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c790u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(byte *)(uVar1 + 0x19);
}

/* ref: FUN_00b5c7b0 */
uint F_00b5c7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c7b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(int *)(uVar1 + 4) + 0xfU & 0xfffffff0;
}

/* ref: FUN_00b5c7e0 */
uint F_00b5c7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 0x14);
}

/* ref: FUN_00b5c800 */
uint F_00b5c800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  
  F_00bcd470(((undefined1 *)(gen_frame + 0x4)),param_1);
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    bVar1 = F_00bcd530(this_00,((undefined1 *)(gen_frame + 0x4)));
    if (bVar1 != 0) break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 8);
  }
  return (uint)this_00;
}

/* ref: FUN_00b5c850 */
uint F_00b5c850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  byte bVar2;
  undefined * this_00;
  
  if (param_1[1] == -1) {
    F_00bcd470(((undefined1 *)(gen_frame + 0x4)),*param_1);
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    if (this_00 != (undefined *)0x0) {
      do {
        bVar2 = F_00bcd530(this_00,((undefined1 *)(gen_frame + 0x4)));
        if (bVar2 != 0) {
          return (uint)this_00;
        }
        this_00 = *(undefined * PTR32 *)((int)this_00 + 8);
      } while (this_00 != (undefined *)0x0);
      return 0;
    }
  }
  else {
    for (uVar1 = *(uint *)((int)this + 4); uVar1 != 0; uVar1 = *(uint *)(uVar1 + 8)) {
      if (*(int *)(uVar1 + 0x50) == param_1[1]) {
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b5c8c0 */
undefined1 F_00b5c8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5c8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  iVar3 = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  if (*(char *)(*param_1 + (int)param_1) == '\0') {
    F_005ecfa0();
  }
  else {
    if ((char)param_2 == '\0') {
      iVar2 = 0;
      if ((*(byte *)(param_1 + 0x11) & 2) == 0) {
        iVar2 = param_1[1];
      }
      else {
        iVar3 = param_1[1];
      }
      F_005f9b10((char *)(*param_1 + (int)param_1),iVar2,iVar3,param_1 + 0xf);
    }
    F_005f32e0(param_1 + 2);
    *(undefined1 *)((int)this + 0x20) = 1;
  }
  uVar1 = *(undefined1 *)((int)this + 0x20);
  *(undefined1 *)((int)this + 0x21) = 1;
  piVar4 = (int *)((int)this + 0x24);
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *param_1;
    param_1 = param_1 + 1;
    piVar4 = piVar4 + 1;
  }
  return uVar1;
}

/* ref: FUN_00b5c930 */
unsigned int F_00b5c930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5c930u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  char * pcVar2;
  bool bVar3;
  
  pcVar2 = (char *)(*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) == 0) {
    pcVar2 = (char *)((*(int *)&gen_args[0]) + 0x44);
  }
  if (*pcVar2 != '\0') {
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*(int *)(pcVar2 + 0x18) *
                                       (float10)*(double *)&REFG(undefined, 0x10c3f40)))));
    if (*(int *)(pcVar2 + 8) == 0) {
      F_00b7c110(&REFG(undefined, 0x133e5c0),0,GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))));
    }
    else {
      F_00b7c0d0(&REFG(undefined, 0x133e5c0),0,(uint)(byte)pcVar2[8],GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))));
    }
  }
  iVar1 = REFG(int, 0x137104c);
  if ((pcVar2[2] == '\0') ||
     (bVar3 = GEN_ISNAN(*(float *)(pcVar2 + 0x10)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
     (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),1),
     bVar3 == (bVar3 || *(float *)(pcVar2 + 0x10) == *(float *)&REFG(undefined, 0x1088114)))) {
    (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff00;
  }
  if (pcVar2[1] != '\0') {
    if (-1 < *(int *)(pcVar2 + 0xc)) {
      F_0071fa20((undefined *)(REFG(int, 0x137104c) + 0x1210),*(int *)(pcVar2 + 0xc) / 0x3c,
                   *(int *)(pcVar2 + 0xc) % 0x3c,(*(uint *)&gen_args[1]));
      return 0;
    }
    *(undefined4 *)(REFG(int, 0x137104c) + 0x1248) = 0;
    *(undefined4 *)(iVar1 + 0x124c) = 0;
    if (*(char *)(iVar1 + 0x1230) != '\0') {
      *(undefined1 *)(iVar1 + 0x1230) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00b5ca00 */
uint F_00b5ca00(unsigned int gen_a0)
{
  GEN_ENTER(0xb5ca00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x74) != 0) {
    piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if ((char)uVar2 == '\0') {
        uVar2 = F_0049c160(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
        if (uVar2 == 0x100) {
          uVar2 = 0;
        }
        ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,uVar2 + 1);
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0,0,1);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b5ca70 */
byte F_00b5ca70(unsigned int gen_a0)
{
  GEN_ENTER(0xb5ca70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x74) != 0) {
    piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      iVar4 = 0;
      if (0 < (int)uVar2) {
        do {
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,iVar4)));
          if (piVar3 == (int *)0x0) {
            return 1;
          }
          ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar2);
      }
    }
  }
  return 0;
}

/* ref: FUN_00b5cad0 */
uint F_00b5cad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5cad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint * puVar4;
  uint uVar5;
  byte * pbVar6;
  int iVar7;
  byte * pbVar8;
  bool bVar9;
  int local_8;
  
  if ((*(int *)((int)this + 0x74) != 0) &&
     (piVar2 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8)), piVar2 != (int *)0x0)) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
    local_8 = 0;
    if (0 < (int)uVar3) {
      do {
        this_00 = (undefined *)F_0052fbd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),
                                       *(undefined4 *)((int)this + 0x74),local_8,0,0);
        if (this_00 != (undefined *)0x0) {
          puVar4 = (uint *)F_00cb0910(this_00,0);
          uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2);
          pbVar8 = param_1;
          if (uVar5 < 3) {
            pbVar6 = (byte *)(*puVar4 + 4);
          }
          else {
            pbVar6 = ((byte *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
          }
          do {
            bVar1 = *pbVar8;
            bVar9 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_00b5cb90: ;
              iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_00b5cb95;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar9 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_00b5cb90;
            pbVar6 = pbVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00b5cb95: ;
          if (iVar7 == 0) {
            puVar4 = (uint *)F_00cb0910(this_00,1);
            uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2);
            if (2 < uVar3) {
              return (*puVar4 & 0xffffff) + (int)puVar4;
            }
            return *puVar4 + 4;
          }
        }
        local_8 = local_8 + 1;
        if ((int)uVar3 <= local_8) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

/* ref: FUN_00b5cbf0 */
uint F_00b5cbf0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5cbf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x74) != 0) {
    piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x74) != 0) {
    uVar2 = F_00406ad0(*(int *)((int)this + 0x74));
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  return uVar2;
}

/* ref: FUN_00b5cc40 */
uint F_00b5cc40(unsigned int gen_a0)
{
  GEN_ENTER(0xb5cc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x74) != 0) {
    piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x74) != 0) {
    uVar2 = F_00406ad0(*(int *)((int)this + 0x74));
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  return uVar2;
}

/* ref: FUN_00b5cc90 */
unsigned int F_00b5cc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5cc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(char *)((int)this + 0x21) != '\0') {
    if ((*(char *)((int)this + 0x20) != '\0') && (bVar1 = F_005e1640(), bVar1 == 0)) {
      return 0;
    }
    F_00b5c930(this,0,0);
    *(undefined1 *)(REFG(int, 0x1370c1c) + 5) = 1;
    *(undefined1 *)((int)this + 0x21) = 0;
  }
  return 0;
}

/* ref: FUN_00b5ccd0 */
uint F_00b5ccd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5ccd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa70];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0xa68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa6c);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  (*(undefined4 *)(gen_frame + 0x10)) = param_2;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this_00 = (undefined *)F_00b5c850(this,param_1);
  if (this_00 == (undefined *)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  else {
    F_00bcd3c0(this_00);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    uVar2 = *(uint *)((int)this_00 + 0x5c) >> 1;
    if (((uVar2 & 1) == 0) || ((uVar2 & 1) == 0)) {
      bVar1 = F_00bcd860(this_00);
      if (bVar1 == 0) {
        uVar2 = F_00bcd800(this_00,((undefined1 *)(gen_frame + 0xc)));
        if (uVar2 != 0) {
          F_00b5c440(((undefined1 *)(gen_frame + 0x18)));
          uVar2 = F_00bcdf00(uVar2,(*(undefined4 *)(gen_frame + 0x10)));
          F_00bcd4b0(this_00);
          F_00c47745((*(uint *)(gen_frame + 0xa68)) ^ (uint)(uint)(gen_frame + 0xa6c));
          return uVar2;
        }
      }
    }
    F_00bcd4b0(this_00);
  }
  F_00c47745((*(uint *)(gen_frame + 0xa68)) ^ (uint)(uint)(gen_frame + 0xa6c));
  return 0;
}

/* ref: FUN_00b5cdb0 */
uint F_00b5cdb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5cdb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  this_00 = (undefined *)F_00406b90(0x60,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00bcd630(this_00);
  }
  piVar1 = (int *)(uVar3 + 4);
  iVar2 = *(int *)((int)this + 4);
  if (*(int *)((int)this + 4) == 0) {
    *piVar1 = 0;
    *(undefined4 *)(uVar3 + 8) = 0;
    *(uint *)((int)this + 4) = uVar3;
    return uVar3;
  }
  do {
    iVar4 = iVar2;
    iVar2 = *(int *)(iVar4 + 8);
  } while (*(int *)(iVar4 + 8) != 0);
  if (piVar1 != (int *)0x0) {
    *(uint *)(iVar4 + 8) = uVar3;
    *piVar1 = iVar4;
    *(undefined4 *)(uVar3 + 8) = 0;
    return uVar3;
  }
  *(undefined4 *)(iVar4 + 8) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar4;
  *(undefined4 *)(uVar3 + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b5ce20 */
unsigned int F_00b5ce20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ce20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    *(int *)((int)this + 4) = iVar2;
  }
  else {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b5ce50 */
uint F_00b5ce50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xb5ce50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = (*(undefined4 *)&gen_args[3]);
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[3]))) {
  case 0: ;
  case 7: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x158,0,0);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be32d0(pvVar6);
        goto LAB_00b5ce84;
      }
LAB_00b5cec2: ;
      piVar5 = (int *)0x0;
      goto LAB_00b5ce84;
    }
    piVar5 = (int *)F_00be32d0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 1: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xa4,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be71f0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be71f0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 2: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be6c60(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be6c60((*(int * PTR32 *)&gen_args[1]));
    break;
  case 3: ;
  case 4: ;
  case 5: ;
  case 8: ;
  case 0xc: ;
  case 0x17: ;
  case 0x19: ;
  case 0x1a: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x90,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be2ce0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be2ce0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 6: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xb8,0,0);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be4f60(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be4f60((*(int * PTR32 *)&gen_args[1]));
    break;
  case 9: ;
  case 0x27: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x160,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be2420(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be2420((*(int * PTR32 *)&gen_args[1]));
    break;
  case 10: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be6940(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be6940((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0xb: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be6790(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be6790((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0xd: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f19ac));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f19ac));
    break;
  case 0xe: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be2190(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be2190((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0xf: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1acc));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1acc));
    break;
  case 0x10: ;
  case 0x1b: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1bec));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1bec));
    break;
  case 0x11: ;
  case 0x1c: ;
  case 0x3a: ;
  case 0x3b: ;
  case 0x4b: ;
  case 0x68: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x94,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00b5e720(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00b5e720((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x12: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00b5e750(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00b5e750((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x13: ;
  case 0x58: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1f4c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1f4c));
    break;
  case 0x14: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f206c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f206c));
    break;
  case 0x15: ;
  case 0x16: ;
  case 0x32: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00b5e7e0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00b5e7e0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x18: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f22ac));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f22ac));
    break;
  case 0x1d: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x160,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be1aa0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be1aa0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x1e: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xc0,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be0fd0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be0fd0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x1f: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be06a0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be06a0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x20: ;
  case 0x4a: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00b5e840(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00b5e840((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x21: ;
  case 0x37: ;
  case 0x49: ;
  case 0x6a: ;
  case 0x72: ;
  case 0x75: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f24ec));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f24ec));
    break;
  case 0x22: ;
  case 0x38: ;
  case 0x6b: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be0340(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be0340((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x23: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x90,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdfdc0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdfdc0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x24: ;
  case 0x25: ;
  case 0x26: ;
  case 0x34: ;
  case 0x35: ;
  case 0x36: ;
  case 0x67: ;
  case 0x6c: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xa8,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bde810(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bde810((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x28: ;
  case 0x2a: ;
  case 0x50: ;
  case 0x60: ;
  case 0x6d: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f260c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f260c));
    break;
  case 0x29: ;
  case 0x33: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x90,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00b5e900(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00b5e900((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x2b: ;
  case 0x2c: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x2f: ;
  case 0x30: ;
  case 0x31: ;
  case 0x44: ;
  case 0x45: ;
  case 0x46: ;
  case 0x71: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f272c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f272c));
    break;
  case 0x39: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bddc60(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bddc60((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x3c: ;
  case 0x3d: ;
  case 0x3e: ;
  case 0x3f: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f296c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f296c));
    break;
  case 0x40: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x94,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdd350(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdd350((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x41: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2a8c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2a8c));
    break;
  case 0x42: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00b5e9e0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00b5e9e0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x43: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2ccc));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2ccc));
    break;
  case 0x47: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2f14));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2f14));
    break;
  case 0x48: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f3154));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f3154));
    break;
  case 0x4c: ;
  case 0x4d: ;
  case 0x4e: ;
  case 0x4f: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xbc,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdcc00(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdcc00((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x51: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdc930(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdc930((*(int * PTR32 *)&gen_args[1]));
    break;
  default: ;
    return 0;
  case 0x53: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdc7c0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdc7c0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x54: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdc660(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdc660((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x55: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdc5b0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdc5b0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x56: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdc380(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdc380((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x57: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdc040(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdc040((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x59: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdbfa0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdbfa0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x5a: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2df4));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2df4));
    break;
  case 0x5b: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdbf00(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdbf00((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x5c: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdbbc0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdbbc0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x5d: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xa8,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdb820(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdb820((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x5e: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdb580(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdb580((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x5f: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xa8,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdb250(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdb250((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x61: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x90,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdadc0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdadc0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x62: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bda880(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bda880((*(int * PTR32 *)&gen_args[1]));
    break;
  case 99: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bda4d0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bda4d0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 100: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bda2d0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bda2d0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x65: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bda080(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bda080((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x66: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd9cb0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd9cb0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x69: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd9b40(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd9b40((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x6e: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd9a50(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd9a50((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x6f: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd98d0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd98d0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x70: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xa0,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bde070(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bde070((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x73: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd9720(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd9720((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x74: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd95f0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd95f0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x76: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd8ac0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd8ac0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x77: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd86c0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd86c0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x78: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x90,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd83b0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd83b0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x79: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd7d30(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd7d30((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x7a: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd7a90(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd7a90((*(int * PTR32 *)&gen_args[1]));
  }
  *(undefined1 *)((int)piVar5 + 0x16) = 1;
LAB_00b5ce84: ;
  piVar5[1] = (*(int *)&gen_args[4]);
  uVar4 = F_00b5c6f0((*(undefined4 *)&gen_args[3]));
  if (uVar4 == 0) {
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(uVar4 + 0x19);
    uVar2 = *(undefined1 *)(uVar4 + 0x18);
    uVar8 = *(undefined4 *)(uVar4 + 0x14);
    uVar7 = *(undefined4 *)(uVar4 + 0xc);
  }
  (*(undefined4 *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[3]), 1, 3),uVar2);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),uVar1)));
  ((code *)*(gen_code32 *)(*piVar5 + 0x30))
            (piVar5,(*(undefined4 *)&gen_args[2]),uVar3,uVar7,uVar8,(*(undefined4 *)&gen_args[3]),(*(int * PTR32 *)&gen_args[1]),(undefined4)gen_fl2bits((*(float *)&gen_args[5])));
  return (uint)piVar5;
}

/* ref: FUN_00b5e020 */
unsigned int F_00b5e020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5e020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  if (param_1 != (char *)0x0) {
    uVar2 = F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    if (uVar2 != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (*(int *)((int)this + 0x74) != 0) {
        F_00406ad0(*(int *)((int)this + 0x74));
        *(undefined4 *)((int)this + 0x74) = 0;
      }
      uVar2 = F_00406bb0(pcVar3 + (1 - (int)(param_1 + 1)),0,0);
      *(uint *)((int)this + 0x74) = uVar2;
      F_00c49908(uVar2,pcVar3 + (1 - (int)(param_1 + 1)),param_1);
      F_00b5ca00(this);
    }
  }
  return 0;
}

/* ref: FUN_00b5e0a0 */
unsigned int F_00b5e0a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f2de8));
  if (*(int *)((int)this + 0x74) != 0) {
    piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    }
  }
  if (*(int *)((int)this + 0x74) != 0) {
    F_00406ad0(*(int *)((int)this + 0x74));
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  REFG(undefined4, 0x14c4e90) = 0;
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00b5e100 */
unsigned int F_00b5e100(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(char *)((int)this + 0x78) == '\0') {
    if (*(int *)((int)this + 0x74) != 0) {
      piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      }
    }
    if (*(int *)((int)this + 0x74) != 0) {
      F_00406ad0(*(int *)((int)this + 0x74));
      *(undefined4 *)((int)this + 0x74) = 0;
    }
    *(undefined1 *)((int)this + 0x78) = 1;
  }
  return 0;
}

/* ref: FUN_00b5e150 */
uint F_00b5e150(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x74) != 0) {
    piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    }
  }
  if (*(int *)((int)this + 0x74) != 0) {
    F_00406ad0(*(int *)((int)this + 0x74));
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  uVar2 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  return uVar2;
}

/* ref: FUN_00b5e1a0 */
uint F_00b5e1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5e1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this_00;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0x63757462;
  F_00bcd470(((undefined1 *)(gen_frame + 0x0)),param_1);
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  do {
    if (this_00 == (undefined *)0x0) {
LAB_00b5e1e1: ;
      this_00 = (undefined *)F_00b5cdb0(this);
      F_00bcd930(this_00,param_1,&(*(undefined4 *)(gen_frame + 0x8)),param_2);
LAB_00b5e1fa: ;
      F_00bcd3c0(this_00);
      return (uint)this_00;
    }
    bVar1 = F_00bcd530(this_00,((undefined1 *)(gen_frame + 0x0)));
    if (bVar1 != 0) {
      if (this_00 != (undefined *)0x0) goto LAB_00b5e1fa;
      goto LAB_00b5e1e1;
    }
    this_00 = *(undefined * PTR32 *)((int)this_00 + 8);
  } while( true );
}

/* ref: FUN_00b5e210 */
uint F_00b5e210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5e210u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 * puVar1;
  undefined * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 8));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  this_00 = (undefined *)F_00b5c850((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]));
  if (this_00 == (undefined *)0x0) {
    this_00 = (undefined *)F_00b5cdb0((*(undefined * PTR32 *)&gen_args[0]));
    F_004ff300(&(*(undefined4 * PTR32 *)&gen_args[1]),4);
    F_00bcd9c0(this_00,*puVar1,puVar1[1],&(*(undefined4 * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  }
  F_00bcd3c0(this_00);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 8));
  return (uint)this_00;
}

/* ref: FUN_00b5e280 */
uint F_00b5e280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb5e280u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined * this_00;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = (LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 8);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 8));
  uVar1 = (*(undefined4 *)&gen_args[2]);
  F_00bcd470(((undefined1 *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[2]));
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  do {
    if (this_00 == (undefined *)0x0) {
LAB_00b5e2cc: ;
      this_00 = (undefined *)F_00b5cdb0((*(undefined * PTR32 *)&gen_args[0]));
      if ((*(int *)&gen_args[1]) == 0) {
        F_00bcda90(this_00,uVar1,(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
      }
      else {
        (*(undefined4 *)&gen_args[2]) = 0x746d62;
        F_004ff300(&(*(int *)&gen_args[1]),4);
        F_00bcda50(this_00,uVar1,&(*(int *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[4]));
      }
LAB_00b5e312: ;
      iVar2 = (*(int *)&gen_args[3]);
      if (((*(int *)&gen_args[3]) != 0) && (bVar3 = F_00bcd430(this_00,(*(int *)&gen_args[3])), bVar3 == 0)) {
        F_00bcd580(this_00,iVar2);
      }
      F_00bcd3c0(this_00);
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
      return (uint)this_00;
    }
    bVar3 = F_00bcd530(this_00,((undefined1 *)(gen_frame + 0x0)));
    if (bVar3 != 0) {
      if (this_00 != (undefined *)0x0) goto LAB_00b5e312;
      goto LAB_00b5e2cc;
    }
    this_00 = *(undefined * PTR32 *)((int)this_00 + 8);
  } while( true );
}

/* ref: FUN_00b5e350 */
uint F_00b5e350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0xb5e350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  char cVar1;
  undefined1 uVar2;
  int * piVar3;
  uint uVar4;
  undefined1 uVar5;
  char cVar6;
  
  piVar3 = (int *)F_00b5ce50(param_1,0,param_2,param_3,param_4,param_8);
  if (piVar3 != (int *)0x0) {
    uVar4 = F_00b5c6f0(param_3);
    if (uVar4 == 0) {
      cVar6 = '\0';
      cVar1 = '\0';
      uVar5 = 0;
      uVar2 = 0;
    }
    else {
      cVar6 = *(char *)(uVar4 + 0x18);
      cVar1 = *(char *)(uVar4 + 0x19);
      uVar5 = (undefined1)*(undefined4 *)(uVar4 + 0xc);
      uVar2 = (undefined1)*(undefined4 *)(uVar4 + 0x14);
    }
    piVar3[0xb] = param_3;
    *(undefined1 *)((int)piVar3 + 0x29) = uVar5;
    *(undefined1 *)((int)piVar3 + 0x2a) = uVar2;
    if (cVar6 == '\0') {
      *(ushort *)(piVar3 + 0x1f) = *(ushort *)(piVar3 + 0x1f) & 0xfffb;
    }
    else {
      *(ushort *)(piVar3 + 0x1f) = *(ushort *)(piVar3 + 0x1f) | 4;
    }
    if (cVar1 == '\0') {
      *(ushort *)(piVar3 + 0x1f) = *(ushort *)(piVar3 + 0x1f) & 0xfff7;
    }
    else {
      *(ushort *)(piVar3 + 0x1f) = *(ushort *)(piVar3 + 0x1f) | 8;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0x44))(piVar3,param_5,param_6,1);
    ((code *)*(gen_code32 *)(*piVar3 + 0x40))(piVar3,param_2,(undefined4)gen_fl2bits(param_8),param_7);
    return (uint)piVar3;
  }
  return 0;
}

/* ref: FUN_00b5e420 */
byte F_00b5e420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5e420u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x50) == param_2;
}

/* ref: FUN_00b5e440 */
uint F_00b5e440(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f19ac));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf6 */
unsigned int F_00b5e460(void)
{
  GEN_ENTER(0xb5e460u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf7 */
byte F_00b5e470(void)
{
  GEN_ENTER(0xb5e470u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf8 */
unsigned int F_00b5e480(void)
{
  GEN_ENTER(0xb5e480u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf13 */
byte F_00b5e490(void)
{
  GEN_ENTER(0xb5e490u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf14 */
unsigned int F_00b5e4a0(void)
{
  GEN_ENTER(0xb5e4a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf17 */
unsigned int F_00b5e4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5e4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf18 */
unsigned int F_00b5e4c0(void)
{
  GEN_ENTER(0xb5e4c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf19 */
byte F_00b5e4d0(void)
{
  GEN_ENTER(0xb5e4d0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf20 */
unsigned int F_00b5e4e0(void)
{
  GEN_ENTER(0xb5e4e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf24 */
unsigned int F_00b5e4f0(void)
{
  GEN_ENTER(0xb5e4f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf25 */
unsigned int F_00b5e500(void)
{
  GEN_ENTER(0xb5e500u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf26 */
unsigned int F_00b5e510(void)
{
  GEN_ENTER(0xb5e510u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf27 */
unsigned int F_00b5e520(void)
{
  GEN_ENTER(0xb5e520u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf29 */
unsigned int F_00b5e530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5e530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf30 */
unsigned int F_00b5e540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5e540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf31 */
unsigned int F_00b5e550(void)
{
  GEN_ENTER(0xb5e550u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf32 */
unsigned int F_00b5e560(void)
{
  GEN_ENTER(0xb5e560u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf35 */
unsigned int F_00b5e570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5e570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf36 */
unsigned int F_00b5e580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5e580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf37 */
unsigned int F_00b5e590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5e590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf41 */
unsigned int F_00b5e5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e5a0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf42 */
unsigned int F_00b5e5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e5b0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf43 */
unsigned int F_00b5e5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e5c0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf44 */
unsigned int F_00b5e5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e5d0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf55 */
unsigned int F_00b5e5f0(void)
{
  GEN_ENTER(0xb5e5f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf56 */
unsigned int F_00b5e600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5e600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf61 */
byte F_00b5e610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5e610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf63 */
unsigned int F_00b5e620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5e620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf64 */
byte F_00b5e630(void)
{
  GEN_ENTER(0xb5e630u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf65 */
byte F_00b5e640(void)
{
  GEN_ENTER(0xb5e640u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf66 */
uint F_00b5e650(void)
{
  GEN_ENTER(0xb5e650u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf67 */
byte F_00b5e660(void)
{
  GEN_ENTER(0xb5e660u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf68 */
unsigned int F_00b5e670(void)
{
  GEN_ENTER(0xb5e670u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf69 */
unsigned int F_00b5e680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5e680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00b5e6a0 */
uint F_00b5e6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f1acc));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf28 */
unsigned int F_00b5e6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5e6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf34 */
byte F_00b5e6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5e6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00b5e6f0 */
uint F_00b5e6f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f1bec));
  return (uint)this;
}

/* ref: FUN_00b5e720 */
uint F_00b5e720(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f1d0c));
  *(undefined1 *)((int)this + 0x90) = 1;
  return (uint)this;
}

/* ref: FUN_00b5e750 */
uint F_00b5e750(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f1e2c));
  *(undefined1 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: FUN_00b5e780 */
uint F_00b5e780(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f1f4c));
  return (uint)this;
}

/* ref: FUN_00b5e7b0 */
uint F_00b5e7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f206c));
  return (uint)this;
}

/* ref: FUN_00b5e7e0 */
uint F_00b5e7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f218c));
  *(undefined4 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: FUN_00b5e810 */
uint F_00b5e810(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f22ac));
  return (uint)this;
}

/* ref: FUN_00b5e840 */
uint F_00b5e840(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f23cc));
  *(undefined4 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: FUN_00b5e870 */
uint F_00b5e870(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f24ec));
  return (uint)this;
}

/* ref: FUN_00b5e8a0 */
uint F_00b5e8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f260c));
  return (uint)this;
}

/* ref: FUN_00b5e8d0 */
uint F_00b5e8d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f272c));
  return (uint)this;
}

/* ref: FUN_00b5e900 */
uint F_00b5e900(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x8c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f284c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf0 */
uint F_00b5e920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5e920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd6720(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5e950 */
uint F_00b5e950(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f296c));
  return (uint)this;
}

/* ref: FUN_00b5e980 */
uint F_00b5e980(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2a8c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::CutVFXTriggerClip::vf0 */
uint F_00b5e9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5e9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2a8c));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5e9e0 */
uint F_00b5e9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2bac));
  *(undefined4 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::RandomSyncClip::vf0 */
uint F_00b5ea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ea10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2bac));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5ea40 */
uint F_00b5ea40(unsigned int gen_a0)
{
  GEN_ENTER(0xb5ea40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2ccc));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::CutActionClip::vf0 */
uint F_00b5ea70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ea70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2ccc));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5eaa0 */
uint F_00b5eaa0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5eaa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2df4));
  return (uint)this;
}

/* ref: FUN_00b5eac0 */
uint F_00b5eac0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5eac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2f14));
  return (uint)this;
}

/* ref: FUN_00b5eae0 */
uint F_00b5eae0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5eae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f3034));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf33 */
unsigned int F_00b5eb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5eb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::PinningClip::vf0 */
uint F_00b5eb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5eb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd77f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::AutoShakeBaseClip::vf0 */
uint F_00b5eb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5eb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5eba0 */
uint F_00b5eba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5eba0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return in_ecx + (param_2 >> 4) * 2;
}

/* ref: FUN_00b5ebb0 */
uint F_00b5ebb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5ebb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 1 << ((byte)param_1 & 0xf);
}

/* ref: FUN_00b5ebd0 */
uint F_00b5ebd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ebd0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b5ebf0 */
uint F_00b5ebf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ebf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Clip::ActivePassiveScaleClip::vf0 */
uint F_00b5ec60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ec60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::VariableClip::vf0 */
uint F_00b5ec90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ec90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SetPosClip::vf0 */
uint F_00b5ecc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ecc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf0 */
uint F_00b5ecf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ecf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BgSetupClip::vf0 */
uint F_00b5ed20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ed20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::LocalVFXTriggerClip::vf0 */
uint F_00b5ed50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ed50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::GlobalVFXTriggerClip::vf0 */
uint F_00b5ed80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ed80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::PostEffectClip::vf0 */
uint F_00b5edb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5edb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::CameraShakeClip::vf0 */
uint F_00b5ede0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ede0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf0 */
uint F_00b5ee10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ee10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::NonSerialClip::vf0 */
uint F_00b5ee40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ee40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SystemClip::vf0 */
uint F_00b5ee70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ee70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf0 */
uint F_00b5eea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5eea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SoundClip::vf0 */
uint F_00b5eed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5eed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5ef00 */
uint F_00b5ef00(unsigned int gen_a0)
{
  GEN_ENTER(0xb5ef00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f3154));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::NonAutoShakeClip::vf0 */
uint F_00b5ef30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ef30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::EyeBlinkClip::vf0 */
uint F_00b5ef60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ef60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5ef90 */
unsigned int F_00b5ef90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ef90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort * puVar1;
  
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0xf);
  return 0;
}

/* ref: FUN_00b5efc0 */
unsigned int F_00b5efc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5efc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort * puVar1;
  
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0xf));
  return 0;
}

/* ref: FUN_00b5eff0 */
unsigned int F_00b5eff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5eff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort * puVar1;
  ushort uVar2;
  
  uVar2 = 1 << ((byte)param_1 & 0xf);
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  if ((char)param_2 != '\0') {
    *puVar1 = *puVar1 | uVar2;
    return 0;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return 0;
}

/* ref: FUN_00b5f030 */
uint F_00b5f030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5f030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = (int)this + -4;
    return 0;
  }
  do {
    iVar2 = iVar1;
    iVar1 = *(int *)(iVar2 + 8);
  } while (*(int *)(iVar2 + 8) != 0);
  if (this != (undefined *)0x0) {
    *(uint *)(iVar2 + 8) = (int)this - 4U;
    *(int *)this = iVar2;
    *(undefined4 *)((int)this + 4) = 0;
    return (int)this - 4U;
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar2;
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return 0;
}

/* ref: FUN_00b5f080 */
unsigned int F_00b5f080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5f080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b5f0b0 */
uint F_00b5f0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb5f0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)((int)this + 0x2c) = param_1;
  *(undefined1 *)((int)this + 0x29) = (undefined1)param_2;
  *(undefined1 *)((int)this + 0x2a) = (undefined1)param_3;
  if ((char)param_4 == '\0') {
    *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) & 0xfffb;
  }
  else {
    *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) | 4;
  }
  if ((char)param_5 != '\0') {
    *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) | 8;
    return CONCAT31((int3)((uint)param_1 >> 8),(undefined1)param_3);
  }
  *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) & 0xfff7;
  return 0xfff7;
}

/* ref: Client::System::Scheduler::Resource::SchedulerResourceManagement::vf0 */
uint F_00b5f100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5f100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b5e0a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5f130 */
unsigned int F_00b5f130(unsigned int gen_a0)
{
  GEN_ENTER(0xb5f130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10f3270));
  F_004a00e0(this);
  F_004a05c0(this);
  return 0;
}

/* ref: Client::System::Scheduler::ConstraintTask::vf1 */
unsigned int F_00b5f150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5f150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (REFG(undefined4, 0x1375b00) != (undefined *)0x0) {
    F_0052eef0(REFG(undefined4, 0x1375b00));
  }
  return 0;
}

/* ref: FUN_00b5f170 */
uint F_00b5f170(unsigned int gen_a0)
{
  GEN_ENTER(0xb5f170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004a0020(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10f3270));
  F_004a0100((undefined *)(REFG(int, 0x137104c) + 0x11b0),0x17,this);
  return (uint)this;
}

/* ref: Client::System::Scheduler::ConstraintTask::vf0 */
uint F_00b5f1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5f1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10f3270));
  F_004a00e0(this);
  F_004a05c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5f1d0 */
uint F_00b5f1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5f1d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x133c9c8))[uVar1 * 2] == param_1) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2c);
  return 0xffffffff;
}

/* ref: FUN_00b5f210 */
uint F_00b5f210(unsigned int gen_a0)
{
  GEN_ENTER(0xb5f210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x20) = 0;
  *(undefined4 *)(in_ecx + 0x24) = 0;
  *(undefined4 *)(in_ecx + 0x28) = 0;
  *(undefined4 *)(in_ecx + 0x2c) = 0;
  *(undefined4 *)(in_ecx + 0x30) = 0;
  *(undefined4 *)(in_ecx + 0x34) = 0;
  *(undefined4 *)(in_ecx + 0x38) = 0;
  *(undefined4 *)(in_ecx + 0x3c) = 0;
  *(undefined4 *)(in_ecx + 0x40) = 0;
  *(undefined4 *)(in_ecx + 0x44) = 0;
  *(undefined4 *)(in_ecx + 0x48) = 0;
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
  *(undefined4 *)(in_ecx + 0xc4) = 0;
  *(undefined4 *)(in_ecx + 200) = 0;
  *(undefined4 *)(in_ecx + 0xcc) = 0;
  *(undefined4 *)(in_ecx + 0xd0) = 0;
  *(undefined4 *)(in_ecx + 0xd4) = 0;
  *(undefined4 *)(in_ecx + 0xd8) = 0;
  *(undefined4 *)(in_ecx + 0xdc) = 0;
  *(undefined4 *)(in_ecx + 0xe0) = 0;
  *(undefined4 *)(in_ecx + 0xe4) = 0;
  *(undefined4 *)(in_ecx + 0xe8) = 0;
  *(undefined4 *)(in_ecx + 0xec) = 0;
  *(undefined4 *)(in_ecx + 0xf0) = 0;
  *(undefined4 *)(in_ecx + 0xf4) = 0;
  *(undefined4 *)(in_ecx + 0xf8) = 0;
  *(undefined4 *)(in_ecx + 0xfc) = 0;
  *(undefined4 *)(in_ecx + 0x100) = 0;
  *(undefined4 *)(in_ecx + 0x104) = 0;
  *(undefined4 *)(in_ecx + 0x108) = 0;
  *(undefined4 *)(in_ecx + 0x10c) = 0;
  *(undefined4 *)(in_ecx + 0x110) = 0;
  *(undefined4 *)(in_ecx + 0x114) = 0;
  *(undefined4 *)(in_ecx + 0x118) = 0;
  *(undefined4 *)(in_ecx + 0x11c) = 0;
  *(undefined4 *)(in_ecx + 0x120) = 0;
  *(undefined4 *)(in_ecx + 0x124) = 0;
  *(undefined4 *)(in_ecx + 0x128) = 0;
  *(undefined4 *)(in_ecx + 300) = 0;
  *(undefined4 *)(in_ecx + 0x130) = 0;
  *(undefined4 *)(in_ecx + 0x134) = 0;
  *(undefined4 *)(in_ecx + 0x138) = 0;
  *(undefined4 *)(in_ecx + 0x13c) = 0;
  *(undefined4 *)(in_ecx + 0x140) = 0;
  *(undefined4 *)(in_ecx + 0x144) = 0;
  *(undefined4 *)(in_ecx + 0x148) = 0;
  *(undefined4 *)(in_ecx + 0x14c) = 0;
  *(undefined4 *)(in_ecx + 0x150) = 0;
  *(undefined4 *)(in_ecx + 0x154) = 0;
  *(undefined4 *)(in_ecx + 0x158) = 0;
  *(undefined4 *)(in_ecx + 0x15c) = 0;
  *(undefined4 *)(in_ecx + 0x160) = 0;
  *(undefined4 *)(in_ecx + 0x164) = 0;
  *(undefined4 *)(in_ecx + 0x168) = 0;
  *(undefined4 *)(in_ecx + 0x16c) = 0;
  *(undefined4 *)(in_ecx + 0x170) = 0;
  *(undefined4 *)(in_ecx + 0x174) = 0;
  *(undefined4 *)(in_ecx + 0x178) = 0;
  *(undefined4 *)(in_ecx + 0x17c) = 0;
  *(undefined4 *)(in_ecx + 0x180) = 0;
  return 0;
}

/* ref: FUN_00b5f400 */
uint F_00b5f400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5f400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_1 >> 0x1c;
  uVar2 = param_1 & 0xfffffff;
  uVar1 = 0;
  if (iVar3 == 1) {
    uVar1 = *(uint *)((int)this + uVar2 * 4 + 4);
  }
  else {
    if (iVar3 == 2) {
      return *(uint *)((int)this + uVar2 * 4 + 0x84);
    }
    if (iVar3 == 3) {
      return *(uint *)((int)this + uVar2 * 4 + 0x104);
    }
  }
  return uVar1;
}

/* ref: FUN_00b5f440 */
uint F_00b5f440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5f440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (int)param_1 >> 0x1c;
  uVar3 = param_1 & 0xfffffff;
  if (iVar1 == 1) {
    *(uint *)((int)this + uVar3 * 4 + 4) = param_2;
    uVar2 = param_2;
  }
  else {
    if (iVar1 == 2) {
      *(uint *)((int)this + uVar3 * 4 + 0x84) = param_2;
      return param_2;
    }
    uVar2 = iVar1 - 3U;
    if (iVar1 - 3U == 0) {
      *(uint *)((int)this + uVar3 * 4 + 0x104) = param_2;
      return param_2;
    }
  }
  return uVar2;
}

/* ref: FUN_00b5f490 */
byte F_00b5f490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5f490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  byte bVar2;
  char * pcVar3;
  uint uVar4;
  
  pcVar3 = (char *)((int)this + 0x184);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00a022c0(*(undefined * PTR32 *)this,(char *)((int)this + 0x184),(int)pcVar3 - ((int)this + 0x185),
                       &REFG(undefined, 0x10f343c),0);
  if (uVar4 == 0) {
    uVar4 = F_00a02470(*(undefined * PTR32 *)this,0,1,0);
    if (uVar4 == 0) {
      F_00a019d0(*(undefined4 *)this);
      bVar2 = F_00a01d80(*(undefined * PTR32 *)this,param_1);
      return bVar2 == 1;
    }
  }
  return 0;
}

/* ref: FUN_00b5f520 */
uint F_00b5f520(void)
{
  GEN_ENTER(0xb5f520u, 0u, 0u, 0u, 0u);
  int * in_ecx;
  uint uVar1;
  
  in_ecx = (int *)F_00406b90(0x284,0,0);
  if (in_ecx != (int *)0x0) {
    *in_ecx = REFG(int, 0x137104c) + 0x2620;
    uVar1 = F_00b5f210(in_ecx);
    REFG(undefined4, 0x14c4ea0) = ((undefined4)(uint)(in_ecx));
    return uVar1;
  }
  REFG(undefined4, 0x14c4ea0) = 0;
  return 0;
}

/* ref: FUN_00b5f560 */
uint F_00b5f560(void)
{
  GEN_ENTER(0xb5f560u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(int, 0x14c4ea0) != 0) {
    uVar1 = F_00406ad0(REFG(int, 0x14c4ea0));
    REFG(int, 0x14c4ea0) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b5f580 */
byte F_00b5f580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5f580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  double dVar2;
  byte * pbVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  byte * pbVar8;
  byte bVar9;
  byte * _DstBuf;
  gen_size32 _SizeInBytes;
  char * _Format;
  int local_c;
  int local_8;
  
  F_00c49908((int)this + 0x184,0x100,"return ");
  _DstBuf = (byte *)((int)this + 0x18b);
  local_c = 0;
  if (param_1[1] < 1) {
    return 1;
  }
  local_8 = 0;
LAB_00b5f5c0: ;
  iVar4 = *param_1 + local_8;
  _SizeInBytes = (int)this + (0x284 - (int)_DstBuf);
  uVar6 = 0;
LAB_00b5f5d6: ;
  if ((&REFG(undefined4, 0x133c9c8))[uVar6 * 2] != *(int *)(iVar4 + (int)param_1)) goto code_r0x00b5f5df;
  if (-1 < (int)uVar6) {
    pbVar8 = (&REFG(undefined * PTR32, 0x133c9cc))[uVar6 * 2];
    bVar5 = (byte)uVar6 & 0x1f;
    pbVar3 = _DstBuf;
    bVar5 = (byte)(0xa7d5f5b3 >> (-bVar5 & 0x1f)) | -0x4d << bVar5;
    do {
      _DstBuf = pbVar3;
      bVar1 = *pbVar8;
      bVar9 = bVar1 ^ bVar5;
      *_DstBuf = bVar9;
      pbVar8 = pbVar8 + 1;
      pbVar3 = _DstBuf + 1;
      bVar5 = bVar1;
    } while (bVar9 != 0);
    goto switchD_00b5f5f8_caseD_3;
  }
  goto code_r0x00b5f5f1;
code_r0x00b5f5df: ;
  uVar6 = uVar6 + 1;
  if (0x2b < uVar6) goto code_r0x00b5f5f1;
  goto LAB_00b5f5d6;
code_r0x00b5f5f1: ;
  switch((unsigned int)(uintptr_t)(*(int *)(iVar4 + (int)param_1))) {
  case 1: ;
    iVar7 = 0;
    if (0 < *(int *)((int)param_1 + iVar4 + 4)) {
      do {
        *_DstBuf = 0x28;
        iVar7 = iVar7 + 1;
        _DstBuf = _DstBuf + 1;
      } while (iVar7 < *(int *)((int)param_1 + iVar4 + 4));
    }
    *_DstBuf = 0;
    break;
  case 2: ;
    iVar7 = 0;
    if (0 < *(int *)((int)param_1 + iVar4 + 4)) {
      do {
        *_DstBuf = 0x29;
        iVar7 = iVar7 + 1;
        _DstBuf = _DstBuf + 1;
      } while (iVar7 < *(int *)((int)param_1 + iVar4 + 4));
    }
    *_DstBuf = 0;
    break;
  case 0x11: ;
    _Format = "%d";
    goto LAB_00b5f6fc;
  case 0x12: ;
    dVar2 = (double)*(float *)((int)param_1 + iVar4 + 8);
    F_00c472af(_DstBuf,_SizeInBytes,&REFG(undefined, 0x10f3434),(int)(ulonglong)gen_d2bits(dVar2),
               (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    break;
  case 0x13: ;
    if ((*(int *)((int)param_1 + iVar4 + 4) == 0x10000013) && (param_2 != (int *)0x0)) {
      ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
    }
    _Format = "%d";
LAB_00b5f6fc: ;
    F_00c472af((char *)_DstBuf,_SizeInBytes,_Format);
  }
switchD_00b5f5f8_caseD_3: ;
  bVar5 = *_DstBuf;
  while (bVar5 != 0) {
    _DstBuf = _DstBuf + 1;
    bVar5 = *_DstBuf;
  }
  local_8 = local_8 + 0xc;
  local_c = local_c + 1;
  if (param_1[1] <= local_c) {
    return 1;
  }
  goto LAB_00b5f5c0;
}

/* ref: FUN_00b5f770 */
byte F_00b5f770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5f770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  F_00b5f580(this,param_1,param_3);
  bVar1 = F_00b5f490(this,param_2);
  return bVar1;
}

/* ref: FUN_00b5f7a0 */
byte F_00b5f7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5f7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  F_00b5f580(this,param_1,param_3);
  bVar1 = F_00b5f490(this,param_2);
  return bVar1;
}

/* ref: FUN_00b5f7d0 */
byte F_00b5f7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5f7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  
  F_00b5f580(this,param_1,param_3);
  pcVar3 = (char *)((int)this + 0x184);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00a022c0(*(undefined * PTR32 *)this,(char *)((int)this + 0x184),(int)pcVar3 - ((int)this + 0x185),
                       &REFG(undefined, 0x10f3444),0);
  if ((uVar4 == 0) && (uVar4 = F_00a02470(*(undefined * PTR32 *)this,0,1,0), uVar4 == 0)) {
    F_00a019d0(*(undefined4 *)this);
    iVar2 = *(int *)this;
    uVar4 = F_00b9a9b0(*(undefined4 *)(iVar2 + 8),0xffffffff);
    if (uVar4 != 0) {
      param_3 = F_00b9ab70(*(undefined4 *)(iVar2 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar2 + 8),0xfffffffe);
    if (uVar4 != 0) {
      if (param_2 != (uint *)0x0) {
        *param_2 = param_3;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b5f880 */
uint F_00b5f880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5f880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5f8a0 */
uint F_00b5f8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5f8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0xc + (int)this;
}

/* ref: FUN_00b5f8c0 */
float10 F_00b5f8c0(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5f8c0u, 0u, gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  
  fVar1 = F_00c51c40((uint)(ulonglong)gen_d2bits((double)param_1),
                       (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20),&(*(double *)(gen_frame + 0x4)));
  *param_2 = (float)(*(double *)(gen_frame + 0x4));
  return (float10)(float)fVar1;
}

/* ref: FUN_00b5f8f0 */
float10 F_00b5f8f0(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5f8f0u, 0u, gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  
  fVar1 = F_00c51c40((uint)(ulonglong)gen_d2bits((double)param_1),
                       (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20),&(*(double *)(gen_frame + 0x4)));
  *param_2 = (float)(*(double *)(gen_frame + 0x4));
  return (float10)(float)fVar1;
}

/* ref: FUN_00b5f920 */
uint F_00b5f920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5f920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00b5f930 */
uint F_00b5f930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5f930u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Base::SchedulerState::vf2 */
byte F_00b5fa40(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fa40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xe);
}

/* ref: Client::System::Scheduler::Base::SchedulerState::vf3 */
byte F_00b5fa50(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fa50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xf);
}

/* ref: Client::System::Scheduler::Base::SchedulerState::vf4 */
byte F_00b5fa60(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fa60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x10);
}

/* ref: Client::System::Scheduler::Base::SchedulerState::vf5 */
byte F_00b5fa70(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fa70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x11);
}

/* ref: Client::System::Scheduler::Base::SchedulerState::vf0 */
uint F_00b5fac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5fac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5fb20 */
byte F_00b5fb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5fb20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x39) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b5fb70 */
byte F_00b5fb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5fb70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x144) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b5fb80 */
unsigned int F_00b5fb80(float gen_a0)
{
  GEN_ENTER(0xb5fb80u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Base::CutSceneController::vf4 */
byte F_00b5fba0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fba0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x10) != '\0';
}

/* ref: FUN_00b5fbb0 */
byte F_00b5fbb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fbb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x24) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    if ((char)uVar1 == '\0') {
      if ((*(char *)((int)this + 0xc) == '\0') &&
         ((*(char *)((int)this + 10) == '\0' || (*(char *)((int)this + 0xe1) != '\0')))) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b5fbf0 */
uint F_00b5fbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5fbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00b5e1a0(REFG(undefined4, 0x14c4e90),param_1,1);
    *(uint *)((int)this + 0x24) = uVar1;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x138) = 0;
    *(undefined4 *)((int)this + 8) = 0x10000;
    *(undefined1 *)((int)this + 0xe1) = 1;
  }
  return uVar1;
}

/* ref: FUN_00b5fc40 */
byte F_00b5fc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5fc40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x24);
  if (param_1 == 0) {
    return this_00 == (undefined *)0x0;
  }
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  F_00bcd470(((undefined1 *)(gen_frame + 0x4)),param_1);
  bVar1 = F_00bcd530(this_00,((undefined1 *)(gen_frame + 0x4)));
  return bVar1;
}

/* ref: FUN_00b5fca0 */
uint F_00b5fca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xb5fca0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00b5fcc0 */
unsigned int F_00b5fcc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fcc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 0xc) == '\0') && (*(char *)(in_ecx + 0x10) == '\0')) {
    *(undefined1 *)(in_ecx + 0xc) = 0;
    *(undefined1 *)(in_ecx + 0xd) = 0;
    *(undefined1 *)(in_ecx + 0xe) = 0;
    *(undefined1 *)(in_ecx + 0xf) = 0;
    *(undefined1 *)(in_ecx + 0x10) = 0;
    *(undefined1 *)(in_ecx + 0x12) = 0;
    *(undefined1 *)(in_ecx + 0x13) = 0;
    *(undefined1 *)(in_ecx + 0x14) = 0;
    *(undefined1 *)(in_ecx + 10) = 1;
    *(undefined1 *)(in_ecx + 0xb) = 0;
    *(undefined1 *)(in_ecx + 0xe1) = 0;
  }
  return 0;
}

/* ref: FUN_00b5fd00 */
uint F_00b5fd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5fd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 0) {
    return CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(int *)((int)this + 0xf4) != 0);
  }
  return (uint)((*(uint *)((int)this + 0xf4) & 1 << ((byte)param_1 & 0x1f)) != 0);
}

/* ref: FUN_00b5fd40 */
byte F_00b5fd40(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb5fd40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  uint uVar1;
  
  uVar1 = F_0052f030(REFG(undefined4, 0x1375b00),in_xmm1,in_xmm2,in_xmm3,in_xmm7,param_6,0,0);
  *((uint *)GEN_TOP((*(int *)(in_ecx + 0x13c) + param_7 * 4))) = uVar1;
  return 1;
}

/* ref: FUN_00b5fd70 */
uint F_00b5fd70(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  for (iVar2 = *(int *)((int)this + 0x140); iVar2 != 0; iVar2 = iVar2 + -1) {
    F_0052f1c0(REFG(undefined4, 0x1375b00),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x13c) + -4 + iVar2 * 4))));
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x13c) != 0) {
    uVar1 = F_00406ad0(*(int *)((int)this + 0x13c));
  }
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  return uVar1;
}

/* ref: FUN_00b5fdc0 */
byte F_00b5fdc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fdc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x140);
  do {
    if (iVar3 == 0) {
      return 1;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x13c) + -4 + iVar3 * 4)));
    iVar3 = iVar3 + -1;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1);
  } while ((char)uVar2 != '\0');
  return 0;
}

/* ref: FUN_00b5fe00 */
unsigned int F_00b5fe00(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fe00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x140);
  while (iVar2 != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x13c) + -4 + iVar2 * 4)));
    iVar2 = iVar2 + -1;
    if ((((piVar1[0x1b] != 2) || (*(char *)((int)piVar1 + 0x96) == '\0')) &&
        (this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1))), this_00 != (undefined *)0x0)) &&
       (*(char *)((int)this_00 + 0x188) != '\x01')) {
      if ((*(byte *)((int)this_00 + 0x8f) & 0x40) != 0) {
        *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) | 0x10;
      }
      F_00aa0090(this_00,0,0);
      F_00b5aeb0(REFG(undefined4, 0x14c4e84),(uint)*(ushort *)((int)this_00 + 0x88),0);
    }
  }
  return 0;
}

/* ref: FUN_00b5fe80 */
byte F_00b5fe80(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fe80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_0052ee60(REFG(undefined4, 0x1375b00),param_1);
  return 1;
}

/* ref: FUN_00b5fea0 */
byte F_00b5fea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5fea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0x2c) = param_2;
  return 1;
}

/* ref: FUN_00b5feb0 */
uint F_00b5feb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5feb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2c);
}

/* ref: FUN_00b5fec0 */
byte F_00b5fec0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fec0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_005f6710(param_1);
  return 1;
}

/* ref: FUN_00b5fee0 */
uint F_00b5fee0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34f0));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  F_00be89e0((undefined *)((int)this + 0x3c));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined1 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined2 *)((int)this + 0x110) = 0;
  *(undefined1 *)((int)this + 0x112) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  F_00c48350((undefined *)((int)this + 0x9c),0,0x40);
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(int *)((int)this + 0xfc) = REFG(int, 0x14c4ea4);
  if (0 < REFG(int, 0x14c4ea4) + 1) {
    REFG(int, 0x14c4ea4) = REFG(int, 0x14c4ea4) + 1;
    return (uint)this;
  }
  REFG(int, 0x14c4ea4) = 0;
  return (uint)this;
}

/* ref: FUN_00b60000 */
uint F_00b60000(unsigned int gen_a0)
{
  GEN_ENTER(0xb60000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * this_00;
  uint uVar2;
  
  this_00 = *(undefined4 * PTR32 *)((int)this + 0x20);
  while (this_00 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)this_00[7];
    F_00beabc0(this_00);
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
    this_00 = puVar1;
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  F_00b5fd70(this);
  uVar2 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar2 = F_00b5c650(*(int *)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::CutSceneController::vf1 */
byte F_00b60050(unsigned int gen_a0)
{
  GEN_ENTER(0xb60050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  uint uVar2;
  int * piVar3;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  piVar3 = *(int * PTR32 *)(this + 0x20);
  bVar1 = true;
  if (piVar3 != (int *)0x0) {
    do {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
      if ((char)uVar2 == '\0') {
        bVar1 = false;
      }
      piVar3 = (int *)piVar3[7];
    } while (piVar3 != (int *)0x0);
    if (bVar1) {
      *(undefined2 *)(this + 8) = 1;
      if (*(int *)(this + 4) != 0) {
        *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
      }
      *(undefined4 *)(this + 0xc) = 0;
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined2 *)(this + 0x14) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b600c0 */
byte F_00b600c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb600c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  byte bVar2;
  
  bVar2 = 1;
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x20); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
    uVar1 = F_00bea630(this_00,param_1);
    if ((char)uVar1 == '\0') {
      bVar2 = 0;
    }
  }
  return bVar2;
}

/* ref: FUN_00b600f0 */
byte F_00b600f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb600f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  byte bVar1;
  byte bVar2;
  
  bVar2 = 1;
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x20); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
    bVar1 = F_00bea660(this_00,param_1,param_2);
    if (bVar1 == 0) {
      bVar2 = 0;
    }
  }
  return bVar2;
}

/* ref: FUN_00b60130 */
uint F_00b60130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb60130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x24);
  if ((this_00 != (undefined *)0x0) && (*(int *)((int)this + 0x28) == 0)) {
    uVar2 = *(uint *)((int)this_00 + 0x5c) >> 1;
    if (((uVar2 & 1) == 0) || ((uVar2 & 1) == 0)) {
      bVar1 = F_00bcd860(this_00);
      if (bVar1 == 0) {
        uVar2 = F_00bcd800(this_00,param_1);
        return uVar2;
      }
    }
    else if (*(char *)((int)this + 10) != '\0') {
      *(undefined1 *)((int)this + 10) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00b60510 */
unsigned int F_00b60510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb60510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0xf4);
  if ((char)param_2 == '\0') {
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0xf4) = 0;
      goto LAB_00b60553;
    }
    uVar2 = ~(1 << ((byte)param_1 & 0x1f)) & uVar1;
  }
  else {
    uVar2 = 1 << ((byte)param_1 & 0x1f) | uVar1;
  }
  *(uint *)((int)this + 0xf4) = uVar2;
LAB_00b60553: ;
  if (((char)param_3 != '\0') || (*(uint *)((int)this + 0xf4) != uVar1)) {
    for (this_00 = *(undefined * PTR32 *)((int)this + 0x20); this_00 != (undefined *)0x0;
        this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
      F_00bea810(this_00,param_1,param_2,param_3);
    }
  }
  return 0;
}

/* ref: FUN_00b60590 */
unsigned int F_00b60590(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb60590u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int in_ecx;
  int * piVar1;
  uint uVar2;
  undefined4 local_c;
  
  *(float *)(param_1 + 0x98) = (float)((float10)param_2 + (float10)param_2);
  *(undefined1 *)(param_1 + 0xe2) = 1;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1);
  if (((uVar2 & 8) == 0) && (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1), (uVar2 & 2) == 0)) {
    local_c = (undefined4)(longlong)TRUNC((float10)*(float *)(param_1 + 0x98));
    ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,local_c,1);
  }
  in_ecx = *(int *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0xe3) = 1;
  for (; in_ecx != 0; in_ecx = *(int *)(in_ecx + 0x1c)) {
    F_00bea830(in_ecx,1);
  }
  return 0;
}

/* ref: FUN_00b60640 */
unsigned int F_00b60640(unsigned int gen_a0)
{
  GEN_ENTER(0xb60640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  float * pfVar2;
  float10 fVar3;
  
  *(undefined4 *)((int)this + 0xdc) = *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x25f8) + 0xe8)));
  iVar1 = 0;
  pfVar2 = (float *)((int)this + 0x9c);
  do {
    fVar3 = F_004e79b0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),iVar1);
    *pfVar2 = (float)fVar3;
    iVar1 = iVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while (iVar1 < 0x10);
  F_004e7800(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),1);
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined1 *)((int)this + 0x104) = 0;
  return 0;
}

/* ref: FUN_00b606b0 */
uint F_00b606b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb606b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  float * pfVar3;
  
  iVar2 = 0;
  pfVar3 = (float *)((int)this + 0x9c);
  do {
    F_004e79c0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),iVar2,*pfVar3,100);
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 1;
  } while (iVar2 < 0x10);
  F_004e7800(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),*(undefined4 *)((int)this + 0xdc));
  if (*(char *)((int)this + 0x104) == '\0') {
    uVar1 = F_00ab6dc0();
    return uVar1;
  }
  uVar1 = F_00ab6d50(*(undefined4 *)((int)this + 0x100),0,0,0,0,1);
  return uVar1;
}

/* ref: FUN_00b60730 */
byte F_00b60730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb60730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  this_00 = (undefined *)*param_2;
  if (this_00 == (undefined *)0x0) {
    param_2[1] = 0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x20);
    if (this_00 == (undefined *)0x0) goto LAB_00b60767;
  }
  do {
    uVar1 = F_00bea8a0(this_00,param_1,param_2 + 1);
    if ((char)uVar1 != '\0') {
      *param_2 = (int)this_00;
      return 1;
    }
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
  } while (this_00 != (undefined *)0x0);
LAB_00b60767: ;
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00b60790 */
byte F_00b60790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb60790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  this_00 = (undefined *)*param_2;
  if (this_00 == (undefined *)0x0) {
    param_2[1] = 0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x20);
    if (this_00 == (undefined *)0x0) goto LAB_00b607c7;
  }
  do {
    uVar1 = F_00bea8c0(this_00,param_1,param_2 + 1);
    if ((char)uVar1 != '\0') {
      *param_2 = (int)this_00;
      return 1;
    }
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
  } while (this_00 != (undefined *)0x0);
LAB_00b607c7: ;
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00b607f0 */
uint F_00b607f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb607f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  uint uVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  do {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
      ((undefined * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 *)(gen_frame + 0x8));
      this_00 = *(undefined * PTR32 *)((int)this + 0x20);
      goto joined_r0x00b60824;
    }
    while (uVar1 = F_00bea8c0(this_00,&(*(uint *)(gen_frame + 0x4)),((undefined * PTR32 *)(gen_frame + 0xc))), (char)uVar1 == '\0') {
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
joined_r0x00b60824: ;
      if (this_00 == (undefined *)0x0) {
        F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
        return 0;
      }
    }
    uVar1 = (*(uint *)(gen_frame + 0x4));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this_00;
    if (*((int *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x4)) + 0x24) + 8))) == param_1) {
      F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
      return uVar1;
    }
  } while( true );
}

/* ref: FUN_00b60890 */
uint F_00b60890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb60890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x20);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if (*(int *)(uVar1 + 0x30) == param_2) break;
    uVar1 = *(uint *)(uVar1 + 0x1c);
  }
  return uVar1;
}

/* ref: FUN_00b608e0 */
unsigned int F_00b608e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb608e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x20); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
    F_00bea9c0(this_00,param_1);
  }
  return 0;
}

/* ref: FUN_00b60910 */
unsigned int F_00b60910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb60910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (*(uint *)((int)this + 0x140) != param_1) {
    F_00b5fd70(this);
    *(uint *)((int)this + 0x140) = param_1;
    uVar1 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)param_1 * 4),0,0);
    *(uint *)((int)this + 0x13c) = uVar1;
  }
  return 0;
}

/* ref: FUN_00b60960 */
unsigned int F_00b60960(unsigned int gen_a0)
{
  GEN_ENTER(0xb60960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)((int)this + 0x140);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  while (iVar3 != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x13c) + -4 + iVar3 * 4)));
    iVar3 = iVar3 + -1;
    (*(int *)(gen_frame + 0x34)) = iVar3;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1)));
    if (this_00 != (undefined *)0x0) {
      if ((*(char *)((int)this_00 + 0x188) != '\x01') &&
         ((*(byte *)((int)this_00 + 0x8f) & 0x40) != 0)) {
        iVar4 = (int)this_00 + 0x16c0;
        (*(int *)(gen_frame + 0x38)) = 3;
        do {
          if ((iVar4 != 0) && (*(char *)(iVar4 + 0x65) == '\x03')) {
            uVar2 = F_00ab2ae0(2);
            F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
            F_00bbac80(((undefined1 *)(gen_frame + 0x1c)));
            F_00bbadd0(((undefined1 *)(gen_frame + 0x8)),iVar4);
            F_00bbadf0(((undefined1 *)(gen_frame + 0x1c)),(uint)*(ushort *)((int)this_00 + 0x88),0);
            F_00b5c120(REFG(undefined4, 0x14c4e84),uVar2,2,((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x1c)),1,0,0,(float)(float10)0);
            iVar3 = (*(int *)(gen_frame + 0x34));
          }
          iVar4 = iVar4 + 0x7a0;
          (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + -1;
          this = (*(undefined * PTR32 *)(gen_frame + 0x30));
        } while ((*(int *)(gen_frame + 0x38)) != 0);
      }
      F_00aa4150(this_00,0x90,0,0);
      F_00aa4150(this_00,0x73,0,0);
    }
  }
  return 0;
}

/* ref: FUN_00b60a70 */
unsigned int F_00b60a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb60a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  F_00b5c8c0(REFG(undefined4, 0x14c4e90),param_1,0);
  if ((*(char *)((int)param_1 + *param_1) != '\0') && (param_1[2] == 3)) {
    *(undefined1 *)((int)this + 0x112) = 1;
    *(int *)((int)this + 0x120) = param_1[4];
    *(int *)((int)this + 0x124) = param_1[5];
    *(int *)((int)this + 0x128) = param_1[6];
  }
  return 0;
}

/* ref: FUN_00b60ac0 */
uint F_00b60ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xb60ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  int * piVar1;
  int * piVar2;
  undefined * this_00;
  
  (*(int * PTR32 *)(gen_frame + 0xf8)) = (int *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x4)) = 0;
  piVar1 = (int *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc));
  do {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)((int)this + 0x20);
      ((undefined4 *)(gen_frame + 0xc))[0] = 0;
      goto joined_r0x00b60afb;
    }
    while (piVar1 = (int *)F_00bea8a0(this_00,&(*(int *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0xc))), (char)piVar1 == '\0') {
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
joined_r0x00b60afb: ;
      if (this_00 == (undefined *)0x0) {
        F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
        return (uint)piVar1;
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this_00;
    piVar2 = (int *)F_00beb650((*(int *)(gen_frame + 0x4)));
    piVar1 = piVar2;
    if ((piVar2 != (int *)0x0) && (piVar2[0x1b] == 2)) {
      if ((piVar2[0x22] == 2) &&
         (piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2))), piVar1 != (int *)0x0)) {
        *(undefined2 *)((int)piVar1 + 0x72) = 0;
      }
      if (piVar2[0x22] == 3) {
        piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2)));
        if (piVar1 != (int *)0x0) {
          *(undefined2 *)((int)piVar1 + 0x72) = 1;
        }
        if (*(char *)((int)piVar2 + 0x95) != '\0') {
          *(undefined1 *)((*(int *)(gen_frame + 0x4)) + 0x39) = 0;
          piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,0)));
        }
      }
    }
  } while( true );
}

/* ref: Client::System::Scheduler::Base::CutSceneController::vf5 */
byte F_00b60bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb60bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (this[0x11] != (undefined1)0x0) {
    return 1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar4 != '\0') {
    piVar1 = *(int * PTR32 *)(this + 0x20);
    while (piVar1 != (int *)0x0) {
      if ((*(char *)((int)piVar1 + 0xd) == '\0') ||
         (uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1), (char)uVar4 != '\0')) {
        iVar2 = piVar1[6];
        iVar3 = piVar1[7];
        if (iVar2 == 0) {
          *(int *)(this + 0x20) = iVar3;
        }
        else {
          *(int *)(iVar2 + 0x1c) = iVar3;
        }
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0x18) = iVar2;
        }
        ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
        piVar1 = *(int * PTR32 *)(this + 0x20);
      }
      else {
        piVar1 = (int *)piVar1[7];
      }
    }
    if (*(int *)(this + 0x20) == 0) {
      this[0x11] = (undefined1)0x1;
      this[0x15] = (undefined1)0x0;
      if (*(int *)(this + 4) == 0) {
        return 1;
      }
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b60c40 */
unsigned int F_00b60c40(unsigned int gen_a0)
{
  GEN_ENTER(0xb60c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  if ((*(uint *)((int)this + 0xf4) >> 3 & 1) != 0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 0x20);
    *(uint *)((int)this + 0xf4) = *(uint *)((int)this + 0xf4) & 0xfffffff7;
    for (; pvVar1 != (undefined *)0x0; pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x1c)) {
      F_00bea810(pvVar1,3,0,1);
    }
  }
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined2 *)((int)this + 0xe) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  F_00b59800(REFG(undefined4, 0x14c4e78));
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x20); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x1c)) {
    F_00bea760(pvVar1);
  }
  F_00b59820(REFG(undefined4, 0x14c4e78));
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x20); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x1c)) {
    F_00bea780(pvVar1);
  }
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined2 *)((int)this + 0xea) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  return 0;
}

/* ref: FUN_00b60cf0 */
unsigned int F_00b60cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xb60cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b60590(this,REFG(float, 0x10947a4));
  return 0;
}

/* ref: FUN_00b60d00 */
unsigned int F_00b60d00(unsigned int gen_a0)
{
  GEN_ENTER(0xb60d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b60590(this,(float)(float10)1);
  return 0;
}

/* ref: FUN_00b60d10 */
unsigned int F_00b60d10(unsigned int gen_a0)
{
  GEN_ENTER(0xb60d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x24) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    if (((char)uVar1 == '\0') &&
       ((*(char *)((int)this + 0xe4) != '\0' || (*(char *)((int)this + 0xe5) != '\0')))) {
      F_00b60590(this,REFG(float, 0x10947a4));
    }
  }
  return 0;
}

/* ref: FUN_00b60d50 */
uint F_00b60d50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb60d50u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  int * piVar2;
  undefined * this;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar2 != (int *)0x0) {
    uVar5 = 1;
    uVar4 = 4;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    F_007602f0(this,uVar4,uVar5);
  }
  uVar3 = F_00b60ac0(param_1);
  for (iVar1 = *(int *)((int)param_1 + 0x20); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4))) == 0) {
      uVar3 = F_00beac80(iVar1,param_2);
    }
  }
  F_004d1650(REFG(undefined4, 0x1370c18));
  F_00984b30(1);
  F_00beb180(*(undefined4 *)((int)param_1 + 0x38));
  *(undefined4 *)((int)param_1 + 10) = 0x1010000;
  return uVar3;
}

/* ref: FUN_00b60de0 */
uint F_00b60de0(void)
{
  GEN_ENTER(0xb60de0u, 0u, 0u, 0u, 0u);
  int iVar1;
  uint uVar2;
  undefined * this;
  
  iVar1 = REFG(int, 0x1371290);
  this = (undefined *)(REFG(int, 0x1371290) + 0x25c);
  if ((*(char *)(REFG(int, 0x1371290) + 0x30f) == -0x80) && (REFG(int, 0x1371290) + 0x274 != 0)) {
    F_004a4530(REFG(int, 0x1371290) + 0x274);
  }
  F_004adca0(this,7,0,0x80);
  if ((*(char *)(iVar1 + 0x318) == -0x80) && (iVar1 + 0x2f0 != 0)) {
    F_004a6420(iVar1 + 0x2f0);
  }
  F_004adca0(this,0x10,0,0x80);
  if ((*(char *)(iVar1 + 0x317) == -0x80) && (iVar1 + 0x2c4 != 0)) {
    F_004a63e0(iVar1 + 0x2c4);
  }
  uVar2 = F_004adca0(this,0xf,0,0x80);
  return uVar2;
}

/* ref: FUN_00b60e70 */
uint F_00b60e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb60e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  this_00 = (undefined *)F_00406b90(0x3c,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00beaa20(this_00,param_1,param_2);
  }
  piVar1 = (int *)(uVar3 + 0x18);
  iVar2 = *(int *)((int)this + 0x20);
  if (*(int *)((int)this + 0x20) == 0) {
    *piVar1 = 0;
    *(undefined4 *)(uVar3 + 0x1c) = 0;
    *(uint *)((int)this + 0x20) = uVar3;
  }
  else {
    do {
      iVar4 = iVar2;
      iVar2 = *(int *)(iVar4 + 0x1c);
    } while (*(int *)(iVar4 + 0x1c) != 0);
    uVar5 = uVar3;
    if (piVar1 == (int *)0x0) {
      uVar5 = 0;
    }
    *(uint *)(iVar4 + 0x1c) = uVar5;
    *piVar1 = iVar4;
    *(undefined4 *)(uVar3 + 0x1c) = 0;
  }
  *(undefined * PTR32 *)(uVar3 + 4) = this;
  if (*(char *)((int)this + 0xe7) != '\0') {
    *(undefined1 *)(uVar3 + 0x3a) = 1;
  }
  return uVar3;
}

/* ref: FUN_00b60f00 */
uint F_00b60f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb60f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[6];
  uVar2 = param_1[7];
  if (iVar1 == 0) {
    *(uint *)((int)this + 0x20) = uVar2;
  }
  else {
    *(uint *)(iVar1 + 0x1c) = uVar2;
  }
  if (uVar2 != 0) {
    *(int *)(uVar2 + 0x18) = iVar1;
  }
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*param_1)(param_1,1);
  }
  return uVar2;
}

/* ref: FUN_00b60f40 */
unsigned int F_00b60f40(unsigned int gen_a0)
{
  GEN_ENTER(0xb60f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  if (*(char *)((int)this + 0xe0) == '\0') {
    F_00be8740((undefined *)((int)this + 0x3c));
    this_00 = (undefined *)F_00406b90(0x150,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00beb2e0(this_00);
    }
    *(uint *)((int)this + 0x38) = uVar2;
    F_00b60640(this);
    *(undefined4 *)((int)this + 0xf8) = 0xffffffff;
    F_00bdaf90();
    *(undefined4 *)((int)this + 0x130) = 0xffffffff;
    *(undefined4 *)((int)this + 0x134) = 0;
    *(undefined2 *)((int)this + 0xe4) = 0;
    *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xfffe;
    F_005f6750(1);
    iVar1 = REFG(int, 0x137104c);
    *(undefined4 *)((int)this + 0x108) = *(undefined4 *)(REFG(int, 0x137104c) + 0x1248);
    *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(iVar1 + 0x124c);
    *(undefined1 *)((int)this + 0x110) = *(undefined1 *)(iVar1 + 0x1230);
    F_00a06560(0);
    iVar1 = REFG(int, 0x14c4e78);
    if (REFG(int, 0x14c4e78) != 0) {
      *(undefined4 *)(REFG(int, 0x14c4e78) + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x1c) = 0;
    }
    F_00621530(REFG(int, 0x137127c) + 0xee30);
    if (REFG(int, 0x13759f4) != 0) {
      F_00690270(REFG(int, 0x13759f4));
    }
    *(undefined1 *)((int)this + 0xe0) = 1;
  }
  return 0;
}

/* ref: FUN_00b61030 */
uint F_00b61030(unsigned int gen_a0)
{
  GEN_ENTER(0xb61030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint in_EAX = 0;
  uint uVar3;
  uint in_ecx;
  int * piVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(char *)((int)this + 0xe0) != '\0') {
    for (pvVar5 = *(undefined * PTR32 *)((int)this + 0x20); pvVar5 != (undefined *)0x0;
        pvVar5 = *(undefined * PTR32 *)((int)pvVar5 + 0x1c)) {
      F_00bea660(pvVar5,3,&REFG(undefined, 0x13056c0));
    }
    F_00be9340((undefined *)((int)this + 0x3c));
    if (*(undefined * PTR32 *)((int)this + 0x38) != (undefined *)0x0) {
      F_00beb300(*(undefined * PTR32 *)((int)this + 0x38));
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x38) + 0x144))) = 0;
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x38);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x38) = 0;
    }
    F_00b606b0(this);
    F_00bdae20();
    F_004d1660(REFG(undefined4, 0x1370c18));
    F_00984b30(0);
    F_00b60de0();
    uVar3 = (uint)*(byte *)((int)this + 0xe2);
    uVar6 = 0;
    in_ecx = F_006b8c00();
    F_006c5170(in_ecx,uVar6,uVar3);
    for (pvVar5 = *(undefined * PTR32 *)((int)this + 0x20); pvVar5 != (undefined *)0x0;
        pvVar5 = *(undefined * PTR32 *)((int)pvVar5 + 0x1c)) {
      F_00bea930(pvVar5);
    }
    F_00b5fd70(this);
    F_00b7c0f0(&REFG(undefined, 0x133e5c0),0);
    iVar2 = REFG(int, 0x137104c);
    *(undefined4 *)(REFG(int, 0x137104c) + 0x1248) = *(undefined4 *)((int)this + 0x108);
    *(undefined4 *)(iVar2 + 0x124c) = *(undefined4 *)((int)this + 0x10c);
    if (*(char *)(iVar2 + 0x1230) != *(char *)((int)this + 0x110)) {
      *(char *)(iVar2 + 0x1230) = *(char *)((int)this + 0x110);
    }
    iVar2 = REFG(int, 0x14c4e78);
    if (REFG(int, 0x14c4e78) != 0) {
      *(undefined4 *)(REFG(int, 0x14c4e78) + 0x18) = 0;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
    F_005f6750(0);
    F_00a06560(1);
    F_00621530(REFG(int, 0x137127c) + 0xee30);
    if (REFG(int, 0x13759f4) != 0) {
      F_00690270(REFG(int, 0x13759f4));
    }
    piVar4 = (int *)F_00424750(REFG(int, 0x137104c));
    in_EAX = 0;
    if (piVar4 != (int *)0x0) {
      uVar7 = 0;
      uVar6 = 4;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
      in_EAX = F_007602f0(pvVar5,uVar6,uVar7);
    }
    *(undefined1 *)((int)this + 0xe0) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00b611a0 */
uint F_00b611a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb611a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa60];
  undefined * this_00;
  byte bVar1;
  undefined3 uVar4;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xa58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa5c);
  uVar4 = (undefined3)((*(uint *)(gen_frame + 0xa58)) >> 8);
  if (*(int *)((int)this + 0x138) == 6) {
    F_00c47745((*(uint *)(gen_frame + 0xa58)) ^ (uint)(uint)(gen_frame + 0xa5c));
    return CONCAT31(uVar4,1);
  }
  if (*(char *)((int)this + 10) == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0xa58)) ^ (uint)(uint)(gen_frame + 0xa5c));
    return CONCAT31(uVar4,1);
  }
  uVar2 = F_00b60130(this,((undefined1 *)(gen_frame + 0x4)));
  uVar3 = *(uint *)((int)this + 0x138);
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    if (uVar2 == 0) goto LAB_00b612ea;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined2 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x14) = 0;
    F_00b5c670(REFG(undefined4, 0x14c4e90),0);
    F_00b60f40(this);
    *(undefined4 *)((int)this + 0x138) = 1;
    F_00b5fd70(this);
    break;
  case 1: ;
    break;
  case 2: ;
    goto switchD_00b61208_caseD_2;
  case 3: ;
    goto switchD_00b61208_caseD_3;
  case 4: ;
    goto switchD_00b61208_caseD_4;
  case 5: ;
    goto switchD_00b61208_caseD_5;
  default: ;
    goto switchD_00b61208_default;
  }
  F_00b5c440(((undefined1 *)(gen_frame + 0x8)));
  bVar1 = F_00bcdf90(uVar2,this);
  uVar3 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    *(undefined4 *)((int)this + 0x138) = 2;
switchD_00b61208_caseD_2: ;
    bVar1 = F_00b5fdc0(this);
    uVar3 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1 == 0) {
switchD_00b61208_default: ;
      F_00c47745((*(uint *)(gen_frame + 0xa58)) ^ (uint)(uint)(gen_frame + 0xa5c));
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    F_00b5fe00(this);
    *(undefined4 *)((int)this + 0x138) = 3;
switchD_00b61208_caseD_3: ;
    F_00b5c440(((undefined1 *)(gen_frame + 0x8)));
    bVar1 = F_00bce270(((undefined1 *)(gen_frame + 0x8)),uVar2,this);
    uVar3 = CONCAT31(extraout_var_01,bVar1);
    if (bVar1 != 0) {
      for (this_00 = *(undefined * PTR32 *)((int)this + 0x20); this_00 != (undefined *)0x0;
          this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
        F_00bea980(this_00);
      }
      *(undefined4 *)((int)this + 0x138) = 4;
switchD_00b61208_caseD_4: ;
      bVar1 = F_00b5c680(REFG(undefined4, 0x14c4e90));
      uVar3 = CONCAT31(extraout_var_02,bVar1);
      if ((bVar1 != 0) && (uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this), (char)uVar3 != '\0')) {
        F_00b60960(this);
        *(undefined4 *)((int)this + 0x138) = 5;
switchD_00b61208_caseD_5: ;
        *(undefined4 *)((int)this + 0x138) = 6;
        uVar3 = F_00b618f0(this);
        goto switchD_00b61208_default;
      }
    }
  }
LAB_00b612ea: ;
  F_00c47745((*(uint *)(gen_frame + 0xa58)) ^ (uint)(uint)(gen_frame + 0xa5c));
  return uVar3 & 0xffffff00;
}

/* ref: FUN_00b61350 */
uint F_00b61350(unsigned int gen_a0)
{
  GEN_ENTER(0xb61350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34f0));
  F_00b61030(this);
  F_00b60000(this);
  uVar1 = F_00be92f0((undefined *)((int)this + 0x3c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  return uVar1;
}

/* ref: FUN_00b61380 */
uint F_00b61380(unsigned int gen_a0)
{
  GEN_ENTER(0xb61380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 10) = 0x1000000;
  *(undefined2 *)((int)this + 0xe) = 0x101;
  *(undefined1 *)((int)this + 0x10) = 1;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  }
  uVar1 = F_00b61030(this);
  return uVar1;
}

/* ref: FUN_00b613e0 */
unsigned int F_00b613e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb613e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  code * pcVar1;
  undefined * this;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int * piVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    if (*(char *)((int)param_1 + 0xe9) != '\0') {
      F_00b600c0(param_1,0x1a);
      *(undefined1 *)((int)param_1 + 0xe9) = 0;
    }
    pcVar1 = *(gen_code32 *)(*param_1 + 0x10);
    *(undefined1 *)((int)param_1 + 0xe6) = 0;
    uVar4 = (*pcVar1)(param_1);
    if ((char)uVar4 != '\0') {
      ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
    }
    iVar2 = REFG(int, 0x13712a4);
    if (*(char *)((int)param_1 + 0x112) != '\0') {
      *(int *)(REFG(int, 0x13712a4) + 0x20) = param_1[0x48];
      *(int *)(iVar2 + 0x24) = param_1[0x49];
      *(int *)(iVar2 + 0x28) = param_1[0x4a];
      *(uint *)(REFG(int, 0x13712a4) + 0x30) = *(uint *)(REFG(int, 0x13712a4) + 0x30) | 2;
    }
    if ((((param_1[9] == 0) || (uVar4 = F_00b611a0(param_1), (char)uVar4 == '\0')) ||
        (uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), (char)uVar4 == '\0')) ||
       (*(char *)((int)param_1 + 0xe1) != '\0')) {
      for (this = (undefined *)param_1[8]; this != (undefined *)0x0; this = *(undefined * PTR32 *)((int)this + 0x1c)) {
        F_00bea7c0(this);
      }
    }
    else {
      if ((*(char *)((int)param_1 + 0xe5) != '\0') &&
         (F_00424750(REFG(undefined4, 0x137104c)), (*(byte *)(param_1 + 0x1c) & 1) == 0)) {
        *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 1;
      }
      if ((*(char *)((int)param_1 + 0xe2) != '\0') && (*(char *)((int)param_1 + 0xe3) != '\0')) {
        piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0xa0))(piVar5);
        if ((uVar4 & 8) == 0) {
          uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0xa0))(piVar5);
          if ((uVar4 & 2) == 0) {
            (*(ushort *)(gen_frame + 0x1e)) = ((undefined2)0x27f);
            (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = ((undefined2)0x27f) | 0xc00;
            (*(longlong *)(gen_frame + 0x8)) = (longlong)TRUNC(((float10)GEN_TOD(gen_bits2f(param_1[0x26]))));
            lVar3 = (*(longlong *)(gen_frame + 0x8));
            (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = (undefined4)(longlong)TRUNC(((float10)GEN_TOD(gen_bits2f(param_1[0x26]))));
            uVar7 = (undefined4)(*(longlong *)(gen_frame + 0x8));
            (*(longlong *)(gen_frame + 0x8)) = lVar3;
            ((code *)*(gen_code32 *)(*piVar5 + 0xa8))(piVar5,0,uVar7,1);
          }
          else {
            if ((char)param_1[4] == '\0') {
              F_00b61030(param_1);
              F_00b60000(param_1);
              F_00b61970(param_1);
            }
            *(undefined1 *)((int)param_1 + 0xe3) = 0;
          }
        }
      }
      if (*(char *)((int)param_1 + 10) != '\0') {
        F_00b60d50(param_1,param_2);
        *(undefined1 *)((int)param_1 + 0x112) = 0;
      }
      F_00b60180(param_1,param_2,0xffffffff);
      uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
      if ((char)uVar4 != '\0') {
        ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
        return 0;
      }
      if ((param_1[0x3e] != -1) &&
         (piVar5 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00),param_1[0x3e],0,0), piVar5 != (int *)0x0)) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x4c))(piVar5);
        if (uVar4 == 0) {
          uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x34))(piVar5);
        }
        else {
          uVar4 = *(uint *)(uVar4 + 0xec);
        }
        if (uVar4 == 0) {
          puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5)));
          (*(undefined4 *)(gen_frame + 0x0)) = *puVar6;
          (*(undefined4 *)(gen_frame + 0x4)) = puVar6[1];
          uVar7 = puVar6[2];
        }
        else {
          (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(uVar4 + 0x30);
          (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(uVar4 + 0x34);
          uVar7 = *(undefined4 *)(uVar4 + 0x38);
        }
        iVar2 = REFG(int, 0x13712a4);
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = uVar7;
        (*(longlong *)(gen_frame + 0x8)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)),uVar7);
        *(undefined4 *)(REFG(int, 0x13712a4) + 0x20) = (*(undefined4 *)(gen_frame + 0x0));
        *(undefined4 *)(iVar2 + 0x24) = (*(undefined4 *)(gen_frame + 0x4));
        *(undefined4 *)(iVar2 + 0x28) = uVar7;
        *(uint *)(REFG(int, 0x13712a4) + 0x30) = *(uint *)(REFG(int, 0x13712a4) + 0x30) | 2;
        if (REFG(int, 0x13759f4) != 0) {
          F_0068bc00(REFG(int, 0x13759f4),&(*(undefined4 *)(gen_frame + 0x0)));
          return 0;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00b616a0 */
byte F_00b616a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb616a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0x2dd3)) & 0x10;
  *(byte *)(in_ecx + 0x2dd3) = *(byte *)(in_ecx + 0x2dd3) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00b616d0 */
byte F_00b616d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb616d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xe4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b61710 */
uint F_00b61710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xf8) = param_2;
  return param_2;
}

/* ref: FUN_00b61790 */
uint F_00b61790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x138) = param_2;
  return param_2;
}

/* ref: FUN_00b617c0 */
uint F_00b617c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb617c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b617e0 */
uint F_00b617e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb617e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b617f0 */
uint F_00b617f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb617f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return in_ecx + (param_2 >> 4) * 2;
}

/* ref: FUN_00b61800 */
uint F_00b61800(unsigned int gen_a0)
{
  GEN_ENTER(0xb61800u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 1 << ((byte)param_1 & 0xf);
}

/* ref: FUN_00b61820 */
uint F_00b61820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61820u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return in_ecx + (param_2 >> 4) * 2;
}

/* ref: FUN_00b61830 */
unsigned int F_00b61830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  *(uint *)(in_ecx + 0x30) = *(uint *)(in_ecx + 0x30) | 2;
  return 0;
}

/* ref: FUN_00b61860 */
float10 F_00b61860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61860u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float10 fVar1;
  
  fVar1 = F_004e79b0(in_ecx,param_2);
  return fVar1;
}

/* ref: FUN_00b61870 */
uint F_00b61870(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb61870u, gen_a0, gen_a1, 0u, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_004e79c0(param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b61890 */
uint F_00b61890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb61890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004adca0(this,0xf,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b618b0 */
uint F_00b618b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb618b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(char *)(in_ecx + 0xbb) == (char)param_2) {
    return in_ecx + 0x68;
  }
  return 0;
}

/* ref: FUN_00b618f0 */
unsigned int F_00b618f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb618f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 8) = 1;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 9))) = 1;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_00b61910 */
uint F_00b61910(unsigned int gen_a0)
{
  GEN_ENTER(0xb61910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  
  *(undefined4 *)((int)this + 10) = 0x1000000;
  *(undefined2 *)((int)this + 0xe) = 0x101;
  *(undefined1 *)((int)this + 0x10) = 1;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: FUN_00b61970 */
uint F_00b61970(unsigned int gen_a0)
{
  GEN_ENTER(0xb61970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  
  *(undefined2 *)((int)this + 8) = 1;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 9))) = 1;
  }
  *(undefined2 *)((int)this + 10) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0xd) = 1;
  *(undefined1 *)((int)this + 0xe) = 1;
  *(undefined1 *)((int)this + 0xf) = 1;
  *(undefined1 *)((int)this + 0x10) = 1;
  *(undefined1 *)((int)this + 0x11) = 1;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x15) = 1;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: FUN_00b619d0 */
uint F_00b619d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb619d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = (int)this + -0x18;
    return 0;
  }
  do {
    iVar2 = iVar1;
    iVar1 = *(int *)(iVar2 + 0x1c);
  } while (*(int *)(iVar2 + 0x1c) != 0);
  if (this != (undefined *)0x0) {
    *(uint *)(iVar2 + 0x1c) = (int)this - 0x18U;
    *(int *)this = iVar2;
    *(undefined4 *)((int)this + 4) = 0;
    return (int)this - 0x18U;
  }
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar2;
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return 0;
}

/* ref: FUN_00b61a20 */
unsigned int F_00b61a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x1c) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x18) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b61a50 */
byte F_00b61a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2))) & 1 << ((byte)param_1 & 0xf)) != 0;
}

/* ref: FUN_00b61a80 */
unsigned int F_00b61a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort * puVar1;
  
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0xf);
  return 0;
}

/* ref: FUN_00b61ab0 */
unsigned int F_00b61ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort * puVar1;
  
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0xf));
  return 0;
}

/* ref: FUN_00b61af0 */
unsigned int F_00b61af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb61af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort * puVar1;
  ushort uVar2;
  
  uVar2 = 1 << ((byte)param_1 & 0xf);
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  if ((char)param_2 != '\0') {
    *puVar1 = *puVar1 | uVar2;
    return 0;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return 0;
}

/* ref: FUN_00b61b30 */
unsigned int F_00b61b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61b30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) | 1;
    return 0;
  }
  *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) & 0xfffe;
  return 0;
}

/* ref: Client::System::Scheduler::Base::CutSceneController::vf0 */
uint F_00b61b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34f0));
  F_00b61030(this);
  F_00b60000(this);
  F_00be92f0(this + 0x3c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b61b90 */
byte F_00b61b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xa0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b61ba0 */
uint F_00b61ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61ba0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x9c) = param_2;
  return param_2;
}

/* ref: FUN_00b61bb0 */
unsigned int F_00b61bb0(float gen_a0)
{
  GEN_ENTER(0xb61bb0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b61bd0 */
uint F_00b61bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  F_00b63100(this);
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 0x62) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[42])REFP(0x10f3594));
  *(undefined1 *)((int)this + 0x68) = 1;
  *(undefined4 *)((int)this + 0x70) = *param_1;
  *(undefined4 *)((int)this + 0x74) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00b61c10 */
unsigned int F_00b61c10(unsigned int gen_a0)
{
  GEN_ENTER(0xb61c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[42])REFP(0x10f3594));
  if (*(char *)((int)this + 0x62) == '\0') {
    F_0052f2b0(REFG(undefined4, 0x1375b00),this);
  }
  F_00b63250(this);
  return 0;
}

/* ref: FUN_00b61c40 */
byte F_00b61c40(unsigned int gen_a0)
{
  GEN_ENTER(0xb61c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this);
  if ((char)uVar1 == '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
    if ((char)uVar1 == '\0') {
      return 0;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this);
    if (((char)uVar1 == '\0') &&
       (uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this), (char)uVar1 == '\0')) {
      return 0;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,0);
  }
  return 1;
}

/* ref: FUN_00b61c90 */
byte F_00b61c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61c90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 1) {
    return *(int *)(in_ecx + 0x6c) < 7;
  }
  if (param_2 != 2) {
    return 1;
  }
  return 6 < *(int *)(in_ecx + 0x6c);
}

/* ref: FUN_00b61cc0 */
uint F_00b61cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb61cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * this;
  int * piVar1;
  
  this = (undefined *)F_00406b90(0xa0,0,0);
  if (this != (undefined *)0x0) {
    piVar1 = (int *)F_00b7cd90(this,param_1);
    ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,7);
    return (uint)piVar1;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x60))(0,7);
  return 0;
}

/* ref: FUN_00b61d10 */
uint F_00b61d10(unsigned int gen_a0)
{
  GEN_ENTER(0xb61d10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * this;
  int * piVar1;
  
  this = (undefined *)F_00406b90(0x90,0,0);
  if (this != (undefined *)0x0) {
    piVar1 = (int *)F_00becaf0(this,param_1);
    ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,9);
    return (uint)piVar1;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x60))(0,9);
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf24 */
uint F_00b61d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x6c) = param_2;
  return param_2;
}

/* ref: FUN_00b61d70 */
uint F_00b61d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x70) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x74) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf22 */
byte F_00b61d90(unsigned int gen_a0)
{
  GEN_ENTER(0xb61d90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x68);
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf32 */
unsigned int F_00b61da0(void)
{
  GEN_ENTER(0xb61da0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf9 */
uint F_00b61db0(unsigned int gen_a0)
{
  GEN_ENTER(0xb61db0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf34 */
uint F_00b61dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xb61dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf35 */
unsigned int F_00b61dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb61dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*(gen_code32 *)(*(int *)this + 0x78))(this);
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf36 */
unsigned int F_00b61de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00b61df0 */
uint F_00b61df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb61df0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = param_1;
  if (param_2 != (int *)0x0) {
    uVar1 = CONCAT22((short)(param_1 >> 0x10),(ushort)param_3);
    if ((ushort)param_3 != 0) {
      uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x50))(param_2,(uint)(ushort)param_3);
      if ((char)uVar1 != '\0') {
        ((code *)*(gen_code32 *)(*param_2 + 0x40))(param_2,((undefined1 *)(gen_frame + 0x0)),(uint)(ushort)param_3);
        uVar1 = F_00a1c4f0(param_1,((undefined1 *)(gen_frame + 0x0)));
        uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
        goto LAB_00b61e60;
      }
    }
  }
  uVar1 = uVar1 & 0xffffff00;
LAB_00b61e60: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf40 */
uint F_00b61e80(unsigned int gen_a0)
{
  GEN_ENTER(0xb61e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * pvVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
  pvVar1 = this_00;
  if ((this_00 != (undefined *)0x0) && ((*(byte *)((int)this_00 + 0x2dd3) & 2) != 0)) {
    pvVar1 = (undefined *)F_00aaa5b0(this_00,1);
    *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) & 0xfd;
  }
  return (uint)pvVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf20 */
uint F_00b61eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb61eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this);
  if ((((char)uVar1 == '\0') &&
      (uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this), (char)uVar1 == '\0')) &&
     (uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this), (char)uVar1 != '\0')) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this);
    if (((char)uVar1 == '\0') &&
       (uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this), (char)uVar1 == '\0')) {
      return uVar1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,0);
  }
  return uVar1;
}

/* ref: FUN_00b61f00 */
uint F_00b61f00(unsigned int gen_a0)
{
  GEN_ENTER(0xb61f00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char cVar1;
  undefined * pvVar2;
  int * piVar3;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x0f') {
    pvVar2 = (undefined *)F_00406b90(0xa0,0,0);
    if (pvVar2 != (undefined *)0x0) {
      piVar3 = (int *)F_00becbe0(pvVar2,param_1);
      ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,2);
      return (uint)piVar3;
    }
    ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x60))(0,2);
  }
  else {
    if (cVar1 == '0') {
      pvVar2 = (undefined *)F_00406b90(0x90,0,0);
      if (pvVar2 != (undefined *)0x0) {
        piVar3 = (int *)F_00bedf60(pvVar2,param_1);
        ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,4);
        return (uint)piVar3;
      }
      ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x60))(0,4);
      return 0;
    }
    if (cVar1 == 'J') {
      pvVar2 = (undefined *)F_00406b90(0x80,0,0);
      if (pvVar2 != (undefined *)0x0) {
        piVar3 = (int *)F_00bee210(pvVar2,param_1);
        ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,5);
        return (uint)piVar3;
      }
      ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x60))(0,5);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00b61ff0 */
uint F_00b61ff0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb61ff0u, 0u, 0u, 0u, 0u);
  unsigned int gen_args[7];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  int * this;
  
  iVar1 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 4)));
  (*(byte *)(gen_frame + 0x5f)) = *(*(byte * PTR32 *)&gen_args[4]);
  (*(int *)(gen_frame + 0x4c)) = iVar1;
  F_00a1e7d0((*(float *)&gen_args[0]),(*(float *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]),((undefined1 *)(gen_frame + 0x0)),(*(byte * PTR32 *)&gen_args[4]) + 0xc);
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = (ushort)(*(byte *)(gen_frame + 0x5f)) << 8 | 0xfe;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = 0;
  (*(uint *)(gen_frame + 0x38)) = (uint)(ushort)(*(uint *)(gen_frame + 0x38));
  (*(int *)(gen_frame + 0x3c)) = iVar1;
  this = (int *)0x0;
  switch((unsigned int)(uintptr_t)((*(byte *)(gen_frame + 0x5f)))) {
  case 1: ;
    pvVar4 = (undefined *)F_00406b90(0x90,0,0);
    if (pvVar4 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00bee7c0(pvVar4,&(*(uint *)(gen_frame + 0x38)));
    }
    (*(int * PTR32 *)(gen_frame + 0x58)) = this;
    ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
    if ((*(undefined * PTR32 *)&gen_args[5]) == (undefined *)0x0) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x58)) + 0xa8))((*(int * PTR32 *)(gen_frame + 0x58)),(*(byte * PTR32 *)&gen_args[4]) + *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x30))));
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = *this;
      uVar3 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
      ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x4c)) + 0xb0))(this,uVar3);
    }
    break;
  default: ;
    goto switchD_00b6205f_caseD_2;
  case 3: ;
    pvVar4 = (undefined *)F_00406b90(0x90,0,0);
    if (pvVar4 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00bee4c0(pvVar4,&(*(uint *)(gen_frame + 0x38)));
    }
    ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
    if ((*(undefined * PTR32 *)&gen_args[5]) == (undefined *)0x0) {
      ((code *)*(gen_code32 *)(*this + 0xa8))(this,*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x30))));
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = *this;
      uVar3 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
      ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x4c)) + 0xb0))(this,uVar3);
    }
    break;
  case 4: ;
    pvVar4 = (undefined *)F_00406b90(0x90,0,0);
    if (pvVar4 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00bee640(pvVar4,&(*(uint *)(gen_frame + 0x38)));
    }
    ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
    if ((*(undefined * PTR32 *)&gen_args[5]) == (undefined *)0x0) {
      ((code *)*(gen_code32 *)(*this + 0xa8))(this,(*(byte * PTR32 *)&gen_args[4]) + *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x30))));
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = *this;
      uVar3 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
      ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x4c)) + 0xb0))(this,uVar3);
    }
    break;
  case 6: ;
    pvVar4 = (undefined *)F_00406b90(0x90,0,0);
    if (pvVar4 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00bee2d0(pvVar4,&(*(uint *)(gen_frame + 0x38)));
    }
    (*(int * PTR32 *)(gen_frame + 0x54)) = this;
    ((code *)*(gen_code32 *)(*this + 0x60))(this,6);
    F_00bee400(this,(*(byte * PTR32 *)&gen_args[4]) + *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x30))),((undefined1 *)(gen_frame + 0x0)));
    break;
  case 8: ;
  case 9: ;
    if ((char)(*(undefined4 *)&gen_args[6]) == '\0') {
      pvVar4 = (undefined *)F_00406b90(0xb0,0,0);
      if (pvVar4 == (undefined *)0x0) {
        this = (int *)0x0;
      }
      else {
        this = (int *)F_00bef000(pvVar4,&(*(uint *)(gen_frame + 0x38)));
      }
      this[0x27] = (uint)(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[6]) + 1));
      ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
      if (((*(undefined * PTR32 *)&gen_args[5]) == (undefined *)0x0) || (uVar3 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5])), uVar3 == 0)) {
        ((code *)*(gen_code32 *)(*this + 0xa8))(this,*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x30))));
      }
      else {
        (*(int *)(gen_frame + 0x4c)) = *this;
        uVar3 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
        ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x4c)) + 0xb0))(this,uVar3);
      }
    }
    else {
      pvVar4 = (undefined *)F_00406b90(0xc0,0,0);
      if (pvVar4 == (undefined *)0x0) {
        this = (int *)0x0;
      }
      else {
        this = (int *)F_00bee9b0(pvVar4,&(*(uint *)(gen_frame + 0x38)));
      }
      this[0x27] = (uint)(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[6]) + 1));
      (*(int * PTR32 *)(gen_frame + 0x54)) = this;
      ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
      ((code *)*(gen_code32 *)(*this + 0xa8))(this,*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x30))));
    }
    break;
  case 0xf: ;
    if ((*(undefined * PTR32 *)&gen_args[5]) == (undefined *)0x0) {
      pvVar4 = (undefined *)F_00406b90(0xa0,0,0);
      if (pvVar4 == (undefined *)0x0) {
        this = (int *)0x0;
      }
      else {
        this = (int *)F_00becbe0(pvVar4,&(*(uint *)(gen_frame + 0x38)));
      }
      (*(int * PTR32 *)(gen_frame + 0x54)) = this;
      ((code *)*(gen_code32 *)(*this + 0x60))(this,2);
      F_00bedd30(this,(*(float *)&gen_args[0]),(*(float *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]),(*(byte * PTR32 *)&gen_args[4]));
    }
    else {
      bVar2 = F_00a1b580((*(undefined * PTR32 *)&gen_args[5]));
      if (bVar2 != 0) goto LAB_00b62572;
      pvVar4 = (undefined *)F_00406b90(0xa0,0,0);
      if (pvVar4 == (undefined *)0x0) {
        this = (int *)0x0;
      }
      else {
        this = (int *)F_00becbe0(pvVar4,&(*(uint *)(gen_frame + 0x38)));
      }
      ((code *)*(gen_code32 *)(*this + 0x60))(this,2);
      F_00bed5e0(this,(*(float *)&gen_args[0]),(*(float *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]),(*(byte * PTR32 *)&gen_args[4]));
      (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
      if ((*(int * PTR32 *)(gen_frame + 0x54)) != (int *)0x0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x54)) + 4))((*(int * PTR32 *)(gen_frame + 0x54)));
        ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x54)))((*(int * PTR32 *)(gen_frame + 0x54)),1);
      }
    }
    break;
  case 0x25: ;
  case 0x49: ;
    pvVar4 = (undefined *)F_00406b90(0xb0,0,0);
    if (pvVar4 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00bef000(pvVar4,&(*(uint *)(gen_frame + 0x38)));
    }
    this[0x27] = (uint)(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[6]) + 1));
    (*(int * PTR32 *)(gen_frame + 0x58)) = this;
    ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
    if ((*(byte *)(gen_frame + 0x5f)) == 0x49) {
      *(char *)(this + 0x28) = (char)(*(undefined4 *)&gen_args[6]);
    }
    ((code *)*(gen_code32 *)(*this + 0xa8))(this,*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x30))));
    break;
  case 0x26: ;
  case 0x2e: ;
    (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x54)) + 0)) = (*(byte *)(gen_frame + 0x5f));
    (*(int * PTR32 *)(gen_frame + 0x54)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x54)), 1, 3),(*(byte *)(gen_frame + 0x5f)))));
    (*(int * PTR32 *)(gen_frame + 0x58)) = (int *)0x0;
    if (*((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x34))) == (int *)0x0) {
      if (*((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x38))) != (int *)0x0) {
        (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x54)) + 0)) = 9;
        (*(int * PTR32 *)(gen_frame + 0x54)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x54)), 1, 3),9)));
        (*(int * PTR32 *)(gen_frame + 0x58)) = *((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x38)));
      }
    }
    else {
      (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x54)) + 0)) = 8;
      (*(int * PTR32 *)(gen_frame + 0x54)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x54)), 1, 3),8)));
      (*(int * PTR32 *)(gen_frame + 0x58)) = *((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x34)));
    }
    pvVar4 = (undefined *)F_00406b90(0xb0,0,0);
    if (pvVar4 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00bef000(pvVar4,&(*(uint *)(gen_frame + 0x38)));
    }
    ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
    if ((*(undefined * PTR32 *)&gen_args[5]) != (undefined *)0x0) {
      if ((*(int * PTR32 *)(gen_frame + 0x58)) == (int *)0x0) {
        (*(int *)(gen_frame + 0x4c)) = *this;
        uVar3 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
        ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x4c)) + 0xb0))(this,uVar3);
      }
      else {
        F_00603a80(&(*(int *)(gen_frame + 0x48)),(*(int * PTR32 *)(gen_frame + 0x54)),0,(*(int *)(gen_frame + 0x4c)),0xffffffff);
        this[0x1c] = (*(int *)(gen_frame + 0x48));
        this[0x1d] = (*(int *)(gen_frame + 0x4c));
        uVar3 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
        F_00bef8a0(this,(*(int * PTR32 *)(gen_frame + 0x58)),uVar3);
        this[0x1c] = (*(uint *)(gen_frame + 0x38));
        this[0x1d] = (*(int *)(gen_frame + 0x3c));
        ((code *)*(gen_code32 *)(*this + 0x54))(this,0);
      }
    }
    break;
  case 0x27: ;
    pvVar4 = (undefined *)F_00406b90(0x90,0,0);
    if (pvVar4 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00beee50(pvVar4,&(*(uint *)(gen_frame + 0x38)));
    }
    ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
    if ((*(undefined * PTR32 *)&gen_args[5]) == (undefined *)0x0) {
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x48)) + 0)) = 1;
      (*(int *)(gen_frame + 0x48)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x48)), 1, 3),1);
      F_00a1bce0(((undefined1 *)(gen_frame + 0x40)),(*(byte * PTR32 *)&gen_args[4]));
      ((code *)*(gen_code32 *)(*this + 0xa8))(this,((undefined1 *)(gen_frame + 0x40)));
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = *this;
      uVar3 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
      ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x4c)) + 0xb0))(this,uVar3);
    }
    break;
  case 0x4a: ;
    if ((*(undefined * PTR32 *)&gen_args[5]) == (undefined *)0x0) {
      pvVar4 = (undefined *)F_00406b90(0x80,0,0);
      if (pvVar4 == (undefined *)0x0) {
        this = (int *)0x0;
        ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x60))(0,5);
      }
      else {
        this = (int *)F_00bee210(pvVar4,&(*(uint *)(gen_frame + 0x38)));
        ((code *)*(gen_code32 *)(*this + 0x60))(this,5);
      }
    }
    else {
      bVar2 = F_00a1b580((*(undefined * PTR32 *)&gen_args[5]));
      if (bVar2 == 0) {
        return 0;
      }
LAB_00b62572: ;
      this = (int *)F_00a1b590((*(undefined * PTR32 *)&gen_args[5]));
      this[0x1c] = (*(uint *)(gen_frame + 0x38));
      this[0x1d] = (*(int *)(gen_frame + 0x3c));
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*this + 0x68))(this);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*this + 0x6c))(this,(*(byte * PTR32 *)&gen_args[4]));
    return (uint)this;
  }
  ((code *)*(gen_code32 *)(*this + 0x70))(this,(*(byte * PTR32 *)&gen_args[4]));
switchD_00b6205f_caseD_2: ;
  return (uint)this;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf27 */
uint F_00b62660(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb62660u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  
  F_00a1e7d0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,((undefined1 *)(gen_frame + 0x0)),param_6 + 0xc);
  ((code *)*(gen_code32 *)(*in_ecx + 0x20))(in_ecx,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*in_ecx + 0x34))(in_ecx);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a1fa60(in_xmm1,in_xmm2,in_xmm3,in_xmm7,in_ecx + 0x1c,uVar1,param_6);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf30 */
uint F_00b626d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb626d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x18)) = param_1[2];
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00a1c7d0(&(*(undefined4 *)(gen_frame + 0x10)),0,0,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,&(*(undefined4 *)(gen_frame + 0x10)));
  return uVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf3 */
uint F_00b62760(unsigned int gen_a0)
{
  GEN_ENTER(0xb62760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf31 */
uint F_00b62770(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb62770u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  float10 fVar2;
  
  (*(float *)(gen_frame + 0x1c)) = (float)((float10)param_6 * (float10)REFG(double, 0x1088108));
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,
                       (float10)(float)((float10)param_6 * (float10)REFG(double, 0x1088108)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar2;
  fVar2 = (float10)(*(float *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar2 * (float10)REFG(float, 0x1302c80));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)REFG(float, 0x1302c84) * fVar2);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar2 * (float10)REFG(float, 0x1302c88));
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(*(float *)(gen_frame + 0x1c)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar2;
  (*(float *)(gen_frame + 0xc)) = (float)fVar2;
  uVar1 = ((code *)*(gen_code32 *)(*in_ecx + 0x10))(in_ecx,&(*(float *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf5 */
uint F_00b62800(unsigned int gen_a0)
{
  GEN_ENTER(0xb62800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf7 */
uint F_00b62810(unsigned int gen_a0)
{
  GEN_ENTER(0xb62810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf37 */
uint F_00b62820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  float * pfVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
  if (uVar1 != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
    if (*(char *)(uVar1 + 0x65) == '\x03') {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x34))(this)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2,param_1);
      return (uint)param_1;
    }
  }
  ((float *)(gen_frame + 0x0))[0] = *(float *)(this + 0x40);
  ((float *)(gen_frame + 0x0))[2] = *(float *)(this + 0x48);
  pfVar3 = ((float *)(gen_frame + 0x0)) + 1;
  ((float *)(gen_frame + 0x0))[1] = *(float *)(this + 0x44);
  if (!((float10)*(float *)(this + 0x40) < (float10)*(float *)(this + 0x44))) {
    pfVar3 = ((float *)(gen_frame + 0x0));
  }
  if ((float10)*pfVar3 < (float10)*(float *)(this + 0x48)) {
    pfVar3 = ((float *)(gen_frame + 0x0)) + 2;
  }
  *param_1 = *(undefined4 *)(this + 0x20);
  param_1[1] = *(undefined4 *)(this + 0x24);
  param_1[2] = *(undefined4 *)(this + 0x28);
  param_1[3] = (undefined4)gen_fl2bits(*pfVar3);
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf38 */
uint F_00b628e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb628e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  int * piVar2;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
  if (uVar1 != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
    if (*(char *)(uVar1 + 0x65) == '\x03') {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x34))(this)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2,param_1);
      goto LAB_00b62994;
    }
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x9c))(this,((undefined1 *)(gen_frame + 0x20)));
  F_00a1cb90(&(*(undefined4 *)(gen_frame + 0x0)),uVar1);
  *param_1 = (*(undefined4 *)(gen_frame + 0x0));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
  param_1[4] = (*(undefined4 *)(gen_frame + 0x10));
  param_1[5] = (*(undefined4 *)(gen_frame + 0x14));
  param_1[6] = (*(undefined4 *)(gen_frame + 0x18));
LAB_00b62994: ;
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf41 */
uint F_00b629b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb629b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  undefined * pvVar3;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
  pvVar3 = this_00;
  if ((this_00 != (undefined *)0x0) && ((*(byte *)((int)this_00 + 0x2dd3) & 2) == 0)) {
    if ((char)param_1 == '\0') {
      uVar1 = F_00aa0210(this_00,0,0);
      puVar2 = (uint *)F_00ab2a20(uVar1);
      if (puVar2 != (uint *)0x0) {
        uVar1 = *puVar2;
        (*(uint *)(gen_frame + 0x8)) = F_00aa0210(this_00,0,0);
        (*(int *)(gen_frame + 0x4)) = (uVar1 & 0xffffff) + (int)puVar2;
        F_00b5ad70(REFG(undefined4, 0x14c4e84),(uint)*(ushort *)((int)this_00 + 0x88),&(*(int *)(gen_frame + 0x4)),0);
      }
      F_00aa0100(this_00,0,0);
      pvVar3 = (undefined *)F_00aa6f20(this_00,0,0);
    }
    if ((*(byte *)((int)this_00 + 0x8f) & 0x40) != 0) {
      pvVar3 = (undefined *)F_00aaa5b0(this_00,0);
    }
    *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) | 2;
  }
  return (uint)pvVar3;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf2 */
uint F_00b62a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  code * pcVar1;
  int * piVar2;
  undefined * this_00;
  
  *(int *)(this + 0x20) = *param_1;
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x34);
  *(int *)(this + 0x24) = param_1[1];
  *(int *)(this + 0x28) = param_1[2];
  piVar2 = ((int *)GEN_TOP((*pcVar1)(this)));
  if (piVar2 != (int *)0x0) {
    piVar2[0xc] = *param_1;
    piVar2[0xd] = param_1[1];
    piVar2[0xe] = param_1[2];
    piVar2[9] = piVar2[9] | 2;
    if (*(char *)((int)piVar2 + 0x65) == '\x03') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,0);
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
      piVar2 = (int *)0x0;
      if (this_00 != (undefined *)0x0) {
        piVar2 = (int *)F_00a9fae0(this_00);
      }
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf4 */
uint F_00b62ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  *(int *)(this + 0x30) = *param_1;
  *(int *)(this + 0x34) = param_1[1];
  *(int *)(this + 0x38) = param_1[2];
  *(int *)(this + 0x3c) = param_1[3];
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x34))(this)));
  if (piVar2 != (int *)0x0) {
    piVar2[0x10] = *param_1;
    piVar2[0x11] = param_1[1];
    piVar2[0x12] = param_1[2];
    iVar1 = param_1[3];
    piVar2[9] = piVar2[9] | 2;
    piVar2[0x13] = iVar1;
    if (*(char *)((int)piVar2 + 0x65) == '\x03') {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,0)));
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf6 */
uint F_00b62b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  code * pcVar1;
  int * piVar2;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x34);
  *(int *)(this + 0x40) = *param_1;
  *(int *)(this + 0x44) = param_1[1];
  *(int *)(this + 0x48) = param_1[2];
  piVar2 = ((int *)GEN_TOP((*pcVar1)(this)));
  if (piVar2 != (int *)0x0) {
    piVar2[0x14] = *param_1;
    piVar2[0x15] = param_1[1];
    piVar2[0x16] = param_1[2];
    piVar2[9] = piVar2[9] | 2;
    if (*(char *)((int)piVar2 + 0x65) == '\x03') {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,0)));
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf8 */
uint F_00b62b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  code * pcVar1;
  int * piVar2;
  undefined * this_00;
  
  *(int *)(this + 0x20) = *param_1;
  *(int *)(this + 0x24) = param_1[1];
  *(int *)(this + 0x28) = param_1[2];
  *(int *)(this + 0x30) = param_1[4];
  *(int *)(this + 0x34) = param_1[5];
  *(int *)(this + 0x38) = param_1[6];
  *(int *)(this + 0x3c) = param_1[7];
  *(int *)(this + 0x40) = param_1[8];
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x34);
  *(int *)(this + 0x44) = param_1[9];
  *(int *)(this + 0x48) = param_1[10];
  piVar2 = ((int *)GEN_TOP((*pcVar1)(this)));
  if (piVar2 != (int *)0x0) {
    piVar2[0xc] = *param_1;
    piVar2[0xd] = param_1[1];
    piVar2[0xe] = param_1[2];
    piVar2[0x10] = param_1[4];
    piVar2[0x11] = param_1[5];
    piVar2[0x12] = param_1[6];
    piVar2[0x13] = param_1[7];
    piVar2[0x14] = param_1[8];
    piVar2[0x15] = param_1[9];
    piVar2[0x16] = param_1[10];
    piVar2[9] = piVar2[9] | 2;
    if (*(char *)((int)piVar2 + 0x65) == '\x03') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,0);
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
      piVar2 = (int *)0x0;
      if (this_00 != (undefined *)0x0) {
        piVar2 = (int *)F_00a9fae0(this_00);
      }
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf21 */
unsigned int F_00b62c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62c40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  (*(undefined * PTR32 *)&gen_args[0])[0x68] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
  uVar2 = (*pcVar1)((*(undefined * PTR32 *)&gen_args[0]));
  if (uVar2 != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))))((*(undefined * PTR32 *)&gen_args[0]));
    *(byte *)(uVar2 + 100) =
         (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) != (undefined1)0x0 | *(byte *)(uVar2 + 100) & 0xfe;
  }
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf39 */
uint F_00b62c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float10 fVar1;
  uint uVar2;
  int * piVar3;
  float * pfVar4;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
  if (uVar2 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
    if (*(char *)(uVar2 + 0x65) == '\x03') {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x34))(this)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x34))(piVar3,param_1);
      goto LAB_00b62dc1;
    }
  }
  fVar1 = (float10)0;
  (*(float *)(gen_frame + 0x40)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x40);
  (*(float *)(gen_frame + 0x44)) = (float)fVar1;
  (*(float *)(gen_frame + 0x48)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(this + 0x44);
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(this + 0x48);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x10)),(uint)(this + 0x30));
  (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x40)) + (float10)*(float *)(this + 0x20))));
  (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x24) + (float10)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x28) + (float10)(*(float *)(gen_frame + 0x48)))));
  pfVar4 = (float *)F_005fe770(&(*(undefined4 *)(gen_frame + 0x10)),(uint)((undefined1 *)(gen_frame + 0x0)));
  *(float *)(param_1 + 0x40) = (float)((float10)*pfVar4 * (float10)REFG(float, 0x1302c60));
  *(float *)(param_1 + 0x44) = (float)((float10)pfVar4[1] * (float10)REFG(float, 0x1302c64));
  *(float *)(param_1 + 0x48) = (float)((float10)pfVar4[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)&(*(undefined4 *)(gen_frame + 0x10)));
  F_005fe2e0(param_1 + 0x10,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  F_005fe2e0(param_1 + 0x20,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  *(float *)(param_1 + 0x30) = (*(float *)(gen_frame + 0x40));
  *(float *)(param_1 + 0x34) = (*(float *)(gen_frame + 0x44));
  *(float *)(param_1 + 0x38) = (*(float *)(gen_frame + 0x48));
LAB_00b62dc1: ;
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return param_1;
}

/* ref: FUN_00b62de0 */
byte F_00b62de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62de0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x2dd3)) & 2;
  *(byte *)(in_ecx + 0x2dd3) = *(byte *)(in_ecx + 0x2dd3) ^ bVar1;
  return bVar1;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf1 */
byte F_00b62e00(void)
{
  GEN_ENTER(0xb62e00u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf11 */
uint F_00b62e10(void)
{
  GEN_ENTER(0xb62e10u, 0u, 0u, 0u, 0u);
  return 0x10f363c;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf13 */
uint F_00b62e20(void)
{
  GEN_ENTER(0xb62e20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf12 */
uint F_00b62e30(void)
{
  GEN_ENTER(0xb62e30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf15 */
uint F_00b62e40(void)
{
  GEN_ENTER(0xb62e40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf14 */
uint F_00b62e50(void)
{
  GEN_ENTER(0xb62e50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf17 */
uint F_00b62e60(void)
{
  GEN_ENTER(0xb62e60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf16 */
uint F_00b62e70(void)
{
  GEN_ENTER(0xb62e70u, 0u, 0u, 0u, 0u);
  return 0;
}

