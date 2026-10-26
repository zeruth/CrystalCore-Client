#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00a9cad0 */
uint F_00a9cad0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9cad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a9c3c0(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a9cb00 */
uint F_00a9cb00(unsigned int gen_a0)
{
  GEN_ENTER(0xa9cb00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a9c480(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a9cb30 */
uint F_00a9cb30(unsigned int gen_a0)
{
  GEN_ENTER(0xa9cb30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a9c540(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a9cb60 */
unsigned int F_00a9cb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9cb60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21)));
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  while (cVar1 == '\0') {
    F_00a9cb60((*(undefined * PTR32 *)&gen_args[0]),(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00a9ab90(piVar3 + 4,&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)piVar3[5],(undefined4 *)piVar3[5]);
    F_00429760(piVar3[5],0x24,800);
    F_00429760(piVar3,0x24,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return 0;
}

/* ref: FUN_00a9cbd0 */
uint F_00a9cbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9cbd0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x21))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[2]);
  F_00a88660(&(*(int * PTR32 *)&gen_args[2]));
  piVar5 = (int *)*piVar6;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar6[2] + 0x21) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar6[2]) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar6[2];
        *(int * PTR32 *)(piVar6[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar6[1];
        if ((int *)*puVar2 == piVar6) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar6[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 8))) = (char)piVar6[8];
      *(char *)(piVar6 + 8) = (char)iVar1;
      goto LAB_00a9ccea;
    }
  }
  else {
    piVar7 = (int *)piVar6[2];
  }
  piVar5 = (int *)piVar6[1];
  if (*(char *)((int)piVar7 + 0x21) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = piVar7;
  }
  else if ((int *)*piVar5 == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) == piVar6) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      piVar3 = (int *)F_00a88430(piVar7);
    }
    **(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = piVar3;
  }
  iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4);
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*(int * PTR32 *)(iVar1 + 8) == piVar6) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar4 = F_00a88410(piVar7);
      *(uint *)((*(int *)(gen_frame + 0x0)) + 8) = uVar4;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar5;
    }
  }
LAB_00a9ccea: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[8] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[8] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8bfe0(this_00,piVar6);
            piVar5 = (int *)piVar6[2];
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(*piVar5 + 0x20) != '\x01') || (*(char *)(piVar5[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x20) = 1;
                *(undefined1 *)(piVar5 + 8) = 0;
                F_00a8c040(this_00,piVar5);
                piVar5 = (int *)piVar6[2];
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 8) = (char)piVar6[8];
              *(undefined1 *)(piVar6 + 8) = 1;
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              F_00a8bfe0(this_00,piVar6);
              break;
            }
LAB_00a9cda8: ;
            *(undefined1 *)(piVar5 + 8) = 0;
          }
        }
        else {
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8c040(this_00,piVar6);
            piVar5 = (int *)*piVar6;
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(piVar5[2] + 0x20) == '\x01') && (*(char *)(*piVar5 + 0x20) == '\x01'))
            goto LAB_00a9cda8;
            if (*(char *)(*piVar5 + 0x20) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              *(undefined1 *)(piVar5 + 8) = 0;
              F_00a8bfe0(this_00,piVar5);
              piVar5 = (int *)*piVar6;
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 8) = (char)piVar6[8];
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(*piVar5 + 0x20) = 1;
            F_00a8c040(this_00,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 4) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_00a9ab90((*(int * PTR32 *)(gen_frame + 0x4)) + 4,&(*(int *)(gen_frame + 0x0)),*(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5],(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5]);
  F_00429760(piVar6[5],0x24,800);
  F_00429760(piVar6,0x24,800);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) != 0) {
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9ce50 */
uint F_00a9ce50(unsigned int gen_a0)
{
  GEN_ENTER(0xa9ce50u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_00a9b1a0((undefined *)((*(int *)&gen_args[0]) + 4),&(*(int *)&gen_args[0]),**(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 8),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 8));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 8),0x28,0x191);
  return (uint)uVar2;
}

/* ref: FUN_00a9ce90 */
unsigned int F_00a9ce90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ce90u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    F_004949f0((undefined *)((int)param_1 + 0x54),param_2 + 0x54);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined1 *)((int)param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  }
  return 0;
}

/* ref: FUN_00a9ced0 */
unsigned int F_00a9ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ced0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    F_004949f0((undefined *)((int)param_1 + 0x54),param_2 + 0x54);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined1 *)((int)param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  }
  return 0;
}

/* ref: FUN_00a9cf10 */
unsigned int F_00a9cf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9cf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    F_004949f0((undefined *)((int)param_1 + 0x54),param_2 + 0x54);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined1 *)((int)param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  }
  return 0;
}

/* ref: FUN_00a9cf50 */
uint F_00a9cf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9cf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  
  iVar1 = (*(int *)&gen_args[2]);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar4 = true;
  (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),1);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar4 = *(uint *)(iVar1 + 0xc) < (uint)puVar3[3];
      }
      else {
        bVar4 = *(uint *)(iVar1 + 0xc) <= (uint)puVar3[3];
      }
      (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),bVar4);
      if (bVar4 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
  if (bVar4 != false) {
    if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar3 = (undefined4 *)F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,iVar1);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a88f70(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)(iVar1 + 0xc)) {
    puVar3 = (undefined4 *)F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(int *)&gen_args[2]),puVar3,iVar1);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00a9ab90((undefined *)(iVar1 + 0x10),&(*(undefined4 * PTR32 *)&gen_args[3]),**(undefined4 * PTR32 *)(iVar1 + 0x14),
               *(undefined4 * PTR32 *)(iVar1 + 0x14));
  F_00429760(*(undefined4 *)(iVar1 + 0x14),0x24,800);
  F_00429760(iVar1,0x24,800);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9d050 */
uint F_00a9d050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a9c2c0(puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a9d0a0 */
unsigned int F_00a9d0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 6) = 0;
    uVar1 = F_004296a0(0x28,0,0x191);
    *(uint *)(param_1 + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)(param_1 + 4) + 4))) = *(int *)(param_1 + 4);
    *((int *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(int *)(param_1 + 4);
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 4) + 0x24))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 4) + 0x25))) = 1;
    F_00a9ae70(param_1 + 2,param_2 + 2);
  }
  return 0;
}

/* ref: FUN_00a9d100 */
uint F_00a9d100(unsigned int gen_a0)
{
  GEN_ENTER(0xa9d100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a9cb60(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a9d130 */
uint F_00a9d130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9d130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a9cb60(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x21);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x21);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x21);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a9cbd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9d1f0 */
unsigned int F_00a9d1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9d1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_004949f0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
    *(undefined4 *)((int)param_2 + 0x6c) = *(undefined4 *)(param_3 + 0x6c);
    *(undefined1 *)((int)param_2 + 0x70) = *(undefined1 *)(param_3 + 0x70);
  }
  return 0;
}

/* ref: FUN_00a9d230 */
unsigned int F_00a9d230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9d230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_004949f0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
    *(undefined4 *)((int)param_2 + 0x6c) = *(undefined4 *)(param_3 + 0x6c);
    *(undefined1 *)((int)param_2 + 0x70) = *(undefined1 *)(param_3 + 0x70);
  }
  return 0;
}

/* ref: FUN_00a9d270 */
unsigned int F_00a9d270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9d270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_004949f0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
    *(undefined4 *)((int)param_2 + 0x6c) = *(undefined4 *)(param_3 + 0x6c);
    *(undefined1 *)((int)param_2 + 0x70) = *(undefined1 *)(param_3 + 0x70);
  }
  return 0;
}

/* ref: FUN_00a9d2b0 */
uint F_00a9d2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d2b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_00a9b1a0((undefined *)((*(int *)&gen_args[1]) + 4),&(*(int *)&gen_args[1]),**(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 8),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 8));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 8),0x28,0x191);
  return (uint)uVar2;
}

/* ref: FUN_00a9d2e0 */
uint F_00a9d2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9d2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[3]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    if (*(uint *)(piVar1[2] + 0xc) < (uint)(*(int * PTR32 *)&gen_args[3])[3]) {
      F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,piVar1[2],(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00a88f70(&(*(int * PTR32 *)&gen_args[3]));
      if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)piVar2[3]) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x21))) != '\0') {
          F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)piVar2[3]) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00a88660(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) || ((uint)piVar2[3] < (uint)(*(int * PTR32 *)&gen_args[3])[3])) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x21))) != '\0') {
          F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar3 = (undefined4 *)F_00a9cf50((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9d440 */
uint F_00a9d440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa9d440u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[4]);
  if (0xfffffffd < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    F_00a9b1a0((*(int * PTR32 *)&gen_args[4]) + 4,&(*(undefined4 *)&gen_args[2]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[5])));
    F_00429760(piVar4[5],0x28,0x191);
    F_00429760(piVar4,0x24,0x191);
                    
    F_00c4579a("map/set<T> too long");
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 1;
  (*(int * PTR32 *)&gen_args[4])[1] = (int)(*(undefined4 * PTR32 *)&gen_args[3]);
  if ((*(undefined4 * PTR32 *)&gen_args[3]) == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1] = (*(int * PTR32 *)&gen_args[4]);
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(int * PTR32 *)&gen_args[4]);
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = (*(int * PTR32 *)&gen_args[4]);
  }
  else if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
    (*(undefined4 * PTR32 *)&gen_args[3])[2] = (*(int * PTR32 *)&gen_args[4]);
    if ((*(undefined4 * PTR32 *)&gen_args[3]) == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = (*(int * PTR32 *)&gen_args[4]);
    }
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[4]);
    if ((*(undefined4 * PTR32 *)&gen_args[3]) == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (int)(*(int * PTR32 *)&gen_args[4]);
    }
  }
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[4])[1] + 0x20)));
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[4]);
      *(undefined1 *)(iVar2 + 0x20) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x20) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *(undefined1 *)(iVar2 + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x21) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
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
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x21) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a9d65d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x20) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x21) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a9d65d;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *(undefined1 *)(iVar2 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x20);
  } while( true );
}

/* ref: FUN_00a9d690 */
unsigned int F_00a9d690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9d690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00a9d0a0(param_2,param_3);
  return 0;
}

/* ref: Client::Game::UI::Journal::vf0 */
uint F_00a9d6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a7fe60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::UI::QuestTodoList::vf0 */
uint F_00a9d6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7990));
  *(undefined * PTR32 * PTR32 *)(this + 0x1c0) = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  F_00a9c540(this + 0x1a8);
  F_00429760(*(undefined4 *)(this + 0x1a8),8,800);
  *(undefined4 *)(this + 0x1a8) = 0;
  F_00a93740(this + 0x198);
  F_00a71520(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::UI::QuestUI::vf0 */
uint F_00a9d750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a80310(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a9d780 */
byte F_00a9d780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00a92130(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0x74,0,800);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + uVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    F_0042cbc0(this_00,param_1);
    F_004949f0((undefined *)((int)this_00 + 0x54),param_1 + 0x54);
    *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
    uVar1 = (uint)*(byte *)(param_1 + 0x70);
    *(byte *)((int)this_00 + 0x70) = *(byte *)(param_1 + 0x70);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return (byte)uVar1;
}

/* ref: FUN_00a9d800 */
byte F_00a9d800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00a922a0(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0x74,0,800);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + uVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    F_0042cbc0(this_00,param_1);
    F_004949f0((undefined *)((int)this_00 + 0x54),param_1 + 0x54);
    *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
    uVar1 = (uint)*(byte *)(param_1 + 0x70);
    *(byte *)((int)this_00 + 0x70) = *(byte *)(param_1 + 0x70);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return (byte)uVar1;
}

/* ref: FUN_00a9d880 */
byte F_00a9d880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00a92410(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0x74,0,800);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + uVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    F_0042cbc0(this_00,param_1);
    F_004949f0((undefined *)((int)this_00 + 0x54),param_1 + 0x54);
    *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
    uVar1 = (uint)*(byte *)(param_1 + 0x70);
    *(byte *)((int)this_00 + 0x70) = *(byte *)(param_1 + 0x70);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return (byte)uVar1;
}

/* ref: FUN_00a9d900 */
unsigned int F_00a9d900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d900u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21)));
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  while (cVar1 == '\0') {
    F_00a9d900((*(undefined * PTR32 *)&gen_args[0]),(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00a9b1a0(piVar3 + 4,&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)piVar3[5],(undefined4 *)piVar3[5]);
    F_00429760(piVar3[5],0x28,0x191);
    F_00429760(piVar3,0x24,0x191);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return 0;
}

/* ref: FUN_00a9d970 */
uint F_00a9d970(unsigned int gen_a0)
{
  GEN_ENTER(0xa9d970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a9d130(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a9d990 */
uint F_00a9d990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9d990u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x21))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[2]);
  F_00928100(&(*(int * PTR32 *)&gen_args[2]));
  piVar5 = (int *)*piVar6;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar6[2] + 0x21) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar6[2]) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar6[2];
        *(int * PTR32 *)(piVar6[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar6[1];
        if ((int *)*puVar2 == piVar6) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar6[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 8))) = (char)piVar6[8];
      *(char *)(piVar6 + 8) = (char)iVar1;
      goto LAB_00a9daaa;
    }
  }
  else {
    piVar7 = (int *)piVar6[2];
  }
  piVar5 = (int *)piVar6[1];
  if (*(char *)((int)piVar7 + 0x21) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = piVar7;
  }
  else if ((int *)*piVar5 == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) == piVar6) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      piVar3 = (int *)F_00912c00(piVar7);
    }
    **(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = piVar3;
  }
  iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4);
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*(int * PTR32 *)(iVar1 + 8) == piVar6) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar4 = F_00a88350(piVar7);
      *(uint *)((*(int *)(gen_frame + 0x0)) + 8) = uVar4;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar5;
    }
  }
LAB_00a9daaa: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[8] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[8] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8bd90(this_00,piVar6);
            piVar5 = (int *)piVar6[2];
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(*piVar5 + 0x20) != '\x01') || (*(char *)(piVar5[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x20) = 1;
                *(undefined1 *)(piVar5 + 8) = 0;
                F_00a8bdf0(this_00,piVar5);
                piVar5 = (int *)piVar6[2];
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 8) = (char)piVar6[8];
              *(undefined1 *)(piVar6 + 8) = 1;
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              F_00a8bd90(this_00,piVar6);
              break;
            }
LAB_00a9db68: ;
            *(undefined1 *)(piVar5 + 8) = 0;
          }
        }
        else {
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8bdf0(this_00,piVar6);
            piVar5 = (int *)*piVar6;
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(piVar5[2] + 0x20) == '\x01') && (*(char *)(*piVar5 + 0x20) == '\x01'))
            goto LAB_00a9db68;
            if (*(char *)(*piVar5 + 0x20) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              *(undefined1 *)(piVar5 + 8) = 0;
              F_00a8bd90(this_00,piVar5);
              piVar5 = (int *)*piVar6;
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 8) = (char)piVar6[8];
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(*piVar5 + 0x20) = 1;
            F_00a8bdf0(this_00,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 4) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_00a9b1a0((*(int * PTR32 *)(gen_frame + 0x4)) + 4,&(*(int *)(gen_frame + 0x0)),*(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5],(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5]);
  F_00429760(piVar6[5],0x28,0x191);
  F_00429760(piVar6,0x24,0x191);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) != 0) {
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9dc10 */
uint F_00a9dc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9dc10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a9c2c0(puVar1 + 3,param_3);
  F_00a9d2e0(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00a9dc70 */
uint F_00a9dc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9dc70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  
  iVar1 = (*(int *)&gen_args[2]);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar4 = true;
  (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),1);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar4 = *(ushort *)(iVar1 + 0xc) < *(ushort *)(puVar3 + 3);
      }
      else {
        bVar4 = *(ushort *)(iVar1 + 0xc) <= *(ushort *)(puVar3 + 3);
      }
      (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),bVar4);
      if (bVar4 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
  if (bVar4 != false) {
    if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar3 = (undefined4 *)F_00a9d440((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,iVar1);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a89180(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if (*((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[3]) + 3))) < *(ushort *)(iVar1 + 0xc)) {
    puVar3 = (undefined4 *)F_00a9d440((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(int *)&gen_args[2]),puVar3,iVar1);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00a9b1a0((undefined *)(iVar1 + 0x10),&(*(undefined4 * PTR32 *)&gen_args[3]),**(undefined4 * PTR32 *)(iVar1 + 0x14),
               *(undefined4 * PTR32 *)(iVar1 + 0x14));
  F_00429760(*(undefined4 *)(iVar1 + 0x14),0x28,0x191);
  F_00429760(iVar1,0x24,0x191);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9dd80 */
uint F_00a9dd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9dd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,0x191);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a9d0a0(puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a9ddd0 */
uint F_00a9ddd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9ddd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a9d900(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a9de00 */
uint F_00a9de00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9de00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar1 = (*(uint * PTR32 *)&gen_args[1]);
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar5;
  if (*(char *)((int)puVar5[1] + 0x21) == '\0') {
    puVar3 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar3[3] < *(*(uint * PTR32 *)&gen_args[1])) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar3;
        puVar2 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) && ((uint)puVar5[3] <= *(*(uint * PTR32 *)&gen_args[1]))) {
    return (uint)(puVar5 + 4);
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  puVar3 = (undefined4 *)F_004296a0(0x24,0,800);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar3;
  *puVar3 = puVar3;
  puVar3[1] = puVar3;
  puVar3[2] = puVar3;
  *(undefined1 *)(puVar3 + 8) = 1;
  *(undefined1 *)((int)puVar3 + 0x21) = 1;
  uVar4 = *puVar1;
  F_00a9ac50(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x18)));
  puVar3 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar3 + 8) = 0;
  if (puVar3 + 3 != (uint *)0x0) {
    puVar3[3] = uVar4;
    puVar3[6] = 0;
    uVar4 = F_004296a0(0x24,0,800);
    puVar3[5] = uVar4;
    *(uint *)uVar4 = uVar4;
    *(undefined4 *)(puVar3[5] + 4) = puVar3[5];
    *(undefined4 *)(puVar3[5] + 8) = puVar3[5];
    *(undefined1 *)(puVar3[5] + 0x20) = 1;
    *(undefined1 *)(puVar3[5] + 0x21) = 1;
    F_00a9a5b0(puVar3 + 4,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x28));
  }
  F_00a9d2e0((*(undefined * PTR32 *)&gen_args[0]),&(*(uint * PTR32 *)&gen_args[1]),puVar5,puVar3);
  puVar1 = (*(uint * PTR32 *)&gen_args[1]);
  F_00a9ab90(((undefined1 *)(gen_frame + 0x8)),&(*(uint * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),0x24,800);
  F_00a9ab90(((undefined1 *)(gen_frame + 0x18)),&(*(uint * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x1c)),0x24,800);
  return (uint)(puVar1 + 4);
}

/* ref: FUN_00a9df90 */
uint F_00a9df90(unsigned int gen_a0)
{
  GEN_ENTER(0xa9df90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9d130(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9dfd0 */
uint F_00a9dfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9dfd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a9d900(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x21);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x21);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x21);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a9d990(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9e090 */
uint F_00a9e090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9e090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,0x191);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a9d0a0(puVar1 + 3,param_2);
  F_00a9dc70(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a9e0f0 */
uint F_00a9e0f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9d130(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9e170 */
uint F_00a9e170(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a9dfd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a9e190 */
uint F_00a9e190(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int local_c;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x24,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x21))) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar1 = F_004296a0(0x2c,0,800);
  *(uint *)((int)this + 0x14) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(int *)((int)this + 0x14);
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 8))) = *(int *)((int)this + 0x14);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x28))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x29))) = 1;
  iVar2 = 1;
  do {
    iVar2 = iVar2 + -1;
    *(undefined4 *)((int)this + iVar2 * 8 + 0x28) = 0;
    *(undefined4 *)((int)this + iVar2 * 8 + 0x2c) = 0;
  } while (-1 < iVar2);
  puVar3 = (undefined4 *)((int)this + 0x30);
  local_c = 0x1d;
  puVar4 = (undefined4 *)((int)this + 0x94);
  do {
    *puVar3 = 0;
    puVar4[-0x18] = 0;
    F_0042b630(puVar4 + -0x17);
    puVar3 = puVar3 + 0x1c;
    puVar4[-2] = 0;
    puVar4[-1] = 0;
    *puVar4 = 0;
    *(undefined2 *)(puVar4 + 2) = 0;
    puVar4 = puVar4 + 0x1c;
    local_c = local_c + -1;
  } while (-1 < local_c);
  puVar4 = (undefined4 *)((int)this + 0xd50);
  local_c = 0xf;
  puVar3 = (undefined4 *)((int)this + 0xdb4);
  do {
    *puVar4 = 0;
    puVar3[-0x18] = 0;
    F_0042b630(puVar3 + -0x17);
    puVar4 = puVar4 + 0x1c;
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    *(undefined2 *)(puVar3 + 2) = 0;
    puVar3 = puVar3 + 0x1c;
    local_c = local_c + -1;
  } while (-1 < local_c);
  *(undefined4 *)((int)this + 0x1454) = 0;
  *(undefined4 *)((int)this + 0x1458) = 0;
  F_0042b630((int)this + 0x145c);
  *(undefined4 *)((int)this + 0x14b0) = 0;
  *(undefined4 *)((int)this + 0x14b4) = 0;
  *(undefined4 *)((int)this + 0x14b8) = 0;
  *(undefined2 *)((int)this + 0x14c0) = 0;
  *(undefined4 *)((int)this + 0x14d0) = 0;
  uVar1 = F_004296a0(0x78,0,800);
  *(uint *)((int)this + 0x14cc) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x14cc) + 4))) = *(int *)((int)this + 0x14cc);
  puVar3 = (undefined4 *)((int)this + 0x14d8);
  *puVar3 = 0;
  puVar4 = (undefined4 *)F_004296a0(8,0,800);
  *puVar3 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar3 = puVar3;
  *(undefined4 *)((int)this + 0x14dc) = 0;
  *(undefined4 *)((int)this + 0x14e0) = 0;
  *(undefined4 *)((int)this + 0x14e4) = 0;
  *(undefined4 *)((int)this + 0x14e8) = 0;
  *(undefined4 *)((int)this + 0x14fc) = 0;
  uVar1 = F_004296a0(0x78,0,800);
  *(uint *)((int)this + 0x14f8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x14f8) + 4))) = *(int *)((int)this + 0x14f8);
  puVar3 = (undefined4 *)((int)this + 0x1504);
  *puVar3 = 0;
  puVar4 = (undefined4 *)F_004296a0(8,0,800);
  *puVar3 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar3 = puVar3;
  *(undefined4 *)((int)this + 0x1508) = 0;
  *(undefined4 *)((int)this + 0x150c) = 0;
  *(undefined4 *)((int)this + 0x1510) = 0;
  *(undefined4 *)((int)this + 0x1514) = 0;
  *(undefined4 *)((int)this + 0x1528) = 0;
  uVar1 = F_004296a0(0x78,0,800);
  *(uint *)((int)this + 0x1524) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1524) + 4))) = *(int *)((int)this + 0x1524);
  return (uint)this;
}

/* ref: FUN_00a9e3a0 */
uint F_00a9e3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int iVar2;
  undefined4 * puVar3;
  ulonglong uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a97b00((undefined *)((int)this + 0x1524));
  F_00429760(*(undefined4 *)((int)this + 0x1524),0x78,800);
  F_00a8ff70((undefined *)((int)this + 0x1504));
  F_00429760(*(undefined4 *)((int)this + 0x1504),8,800);
  *(undefined4 *)((int)this + 0x1504) = 0;
  F_00a97b00((undefined *)((int)this + 0x14f8));
  F_00429760(*(undefined4 *)((int)this + 0x14f8),0x78,800);
  F_00a8ff70((undefined *)((int)this + 0x14d8));
  F_00429760(*(undefined4 *)((int)this + 0x14d8),8,800);
  *(undefined4 *)((int)this + 0x14d8) = 0;
  F_00a97b00((undefined *)((int)this + 0x14cc));
  F_00429760(*(undefined4 *)((int)this + 0x14cc),0x78,800);
  iVar2 = *(int *)((int)this + 0x14b0);
  if (iVar2 != 0) {
    F_00429760(iVar2,((*(int *)((int)this + 0x14b8) - iVar2) / 0x34) * 0x34,800);
  }
  *(undefined4 *)((int)this + 0x14b0) = 0;
  *(undefined4 *)((int)this + 0x14b4) = 0;
  *(undefined4 *)((int)this + 0x14b8) = 0;
  F_0042c880((undefined *)((int)this + 0x145c));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xf;
  puVar3 = (undefined4 *)((int)this + 0x14ac);
  do {
    iVar2 = puVar3[-0x1c];
    if (iVar2 != 0) {
      F_00429760(iVar2,((puVar3[-0x1a] - iVar2) / 0x34) * 0x34,800);
    }
    puVar3[-0x1c] = 0;
    puVar3[-0x1b] = 0;
    puVar3[-0x1a] = 0;
    F_0042c880(puVar3 + -0x31);
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    puVar3 = puVar3 + -0x1c;
  } while (-1 < (int)pvVar1);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1d;
  puVar3 = (undefined4 *)((int)this + 0xdac);
  do {
    iVar2 = puVar3[-0x1c];
    if (iVar2 != 0) {
      F_00429760(iVar2,((puVar3[-0x1a] - iVar2) / 0x34) * 0x34,800);
    }
    puVar3[-0x1c] = 0;
    puVar3[-0x1b] = 0;
    puVar3[-0x1a] = 0;
    F_0042c880(puVar3 + -0x31);
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    puVar3 = puVar3 + -0x1c;
  } while (-1 < (int)pvVar1);
  F_00a9aa80((undefined *)((int)this + 0x10),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x14),
               *(undefined4 * PTR32 *)((int)this + 0x14));
  F_00429760(*(undefined4 *)((int)this + 0x14),0x2c,800);
  F_00a9d130(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar4 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar4;
}

/* ref: FUN_00a9e5c0 */
uint F_00a9e5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9dfd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9e600 */
uint F_00a9e600(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9dfd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9e680 */
uint F_00a9e680(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x24,0,0x191);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x21))) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar1 = F_004296a0(0x18,0,0x191);
  *(uint *)((int)this + 0x14) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(int *)((int)this + 0x14);
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 8))) = *(int *)((int)this + 0x14);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_00a9e700 */
uint F_00a9e700(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a90060((undefined *)((int)this + 0x10),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x14),
               *(undefined4 * PTR32 *)((int)this + 0x14));
  F_00429760(*(undefined4 *)((int)this + 0x14),0x18,0x191);
  F_00a9dfd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9e760 */
unsigned int F_00a9e760(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb02c) = (*(undefined * PTR32 (*)[1])REFP(0x10e788c));
  F_00b9d730((undefined *)((int)this + 0x92f4));
  *(undefined4 *)((int)this + 0x92e8) =
       (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*(undefined * PTR32 *)((int)this + 0x92f0) != (undefined *)0x0) {
    F_00414620(*(undefined * PTR32 *)((int)this + 0x92f0),(undefined4 *)((int)this + 0x92e8));
  }
  F_00bc6480((undefined *)((int)this + 0x8ba8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8b80) = (*(undefined * PTR32 (*)[1])REFP(0x10e7940));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8b7c) = (*(undefined * PTR32 (*)[1])REFP(0x10e7938));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8b70) = (*(undefined * PTR32 (*)[1])REFP(0x10e7930));
  *(undefined4 *)((int)this + 0x8948) = (*(undefined * PTR32 (*)[1])REFP(0x10e7928));
  F_00a859d0((undefined4 *)((int)this + 0x8948));
  F_00a9e3a0((undefined *)((int)this + 0x7418));
  F_0042c880((undefined *)((int)this + 0x73bc));
  F_0042c880((undefined *)((int)this + 0x7360));
  F_00b9f8b0((undefined *)((int)this + 0x70ec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6ec4) = (*(undefined * PTR32 (*)[2])REFP(0x10e7990));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7084) = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  F_00a9c540((undefined *)((int)this + 0x706c));
  F_00429760(*(undefined4 *)((int)this + 0x706c),8,800);
  *(undefined4 *)((int)this + 0x706c) = 0;
  F_00a93740((undefined *)((int)this + 0x705c));
  F_00a71520((undefined *)((int)this + 0x6ec4));
  F_00a80310((undefined *)((int)this + 0x5ef8));
  F_00a7fe60((undefined *)((int)this + 0x2448));
  F_00a72970((undefined *)((int)this + 0x237c));
  F_00a84440((undefined *)((int)this + 0x2344));
  F_00a71e70((undefined *)((int)this + 0x1950));
  F_00a72450((undefined *)((int)this + 0x1904));
  iVar1 = *(int *)((int)this + 0x1938);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x1940) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x1938) = 0;
  *(undefined4 *)((int)this + 0x193c) = 0;
  *(undefined4 *)((int)this + 0x1940) = 0;
  F_00a72750((undefined *)((int)this + 0x15e8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1540) =
       (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7874));
  return 0;
}

/* ref: FUN_00a9e8f0 */
uint F_00a9e8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7954));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1540) = (*(undefined * PTR32 (*)[2])REFP(0x10e7880));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x15e8) = (*(undefined * PTR32 (*)[2])REFP(0x10e7978));
  *(undefined4 *)((int)this + 0x15ec) = 0;
  *(undefined4 *)((int)this + 0x15f0) = 0;
  *(undefined4 *)((int)this + 0x15f4) = 0;
  *(undefined2 *)((int)this + 0x15fc) = 0;
  F_00a91f10((undefined4 *)((int)this + 0x15ec),0x10);
  *(undefined4 *)((int)this + 0x1600) = 0;
  *(undefined4 *)((int)this + 0x1604) = 0;
  *(undefined4 *)((int)this + 0x1608) = 0;
  *(undefined4 *)((int)this + 0x160c) = 0;
  *(undefined4 *)((int)this + 0x1610) = 0;
  *(undefined4 *)((int)this + 0x1614) = 0;
  *(undefined4 *)((int)this + 0x1618) = 0;
  *(undefined4 *)((int)this + 0x161c) = 0;
  *(undefined4 *)((int)this + 0x1620) = 0;
  *(undefined4 *)((int)this + 0x1624) = 0;
  F_00c48350((undefined *)((int)this + 0x1628),0,0x100);
  *(undefined4 *)((int)this + 0x1728) = 0;
  *(undefined4 *)((int)this + 0x172c) = 0;
  *(undefined2 *)((int)this + 0x1730) = 0;
  *(undefined4 *)((int)this + 0x1734) = 0;
  *(undefined4 *)((int)this + 0x1738) = 0;
  *(undefined4 *)((int)this + 0x173c) = 0;
  *(undefined4 *)((int)this + 0x1740) = 0;
  *(undefined4 *)((int)this + 0x1928) = 0;
  *(undefined4 *)((int)this + 0x192c) = 0;
  *(undefined4 *)((int)this + 0x1938) = 0;
  *(undefined4 *)((int)this + 0x193c) = 0;
  *(undefined4 *)((int)this + 0x1940) = 0;
  iVar1 = 0;
  do {
    *(undefined1 *)((int)this + iVar1 + 0x194c) = 0;
    *(undefined4 *)((int)this + iVar1 * 4 + 0x1904) = 0;
    *(undefined4 *)((int)this + iVar1 * 4 + 0x1910) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  F_00a71dd0((undefined *)((int)this + 0x1950));
  *(undefined4 *)((int)this + 0x2344) = 0;
  F_00a9e680((undefined *)((int)this + 0x2348));
  *(undefined4 *)((int)this + 0x2368) = 0;
  *(undefined4 *)((int)this + 0x236c) = 0;
  *(undefined4 *)((int)this + 0x2370) = 0;
  *(undefined4 *)((int)this + 0x2374) = 0;
  *(undefined4 *)((int)this + 0x2378) = 0;
  *(undefined4 *)((int)this + 0x237c) = 0;
  *(undefined4 *)((int)this + 0x2380) = 0;
  *(undefined4 *)((int)this + 0x2384) = 0;
  *(undefined4 *)((int)this + 0x2388) = 0;
  F_0042b630((int)this + 0x2390);
  *(undefined4 *)((int)this + 0x23e4) = 0;
  *(undefined4 *)((int)this + 0x23e8) = 0;
  *(undefined4 *)((int)this + 0x23ec) = 0;
  *(undefined4 *)((int)this + 0x23f0) = 0;
  F_00a91df0((undefined *)((int)this + 0x2380),0xc9);
  *(undefined4 *)((int)this + 0x23f4) = 0;
  *(undefined4 *)((int)this + 0x2414) = 0;
  *(undefined4 *)((int)this + 0x2438) = 0;
  *(undefined4 *)((int)this + 0x23f8) = 0;
  *(undefined4 *)((int)this + 0x23fc) = 0;
  *(undefined1 *)((int)this + 0x2400) = 0;
  *(undefined4 *)((int)this + 0x2404) = 0;
  *(undefined4 *)((int)this + 0x2408) = 0;
  *(undefined1 *)((int)this + 0x240c) = 0;
  *(undefined4 *)((int)this + 0x2410) = 0;
  *(undefined1 *)((int)this + 0x2418) = 0;
  *(undefined4 *)((int)this + 0x241c) = 0;
  *(undefined4 *)((int)this + 0x2420) = 0;
  *(undefined1 *)((int)this + 0x2424) = 0;
  *(undefined4 *)((int)this + 0x2428) = 0;
  *(undefined4 *)((int)this + 0x242c) = 0;
  *(undefined1 *)((int)this + 0x2430) = 0;
  *(undefined4 *)((int)this + 0x2434) = 0;
  *(undefined1 *)((int)this + 0x243c) = 0;
  *(undefined4 *)((int)this + 0x2440) = 0;
  F_00a7fc50((undefined *)((int)this + 0x2448));
  F_00a80250((undefined *)((int)this + 0x5ef8));
  F_00a80110((undefined *)((int)this + 0x6ec4));
  F_00b9fec0((undefined *)((int)this + 0x70ec));
  F_0042b630((int)this + 0x7360);
  F_0042b630((int)this + 0x73bc);
  F_00a9e190((undefined *)((int)this + 0x7418));
  *(undefined4 *)((int)this + 0x8948) = (*(undefined * PTR32 (*)[1])REFP(0x10e7928));
  F_00a859d0((undefined4 *)((int)this + 0x8948));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8b70) = (*(undefined * PTR32 (*)[1])REFP(0x10e7930));
  *(undefined1 *)((int)this + 0x8b74) = 0;
  *(undefined1 *)((int)this + 0x8b78) = 0;
  *(undefined2 *)((int)this + 0x8b76) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8b7c) = (*(undefined * PTR32 (*)[1])REFP(0x10e7938));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8b80) = (*(undefined * PTR32 (*)[1])REFP(0x10e7940));
  *(undefined4 *)((int)this + 0x8b84) = 0;
  *(undefined4 *)((int)this + 0x8b88) = 0;
  *(undefined4 *)((int)this + 0x8b8c) = 0;
  *(undefined4 *)((int)this + 0x8b90) = 0;
  *(undefined4 *)((int)this + 0x8b94) = 0;
  *(undefined4 *)((int)this + 0x8b98) = 0;
  *(undefined4 *)((int)this + 0x8b9c) = 0;
  *(undefined4 *)((int)this + 0x8ba0) = 0;
  *(undefined2 *)((int)this + 0x8ba4) = 0;
  F_00bc65a0((undefined *)((int)this + 0x8ba8));
  *(undefined4 *)((int)this + 0x92ec) = 0;
  *(undefined4 *)((int)this + 0x92f0) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x92e8) = (*(undefined * PTR32 (*)[2])REFP(0x10e7960));
  F_00b9d840((undefined *)((int)this + 0x92f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb02c) = (*(undefined * PTR32 (*)[1])REFP(0x10e788c));
  *(undefined4 *)((int)this + 0xb030) = 0;
  *(undefined4 *)((int)this + 0xb034) = 0;
  *(undefined4 *)((int)this + 0xb038) = 0;
  *(undefined4 *)((int)this + 0xb03c) = 0;
  *(undefined1 *)((int)this + 0xb042) = 0;
  *(undefined2 *)((int)this + 0xb040) = 0;
  *(undefined4 *)((int)this + 0xb044) = 0;
  *(undefined4 *)((int)this + 0xb048) = 0;
  *(undefined4 *)((int)this + 0xb04c) = 0;
  *(undefined4 *)((int)this + 0xb050) = 0;
  *(undefined1 *)((int)this + 0xb056) = 0;
  *(undefined2 *)((int)this + 0xb054) = 0;
  *(undefined4 *)((int)this + 0xb058) = 0;
  *(undefined4 *)((int)this + 0xb05c) = 0;
  *(undefined4 *)((int)this + 0xb060) = 0;
  *(undefined4 *)((int)this + 0xb064) = 0;
  *(undefined1 *)((int)this + 0xb06a) = 0;
  *(undefined2 *)((int)this + 0xb068) = 0;
  *(undefined4 *)((int)this + 0xb06c) = 0;
  *(undefined4 *)((int)this + 0xb070) = 0;
  return (uint)this;
}

/* ref: FUN_00a9ec90 */
byte F_00a9ec90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ec90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x8e) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x8e) = *(byte *)(in_ecx + 0x8e) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a9ecb0 */
unsigned int F_00a9ecb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9ecb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xb8) = param_2;
  return 0;
}

/* ref: FUN_00a9ecd0 */
unsigned int F_00a9ecd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9ecd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xbc) = param_2;
  return 0;
}

/* ref: FUN_00a9ecf0 */
uint F_00a9ecf0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9ecf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  *(float *)((int)param_1 + 0xc4) = param_2;
  uVar1 = F_00a60de0(param_1);
  return uVar1;
}

/* ref: FUN_00a9ed10 */
unsigned int F_00a9ed10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9ed10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 200) = param_2;
  return 0;
}

/* ref: FUN_00a9ed40 */
byte F_00a9ed40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ed40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x90)) & 2;
  *(byte *)(in_ecx + 0x90) = *(byte *)(in_ecx + 0x90) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a9ed60 */
byte F_00a9ed60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ed60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a9ed70 */
uint F_00a9ed70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9ed70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if ((double)param_2 < *(double *)&REFG(undefined, 0x10e8718)) {
    *(char *)(in_ecx + 0x8d) = (char)(int)param_2;
    return (int)param_2 & 0xff;
  }
  *(undefined1 *)(in_ecx + 0x8d) = 0xfa;
  return 0xfa;
}

/* ref: FUN_00a9edb0 */
uint F_00a9edb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9edb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x7c) = param_2;
  return param_2;
}

/* ref: FUN_00a9edd0 */
byte F_00a9edd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9edd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0x8e)) & 4;
  *(byte *)(in_ecx + 0x8e) = *(byte *)(in_ecx + 0x8e) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a9ee00 */
unsigned int F_00a9ee00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9ee00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x34) = param_2;
  return 0;
}

/* ref: FUN_00a9ee70 */
byte F_00a9ee70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ee70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x14) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a9ee80 */
byte F_00a9ee80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ee80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a9eeb0 */
byte F_00a9eeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9eeb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::Game::Control::MoveControl::OptionOfRequestFreeControlRotating::vf0 */
uint F_00a9eec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9eec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e8724));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a9eef0 */
uint F_00a9eef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9eef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00a9ef00 */
uint F_00a9ef00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ef00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x364) = param_2;
  return param_2;
}

/* ref: FUN_00a9ef10 */
uint F_00a9ef10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ef10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x368) = param_2;
  return param_2;
}

/* ref: FUN_00a9ef40 */
byte F_00a9ef40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ef40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x422) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a9ef70 */
byte F_00a9ef70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ef70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x421) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a9ef80 */
uint F_00a9ef80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ef80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00a9efd0 */
unsigned int F_00a9efd0(float gen_a0)
{
  GEN_ENTER(0xa9efd0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00a9eff0 */
uint F_00a9eff0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9eff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(in_ecx + 0x8a);
  if ((uVar1 == 2) && (*(int *)(in_ecx + 0x2ed4) == 1)) {
    uVar1 = 3;
  }
  return uVar1;
}

/* ref: FUN_00a9f010 */
uint F_00a9f010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this);
  return uVar1;
}

/* ref: FUN_00a9f040 */
uint F_00a9f040(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9f040u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)*(float *)(param_1 + 0xb0);
  fVar5 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5);
  bVar3 = bVar2 || fVar4 == fVar5;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar5 <= fVar4),(char)in_EAX));
  if (bVar2 == bVar3) {
    uVar1 = F_00a61890(param_1,param_2);
  }
  if ((*(int *)(param_1 + 0x2e00) != 0) && (*(char *)(param_1 + 0x2e08) != '\0')) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x2e00) + 0x48))))
                      (*(int * PTR32 *)(param_1 + 0x2e00),(undefined4)gen_fl2bits(param_2));
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a9f110 */
uint F_00a9f110(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9f110u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)*(float *)(param_1 + 0xe0);
  fVar5 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5);
  bVar3 = bVar2 || fVar4 == fVar5;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar5 <= fVar4),(char)in_EAX));
  if (bVar2 == bVar3) {
    uVar1 = F_00a61820(param_1,param_2);
  }
  if ((*(int *)(param_1 + 0x2e00) != 0) && (*(char *)(param_1 + 0x2e08) != '\0')) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x2e00) + 0x18))))
                      (*(int * PTR32 *)(param_1 + 0x2e00),(undefined4)gen_fl2bits(param_2));
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a9f170 */
uint F_00a9f170(unsigned int gen_a0)
{
  GEN_ENTER(0xa9f170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint in_EAX = 0;
  undefined4 uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xec);
  if (piVar1 != (int *)0x0) {
    if (*(int * PTR32 *)((int)this + 0x1684) != (int *)0x0) {
      iVar2 = **(int * PTR32 *)((int)this + 0x1684);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = *(undefined4 *)(iVar2 + 0x18);
      }
      ((code *)*(gen_code32 *)(*piVar1 + 0x168))(piVar1,uVar3);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x164))))
              (*(int * PTR32 *)((int)this + 0xec),0,(uint)(*(byte *)((int)this + 0x1680) >> 1 & 1));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x164))))
              (*(int * PTR32 *)((int)this + 0xec),1,(uint)(*(byte *)((int)this + 0x1680) >> 2 & 1));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x164))))
              (*(int * PTR32 *)((int)this + 0xec),2,(uint)(*(byte *)((int)this + 0x1680) >> 3 & 1));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x164))))
              (*(int * PTR32 *)((int)this + 0xec),3,(uint)(*(byte *)((int)this + 0x1680) >> 4 & 1));
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x164))))
                       (*(int * PTR32 *)((int)this + 0xec),4,(uint)(*(byte *)((int)this + 0x1680) >> 5 & 1)
                       );
    piVar1 = (int *)((int)this + 0x1e60);
    if (piVar1 != (int *)0x0) {
      if (*(int * PTR32 *)((int)this + 0x1684) != (int *)0x0) {
        iVar2 = **(int * PTR32 *)((int)this + 0x1684);
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = *(undefined4 *)(iVar2 + 0x18);
        }
        ((code *)*(gen_code32 *)(*piVar1 + 0x168))(piVar1,uVar3);
      }
      in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x164))(piVar1,0,(uint)(*(byte *)((int)this + 0x1680) & 1));
    }
  }
  return in_EAX;
}

/* ref: FUN_00a9f2a0 */
unsigned int F_00a9f2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  if (param_2 != (undefined *)0x0) {
    F_00a9f170(param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_00a9f2c0 */
byte F_00a9f2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f2c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (((param_2 != 0) && (*(char *)(in_ecx + 0x2f03) == '\x01')) &&
     (*(int *)(param_2 + 0x74) == *(int *)(in_ecx + 0x2ed8))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a9f2f0 */
byte F_00a9f2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  
  cVar1 = *(char *)((int)this + 0x188);
  if (((cVar1 != '\x05') && (cVar1 != '\x06')) && (cVar1 != '\a')) {
    return *(char *)(param_1 * 0x7a0 + 0x1e45 + (int)this) == '\0';
  }
  return (*(byte *)(param_1 * 0x7a0 + 0x1e45 + (int)this) & 0xfd) == 0;
}

/* ref: Global::SetLocalPlayer */
unsigned int F_00a9f360(unsigned int gen_a0)
{
  GEN_ENTER(0xa9f360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  REFG(void * PTR32, 0x1379694) = this;
  F_00afe350((undefined *)((int)this + 0x1b0));
  if ((REFG(int, 0x1375bbc) == 0) && (REFG(int, 0x1375b90) != 0)) {
    F_00b6ffe0(REFG(int, 0x1375b90));
    return 0;
  }
  return 0;
}

/* ref: FUN_00a9f390 */
byte F_00a9f390(unsigned int gen_a0)
{
  GEN_ENTER(0xa9f390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00a9f3a0 */
uint F_00a9f3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f3a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < 10) && (((*(byte *)(in_ecx + 0x2dd3) & 0x20) == 0 || (param_2 != 0)))) {
    return *(uint *)(in_ecx + 0x2d90 + param_2 * 4);
  }
  return 0;
}

/* ref: FUN_00a9f3d0 */
unsigned int F_00a9f3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9f3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  ushort * puVar2;
  uint uVar3;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xec);
  if ((*(int *)((int)this + 0x2e00) != 0) && (this_00 != (undefined *)0x0)) {
    uVar3 = 0xffffffff;
    uVar1 = F_00ab2840((uint)*(byte *)((int)this + 0x2e08));
    puVar2 = (ushort *)F_00ab2960(*(undefined4 *)(uVar1 + 0x84));
    if ((char)puVar2[2] == '\x02') {
      uVar3 = 0x2ffff;
    }
    else if ((char)puVar2[2] == '\x03') {
      uVar3 = 0x1ffff;
    }
    F_006abd50(this_00,uVar3 & 0xffff0000 | (uint)*puVar2);
  }
  return 0;
}

/* ref: FUN_00a9f440 */
byte F_00a9f440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 == *(byte *)((int)this + 0x1688)) {
    return 1;
  }
  uVar1 = F_00ab21a0((uint)*(byte *)((int)this + 0x1688));
  if ((uVar1 != 0) && (*(char *)(uVar1 + 0x45) != '\0')) {
    return *(byte *)(uVar1 + 0x3e) == param_1;
  }
  return 0;
}

/* ref: FUN_00a9f490 */
uint F_00a9f490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  *(undefined4 *)((int)this + 0xec) = param_1;
  piVar3 = (int *)((int)this + 0x1e10);
  iVar2 = 3;
  do {
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
    piVar3 = piVar3 + 0x1e8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  F_006a5ab0((undefined *)((int)this + 0x1e10),0,(int)this + 0x16c0,param_1);
  F_006a5ab0((undefined *)((int)this + 0x25b0),1,(int)this + 0x1e60,param_1);
  uVar1 = F_006a5ab0((undefined *)((int)this + 0x2d50),2,(int)this + 0x2600,param_1);
  return uVar1;
}

/* ref: FUN_00a9f510 */
uint F_00a9f510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 8: ;
    if ((char)param_2 != '\0') {
      return 0x113c5;
    }
    break;
  case 9: ;
    if ((char)param_2 == '\0') {
      return 0x11401;
    }
    break;
  case 10: ;
  case 0xe: ;
  case 0xf: ;
    break;
  case 0xb: ;
    if ((char)param_2 == '\0') {
      return 0x114b5;
    }
    break;
  case 0xc: ;
    if ((char)param_2 != '\0') {
      return 0x11555;
    }
    break;
  case 0xd: ;
    if ((char)param_2 == '\0') {
      return 0x11591;
    }
    break;
  default: ;
    goto switchD_00a9f522_default;
  }
switchD_00a9f522_default: ;
  return 0;
}

/* ref: FUN_00a9f5b0 */
uint F_00a9f5b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9f5b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float * pfVar2;
  
  F_00a618b0(param_1,param_2);
  uVar1 = F_00ab2960(*(undefined4 *)(param_1 + 0x2e98));
  pfVar2 = (float *)0x0;
  if (uVar1 != 0) {
    pfVar2 = (float *)F_00ab2930(*(undefined4 *)(param_1 + 0x2e9c));
    if (pfVar2 == (float *)0x0) {
      pfVar2 = (float *)F_00ab2930(0);
    }
    *(float *)(param_1 + 0xc0) = (float)((float10)*pfVar2 * (float10)param_2);
    *(float *)(param_1 + 0xb8) = pfVar2[2];
    *(float *)(param_1 + 0xbc) = pfVar2[3];
  }
  return (uint)pfVar2;
}

/* ref: FUN_00a9f620 */
byte F_00a9f620(unsigned int gen_a0)
{
  GEN_ENTER(0xa9f620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return REFG(int, 0x1379694) == in_ecx;
}

/* ref: FUN_00a9f630 */
unsigned int F_00a9f630(unsigned int gen_a0)
{
  GEN_ENTER(0xa9f630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  F_00ae6a20(in_ecx + 0x1b0);
  return 0;
}

/* ref: FUN_00a9f640 */
unsigned int F_00a9f640(unsigned int gen_a0)
{
  GEN_ENTER(0xa9f640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005482c0((undefined *)((int)this + 0x620));
  return 0;
}

/* ref: FUN_00a9f650 */
float10 F_00a9f650(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9f650u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float10 fVar1;
  
  fVar1 = F_00ae90c0(param_1 + 0x1b0,param_2,param_3);
  return fVar1;
}

/* ref: FUN_00a9f670 */
uint F_00a9f670(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xa9f670u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x0)) = param_2;
  (*(float *)(gen_frame + 0x4)) = param_3;
  (*(float *)(gen_frame + 0x8)) = param_4;
  uVar1 = F_00afe900(param_1 + 0x1b0,&(*(float *)(gen_frame + 0x0)),param_5);
  return uVar1;
}

/* ref: FUN_00a9f6d0 */
float10 F_00a9f6d0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8, float gen_a9)
{
  GEN_ENTER(0xa9f6d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  
  (*(float *)(gen_frame + 0x0)) = param_2;
  (*(float *)(gen_frame + 0x4)) = param_3;
  (*(float *)(gen_frame + 0x8)) = param_4;
  fVar1 = F_00afcd60(param_1 + 0x1b0,&(*(float *)(gen_frame + 0x0)),param_5,param_6,param_7,param_8,param_9,param_10);
  return fVar1;
}

/* ref: FUN_00a9f750 */
uint F_00a9f750(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa9f750u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x0)) = param_2;
  (*(float *)(gen_frame + 0x4)) = param_3;
  (*(float *)(gen_frame + 0x8)) = param_4;
  uVar1 = F_00afcdc0(param_1 + 0x1b0,&(*(float *)(gen_frame + 0x0)),param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00a9f7c0 */
uint F_00a9f7c0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa9f7c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this;
  uint uVar1;
  float fVar2;
  
  (*(float *)(gen_frame + 0x0)) = (*(float *)&gen_args[1]);
  (*(float *)(gen_frame + 0x4)) = (*(float *)&gen_args[2]);
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[3]);
  F_00afd7d0((undefined *)((*(int *)&gen_args[0]) + 0x1b0),&(*(float *)(gen_frame + 0x0)),&(*(float *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
  fVar2 = (*(float *)&gen_args[4]);
  this = (undefined *)F_006b8c00();
  uVar1 = F_006e3540(this,(*(int *)&gen_args[0]),(undefined4)gen_fl2bits((*(float *)&gen_args[1])),
                       (undefined4)gen_fl2bits((*(float *)&gen_args[2])),(undefined4)gen_fl2bits((*(float *)&gen_args[3])),
                       (undefined4)gen_fl2bits(fVar2));
  return uVar1;
}

/* ref: FUN_00a9f850 */
uint F_00a9f850(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9f850u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00afd950((undefined *)(param_1 + 0x1b0),(undefined4)gen_fl2bits(param_2),param_3);
  return uVar1;
}

/* ref: FUN_00a9f870 */
uint F_00a9f870(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9f870u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x10e79e4);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x10e79e4);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c964));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 1;
  uVar1 = F_00afd950((undefined *)(param_1 + 0x1b0),(undefined4)gen_fl2bits(param_2),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00a9f960 */
unsigned int F_00a9f960(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9f960u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00aebea0(in_ecx + 0x1b0,param_2,param_3);
  return 0;
}

/* ref: FUN_00a9f980 */
float10 F_00a9f980(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa9f980u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  
  (*(float *)(gen_frame + 0x0)) = param_2;
  (*(float *)(gen_frame + 0x4)) = param_3;
  (*(float *)(gen_frame + 0x8)) = param_4;
  fVar1 = F_00afdab0(param_1 + 0x1b0,&(*(float *)(gen_frame + 0x0)),param_5,param_6);
  return fVar1;
}

/* ref: FUN_00a9f9e0 */
uint F_00a9f9e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xa9f9e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = F_00afe960(param_1 + 0x1b0,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00a9fa00 */
uint F_00a9fa00(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fa00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00afbbd0((undefined *)((int)this + 0x1b0),1);
  return uVar1;
}

/* ref: FUN_00a9fa20 */
byte F_00a9fa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9fa20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x5d2) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a9fa30 */
byte F_00a9fa30(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fa30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x5d1);
}

/* ref: FUN_00a9fa40 */
byte F_00a9fa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9fa40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x5d1) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a9fa50 */
uint F_00a9fa50(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xa9fa50u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = F_00af98d0(param_1 + 0x1b0,param_2,param_3,0,0,0,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00a9fa80 */
uint F_00a9fa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa9fa80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00af6450(param_1 + 0x1b0,param_2,param_3,param_4,param_5,param_6,0,REFG(float, 0x10e79e4),0,
                       param_7,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fad0 */
float10 F_00a9fad0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00ae6fc0(in_ecx + 0x1b0);
  return fVar1;
}

/* ref: FUN_00a9fae0 */
uint F_00a9fae0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00af67f0((undefined *)((int)this + 0x1b0));
  return uVar1;
}

/* ref: FUN_00a9faf0 */
ushort F_00a9faf0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9faf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  ushort uVar1;
  
  uVar1 = F_00ae7060(in_ecx + 0x1b0);
  return uVar1;
}

/* ref: FUN_00a9fb00 */
uint F_00a9fb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9fb00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ae7070(in_ecx + 0x1b0,param_2);
  return uVar1;
}

/* ref: FUN_00a9fb20 */
uint F_00a9fb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9fb20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(undefined * PTR32 *)((int)this + 0x2e00) != (undefined *)0x0)) {
    this = *(undefined * PTR32 *)((int)this + 0x2e00);
  }
  uVar1 = F_00a608f0(this,((undefined1 *)(gen_frame + 0x0)),param_2);
  *param_1 = *(undefined4 *)(uVar1 + 0x30);
  param_1[1] = *(undefined4 *)(uVar1 + 0x34);
  param_1[2] = *(undefined4 *)(uVar1 + 0x38);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_1;
}

/* ref: FUN_00a9fba0 */
uint F_00a9fba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9fba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aec030(this,param_1);
  return uVar1;
}

/* ref: FUN_00a9fbc0 */
uint F_00a9fbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fbc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ae70b0(in_ecx + 0x1b0);
  return uVar1;
}

/* ref: FUN_00a9fbd0 */
unsigned int F_00a9fbd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fbd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  F_00ae70d0(in_ecx + 0x1b0);
  return 0;
}

/* ref: FUN_00a9fbf0 */
uint F_00a9fbf0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fbf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00ae6970(in_ecx + 0x1b0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fc00 */
byte F_00a9fc00(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fc00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae8580(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fc10 */
uint F_00a9fc10(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fc10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00aebee0(in_ecx + 0x1b0);
  return uVar1;
}

/* ref: FUN_00a9fc30 */
uint F_00a9fc30(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fc30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00ae85f0(in_ecx + 0x1b0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fc40 */
byte F_00a9fc40(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fc40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00aebf40(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fc50 */
byte F_00a9fc50(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fc50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00aebfc0(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fc60 */
uint F_00a9fc60(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fc60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00ae87a0(in_ecx + 0x1b0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fc70 */
byte F_00a9fc70(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fc70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae87a0(in_ecx + 0x1b0);
  if ((bVar1 == 0) || (bVar1 = 1, *(int *)(in_ecx + 0x2f10) != 1)) {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00a9fca0 */
byte F_00a9fca0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae87c0(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fcc0 */
uint F_00a9fcc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fcc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00ae87f0(in_ecx + 0x1b0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fcd0 */
byte F_00a9fcd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fcd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae8810(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fce0 */
byte F_00a9fce0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae69a0(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fcf0 */
byte F_00a9fcf0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fcf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae8680(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fd00 */
byte F_00a9fd00(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fd00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae69b0(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fd10 */
uint F_00a9fd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9fd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00afdcb0((undefined *)((int)this + 0x1b0),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00a9fd20 */
unsigned int F_00a9fd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa9fd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined * this_00;
  uint uVar1;
  
  F_005481e0((undefined *)((int)this + 0x620),param_1,param_2,param_3);
  uVar1 = (uint)*(byte *)((int)this + 0x188);
  this_00 = (undefined *)F_006b8c00();
  F_006e2b30(this_00,param_1,param_2,param_3,uVar1);
  return 0;
}

/* ref: FUN_00a9fd60 */
byte F_00a9fd60(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((((*(char *)((int)this + 0x196) != '\x01') || (*(int *)((int)this + 0x198) != REFG(int, 0x1379690)))
      || (*(int *)((int)this + 0x19c) != 0)) &&
     (((*(char *)((int)this + 0x196) != '\x02' || (*(int *)((int)this + 0x198) != REFG(int, 0x1338ac0))) ||
      (*(int *)((int)this + 0x19c) != REFG(int, 0x1338ac4))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a9fdb0 */
byte F_00a9fdb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fdb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (((*(char *)((int)this + 0x196) != '\x01') ||
      ((*(int *)((int)this + 0x198) == REFG(int, 0x1379690) && (*(int *)((int)this + 0x19c) == 0)))) &&
     ((*(char *)((int)this + 0x196) != '\x02' ||
      ((*(int *)((int)this + 0x198) == REFG(int, 0x1338ac0) && (*(int *)((int)this + 0x19c) == REFG(int, 0x1338ac4))
       ))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a9fe00 */
ushort F_00a9fe00(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fe00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  
  uVar1 = 0xffff;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x1688))) {
  case 8: ;
  case 10: ;
  case 0xc: ;
    return 3;
  case 9: ;
    return (ushort)((*(byte *)((int)this + 0x2dd2) & 8 | 0x10) >> 3);
  case 0xb: ;
    return (ushort)(((byte)~*(byte *)((int)this + 0x2dd2) & 8 | 4) >> 2);
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
    uVar1 = (ushort)((*(byte *)((int)this + 0x2dd2) & 8 | 4) >> 2);
  }
  return uVar1;
}

/* ref: FUN_00a9fe80 */
uint F_00a9fe80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9fe80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 6;
  piVar2 = (int *)((int)this + 0x165c);
  do {
    if (*piVar2 == 0) {
      *(undefined4 *)((int)this + uVar1 * 4 + 0x1644) = param_1;
      if (this != (undefined *)0x0) {
        uVar1 = F_00983120(param_1,(int)this + 0x180);
        return uVar1;
      }
      uVar1 = F_00983120(param_1,0);
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar1 < 8);
  return uVar1;
}

/* ref: FUN_00a9ff10 */
byte F_00a9ff10(unsigned int gen_a0)
{
  GEN_ENTER(0xa9ff10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = 6;
  piVar2 = (int *)(in_ecx + 0x165c);
  do {
    if (*piVar2 == 0) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 8);
  return 0;
}

/* ref: FUN_00a9ff40 */
unsigned int F_00a9ff40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9ff40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  int iVar1;
  
  iVar1 = 3;
  if (param_1 != 0) {
    iVar1 = 4;
  }
  this_00 = *(undefined * PTR32 *)((int)this + iVar1 * 4 + 0x1644);
  if (this_00 != (undefined *)0x0) {
    if ((char)param_2 == '\0') {
      F_009bc5d0(this_00,0);
    }
    F_009bc530(*(undefined * PTR32 *)((int)this + iVar1 * 4 + 0x1644),1);
    F_00983120(*(undefined4 *)((int)this + iVar1 * 4 + 0x1644),0);
  }
  *(undefined4 *)((int)this + iVar1 * 4 + 0x1644) = 0;
  *(undefined1 *)(param_1 + 0x2dd6 + (int)this) = 0;
  return 0;
}

/* ref: FUN_00a9ffd0 */
byte F_00a9ffd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ffd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  int iVar2;
  
  if ((((char)param_2 != '\0') || (*(char *)(in_ecx + 0x2e08) == '\0')) ||
     (iVar2 = *(int *)(in_ecx + 0x2e00), *(int *)(in_ecx + 0x2e00) == 0)) {
    iVar2 = in_ecx;
  }
  bVar1 = F_005366b0(iVar2 + 0x680);
  return bVar1;
}

/* ref: FUN_00aa0000 */
uint F_00aa0000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xaa0000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * pvVar1;
  uint uVar2;
  
  if ((((char)param_5 != '\0') || (*(char *)((int)this + 0x2e08) == '\0')) ||
     (pvVar1 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar1 = this;
  }
  uVar2 = F_005486f0((undefined *)((int)pvVar1 + 0x940),param_1,param_2,param_3,param_4);
  return uVar2;
}

/* ref: FUN_00aa0040 */
uint F_00aa0040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaa0040u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  int iVar1;
  uint uVar2;
  
  if ((((char)param_8 != '\0') || (*(char *)(param_1 + 0x2e08) == '\0')) ||
     (iVar1 = *(int *)(param_1 + 0x2e00), *(int *)(param_1 + 0x2e00) == 0)) {
    iVar1 = param_1;
  }
  uVar2 = F_00549500(iVar1 + 0x680,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar2;
}

/* ref: FUN_00aa0090 */
uint F_00aa0090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  F_0053c1a0((undefined *)((int)this + 0x680),param_1,param_2);
  uVar2 = F_005393f0((int)this + 0x940);
  *(undefined1 *)((int)this + 0xa08) = 0;
  if ((*(char *)((int)this + 0x2e08) != '\0') && (uVar2 = 0, *(int *)((int)this + 0x2e00) != 0)) {
    F_0053c1a0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x680))),param_1,param_2);
    iVar1 = *(int *)((int)this + 0x2e00);
    uVar2 = F_005393f0(iVar1 + 0x940);
    *(undefined1 *)(iVar1 + 0xa08) = 0;
  }
  return uVar2;
}

/* ref: FUN_00aa0100 */
uint F_00aa0100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0053c1a0((undefined *)((int)this + 0x680),param_1,param_2);
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    uVar1 = F_0053c1a0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x680))),param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00aa0150 */
uint F_00aa0150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_0053c1a0((undefined *)((int)this + 0x680),0,param_2);
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    F_0053c1a0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x680))),0,param_2);
  }
  uVar1 = F_0053c1a0((undefined *)((int)this + 0x680),1,param_2);
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    uVar1 = F_0053c1a0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x680))),1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00aa01c0 */
unsigned int F_00aa01c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa01c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_005341f0((undefined *)((int)this + 0x620),param_1);
  return 0;
}

/* ref: FUN_00aa01d0 */
uint F_00aa01d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa01d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0053c230((undefined *)((int)this + 0x680),param_1,param_2);
  if (*(int *)((int)this + 0x2e00) != 0) {
    uVar1 = F_0053c230(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x680))),param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00aa0210 */
uint F_00aa0210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0210u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if ((((char)param_3 != '\0') || (*(char *)(in_ecx + 0x2e08) == '\0')) ||
     (iVar1 = *(int *)(in_ecx + 0x2e00), *(int *)(in_ecx + 0x2e00) == 0)) {
    iVar1 = in_ecx;
  }
  uVar2 = F_00531e00(iVar1 + 0x680,param_2);
  return uVar2;
}

/* ref: FUN_00aa0250 */
uint F_00aa0250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0250u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if ((((char)param_3 != '\0') || (*(char *)(in_ecx + 0x2e08) == '\0')) ||
     (iVar1 = *(int *)(in_ecx + 0x2e00), *(int *)(in_ecx + 0x2e00) == 0)) {
    iVar1 = in_ecx;
  }
  uVar2 = F_00531e20(iVar1 + 0x680,param_2);
  return uVar2;
}

/* ref: FUN_00aa0290 */
uint F_00aa0290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0290u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if ((((char)param_3 != '\0') || (*(char *)(in_ecx + 0x2e08) == '\0')) ||
     (iVar1 = *(int *)(in_ecx + 0x2e00), *(int *)(in_ecx + 0x2e00) == 0)) {
    iVar1 = in_ecx;
  }
  uVar2 = F_00531e40(iVar1 + 0x680,param_2);
  return uVar2;
}

/* ref: FUN_00aa02d0 */
uint F_00aa02d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa02d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  if ((((char)param_2 != '\0') || (*(char *)((int)this + 0x2e08) == '\0')) ||
     (pvVar1 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar1 = this;
  }
  uVar2 = F_00542ff0((undefined *)((int)pvVar1 + 0x680),param_1);
  return uVar2;
}

/* ref: FUN_00aa0310 */
uint F_00aa0310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  if ((((char)param_2 != '\0') || (*(char *)((int)this + 0x2e08) == '\0')) ||
     (pvVar1 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar1 = this;
  }
  uVar2 = F_0053c280((undefined *)((int)pvVar1 + 0x680),param_1);
  return uVar2;
}

/* ref: FUN_00aa0350 */
uint F_00aa0350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0350u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if ((((char)param_3 != '\0') || (*(char *)(in_ecx + 0x2e08) == '\0')) ||
     (iVar1 = *(int *)(in_ecx + 0x2e00), *(int *)(in_ecx + 0x2e00) == 0)) {
    iVar1 = in_ecx;
  }
  uVar2 = F_0053c3a0(iVar1 + 0x680,param_2);
  return uVar2;
}

/* ref: FUN_00aa0390 */
byte F_00aa0390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * pvVar2;
  
  if ((((char)param_2 != '\0') || (*(char *)((int)this + 0x2e08) == '\0')) ||
     (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar2 = this;
  }
  bVar1 = F_00536680((undefined *)((int)pvVar2 + 0x680),param_1);
  return bVar1;
}

/* ref: FUN_00aa03d0 */
unsigned int F_00aa03d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa03d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    return 0;
  }
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    return 0;
  }
  return 0;
}

/* ref: FUN_00aa0420 */
uint F_00aa0420(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaa0420u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  F_00531f10(param_1 + 0x680,param_2,param_3);
  uVar1 = *(uint *)(param_1 + 0x2e00);
  if ((uVar1 != 0) && (*(char *)(param_1 + 0x2e09) == '\0')) {
    uVar1 = F_00531f10(uVar1 + 0x680,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00aa0470 */
byte F_00aa0470(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if ((*(char *)(in_ecx + 0x2e08) == '\0') ||
     (iVar2 = *(int *)(in_ecx + 0x2e00), *(int *)(in_ecx + 0x2e00) == 0)) {
    iVar2 = in_ecx;
  }
  uVar3 = F_00531e00(iVar2 + 0x680,0);
  bVar1 = F_00ae8da0(in_ecx + 0x1b0,uVar3);
  if ((bVar1 != 0) &&
     (bVar4 = GEN_ISNAN(*(float *)(in_ecx + 0xc4)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
     bVar4 != (bVar4 || *(float *)(in_ecx + 0xc4) == *(float *)&REFG(undefined, 0x1088114)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aa04d0 */
unsigned int F_00aa04d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa04d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    return 0;
  }
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    return 0;
  }
  return 0;
}

/* ref: FUN_00aa0520 */
uint F_00aa0520(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa0520u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  if ((((char)param_4 != '\0') || (*(char *)(param_1 + 0x2e08) == '\0')) ||
     (iVar1 = *(int *)(param_1 + 0x2e00), *(int *)(param_1 + 0x2e00) == 0)) {
    iVar1 = param_1;
  }
  uVar2 = F_00531f50(iVar1 + 0x680,param_2,param_3);
  return uVar2;
}

/* ref: FUN_00aa0560 */
uint F_00aa0560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x514) = param_2;
  return param_2;
}

/* ref: FUN_00aa0570 */
uint F_00aa0570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x518) = param_2;
  return param_2;
}

/* ref: FUN_00aa0580 */
uint F_00aa0580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_1 == '\0') {
    uVar1 = F_00ae6e80((undefined *)((int)this + 0x1b0));
    return uVar1;
  }
  return 3;
}

/* ref: FUN_00aa05b0 */
uint F_00aa05b0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa05b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if (uVar1 == 3) {
    uVar1 = (uint)*(ushort *)((int)this + 0x2f00);
    *(uint *)((int)this + 0x514) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00aa05d0 */
uint F_00aa05d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa05d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  if ((((char)param_1 != '\0') || (*(char *)((int)this + 0x2e08) == '\0')) ||
     (pvVar1 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar1 = this;
  }
  uVar2 = F_00531fc0((undefined *)((int)pvVar1 + 0x680));
  return uVar2;
}

/* ref: FUN_00aa0600 */
uint F_00aa0600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  if ((((char)param_1 != '\0') || (*(char *)((int)this + 0x2e08) == '\0')) ||
     (pvVar1 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar1 = this;
  }
  uVar2 = F_00531fe0((undefined *)((int)pvVar1 + 0x680));
  return uVar2;
}

/* ref: FUN_00aa0630 */
uint F_00aa0630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    return *(uint *)((int)this + param_1 * 4 + 0x88c);
  }
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x88c + param_1 * 4)));
  }
  return *(uint *)((int)this + param_1 * 4 + 0x88c);
}

/* ref: FUN_00aa0680 */
uint F_00aa0680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    return *(uint *)((int)this + param_1 * 4 + 0x8fc);
  }
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x8fc + param_1 * 4)));
  }
  return *(uint *)((int)this + param_1 * 4 + 0x8fc);
}

/* ref: FUN_00aa06d0 */
byte F_00aa06d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa06d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00ae8890((undefined *)((int)this + 0x1b0),param_1,param_2);
  return bVar1;
}

/* ref: FUN_00aa06e0 */
byte F_00aa06e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa06e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae8da0(in_ecx + 0x1b0,param_2);
  return bVar1;
}

/* ref: FUN_00aa06f0 */
byte F_00aa06f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa06f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae8d00(in_ecx + 0x1b0,param_2);
  return bVar1;
}

/* ref: FUN_00aa0700 */
uint F_00aa0700(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)((int)this + 0x195) = 0;
  iVar2 = (int)this + 0x16c0;
  iVar3 = 3;
  do {
    uVar1 = 0;
    if (*(int *)(iVar2 + -0x10) != 0 || *(int *)(iVar2 + -0xc) != 0) {
      uVar1 = F_00b5c0c0(REFG(void * PTR32, 0x14c4e84),iVar2);
    }
    iVar2 = iVar2 + 0x7a0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_00aa0740 */
unsigned int F_00aa0740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00aa0750 */
unsigned int F_00aa0750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00aa0790 */
uint F_00aa0790(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005344c0(in_ecx + 0x940);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa07a0 */
uint F_00aa07a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa07a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0x95c) = param_2;
  return param_2;
}

/* ref: FUN_00aa07c0 */
byte F_00aa07c0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa07c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x9a0);
}

/* ref: FUN_00aa07d0 */
byte F_00aa07d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa07d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_005446c0((undefined *)((int)this + 0x940),param_1);
  return bVar1;
}

/* ref: FUN_00aa07e0 */
float F_00aa07e0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa07e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  code * pcVar5;
  undefined4 uVar6;
  int local_8;
  
  local_8 = 100;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))();
  if (uVar3 != 0) {
    uVar6 = 8;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    bVar1 = F_00b7aaa0(uVar3,uVar6);
    if (bVar1 != 0) {
      uVar6 = 0xe;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this)));
      uVar2 = F_00b7abd0(pvVar4,uVar6);
      local_8 = 100 - (short)uVar2;
    }
    uVar6 = 0x10;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    bVar1 = F_00b7aaa0(uVar3,uVar6);
    if (bVar1 != 0) {
      uVar6 = 0x43;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this)));
      uVar2 = F_00b7abd0(pvVar4,uVar6);
      local_8 = local_8 - (short)uVar2;
    }
    uVar6 = 0x200;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    bVar1 = F_00b7aaa0(uVar3,uVar6);
    if (bVar1 != 0) {
      uVar6 = 0xb5;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this)));
      uVar2 = F_00b7abd0(pvVar4,uVar6);
      local_8 = local_8 - (short)uVar2;
    }
    if (*(char *)((int)this + 0x2e08) == '\0') {
      uVar6 = 0x32;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this)));
      bVar1 = F_00b7aac0(pvVar4,uVar6);
      pcVar5 = *(gen_code32 *)(*(int *)this + 0xd4);
      if (bVar1 == 0) {
        uVar6 = 0x69;
        pvVar4 = ((undefined *)GEN_TOP((*pcVar5)(this)));
        bVar1 = F_00b7aac0(pvVar4,uVar6);
        pcVar5 = *(gen_code32 *)(*(int *)this + 0xd4);
        if (bVar1 == 0) {
          uVar6 = 0x85;
          pvVar4 = ((undefined *)GEN_TOP((*pcVar5)(this)));
          bVar1 = F_00b7aac0(pvVar4,uVar6);
          pcVar5 = *(gen_code32 *)(*(int *)this + 0xd4);
          if (bVar1 == 0) {
            uVar6 = 0x86;
            pvVar4 = ((undefined *)GEN_TOP((*pcVar5)(this)));
            bVar1 = F_00b7aac0(pvVar4,uVar6);
            if (bVar1 == 0) goto LAB_00aa094e;
            pcVar5 = *(gen_code32 *)(*(int *)this + 0xd4);
            uVar6 = 0x86;
          }
          else {
            uVar6 = 0x85;
          }
        }
        else {
          uVar6 = 0x69;
        }
      }
      else {
        uVar6 = 0x32;
      }
      pvVar4 = ((undefined *)GEN_TOP((*pcVar5)(this)));
      uVar2 = F_00b7abd0(pvVar4,uVar6);
      local_8 = local_8 + (short)uVar2;
    }
  }
LAB_00aa094e: ;
  if (REFG(int, 0x14a73b8) != 0) {
    local_8 = REFG(int, 0x14a73b8) * 100;
  }
  if (local_8 < 0) {
    local_8 = 0;
  }
  return (float)((float10)local_8 / (float10)*(double *)&REFG(undefined, 0x1088118));
}

/* ref: FUN_00aa0980 */
uint F_00aa0980(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0980u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  if (param_3 < 2) {
    *(float *)(in_ecx + 0x2ec0 + param_3 * 4) = param_2;
  }
  return param_3;
}

/* ref: FUN_00aa09c0 */
byte F_00aa09c0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa09c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))();
  if (uVar2 != 0) {
    pcVar3 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this)));
    if (*pcVar3 == '\x01') {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
      fVar1 = *(float *)(uVar2 + 0x34);
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
      if (!((float10)*(float *)(uVar2 + 0x38) <= (float10)fVar1)) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00aa0a20 */
unsigned int F_00aa0a20(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x1658) != (undefined *)0x0) {
    bVar1 = F_009bc4f0(*(undefined * PTR32 *)((int)this + 0x1658));
    if (bVar1 == 0) {
      F_009bc4a0(*(undefined * PTR32 *)((int)this + 0x1658));
    }
    else {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1658),1);
    }
    F_00983120(*(undefined4 *)((int)this + 0x1658),0);
    *(undefined4 *)((int)this + 0x1658) = 0;
  }
  return 0;
}

/* ref: FUN_00aa0a70 */
uint F_00aa0a70(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x1644) != (undefined *)0x0) {
    bVar1 = F_009bc4f0(*(undefined * PTR32 *)((int)this + 0x1644));
    if (bVar1 == 0) {
      F_009bc4a0(*(undefined * PTR32 *)((int)this + 0x1644));
    }
    else {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1644),1);
    }
    in_EAX = F_00983120(*(undefined4 *)((int)this + 0x1644),0);
    *(undefined4 *)((int)this + 0x1644) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x1648) != (undefined *)0x0) {
    bVar1 = F_009bc4f0(*(undefined * PTR32 *)((int)this + 0x1648));
    if (bVar1 == 0) {
      F_009bc4a0(*(undefined * PTR32 *)((int)this + 0x1648));
    }
    else {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1648),1);
    }
    in_EAX = F_00983120(*(undefined4 *)((int)this + 0x1648),0);
    *(undefined4 *)((int)this + 0x1648) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x1658) != (undefined *)0x0) {
    bVar1 = F_009bc4f0(*(undefined * PTR32 *)((int)this + 0x1658));
    if (bVar1 == 0) {
      F_009bc4a0(*(undefined * PTR32 *)((int)this + 0x1658));
    }
    else {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1658),1);
    }
    in_EAX = F_00983120(*(undefined4 *)((int)this + 0x1658),0);
    *(undefined4 *)((int)this + 0x1658) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00aa0b30 */
unsigned int F_00aa0b30(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x2ea9) != '\0') {
    F_00afed60((undefined *)((int)this + 0x1b0));
    if (*(int *)((int)this + 0x2e00) != 0) {
      F_00afed60(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x1b0))));
    }
    if (*(int *)((int)this + 0x2e04) != 0) {
      F_00afed60(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e04) + 0x1b0))));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00aa0b80 */
unsigned int F_00aa0b80(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x2ea9) != '\0') {
    F_00afb860((undefined *)((int)this + 0x1b0));
    if ((*(int *)((int)this + 0x2e00) != 0) &&
       ((*(char *)((int)this + 0x2e08) != '\0' || (*(char *)((int)this + 0x2e09) != '\0')))) {
      F_00afb860(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x1b0))));
    }
    if (*(int *)((int)this + 0x2e04) != 0) {
      F_00afb860(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e04) + 0x1b0))));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00aa0be0 */
unsigned int F_00aa0be0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x2ea9) != '\0') {
    F_00afec70((undefined *)((int)this + 0x1b0));
    if ((*(int *)((int)this + 0x2e00) != 0) &&
       ((*(char *)((int)this + 0x2e08) != '\0' || (*(char *)((int)this + 0x2e09) != '\0')))) {
      F_00afec70(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x1b0))));
    }
    if (*(int *)((int)this + 0x2e04) != 0) {
      F_00afec70(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e04) + 0x1b0))));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00aa0c40 */
unsigned int F_00aa0c40(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x2ea9) != '\0') {
    F_00afe3b0((undefined *)((int)this + 0x1b0));
    if ((*(int *)((int)this + 0x2e00) != 0) &&
       ((*(char *)((int)this + 0x2e08) != '\0' || (*(char *)((int)this + 0x2e09) != '\0')))) {
      F_00afe3b0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x1b0))));
    }
    if (*(int *)((int)this + 0x2e04) != 0) {
      F_00afe3b0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e04) + 0x1b0))));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00aa0ca0 */
unsigned int F_00aa0ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0ca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x18c) = 0;
  *(undefined1 *)(in_ecx + 0x18b) = 3;
  return 0;
}

/* ref: FUN_00aa0cc0 */
uint F_00aa0cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  int * piVar2;
  ushort uVar3;
  undefined4 in_EAX = 0;
  undefined3 uVar7;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 extraout_var = 0;
  int * piVar8;
  
  bVar1 = *(byte *)((int)this + 0x2dd4);
  uVar7 = (undefined3)((uint)in_EAX >> 8);
  uVar4 = CONCAT31(uVar7,bVar1);
  (*(undefined * PTR32 *)(gen_frame + 0x88)) = this;
  if ((bVar1 & 0x40) != 0) {
    if (*(char *)((int)this + 0x8a) != '\x03') {
      uVar4 = CONCAT31(uVar7,bVar1) & 0xffffffbf;
      *(char *)((int)this + 0x2dd4) = (char)uVar4;
      return uVar4;
    }
    if ((REFG(int, 0x1379694) != 0) &&
       (uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this), (char)uVar4 != '\0')) {
      uVar5 = F_00a5f3d0(this,((int *)(gen_frame + 0x0)));
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = 0;
        if (uVar5 != 0) {
          do {
            piVar8 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
            if ((piVar8 != (int *)0x0) &&
               (uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x1dc))(piVar8), (char)uVar6 == '\0')) {
              return uVar6;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar5);
        }
        uVar4 = 0;
        piVar8 = (int *)0x0;
        (*(uint *)(gen_frame + 0x84)) = 0;
        if (uVar5 != 0) {
          piVar8 = (int *)0x0;
          do {
            piVar2 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
            if (piVar2 != (int *)0x0) {
              uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0x1cc))(piVar2,(*(undefined * PTR32 *)(gen_frame + 0x88)));
              if (((ushort)uVar6 != 0) && ((ushort)(*(uint *)(gen_frame + 0x84)) < (ushort)uVar6)) {
                piVar8 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
                (*(uint *)(gen_frame + 0x84)) = uVar6 & 0xffff;
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar5);
        }
        uVar4 = 0;
        if (piVar8 != (int *)0x0) {
          uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0x1d8))(piVar8,(*(undefined * PTR32 *)(gen_frame + 0x88)));
          uVar4 = uVar4 & 0xffff;
        }
        this = (*(undefined * PTR32 *)(gen_frame + 0x88));
        if (*(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x135a) != (short)uVar4) {
          uVar3 = F_00b76c70((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x1340,uVar4);
          *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x2dd4) = *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x2dd4) & 0xbf;
          return CONCAT22(extraout_var,uVar3);
        }
      }
      *(byte *)((int)this + 0x2dd4) = *(byte *)((int)this + 0x2dd4) & 0xbf;
    }
  }
  return uVar4;
}

/* ref: FUN_00aa0df0 */
unsigned int F_00aa0df0(void)
{
  GEN_ENTER(0xaa0df0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00aa0e00 */
uint F_00aa0e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0x2e94);
  if (bVar1 < 0x20) {
    *(undefined4 *)((int)this + (uint)bVar1 * 4 + 0x2e14) = param_1;
    *(char *)((int)this + 0x2e94) = *(char *)((int)this + 0x2e94) + '\x01';
    return (uint)bVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00aa0e30 */
uint F_00aa0e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = 0;
  if (*(char *)((int)this + 0x2e94) != '\0') {
    puVar2 = (undefined4 *)((int)this + 0x2e14);
    do {
      *(undefined4 *)(param_1 + uVar1 * 4) = *puVar2;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 < *(byte *)((int)this + 0x2e94));
  }
  return (uint)*(byte *)((int)this + 0x2e94);
}

/* ref: FUN_00aa0e80 */
uint F_00aa0e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (*(byte *)((int)this + 0x2e94) != 0) {
    piVar2 = (int *)((int)this + 0x2e14);
    do {
      if (param_1 == *(int *)(*piVar2 + 8)) {
        return *(uint *)((int)this + uVar1 * 4 + 0x2e14);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(byte *)((int)this + 0x2e94));
  }
  return 0;
}

/* ref: FUN_00aa0ed0 */
byte F_00aa0ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00547df0((undefined *)((int)this + 0x620),param_1,param_2);
  return bVar1;
}

/* ref: FUN_00aa0ee0 */
uint F_00aa0ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa0ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00549f60((undefined *)((int)this + 0x620),param_1,param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0ef0 */
uint F_00aa0ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0ef0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00533ea0(in_ecx + 0x620);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0f00 */
uint F_00aa0f00(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00538e40((undefined *)((int)this + 0x620));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0f10 */
uint F_00aa0f10(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00538ef0((undefined *)((int)this + 0x620));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0f20 */
uint F_00aa0f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005390f0((undefined *)((int)this + 0x620),param_1);
  return uVar1;
}

/* ref: FUN_00aa0f30 */
byte F_00aa0f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00538fd0((undefined *)((int)this + 0x620),param_1);
  return bVar1;
}

/* ref: FUN_00aa0f40 */
byte F_00aa0f40(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00533ed0();
  return bVar1;
}

/* ref: FUN_00aa0f60 */
uint F_00aa0f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00548040((int)this + 0x620,param_1,1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0f80 */
uint F_00aa0f80(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0f80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00533f10(in_ecx + 0x620);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0f90 */
uint F_00aa0f90(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00533f10(in_ecx + 0x620);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0fa0 */
uint F_00aa0fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0fa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00533ec0(in_ecx + 0x620);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0fb0 */
uint F_00aa0fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa0fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00546350((undefined *)((int)this + 0xa10),param_1,param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0fc0 */
unsigned int F_00aa0fc0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaa0fc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  F_005416c0(param_1 + 0xa10,param_2,param_3);
  return 0;
}

/* ref: FUN_00aa0fe0 */
unsigned int F_00aa0fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00541880((undefined *)((int)this + 0xa10),param_1,param_2);
  return 0;
}

/* ref: FUN_00aa0ff0 */
uint F_00aa0ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005418f0((undefined *)((int)this + 0xa10),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00aa1020 */
uint F_00aa1020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa1020u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  F_00542100(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),(*(uint *)&gen_args[1]),-(uint)((*(uint *)&gen_args[2]) != 0xffffffff) & (*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]))
  ;
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00aa1050 */
uint F_00aa1050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa1050u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  F_0053b1b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),(*(uint *)&gen_args[1]),-(uint)((*(uint *)&gen_args[2]) != 0xffffffff) & (*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]))
  ;
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00aa1080 */
uint F_00aa1080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa1080u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  F_00542140(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),(*(uint *)&gen_args[1]),-(uint)((*(uint *)&gen_args[2]) != 0xffffffff) & (*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]))
  ;
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00aa10b0 */
uint F_00aa10b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa10b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00542180(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]))
  ;
  return uVar1;
}

/* ref: FUN_00aa10e0 */
uint F_00aa10e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa10e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00542230(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]))
  ;
  return uVar1;
}

/* ref: FUN_00aa1110 */
uint F_00aa1110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa1110u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_005422e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]))
  ;
  return uVar1;
}

/* ref: FUN_00aa1140 */
uint F_00aa1140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa1140u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00542320(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]))
  ;
  return uVar1;
}

/* ref: FUN_00aa1170 */
uint F_00aa1170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1170u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1])) * 0x300;
}

/* ref: FUN_00aa1190 */
uint F_00aa1190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1190u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1])) * 0x300;
}

/* ref: FUN_00aa11b0 */
uint F_00aa11b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa11b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1])) * 0x300;
}

/* ref: FUN_00aa11d0 */
uint F_00aa11d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa11d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_0053a4e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))));
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_0053a540(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00aa1210 */
uint F_00aa1210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1210u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_0053a4e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))));
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_0053a580(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00aa1250 */
uint F_00aa1250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1250u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_0053a4e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))));
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_0053a5c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00aa1290 */
uint F_00aa1290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1290u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_0053a4e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))));
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_0053a600(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00aa12d0 */
byte F_00aa12d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa12d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_0053a4e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))));
  if (uVar2 == 0) {
    return 0;
  }
  bVar1 = F_00535c20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]));
  return bVar1;
}

/* ref: FUN_00aa1310 */
byte F_00aa1310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_0053ad80((undefined *)((int)this + 0xa10),param_1);
  return bVar1;
}

/* ref: FUN_00aa1320 */
byte F_00aa1320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_0053ae10((undefined *)((int)this + 0xa10),param_1);
  return bVar1;
}

/* ref: FUN_00aa1330 */
byte F_00aa1330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00546640((undefined *)((int)this + 0xa10),param_1);
  return bVar1;
}

/* ref: FUN_00aa1340 */
byte F_00aa1340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_0053aeb0((undefined *)((int)this + 0xa10),param_1);
  return bVar1;
}

/* ref: FUN_00aa1350 */
byte F_00aa1350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_0053af40((undefined *)((int)this + 0xa10),param_1);
  return bVar1;
}

/* ref: FUN_00aa1360 */
uint F_00aa1360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1360u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *((uint *)GEN_TOP(((-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1])) * 0x300 + 0xa88 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
}

/* ref: FUN_00aa1380 */
uint F_00aa1380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1380u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00534990((-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1])) * 0x300 + 0xa30 + (int)(*(undefined * PTR32 *)&gen_args[0]));
  return uVar1;
}

/* ref: FUN_00aa13b0 */
uint F_00aa13b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa13b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00535a70((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10,-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00aa13d0 */
uint F_00aa13d0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa13d0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0053ac00(param_1 + 0xa10,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00aa13f0 */
uint F_00aa13f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa13f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005353f0((undefined *)((int)this + 0xa10),param_1);
  return uVar1;
}

/* ref: FUN_00aa1400 */
uint F_00aa1400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00535420((undefined *)((int)this + 0xa10),param_1);
  return uVar1;
}

/* ref: FUN_00aa1410 */
uint F_00aa1410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0053a640((undefined *)((int)this + 0xa10),param_1);
  return uVar1;
}

/* ref: FUN_00aa1420 */
unsigned int F_00aa1420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1420u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_0054ad20((undefined *)(param_1 + 0xa10),param_2);
  }
  return 0;
}

/* ref: FUN_00aa1440 */
unsigned int F_00aa1440(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 != 0) {
    F_00548ff0((undefined *)(param_1 + 0xa10));
    return 0;
  }
  return 0;
}

/* ref: FUN_00aa1460 */
uint F_00aa1460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2dfc) = param_2;
  return param_2;
}

/* ref: FUN_00aa1470 */
uint F_00aa1470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  if (*(char *)((int)this + 0x2e09) != (char)param_1) {
    *(char *)((int)this + 0x2e09) = (char)param_1;
    uVar1 = F_00a35790(&REFG(undefined, 0x14a31e0),this);
  }
  return uVar1;
}

/* ref: FUN_00aa14a0 */
uint F_00aa14a0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa14a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x2e04) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x2e04) + 0x80)));
  }
  return 0;
}

/* ref: FUN_00aa14c0 */
ushort F_00aa14c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa14c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x2e0c) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00aa14e0 */
uint F_00aa14e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa14e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x2e04);
  uVar2 = 0;
  *(undefined2 *)((int)this + 0x2e0c) = 0;
  if (piVar1 != (int *)0x0) {
    if ((char)param_1 != '\0') {
      *(short *)((int)this + 0x2e0c) = (short)piVar1[0x20];
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e04) + 0xb4))))(*(int * PTR32 *)((int)this + 0x2e04),0);
    *(undefined4 *)((int)this + 0x2e04) = 0;
    uVar2 = F_00a35790(&REFG(undefined, 0x14a31e0),this);
  }
  return uVar2;
}

/* ref: FUN_00aa1550 */
unsigned int F_00aa1550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (REFG(void * PTR32, 0x1379694) == this) {
    F_00a6a960(param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00aa1570 */
uint F_00aa1570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa1570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  if ((byte)param_1 < 0x1a) {
    this_00 = *(int * PTR32 *)((int)this + 0xec);
    if (this_00 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*this_00 + 200))(this_00);
      if (uVar2 == 1) {
        uVar3 = (uint)(byte)param_1;
        uVar2 = 0;
        if (*(char *)(uVar3 + 0x2db8 + (int)this) != (char)param_2) {
          F_0068e790(((char *)(gen_frame + 0x0)));
          F_00c48350(((char *)(gen_frame + 0x0)),0,0x48);
          uVar2 = 0;
          do {
            if (uVar2 == uVar3) {
              ((char *)(gen_frame + 0x0))[(int)(uVar2)] = (char)param_2;
            }
            else {
              ((char *)(gen_frame + 0x0))[(int)(uVar2)] = *(char *)((int)this + uVar2 + 0x2db8);
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < 0x1a);
          bVar1 = F_006a9a90(this_00,((char *)(gen_frame + 0x0)),1);
          uVar2 = CONCAT31(extraout_var,bVar1);
          if (bVar1 == 0) {
            F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
            return uVar2;
          }
          *(char *)(uVar3 + 0x2db8 + (int)this) = (char)param_2;
        }
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00aa1660 */
float F_00aa1660(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab2930(*(undefined4 *)((int)this + 0x2e9c));
  if (uVar1 != 0) {
    return *(float *)(uVar1 + 0x10);
  }
  return REFG(float, 0x1087ef8);
}

/* ref: FUN_00aa1680 */
float F_00aa1680(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab2930(*(undefined4 *)((int)this + 0x2e9c));
  if (uVar1 != 0) {
    return *(float *)(uVar1 + 0x14);
  }
  return REFG(float, 0x1087ef8);
}

/* ref: FUN_00aa16a0 */
uint F_00aa16a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa16a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(void * PTR32, 0x1379694) == this) && ((char)param_1 == '\x01')) {
    F_00af2090();
  }
  uVar1 = F_00a5ff20(this,param_1);
  return uVar1;
}

/* ref: FUN_00aa16d0 */
unsigned int F_00aa16d0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa16d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(char *)(in_ecx + 0x9a0) == '\0') {
    bVar1 = F_00ae8580(in_ecx + 0x1b0);
    if (bVar1 == 0) {
      *(undefined4 *)(in_ecx + 0x20) = *(undefined4 *)(in_ecx + 0xb0);
    }
  }
  return 0;
}

/* ref: FUN_00aa1700 */
unsigned int F_00aa1700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa1700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b784f0((int)this + 0x1340,this,param_1,param_2);
  return 0;
}

/* ref: FUN_00aa1720 */
uint F_00aa1720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1720u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  if ((char)(*(uint *)&gen_args[1]) != '\0') {
    (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2dc4)))) & 0xffffff7f;
    uVar1 = F_00aa1570((*(undefined * PTR32 *)&gen_args[0]),0xc,(*(uint *)&gen_args[1]));
    return uVar1;
  }
  (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2dc4)))) | 0x80;
  uVar1 = F_00aa1570((*(undefined * PTR32 *)&gen_args[0]),0xc,(*(uint *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00aa1760 */
uint F_00aa1760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x2ed4) = param_1;
  this_00 = (undefined *)F_006b8c00();
  uVar1 = F_006e3480(this_00,this,param_1);
  return uVar1;
}

/* ref: FUN_00aa1780 */
unsigned int F_00aa1780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 0x14c4) == param_1) {
    *(undefined4 *)((int)this + 0x14c4) = 0;
  }
  if (*(int *)((int)this + 0x14c8) == param_1) {
    *(undefined4 *)((int)this + 0x14c8) = 0;
  }
  if (*(int *)((int)this + 0x14cc) == param_1) {
    *(undefined4 *)((int)this + 0x14cc) = 0;
  }
  if (*(int *)((int)this + 0x14d0) == param_1) {
    *(undefined4 *)((int)this + 0x14d0) = 0;
  }
  if (*(int *)((int)this + 0x14d4) == param_1) {
    *(undefined4 *)((int)this + 0x14d4) = 0;
  }
  if (*(int *)((int)this + 0x14d8) == param_1) {
    *(undefined4 *)((int)this + 0x14d8) = 0;
  }
  if (*(int *)((int)this + 0x14dc) == param_1) {
    *(undefined4 *)((int)this + 0x14dc) = 0;
  }
  if (*(int *)((int)this + 0x14e0) == param_1) {
    *(undefined4 *)((int)this + 0x14e0) = 0;
  }
  return 0;
}

/* ref: FUN_00aa1800 */
byte F_00aa1800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00ab22c0((uint)*(byte *)((int)this + 0x2ecf));
    if ((uVar1 != 0) && (*(byte *)(param_1 + 0x2ecf) < 0xc)) {
      return *((byte *)GEN_TOP((*(byte *)(param_1 + 0x2ecf) + uVar1)));
    }
  }
  return 0;
}

/* ref: FUN_00aa1840 */
ulonglong F_00aa1840(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  if (REFG(void * PTR32, 0x1379694) == this) {
    uVar1 = F_00538780(&REFG(undefined4, 0x1375bc0));
    return uVar1;
  }
  return *(ulonglong *)((int)this + 0x1a0);
}

/* ref: FUN_00aa1860 */
uint F_00aa1860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa1860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ae0810(&REFG(undefined, 0x1336e40),*(undefined4 *)((int)this + 0x74));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    *(undefined4 *)((int)this + 0x1690) = param_2;
    if (uVar1 != 0) {
      *(undefined4 *)(uVar1 + 0x58) = param_2;
      return uVar1;
    }
    break;
  case 3: ;
    *(undefined4 *)((int)this + 0x1698) = param_2;
    if (uVar1 != 0) {
      *(undefined2 *)(uVar1 + 0x60) = (undefined2)param_2;
      return uVar1;
    }
    break;
  case 5: ;
    *(undefined2 *)((int)this + 0x16a0) = (undefined2)param_2;
    if (uVar1 != 0) {
      *(undefined2 *)(uVar1 + 100) = (undefined2)param_2;
      return uVar1;
    }
    break;
  case 7: ;
    *(undefined2 *)((int)this + 0x16a2) = (undefined2)param_2;
    return CONCAT22((short)(uVar1 >> 0x10),(undefined2)param_2);
  case 8: ;
    *(undefined2 *)((int)this + 0x16a6) = (undefined2)param_2;
  }
  return uVar1;
}

/* ref: FUN_00aa1910 */
ushort F_00aa1910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x2efc) = 1;
  *(ushort *)(in_ecx + 0x2efe) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00aa1930 */
ushort F_00aa1930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1930u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x2f00) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00aa1950 */
uint F_00aa1950(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  if ((char)uVar1 != '\0') {
    return uVar1;
  }
  if ((*(char *)((int)this + 0x8a) == '\x03') &&
     (uVar1 = F_00ab2410(*(undefined4 *)((int)this + 0x80)), uVar1 == 0)) {
    return 0;
  }
  F_00a5f950(this);
  return uVar1;
}

/* ref: FUN_00aa19d0 */
byte F_00aa19d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa19d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (REFG(void * PTR32, 0x1379694) == this) {
    iVar1 = 0;
  }
  else if ((*(byte *)((int)this + 0x2dd2) & 0x10) == 0) {
    uVar2 = F_00a62220(this);
    iVar1 = 3 - (uint)((uVar2 & 0xff) != 0);
  }
  else {
    iVar1 = 1;
  }
  if ((char)param_2 == '\0') {
    if ((&REFG(undefined1, 0x14b4f54))[iVar1] == '\0') {
      return 1;
    }
  }
  else if ((&REFG(undefined1, 0x14b4f54))[iVar1] != '\x02') {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aa1a30 */
uint F_00aa1a30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaa1a30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_00af20c0(param_1 + 0x1b0,param_2);
  return uVar1;
}

/* ref: FUN_00aa1a50 */
uint F_00aa1a50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaa1a50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_EAX = 0;
  
  F_00ae9200(in_ecx + 0x1b0,param_2);
  return in_EAX;
}

/* ref: FUN_00aa1a70 */
uint F_00aa1a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa1a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ulonglong uVar1;
  
  uVar1 = F_007c9d00(this);
  if ((char)param_2 == '\0') {
    *param_1 = (uint)(uVar1 >> 0x20) & 0xffffff;
    return (uint)param_1;
  }
  *param_1 = (uint)uVar1 & 0xffffff;
  return (uint)param_1;
}

/* ref: FUN_00aa1ab0 */
uint F_00aa1ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(char *)((int)this + 0x2f04) == '\x03') {
    F_00a60a40(this,param_1,0x1c);
    return param_1;
  }
  F_00a60a40(this,param_1,0x2e);
  return param_1;
}

/* ref: FUN_00aa1ae0 */
uint F_00aa1ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (((byte)param_1 & 0x80) != 0x80) {
    *(byte *)((int)this + 0x168a) = (byte)param_1;
  }
  return param_1;
}

/* ref: FUN_00aa1b00 */
uint F_00aa1b00(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_00541850((undefined *)((int)this + 0xa10));
  bVar1 = F_00ae70f0((int)this + 0x1b0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa1b20 */
uint F_00aa1b20(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x80) == 0x372) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this);
    uVar1 = F_00463610(0,uVar2,uVar1);
    return uVar1;
  }
  return (int)this + 0x30;
}

/* ref: FUN_00aa1b60 */
uint F_00aa1b60(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xaa1b60u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a61850(param_1,param_2,param_3,param_4);
  if ((*(int *)(param_1 + 0x2e00) != 0) && (*(char *)(param_1 + 0x2e08) != '\0')) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x2e00) + 0x40))))(*(int * PTR32 *)(param_1 + 0x2e00));
  }
  if ((*(byte *)(param_1 + 0x2dd2) & 0x10) != 0) {
    uVar1 = F_00ae0810(&REFG(undefined, 0x1336e40),*(undefined4 *)(param_1 + 0x74));
    if (uVar1 != 0) {
      *(undefined1 *)(uVar1 + 0x1e0) = 1;
      *(float *)(uVar1 + 0x1f0) = param_2;
      *(float *)(uVar1 + 500) = param_3;
      *(float *)(uVar1 + 0x1f8) = param_4;
    }
  }
  return uVar1;
}

/* ref: FUN_00aa1c10 */
uint F_00aa1c10(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  code * pcVar6;
  undefined4 uVar7;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    if (*(int *)((int)this + 0x1684) != 0) {
      piVar1 = *(int * PTR32 *)((int)this + 0xec);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x168))(piVar1,0);
      }
      piVar1 = (int *)((int)this + 0x1e60);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x168))(piVar1,0);
      }
      uVar7 = *(undefined4 *)((int)this + 0x1684);
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      F_008aad20(pvVar3,uVar7);
      *(undefined4 *)((int)this + 0x1684) = 0;
    }
    uVar4 = *(uint *)((int)this + 0x1678);
    uVar5 = *(uint *)((int)this + 0x167c);
    if ((uVar4 & uVar5) != 0xffffffff) {
      pcVar6 = ((code *)REFP(0xa9f2a0));
      pvVar3 = this;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      uVar4 = F_008aac80(this_00,uVar4,uVar5,pcVar6,pvVar3);
      *(uint *)((int)this + 0x1684) = uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_00aa1cc0 */
uint F_00aa1cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa1cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if ((*(uint *)((int)this + 0x1678) != param_1) || (*(int *)((int)this + 0x167c) != param_2)) {
    *(uint *)((int)this + 0x1678) = param_1;
    *(int *)((int)this + 0x167c) = param_2;
    if ((*(int *)((int)this + 0xec) != 0) && (*(char *)((int)this + 0x1680) != '\0')) {
      uVar1 = F_00aa1c10(this);
    }
  }
  return uVar1;
}

/* ref: FUN_00aa1d10 */
uint F_00aa1d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(char *)((int)this + 0x1680) = (char)param_1;
  if ((*(int *)((int)this + 0x1684) == 0) && ((char)param_1 != '\0')) {
    uVar1 = F_00aa1c10(this);
    return uVar1;
  }
  uVar1 = F_00a9f170(this);
  return uVar1;
}

/* ref: FUN_00aa1d40 */
byte F_00aa1d40(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  undefined4 * puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  ulonglong uVar5;
  float local_8;
  
  puVar2 = REFG(undefined4 * PTR32, 0x1379694);
  if (REFG(undefined4 * PTR32, 0x1379694) == (undefined4 *)0x0) {
    return 0xd;
  }
  if ((REFG(undefined4 * PTR32, 0x1379694) == this) || ((*(byte *)((int)this + 0x2dd4) & 0x20) != 0)) {
    return 1;
  }
  local_8 = F_00a60140(REFG(undefined4 * PTR32, 0x1379694),this);
  if ((float10)local_8 < (float10)0) {
    local_8 = 0.0;
  }
  if ((double)local_8 < *(double *)&REFG(undefined, 0x10e8718)) {
    uVar3 = (undefined1)(int)local_8;
  }
  else {
    uVar3 = 0xfa;
  }
  bVar1 = local_8 <= REFG(float, 0x1094880);
  *(undefined1 *)((int)this + 0x8d) = uVar3;
  *(byte *)((int)this + 0x90) =
       *(byte *)((int)this + 0x90) ^ (bVar1 * '\x02' ^ *(byte *)((int)this + 0x90)) & 2;
  uVar4 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this);
  uVar5 = F_00533b60(&REFG(undefined4, 0x1375bc0));
  if (uVar5 != CONCAT44(extraout_EDX,uVar4)) {
    uVar4 = ((code *)*(gen_code32 *)*puVar2)(puVar2);
    uVar5 = F_00aa1840(this);
    if (uVar5 != CONCAT44(extraout_EDX_00,uVar4)) {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
      if ((uVar4 == 2) && ((*(byte *)((int)this + 0x2dd2) & 1) != 0)) {
        if ((*(byte *)((int)puVar2 + 0x2dd2) & 2) == 0) {
          if (local_8 <= REFG(float, 0x10a0d00)) {
            return 3;
          }
          return 7;
        }
        if (local_8 <= REFG(float, 0x10a0d00)) {
          return 3;
        }
        return 5;
      }
      if (((*(int *)((int)this + 0x118) != 0) || ((*(byte *)((int)this + 0x2dd3) & 1) != 0)) ||
         ((*(byte *)((int)this + 0x2dd2) & 0x10) != 0)) {
        if ((*(byte *)((int)puVar2 + 0x2dd2) & 2) == 0) {
          if (!((double)local_8 <= *(double *)&REFG(undefined, 0x1090718))) {
            return 7;
          }
        }
        else if (!((double)local_8 <= *(double *)&REFG(undefined, 0x1090718))) {
          return 5;
        }
        return 3;
      }
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
      if ((uVar4 == 3) && ((*(byte *)((int)this + 0x2dd2) & 0x80) == 0)) {
        if ((*(byte *)((int)puVar2 + 0x2dd2) & 2) != 0) {
          if ((double)local_8 <= *(double *)&REFG(undefined, 0x1090718)) {
            return 6;
          }
          return 7;
        }
        if (local_8 <= REFG(float, 0x10a0d00)) {
          return 4;
        }
        if ((double)local_8 <= *(double *)&REFG(undefined, 0x1090718)) {
          return 8;
        }
        return 9;
      }
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
      if ((uVar4 != 2) && (uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this), uVar4 != 1)) {
        if ((*(byte *)((int)puVar2 + 0x2dd2) & 2) != 0) {
          if ((double)local_8 <= *(double *)&REFG(undefined, 0x1090718)) {
            return 6;
          }
          return 9;
        }
        if (local_8 <= REFG(float, 0x10a0d00)) {
          return 4;
        }
        if ((double)local_8 <= *(double *)&REFG(undefined, 0x1090718)) {
          return 8;
        }
        return 10;
      }
      if ((*(byte *)((int)puVar2 + 0x2dd2) & 2) != 0) {
        if (local_8 <= REFG(float, 0x10a0d00)) {
          return 5;
        }
        if ((double)local_8 <= *(double *)&REFG(undefined, 0x1090718)) {
          return 6;
        }
        return 8;
      }
      if (local_8 <= REFG(float, 0x10a0d00)) {
        return 4;
      }
      if (!((double)local_8 <= *(double *)&REFG(undefined, 0x1090718))) {
        return 10;
      }
      return 8;
    }
  }
  if ((*(byte *)((int)puVar2 + 0x2dd2) & 2) == 0) {
    if ((double)local_8 <= *(double *)&REFG(undefined, 0x1090718)) {
      return 2;
    }
    return 5;
  }
  if (!((double)local_8 <= *(double *)&REFG(undefined, 0x1090718))) {
    return 4;
  }
  return 2;
}

/* ref: Client::Game::Character::BattleChara::vf13 */
uint F_00aa2030(unsigned int gen_a0)
{
  GEN_ENTER(0xaa2030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined1 BVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined * pBVar6;
  int local_8;
  
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 4))();
  if (uVar4 != 8) {
    BVar2 = (undefined1)F_00aa1d40(this);
    piVar1 = *(int * PTR32 *)(this + 0xec);
    uVar5 = (uint)(byte)BVar2;
    this[0x8c] = BVar2;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1,uVar5);
    }
    pBVar6 = this + 0x16c0;
    local_8 = 3;
    do {
      ((code *)*(gen_code32 *)(*(int *)pBVar6 + 0x70))(pBVar6,uVar5);
      pBVar6 = pBVar6 + 0x7a0;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*(int *)(this + 0x2e00) != 0) {
      *((undefined *)GEN_TOP((*(int *)(this + 0x2e00) + 0x8c))) = BVar2;
      if ((double)(byte)this[0x8d] < *(double *)&REFG(undefined, 0x10e8718)) {
        uVar3 = (undefined1)(int)(float)(byte)this[0x8d];
      }
      else {
        uVar3 = 0xfa;
      }
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x2e00) + 0x8d))) = uVar3;
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x2e00) + 0xec)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1,uVar5);
      }
    }
    uVar4 = 0;
    if (*(int *)(this + 0x2e04) != 0) {
      *((undefined *)GEN_TOP((*(int *)(this + 0x2e04) + 0x8c))) = BVar2;
      if ((double)(byte)this[0x8d] < *(double *)&REFG(undefined, 0x10e8718)) {
        uVar3 = (undefined1)(int)(float)(byte)this[0x8d];
      }
      else {
        uVar3 = 0xfa;
      }
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x2e04) + 0x8d))) = uVar3;
      uVar4 = *(uint *)(this + 0x2e04);
      piVar1 = *(int * PTR32 *)(uVar4 + 0xec);
      if (piVar1 != (int *)0x0) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1,uVar5);
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00aa2160 */
unsigned int F_00aa2160(unsigned int gen_a0)
{
  GEN_ENTER(0xaa2160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  code * pcVar3;
  
  if (*(int *)((int)this + 0x2e00) != 0) {
    if ((REFG(void * PTR32, 0x1379694) == this) && (*(char *)((int)this + 0x2e08) != '\0')) {
      pcVar3 = *(gen_code32 *)(*(int *)this + 0x9c);
    }
    else {
      pcVar3 = *(gen_code32 *)(*(int *)this + 0xa0);
    }
    uVar2 = (*pcVar3)(this);
    piVar1 = *(int * PTR32 *)((int)this + 0x2e00);
    if ((char)uVar2 == '\x01') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x10,0);
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x10,0);
  }
  return 0;
}

/* ref: FUN_00aa21b0 */
uint F_00aa21b0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa21b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if ((uVar2 == 8) && (uVar2 = *(ushort *)((int)this + 0x88) - 1, uVar2 < 200)) {
    if ((uVar2 < 0x158) && (piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar2])), piVar1 != (int *)0x0)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x98))(piVar1);
      if ((char)uVar2 != '\0') {
        return 1;
      }
    }
    return 0;
  }
  return (uint)((*(uint *)((int)this + 0x11c) & 0xfffffff7) == 0);
}

/* ref: FUN_00aa2210 */
unsigned int F_00aa2210(unsigned int gen_a0)
{
  GEN_ENTER(0xaa2210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xec);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00694320((undefined *)((int)this + 0x1e60));
    uVar2 = F_00694320((undefined *)((int)this + 0x16c0));
    F_006abe30(this_00,uVar2,uVar1);
    if (REFG(void * PTR32, 0x1379694) == this) {
      F_00b5a0c0(REFG(void * PTR32, 0x14c4e78),1);
    }
  }
  return 0;
}

/* ref: FUN_00aa2260 */
uint F_00aa2260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa2260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * pvVar2;
  int * piVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  uVar1 = F_00ab2960(*(undefined4 *)((int)this + 0x2e98));
  pvVar2 = param_2;
  if ((((uVar1 != 0) && (*(char *)(uVar1 + 4) == '\x01')) && (param_2 == (undefined *)0x0)) &&
     (param_1 == 2)) {
    pvVar2 = (undefined *)0x1;
  }
  if (*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x2d90) != pvVar2) {
    *(undefined * PTR32 *)((int)this + param_1 * 4 + 0x2d90) = pvVar2;
    if ((9 < param_1) || (((*(byte *)((int)this + 0x2dd3) & 0x20) != 0 && (param_1 == 0)))) {
      pvVar2 = (undefined *)0x0;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
    uVar1 = F_00a5f500(this);
    pvVar2 = (undefined *)0x0;
    if (uVar1 != 0) {
      piVar3 = (int *)F_00a5f500(this);
      pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xfc))(piVar3,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)))));
    }
  }
  return (uint)pvVar2;
}

/* ref: FUN_00aa22f0 */
unsigned int F_00aa22f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaa22f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[1])REFP(0x10e8724));
  (*(undefined1 *)(gen_frame + 0x8)) = 1;
  F_00aebea0(in_ecx + 0x1b0,param_2,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_00aa23a0 */
uint F_00aa23a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xaa23a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if ((param_6 == 0) && (REFG(int, 0x1379694) == param_1)) {
    bVar1 = F_00ae87a0(param_1 + 0x1b0);
    if ((bVar1 != 0) && (*(int *)(param_1 + 0x2f10) == 1)) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  *(int *)(param_1 + 0x2f10) = param_6;
  uVar2 = F_00afd9f0(param_1 + 0x1b0,param_2,(undefined4)gen_fl2bits(param_3),param_4,param_5);
  return uVar2;
}

/* ref: FUN_00aa2400 */
uint F_00aa2400(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xaa2400u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  byte bVar3;
  float * pfVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  float10 fVar6;
  
  fVar6 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar1 = (float)fVar6;
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar6 = ((float10)GEN_TOD(fcos((float10)param_2)));
  fVar2 = (float)fVar6;
  (*(float *)(gen_frame + 0x3c)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar6 = (float10)param_3;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar6 * (float10)fVar1);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)*(double *)&REFG(undefined, 0x108bec8) * fVar6);
  (*(float *)(gen_frame + 0x28)) = (float)(fVar6 * (float10)fVar2);
  pfVar4 = (float *)F_00a5feb0(param_1);
  (*(float *)(gen_frame + 0x3c)) = gen_bits2f(*(undefined4 *)((int)param_1 + 0xb0));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar4 + (float10)(*(float *)(gen_frame + 0x20)));
  fVar1 = pfVar4[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x24)));
  fVar2 = pfVar4[2];
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar4 + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x28)));
  if ((param_6 == 0) && (REFG(void * PTR32, 0x1379694) == param_1)) {
    bVar3 = F_00ae87a0((int)param_1 + 0x1b0);
    if ((bVar3 != 0) && (*(int *)((int)param_1 + 0x2f10) == 1)) {
      return CONCAT31(extraout_var,bVar3);
    }
  }
  *(int *)((int)param_1 + 0x2f10) = param_6;
  uVar5 = F_00afd9f0((int)param_1 + 0x1b0,&(*(float *)(gen_frame + 0x0)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c))),param_4,
                       param_5);
  return uVar5;
}

/* ref: FUN_00aa2500 */
uint F_00aa2500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa2500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  
  uVar1 = F_00ab2a20(param_1);
  uVar3 = 0;
  if (uVar1 != 0) {
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar2 = this;
    }
    uVar3 = F_00531e20((int)pvVar2 + 0x680,(uint)*(byte *)(uVar1 + 7));
    if (uVar3 == param_1) {
      *(undefined1 *)((int)this + 0x2f14) = 1;
      *(uint *)((int)this + 0x2f18) = param_1;
    }
  }
  return uVar3;
}

/* ref: FUN_00aa2560 */
uint F_00aa2560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa2560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = F_00ab1fc0(param_1);
  uVar4 = 0;
  if (uVar1 != 0) {
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar2 = this;
    }
    F_00549500((int)pvVar2 + 0x680,0,(uint)*(ushort *)(uVar1 + 6),(uint)*(ushort *)(uVar1 + 8),
                 (uint)*(ushort *)(uVar1 + 10),(float)*(byte *)(uVar1 + 0xc),0);
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar7 = 0;
      fVar5 = (float)*(byte *)(uVar1 + 0xc);
      uVar6 = 4;
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
      uVar4 = F_00ac3dd0(uVar4,uVar6,param_1,fVar5,param_2,param_3,uVar7);
    }
  }
  return uVar4;
}

/* ref: FUN_00aa2620 */
uint F_00aa2620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa2620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x280];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char * pcVar6;
  
  (*(uint *)(gen_frame + 0x26c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x270);
  F_00990c20(((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00a9fe00(this);
  uVar2 = (uint)uVar1;
  iVar4 = -1;
  uVar3 = (byte)param_1 - 2;
  switch((unsigned int)(uintptr_t)((byte)param_1 - 2)) {
  case 0: ;
    pcVar6 = "vfx/live/craft/eff/cft_base000.avfx";
    goto LAB_00aa2684;
  case 1: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_base001.avfx");
    iVar4 = 3;
    break;
  case 2: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_base002.avfx");
    iVar4 = 3;
    break;
  case 3: ;
    pcVar6 = "vfx/live/craft/eff/cft_base003.avfx";
LAB_00aa2684: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,pcVar6);
    iVar4 = 3;
    break;
  case 4: ;
    pcVar6 = "vfx/live/craft/eff/cft_ele_f3.avfx";
    goto LAB_00aa26eb;
  case 5: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_ele_i3.avfx");
    iVar4 = 4;
    break;
  case 6: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_ele_w3.avfx");
    iVar4 = 4;
    break;
  case 7: ;
    pcVar6 = "vfx/live/craft/eff/cft_ele_e3.avfx";
LAB_00aa26eb: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,pcVar6);
    iVar4 = 4;
    break;
  case 8: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_ele_t3.avfx");
    iVar4 = 4;
    break;
  case 9: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_ele_a3.avfx");
    iVar4 = 4;
    break;
  case 10: ;
    pcVar6 = "vfx/live/craft/eff/cft_endng0.avfx";
    goto LAB_00aa27bb;
  case 0xb: ;
    pcVar6 = "vfx/live/craft/eff/cft_endnq0.avfx";
    goto LAB_00aa27bb;
  case 0xc: ;
    pcVar6 = "vfx/live/craft/eff/cft_endhq0.avfx";
LAB_00aa27bb: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,pcVar6);
    break;
  default: ;
    goto switchD_00aa2678_default;
  }
  if (-1 < (short)uVar1) {
    F_00990c50(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)((int)this + 0x88),0xffffffff,uVar2);
  }
  if (iVar4 == -1) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
    if ((char)uVar3 != '\0') {
      uVar3 = F_009cfc30(((char *)(gen_frame + 0x168)),((undefined1 *)(gen_frame + 0x0)),2,0);
    }
    goto switchD_00aa2678_default;
  }
  if (uVar1 == 1) {
    bVar5 = *(char *)((int)this + 0x1725) == '\x03';
LAB_00aa281d: ;
    uVar2 = (uint)CONCAT11((char)(uVar1 >> 8),bVar5);
    if (bVar5 != false) {
      uVar3 = F_009cfc30(((char *)(gen_frame + 0x168)),((undefined1 *)(gen_frame + 0x0)),2,0);
      *(uint *)((int)this + iVar4 * 4 + 0x1644) = uVar3;
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = F_00983120(uVar3,(int)this + 0x180);
      }
    }
  }
  else {
    if (uVar1 == 2) {
      bVar5 = *(char *)((int)this + 0x1ec5) == '\x03';
      goto LAB_00aa281d;
    }
    if (uVar1 == 3) {
      bVar5 = *(char *)((int)this + 0x2665) == '\x03';
      goto LAB_00aa281d;
    }
  }
  if (iVar4 == 3) {
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(byte)param_1);
    *(byte *)((int)this + 0x2dd6) = (byte)param_1;
  }
  else {
    uVar3 = uVar2;
    if (iVar4 == 4) {
      *(byte *)((int)this + 0x2dd7) = (byte)param_1;
    }
  }
switchD_00aa2678_default: ;
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x26c)) ^ (uint)(uint)(gen_frame + 0x270));
  return uVar3;
}

/* ref: FUN_00aa2900 */
uint F_00aa2900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa2900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x1650) != (undefined *)0x0) {
    if ((char)param_1 == '\0') {
      F_009bc5d0(*(undefined * PTR32 *)((int)this + 0x1650),0);
    }
    F_009bc530(*(undefined * PTR32 *)((int)this + 0x1650),1);
    in_EAX = F_00983120(*(undefined4 *)((int)this + 0x1650),0);
  }
  *(undefined4 *)((int)this + 0x1650) = 0;
  *(undefined1 *)((int)this + 0x2dd6) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x1654) != (undefined *)0x0) {
    if ((char)param_1 == '\0') {
      F_009bc5d0(*(undefined * PTR32 *)((int)this + 0x1654),0);
    }
    F_009bc530(*(undefined * PTR32 *)((int)this + 0x1654),1);
    in_EAX = F_00983120(*(undefined4 *)((int)this + 0x1654),0);
  }
  *(undefined4 *)((int)this + 0x1654) = 0;
  *(undefined1 *)((int)this + 0x2dd7) = 0;
  return in_EAX;
}

/* ref: FUN_00aa2990 */
uint F_00aa2990(unsigned int gen_a0)
{
  GEN_ENTER(0xaa2990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x280];
  ushort uVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  char * pcVar4;
  
  (*(uint *)(gen_frame + 0x26c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x270);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
  if ((char)uVar2 == '\0') goto LAB_00aa2bed;
  uVar3 = 0xa0001;
  this_00 = (undefined *)F_006b8c00();
  uVar2 = F_006e3240(this_00,uVar3);
  if ((uVar2 != 0) && ((*(byte *)(uVar2 + 0x184) & 0x10) != 0)) goto LAB_00aa2bed;
  F_00990c20(((undefined1 *)(gen_frame + 0x0)));
  F_00990c50(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)((int)this + 0x88),0xffffffff,3);
  uVar1 = F_00a9fe00(this);
  if (-1 < (short)uVar1) {
    F_00990c50(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)((int)this + 0x88),0xffffffff,(uint)uVar1);
  }
  uVar2 = *(byte *)((int)this + 0x2dd5) - 0xb;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    pcVar4 = "vfx/live/craft/eff/cft_exsuc0.avfx";
    goto LAB_00aa2a53;
  case 1: ;
  case 8: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_hit_f0.avfx");
    break;
  case 2: ;
  case 9: ;
    pcVar4 = "vfx/live/craft/eff/cft_hit_i0.avfx";
    goto LAB_00aa2a53;
  case 3: ;
  case 10: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_hit_w0.avfx");
    break;
  case 4: ;
  case 0xb: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_hit_e0.avfx");
    break;
  case 5: ;
  case 0xc: ;
    pcVar4 = "vfx/live/craft/eff/cft_hit_t0.avfx";
LAB_00aa2a53: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,pcVar4);
    break;
  case 6: ;
  case 0xd: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_hit_a0.avfx");
    break;
  case 7: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_nmsuc0.avfx");
    break;
  case 0xe: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_act_ng0.avfx");
    break;
  case 0xf: ;
    pcVar4 = "vfx/live/craft/eff/cft_endnq0.avfx";
    goto LAB_00aa2b68;
  case 0x10: ;
    pcVar4 = "vfx/live/craft/eff/cft_endhq0.avfx";
    goto LAB_00aa2b68;
  case 0x11: ;
    pcVar4 = "vfx/live/craft/eff/cft_endng0.avfx";
LAB_00aa2b68: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,pcVar4);
    if (*(undefined * PTR32 *)((int)this + 0x1650) != (undefined *)0x0) {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1650),1);
      F_00983120(*(undefined4 *)((int)this + 0x1650),0);
    }
    *(undefined4 *)((int)this + 0x1650) = 0;
    *(undefined1 *)((int)this + 0x2dd6) = 0;
    if (*(undefined * PTR32 *)((int)this + 0x1654) != (undefined *)0x0) {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1654),1);
      F_00983120(*(undefined4 *)((int)this + 0x1654),0);
    }
    *(undefined4 *)((int)this + 0x1654) = 0;
    *(undefined1 *)((int)this + 0x2dd7) = 0;
    break;
  default: ;
    goto switchD_00aa2a47_default;
  }
  uVar2 = F_009cfc30(((char *)(gen_frame + 0x168)),((undefined1 *)(gen_frame + 0x0)),2,0);
switchD_00aa2a47_default: ;
  F_00982d70();
LAB_00aa2bed: ;
  F_00c47745((*(uint *)(gen_frame + 0x26c)) ^ (uint)(uint)(gen_frame + 0x270));
  return uVar2;
}

/* ref: FUN_00aa2c50 */
uint F_00aa2c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa2c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    if (uVar1 == 1) {
      pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00);
      if (*(undefined * PTR32 *)((int)this + 0x2e00) != (undefined *)0x0) {
LAB_00aa2c71: ;
        uVar3 = 3;
        goto LAB_00aa2c76;
      }
    }
    else {
      pvVar2 = this;
      if (uVar1 != 0) goto LAB_00aa2c71;
      uVar3 = F_00ae6e80((undefined *)((int)this + 0x1b0));
LAB_00aa2c76: ;
      F_0053c1a0((undefined *)((int)pvVar2 + 0x680),param_1,param_3);
      in_EAX = F_005492d0((undefined *)((int)pvVar2 + 0x680),uVar3,param_2,1);
    }
    uVar1 = uVar1 + 1;
    if (1 < uVar1) {
      return in_EAX;
    }
  } while( true );
}

/* ref: FUN_00aa2cc0 */
uint F_00aa2cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa2cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (uVar3 == 1) {
      uVar2 = 0;
      pvVar1 = *(undefined * PTR32 *)((int)this + 0x2e00);
      if (*(undefined * PTR32 *)((int)this + 0x2e00) != (undefined *)0x0) {
LAB_00aa2ce1: ;
        F_0053c1a0((undefined *)((int)pvVar1 + 0x680),uVar3,0);
        uVar2 = F_005492d0((undefined *)((int)pvVar1 + 0x680),3,0,1);
      }
    }
    else {
      pvVar1 = this;
      if (uVar3 != 0) goto LAB_00aa2ce1;
      uVar2 = F_00ae6e80((undefined *)((int)this + 0x1b0));
      uVar2 = F_0053f940((undefined *)((int)this + 0x940),uVar2,param_1);
    }
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return uVar2;
    }
  } while( true );
}

/* ref: FUN_00aa2d30 */
uint F_00aa2d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa2d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((((char)param_1 == '\0') && (*(char *)((int)this + 0x2e08) != '\0')) &&
     (*(undefined * PTR32 *)((int)this + 0x2e00) != (undefined *)0x0)) {
    this = *(undefined * PTR32 *)((int)this + 0x2e00);
  }
  uVar1 = F_0053c280((undefined *)((int)this + 0x680),0);
  return uVar1;
}

/* ref: FUN_00aa2d60 */
byte F_00aa2d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa2d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * pvVar2;
  
  if ((((char)param_2 != '\0') || (*(char *)((int)this + 0x2e08) == '\0')) ||
     (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar2 = this;
  }
  bVar1 = F_005446c0((undefined *)((int)pvVar2 + 0x940),param_1);
  return bVar1;
}

/* ref: FUN_00aa2da0 */
uint F_00aa2da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa2da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  float * pfVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
  pfVar2 = (float *)F_00a5feb0(this);
  uVar5 = 1;
  uVar3 = F_00a5feb0(this);
  fVar4 = *(float *)(uVar3 + 8);
  uVar3 = F_00a5feb0(this);
  uVar3 = F_004ea220(uVar1,param_1,*pfVar2,*(float *)(uVar3 + 4),fVar4,uVar5);
  return uVar3;
}

/* ref: FUN_00aa3060 */
unsigned int F_00aa3060(unsigned int gen_a0)
{
  GEN_ENTER(0xaa3060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x2e04);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x84))(piVar1);
    bVar2 = F_00bc6a70(*(undefined4 *)((int)this + 0x2e04));
    if (bVar2 != 0) {
      piVar1 = *(int * PTR32 *)((int)this + 0x2e04);
      *(undefined2 *)((int)this + 0x2e0c) = 0;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e04) + 0xb4))))(*(int * PTR32 *)((int)this + 0x2e04),0);
        *(undefined4 *)((int)this + 0x2e04) = 0;
        F_00a35790(&REFG(undefined, 0x14a31e0),this);
      }
    }
  }
  return 0;
}

/* ref: FUN_00aa30d0 */
uint F_00aa30d0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa30d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  undefined * pvVar3;
  
  cVar1 = *(char *)((int)this + 0x188);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  if ((cVar1 == '\x05') || (cVar1 == '\a')) {
    if ((*(int *)((int)this + 0x1650) == 0) &&
       (uVar2 = (uint)*(byte *)((int)this + 0x2dd6), *(byte *)((int)this + 0x2dd6) != 0)) {
      uVar2 = F_00aa2620(this,uVar2);
    }
    if ((*(int *)((int)this + 0x1654) == 0) &&
       (uVar2 = (uint)*(byte *)((int)this + 0x2dd7), *(byte *)((int)this + 0x2dd7) != 0)) {
      uVar2 = F_00aa2620(this,uVar2);
    }
    if (*(char *)((int)this + 0x188) != '\a') {
      return uVar2;
    }
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar3 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar3 = this;
    }
    uVar2 = F_00542ff0((undefined *)((int)pvVar3 + 0x680),0xfd);
    if ((char)uVar2 == '\0') {
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar3 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar3 = this;
      }
      uVar2 = F_00542ff0((undefined *)((int)pvVar3 + 0x680),0xfe);
      if ((char)uVar2 == '\0') {
        return uVar2;
      }
    }
    if (*(undefined * PTR32 *)((int)this + 0x1650) != (undefined *)0x0) {
      F_009bc5d0(*(undefined * PTR32 *)((int)this + 0x1650),0);
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1650),1);
      uVar2 = F_00983120(*(undefined4 *)((int)this + 0x1650),0);
    }
    *(undefined4 *)((int)this + 0x1650) = 0;
    *(undefined1 *)((int)this + 0x2dd6) = 0;
    if (*(undefined * PTR32 *)((int)this + 0x1654) == (undefined *)0x0) goto LAB_00aa3225;
    F_009bc5d0(*(undefined * PTR32 *)((int)this + 0x1654),0);
    pvVar3 = *(undefined * PTR32 *)((int)this + 0x1654);
  }
  else {
    if ((*(int *)((int)this + 0x1650) == 0) && (*(int *)((int)this + 0x1654) == 0)) {
      return uVar2;
    }
    if (*(undefined * PTR32 *)((int)this + 0x1650) != (undefined *)0x0) {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1650),1);
      uVar2 = F_00983120(*(undefined4 *)((int)this + 0x1650),0);
    }
    *(undefined4 *)((int)this + 0x1650) = 0;
    *(undefined1 *)((int)this + 0x2dd6) = 0;
    pvVar3 = *(undefined * PTR32 *)((int)this + 0x1654);
    if (pvVar3 == (undefined *)0x0) goto LAB_00aa3225;
  }
  F_009bc530(pvVar3,1);
  uVar2 = F_00983120(*(undefined4 *)((int)this + 0x1654),0);
LAB_00aa3225: ;
  *(undefined4 *)((int)this + 0x1654) = 0;
  *(undefined1 *)((int)this + 0x2dd7) = 0;
  return uVar2;
}

/* ref: FUN_00aa3240 */
unsigned int F_00aa3240(unsigned int gen_a0)
{
  GEN_ENTER(0xaa3240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int * piVar2;
  int iVar3;
  undefined4 uVar4;
  float local_8;
  
  uVar4 = 0;
  fVar1 = *(float *)((int)this + 0x2ec8);
  if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)fVar1 +
                   (float10)*(float *)((int)this + 0x2ec0))));
    *(float *)((int)this + 0x2ec0) = fVar1;
    if (((!GEN_ISNAN((float10)fVar1) && !GEN_ISNAN((float10)1)) && !((float10)fVar1 < (float10)1)) ||
       (fVar1 <= 0.0)) {
      *(undefined4 *)((int)this + 0x2ec8) = 0;
      if (0.0 < *(float *)((int)this + 0x2ec0)) {
        uVar4 = REFG(float, 0x1087f04);
      }
      *(undefined4 *)((int)this + 0x2ec0) = uVar4;
    }
  }
  local_8 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x2ec4) *
                   (float10)*(float *)((int)this + 0x2ec0))));
  if ((*(byte *)((int)this + 0x2dd4) & 8) != 0) {
    local_8 = REFG(float, 0x10abe50);
  }
  if (*(int *)((int)this + 0x7c) == 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0xec);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x68))
                (piVar2,(undefined4)gen_fl2bits((float)((float10)1 - (float10)local_8)));
    }
    piVar2 = *(int * PTR32 *)((int)this + 0xf0);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xd4))
                (piVar2,(undefined4)gen_fl2bits((float)((float10)1 - (float10)local_8)));
    }
  }
  piVar2 = (int *)((int)this + 0x16c0);
  iVar3 = 3;
  do {
    ((code *)*(gen_code32 *)(*piVar2 + 0x68))
              (piVar2,(undefined4)gen_fl2bits((float)((float10)1 - (float10)local_8)));
    piVar2 = piVar2 + 0x1e8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_00aa3360 */
byte F_00aa3360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa3360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (REFG(void * PTR32, 0x1379694) == this) {
    F_00ac4db0(&REFG(undefined, 0x14bcf40));
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
  if (uVar1 != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
    F_00ac3d70(uVar1);
  }
  *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) & 0xbf;
  F_00aa0a70(this);
  if ((char)param_3 != '\0') {
    F_00ab4370(0xa9,this,this,0,0);
  }
  return 0;
}

/* ref: FUN_00aa33d0 */
byte F_00aa33d0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa33d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0053a4e0((undefined *)((int)this + 0xa10));
  if ((uVar1 != 0) && (uVar2 = 0, uVar1 != 0)) {
    do {
      if (*(char *)((int)this + uVar2 + 0x2ebd) != '\0') {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

/* ref: FUN_00aa3410 */
uint F_00aa3410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa3410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  
  F_005416c0((int)this + 0xa10,(uint)param_1,REFG(float, 0x10e79e4));
  pvVar2 = param_1;
  pvVar3 = param_1;
  if (param_1 == (undefined *)0xffffffff) {
    uVar1 = F_0053a4e0((undefined *)((int)this + 0xa10));
    if (uVar1 == 0) {
      return 0;
    }
    pvVar3 = (undefined *)0x0;
    pvVar2 = (undefined *)(uVar1 - 1);
  }
  if (pvVar3 <= pvVar2) {
    pvVar2 = F_00c48350((undefined *)((int)pvVar3 + 0x2ebd + (int)this),0,(int)pvVar2 + (1 - (int)pvVar3));
  }
  return (uint)pvVar2;
}

/* ref: FUN_00aa3470 */
uint F_00aa3470(unsigned int gen_a0)
{
  GEN_ENTER(0xaa3470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(ushort *)((int)this + 0x88) - 1;
  if ((uVar1 < 0x158) && (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar1])) != (undefined *)0x0)) {
    uVar1 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar1])));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00aa34a0 */
byte F_00aa34a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xaa34a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  float fVar1;
  int * piVar2;
  ushort * puVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  float10 fVar7;
  float fVar8;
  uint local_8;
  
  puVar3 = (ushort *)F_00ab2960(param_2);
  if (puVar3 == (ushort *)0x0) {
    return 0;
  }
  param_1[0xba7] = 0;
  switch((unsigned int)(uintptr_t)((char)puVar3[2])) {
  case '\x01': ;
    piVar2 = (int *)param_1[0x3b];
    if ((piVar2 != (int *)0x0) && (*(char *)((int)piVar2 + 0x65) == '\x03')) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x128))(piVar2);
      param_1[0xba7] = (uVar5 & 0xffff) + 20000;
    }
    break;
  case '\x02': ;
    param_1[0xba7] = *puVar3 + 10000;
    break;
  case '\x03': ;
    param_1[0xba7] = (uint)*puVar3;
    break;
  case '\x05': ;
    *(byte *)((int)param_1 + 0x8e) = *(byte *)((int)param_1 + 0x8e) | 4;
  }
  local_8 = F_00ab2930(param_1[0xba7]);
  if (local_8 == 0) {
    param_1[0xba7] = 0;
    local_8 = F_00ab2930(0);
  }
  *(char *)((int)param_1 + 0x2e95) = (char)puVar3[2];
  param_1[0xba6] = param_2;
  if (param_3 != (undefined1 *)0x0) {
    iVar4 = 0;
    do {
      *(undefined1 *)((int)param_1 + iVar4 + 0x2db8) = param_3[iVar4];
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1a);
  }
  if (param_4 == (int *)0x0) {
    if (((char)puVar3[2] == '\x02') && (param_1[0xb65] == 0)) {
      param_1[0xb65] = 1;
    }
  }
  else {
    param_1[0xb64] = *param_4;
    param_1[0xb65] = param_4[1];
    param_1[0xb66] = param_4[2];
    param_1[0xb67] = param_4[3];
    param_1[0xb68] = param_4[4];
    param_1[0xb69] = param_4[5];
    param_1[0xb6a] = param_4[6];
    param_1[0xb6b] = param_4[7];
    param_1[0xb6c] = param_4[8];
    param_1[0xb6d] = param_4[9];
  }
  if (param_3 == (undefined1 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)(byte)param_3[1];
  }
  ((code *)*(gen_code32 *)(*param_1 + 0x20))(param_1,uVar5);
  ((code *)*(gen_code32 *)(*param_1 + 0x4c))(param_1,(undefined4)gen_fl2bits(param_5));
  param_1[0xb78] = (int)gen_fl2bits(param_5);
  *(undefined1 *)((int)param_1 + 0x2eaa) = *(undefined1 *)(local_8 + 0x24);
  uVar5 = F_00ab2410(param_1[0x20]);
  if ((uVar5 == 0) || (*(char *)(uVar5 + 0xee) == '\0')) {
    fVar1 = *(float *)(local_8 + 0x18);
    fVar8 = F_00a4b7d0();
    fVar7 = (float10)fVar8 * ((float10)*(float *)(local_8 + 0x1c) - (float10)fVar1) + (float10)fVar1
    ;
  }
  else {
    fVar7 = ((float10)*(float *)(local_8 + 0x1c) + (float10)*(float *)(local_8 + 0x18)) *
            (float10)REFG(double, 0x1088108);
  }
  param_1[0x31] = (int)gen_fl2bits((float)fVar7);
  F_00a60de0(param_1);
  param_1[0x32] = *(int *)(local_8 + 0x20);
  if (((char)puVar3[2] == '\x01') && (param_3 != (undefined1 *)0x0)) {
    switch((unsigned int)(uintptr_t)(*param_3)) {
    case 1: ;
      if (param_3[4] == '\x01') {
        if (param_3[1] != '\0') {
          *(undefined2 *)(param_1 + 0xba9) = 0x2264;
          goto switchD_00aa36c0_default;
        }
        uVar6 = 0x2261;
      }
      else {
        if (param_3[1] != '\0') {
          *(undefined2 *)(param_1 + 0xba9) = 0x2276;
          goto switchD_00aa36c0_default;
        }
        uVar6 = 0x2273;
      }
      break;
    case 2: ;
      if (param_3[1] != '\0') {
        *(undefined2 *)(param_1 + 0xba9) = 0x2270;
        goto switchD_00aa36c0_default;
      }
      uVar6 = 0x226d;
      break;
    case 3: ;
      if (param_3[1] != '\0') {
        *(undefined2 *)(param_1 + 0xba9) = 0x226a;
        goto switchD_00aa36c0_default;
      }
      uVar6 = 0x2267;
      break;
    case 4: ;
      if (param_3[1] != '\0') {
        *(undefined2 *)(param_1 + 0xba9) = 0x227c;
        goto switchD_00aa36c0_default;
      }
      uVar6 = 0x2279;
      break;
    case 5: ;
      if (param_3[1] != '\0') {
        *(undefined2 *)(param_1 + 0xba9) = 0x2282;
        goto switchD_00aa36c0_default;
      }
      uVar6 = 0x227f;
      break;
    default: ;
      goto switchD_00aa36c0_default;
    }
  }
  else {
    uVar6 = puVar3[1];
  }
  *(ushort *)(param_1 + 0xba9) = uVar6;
switchD_00aa36c0_default: ;
  *(undefined1 *)((int)param_1 + 0x2ea6) = *(undefined1 *)(local_8 + 0x26);
  ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,8,0);
  return 1;
}

/* ref: FUN_00aa37d0 */
uint F_00aa37d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa37d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 * in_EAX = 0;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  if ((*(int *)((int)this + 0xec) != 0) && (*(char *)((int)this + 0x2e08) == '\0')) {
    uVar2 = (*(undefined4 *)(gen_frame + 0x1c));
    uVar4 = (*(undefined4 *)(gen_frame + 0x1c));
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar2 = 0x2d;
      uVar4 = 0x46;
      *(undefined1 *)((int)this + 0x2f04) = 0;
      break;
    case 1: ;
      uVar2 = 0x40;
      uVar4 = 0x44;
      *(undefined1 *)((int)this + 0x2f04) = 1;
      break;
    case 2: ;
      uVar2 = 0x3f;
      uVar4 = 0x43;
      *(undefined1 *)((int)this + 0x2f04) = 2;
      break;
    case 3: ;
      uVar2 = 0x3e;
      uVar4 = 0x42;
      *(undefined1 *)((int)this + 0x2f04) = 3;
    }
    puVar3 = (undefined4 *)F_00a5fd10(this,((undefined1 *)(gen_frame + 0x0)),uVar2);
    uVar2 = puVar3[1];
    uVar1 = puVar3[2];
    *(undefined4 *)((int)this + 0x140) = *puVar3;
    *(undefined4 *)((int)this + 0x144) = uVar2;
    *(undefined4 *)((int)this + 0x148) = uVar1;
    in_EAX = (undefined4 *)F_00a5fd10(this,((undefined1 *)(gen_frame + 0x0)),uVar4);
    uVar2 = in_EAX[1];
    uVar4 = in_EAX[2];
    *(undefined4 *)((int)this + 0x150) = *in_EAX;
    *(undefined4 *)((int)this + 0x154) = uVar2;
    *(undefined4 *)((int)this + 0x158) = uVar4;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00aa38e0 */
uint F_00aa38e0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa38e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  F_00a5f5b0(this);
  if ((*(char *)((int)this + 0x2e08) == '\0') ||
     (pvVar1 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar1 = this;
  }
  if (*(int *)((int)pvVar1 + 0x8fc) != 0) {
    F_00aa37d0(this,(uint)*((byte *)GEN_TOP((*(int *)((int)pvVar1 + 0x8fc) + 9))));
  }
  uVar2 = F_005495e0((undefined *)((int)this + 0x680));
  if (*(undefined * PTR32 *)((int)this + 0xec) != (undefined *)0x0) {
    F_00689160(*(undefined * PTR32 *)((int)this + 0xec),this,((code *)REFP(0xaa1420)),((code *)REFP(0xaa1440)));
    uVar2 = F_00541850((undefined *)((int)this + 0xa10));
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_00aa3950 */
uint F_00aa3950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa3950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (param_2 == 1) {
    bVar1 = *(byte *)((int)this + 0x2dd3) >> 7;
    uVar2 = (uint)bVar1;
    if (bVar1 == (byte)param_1) {
      return uVar2;
    }
  }
  else {
    uVar2 = param_2 - 2;
    if (((uVar2 == 0) && ((*(byte *)((int)this + 0x2dd2) & 4) == 0)) && ((byte)param_1 != 0)) {
      return 0;
    }
  }
  uVar2 = CONCAT31((int3)(uVar2 >> 8),(byte)param_1 << 7);
  *(byte *)((int)this + 0x2dd3) = *(byte *)((int)this + 0x2dd3) & 0x7f | (byte)param_1 << 7;
  if (*(char *)((int)this + 0x1725) == '\x03') {
    uVar2 = F_00694320((undefined *)((int)this + 0x16c0));
    if (uVar2 == 0x326277) {
      uVar2 = F_006a0720((undefined *)((int)this + 0x16c0),"atr_arrow",param_1);
    }
  }
  return uVar2;
}

/* ref: FUN_00aa39d0 */
uint F_00aa39d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa39d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  cVar1 = (char)(*(undefined4 *)&gen_args[1]);
  if ((char)(*(undefined4 *)&gen_args[1]) == '\0') {
    (*(undefined4 *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2d90)));
  }
  else {
    (*(undefined4 *)&gen_args[1]) = 0;
  }
  uVar2 = F_00a5f500((*(undefined * PTR32 *)&gen_args[0]));
  uVar4 = 0;
  if (uVar2 != 0) {
    piVar3 = (int *)F_00a5f500((*(undefined * PTR32 *)&gen_args[0]));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xfc))(piVar3,0,&(*(undefined4 *)&gen_args[1]));
  }
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2dd3))) =
       *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2dd3))) ^ (cVar1 << 5 ^ *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2dd3)))) & 0x20;
  return uVar4;
}

/* ref: FUN_00aa3a30 */
ulonglong F_00aa3a30(unsigned int gen_a0)
{
  GEN_ENTER(0xaa3a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong * puVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (REFG(void * PTR32, 0x1379694) == this) {
    uVar4 = F_00533c20(&REFG(undefined4, 0x1375bc0));
    if (uVar4 != 0xe0000000) {
      return uVar4;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
    if ((uVar3 == 2) || (uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this), uVar3 == 1)) {
      if ((*(char *)((int)this + 0x2f03) == '\x03') &&
         ((*(int *)((int)this + 0x2ed8) == REFG(int, 0x1379690) &&
          (bVar2 = F_00ac3720(&REFG(undefined, 0x14bcf40)), bVar2 == 1)))) {
        return (ulonglong)*(uint *)((int)this + 0x2ed8);
      }
      bVar2 = F_00533ec0((int)this + 0x620);
      if (bVar2 != 0) {
        puVar1 = (ulonglong *)((int)this + 0x668);
        if (*(int *)puVar1 != -0x20000000) {
          return *puVar1;
        }
        if (*(int *)((int)this + 0x66c) != 0) {
          return *puVar1;
        }
      }
      if (REFG(void * PTR32, 0x1379694) == this) {
        uVar4 = F_00538780(&REFG(undefined4, 0x1375bc0));
      }
      else {
        uVar4 = *(ulonglong *)((int)this + 0x1a0);
      }
      if (REFG(void * PTR32, 0x1379694) == this) {
        uVar5 = F_00538780(&REFG(undefined4, 0x1375bc0));
      }
      else {
        uVar5 = *(ulonglong *)((int)this + 0x1a0);
      }
      if (uVar5 != 0xe0000000) {
        return uVar4;
      }
    }
  }
  uVar4 = F_00b76e00((undefined *)((int)this + 0x1340));
  return uVar4;
}

/* ref: FUN_00aa3b60 */
byte F_00aa3b60(unsigned int gen_a0)
{
  GEN_ENTER(0xaa3b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  byte * pbVar3;
  uint uVar4;
  
  bVar2 = F_00a60500(this);
  if (bVar2 == 0) {
    return 0;
  }
  uVar4 = 0;
  pbVar3 = (byte *)((int)this + 0x1e44);
  do {
    if ((*(int *)(pbVar3 + -0x794) != 0 || *(int *)(pbVar3 + -0x790) != 0) && ((*pbVar3 & 1) == 0))
    {
      return 0;
    }
    uVar4 = uVar4 + 1;
    pbVar3 = pbVar3 + 0x7a0;
  } while (uVar4 < 3);
  if ((((*(int *)((int)this + 0x2e00) == 0) ||
       (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0xec))), iVar1 == 0)) ||
      (*(char *)(iVar1 + 0x65) == '\x03')) &&
     (((*(int *)((int)this + 0x2e04) == 0 ||
       (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x2e04) + 0xec))), iVar1 == 0)) ||
      (*(char *)(iVar1 + 0x65) == '\x03')))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aa3be0 */
uint F_00aa3be0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaa3be0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  float param_2 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined * this_00;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  undefined4 uVar10;
  float * pfVar11;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  (*(float *)(gen_frame + 0x18)) = param_2;
  uVar4 = 0;
  if (param_2 != 0.0) {
    if (*(undefined * PTR32 *)((int)this + 0x1658) != (undefined *)0x0) {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1658),1);
      F_00983120(*(undefined4 *)((int)this + 0x1658),0);
      *(undefined4 *)((int)this + 0x1658) = 0;
    }
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    (*(uint *)(gen_frame + 0x1c)) = (uint)*param_1;
    uVar10 = 0;
    (*(uint *)(gen_frame + 0x1c)) = (uint)uVar2;
    fVar6 = (float10)*(double *)&REFG(undefined, 0x10a3960);
    fVar7 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    fVar8 = (float10)*(double *)&REFG(undefined, 0x10912a8);
    (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((float10)*param_1 * fVar6) * fVar7 - fVar8)));
    (*(uint *)(gen_frame + 0x1c)) = (uint)uVar3;
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF((((float10)uVar2 * fVar6) * fVar7 - fVar8)));
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((fVar7 * ((float10)uVar3 * fVar6) - fVar8)));
    uVar4 = F_00a62220(this);
    fVar9 = (*(float *)(gen_frame + 0x18));
    fVar6 = (float10)0;
    uVar5 = F_00ab4900((uint)*(byte *)((int)gen_fl2bits((*(float *)(gen_frame + 0x18))) + 0x2a),&(*(float *)(gen_frame + 0x0)),(float)fVar6,
                         (float)fVar6,(float)fVar6,uVar4 & 0xff,uVar10);
    *(uint *)((int)this + 0x1658) = uVar5;
    uVar4 = 0;
    if (uVar5 != 0) {
      uVar4 = F_00a5feb0(this);
      fVar1 = *(float *)(uVar4 + 8);
      fVar9 = (float)*(byte *)((int)gen_fl2bits(fVar9) + 0x20);
      ((float *)(gen_frame + 0x20))[0] = fVar9;
      ((float *)(gen_frame + 0x20))[1] = 0.0;
      ((float *)(gen_frame + 0x20))[2] = 0.0;
      (*(float *)(gen_frame + 0x50)) = (float)(float10)0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(float *)(gen_frame + 0x54)) = (float)(float10)0;
      (*(float *)(gen_frame + 0x34)) = fVar9;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x44)) = 0;
      (*(float *)(gen_frame + 0x48)) = fVar9;
      (*(float *)(gen_frame + 0x58)) = 0.0;
      fVar6 = F_00c4d1fa((float10)(float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)fVar1));
      (*(float *)(gen_frame + 0x18)) = (float)fVar6;
      F_0065ed60(((float *)(gen_frame + 0x20)),(float)fVar6);
      pfVar11 = ((float *)(gen_frame + 0x20));
      (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x50)) + (float10)(*(float *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x54)) + (float10)(*(float *)(gen_frame + 0x4)));
      (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x58)) + (float10)(*(float *)(gen_frame + 0x8)));
      this_00 = (undefined *)F_00983160(*(undefined4 *)((int)this + 0x1658));
      uVar4 = F_009bc130(this_00,pfVar11);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return uVar4;
}

/* ref: FUN_00aa3da0 */
uint F_00aa3da0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa3da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  while( true ) {
    if (uVar3 != 8) {
      if (REFG(int * PTR32, 0x1379694) == this) {
        uVar3 = 0;
      }
      else if ((*(byte *)((int)this + 0x2dd2) & 0x10) == 0) {
        uVar3 = F_00a62220(this);
        uVar3 = 3 - ((uVar3 & 0xff) != 0);
      }
      else {
        uVar3 = 1;
      }
      uVar2 = (undefined2)uVar3;
      if (*(int *)((int)this + 0xec) != 0) {
        *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xec) + 0x72))) = uVar2;
      }
      if (this != (int *)0xffffe940) {
        *(undefined2 *)((int)this + 0x1732) = uVar2;
      }
      if (this != (int *)0xffffe1a0) {
        *(undefined2 *)((int)this + 0x1ed2) = uVar2;
      }
      if (this != (int *)0xffffda00) {
        *(undefined2 *)((int)this + 0x2672) = uVar2;
      }
      if ((*(int *)((int)this + 0x2e00) != 0) &&
         (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0xec))), iVar1 != 0)) {
        *(undefined2 *)(iVar1 + 0x72) = uVar2;
      }
      return uVar3;
    }
    uVar3 = *(ushort *)((int)this + 0x88) - 1;
    if (0x157 < uVar3) {
      return uVar3;
    }
    if (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar3])) == (undefined *)0x0) {
      return 0;
    }
    this = (undefined *)F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar3])));
    if (this == (int *)0x0) break;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  }
  return 0;
}

/* ref: FUN_00aa3e80 */
uint F_00aa3e80(unsigned int gen_a0)
{
  GEN_ENTER(0xaa3e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if ((*(byte *)((int)this + 0x8e) & 0x80) != 0) {
    if (*(int *)((int)this + 0x2df4) != 0) {
      F_009944e0(REFG(void * PTR32, 0x14a0d28),(undefined4 *)((int)this + 0x2df4));
      *(undefined4 *)((int)this + 0x2df4) = 0;
    }
    if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 0x1684) != 0)) {
      piVar1 = *(int * PTR32 *)((int)this + 0xec);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x168))(piVar1,0);
      }
      piVar1 = (int *)((int)this + 0x1e60);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x168))(piVar1,0);
      }
      uVar5 = *(undefined4 *)((int)this + 0x1684);
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      F_008aad20(this_00,uVar5);
      *(undefined4 *)((int)this + 0x1684) = 0;
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
    if (((uVar3 == 8) && (uVar3 = *(ushort *)((int)this + 0x88) - 1, uVar3 < 0x158)) &&
       (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar3])) != (undefined *)0x0)) {
      piVar2 = (int *)F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar3])));
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0xc,0);
        iVar4 = piVar2[0x3b];
        if ((iVar4 != 0) && (*(int *)(iVar4 + 200) != 0)) {
          F_006b2f70((undefined *)(iVar4 + 0x90));
        }
      }
    }
    *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) & 0xdf;
    F_00b5ba40(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)((int)this + 0x88));
    piVar2 = (int *)((int)this + 0x2600);
    iVar4 = 3;
    do {
      F_00b5c0c0(REFG(void * PTR32, 0x14c4e84),piVar2);
      ((code *)*(gen_code32 *)(piVar2[0x1d4] + 4))(piVar2 + 0x1d4);
      ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      piVar2 = piVar2 + -0x1e8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    F_00a5fc30(this);
    *(undefined1 *)((int)this + 0x2ea9) = 0;
    uVar3 = F_00542f70((undefined *)((int)this + 0x680));
    return uVar3;
  }
  return (uint)piVar2;
}

/* ref: FUN_00aa3ff0 */
uint F_00aa3ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa3ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1375ac0);
  (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1375ac4);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1335e70);
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1375ac8);
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  if ((*(char *)((int)this + 0x2e08) == '\0') ||
     (pvVar4 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar4 = this;
  }
  if ((param_2 == 0) || ((REFG(undefined4, 0x1379694) != param_2 && ((*(byte *)(param_2 + 0x2dd2) & 0x10) == 0))))
  {
    if ((param_1 < 4) &&
       (fVar1 = *(float *)((int)this + 400),
       (!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
       (!(fVar1 < *(float *)&REFG(undefined, 0x1088114)) && fVar1 != *(float *)&REFG(undefined, 0x1088114)))) {
      return param_2;
    }
    *(undefined4 *)((int)this + 400) = REFG(float, 0x10944e8);
  }
  if (param_1 < 4) {
    iVar2 = (-(uint)((*(byte *)((int)this + 0x2dd2) & 4) != 0) & 6) + 0x3f;
    (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x10a0da0);
  }
  else if (param_1 < 0x15) {
    iVar2 = (-(uint)((*(byte *)((int)this + 0x2dd2) & 4) != 0) & 6) + 0x3f;
    (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1088068);
  }
  else {
    iVar2 = (-(uint)((*(byte *)((int)this + 0x2dd2) & 4) != 0) & 6) + 0x3e;
  }
  uVar3 = F_00549140((undefined *)((int)pvVar4 + 0x680),iVar2,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),1);
  return uVar3;
}

/* ref: FUN_00aa4150 */
uint F_00aa4150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa4150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00ab2a20(param_1);
  uVar3 = 0;
  if (uVar2 != 0) {
    if ((*(char *)(uVar2 + 7) == '\x01') && (bVar1 = F_00533ec0((int)this + 0x620), bVar1 != 0)) {
      F_00aa2c50(this,0,0,0);
    }
    if (*(char *)(uVar2 + 4) == '\x03') {
      F_00549140((undefined *)((int)this + 0x680),param_1,param_2,1);
    }
    (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1375ac0);
    (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1375ac4);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1335e70);
    (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1375ac8);
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    if (param_2 != 0) {
      F_0054e3f0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_2);
    }
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x40)) + 3)) = 1;
    (*(undefined4 *)(gen_frame + 0x40)) = CONCAT13(1,(undefined3)(*(undefined4 *)(gen_frame + 0x40)));
    if ((((char)param_3 == '\0') && (*(char *)((int)this + 0x2e08) != '\0')) &&
       (*(undefined * PTR32 *)((int)this + 0x2e00) != (undefined *)0x0)) {
      this = *(undefined * PTR32 *)((int)this + 0x2e00);
    }
    uVar3 = F_00549140((undefined *)((int)this + 0x680),param_1,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),1);
  }
  return uVar3;
}

/* ref: FUN_00aa4270 */
uint F_00aa4270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa4270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00ab2a20(param_1);
  if (uVar2 != 0) {
    if (*(char *)(uVar2 + 7) == '\x01') {
      bVar1 = F_00533ec0((int)this + 0x620);
      if (bVar1 != 0) {
        F_00aa2c50(this,0,0,0);
      }
    }
    if (*(char *)(uVar2 + 4) == '\x03') {
      F_005492d0((undefined *)((int)this + 0x680),param_1,param_2,1);
    }
    else if (*(char *)(uVar2 + 4) == '\x04') {
      ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0xd,0);
    }
  }
  if ((((char)param_3 == '\0') && (*(char *)((int)this + 0x2e08) != '\0')) &&
     (*(undefined * PTR32 *)((int)this + 0x2e00) != (undefined *)0x0)) {
    this = *(undefined * PTR32 *)((int)this + 0x2e00);
  }
  uVar2 = F_005492d0((undefined *)((int)this + 0x680),param_1,param_2,1);
  return uVar2;
}

/* ref: FUN_00aa4310 */
uint F_00aa4310(unsigned int gen_a0)
{
  GEN_ENTER(0xaa4310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)((int)this + 0x20);
  uVar1 = F_00aa2cc0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  if (*(char *)((int)this + 0x188) == '\x02') {
    if ((*(byte *)((int)this + 0x2dd2) & 4) != 0) {
      uVar1 = F_00aa4270(this,0x49,0,0);
      return uVar1;
    }
    uVar1 = F_00aa4270(this,0x43,0,0);
  }
  return uVar1;
}

/* ref: FUN_00aa4360 */
uint F_00aa4360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa4360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ab2a20(param_1);
  if (uVar1 != 0) {
    if (param_2 == 0) {
      *(int *)((int)this + 0x2eb0) = param_1;
    }
    if (((char)param_3 == '\0') && (*(char *)(uVar1 + 4) == '\x01')) {
      uVar1 = F_00aa4150(this,param_1 + 1,0,0);
    }
  }
  return uVar1;
}

/* ref: FUN_00aa43b0 */
unsigned int F_00aa43b0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa43b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  ushort uVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  
  puVar1 = (undefined4 *)((int)this + 0x2df4);
  if (*(int *)((int)this + 0x2df4) != 0) {
    F_009944e0(REFG(void * PTR32, 0x14a0d28),puVar1);
    *puVar1 = 0;
  }
  if ((((*(char *)((int)this + 0x2dec) != '\0') && (*(int *)((int)this + 0x2df0) != -0x20000000)) &&
      (pvVar3 = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),*(int *)((int)this + 0x2df0)),
      pvVar3 != (undefined *)0x0)) && (pvVar3 != this)) {
    puVar4 = (undefined4 *)F_00ab2810((uint)*(byte *)((int)this + 0x2dec));
    uVar2 = *(ushort *)((int)this + 0x88);
    (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
    puVar4 = (undefined4 *)
             F_00984890(REFG(void * PTR32, 0x14a0d28),((undefined1 *)(gen_frame + 0x0)),(uint)*(byte *)(puVar4 + 1),(uint)uVar2,
                          (uint)*(byte *)((int)puVar4 + 5),(uint)*(ushort *)((int)pvVar3 + 0x88),
                          (uint)*(byte *)((int)puVar4 + 6),&(*(undefined4 *)(gen_frame + 0x8)));
    *puVar1 = *puVar4;
    *(undefined4 *)((int)this + 0x2df8) = puVar4[1];
  }
  return 0;
}

/* ref: FUN_00aa4460 */
uint F_00aa4460(unsigned int gen_a0)
{
  GEN_ENTER(0xaa4460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  
  if (*(int *)((int)this + 0x2df4) != 0) {
    in_EAX = F_009944e0(REFG(void * PTR32, 0x14a0d28),(undefined4 *)((int)this + 0x2df4));
    *(undefined4 *)((int)this + 0x2df4) = 0;
  }
  *(undefined4 *)((int)this + 0x2df0) = 0xe0000000;
  *(undefined1 *)((int)this + 0x2dec) = 0;
  return in_EAX;
}

/* ref: FUN_00aa44a0 */
uint F_00aa44a0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa44a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint in_EAX = 0;
  int * piVar2;
  
  piVar2 = &REFG(undefined4, 0x14a9a1c);
  do {
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (in_EAX = *(uint *)(iVar1 + 0x2df0), in_EAX == *(uint *)((int)this + 0x74)))
    {
      if (*(int *)(iVar1 + 0x2df4) != 0) {
        in_EAX = F_009944e0(REFG(void * PTR32, 0x14a0d28),(undefined4 *)(iVar1 + 0x2df4));
        *(undefined4 *)(iVar1 + 0x2df4) = 0;
      }
      *(undefined1 *)(iVar1 + 0x2dec) = 0;
      *(undefined4 *)(iVar1 + 0x2df0) = 0xe0000000;
    }
    piVar2 = piVar2 + 1;
  } while ((int)piVar2 < 0x14a9bac);
  return in_EAX;
}

/* ref: FUN_00aa4510 */
uint F_00aa4510(unsigned int gen_a0)
{
  GEN_ENTER(0xaa4510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar2;
  code * pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  
  if (*(byte *)((int)this + 0x2ece) == 1) {
    iVar2 = *(int *)((int)this + 0x1694);
    uVar5 = 0;
    if (iVar2 != 0) {
      iVar8 = iVar2 - *(int *)((int)this + 0x1690);
      (*(float *)((char *)&(*(double *)(gen_frame + 0x4)) + 4)) = gen_bits2f(iVar8);
      fVar9 = (float10)iVar8;
      if (iVar8 < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)((char *)&(*(double *)(gen_frame + 0x4)) + 4)) = gen_bits2f(iVar2);
      fVar10 = (float10)iVar2;
      if (iVar2 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar1 = ((float)GEN_TOF((((fVar9 / fVar10) * (float10)*(double *)&REFG(undefined, 0x10944e0) + (float10)REFG(double, 0x1088130))
                     * (float10)*(float *)((int)this + 0x2ed0))));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x4)) + 4)) = fVar1;
      *(float *)((int)this + 0x2de0) = fVar1;
      (*(double *)(gen_frame + 0x4)) = (double)fVar1;
      fVar9 = F_00a5f1d0(this);
      fVar1 = (float)((float10)(*(double *)(gen_frame + 0x4)) - fVar9);
      (*(float *)((char *)&(*(double *)(gen_frame + 0x4)) + 4)) = fVar1;
      if (((float10)fVar1 < (float10)REFG(float, 0x10920a4)) &&
         ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x10e8738))) && !(fVar1 < *(float *)&REFG(undefined, 0x10e8738)))) {
        uVar4 = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x4)) + 0));
        uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,*(undefined4 *)((int)this + 0x2de0));
        return uVar5;
      }
      iVar2 = *(int *)this;
      uVar4 = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x4)) + 0));
      fVar9 = F_00a5f1d0(this);
      pcVar3 = *(gen_code32 *)(iVar2 + 0x4c);
      fVar1 = ((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x4)) + 4)) * (float10)*(double *)&REFG(undefined, 0x10a1b58) + fVar9)));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x4)) + 4)) = fVar1;
      (*(double *)(gen_frame + 0x4)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x4)) + 0))));
      uVar5 = (*pcVar3)(this,(undefined4)gen_fl2bits(fVar1));
    }
  }
  else {
    uVar5 = *(byte *)((int)this + 0x2ece) - 4;
    if (uVar5 == 0) {
      if ((*(byte *)((int)this + 0x2dd2) & 2) == 0) {
        if ((*(byte *)((int)this + 0x2dd3) & 0x20) == 0) {
          F_00ab4370(0xf0,this,this,0,0);
          (*(float *)((char *)&(*(double *)(gen_frame + 0x4)) + 4)) = 0.0;
          (*(double *)(gen_frame + 0x4)) = gen_bits2d((ulonglong)(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x4)) + 0)));
          uVar6 = F_00a5f500(this);
          uVar5 = 0;
          if (uVar6 != 0) {
            piVar7 = (int *)F_00a5f500(this);
            uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0xfc))(piVar7,0,(int)&(*(double *)(gen_frame + 0x4)) + 4);
          }
          *(byte *)((int)this + 0x2dd3) = *(byte *)((int)this + 0x2dd3) | 0x20;
          return uVar5;
        }
      }
      else if ((*(byte *)((int)this + 0x2dd3) & 0x20) != 0) {
        F_00ab4370(0xf0,this,this,0,0);
        (*(float *)((char *)&(*(double *)(gen_frame + 0x4)) + 4)) = gen_bits2f(*(undefined4 *)((int)this + 0x2d90));
        (*(double *)(gen_frame + 0x4)) = gen_bits2d(CONCAT44(*(undefined4 *)((int)this + 0x2d90),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x4)) + 0))));
        uVar6 = F_00a5f500(this);
        uVar5 = 0;
        if (uVar6 != 0) {
          piVar7 = (int *)F_00a5f500(this);
          uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0xfc))(piVar7,0,(int)&(*(double *)(gen_frame + 0x4)) + 4);
        }
        *(byte *)((int)this + 0x2dd3) = *(byte *)((int)this + 0x2dd3) & 0xdf;
        return uVar5;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_00aa46b0 */
uint F_00aa46b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xaa46b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort * param_4 = (ushort *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  
  uVar5 = F_00ac1a20(param_2,param_3);
  uVar6 = F_00ab1ed0(uVar5);
  uVar7 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  uVar5 = 1;
  if (uVar7 != 1) {
    if (*(char *)(uVar6 + 0x34) == '\x01') {
      uVar5 = F_00aa3be0(param_1,param_4,uVar6);
      return uVar5;
    }
    bVar2 = *(byte *)(uVar6 + 0x2a);
    uVar5 = CONCAT31((int3)(uVar7 >> 8),bVar2);
    if (bVar2 != 0) {
      uVar5 = F_00ab27b0((uint)bVar2);
      (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*param_4);
      uVar3 = param_4[1];
      fVar8 = (float10)*(double *)&REFG(undefined, 0x10a3960);
      uVar4 = param_4[2];
      fVar9 = (float10)*(double *)&REFG(undefined, 0x10928e8);
      (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)uVar3);
      fVar10 = (float10)*(double *)&REFG(undefined, 0x10912a8);
      (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((float10)*param_4 * fVar8) * fVar9 - fVar10)));
      (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)uVar4);
      (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF((((float10)uVar3 * fVar8) * fVar9 - fVar10)));
      (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((fVar9 * ((float10)uVar4 * fVar8) - fVar10)));
      if (*(char *)(uVar5 + 8) == '\x04') {
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(byte *)(uVar6 + 0x21));
        (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(byte *)(uVar6 + 0x20));
        (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(byte *)(uVar6 + 0x21) * (float10)REFG(double, 0x1088108))));
        (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)*(byte *)(uVar6 + 0x20) + ((float10)GEN_TOD(gen_bits2f(param_1[0x30]))))));
      }
      else {
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(byte *)(uVar6 + 0x20));
        fVar1 = ((float)GEN_TOF(((float10)*(byte *)(uVar6 + 0x20) + ((float10)GEN_TOD(gen_bits2f(param_1[0x30]))))));
        (*(float *)(gen_frame + 0x1c)) = fVar1;
        (*(float *)(gen_frame + 0x18)) = fVar1;
      }
      uVar11 = 0;
      uVar5 = F_00a62220(param_1);
      uVar5 = F_00ab4900((uint)*(byte *)(uVar6 + 0x2a),&(*(float *)(gen_frame + 0x0)),param_5,(*(float *)(gen_frame + 0x18)),(*(float *)(gen_frame + 0x1c)),
                           uVar5 & 0xff,uVar11);
      param_1[0x596] = uVar5;
    }
  }
  return uVar5;
}

/* ref: FUN_00aa4810 */
uint F_00aa4810(unsigned int gen_a0)
{
  GEN_ENTER(0xaa4810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  bool bVar6;
  
  if ((*(char *)((int)this + 0x2e08) == '\0') ||
     (pvVar4 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar4 = this;
  }
  uVar3 = F_00531e00((int)pvVar4 + 0x680,0);
  bVar2 = F_00ae8da0((int)this + 0x1b0,uVar3);
  if ((bVar2 == 0) ||
     (bVar6 = GEN_ISNAN(*(float *)((int)this + 0xc4)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
     bVar6 == (bVar6 || *(float *)((int)this + 0xc4) == *(float *)&REFG(undefined, 0x1088114)))) {
    F_00531f10((int)this + 0x680,0,(float)(float10)1);
    uVar3 = *(uint *)((int)this + 0x2e00);
    if (uVar3 == 0) {
      return 0;
    }
    if (*(char *)((int)this + 0x2e09) != '\0') {
      return uVar3;
    }
    uVar3 = F_00531f10(uVar3 + 0x680,0,(float)(float10)1);
    return uVar3;
  }
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pvVar5 = this;
  if (pvVar4 == (undefined *)0x8) {
    uVar3 = *(ushort *)((int)this + 0x88) - 1;
    if (0x157 < uVar3) {
      return uVar3;
    }
    if (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar3])) == (undefined *)0x0) {
      return 0;
    }
    pvVar4 = (undefined *)F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar3])));
    pvVar5 = pvVar4;
  }
  if (pvVar5 != (undefined *)0x0) {
    fVar1 = *(float *)((int)pvVar5 + 0x51c);
    F_00531f10((int)this + 0x680,0,fVar1);
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x2e00);
    if ((pvVar4 != (undefined *)0x0) && (*(char *)((int)this + 0x2e09) == '\0')) {
      pvVar4 = (undefined *)F_00531f10((int)pvVar4 + 0x680,0,fVar1);
    }
  }
  return (uint)pvVar4;
}

/* ref: FUN_00aa4930 */
uint F_00aa4930(unsigned int gen_a0)
{
  GEN_ENTER(0xaa4930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  undefined * pvVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
  if (uVar2 == 0) {
    return 0;
  }
  pcVar3 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this)));
  if (*pcVar3 == '\0') {
    return CONCAT31((int3)((uint)((int)(uintptr_t)pcVar3) >> 8),*pcVar3);
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
  if (*(char *)(uVar2 + 1) != '\x04') {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
    uVar2 = F_00ac1a20((uint)*(byte *)(uVar2 + 1),*(undefined4 *)(uVar2 + 4));
    if (uVar2 == 0) {
      return 0;
    }
    uVar4 = F_00ab1ed0(uVar2);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
    if ((char)uVar2 != '\0') {
      uVar2 = (uint)*(ushort *)(uVar4 + 10);
      iVar8 = 0;
      if (uVar2 == 0x6a) {
        iVar8 = 0x60;
      }
      if (uVar2 == 0x62) {
        iVar8 = 0x61;
      }
      if (uVar2 == 0x66) {
        iVar8 = 0x62;
      }
      if (uVar2 == 0x5e) {
        iVar8 = 99;
      }
      if (uVar2 == 0x6c) {
        iVar8 = 100;
      }
      if (uVar2 == 0x60) {
        iVar8 = 0x65;
      }
      if (uVar2 == 100) {
        iVar8 = 0x66;
      }
      if (uVar2 == 0x68) {
        iVar8 = 0x67;
      }
      if (uVar2 == 0x6e) {
        iVar8 = 0x68;
      }
      if (*(ushort *)(uVar4 + 10) == 0xbb) {
        iVar8 = 0x6c;
      }
      if (((*(int *)((int)this + 0x1644) == 0) && (iVar8 != 0)) &&
         (uVar2 = 0, *(int *)((int)this + 0x16b0) != 0 || *(int *)((int)this + 0x16b4) != 0)) {
        uVar2 = F_00ab4610(iVar8,this,0);
        *(uint *)((int)this + 0x1644) = uVar2;
      }
      if (*(int *)((int)this + 0x1648) == 0) {
        bVar1 = *(byte *)(uVar4 + 0x1d);
        uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
        if (bVar1 != 0) {
          uVar2 = F_00ab4370((uint)bVar1,this,this,0,0);
          *(uint *)((int)this + 0x1648) = uVar2;
        }
      }
      if (*(int *)((int)this + 0x1644) != 0) {
        uVar2 = F_00983120(*(int *)((int)this + 0x1644),(int)this + 0x180);
      }
      if (*(int *)((int)this + 0x1648) != 0) {
        uVar2 = F_00983120(*(int *)((int)this + 0x1648),(int)this + 0x180);
      }
    }
    uVar4 = (uint)*(ushort *)(uVar4 + 10);
    if (((*(byte *)((int)this + 0x2dd2) & 4) != 0) && (uVar4 == 0x53)) {
      uVar4 = 0x59;
    }
    goto LAB_00aa4b60;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
  uVar4 = F_00ab1fc0(*(undefined4 *)(uVar2 + 4));
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
  if ((char)uVar2 != '\0') {
    uVar2 = 0;
    if (*(short *)(uVar4 + 8) == 0xaa) {
      uVar9 = F_00aa1840(this);
      piVar5 = (int *)F_00475fa0((int)uVar9,(int)(uVar9 >> 0x20));
      if (piVar5 != (int *)0x0) {
        uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 4))(piVar5);
        uVar2 = 0xad;
        if (uVar6 != 5) goto LAB_00aa49ea;
      }
      uVar2 = 0xac;
    }
LAB_00aa49ea: ;
    if ((*(int *)((int)this + 0x1648) == 0) && (uVar2 != 0)) {
      uVar2 = F_00ab4370(uVar2,this,this,0,0);
      *(uint *)((int)this + 0x1648) = uVar2;
    }
    if (*(int *)((int)this + 0x1648) != 0) {
      uVar2 = F_00983120(*(int *)((int)this + 0x1648),(int)this + 0x180);
    }
  }
  uVar4 = (uint)*(ushort *)(uVar4 + 6);
LAB_00aa4b60: ;
  if ((*(byte *)((int)this + 0x2dd2) & 0x40) == 0) {
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar7 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar7 = this;
    }
    uVar2 = F_0053c3a0((int)pvVar7 + 0x680,1);
    if ((int)uVar2 < 3) {
      if (uVar4 != 0) {
        uVar2 = F_00aa4150(this,uVar4,0,0);
      }
      *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) | 0x40;
    }
  }
  return uVar2;
}

/* ref: FUN_00aa4f40 */
uint F_00aa4f40(unsigned int gen_a0)
{
  GEN_ENTER(0xaa4f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined * pvVar4;
  float10 fVar5;
  undefined4 uVar6;
  float local_c;
  float local_8;
  
  if (*(byte *)((int)this + 0x18b) != 1) {
    uVar3 = *(byte *)((int)this + 0x18b) - 3;
    if (uVar3 != 0) {
      return uVar3;
    }
    uVar3 = REFG(undefined4, 0x137104c);
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198) +
                   (float10)*(float *)((int)this + 0x18c))));
    *(float *)((int)this + 0x18c) = fVar1;
    fVar2 = REFG(float, 0x1087f04);
    if ((float10)1 < (float10)fVar1) {
      *(byte *)((int)this + 0x8e) = *(byte *)((int)this + 0x8e) & 0xfd;
      *(float *)((int)this + 0x18c) = fVar2;
    }
    *(float *)((int)this + 0x2ec0) = ((float)GEN_TOF(((float10)1 - (float10)*(float *)((int)this + 0x18c))));
    return uVar3;
  }
  if (!(0.0 < *(float *)((int)this + 0xc4))) {
    uVar3 = 0;
    if (*(int *)((int)this + 0xf0) == 0) {
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar4 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar4 = this;
      }
      uVar3 = F_00531e00((int)pvVar4 + 0x680,0);
      if (uVar3 != 0x43) {
        if ((*(char *)((int)this + 0x2e08) == '\0') ||
           (pvVar4 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0))
        {
          pvVar4 = this;
        }
        uVar3 = F_00531e00((int)pvVar4 + 0x680,0);
        if (uVar3 != 0x49) {
          if ((*(char *)((int)this + 0x2e08) == '\0') ||
             (pvVar4 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0
             )) {
            pvVar4 = this;
          }
          uVar3 = F_00531e00((int)pvVar4 + 0x680,0);
          if (uVar3 != 0) goto LAB_00aa5181;
          if ((*(byte *)((int)this + 0x2dd2) & 4) == 0) {
            uVar6 = 0x43;
          }
          else {
            uVar6 = 0x49;
          }
          F_00aa4270(this,uVar6,0,0);
          uVar3 = F_00aa44a0(this);
        }
      }
    }
    *(undefined1 *)((int)this + 0x18b) = 2;
    goto LAB_00aa5181;
  }
  local_8 = *(float *)((int)this + 200);
  if (GEN_ISNAN(local_8) != (GEN_ISNAN(local_8) || local_8 == 0.0)) {
    local_8 = REFG(float, 0x1087f04);
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198) * (float10)local_8)));
  fVar5 = (float10)fVar1;
  fVar2 = ((float)GEN_TOF(((fVar5 * (float10)*(float *)((int)this + 0x18c)) *
                 (float10)*(float *)((int)this + 0x18c))));
  local_c = fVar2;
  if (fVar5 < (float10)fVar2) {
    local_c = fVar1;
  }
  local_c = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc4) - (float10)local_c)));
  if ((double)local_c <= *(double *)&REFG(undefined, 0x10a1b58)) {
    local_c = REFG(float, 0x10c75a0);
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar4 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar4 = this;
    }
    F_00549500((int)pvVar4 + 0x680,0,0x4c,0x49,0,REFG(float, 0x10e79e4),0);
LAB_00aa50ba: ;
    *(undefined1 *)((int)this + 0x18b) = 2;
  }
  else {
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar4 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar4 = this;
    }
    uVar3 = F_00531e00((int)pvVar4 + 0x680,0);
    if (uVar3 == 0) {
      F_00aa4270(this,0x4b,0,0);
      goto LAB_00aa50ba;
    }
  }
  *(float *)((int)this + 0xc4) = local_c;
  uVar3 = F_00a60de0(this);
LAB_00aa5181: ;
  *(float *)((int)this + 0x18c) =
       ((float)GEN_TOF(((float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198) + (float10)*(float *)((int)this + 0x18c))));
  return uVar3;
}

/* ref: FUN_00aa51a0 */
uint F_00aa51a0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa51a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x630) == 1) {
    uVar1 = F_00aa4270(this,0x28e,0,0);
  }
  else {
    uVar1 = *(int *)((int)this + 0x630) - 2;
    if (uVar1 == 0) {
      uVar1 = F_00aa4270(this,0x283,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00aa51d0 */
uint F_00aa51d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xaa51d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x10e6dac));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  bVar1 = F_00546350((undefined *)((int)this + 0xa10),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_3,param_4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa5250 */
uint F_00aa5250(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xaa5250u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(float *)(gen_frame + 0x1c)) = 0.0;
  (*(float *)(gen_frame + 0x1c)) = param_2;
  (*(float *)(gen_frame + 0x18)) = -3.689349e+19;
  (*(float *)(gen_frame + 0x18)) = param_3;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x10e6dac));
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x10)) = 3;
  (*(float *)(gen_frame + 0x20)) = param_4;
  bVar1 = F_00546350((undefined *)(param_1 + 0xa10),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_5,param_6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa52e0 */
uint F_00aa52e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa52e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xe0000000;
  (*(undefined4 *)(gen_frame + 0x18)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_1[1];
  uVar1 = param_1[2];
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x10e6dac));
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  (*(undefined4 *)(gen_frame + 0x20)) = uVar1;
  bVar2 = F_00546350((undefined *)((int)this + 0xa10),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_2,param_3);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_00aa5370 */
uint F_00aa5370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xaa5370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ebx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined1 uVar1;
  ushort uVar2;
  ushort * puVar3;
  uint uVar4;
  undefined * pvVar5;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  pvVar5 = (undefined *)0x0;
  F_0068e790(((undefined1 *)(gen_frame + 0x8)));
  F_0068eab0(&(*(uint *)(gen_frame + 0x50)));
  F_0068eb40(&(*(uint *)(gen_frame + 0x0)));
  puVar3 = (ushort *)F_00ab2960(param_2);
  if (puVar3 == (ushort *)0x0) goto LAB_00aa53ae;
  uVar4 = (uint)(byte)puVar3[2];
  if (uVar4 == 1) {
    F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x48);
    if (param_3 != 0) {
      F_00c46aa0(((undefined1 *)(gen_frame + 0x8)),param_3,0x1a);
    }
    if (param_4 == (undefined4 *)0x0) {
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 1;
      (*(undefined4 *)(gen_frame + 0x28)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 2)),1);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 0)) = 1;
      (*(undefined4 *)(gen_frame + 0x2c)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 2)),1);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x30)) + 0)) = 1;
      (*(undefined4 *)(gen_frame + 0x30)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x30)) + 2)),1);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 0)) = 1;
      (*(undefined4 *)(gen_frame + 0x34)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 2)),1);
    }
    else {
      (*(undefined4 *)(gen_frame + 0x24)) = *param_4;
      (*(undefined4 *)(gen_frame + 0x28)) = param_4[1];
      (*(undefined4 *)(gen_frame + 0x2c)) = param_4[2];
      (*(undefined4 *)(gen_frame + 0x30)) = param_4[3];
      (*(undefined4 *)(gen_frame + 0x34)) = param_4[4];
      (*(undefined4 *)(gen_frame + 0x38)) = param_4[5];
      (*(undefined4 *)(gen_frame + 0x3c)) = param_4[6];
      (*(undefined4 *)(gen_frame + 0x40)) = param_4[7];
      (*(undefined4 *)(gen_frame + 0x44)) = param_4[8];
      (*(undefined4 *)(gen_frame + 0x48)) = param_4[9];
    }
    (*(undefined1 *)(gen_frame + 0x4c)) = *(undefined1 *)((int)puVar3 + 7);
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x820,0x10)));
    if (pvVar5 == (undefined *)0x0) {
LAB_00aa53ae: ;
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 0;
    }
    pvVar5 = (undefined *)F_006ae3e0(pvVar5);
    if (pvVar5 == (undefined *)0x0) goto LAB_00aa53ae;
    F_006ac2b0(pvVar5,((undefined1 *)(gen_frame + 0x8)));
  }
  else if (uVar4 == 2) {
    (*(uint *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    uVar2 = *puVar3;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 0)) = uVar2;
    (*(uint *)(gen_frame + 0x50)) = (uint)uVar2;
    F_0068eaf0(&(*(uint *)(gen_frame + 0x50)),param_5);
    if (param_4 == (undefined4 *)0x0) {
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x58)) + 0)) = 1;
      (*(undefined4 *)(gen_frame + 0x58)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x58)) + 2)),1);
    }
    else {
      (*(undefined4 *)(gen_frame + 0x54)) = *param_4;
      (*(undefined4 *)(gen_frame + 0x58)) = param_4[1];
      (*(undefined4 *)(gen_frame + 0x5c)) = param_4[2];
      (*(undefined4 *)(gen_frame + 0x60)) = param_4[3];
      (*(undefined4 *)(gen_frame + 0x64)) = param_4[4];
    }
    uVar1 = *(undefined1 *)((int)puVar3 + 7);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 3)) = uVar1;
    (*(uint *)(gen_frame + 0x50)) = CONCAT13(uVar1,(undefined3)(*(uint *)(gen_frame + 0x50)));
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x7a0,0x10)));
    if (pvVar5 == (undefined *)0x0) goto LAB_00aa53ae;
    pvVar5 = (undefined *)F_006ae5b0(pvVar5);
    if (pvVar5 == (undefined *)0x0) goto LAB_00aa53ae;
    F_006ac810(pvVar5,&(*(uint *)(gen_frame + 0x50)));
  }
  else {
    uVar4 = uVar4 - 3;
    if (uVar4 != 0) goto LAB_00aa55ad;
    (*(uint *)(gen_frame + 0x0)) = uVar4;
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x750,0x10)));
    if (pvVar5 == (undefined *)0x0) goto LAB_00aa53ae;
    pvVar5 = (undefined *)F_006ae6d0(pvVar5);
    if (pvVar5 == (undefined *)0x0) goto LAB_00aa53ae;
    uVar2 = *puVar3;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = uVar2;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 2)) = (ushort)*(byte *)((int)puVar3 + 5);
    (*(uint *)(gen_frame + 0x0)) = (uint)CONCAT12(*(byte *)((int)puVar3 + 5),uVar2);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = (ushort)(byte)puVar3[3];
    (*(uint *)(gen_frame + 0x4)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 2)),(ushort)(byte)puVar3[3]);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 3)) = *(undefined1 *)((int)puVar3 + 7);
    (*(uint *)(gen_frame + 0x4)) = CONCAT13(*(undefined1 *)((int)puVar3 + 7),(undefined3)(*(uint *)(gen_frame + 0x4)));
    F_0068eb60(&(*(uint *)(gen_frame + 0x0)),param_5);
    F_006ac9f0(pvVar5,in_ebx,&(*(uint *)(gen_frame + 0x0)));
  }
  F_0068bd00(REFG(void * PTR32, 0x1371294),pvVar5);
  F_00690620(pvVar5);
LAB_00aa55ad: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)pvVar5;
}

/* ref: FUN_00aa55c0 */
uint F_00aa55c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa55c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ebx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ushort uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar4 = (undefined4 *)0x0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  if (param_2 < 1000000) {
    puVar2 = (undefined4 *)F_00ab22f0(param_2);
    if (puVar2 != (undefined4 *)0x0) {
      (*(uint *)(gen_frame + 0xc)) = (uint)*(ushort *)((int)puVar2 + 10);
      if (*(ushort *)(puVar2 + 3) != 0) {
        (*(uint *)(gen_frame + 0x8)) = F_00ab2350((uint)*(ushort *)(puVar2 + 3));
      }
      uVar1 = *(ushort *)((int)puVar2 + 10);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      uVar3 = F_00ab2960((uint)uVar1);
      if ((uVar3 != 0) && (*(char *)(uVar3 + 4) == '\x02')) {
        (*(undefined4 *)(gen_frame + 0x14)) = 1;
      }
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar2;
      puVar4 = &(*(undefined4 *)(gen_frame + 0x10));
    }
  }
  else {
    uVar3 = F_00ab2410(param_2);
    if (uVar3 != 0) {
      (*(uint *)(gen_frame + 0xc)) = (uint)*(ushort *)(uVar3 + 0xbe);
      (*(uint *)(gen_frame + 0x8)) = uVar3 + 0xc6;
      puVar4 = (undefined4 *)(uVar3 + 0x94);
    }
  }
  uVar3 = F_00aa5370(in_ebx,(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x8)),puVar4,0);
  if (uVar3 != 0) {
    *(undefined4 *)(uVar3 + 0x50) = (*(undefined4 *)(gen_frame + 0x4));
    *(undefined4 *)(uVar3 + 0x54) = (*(undefined4 *)(gen_frame + 0x4));
    *(undefined4 *)(uVar3 + 0x58) = (*(undefined4 *)(gen_frame + 0x4));
    *(uint *)(uVar3 + 0x24) = *(uint *)(uVar3 + 0x24) | 2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: FUN_00aa56d0 */
unsigned int F_00aa56d0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa56d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  uint * puVar5;
  uint uVar6;
  int local_8;
  
  if ((((*(int *)((int)this + 0xec) != 0) &&
       (uVar2 = F_00ab22f0(*(undefined4 *)((int)this + 0x80)), uVar2 != 0)) &&
      (*(byte *)(uVar2 + 0x16) != 0)) &&
     (puVar3 = (uint *)F_00ab23b0((uint)*(byte *)(uVar2 + 0x16)), puVar3 != (uint *)0x0)) {
    iVar4 = 0;
    local_8 = 0x96;
    puVar5 = puVar3;
    do {
      cVar1 = *(char *)((int)this + iVar4 + 0x2eec);
      if (cVar1 == '\0') {
        uVar2 = *puVar5;
        if (uVar2 != 0) {
          uVar6 = (uint)*(byte *)(iVar4 + 0x18 + (int)puVar3);
LAB_00aa5792: ;
          F_006a0720(*(undefined * PTR32 *)((int)this + 0xec),(uVar2 & 0xffffff) + (int)puVar5,uVar6);
        }
      }
      else if (cVar1 == '\x01') {
        uVar2 = *puVar5;
        if (uVar2 != 0) {
          uVar6 = 1;
          goto LAB_00aa5792;
        }
      }
      else if (cVar1 == '\x02') {
        if (*puVar5 != 0) {
          F_006a0720(*(undefined * PTR32 *)((int)this + 0xec),(*puVar5 & 0xffffff) + (int)puVar5,0);
        }
        if (*(char *)(iVar4 + 0x1c + (int)puVar3) == '\x01') {
          F_00aa4270(this,local_8,0,0);
        }
      }
      local_8 = local_8 + 3;
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (local_8 < 0xa2);
  }
  return 0;
}

/* ref: FUN_00aa57d0 */
uint F_00aa57d0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa57d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  byte * pbVar4;
  byte * pbVar5;
  uint * puVar6;
  
  F_00a61d10(this);
  if (*(char *)((int)this + 0x2e95) == '\x01') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x128))))(*(int * PTR32 *)((int)this + 0xec));
    iVar2 = (uVar1 & 0xffff) + 20000;
    *(int *)((int)this + 0x2e9c) = iVar2;
    uVar1 = F_00ab2930(iVar2);
    if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x2e9c) = 0;
      uVar1 = F_00ab2930(0);
    }
    *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(uVar1 + 8);
    *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(uVar1 + 0xc);
  }
  F_00aa56d0(this);
  pbVar5 = (byte *)((int)this + 0x2ef1);
  do {
    if (*pbVar5 != 0) {
      puVar3 = (uint *)F_00ab23e0((uint)*pbVar5);
      if (puVar3 == (uint *)0x0) {
        return 0;
      }
      iVar2 = 0;
      puVar6 = puVar3;
      do {
        if (*puVar6 != 0) {
          F_006a0720(*(undefined * PTR32 *)((int)this + 0xec),(*puVar6 & 0xffffff) + (int)puVar6,
                       (uint)*(byte *)(iVar2 + 0x11 + (int)puVar3));
        }
        iVar2 = iVar2 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar2 < 3);
    }
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar5 + (-0x2ef1 - (int)this);
  } while ((int)pbVar4 < 5);
  if (*(undefined * PTR32 *)((int)this + 0xec) != (undefined *)0x0) {
    F_00689160(*(undefined * PTR32 *)((int)this + 0xec),this,((code *)REFP(0xaa1420)),((code *)REFP(0xaa1440)));
    pbVar4 = (byte *)F_00541850((undefined *)((int)this + 0xa10));
  }
  return (uint)pbVar4;
}

/* ref: FUN_00aa58e0 */
uint F_00aa58e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa58e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined * pvVar2;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined * pvVar3;
  undefined3 extraout_var_00 = 0;
  
  bVar1 = F_00a620a0();
  if (((bVar1 == 0) || (pvVar2 = (undefined *)F_00a62220(this), (char)pvVar2 == '\0')) &&
     (pvVar2 = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xac),
     *(int *)((int)pvVar2 + 0x14) != 0)) {
    in_ecx = F_006b8c00();
    bVar1 = F_006c5260(in_ecx);
    pvVar2 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
    if ((((bVar1 == 0) &&
         (pvVar2 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,2))), *(char *)((int)this + 0x188) != '\x02')) &&
        ((*(char *)((int)this + 0x2ece) != '\x02' &&
         ((param_1 != *(int *)((int)this + 0x1a8) &&
          (pvVar3 = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1), pvVar2 = pvVar3,
          pvVar3 != (undefined *)0x0)))))) &&
       ((REFG(void * PTR32, 0x1379694) != this &&
        ((((*(int *)((int)this + 0x1a8) = param_1, REFG(void * PTR32, 0x1379694) == this || (REFG(void * PTR32, 0x1379694) == pvVar3))
          || (pvVar2 = ((undefined *)GEN_TOP(CONCAT31((int3)((uint)REFG(void * PTR32, 0x1379694) >> 8),0x10))),
             (*(byte *)((int)this + 0x2dd2) & 0x10) != 0)) ||
         ((*(byte *)((int)pvVar3 + 0x2dd2) & 0x10) != 0)))))) {
      bVar1 = F_009a3130(REFG(void * PTR32, 0x1487c8c),(uint)*(ushort *)((int)this + 0x88),
                           (uint)*(ushort *)((int)pvVar3 + 0x88));
      pvVar2 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_00,bVar1)));
      if (REFG(void * PTR32, 0x1379694) == pvVar3) {
        pvVar2 = (undefined *)F_0043f8b0(0x3c);
      }
    }
  }
  return (uint)pvVar2;
}

/* ref: FUN_00aa59d0 */
uint F_00aa59d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa59d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  byte bVar2;
  uint uVar3;
  uint in_EAX = 0;
  uint uVar4;
  undefined * this_00;
  undefined4 * puVar5;
  int iVar6;
  
  if (3 < param_1) {
    return in_EAX;
  }
  if (*(int *)((int)this + 0xec) == 0) {
    return in_EAX;
  }
  uVar4 = F_00ab22f0(*(undefined4 *)((int)this + 0x80));
  if (uVar4 == 0) {
    return 0;
  }
  bVar2 = *(byte *)(uVar4 + 0x16);
  if (bVar2 == 0) {
    return CONCAT31((int3)(uVar4 >> 8),bVar2);
  }
  uVar4 = F_00ab23b0((uint)bVar2);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  if (param_2 == 0) {
    uVar3 = *(uint *)(uVar4 + param_1 * 4);
    if (uVar3 != 0) {
      F_006a0720(*(undefined * PTR32 *)((int)this + 0xec),(uVar3 & 0xffffff) + uVar4 + param_1 * 4,
                   (uint)*(byte *)(uVar4 + 0x18 + param_1));
    }
    if ((*(char *)(param_1 + 0x2eec + (int)this) != '\x02') ||
       (*(char *)((*(uint *)(gen_frame + 0x1c)) + 0x1c + param_1) != '\x01')) goto LAB_00aa5afc;
    iVar6 = param_1 * 3 + 0x97;
  }
  else {
    if (param_2 == 1) {
      puVar1 = (uint *)(uVar4 + param_1 * 4);
      uVar4 = *puVar1;
      if (uVar4 != 0) {
        F_006a0720(*(undefined * PTR32 *)((int)this + 0xec),(uVar4 & 0xffffff) + (int)puVar1,1);
      }
      goto LAB_00aa5afc;
    }
    if (param_2 != 2) goto LAB_00aa5afc;
    F_00aa4270(this,0x94,0,0);
    uVar4 = *(uint *)((*(uint *)(gen_frame + 0x1c)) + param_1 * 4);
    if (uVar4 != 0) {
      F_006a0720(*(undefined * PTR32 *)((int)this + 0xec),(uVar4 & 0xffffff) + (*(uint *)(gen_frame + 0x1c)) + param_1 * 4,0);
    }
    if (*(char *)((*(uint *)(gen_frame + 0x1c)) + 0x1c + param_1) != '\x01') goto LAB_00aa5afc;
    iVar6 = param_1 * 3 + 0x95;
  }
  F_00aa4270(this,iVar6,0,0);
LAB_00aa5afc: ;
  *(undefined1 *)(param_1 + 0x2eec + (int)this) = (undefined1)param_2;
  this_00 = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),param_3);
  uVar4 = 0;
  if (this_00 != (undefined *)0x0) {
    F_00a7d4b0(0x25d,this,this_00,0,0,0,0,0,0,REFG(float, 0x10916ec));
    puVar5 = (undefined4 *)F_00a5feb0(this_00);
    (*(undefined4 *)(gen_frame + 0x0)) = *puVar5;
    (*(undefined4 *)(gen_frame + 0x4)) = puVar5[1];
    (*(undefined4 *)(gen_frame + 0x8)) = puVar5[2];
    uVar4 = F_00ab44e0(0xa2,&(*(undefined4 *)(gen_frame + 0x0)),(float)(float10)1,0);
  }
  return uVar4;
}

/* ref: FUN_00aa5b90 */
uint F_00aa5b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa5b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  
  puVar2 = (uint *)F_00ab23e0(param_1);
  uVar3 = 0;
  if (puVar2 != (uint *)0x0) {
    bVar1 = *(byte *)((int)puVar2 + 0xe);
    uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)puVar2) >> 8),bVar1);
    if (bVar1 < 5) {
      *(undefined1 *)(bVar1 + 0x2ef1 + (int)this) = (undefined1)param_1;
      if (*(int *)((int)this + 0xec) != 0) {
        if (*(char *)((int)puVar2 + 0xf) != -1) {
          F_00aa4150(this,*(char *)((int)puVar2 + 0xf) + 0x90,0,0);
        }
        if ((char)puVar2[4] != -1) {
          F_00aa4150(this,(char)puVar2[4] + 0x73,0,0);
        }
        if ((short)puVar2[3] == 0) {
          *(undefined4 *)((int)this + 0x514) = 3;
          *(undefined4 *)((int)this + 0x518) = 0x22;
        }
        else {
          *(uint *)((int)this + 0x514) = (uint)(ushort)puVar2[3];
          *(uint *)((int)this + 0x518) = (uint)(ushort)puVar2[3];
        }
        iVar4 = 0;
        puVar5 = puVar2;
        do {
          uVar3 = 0;
          if (*puVar5 != 0) {
            uVar3 = F_006a0720(*(undefined * PTR32 *)((int)this + 0xec),(*puVar5 & 0xffffff) + (int)puVar5,
                                 (uint)*(byte *)(iVar4 + 0x11 + (int)puVar2));
          }
          iVar4 = iVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar4 < 3);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00aa5c80 */
uint F_00aa5c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa5c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined * pvVar2;
  
  F_00a7d4b0(0x1fe,this,this,0,0,param_1 & 0xffff,0,0,0,REFG(float, 0x10916ec));
  (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1375ac0);
  (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1375ac4);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1335e70);
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1375ac8);
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  if ((*(char *)((int)this + 0x2e08) == '\0') ||
     (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar2 = this;
  }
  *(undefined4 *)((int)this + 400) = REFG(float, 0x10944e8);
  uVar1 = F_00549140((undefined *)((int)pvVar2 + 0x680),
                       (-(uint)((*(byte *)((int)this + 0x2dd2) & 4) != 0) & 6) + 0x3e,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),1);
  return uVar1;
}

/* ref: FUN_00aa5d80 */
uint F_00aa5d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa5d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if ((REFG(int, 0x137104c) != 0) &&
     (uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x55), *(int *)(uVar1 + 0x14) == 0))
  {
    return uVar1;
  }
  if ((param_2 != 0xb) && (param_2 != 0x1e)) {
    if (0x27 < param_1) {
      uVar1 = F_00aa4150(this,0x277 - (uint)(param_1 < 100),0,0);
      return uVar1;
    }
    uVar1 = F_00aa4150(this,0x275,0,0);
    return uVar1;
  }
  if (0x27 < param_1) {
    uVar1 = F_00aa4150(this,0x27a - (uint)(param_1 < 100),0,0);
    return uVar1;
  }
  uVar1 = F_00aa4150(this,0x278,0,0);
  return uVar1;
}

/* ref: FUN_00aa5e20 */
unsigned int F_00aa5e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa5e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  code * pcVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  undefined * pvVar6;
  
  F_00a5f970(this,param_1);
  *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) & 0xfe;
  *(byte *)((int)this + 0x2dd4) = *(byte *)((int)this + 0x2dd4) & 0xdf;
  *(undefined4 *)((int)this + 0x2e98) = 0;
  *(undefined4 *)((int)this + 0x2e9c) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  F_00a5f450(this,0xe0000000);
  F_00a5f430(this,0);
  uVar3 = REFG(float, 0x1087f04);
  *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) & 0xbf;
  *(byte *)((int)this + 0x2dd3) = *(byte *)((int)this + 0x2dd3) & 0xfa;
  *(undefined2 *)((int)this + 0x16a0) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined1 *)((int)this + 0x18a) = 0;
  *(undefined1 *)((int)this + 0x8a) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x195) = 0;
  *(undefined2 *)((int)this + 0x168e) = 0;
  *(undefined4 *)((int)this + 0x2de0) = uVar3;
  *(undefined4 *)((int)this + 0x1688) = 0;
  *(undefined4 *)((int)this + 0x1694) = 0;
  *(undefined4 *)((int)this + 0x1690) = 0;
  *(undefined4 *)((int)this + 0x169c) = 0;
  *(undefined4 *)((int)this + 0x1698) = 0;
  *(undefined4 *)((int)this + 0x16a2) = 0;
  *(undefined4 *)((int)this + 0x16a6) = 0;
  *(undefined1 *)((int)this + 0x2dec) = 0;
  *(undefined4 *)((int)this + 0x2df4) = 0;
  *(undefined2 *)((int)this + 0x2e08) = 0;
  *(undefined1 *)((int)this + 0x2e0a) = 0;
  *(undefined4 *)((int)this + 0x2e00) = 0;
  *(undefined4 *)((int)this + 0x2dfc) = 0;
  *(undefined2 *)((int)this + 0x2e0c) = 0;
  *(undefined4 *)((int)this + 0x2e04) = 0;
  pcVar2 = *(gen_code32 *)(*(int *)this + 0x40);
  *(undefined4 *)((int)this + 0x2df0) = 0xe0000000;
  *(undefined4 *)((int)this + 0x2e10) = 0;
  (*pcVar2)(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,(undefined4)gen_fl2bits((float)(float10)0));
  *(undefined4 *)((int)this + 0x2db8) = 0;
  *(undefined4 *)((int)this + 0x2dbc) = 0;
  *(undefined4 *)((int)this + 0x2dc0) = 0;
  *(undefined4 *)((int)this + 0x2dc4) = 0;
  *(undefined4 *)((int)this + 0x2dc8) = 0;
  *(undefined4 *)((int)this + 0x2dcc) = 0;
  *(undefined2 *)((int)this + 0x2dd0) = 0;
  *(byte *)((int)this + 0x1e44) = *(byte *)((int)this + 0x1e44) & 0xf8;
  *(undefined1 *)((int)this + 0x1e45) = 0;
  *(undefined4 *)((int)this + 0x16b0) = 0;
  *(undefined4 *)((int)this + 0x16b4) = 0;
  *(undefined1 *)((int)this + 0x25e5) = 0;
  *(byte *)((int)this + 0x25e4) = *(byte *)((int)this + 0x25e4) & 0xf8;
  *(byte *)((int)this + 0x2d84) = *(byte *)((int)this + 0x2d84) & 0xf8;
  *(undefined4 *)((int)this + 0x1e50) = 0;
  *(undefined4 *)((int)this + 0x1e54) = 0;
  *(undefined1 *)((int)this + 0x2d85) = 0;
  *(undefined4 *)((int)this + 0x25f0) = 0;
  *(undefined4 *)((int)this + 0x25f4) = 0;
  *(undefined4 *)((int)this + 0x2d90) = 0;
  *(undefined4 *)((int)this + 0x2d94) = 0;
  *(undefined4 *)((int)this + 0x2d98) = 0;
  *(undefined4 *)((int)this + 0x2d9c) = 0;
  *(undefined4 *)((int)this + 0x2da0) = 0;
  *(undefined4 *)((int)this + 0x2da4) = 0;
  *(undefined4 *)((int)this + 0x2da8) = 0;
  *(undefined4 *)((int)this + 0x2dac) = 0;
  *(undefined4 *)((int)this + 0x2db0) = 0;
  *(undefined4 *)((int)this + 0x2db4) = 0;
  *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) & 0x5f;
  *(undefined4 *)((int)this + 0x2ea0) = 0;
  *(undefined4 *)((int)this + 0x2ea4) = 0x1000000;
  *(byte *)((int)this + 0x2dd4) = *(byte *)((int)this + 0x2dd4) & 0xe1 | 1;
  uVar5 = F_00ab2a20(3);
  if (uVar5 != 0) {
    if (*(char *)(uVar5 + 7) == '\x01') {
      bVar4 = F_00533ec0((int)this + 0x620);
      if (bVar4 != 0) {
        F_00aa2c50(this,0,0,0);
      }
    }
    if (*(char *)(uVar5 + 4) == '\x03') {
      F_005492d0((undefined *)((int)this + 0x680),3,0,1);
    }
    else if (*(char *)(uVar5 + 4) == '\x04') {
      ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0xd,0);
    }
  }
  if ((*(char *)((int)this + 0x2e08) == '\0') ||
     (pvVar6 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar6 = this;
  }
  F_005492d0((undefined *)((int)pvVar6 + 0x680),3,0,1);
  *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) & 0xe1;
  *(undefined1 *)((int)this + 0x2ecc) = 4;
  *(undefined4 *)((int)this + 0x2eb8) = 0;
  *(undefined1 *)((int)this + 0x2eb4) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1684) = 0;
  *(undefined1 *)((int)this + 0x1680) = 0;
  *(undefined1 *)((int)this + 0x166c) = 0;
  *(undefined1 *)((int)this + 0x2dd5) = 0;
  *(undefined2 *)((int)this + 0x2dd6) = 0;
  *(undefined2 *)((int)this + 0x2ea9) = 0;
  *(undefined4 *)((int)this + 0x2eac) = 0;
  *(undefined1 *)((int)this + 0x2ea8) = 0;
  *(undefined4 *)((int)this + 0x2eb0) = 0;
  *(undefined1 *)((int)this + 0x2de8) = 0;
  *(undefined1 *)((int)this + 0x188) = 1;
  *(undefined1 *)((int)this + 0x18b) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0xe0000000;
  *(undefined4 *)((int)this + 0x1a8) = 0xe0000000;
  *(byte *)((int)this + 0x2deb) = *(byte *)((int)this + 0x2deb) & 0xfd;
  *(undefined4 *)((int)this + 0x1678) = 0xffffffff;
  *(undefined4 *)((int)this + 0x167c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2e14) = 0;
  *(undefined4 *)((int)this + 0x2e18) = 0;
  *(undefined4 *)((int)this + 0x2e1c) = 0;
  *(undefined4 *)((int)this + 0x2e20) = 0;
  *(undefined4 *)((int)this + 0x2e24) = 0;
  *(undefined4 *)((int)this + 0x2e28) = 0;
  *(undefined4 *)((int)this + 0x2e2c) = 0;
  *(undefined4 *)((int)this + 0x2e30) = 0;
  *(undefined4 *)((int)this + 0x2e34) = 0;
  *(undefined4 *)((int)this + 0x2e38) = 0;
  *(undefined4 *)((int)this + 0x2e3c) = 0;
  *(undefined4 *)((int)this + 0x2e40) = 0;
  *(undefined4 *)((int)this + 0x2e44) = 0;
  *(undefined4 *)((int)this + 0x2e48) = 0;
  *(undefined4 *)((int)this + 0x2e4c) = 0;
  *(undefined4 *)((int)this + 0x2e50) = 0;
  *(undefined4 *)((int)this + 0x2e54) = 0;
  *(undefined4 *)((int)this + 0x2e58) = 0;
  *(undefined4 *)((int)this + 0x2e5c) = 0;
  *(undefined4 *)((int)this + 0x2e60) = 0;
  uVar3 = REFG(float, 0x10e79e4);
  *(undefined4 *)((int)this + 0x2e64) = 0;
  *(undefined4 *)((int)this + 0x2e68) = 0;
  *(undefined4 *)((int)this + 0x2e6c) = 0;
  *(undefined4 *)((int)this + 0x2e70) = 0;
  *(undefined4 *)((int)this + 0x2e74) = 0;
  *(undefined4 *)((int)this + 0x2e78) = 0;
  *(undefined4 *)((int)this + 0x2e7c) = 0;
  *(undefined4 *)((int)this + 0x2e80) = 0;
  *(undefined4 *)((int)this + 0x2e84) = 0;
  *(undefined4 *)((int)this + 0x2e88) = 0;
  iVar1 = (int)this + 0x1b0;
  *(undefined4 *)((int)this + 0x2e8c) = 0;
  *(undefined4 *)((int)this + 0x2e90) = 0;
  *(undefined1 *)((int)this + 0x2e94) = 0;
  *(undefined4 *)((int)this + 0x230) = uVar3;
  uVar3 = REFG(float, 0x1087f04);
  *(undefined1 *)((int)this + 0x5d0) = 0;
  *(undefined4 *)((int)this + 0x510) = 0;
  *(undefined4 *)((int)this + 0x514) = 0;
  *(undefined4 *)((int)this + 0x518) = 0;
  *(undefined4 *)((int)this + 0x51c) = uVar3;
  *(undefined1 *)((int)this + 0x5d2) = 0;
  *(undefined4 *)((int)this + 0x5c0) = 0;
  *(undefined4 *)((int)this + 0x5c4) = 0;
  *(undefined4 *)((int)this + 0x5c8) = 0;
  *(undefined1 *)((int)this + 0x5d1) = 0;
  *(undefined4 *)((int)this + 0x5e0) = 0;
  *(undefined4 *)((int)this + 0x5e4) = 0;
  *(undefined4 *)((int)this + 0x5e8) = 0;
  *(undefined4 *)((int)this + 0x5f0) = 0;
  *(undefined4 *)((int)this + 0x5f4) = 0;
  *(undefined4 *)((int)this + 0x5f8) = 0;
  *(undefined4 *)((int)this + 0x5fc) = 0;
  *(undefined4 *)((int)this + 0x600) = 0;
  *(undefined * PTR32 *)((int)this + 0x1c0) = this;
  *(int *)((int)this + 0x3b0) = iVar1;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  F_00a65a30((undefined *)((int)this + 0x3a0),1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x374) + 4))))((int)this + 0x374,iVar1);
  F_00aeb090((int)this + 0x4c0,iVar1);
  *(int *)((int)this + 0x610) = iVar1;
  *(undefined4 *)((int)this + 0x62c) = 0;
  *(undefined4 *)((int)this + 0x630) = 0;
  *(undefined4 *)((int)this + 0x658) = 0;
  *(undefined1 *)((int)this + 0x65c) = 0;
  *(undefined4 *)((int)this + 0x660) = 0;
  *(undefined4 *)((int)this + 0x668) = 0xe0000000;
  *(undefined4 *)((int)this + 0x66c) = 0;
  *(undefined4 *)((int)this + 0x670) = 0;
  *(undefined4 *)((int)this + 0x674) = 0;
  *(undefined * PTR32 *)((int)this + 0x628) = this;
  F_00a65220((undefined *)((int)this + 0x680));
  *(undefined * PTR32 *)((int)this + 0x690) = this;
  F_005320c0((undefined *)((int)this + 0x680),this);
  *(undefined4 *)((int)this + 0x954) = 0;
  *(undefined4 *)((int)this + 0x958) = 0;
  *(undefined4 *)((int)this + 0x95c) = 0;
  *(undefined4 *)((int)this + 0x960) = 0;
  *(undefined4 *)((int)this + 0x964) = 0;
  *(undefined4 *)((int)this + 0x968) = 0;
  *(undefined4 *)((int)this + 0x96c) = 0;
  *(undefined4 *)((int)this + 0x970) = 0;
  *(undefined4 *)((int)this + 0x974) = 0;
  *(undefined4 *)((int)this + 0x978) = 0;
  *(undefined4 *)((int)this + 0x97c) = 0;
  *(undefined4 *)((int)this + 0x980) = 0;
  *(undefined4 *)((int)this + 0x984) = 0;
  *(undefined4 *)((int)this + 0x988) = 0;
  *(undefined4 *)((int)this + 0x98c) = 0;
  *(undefined4 *)((int)this + 0x990) = 0;
  *(undefined4 *)((int)this + 0x994) = 0;
  *(undefined4 *)((int)this + 0x998) = 0;
  *(undefined4 *)((int)this + 0x99c) = 0;
  *(undefined4 *)((int)this + 0x9a4) = 0;
  *(undefined1 *)((int)this + 0x9a0) = 0;
  *(undefined1 *)((int)this + 0xa08) = 0;
  *(undefined * PTR32 *)((int)this + 0x950) = this;
  F_00534450((int)this + 0x940);
  *(undefined4 *)((int)this + 0xa20) = 0;
  *(undefined4 *)((int)this + 0x1330) = 0;
  *(undefined4 *)((int)this + 0x1334) = 0xffffffff;
  *(undefined1 *)((int)this + 0x1338) = 0;
  F_0053b290((undefined *)((int)this + 0xa10));
  *(undefined * PTR32 *)((int)this + 0xa20) = this;
  F_00535c40((int)this + 0xa10);
  *(undefined4 *)((int)this + 0x1644) = 0;
  *(undefined4 *)((int)this + 0x1648) = 0;
  *(undefined4 *)((int)this + 0x164c) = 0;
  *(undefined4 *)((int)this + 0x1650) = 0;
  *(undefined4 *)((int)this + 0x1654) = 0;
  *(undefined4 *)((int)this + 0x1658) = 0;
  *(undefined4 *)((int)this + 0x165c) = 0;
  *(undefined4 *)((int)this + 0x1660) = 0;
  *(undefined4 *)((int)this + 0x1664) = 0;
  *(undefined4 *)((int)this + 0x1668) = 0;
  F_00b78380((int)this + 0x1340);
  F_00bc8280((undefined *)((int)this + 0x1570));
  F_00bc5be0((undefined *)((int)this + 0x15dc),this);
  uVar3 = REFG(float, 0x1087f04);
  *(undefined1 *)((int)this + 0x2ebc) = 0;
  *(undefined2 *)((int)this + 0x2ebd) = 0;
  *(undefined1 *)((int)this + 0x2ebf) = 0;
  *(byte *)((int)this + 0x2dd3) = *(byte *)((int)this + 0x2dd3) & 0xfd;
  *(undefined4 *)((int)this + 0x2ec0) = uVar3;
  *(undefined4 *)((int)this + 0x2ec4) = uVar3;
  *(undefined4 *)((int)this + 0x2ec8) = 0;
  *(undefined2 *)((int)this + 0x2ecd) = 0;
  *(undefined4 *)((int)this + 0x2ed0) = 0;
  *(undefined1 *)((int)this + 0x2ecf) = 0;
  *(undefined4 *)((int)this + 0x2ed4) = 0;
  *(byte *)((int)this + 0x2dd3) = *(byte *)((int)this + 0x2dd3) & 0x17 | 8;
  *(undefined4 *)((int)this + 0x2ed8) = 0xe0000000;
  *(undefined4 *)((int)this + 0x2edc) = 0xe0000000;
  *(undefined4 *)((int)this + 12000) = 0xe0000000;
  *(undefined4 *)((int)this + 0x2ee4) = 0xe0000000;
  *(undefined4 *)((int)this + 0x2ee8) = 0xe0000000;
  *(undefined4 *)((int)this + 0x2eec) = 0;
  *(undefined4 *)((int)this + 0x2ef1) = 0;
  *(undefined1 *)((int)this + 0x2ef5) = 0;
  *(byte *)((int)this + 0x2dd3) = *(byte *)((int)this + 0x2dd3) & 0xef;
  *(byte *)((int)this + 0x2dd4) = *(byte *)((int)this + 0x2dd4) | 0x40;
  *(undefined4 *)((int)this + 0x2ef8) = 0;
  *(undefined1 *)((int)this + 0x2efc) = 0;
  *(undefined4 *)((int)this + 0x2efe) = 0;
  *(undefined2 *)((int)this + 0x2f02) = 0;
  *(undefined1 *)((int)this + 0x2f04) = 4;
  *(undefined4 *)((int)this + 0x2f08) = 0;
  *(undefined4 *)((int)this + 0x2f0c) = 0;
  *(undefined4 *)((int)this + 0x2f10) = 0;
  *(undefined1 *)((int)this + 0x2f14) = 0;
  *(undefined4 *)((int)this + 0x2f18) = 0;
  *(undefined1 *)((int)this + 0x2f1c) = 0;
  return 0;
}

/* ref: FUN_00aa6560 */
uint F_00aa6560(unsigned int gen_a0)
{
  GEN_ENTER(0xaa6560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  int * piVar8;
  int local_8;
  
  local_8 = 0;
  puVar7 = (undefined4 *)((int)this + 0x1644);
  do {
    if ((undefined *)*puVar7 != (undefined *)0x0) {
      if (local_8 - 6U < 2) {
        F_009bc5d0((undefined *)*puVar7,0);
      }
      F_009bc530((undefined *)*puVar7,1);
      F_00983120(*puVar7,0);
      *puVar7 = 0;
    }
    local_8 = local_8 + 1;
    puVar7 = puVar7 + 1;
  } while (local_8 < 8);
  piVar8 = (int *)((int)this + 0x1664);
  local_8 = 2;
  do {
    piVar1 = (int *)*piVar8;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      puVar7 = (undefined4 *)*piVar8;
      if (puVar7 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar7)(puVar7,1);
        *piVar8 = 0;
      }
    }
    piVar8 = piVar8 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar8 = *(int * PTR32 *)((int)this + 0x2ea0);
  if (piVar8 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar8 + 0x50))(piVar8,500);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2ea0) + 0x78))))(*(int * PTR32 *)((int)this + 0x2ea0),500);
    *(undefined4 *)((int)this + 0x2ea0) = 0;
  }
  if (*(int *)((int)this + 0x2df4) != 0) {
    F_009944e0(REFG(void * PTR32, 0x14a0d28),(undefined4 *)((int)this + 0x2df4));
    *(undefined4 *)((int)this + 0x2df4) = 0;
  }
  *(undefined1 *)((int)this + 0x2dec) = 0;
  *(undefined4 *)((int)this + 0x2df0) = 0xe0000000;
  F_00aa44a0(this);
  iVar2 = *(int *)((int)this + 0xec);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 200) == 0)) goto LAB_00aa66d9;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar2 + 200))) {
  case 1: ;
  case 3: ;
    iVar4 = *(int *)(iVar2 + 0xd4);
    pvVar6 = *(undefined * PTR32 *)(iVar2 + 0xd0);
    break;
  case 2: ;
  case 4: ;
    iVar4 = *((int *)GEN_TOP((*(int *)(iVar2 + 0xd4) + 0x74)));
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0xd0) + 0x74)));
    break;
  default: ;
    goto switchD_00aa6674_default;
  }
  if (((iVar4 != 0) && (pvVar6 != (undefined *)0x0)) && (*(undefined * PTR32 *)(iVar4 + 0x20) == pvVar6)) {
    F_006886d0(pvVar6);
    F_0068bd00(REFG(void * PTR32, 0x1371294),pvVar6);
  }
switchD_00aa6674_default: ;
  *(undefined4 *)(iVar2 + 200) = 0;
  *(undefined4 *)(iVar2 + 0xd0) = 0;
  *(undefined4 *)(iVar2 + 0xd4) = 0;
  *(undefined4 *)(iVar2 + 0xd8) = 0;
LAB_00aa66d9: ;
  if (*(char *)((int)this + 0x2e08) != '\0') {
    F_00b5c1e0(REFG(void * PTR32, 0x14c4e84),*(ushort *)((int)this + 0x88) + 1);
  }
  piVar8 = *(int * PTR32 *)((int)this + 0x2e00);
  if (piVar8 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar8 + 0xb0))(piVar8);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e00) + 0xb4))))(*(int * PTR32 *)((int)this + 0x2e00),0);
    *(undefined4 *)((int)this + 0x2e00) = 0;
  }
  piVar8 = *(int * PTR32 *)((int)this + 0x2e04);
  if ((piVar8 != (int *)0x0) || (*(short *)((int)this + 0x2e0c) != 0)) {
    *(undefined2 *)((int)this + 0x2e0c) = 0;
    if (piVar8 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar8 + 0xb0))(piVar8);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e04) + 0xb4))))(*(int * PTR32 *)((int)this + 0x2e04),0);
      *(undefined4 *)((int)this + 0x2e04) = 0;
      F_00a35790(&REFG(undefined, 0x14a31e0),this);
    }
    *(undefined4 *)((int)this + 0x2e04) = 0;
  }
  pvVar6 = this;
  this_00 = (undefined *)F_006b8c00();
  F_006e5b10(this_00,pvVar6);
  uVar3 = REFG(float, 0x10e79e4);
  *(undefined1 *)((int)this + 0x2e94) = 0;
  *(undefined4 *)((int)this + 0x230) = uVar3;
  *(undefined4 *)((int)this + 0x51c) = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined1 *)((int)this + 0x5d0) = 0;
  *(undefined4 *)((int)this + 0x510) = 0;
  *(undefined4 *)((int)this + 0x514) = 0;
  *(undefined4 *)((int)this + 0x518) = 0;
  *(undefined1 *)((int)this + 0x5d2) = 0;
  *(undefined4 *)((int)this + 0x5c0) = 0;
  *(undefined4 *)((int)this + 0x5c4) = 0;
  *(undefined4 *)((int)this + 0x5c8) = 0;
  *(undefined1 *)((int)this + 0x5d1) = 0;
  *(undefined4 *)((int)this + 0x5e0) = 0;
  *(undefined4 *)((int)this + 0x5e4) = 0;
  *(undefined4 *)((int)this + 0x5e8) = 0;
  *(undefined4 *)((int)this + 0x5f0) = 0;
  *(undefined4 *)((int)this + 0x5f4) = 0;
  *(undefined4 *)((int)this + 0x5f8) = 0;
  *(undefined4 *)((int)this + 0x5fc) = 0;
  *(undefined4 *)((int)this + 0x600) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  F_00a65a30((undefined *)((int)this + 0x3a0),1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x374) + 8))))((int)this + 0x374);
  F_00aeb090((int)this + 0x4c0,0);
  *(undefined4 *)((int)this + 0x610) = 0;
  *(undefined4 *)((int)this + 0x628) = 0;
  *(undefined4 *)((int)this + 0x62c) = 0;
  *(undefined4 *)((int)this + 0x630) = 0;
  *(undefined4 *)((int)this + 0x658) = 0;
  *(undefined1 *)((int)this + 0x65c) = 0;
  *(undefined4 *)((int)this + 0x660) = 0;
  *(undefined4 *)((int)this + 0x668) = 0xe0000000;
  *(undefined4 *)((int)this + 0x66c) = 0;
  *(undefined4 *)((int)this + 0x670) = 0;
  *(undefined4 *)((int)this + 0x674) = 0;
  F_00a65220((undefined *)((int)this + 0x680));
  *(undefined4 *)((int)this + 0x950) = 0;
  *(undefined4 *)((int)this + 0x954) = 0;
  *(undefined4 *)((int)this + 0x958) = 0;
  *(undefined4 *)((int)this + 0x95c) = 0;
  *(undefined4 *)((int)this + 0x960) = 0;
  *(undefined4 *)((int)this + 0x964) = 0;
  *(undefined4 *)((int)this + 0x968) = 0;
  *(undefined4 *)((int)this + 0x96c) = 0;
  *(undefined4 *)((int)this + 0x970) = 0;
  *(undefined4 *)((int)this + 0x974) = 0;
  *(undefined4 *)((int)this + 0x978) = 0;
  *(undefined4 *)((int)this + 0x97c) = 0;
  *(undefined4 *)((int)this + 0x980) = 0;
  *(undefined4 *)((int)this + 0x984) = 0;
  *(undefined4 *)((int)this + 0x988) = 0;
  *(undefined4 *)((int)this + 0x98c) = 0;
  *(undefined4 *)((int)this + 0x990) = 0;
  *(undefined4 *)((int)this + 0x994) = 0;
  *(undefined4 *)((int)this + 0x998) = 0;
  *(undefined4 *)((int)this + 0x99c) = 0;
  *(undefined4 *)((int)this + 0x9a4) = 0;
  *(undefined1 *)((int)this + 0x9a0) = 0;
  *(undefined1 *)((int)this + 0xa08) = 0;
  *(undefined4 *)((int)this + 0xa20) = 0;
  *(undefined4 *)((int)this + 0x1330) = 0;
  *(undefined4 *)((int)this + 0x1334) = 0xffffffff;
  *(undefined1 *)((int)this + 0x1338) = 0;
  F_0053b290((undefined *)((int)this + 0xa10));
  piVar8 = (int *)((int)this + 0x2600);
  local_8 = 3;
  do {
    F_00b5c0c0(REFG(void * PTR32, 0x14c4e84),piVar8);
    ((code *)*(gen_code32 *)(piVar8[0x1d4] + 4))(piVar8 + 0x1d4);
    ((code *)*(gen_code32 *)(*piVar8 + 4))(piVar8);
    piVar8 = piVar8 + -0x1e8;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  F_00bc8400(this);
  if ((REFG(void * PTR32, 0x1379694) == this) && (uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this), uVar5 != 0)) {
    pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this)));
    F_00b7bbd0(pvVar6);
  }
  F_00b5c1e0(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)((int)this + 0x88));
  uVar5 = F_00a5fb90(this);
  return uVar5;
}

/* ref: FUN_00aa6a30 */
uint F_00aa6a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa6a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(byte *)((int)this + 0x2dd2) =
       *(byte *)((int)this + 0x2dd2) ^ ((char)param_1 << 4 ^ *(byte *)((int)this + 0x2dd2)) & 0x10;
  uVar1 = F_00aa3da0(this);
  return uVar1;
}

/* ref: FUN_00aa6a50 */
byte F_00aa6a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa6a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte * pbVar1;
  char cVar2;
  byte bVar3;
  
  bVar3 = '\x01' << ((byte)param_2 & 0x1f);
  if ((char)param_3 == '\0') {
    pbVar1 = (byte *)((int)this + param_1 * 0x7a0 + 0x1e45);
    *pbVar1 = *pbVar1 | bVar3;
  }
  else {
    pbVar1 = (byte *)((int)this + param_1 * 0x7a0 + 0x1e45);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  cVar2 = *(char *)((int)this + 0x188);
  if (((cVar2 == '\x05') || (cVar2 == '\x06')) || (cVar2 == '\a')) {
    bVar3 = *(byte *)((int)this + param_1 * 0x7a0 + 0x1e45) & 0xfd;
  }
  else {
    bVar3 = *(byte *)((int)this + param_1 * 0x7a0 + 0x1e45);
  }
  *(byte *)((int)this + param_1 * 0x7a0 + 0x1724) =
       bVar3 == 0 | *(byte *)((int)this + param_1 * 0x7a0 + 0x1724) & 0xfe;
  return 1;
}

/* ref: FUN_00aa6ad0 */
uint F_00aa6ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xaa6ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  int param_8 = (int)gen_a7;
  int param_9 = (int)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ushort * puVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  bool bVar8;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar2 = F_00ac1a20(param_2,param_3);
    (*(uint *)(gen_frame + 0xa8)) = uVar2;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = F_00ab1ed0(uVar2);
      (*(uint *)(gen_frame + 0xac)) = uVar3;
      uVar3 = F_00ab1ed0(uVar2);
      uVar2 = (uint)*(short *)(uVar3 + 0x1a);
      if (((*(char *)((*(uint *)(gen_frame + 0xac)) + 0x34) == '\x01') && (param_4 == -0x20000000)) && (param_5 == 0)) {
        param_4 = param_1[0x1d];
        param_5 = 0;
      }
      if ((((char)param_1[0x5a2] == '\x05') || ((char)param_1[0x5a2] == '\x17')) &&
         (*(byte *)((*(uint *)(gen_frame + 0xac)) + 0x1e) != 0)) {
        uVar2 = (uint)*(byte *)((*(uint *)(gen_frame + 0xac)) + 0x1e);
      }
      if (param_2 == 4) {
        uVar3 = F_00ab1fc0(param_3);
        uVar2 = (uint)*(ushort *)(uVar3 + 10);
      }
      if ((REFG(int * PTR32, 0x1379694) == param_1) && ((*(uint *)(gen_frame + 0xa8)) == 4)) {
        F_00a4a760(&REFG(undefined, 0x14a7360),0x29,1);
      }
      if ((int)uVar2 < 0xf3) {
        if (uVar2 == 0xf2) {
          if ((*(byte *)((int)param_1 + 0x2dd2) & 8) != 0) {
            uVar2 = 0xf9;
          }
        }
        else {
          switch((unsigned int)(uintptr_t)(uVar2)) {
          case 0x55: ;
          case 0x56: ;
          case 0x57: ;
          case 0x58: ;
            if ((*(byte *)((int)param_1 + 0x2dd2) & 4) == 0) {
              if ((char)param_1[0x62] == '\x06') {
                uVar2 = *(byte *)((int)param_1 + 0x2dd2) & 8 | 0x106;
              }
            }
            else {
              uVar2 = 0x5b;
            }
            break;
          case 0xfffffffe: ;
            if (*(char *)((int)param_1 + 0x2e95) == '\x01') {
              uVar2 = param_9 + 0x76;
            }
            else {
              uVar2 = param_9 + 0x7f;
            }
            break;
          case 0xffffffff: ;
            iVar7 = 0x70;
            puVar4 = (ushort *)F_00ab2960(param_1[0xba6]);
            if ((puVar4 != (ushort *)0x0) && (*(char *)((int)param_1 + 0x2e95) != '\x01')) {
              uVar3 = (uint)*puVar4;
              if ((char)puVar4[2] != '\x03') {
                uVar3 = uVar3 + 10000;
              }
              uVar3 = F_00ab2930(uVar3);
              if (uVar3 != 0) {
                if (*(char *)(uVar3 + 0x25) == '\x01') {
                  iVar7 = 0x79;
                }
                if (*(char *)(uVar3 + 0x25) == '\x02') {
                  iVar7 = 0x7c;
                }
              }
            }
            uVar2 = iVar7 + param_9;
          }
        }
      }
      else if (uVar2 == 0x103) {
        if ((*(byte *)((int)param_1 + 0x2dd2) & 8) != 0) {
          uVar2 = 0x10b;
        }
      }
      else if (uVar2 == 0x104) {
        if ((*(byte *)((int)param_1 + 0x2dd2) & 8) != 0) {
          uVar2 = 0x10c;
        }
      }
      else if ((uVar2 == 0x105) && ((*(byte *)((int)param_1 + 0x2dd2) & 8) != 0)) {
        uVar2 = 0x10d;
      }
      uVar5 = F_00ab2a20(uVar2);
      (*(uint *)(gen_frame + 0xa4)) = uVar5;
      uVar3 = 0;
      if (uVar5 != 0) {
        F_00b5ae60(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)(param_1 + 0x22),(uint)*(byte *)(uVar5 + 7));
        uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1);
        if ((*(int *)(uVar3 + 0x50) != param_8) &&
           (uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1), *(int *)(uVar3 + 0x4c) != 0)) {
          uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1);
          F_00ac99b0(param_1,*(undefined4 *)(uVar3 + 0x4c));
        }
        uVar3 = (*(uint *)(gen_frame + 0xa8));
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1)));
        F_00ac3e30(pvVar6,param_2,param_3,uVar3);
        (*(undefined4 *)(gen_frame + 0x74)) = REFG(undefined4, 0x1335e70);
        (*(undefined4 *)(gen_frame + 0x7c)) = REFG(float, 0x1087f04);
        (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0xa8));
        (*(int *)(gen_frame + 0x68)) = param_4;
        (*(undefined4 *)(gen_frame + 0x80)) = REFG(float, 0x1375ac0);
        (*(undefined4 *)(gen_frame + 0x84)) = REFG(float, 0x1375ac4);
        (*(int *)(gen_frame + 0x6c)) = param_5;
        (*(int *)(gen_frame + 0x70)) = param_8;
        ((undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
        (*(undefined4 *)(gen_frame + 0x78)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x88)) = REFG(float, 0x1375ac8);
        (*(uint *)(gen_frame + 0x90)) = 0;
        bVar8 = *(char *)((*(uint *)(gen_frame + 0xac)) + 0x34) == '\x01';
        if (bVar8) {
          (*(undefined4 *)(gen_frame + 0x80)) = *param_6;
          (*(undefined4 *)(gen_frame + 0x84)) = param_6[1];
          (*(undefined4 *)(gen_frame + 0x88)) = param_6[2];
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x90)) + 0)) = 1;
        }
        (*(uint *)(gen_frame + 0x90)) = (uint)bVar8;
        if ((*(char *)((*(uint *)(gen_frame + 0xa4)) + 0xe) != '\0') &&
           (bVar1 = F_00ae6970(param_1 + 0x6c), bVar1 != 0)) {
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x90)) + 2)) = 1;
          gen_piece_set(&(*(uint *)(gen_frame + 0x90)), 0, 3, (unsigned long long)(CONCAT12(1,(undefined2)(*(uint *)(gen_frame + 0x90)))));
        }
        F_00aa4150(param_1,uVar2,((undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),0);
        uVar3 = F_00a5f0b0(param_4,param_5);
        F_00aa58e0(param_1,uVar3);
        *(byte *)((int)param_1 + 0x2dd2) = *(byte *)((int)param_1 + 0x2dd2) & 0xbf;
        F_00aa0a70(param_1);
        if (*(char *)((*(uint *)(gen_frame + 0xac)) + 0x39) == '\x01') {
          F_00aec990(param_1 + 0x6c,param_4,param_5,param_7);
        }
        uVar3 = (*(uint *)(gen_frame + 0xac));
        if (*(char *)((*(uint *)(gen_frame + 0xac)) + 0x1c) == '\v') {
          pvVar6 = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),param_10);
          uVar3 = 0;
          if (pvVar6 != (undefined *)0x0) {
            F_0054f5b0(((undefined1 *)(gen_frame + 0x0)));
            (*(undefined4 *)(gen_frame + 0x30)) = *param_6;
            (*(undefined4 *)(gen_frame + 0x34)) = param_6[1];
            (*(undefined4 *)(gen_frame + 0x38)) = param_6[2];
            (*(undefined1 *)(gen_frame + 0x40)) = 1;
            uVar3 = F_00aa4150(pvVar6,0x6ed,((undefined1 *)(gen_frame + 0x0)),0);
          }
        }
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00aa6f20 */
uint F_00aa6f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa6f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)((int)this + 0x2dd2);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if (((bVar1 >> 2 & 1) != (byte)param_1) &&
     (*(byte *)((int)this + 0x2dd2) = ((byte)param_1 * '\x04' ^ bVar1) & 4 ^ bVar1,
     (char)param_2 != '\0')) {
    if ((byte)param_1 == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
    F_00aa4270(this,uVar3,0,0);
    bVar1 = F_00533ec0((int)this + 0x620);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = F_00aa2c50(this,0,0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00aa6f90 */
uint F_00aa6f90(unsigned int gen_a0)
{
  GEN_ENTER(0xaa6f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00aa4150(this,3,0,0);
  uVar1 = *(byte *)((int)this + 0x188) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    if ((*(byte *)((int)this + 0x2dd2) & 4) != 0) {
      uVar1 = F_00aa4150(this,0x22,0,0);
      return uVar1;
    }
    break;
  case 4: ;
  case 6: ;
    if ((*(byte *)((int)this + 0x2dd2) & 8) != 0) {
      uVar1 = F_00aa4150(this,0xf4,0,0);
      return uVar1;
    }
    uVar1 = F_00aa4150(this,0xed,0,0);
    return uVar1;
  case 5: ;
    if ((*(byte *)((int)this + 0x2dd2) & 8) != 0) {
      uVar1 = F_00aa4150(this,0x108,0,0);
      return uVar1;
    }
    uVar1 = F_00aa4150(this,0x100,0,0);
  }
  return uVar1;
}

/* ref: FUN_00aa7040 */
uint F_00aa7040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xaa7040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  uint uVar1;
  
  F_00539410((undefined *)((int)this + 0x940),param_1,param_2,param_3,param_4);
  F_00548350((undefined *)((int)this + 0x620),param_1,param_2,param_3);
  uVar1 = F_00aa4810(this);
  if ((*(char *)((int)this + 0x2f14) != '\0') &&
     (uVar1 = *(uint *)((int)this + 0x2f18), uVar1 == param_5)) {
    *(undefined1 *)((int)this + 0x2f14) = 0;
  }
  return uVar1;
}

/* ref: FUN_00aa70a0 */
uint F_00aa70a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa70a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined4 uVar5;
  
  uVar2 = F_00ab2a20(param_1);
  if (uVar2 == 0) {
    return 0;
  }
  if ((*(byte *)((int)this + 0x90) & 1) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,10,0);
    *(byte *)((int)this + 0x90) = *(byte *)((int)this + 0x90) & 0xfe;
  }
  if (((*(char *)(uVar2 + 0xf) != '\0') &&
      (F_0053c1a0((undefined *)((int)this + 0x680),1,0), *(char *)((int)this + 0x2e08) != '\0')) &&
     (*(int *)((int)this + 0x2e00) != 0)) {
    F_0053c1a0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x680))),1,0);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,0xd,0);
  if ((*(char *)((int)this + 0x2e08) == '\0') ||
     (pvVar3 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar3 = this;
  }
  uVar4 = F_00531e00((int)pvVar3 + 0x680,1);
  if (uVar4 == 1) {
    return 1;
  }
  if (uVar4 == 2) {
    return 2;
  }
  bVar1 = *(byte *)(uVar2 + 10);
  if ((bVar1 != 0) && (bVar1 != *(byte *)((int)this + 0x195))) {
    uVar4 = F_00ab2ae0((uint)bVar1);
    if ((*(int *)((int)this + 0x16b0) != 0 || *(int *)((int)this + 0x16b4) != 0) &&
       ((*(byte *)((int)this + 0x1e44) & 1) != 0)) {
      F_00b5c260(REFG(undefined4, 0x14c4e84),uVar4,(uint)*(byte *)(uVar2 + 10),(int)this + 0x16c0,
                   (uint)*(ushort *)((int)this + 0x88),1,0xffffffff,0,(float)(float10)0);
    }
    if ((*(int *)((int)this + 0x1e50) != 0 || *(int *)((int)this + 0x1e54) != 0) &&
       ((*(byte *)((int)this + 0x25e4) & 1) != 0)) {
      F_00b5c260(REFG(undefined4, 0x14c4e84),uVar4,(uint)*(byte *)(uVar2 + 10),(int)this + 0x1e60,
                   (uint)*(ushort *)((int)this + 0x88),1,0xffffffff,0,(float)(float10)0);
    }
    if ((*(int *)((int)this + 0x25f0) != 0 || *(int *)((int)this + 0x25f4) != 0) &&
       ((*(byte *)((int)this + 0x2d84) & 1) != 0)) {
      F_00b5c260(REFG(undefined4, 0x14c4e84),uVar4,(uint)*(byte *)(uVar2 + 10),(int)this + 0x2600,
                   (uint)*(ushort *)((int)this + 0x88),1,0xffffffff,0,(float)(float10)0);
    }
    *(undefined1 *)((int)this + 0x195) = *(undefined1 *)(uVar2 + 10);
  }
  uVar4 = *(byte *)(uVar2 + 0xc) - 1;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    F_006a5bc0((int)this + 0x1e10,0);
    F_006a5bf0((int)this + 0x1e10,0,(float)(float10)1);
    F_006a5bc0((int)this + 0x25b0,0);
    bVar1 = F_006a5bf0((int)this + 0x25b0,0,(float)(float10)1);
    uVar4 = CONCAT31(extraout_var,bVar1);
    *(byte *)((int)this + 0x2dd3) = *(byte *)((int)this + 0x2dd3) | 0x80;
    if ((*(char *)((int)this + 0x1725) == '\x03') &&
       (uVar4 = F_00694320((undefined *)((int)this + 0x16c0)), uVar4 == 0x326277)) {
      uVar4 = F_006a0720((undefined *)((int)this + 0x16c0),"atr_arrow",1);
    }
    if ((*(byte *)((int)this + 0x2dd3) & 0x40) != 0) {
      F_00aa6a50(this,0,1,1);
      bVar1 = F_00aa6a50(this,1,1,1);
      uVar4 = CONCAT31(extraout_var_00,bVar1);
    }
    break;
  case 1: ;
    F_006a5bc0((int)this + 0x1e10,1);
    F_006a5bf0((int)this + 0x1e10,1,(float)(float10)1);
    F_006a5bc0((int)this + 0x25b0,1);
    bVar1 = F_006a5bf0((int)this + 0x25b0,1,(float)(float10)1);
    uVar4 = CONCAT31(extraout_var_01,bVar1);
    *(byte *)((int)this + 0x2dd3) = *(byte *)((int)this + 0x2dd3) & 0x7f;
    if ((*(char *)((int)this + 0x1725) == '\x03') &&
       (uVar4 = F_00694320((undefined *)((int)this + 0x16c0)), uVar4 == 0x326277)) {
      uVar4 = F_006a0720((undefined *)((int)this + 0x16c0),"atr_arrow",0);
    }
    if ((*(byte *)((int)this + 0x2dd3) & 0x40) != 0) {
      F_00aa6a50(this,0,1,0);
      bVar1 = F_00aa6a50(this,1,1,0);
      uVar4 = CONCAT31(extraout_var_02,bVar1);
    }
    break;
  case 2: ;
    F_006a5bc0((int)this + 0x1e10,2);
    F_006a5bf0((int)this + 0x1e10,2,(float)(float10)1);
    F_006a5bc0((int)this + 0x25b0,2);
    uVar5 = 2;
    goto LAB_00aa7418;
  case 3: ;
    F_006a5bc0((int)this + 0x1e10,1);
    F_006a5bf0((int)this + 0x1e10,1,(float)(float10)1);
    F_006a5bc0((int)this + 0x25b0,0);
    uVar5 = 0;
LAB_00aa7418: ;
    bVar1 = F_006a5bf0((int)this + 0x25b0,uVar5,(float)(float10)1);
    uVar4 = CONCAT31(extraout_var_03,bVar1);
  }
  if (param_2 == 0) {
    uVar4 = F_00aa37d0(this,(uint)*(byte *)(uVar2 + 9));
  }
  return uVar4;
}

/* ref: FUN_00aa7450 */
uint F_00aa7450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa7450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if ((*(char *)((int)this + 0x2dec) == (char)param_1) && (*(uint *)((int)this + 0x2df0) == param_2)
     ) {
    *(char *)((int)this + 0x2dec) = (char)param_1;
    *(uint *)((int)this + 0x2df0) = param_2;
    return param_2;
  }
  if (*(int *)((int)this + 0x2df4) != 0) {
    F_009944e0(REFG(void * PTR32, 0x14a0d28),(undefined4 *)((int)this + 0x2df4));
    *(undefined4 *)((int)this + 0x2df4) = 0;
    *(undefined1 *)((int)this + 0x2dec) = 0;
    *(undefined4 *)((int)this + 0x2df0) = 0xe0000000;
    *(char *)((int)this + 0x2dec) = (char)param_1;
    *(uint *)((int)this + 0x2df0) = param_2;
    return param_2;
  }
  *(char *)((int)this + 0x2dec) = (char)param_1;
  *(uint *)((int)this + 0x2df0) = param_2;
  return param_2;
}

/* ref: FUN_00aa74e0 */
uint F_00aa74e0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa74e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char * pcVar5;
  undefined * this_00;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
  pcVar5 = (char *)0x0;
  if (uVar4 != 0) {
    pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this)));
    if (*pcVar5 != '\0') {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)(uVar4 + 0x34)
                     )));
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
      if ((float10)*(float *)(uVar4 + 0x38) - (float10)*(double *)&REFG(undefined, 0x1094810) <= (float10)fVar1) {
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
        if (uVar4 == 2) {
          F_00aa0a20(this);
        }
      }
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
      if ((float10)*(float *)(uVar4 + 0x38) <= (float10)fVar1) {
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
        uVar7 = *(undefined4 *)(uVar4 + 0x38);
        pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this)));
        *(undefined4 *)(pcVar5 + 0x34) = uVar7;
        if (REFG(void * PTR32, 0x1379694) == this) {
          uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
          uVar4 = F_00ac1a20((uint)*(byte *)(uVar4 + 1),*(undefined4 *)(uVar4 + 4));
          if (uVar4 == 2) {
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this)));
            F_00ac3e30(this_00,uVar7,uVar8,uVar9);
            *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) & 0xbf;
            F_00aa0a70(this);
            F_00a4a760(&REFG(undefined, 0x14a7360),0xe,0);
          }
          uVar3 = REFG(undefined4, 0x14bcff8);
          uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
          uVar7 = *(undefined4 *)(uVar4 + 8);
          uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
          fVar1 = *(float *)(uVar4 + 0x30);
          uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
          uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
          uVar8 = *(undefined4 *)(uVar6 + 0x10);
          uVar9 = *(undefined4 *)(uVar6 + 0x14);
          uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
          uVar2 = *(undefined4 *)(uVar6 + 4);
          uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
          F_00aa6ad0(this,(uint)*(byte *)(uVar6 + 1),uVar2,uVar8,uVar9,uVar4 + 0x20,fVar1,uVar7,0,
                       uVar3);
          uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
          F_00ac3d40(uVar4);
          uVar4 = F_00a4a760(&REFG(undefined, 0x14a7360),0xb,0);
          return uVar4;
        }
      }
      else {
        pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this)));
        *(float *)(pcVar5 + 0x34) = fVar1;
      }
    }
  }
  return (uint)pcVar5;
}

/* ref: FUN_00aa76e0 */
uint F_00aa76e0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa76e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int in_ecx;
  undefined4 extraout_EDX = 0;
  undefined4 * puVar5;
  bool bVar6;
  ulonglong uVar7;
  
  this_00 = (undefined *)((int)this + 0xa10);
  uVar2 = F_0053a4e0(this_00);
  uVar3 = 0;
  if (uVar2 != 0) {
    if (*(char *)((int)this + 0x188) == '\x02') {
      F_005416c0(this_00,0xffffffff,REFG(float, 0x10e79e4));
      uVar3 = F_00548e90(this_00);
      return uVar3;
    }
    if (*(char *)((int)this + 0x2ebc) == '\0') {
      uVar7 = F_00aa3a30(this);
      puVar5 = (undefined4 *)0x0;
      if (uVar7 != 0xe0000000) {
        puVar5 = (undefined4 *)F_00475fa0((int)uVar7,(int)(uVar7 >> 0x20));
      }
      uVar3 = 0;
      if (uVar2 != 0) {
        in_ecx = (int)this + 0xa30;
        do {
          if (*(char *)((int)this + uVar3 + 0x2ebd) == '\0') {
            bVar6 = *(int *)(in_ecx + 0x20) == 1;
            bVar1 = F_005349a0(in_ecx);
            if ((bVar1 == 0) || (bVar6)) {
              if ((puVar5 == (undefined4 *)0x0) || (puVar5 == this)) {
                if ((bVar6) && ((puVar5 == (undefined4 *)0x0 || (puVar5 == this)))) {
                  F_005416c0(this_00,uVar3,REFG(float, 0x10e79e4));
                }
              }
              else {
                uVar7 = (ulonglong)uVar3;
                uVar4 = ((code *)*(gen_code32 *)*puVar5)(puVar5);
                F_00aa51d0(this,uVar4,extraout_EDX,(int)uVar7,(int)(uVar7 >> 0x20));
              }
            }
          }
          uVar3 = uVar3 + 1;
          in_ecx = in_ecx + 0x300;
        } while (uVar3 < uVar2);
      }
    }
    uVar3 = F_00548e90(this_00);
  }
  return uVar3;
}

/* ref: FUN_00aa7800 */
uint F_00aa7800(unsigned int gen_a0)
{
  GEN_ENTER(0xaa7800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  
  if ((*(int *)((int)this + 0x1668) != 0) && (*(int *)((int)this + 0x1664) != 0)) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
    if ((char)uVar3 == '\0') {
      pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x1668) + 100)));
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x1664) + 100)));
      *pbVar1 = *pbVar1 & 0xfe;
    }
    else {
      pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x1668) + 100)));
      *pbVar1 = *pbVar1 | 1;
      pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x1664) + 100)));
      *pbVar1 = *pbVar1 | 1;
    }
  }
  uVar3 = (uint)*(char *)((int)this + 0x2ecc);
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar4 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar4 = this;
    }
    uVar3 = F_00542ff0((undefined *)((int)pvVar4 + 0x680),0x55);
    if ((char)uVar3 != '\0') {
      *(undefined1 *)((int)this + 0x2ecc) = 1;
      return uVar3;
    }
    break;
  case 1: ;
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar4 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar4 = this;
    }
    uVar3 = F_00542ff0((undefined *)((int)pvVar4 + 0x680),0x55);
    if ((char)uVar3 == '\0') {
      if ((*((char *)GEN_TOP((*(int *)((int)this + 0x1668) + 0x65))) == '\x03') &&
         (uVar3 = *(uint *)((int)this + 0x1664), *(char *)(uVar3 + 0x65) == '\x03')) {
        F_00699cb0(*(int *)((int)this + 0x1668),(float)(float10)0);
        uVar3 = F_00699cb0(*(undefined4 *)((int)this + 0x1664),(float)(float10)0);
        *(undefined1 *)((int)this + 0x2ecc) = 3;
      }
      else {
        *(undefined1 *)((int)this + 0x2ecc) = 2;
      }
      if (REFG(void * PTR32, 0x1379694) == this) {
        pvVar4 = (undefined *)F_006b8c00();
        pvVar4 = (undefined *)F_006d6fd0(pvVar4);
        uVar3 = 0;
        if (pvVar4 != (undefined *)0x0) {
          uVar3 = F_006fc970(pvVar4);
          return uVar3;
        }
      }
    }
    break;
  case 2: ;
    if ((*((char *)GEN_TOP((*(int *)((int)this + 0x1668) + 0x65))) == '\x03') &&
       (uVar3 = *(uint *)((int)this + 0x1664), *(char *)(uVar3 + 0x65) == '\x03')) {
      F_00699cb0(*(int *)((int)this + 0x1668),(float)(float10)0);
      uVar3 = F_00699cb0(*(undefined4 *)((int)this + 0x1664),(float)(float10)0);
      *(undefined1 *)((int)this + 0x2ecc) = 3;
      return uVar3;
    }
    break;
  case 3: ;
    uVar3 = F_0068b710(*(undefined * PTR32 *)((int)this + 0x1668));
    if (((char)uVar3 == '\0') &&
       (uVar3 = F_0068b710(*(undefined * PTR32 *)((int)this + 0x1664)), (char)uVar3 == '\0')) {
      F_006886d0(*(undefined * PTR32 *)((int)this + 0x1668));
      F_006886d0(*(undefined * PTR32 *)((int)this + 0x1664));
      pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x1668) + 100)));
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x1664) + 100)));
      *pbVar1 = *pbVar1 & 0xfe;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1668) + 4))))(*(int * PTR32 *)((int)this + 0x1668));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1664) + 4))))(*(int * PTR32 *)((int)this + 0x1664));
      puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1668);
      if (puVar2 != (undefined4 *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        *(undefined4 *)((int)this + 0x1668) = 0;
      }
      puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1664);
      if (puVar2 != (undefined4 *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        *(undefined4 *)((int)this + 0x1664) = 0;
      }
      *(undefined1 *)((int)this + 0x2ecc) = 4;
    }
  }
  return uVar3;
}

/* ref: FUN_00aa7a30 */
uint F_00aa7a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xaa7a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x10e6dac));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
  F_00546350((undefined *)((int)this + 0xa10),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_3,param_4);
  pvVar2 = param_3;
  pvVar3 = param_3;
  if (param_3 == (undefined *)0xffffffff) {
    uVar1 = F_0053a4e0((undefined *)((int)this + 0xa10));
    if (uVar1 == 0) {
      return 0;
    }
    pvVar3 = (undefined *)0x0;
    pvVar2 = (undefined *)(uVar1 - 1);
  }
  if (pvVar3 <= pvVar2) {
    pvVar2 = F_00c48350((undefined *)((int)pvVar3 + 0x2ebd + (int)(*(undefined * PTR32 *)(gen_frame + 0x4c))),1,
                     (int)pvVar2 + (1 - (int)pvVar3));
  }
  return (uint)pvVar2;
}

/* ref: FUN_00aa7ae0 */
byte F_00aa7ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa7ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  undefined * pvVar6;
  int iVar7;
  int * piVar8;
  
  (*(uint *)(gen_frame + 0x17c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x180);
  (*(int *)(gen_frame + 0xc)) = param_2;
  uVar3 = F_00aa4270(this,0x55,0,0);
  *(byte *)((int)this + 0x2ecc) = (-((char)uVar3 != '\0') & 0xfeU) + 2;
  F_00a5feb0(this);
  puVar4 = (uint *)F_00ab3390(param_1);
  uVar3 = *puVar4;
  puVar5 = (uint *)F_00ab3390((*(int *)(gen_frame + 0xc)));
  uVar1 = *puVar5;
  ((int *)(gen_frame + 0x0))[0] = (uVar3 & 0xffffff) + (int)puVar4;
  piVar8 = (int *)((int)this + 0x1664);
  ((int *)(gen_frame + 0x0))[1] = (uVar1 & 0xffffff) + (int)puVar5;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar8;
  do {
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar8;
    if ((undefined *)*piVar8 != (undefined *)0x0) {
      F_006886d0((undefined *)*piVar8);
      ((code *)*(gen_code32 *)(*(int *)*piVar8 + 4))((int *)*piVar8);
      puVar2 = (undefined4 *)*piVar8;
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        *piVar8 = 0;
      }
    }
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x2d0,0x10)));
    if (pvVar6 == (undefined *)0x0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = (undefined *)F_00698e40(pvVar6);
    }
    F_00699000(pvVar6);
    F_00990c20(((undefined1 *)(gen_frame + 0x10)));
    F_00990c50(((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)((int)this + 0x88),0xffffffff,0);
    F_00990ca0(((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)((int)this + 0x88),0xffffffff,0);
    F_0068bd00(REFG(void * PTR32, 0x1371294),pvVar6);
    F_00690620(pvVar6);
    F_0068b5d0(pvVar6,(float)(float10)1,(float)(float10)0,((undefined1 *)(gen_frame + 0x10)),2,0);
    F_0068fce0(pvVar6,((int *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0xc)))]);
    *(byte *)((int)pvVar6 + 100) = *(byte *)((int)pvVar6 + 100) | 1;
    *(*(int * PTR32 *)(gen_frame + 0x8)) = (int)pvVar6;
    F_00982d70();
    piVar8 = (*(int * PTR32 *)(gen_frame + 0x8)) + 1;
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar8;
    iVar7 = (*(int *)(gen_frame + 0xc)) + 1;
    (*(int *)(gen_frame + 0xc)) = iVar7;
  } while (iVar7 < 2);
  F_00c47745((*(uint *)(gen_frame + 0x17c)) ^ (uint)(uint)(gen_frame + 0x180));
  return 1;
}

/* ref: FUN_00aa7cb0 */
uint F_00aa7cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa7cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  byte bVar2;
  undefined * pvVar3;
  
  if ((((*(byte *)((int)this + 0x2dd3) & 0x40) == 0) || ((*(byte *)((int)this + 0x2dd2) & 4) != 0))
     || (param_1 == 2)) {
    pvVar3 = (undefined *)(param_1 * 0x7a0 + (int)this);
    *(byte *)((int)pvVar3 + 0x1e45U) = *(byte *)((int)pvVar3 + 0x1e45U) & 0xfd;
  }
  else {
    pvVar3 = (undefined *)(param_1 * 0x7a0 + (int)this);
    *(byte *)((int)pvVar3 + 0x1e45U) = *(byte *)((int)pvVar3 + 0x1e45U) | 2;
  }
  cVar1 = *(char *)((int)this + 0x188);
  bVar2 = *(byte *)((int)pvVar3 + 0x1e45);
  if (((cVar1 == '\x05') || (cVar1 == '\x06')) || (cVar1 == '\a')) {
    bVar2 = bVar2 & 0xfd;
  }
  *(byte *)((int)pvVar3 + 0x1724) = bVar2 == 0 | *(byte *)((int)pvVar3 + 0x1724) & 0xfe;
  return (uint)pvVar3;
}

/* ref: FUN_00aa7d30 */
uint F_00aa7d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa7d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte * pbVar1;
  char cVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  
  bVar3 = F_006a5bc0((int)this + param_1 * 0x7a0 + 0x1e10,param_2);
  if ((*(byte *)((int)this + 0x2dd3) & 0x40) != 0) {
    if (param_2 == 0) {
      pbVar1 = (byte *)((int)this + param_1 * 0x7a0 + 0x1e45);
      *pbVar1 = *pbVar1 & 0xfd;
      cVar2 = *(char *)((int)this + 0x188);
      bVar3 = *(byte *)((int)this + param_1 * 0x7a0 + 0x1e45);
      if (((cVar2 == '\x05') || (cVar2 == '\x06')) || (cVar2 == '\a')) {
        bVar3 = bVar3 & 0xfd;
      }
      *(byte *)((int)this + param_1 * 0x7a0 + 0x1724) =
           bVar3 == 0 | *(byte *)((int)this + param_1 * 0x7a0 + 0x1724) & 0xfe;
      return CONCAT31(extraout_var,bVar3 == 0);
    }
    pbVar1 = (byte *)((int)this + param_1 * 0x7a0 + 0x1e45);
    *pbVar1 = *pbVar1 | 2;
    cVar2 = *(char *)((int)this + 0x188);
    bVar3 = *(byte *)((int)this + param_1 * 0x7a0 + 0x1e45);
    if (((cVar2 == '\x05') || (cVar2 == '\x06')) || (cVar2 == '\a')) {
      bVar3 = bVar3 & 0xfd;
    }
    bVar3 = bVar3 == 0 | *(byte *)((int)this + param_1 * 0x7a0 + 0x1724) & 0xfe;
    *(byte *)((int)this + param_1 * 0x7a0 + 0x1724) = bVar3;
  }
  return CONCAT31(extraout_var,bVar3);
}

/* ref: FUN_00aa7df0 */
unsigned int F_00aa7df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa7df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = '\x01' << ((byte)param_1 & 0x1f);
  if ((char)param_2 == '\0') {
    *(byte *)((int)this + 0x1e45) = *(byte *)((int)this + 0x1e45) | bVar3;
  }
  else {
    *(byte *)((int)this + 0x1e45) = *(byte *)((int)this + 0x1e45) & ~bVar3;
  }
  cVar1 = *(char *)((int)this + 0x188);
  if (((cVar1 == '\x05') || (cVar1 == '\x06')) || (cVar1 == '\a')) {
    bVar2 = *(byte *)((int)this + 0x1e45) & 0xfd;
  }
  else {
    bVar2 = *(byte *)((int)this + 0x1e45);
  }
  *(byte *)((int)this + 0x1724) = bVar2 == 0 | *(byte *)((int)this + 0x1724) & 0xfe;
  if ((char)param_2 == '\0') {
    *(byte *)((int)this + 0x25e5) = *(byte *)((int)this + 0x25e5) | bVar3;
  }
  else {
    *(byte *)((int)this + 0x25e5) = *(byte *)((int)this + 0x25e5) & ~bVar3;
  }
  cVar1 = *(char *)((int)this + 0x188);
  if (((cVar1 == '\x05') || (cVar1 == '\x06')) || (cVar1 == '\a')) {
    bVar2 = *(byte *)((int)this + 0x25e5) & 0xfd;
  }
  else {
    bVar2 = *(byte *)((int)this + 0x25e5);
  }
  *(byte *)((int)this + 0x1ec4) = bVar2 == 0 | *(byte *)((int)this + 0x1ec4) & 0xfe;
  if ((char)param_2 == '\0') {
    *(byte *)((int)this + 0x2d85) = *(byte *)((int)this + 0x2d85) | bVar3;
  }
  else {
    *(byte *)((int)this + 0x2d85) = *(byte *)((int)this + 0x2d85) & ~bVar3;
  }
  cVar1 = *(char *)((int)this + 0x188);
  if (((cVar1 == '\x05') || (cVar1 == '\x06')) || (cVar1 == '\a')) {
    bVar3 = *(byte *)((int)this + 0x2d85) & 0xfd;
  }
  else {
    bVar3 = *(byte *)((int)this + 0x2d85);
  }
  *(byte *)((int)this + 0x2664) = bVar3 == 0 | *(byte *)((int)this + 0x2664) & 0xfe;
  return 0;
}

/* ref: FUN_00aa7f10 */
byte F_00aa7f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa7f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  code * pcVar5;
  
  bVar3 = F_00a61980(this,param_1,param_2);
  if (*(int *)((int)this + 0x2e00) != 0) {
    if ((REFG(void * PTR32, 0x1379694) == this) && (*(char *)((int)this + 0x2e08) != '\0')) {
      pcVar5 = *(gen_code32 *)(*(int *)this + 0x9c);
    }
    else {
      pcVar5 = *(gen_code32 *)(*(int *)this + 0xa0);
    }
    uVar4 = (*pcVar5)(this);
    iVar2 = **(int * PTR32 *)((int)this + 0x2e00);
    if ((char)uVar4 == '\x01') {
      pcVar5 = *(gen_code32 *)(iVar2 + 0x24);
    }
    else {
      pcVar5 = *(gen_code32 *)(iVar2 + 0x28);
    }
    (*pcVar5)(*(int * PTR32 *)((int)this + 0x2e00),0x10,0);
  }
  F_00aa7df0(this,0,(uint)(*(int *)((int)this + 0x11c) == 0));
  if (bVar3 != 0) {
    uVar4 = F_006b8c00();
    bVar3 = F_006c5260(uVar4);
    if (((bVar3 == 0) && (*(int *)((int)this + 0x2e04) != 0)) &&
       (iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x2e04) + 0xec))), iVar2 != 0)) {
      pbVar1 = (byte *)(iVar2 + 100);
      *pbVar1 = *pbVar1 | 1;
    }
    return 1;
  }
  if ((param_1 == 0xb) && (*(int *)((int)this + 0x11c) != 0)) {
    if (*(int *)((int)this + 0xf0) != 0) {
      F_00a5f6d0(this,0);
    }
    if (*(int *)((int)this + 0xec) != 0) {
      F_00a61940(this);
    }
    if ((*(int *)((int)this + 0x2e04) != 0) &&
       (iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x2e04) + 0xec))), iVar2 != 0)) {
      pbVar1 = (byte *)(iVar2 + 100);
      *pbVar1 = *pbVar1 & 0xfe;
    }
  }
  return 0;
}

/* ref: FUN_00aa8010 */
byte F_00aa8010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa8010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  code * pcVar5;
  
  bVar3 = F_00a619f0(this,param_1,param_2);
  if (*(int *)((int)this + 0x2e00) != 0) {
    if ((REFG(void * PTR32, 0x1379694) == this) && (*(char *)((int)this + 0x2e08) != '\0')) {
      pcVar5 = *(gen_code32 *)(*(int *)this + 0x9c);
    }
    else {
      pcVar5 = *(gen_code32 *)(*(int *)this + 0xa0);
    }
    uVar4 = (*pcVar5)(this);
    iVar2 = **(int * PTR32 *)((int)this + 0x2e00);
    if ((char)uVar4 == '\x01') {
      pcVar5 = *(gen_code32 *)(iVar2 + 0x24);
    }
    else {
      pcVar5 = *(gen_code32 *)(iVar2 + 0x28);
    }
    (*pcVar5)(*(int * PTR32 *)((int)this + 0x2e00),0x10,0);
  }
  F_00aa7df0(this,0,(uint)(*(int *)((int)this + 0x11c) == 0));
  if (bVar3 != 0) {
    if (((*(int *)((int)this + 0x2e04) != 0) &&
        (iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x2e04) + 0xec))), iVar2 != 0)) && (param_1 != 3)) {
      pbVar1 = (byte *)(iVar2 + 100);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00aa80c0 */
uint F_00aa80c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa80c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * this_00;
  byte * pbVar1;
  ushort * puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  (*(undefined1 *)(gen_frame + 0x14)) = 1;
  uVar4 = param_1;
  if (((int)param_1 < 3) &&
     ((iVar5 = param_1 * 0x7a0, *(uint *)(iVar5 + 0x16b0 + (int)this) != param_2 ||
      (*(int *)((int)this + iVar5 + 0x16b4) != param_3)))) {
    if (param_1 == 0) {
      *(byte *)((int)this + 0x2dd3) = *(byte *)((int)this + 0x2dd3) & 0x7f;
    }
    this_00 = (int *)((int)this + iVar5 + 0x16c0);
    F_00b5c0c0(REFG(void * PTR32, 0x14c4e84),this_00);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + iVar5 + 0x1e10) + 4))))((int)this + iVar5 + 0x1e10);
    ((code *)*(gen_code32 *)(*this_00 + 4))(this_00);
    pbVar1 = (byte *)((int)this + iVar5 + 0x1e44);
    *pbVar1 = *pbVar1 & 0xf8;
    *(uint *)((int)this + iVar5 + 0x16b0) = param_2;
    *(int *)((int)this + iVar5 + 0x16b4) = param_3;
    *(undefined1 *)((int)this + iVar5 + 0x1e45) = 0;
    uVar4 = param_2;
    if (param_2 != 0 || param_3 != 0) {
      (*(uint *)(gen_frame + 0xc)) = param_2;
      (*(int *)(gen_frame + 0x10)) = param_3;
      F_006ac620(this_00,this_00,&(*(uint *)(gen_frame + 0xc)));
      F_006a5ab0((undefined *)((int)this + iVar5 + 0x1e10),param_1,this_00,
                   *(undefined4 *)((int)this + 0xec));
      F_006a5bc0((int)this + iVar5 + 0x1e10,~(uint)(*(byte *)((int)this + 0x2dd2) >> 2) & 1);
      F_006a5bf0((int)this + iVar5 + 0x1e10,~(uint)(*(byte *)((int)this + 0x2dd2) >> 2) & 1,
                   (float)(float10)1);
      if (*(undefined * PTR32 *)((int)this + 0xec) != (undefined *)0x0) {
        F_0068bd00(*(undefined * PTR32 *)((int)this + 0xec),this_00);
        F_00690620(this_00);
        F_00aa7df0(this,0,(uint)(*(int *)((int)this + 0x11c) == 0));
        bVar3 = F_00a9f2f0(this,param_1);
        *(byte *)((int)this + iVar5 + 0x1724) =
             bVar3 != 0 | *(byte *)((int)this + iVar5 + 0x1724) & 0xfe;
        if ((*((byte *)GEN_TOP((*(int *)((int)this + 0xec) + 0x70))) >> 3 & 1) != 0) {
          puVar2 = (ushort *)((int)this + iVar5 + 0x1730);
          *puVar2 = *puVar2 | 8;
        }
      }
      uVar4 = F_00aa3da0(this);
    }
  }
  return uVar4;
}

/* ref: FUN_00aa8240 */
uint F_00aa8240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa8240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x25f0);
  iVar1 = *(int *)((int)this + 0x25f4);
  if ((uVar2 == 0 && iVar1 == 0) || ((uVar2 == param_1 && (iVar1 == param_2)))) {
    if ((uVar2 != param_1) || (iVar1 != param_2)) {
      uVar2 = F_00aa80c0(this,2,param_1,param_2);
      *(byte *)((int)this + 0x2d84) = *(byte *)((int)this + 0x2d84) | 4;
    }
    *(byte *)((int)this + 0x2d84) = *(byte *)((int)this + 0x2d84) & 0xfd;
  }
  return uVar2;
}

/* ref: FUN_00aa8290 */
unsigned int F_00aa8290(unsigned int gen_a0)
{
  GEN_ENTER(0xaa8290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte * pbVar2;
  byte bVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    bVar3 = *(byte *)((int)this + iVar4 * 0x7a0 + 0x1e44);
    if ((bVar3 & 4) != 0) {
      if ((bVar3 & 2) == 0) {
        *(byte *)((int)this + iVar4 * 0x7a0 + 0x1e44) = bVar3 | 2;
      }
      else if ((iVar4 < 3) &&
              (*(int *)((int)this + iVar4 * 0x7a0 + 0x16b0) != 0 ||
               *(int *)((int)this + iVar4 * 0x7a0 + 0x16b4) != 0)) {
        if (iVar4 == 0) {
          *(byte *)((int)this + 0x2dd3) = *(byte *)((int)this + 0x2dd3) & 0x7f;
        }
        piVar1 = (int *)((int)this + iVar4 * 0x7a0 + 0x16c0);
        F_00b5c0c0(REFG(void * PTR32, 0x14c4e84),piVar1);
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + iVar4 * 0x7a0 + 0x1e10) + 4))))
                  ((int)this + iVar4 * 0x7a0 + 0x1e10);
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
        pbVar2 = (byte *)((int)this + iVar4 * 0x7a0 + 0x1e44);
        *pbVar2 = *pbVar2 & 0xf8;
        *(undefined4 *)((int)this + iVar4 * 0x7a0 + 0x16b0) = 0;
        *(undefined4 *)((int)this + iVar4 * 0x7a0 + 0x16b4) = 0;
        *(undefined1 *)((int)this + iVar4 * 0x7a0 + 0x1e45) = 0;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return 0;
}

/* ref: FUN_00aa8340 */
uint F_00aa8340(unsigned int gen_a0)
{
  GEN_ENTER(0xaa8340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  do {
    iVar3 = (*(int *)(gen_frame + 0x8)) * 0x7a0;
    bVar7 = *(byte *)((int)this + iVar3 + 0x1e44);
    uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),bVar7);
    iVar1 = (int)this + iVar3 + 0x16c0;
    if ((((bVar7 & 1) == 0) && (iVar1 != 0)) && (*(char *)((int)this + iVar3 + 0x1725) == '\x03')) {
      *(byte *)((int)this + iVar3 + 0x1e44) = bVar7 | 1;
      uVar4 = F_00aa7cb0(this,(*(int *)(gen_frame + 0x8)));
      if ((*(int *)(gen_frame + 0x8)) == 0) {
        bVar7 = *(byte *)((int)this + 0x2dd3) >> 7;
        (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar7);
        *(byte *)((int)this + 0x2dd3) = *(byte *)((int)this + 0x2dd3) & 0x7f | bVar7 << 7;
        if ((*(char *)((int)this + 0x1725) == '\x03') &&
           (uVar4 = F_00694320((undefined *)((int)this + 0x16c0)), uVar4 == 0x326277)) {
          F_006a0720((undefined *)((int)this + 0x16c0),"atr_arrow",(*(undefined4 *)(gen_frame + 0x4)));
        }
      }
      else if ((*(int *)(gen_frame + 0x8)) != 1) goto LAB_00aa844b;
      uVar5 = F_00aa0680(this,0,1);
      if (uVar5 == 0) {
        uVar4 = 0;
        if (*(char *)((int)this + 0x188) != '\0') {
          pbVar2 = (byte *)((int)this + iVar3 + 0x1e44);
          *pbVar2 = *pbVar2 & 0xfe;
        }
      }
      else {
        uVar6 = F_00ab2ae0((uint)*(byte *)(uVar5 + 10));
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = F_00b5c260(REFG(undefined4, 0x14c4e84),uVar6,(uint)*(byte *)(uVar5 + 10),iVar1,
                               (uint)*(ushort *)((int)this + 0x88),1,0xffffffff,0,(float)(float10)0)
          ;
        }
      }
    }
LAB_00aa844b: ;
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
    if (2 < (*(int *)(gen_frame + 0x8))) {
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00aa8460 */
uint F_00aa8460(unsigned int gen_a0)
{
  GEN_ENTER(0xaa8460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int * piVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  uint uVar5;
  undefined * this_00;
  float * pfVar6;
  char * _Format;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if (*(char *)((int)this + 0x2dd5) == '\x01') {
    uVar5 = 0;
    if (*(int *)((int)this + 0x1e50) != 0 || *(int *)((int)this + 0x1e54) != 0) {
      piVar1 = (int *)((int)this + 0x1e60);
      F_00b5c0c0(REFG(void * PTR32, 0x14c4e84),piVar1);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x25b0) + 4))))((int)this + 0x25b0);
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      *(byte *)((int)this + 0x25e4) = *(byte *)((int)this + 0x25e4) & 0xf8;
      *(undefined4 *)((int)this + 0x1e50) = 0;
      *(undefined4 *)((int)this + 0x1e54) = 0;
      *(undefined1 *)((int)this + 0x25e5) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return uVar5;
    }
  }
  else {
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
    if ((char)uVar5 != '\0') {
      if (REFG(void * PTR32, 0x1379694) == this) {
        this_00 = (undefined *)F_005339e0(&REFG(undefined4, 0x1375bc0));
      }
      else {
        uVar5 = *(uint *)((int)this + 0x1a0);
        if (uVar5 == 0 && *(int *)((int)this + 0x1a4) == 0) goto switchD_00aa855a_default;
        this_00 = (undefined *)F_00475fa0(uVar5,*(int *)((int)this + 0x1a4));
      }
      uVar5 = 0;
      if (this_00 != (undefined *)0x0) {
        uVar5 = *(byte *)((int)this + 0x2dd5) - 2;
        switch((unsigned int)(uintptr_t)(uVar5)) {
        case 0: ;
          if ((*(byte *)((int)this + 0x2dd2) & 8) == 0) {
            _Format = "vfx/live/gather/eff/gat_smt_ok.avfx";
          }
          else {
            _Format = "vfx/live/gather/eff/gat_sst_ok.avfx";
          }
          break;
        case 1: ;
          if ((*(byte *)((int)this + 0x2dd2) & 8) == 0) {
            _Format = "vfx/live/gather/eff/gat_smt_rg.avfx";
          }
          else {
            _Format = "vfx/live/gather/eff/gat_sst_rg.avfx";
          }
          break;
        case 2: ;
          if ((*(byte *)((int)this + 0x2dd2) & 8) == 0) {
            _Format = "vfx/live/gather/eff/gat_smt_re.avfx";
          }
          else {
            _Format = "vfx/live/gather/eff/gat_sst_re.avfx";
          }
          break;
        case 3: ;
          if ((*(byte *)((int)this + 0x2dd2) & 8) == 0) {
            _Format = "vfx/live/gather/eff/gat_smt_ng.avfx";
          }
          else {
            _Format = "vfx/live/gather/eff/gat_sst_ng.avfx";
          }
          break;
        case 4: ;
          if ((*(byte *)((int)this + 0x2dd2) & 8) == 0) {
            _Format = "vfx/live/gather/eff/gat_emt_ok.avfx";
          }
          else {
            _Format = "vfx/live/gather/eff/gat_est_ok.avfx";
          }
          break;
        case 5: ;
          if ((*(byte *)((int)this + 0x2dd2) & 8) == 0) {
            _Format = "vfx/live/gather/eff/gat_emt_rg.avfx";
          }
          else {
            _Format = "vfx/live/gather/eff/gat_est_rg.avfx";
          }
          break;
        case 6: ;
          if ((*(byte *)((int)this + 0x2dd2) & 8) == 0) {
            _Format = "vfx/live/gather/eff/gat_emt_re.avfx";
          }
          else {
            _Format = "vfx/live/gather/eff/gat_est_re.avfx";
          }
          break;
        case 7: ;
          if ((*(byte *)((int)this + 0x2dd2) & 8) == 0) {
            _Format = "vfx/live/gather/eff/gat_emt_ng.avfx";
          }
          else {
            _Format = "vfx/live/gather/eff/gat_est_ng.avfx";
          }
          break;
        default: ;
          goto switchD_00aa855a_default;
        }
        F_00c472af(((char *)(gen_frame + 0x8)),0x100,_Format);
        pfVar6 = (float *)F_00a5feb0(this_00);
        fVar2 = *pfVar6;
        uVar5 = F_00a5feb0(this_00);
        fVar3 = *(float *)(uVar5 + 4);
        uVar5 = F_00a5feb0(this_00);
        fVar4 = (float10)1;
        uVar5 = F_009cfd00(((char *)(gen_frame + 0x8)),2,0,fVar2,fVar3,*(float *)(uVar5 + 8),(float)fVar4,
                             (float)fVar4,(float)fVar4,(float)(float10)0);
      }
    }
  }
switchD_00aa855a_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar5;
}

/* ref: FUN_00aa8770 */
uint F_00aa8770(unsigned int gen_a0)
{
  GEN_ENTER(0xaa8770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  undefined * pvVar7;
  undefined3 extraout_var = 0;
  undefined1 uVar8;
  undefined4 uVar9;
  
  uVar4 = REFG(undefined4, 0x137104c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)((int)this + 0x2eac) = *(undefined4 *)(REFG(undefined4, 0x137104c) + 0x11a8);
  if (*(char *)((int)this + 0x2ea9) == '\0') {
    return uVar4;
  }
  bVar3 = F_00ae6970((int)this + 0x1b0);
  *(byte *)((int)this + 0x2ea8) = bVar3;
  if ((*(char *)((int)this + 0x2e08) == '\0') ||
     (pvVar7 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar7 = this;
  }
  uVar4 = F_00531e00((int)pvVar7 + 0x680,0);
  F_0054ad50((undefined *)((int)this + 0x680));
  F_00549fb0((undefined *)((int)this + 0x940));
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x188))) {
  case 1: ;
  case 4: ;
  case 8: ;
    pcVar1 = *(gen_code32 *)(*(int *)this + 0xd8);
    (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((uint)pvVar7 & 0xffffff);
    uVar5 = (*pcVar1)(this);
    if ((uVar5 == 0) || (pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this))), *pcVar6 == '\0')
       ) {
LAB_00aa8896: ;
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 1;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT13(1,(uint3)(*(undefined * PTR32 *)(gen_frame + 0x8)))));
    }
    else {
      bVar3 = F_00ae6970((int)this + 0x1b0);
      if ((bVar3 != 0) || (bVar3 = F_00ae87c0((int)this + 0x1b0), bVar3 != 0)) {
        bVar3 = F_00ae8da0((int)this + 0x1b0,uVar4);
        if ((bVar3 != 0) || (bVar3 = F_00ae8d00((int)this + 0x1b0,uVar4), bVar3 != 0))
        goto LAB_00aa8896;
        if (REFG(void * PTR32, 0x1379694) == this) {
          if ((*(char *)((int)this + 0x2e08) == '\0') ||
             (pvVar7 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0
             )) {
            pvVar7 = this;
          }
          if ((*(int *)((int)pvVar7 + 0x8fc) != 0) &&
             (*((char *)GEN_TOP((*(int *)((int)pvVar7 + 0x8fc) + 0xe))) != '\0')) goto LAB_00aa8896;
        }
      }
      F_00aa4930(this);
    }
    if (*(char *)((int)this + 0x2f14) != '\0') {
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 1;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT13(1,(uint3)(*(undefined * PTR32 *)(gen_frame + 0x8)))));
    }
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
    if (((uVar4 == 8) && (uVar4 = F_00aa3470(this), pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8)), uVar4 != 0)) &&
       (*(char *)(uVar4 + 0x2e09) == '\0')) {
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((uint)pvVar7 & 0xffffff);
    }
    if (((*(byte *)((int)this + 0x2dd3) & 0x10) != 0) || ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) == '\0')) break;
    uVar8 = 0;
    bVar2 = false;
    (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2)) = 0;
    gen_piece_set(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 0, 3, (unsigned long long)((uint3)(ushort)(*(undefined * PTR32 *)(gen_frame + 0x8))));
    if ((REFG(void * PTR32, 0x1379694) != this) && (bVar3 = F_00533ec0((int)this + 0x620), bVar3 != 0)) {
      if (*(char *)((int)this + 0x658) == '\0') {
        if (*(char *)((int)this + 0x2e08) == '\0') {
          uVar8 = 1;
          bVar2 = true;
        }
        else {
          (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2)) = 1;
          gen_piece_set(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 0, 3, (unsigned long long)(CONCAT12(1,(ushort)(*(undefined * PTR32 *)(gen_frame + 0x8)))));
        }
      }
      else {
        F_005341f0((undefined *)((int)this + 0x620),0);
      }
    }
    bVar3 = F_00534510((int)this + 0x940);
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((bVar3 == 0) && (!bVar2)) {
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = uVar8;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((uint)pvVar7 & 0xffffff);
      uVar4 = F_00aec080((undefined *)((int)this + 0x1b0),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar7 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar7 = this;
      }
      if ((((*(int *)((int)pvVar7 + 0x8fc) == 0) ||
           (*((char *)GEN_TOP((*(int *)((int)pvVar7 + 0x8fc) + 0xe))) == '\0')) &&
          (*(char *)((int)this + 0x2f14) == '\0')) ||
         ((bVar3 = F_00ae8da0((int)this + 0x1b0,uVar4), bVar3 == 0 &&
          (bVar3 = F_00ae8d00((int)this + 0x1b0,uVar4), bVar3 == 0)))) {
        if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') goto LAB_00aa89b0;
      }
      else {
        (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 1;
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT13(1,(uint3)(*(undefined * PTR32 *)(gen_frame + 0x8)))));
LAB_00aa89b0: ;
        if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2)) == '\0') {
          F_00aa0100(this,0,0);
        }
        else {
          F_00aa0090(*(undefined * PTR32 *)((int)this + 0x2e00),0,0);
        }
      }
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar7 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar7 = this;
      }
      uVar5 = F_00531e00((int)pvVar7 + 0x680,0);
      if (uVar5 != uVar4) {
        F_00aa4270(this,uVar4,0,0);
      }
    }
    bVar3 = F_00ae87a0((int)this + 0x1b0);
    if (bVar3 != 0) {
      F_00aeb940((undefined *)((int)this + 0x1b0));
    }
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar7 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar7 = this;
    }
    uVar4 = F_0053c3a0((int)pvVar7 + 0x680,1);
    if (((int)uVar4 < 3) && (uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this), uVar4 != 0)) {
      uVar9 = 2;
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
      bVar3 = F_00b7aaa0(uVar4,uVar9);
      if (bVar3 != 0) {
        F_00aa0420(this,0,REFG(float, 0x1094808));
        break;
      }
    }
    F_00aeb7a0((undefined *)((int)this + 0x1b0));
    break;
  case 2: ;
    F_00aa4f40(this);
    break;
  case 3: ;
    F_00aa51a0(this);
    break;
  case 5: ;
  case 7: ;
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar7 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar7 = this;
    }
    uVar5 = F_00531e00((int)pvVar7 + 0x680,0);
    switch((unsigned int)(uintptr_t)(uVar5)) {
    case 0: ;
      if ((uVar4 == 0xee) || (uVar4 == 0xf5)) {
LAB_00aa8b14: ;
        uVar9 = 3;
        goto LAB_00aa8bdf;
      }
      break;
    case 3: ;
    case 0xec: ;
    case 0xed: ;
    case 0xee: ;
    case 0xef: ;
    case 0xf0: ;
    case 0xf1: ;
    case 0xf3: ;
    case 0xf4: ;
    case 0xf5: ;
    case 0xf6: ;
    case 0xf7: ;
    case 0xf8: ;
      goto switchD_00aa87f3_default;
    }
    if ((*(byte *)((int)this + 0x2dd2) & 8) == 0) {
      uVar9 = 0xed;
    }
    else {
      uVar9 = 0xf4;
    }
    goto LAB_00aa8bdf;
  case 6: ;
    if (*(char *)((int)this + 0x1688) == '\x12') {
      uVar9 = 0x150001;
      pvVar7 = (undefined *)F_006b8c00();
      uVar4 = F_006e3240(pvVar7,uVar9);
      if (uVar4 != 0) {
        F_006c2760(this);
      }
      break;
    }
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar7 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar7 = this;
    }
    uVar5 = F_00531e00((int)pvVar7 + 0x680,0);
    if (uVar5 < 0x102) {
      if (0xfe < uVar5) break;
      if (uVar5 == 0) {
        if ((uVar4 == 0x101) || (uVar4 == 0x109)) goto LAB_00aa8b14;
        if ((*(byte *)((int)this + 0x2dd2) & 8) == 0) {
          uVar9 = 0x100;
        }
        else {
          uVar9 = 0x108;
        }
        goto LAB_00aa8bdf;
      }
      if (uVar5 == 3) break;
    }
    else if (uVar5 - 0x107 < 3) break;
    if ((*(byte *)((int)this + 0x2dd2) & 8) == 0) {
      uVar9 = 0x100;
    }
    else {
      uVar9 = 0x108;
    }
LAB_00aa8bdf: ;
    F_00aa4270(this,uVar9,0,0);
  }
switchD_00aa87f3_default: ;
  if ((*(uint *)&REFG(undefined, 0x14b5174) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14b5174) = *(uint *)&REFG(undefined, 0x14b5174) | 1;
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar7 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar7 = this;
    }
    REFG(undefined4, 0x14b5170) = *(undefined4 *)((int)pvVar7 + 0x898);
  }
  uVar4 = F_00a5f500(this);
  if (uVar4 != 0) {
    uVar9 = REFG(undefined4, 0x14b5170);
    uVar4 = F_00a5f500(this);
    bVar3 = F_00691ec0(uVar4,uVar9);
    if (bVar3 == 0) {
      return CONCAT31(extraout_var,bVar3);
    }
  }
  bVar2 = false;
  if ((((*(char *)((int)this + 0x2e08) != '\0') || (*(char *)((int)this + 0x2e09) != '\0')) &&
      (*(int *)((int)this + 0x2e00) != 0)) && (bVar2 = true, *(char *)((int)this + 0x2e09) == '\0'))
  {
    F_00aa4bb0(this);
  }
  F_0054a540((undefined *)((int)this + 0x680));
  F_0053f810((undefined *)((int)this + 0x620));
  F_00aa76e0(this);
  if (bVar2) {
    F_00aa8770(*(undefined * PTR32 *)((int)this + 0x2e00));
  }
  if (*(undefined * PTR32 *)((int)this + 0x2e04) != (undefined *)0x0) {
    F_00aa8770(*(undefined * PTR32 *)((int)this + 0x2e04));
  }
  uVar4 = F_00aa8340(this);
  return uVar4;
}

/* ref: FUN_00aa8de0 */
uint F_00aa8de0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa8de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  
  if ((*(uint *)((int)this + 0x2eac) == *(uint *)(REFG(int, 0x137104c) + 0x11a8)) ||
     (*(char *)((int)this + 0x2ea9) == '\0')) {
    return *(uint *)((int)this + 0x2eac);
  }
  bVar2 = F_00ae6970((int)this + 0x1b0);
  if (*(byte *)((int)this + 0x2ea8) == bVar2) {
    cVar1 = *(char *)((int)this + 0x2ecd);
    if (((cVar1 != '\x02') && (cVar1 != '\x06')) && (cVar1 != '\x01')) {
      uVar3 = *(uint *)((int)this + 0x2eb0);
      if (uVar3 != 0) {
        *(undefined4 *)((int)this + 0x2eb0) = 0;
        if ((*(char *)((int)this + 0x2e08) == '\0') ||
           (pvVar5 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0))
        {
          pvVar5 = this;
        }
        uVar4 = F_00531e20((int)pvVar5 + 0x680,0);
        if (uVar4 == uVar3) {
          if ((*(char *)((int)this + 0x2e08) == '\0') ||
             (pvVar5 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0
             )) {
            pvVar5 = this;
          }
          bVar2 = F_005366b0((int)pvVar5 + 0x680);
          if (bVar2 != 0) {
            uVar3 = F_00aa8770(this);
            return uVar3;
          }
          if (*(char *)((int)this + 0x188) == '\x01') {
            F_00aa6f90(this);
          }
        }
      }
      if (*(char *)((int)this + 0x188) == '\x02') {
        F_00aa4f40(this);
      }
      F_0053f810((undefined *)((int)this + 0x620));
      uVar3 = F_00aa76e0(this);
      return uVar3;
    }
  }
  else {
    bVar2 = F_00ae6970((int)this + 0x1b0);
    *(byte *)((int)this + 0x2ea8) = bVar2;
  }
  uVar3 = F_00aa8770(this);
  return uVar3;
}

/* ref: FUN_00aa8ef0 */
byte F_00aa8ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa8ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  *(char *)((int)this + 0x8a) = (char)uVar3;
  *(int *)((int)this + 0x80) = param_1[0x20];
  ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this);
  *(byte *)((int)this + 0x2dd3) =
       *(byte *)((int)this + 0x2dd3) ^
       (*(byte *)((int)param_1 + 0x2dd3) ^ *(byte *)((int)this + 0x2dd3)) & 0x20;
  *(int *)((int)this + 0x16b0) = param_1[0x5ac];
  *(int *)((int)this + 0x16b4) = param_1[0x5ad];
  *(undefined1 *)((int)this + 0x1e45) = 0;
  *(byte *)((int)this + 0x1e44) = *(byte *)((int)this + 0x1e44) & 0xf8;
  *(int *)((int)this + 0x1e50) = param_1[0x794];
  iVar1 = param_1[0x795];
  *(byte *)((int)this + 0x25e4) = *(byte *)((int)this + 0x25e4) & 0xf8;
  *(int *)((int)this + 0x1e54) = iVar1;
  *(undefined1 *)((int)this + 0x25e5) = 0;
  *(int *)((int)this + 0x25f0) = param_1[0x97c];
  iVar1 = param_1[0x97d];
  *(byte *)((int)this + 0x2d84) = *(byte *)((int)this + 0x2d84) & 0xf8;
  *(int *)((int)this + 0x25f4) = iVar1;
  *(undefined1 *)((int)this + 0x2d85) = 0;
  if ((char)param_1[0xbc7] != '\0') {
    *(undefined1 *)((int)this + 0x2f1c) = 1;
    uVar3 = F_00a5f500(this);
    if (uVar3 != 0) {
      uVar3 = F_00a5f500(this);
      if ((*(byte *)(uVar3 + 0x70) >> 5 & 1) == 0) {
        *(ushort *)(uVar3 + 0x70) = *(ushort *)(uVar3 + 0x70) | 0x60;
      }
    }
  }
  bVar2 = F_00aa34a0(this,param_1[0xba6],param_1 + 0xb6e,param_1 + 0xb64,(float)(float10)1);
  return bVar2;
}

/* ref: FUN_00aa9000 */
unsigned int F_00aa9000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa9000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  byte * pbVar2;
  byte bVar3;
  int iVar4;
  
  *(byte *)((int)this + 0x2dd3) =
       *(byte *)((int)this + 0x2dd3) ^ ((char)param_1 << 6 ^ *(byte *)((int)this + 0x2dd3)) & 0x40;
  iVar4 = 0;
  pbVar2 = (byte *)((int)this + 0x1724);
  do {
    if ((((*(byte *)((int)this + 0x2dd3) & 0x40) == 0) || ((*(byte *)((int)this + 0x2dd2) & 4) != 0)
        ) || (iVar4 == 2)) {
      bVar3 = pbVar2[0x721] & 0xfd;
    }
    else {
      bVar3 = pbVar2[0x721] | 2;
    }
    pbVar2[0x721] = bVar3;
    cVar1 = *(char *)((int)this + 0x188);
    if (((cVar1 == '\x05') || (cVar1 == '\x06')) || (cVar1 == '\a')) {
      bVar3 = bVar3 & 0xfd;
    }
    *pbVar2 = bVar3 == 0 | *pbVar2 & 0xfe;
    iVar4 = iVar4 + 1;
    pbVar2 = pbVar2 + 0x7a0;
  } while (iVar4 < 3);
  return 0;
}

/* ref: FUN_00aa90a0 */
uint F_00aa90a0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa90a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  ushort * puVar5;
  uint * puVar6;
  int * piVar7;
  uint uVar8;
  undefined * pvVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 * puVar12;
  byte * pbVar13;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar4 = F_00424750(REFG(undefined4, 0x137104c));
  if (((*(byte *)((int)this + 0x8e) & 0x80) == 0) &&
     (uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this), (char)uVar4 != '\0')) {
    *(undefined1 *)((int)this + 0x2ea9) = 1;
    uVar4 = 0;
    do {
      if (uVar4 < 10) {
        if (((*(byte *)((int)this + 0x2dd3) & 0x20) == 0) || (uVar4 != 0)) {
          uVar11 = *(undefined4 *)((int)this + uVar4 * 4 + 0x2d90);
        }
        else {
          uVar11 = 0;
        }
      }
      else {
        uVar11 = 0;
      }
      ((undefined4 *)(gen_frame + 0x38))[(int)(uVar4)] = uVar11;
      if (uVar4 + 1 < 10) {
        if (((*(byte *)((int)this + 0x2dd3) & 0x20) == 0) || (uVar11 = 0, uVar4 != 0xffffffff)) {
          uVar11 = *(undefined4 *)((int)this + uVar4 * 4 + 0x2d94);
        }
      }
      else {
        uVar11 = 0;
      }
      ((undefined4 *)(gen_frame + 0x38))[(int)(uVar4 + 1)] = uVar11;
      if (uVar4 + 2 < 10) {
        if (((*(byte *)((int)this + 0x2dd3) & 0x20) == 0) || (uVar11 = 0, uVar4 != 0xfffffffe)) {
          uVar11 = *(undefined4 *)((int)this + uVar4 * 4 + 0x2d98);
        }
      }
      else {
        uVar11 = 0;
      }
      ((undefined4 *)(gen_frame + 0x38))[(int)(uVar4 + 2)] = uVar11;
      if (uVar4 + 3 < 10) {
        if (((*(byte *)((int)this + 0x2dd3) & 0x20) == 0) || (uVar11 = 0, uVar4 != 0xfffffffd)) {
          uVar11 = *(undefined4 *)((int)this + uVar4 * 4 + 0x2d9c);
        }
      }
      else {
        uVar11 = 0;
      }
      ((undefined4 *)(gen_frame + 0x38))[(int)(uVar4 + 3)] = uVar11;
      if (uVar4 + 4 < 10) {
        if (((*(byte *)((int)this + 0x2dd3) & 0x20) == 0) || (uVar11 = 0, uVar4 != 0xfffffffc)) {
          uVar11 = *(undefined4 *)((int)this + uVar4 * 4 + 0x2da0);
        }
      }
      else {
        uVar11 = 0;
      }
      ((undefined4 *)(gen_frame + 0x38))[(int)(uVar4 + 4)] = uVar11;
      uVar4 = uVar4 + 5;
    } while ((int)uVar4 < 10);
    uVar11 = *(undefined4 *)((int)this + 0x2e98);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
    uVar4 = F_00aa5370((gen_frame + 0x7c),uVar11,(int)this + 0x2db8,((undefined4 *)(gen_frame + 0x38)),(uint)(uVar4 == 8));
    ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,uVar4);
    if (((*(char *)((int)this + 0x2f1c) != '\0') && (uVar4 = F_00a5f500(this), uVar4 != 0)) &&
       (uVar4 = F_00a5f500(this), (*(byte *)(uVar4 + 0x70) >> 5 & 1) == 0)) {
      *(ushort *)(uVar4 + 0x70) = *(ushort *)(uVar4 + 0x70) | 0x60;
    }
    if (((*(int *)((int)this + 0xf0) == 0) &&
        (puVar5 = (ushort *)F_00ab2960(*(undefined4 *)((int)this + 0x2e98)),
        puVar5 != (ushort *)0x0)) &&
       (((char)puVar5[2] == '\x04' &&
        (puVar6 = (uint *)F_00ab3d20((uint)*puVar5), puVar6 != (uint *)0x0)))) {
      piVar7 = (int *)F_00a1d100(0xffff,0,&REFG(float, 0x1302df0),(*puVar6 & 0xffffff) + (int)puVar6,
                                   "Client.Game.Character",(uint)(*(int *)((int)this + 0x11c) == 0),
                                   (uint)*(ushort *)((int)this + 0x88),8,0);
      *(int * PTR32 *)((int)this + 0xf0) = piVar7;
      if (piVar7 != (int *)0x0) {
        F_00a1eab0(&(*(undefined4 *)(gen_frame + 0x30)),this);
        ((code *)*(gen_code32 *)(*piVar7 + 0x100))(piVar7,&(*(undefined4 *)(gen_frame + 0x30)));
      }
    }
    F_00aa1c10(this);
    if ((*(int *)((int)this + 0xec) != 0) &&
       (((REFG(void * PTR32, 0x1379694) == this || (cVar1 = *(char *)((int)this + 0x2ecd), cVar1 == '\x02')) ||
        ((cVar1 == '\x06' || (cVar1 == '\x01')))))) {
      puVar5 = ((ushort *)GEN_TOP((*(int *)((int)this + 0xec) + 0x70)));
      *puVar5 = *puVar5 | 0x80;
    }
    if (*(int *)((int)this + 0x11c) != 0) {
      F_00a61940(this);
    }
    if (*(char *)((int)this + 0x188) == '\x02') {
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar9 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar9 = this;
      }
      uVar4 = F_00531e00((int)pvVar9 + 0x680,0);
      if (uVar4 != 0x4d) {
        if ((*(byte *)((int)this + 0x2dd2) & 4) == 0) {
          uVar11 = 0x43;
        }
        else {
          uVar11 = 0x49;
        }
        F_00aa4270(this,uVar11,0,0);
        *(undefined1 *)((int)this + 0x18b) = 2;
      }
    }
    F_00a60de0(this);
    F_00a61000(this);
    F_00a61140(this);
    (*(int *)(gen_frame + 0xc)) = 0;
    puVar12 = (undefined4 *)((int)this + 0x16b0);
    do {
      uVar11 = puVar12[1];
      uVar2 = *puVar12;
      *puVar12 = 0;
      puVar12[1] = 0;
      F_00aa80c0(this,(*(int *)(gen_frame + 0xc)),uVar2,uVar11);
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
      puVar12 = puVar12 + 0x1e8;
    } while ((*(int *)(gen_frame + 0xc)) < 3);
    pvVar9 = *(undefined * PTR32 *)((int)this + 0xec);
    if (pvVar9 != (undefined *)0x0) {
      uVar4 = F_00694320((undefined *)((int)this + 0x1e60));
      uVar8 = F_00694320((undefined *)((int)this + 0x16c0));
      F_006abe30(pvVar9,uVar8,uVar4);
      if (REFG(void * PTR32, 0x1379694) == this) {
        F_00b5a0c0(REFG(void * PTR32, 0x14c4e78),1);
      }
    }
    F_00b5ba00(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)((int)this + 0x88));
    F_00a608c0(this);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    if (uVar4 != 0) {
      pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this)));
      F_00b7bce0(pvVar9);
    }
    pbVar13 = (byte *)((int)this + 0x2ef1);
    do {
      if (*pbVar13 != 0) {
        uVar8 = F_00ab23e0((uint)*pbVar13);
        uVar4 = 0;
        if (uVar8 == 0) goto LAB_00aa9668;
        if (*(char *)(uVar8 + 0xf) != -1) {
          (*(int *)(gen_frame + 0x4)) = (int)*(char *)(uVar8 + 0xf);
        }
        if (*(char *)(uVar8 + 0x10) != -1) {
          (*(int *)(gen_frame + 0x8)) = (int)*(char *)(uVar8 + 0x10);
        }
        if (*(short *)(uVar8 + 0xc) != 0) {
          *(uint *)((int)this + 0x514) = (uint)*(ushort *)(uVar8 + 0xc);
          *(uint *)((int)this + 0x518) = (uint)*(ushort *)(uVar8 + 0xc);
        }
      }
      pbVar13 = pbVar13 + 1;
    } while ((int)(pbVar13 + (-0x2ef1 - (int)this)) < 5);
    iVar10 = (*(int *)(gen_frame + 0x4)) + 0x90;
    uVar4 = F_00ab2a20(iVar10);
    if (uVar4 != 0) {
      if ((*(char *)(uVar4 + 7) == '\x01') && (bVar3 = F_00533ec0((int)this + 0x620), bVar3 != 0))
      {
        F_00aa2c50(this,0,0,0);
      }
      if (*(char *)(uVar4 + 4) == '\x03') {
        F_00549140((undefined *)((int)this + 0x680),iVar10,0,1);
      }
      ((undefined4 *)(gen_frame + 0x38))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x38))[1], REFG(float, 0x1087f04));
      ((undefined4 *)(gen_frame + 0x38))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x38))[2], REFG(float, 0x1375ac0));
      ((undefined4 *)(gen_frame + 0x38))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x38))[3], REFG(float, 0x1375ac4));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x10))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = REFG(undefined4, 0x1335e70);
      ((undefined4 *)(gen_frame + 0x38))[0] = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x1375ac8);
      (*(undefined4 *)(gen_frame + 0x50)) = 0x1000000;
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar9 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar9 = this;
      }
      F_00549140((undefined *)((int)pvVar9 + 0x680),iVar10,((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)),1);
    }
    iVar10 = (*(int *)(gen_frame + 0x8)) + 0x73;
    uVar4 = F_00ab2a20(iVar10);
    if (uVar4 != 0) {
      if ((*(char *)(uVar4 + 7) == '\x01') && (bVar3 = F_00533ec0((int)this + 0x620), bVar3 != 0))
      {
        F_00aa2c50(this,0,0,0);
      }
      if (*(char *)(uVar4 + 4) == '\x03') {
        F_00549140((undefined *)((int)this + 0x680),iVar10,0,1);
      }
      ((undefined4 *)(gen_frame + 0x38))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x38))[1], REFG(float, 0x1087f04));
      ((undefined4 *)(gen_frame + 0x38))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x38))[2], REFG(float, 0x1375ac0));
      ((undefined4 *)(gen_frame + 0x38))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x38))[3], REFG(float, 0x1375ac4));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x10))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = REFG(undefined4, 0x1335e70);
      ((undefined4 *)(gen_frame + 0x38))[0] = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x1375ac8);
      (*(undefined4 *)(gen_frame + 0x50)) = 0x1000000;
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar9 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar9 = this;
      }
      F_00549140((undefined *)((int)pvVar9 + 0x680),iVar10,((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)),1);
    }
    F_00aa43b0(this);
    uVar4 = F_00aa3da0(this);
  }
LAB_00aa9668: ;
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return uVar4;
}

/* ref: FUN_00aa9680 */
uint F_00aa9680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa9680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  char cVar2;
  undefined4 * puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined * pvVar9;
  
  puVar3 = param_1;
  uVar5 = F_00694320((undefined *)((int)this + 0x16c0));
  uVar6 = F_00694320((undefined *)((int)this + 0x1e60));
  if (*(int *)((int)this + 0x25f0) != 0 || *(int *)((int)this + 0x25f4) != 0) {
    piVar1 = (int *)((int)this + 0x2600);
    F_00b5c0c0(REFG(void * PTR32, 0x14c4e84),piVar1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2d50) + 4))))((int)this + 0x2d50);
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    *(byte *)((int)this + 0x2d84) = *(byte *)((int)this + 0x2d84) & 0xf8;
    *(undefined4 *)((int)this + 0x25f0) = 0;
    *(undefined4 *)((int)this + 0x25f4) = 0;
    *(undefined1 *)((int)this + 0x2d85) = 0;
  }
  F_00aa80c0(this,0,*param_1,param_1[1]);
  F_00aa80c0(this,1,param_1[2],param_1[3]);
  param_1 = param_1 + 5;
  iVar8 = 0;
  do {
    F_00aa2260(this,iVar8,*param_1);
    param_1 = param_1 + 1;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 10);
  cVar2 = *(char *)(puVar3 + 4);
  *(char *)((int)this + 0x1680) = cVar2;
  if ((*(int *)((int)this + 0x1684) == 0) && (cVar2 != '\0')) {
    F_00aa1c10(this);
  }
  else {
    F_00a9f170(this);
  }
  pvVar9 = (undefined *)((int)this + 0x16c0);
  uVar7 = F_00694320(pvVar9);
  if (uVar7 == uVar5) {
    uVar5 = F_00694320((undefined *)((int)this + 0x1e60));
    if (uVar5 == uVar6) goto LAB_00aa9886;
  }
  if (*(char *)((int)this + 0x2e08) == '\0') {
    if (REFG(void * PTR32, 0x1379694) == this) {
      F_00a7ef20(&REFG(undefined1, 0x14ab058),0,1,0);
    }
    else if ((*(byte *)((int)this + 0x2dd2) & 4) != 0) {
      *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) & 0xfb;
      F_00aa4270(this,2,0,0);
      bVar4 = F_00533ec0((int)this + 0x620);
      if (bVar4 != 0) {
        F_00aa2c50(this,0,0,0);
      }
    }
    *(undefined1 *)((int)this + 0x195) = 0;
    iVar8 = 3;
    do {
      if (*(int *)((int)pvVar9 + -0x10) != 0 || *(int *)((int)pvVar9 + -0xc) != 0) {
        F_00b5c0c0(REFG(void * PTR32, 0x14c4e84),pvVar9);
      }
      pvVar9 = (undefined *)((int)pvVar9 + 0x7a0);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    F_00b5aeb0(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)((int)this + 0x88),0);
    uVar5 = F_00ae6e80((undefined *)((int)this + 0x1b0));
    F_00aa4150(this,uVar5,0,0);
  }
  pvVar9 = *(undefined * PTR32 *)((int)this + 0xec);
  if (pvVar9 != (undefined *)0x0) {
    uVar5 = F_00694320((undefined *)((int)this + 0x1e60));
    uVar6 = F_00694320((undefined *)((int)this + 0x16c0));
    F_006abe30(pvVar9,uVar6,uVar5);
    if (REFG(void * PTR32, 0x1379694) == this) {
      F_00b5a0c0(REFG(void * PTR32, 0x14c4e78),1);
    }
  }
LAB_00aa9886: ;
  pvVar9 = (undefined *)F_006b8c00();
  uVar5 = F_006de6c0(pvVar9,this);
  return uVar5;
}

/* ref: FUN_00aa98a0 */
uint F_00aa98a0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa98a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x10e6e24));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[2])REFP(0x10e6e14));
  iVar2 = 2;
  puVar3 = (undefined4 *)((int)this + 0x2da0);
  do {
    this_00 = puVar3 + -0x1e8;
    puVar3[-0x14] = (*(undefined * PTR32 (*)[3])REFP(0x10b2b58));
    *this_00 = (*(undefined * PTR32 (*)[91])REFP(0x10b373c));
    F_006b8460(this_00);
    iVar2 = iVar2 + -1;
    puVar3 = this_00;
  } while (-1 < iVar2);
  F_00bc5ba0((undefined *)((int)this + 0x15dc));
  F_0042c880((undefined *)((int)this + 0x1584));
  F_00a65720((undefined *)((int)this + 0xa10));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x940) = (*(undefined * PTR32 (*)[1])REFP(0x10e6da4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa00) = (*(undefined * PTR32 (*)[1])REFP(0x109c984));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9b0) = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x680) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d94));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x780) = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x620) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x638) =
       (*(undefined * PTR32 (*)[1])REFP(0x1090544));
  uVar1 = F_00a650a0((undefined *)((int)this + 0x1b0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[2])REFP(0x10e6dc4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[53])REFP(0x10e6c8c));
  return uVar1;
}

/* ref: FUN_00aa9970 */
uint F_00aa9970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xaa9970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 * puVar10;
  uint uVar11;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar5 = param_1;
  uVar3 = param_2;
  uVar11 = param_3;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    (*(undefined1 *)(gen_frame + 0x18)) = 1;
    if (*(int *)((int)this + 0x1e50) != 0 || *(int *)((int)this + 0x1e54) != 0) {
      piVar4 = (int *)((int)this + 0x1e60);
      F_00b5c0c0(REFG(void * PTR32, 0x14c4e84),piVar4);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x25b0) + 4))))((int)this + 0x25b0);
      ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
      *(byte *)((int)this + 0x25e4) = *(byte *)((int)this + 0x25e4) & 0xf8;
      *(undefined4 *)((int)this + 0x1e50) = 0;
      *(undefined4 *)((int)this + 0x1e54) = 0;
      *(undefined1 *)((int)this + 0x25e5) = 0;
    }
    *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) & 0xf7;
    *(undefined1 *)((int)this + 0x2dd5) = 0;
    uVar5 = F_00aa4270(this,0xff,0,0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 1: ;
    *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) | 8;
    *(undefined1 *)((int)this + 0x2dd5) = 0;
    uVar5 = F_00aa4270(this,0x107,0,0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 2: ;
    if (param_3 == 0) {
      if (param_2 == 0) {
        cVar1 = (*(char *)((int)this + 0x1688) != '\x10') * '\x04' + '\x02';
      }
      else {
        cVar1 = (*(char *)((int)this + 0x1688) != '\x10') * '\x04' + '\x03';
      }
    }
    else {
      cVar1 = (*(char *)((int)this + 0x1688) != '\x10') * '\x04' + '\x04';
    }
    *(char *)((int)this + 0x2dd5) = cVar1;
    if ((*(byte *)((int)this + 0x2dd2) & 8) != 0) {
      uVar5 = F_00aa4270(this,0x10a,0,0);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar5;
    }
    goto LAB_00aa9b4e;
  case 3: ;
    *(char *)((int)this + 0x2dd5) = (*(char *)((int)this + 0x1688) != '\x10') * '\x04' + '\x05';
    if ((*(byte *)((int)this + 0x2dd2) & 8) != 0) {
      uVar5 = F_00aa4270(this,0x10a,0,0);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar5;
    }
LAB_00aa9b4e: ;
    uVar5 = F_00aa4270(this,0x102,0,0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 4: ;
    if ((*(byte *)((int)this + 0x2dd2) & 8) == 0) {
      *(undefined1 *)((int)this + 0x2dd5) = 0;
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar2 = this;
      }
      uVar8 = 0x101;
    }
    else {
      *(undefined1 *)((int)this + 0x2dd5) = 1;
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar2 = this;
      }
      uVar8 = 0x109;
    }
    uVar5 = F_005486f0((undefined *)((int)pvVar2 + 0x940),uVar8,0,0,0);
    *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) & 0xf7;
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 5: ;
    F_004816e0(((undefined1 *)(gen_frame + 0x8)));
    (*(uint *)(gen_frame + 0x20)) = 0;
    (*(uint *)(gen_frame + 0x20)) = param_2;
    (*(uint * PTR32 *)(gen_frame + 0x24)) = &(*(uint *)(gen_frame + 0x20));
    (*(undefined1 *)(gen_frame + 0x28)) = 0;
    F_00493bc0(((undefined1 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x20)));
    F_004917c0(&(*(uint *)(gen_frame + 0x20)));
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar4 == (int *)0x0) goto LAB_00aaa188;
    uVar8 = 0x42f;
    goto LAB_00aaa178;
  case 6: ;
    *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) & 0xf7;
    *(undefined1 *)((int)this + 0x2dd5) = 10;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
    case 1: ;
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar2 = this;
      }
      F_00549500((int)pvVar2 + 0x680,0,0xec,0xed,0,REFG(float, 0x10e79e4),0);
      break;
    case 2: ;
    case 3: ;
      uVar8 = 0xed;
LAB_00aa9ca7: ;
      F_00aa4270(this,uVar8,0,0);
    }
    goto switchD_00aa9ce9_default;
  case 7: ;
    *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) | 8;
    *(undefined1 *)((int)this + 0x2dd5) = 10;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
    case 1: ;
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar2 = this;
      }
      F_00549500((int)pvVar2 + 0x680,0,0xf3,0xf4,0,REFG(float, 0x10e79e4),0);
      break;
    case 2: ;
    case 3: ;
      uVar8 = 0xf4;
      goto LAB_00aa9ca7;
    }
switchD_00aa9ce9_default: ;
    uVar3 = param_3;
    uVar11 = param_4;
    if ((param_3 != *(uint *)((int)this + 0x25f0)) ||
       (uVar5 = param_3, param_4 != *(uint *)((int)this + 0x25f4))) {
LAB_00aaa3ed: ;
      uVar8 = 2;
LAB_00aaa3ef: ;
      uVar5 = F_00aa80c0(this,uVar8,uVar3,uVar11);
    }
    break;
  case 8: ;
    if (*(undefined * PTR32 *)((int)this + 0x1650) != (undefined *)0x0) {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1650),1);
      F_00983120(*(undefined4 *)((int)this + 0x1650),0);
    }
    *(undefined4 *)((int)this + 0x1650) = 0;
    *(undefined1 *)((int)this + 0x2dd6) = 0;
    uVar5 = F_00aa2620(this,param_2);
    if (param_3 != 0) {
      if (*(undefined * PTR32 *)((int)this + 0x1654) != (undefined *)0x0) {
        F_009bc530(*(undefined * PTR32 *)((int)this + 0x1654),1);
        F_00983120(*(undefined4 *)((int)this + 0x1654),0);
      }
      *(undefined4 *)((int)this + 0x1654) = 0;
      *(undefined1 *)((int)this + 0x2dd7) = 0;
      uVar5 = F_00aa2620(this,param_3);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar5;
    }
    break;
  case 9: ;
    uVar5 = F_00aa2900(this,1);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 10: ;
    switch((unsigned int)(uintptr_t)(param_4)) {
    case 1: ;
      *(undefined1 *)((int)this + 0x2dd5) = 0xc;
      break;
    case 2: ;
      *(undefined1 *)((int)this + 0x2dd5) = 0xd;
      break;
    case 3: ;
      *(undefined1 *)((int)this + 0x2dd5) = 0xe;
      break;
    case 4: ;
      *(undefined1 *)((int)this + 0x2dd5) = 0xf;
      break;
    case 5: ;
      *(undefined1 *)((int)this + 0x2dd5) = 0x10;
      break;
    case 6: ;
      *(undefined1 *)((int)this + 0x2dd5) = 0x11;
      break;
    default: ;
      *(undefined1 *)((int)this + 0x2dd5) = 0xb;
    }
    goto LAB_00aa9e84;
  case 0xb: ;
    switch((unsigned int)(uintptr_t)(param_4)) {
    case 1: ;
      *(undefined1 *)((int)this + 0x2dd5) = 0x13;
      break;
    case 2: ;
      *(undefined1 *)((int)this + 0x2dd5) = 0x14;
      break;
    case 3: ;
      *(undefined1 *)((int)this + 0x2dd5) = 0x15;
      break;
    case 4: ;
      *(undefined1 *)((int)this + 0x2dd5) = 0x16;
      break;
    case 5: ;
      *(undefined1 *)((int)this + 0x2dd5) = 0x17;
      break;
    case 6: ;
      *(undefined1 *)((int)this + 0x2dd5) = 0x18;
      break;
    default: ;
      *(undefined1 *)((int)this + 0x2dd5) = 0x12;
    }
    goto LAB_00aa9e84;
  case 0xc: ;
    *(undefined1 *)((int)this + 0x2dd5) = 0x19;
LAB_00aa9e84: ;
    uVar5 = param_2;
    if ((*(byte *)((int)this + 0x2dd2) & 8) != 0) {
      uVar5 = param_3;
    }
    uVar5 = F_00aa4270(this,uVar5,0,0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 0xd: ;
    *(undefined1 *)((int)this + 0x2dd5) = 10;
    if ((*(byte *)((int)this + 0x2dd2) & 8) == 0) {
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar2 = this;
      }
      F_00549500((int)pvVar2 + 0x680,0,0xee,3,0,REFG(float, 0x10e79e4),0);
    }
    else {
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar2 = this;
      }
      F_00549500((int)pvVar2 + 0x680,0,0xf5,3,0,REFG(float, 0x10e79e4),0);
    }
    F_00aa2900(this,0);
    (*(undefined1 *)(gen_frame + 0x18)) = 1;
    if (*(int *)((int)this + 0x1e50) != 0 || *(int *)((int)this + 0x1e54) != 0) {
      piVar4 = (int *)((int)this + 0x1e60);
      F_00b5c0c0(REFG(void * PTR32, 0x14c4e84),piVar4);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x25b0) + 4))))((int)this + 0x25b0);
      ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
      *(byte *)((int)this + 0x25e4) = *(byte *)((int)this + 0x25e4) & 0xf8;
      *(undefined4 *)((int)this + 0x1e50) = 0;
      *(undefined4 *)((int)this + 0x1e54) = 0;
      *(undefined1 *)((int)this + 0x25e5) = 0;
    }
    (*(undefined1 *)(gen_frame + 0x18)) = 1;
    if (*(int *)((int)this + 0x25f0) != 0 || *(int *)((int)this + 0x25f4) != 0) {
      piVar4 = (int *)((int)this + 0x2600);
      F_00b5c0c0(REFG(void * PTR32, 0x14c4e84),piVar4);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2d50) + 4))))((int)this + 0x2d50);
      ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
      *(byte *)((int)this + 0x2d84) = *(byte *)((int)this + 0x2d84) & 0xf8;
      *(undefined4 *)((int)this + 0x25f0) = 0;
      *(undefined4 *)((int)this + 0x25f4) = 0;
      *(undefined1 *)((int)this + 0x2d85) = 0;
    }
    F_00aaa5b0(this,1);
    *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) & 0xf7;
    uVar5 = F_00a4a760(&REFG(undefined, 0x14a7360),0x18,0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 0xe: ;
    F_00aa2900(this,1);
    uVar5 = F_00aa2620(this,0xd);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 0xf: ;
    F_00aa2900(this,1);
    uVar5 = F_00aa2620(this,0xe);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 0x10: ;
    *(undefined1 *)((int)this + 0x2dd5) = 0x1b;
    uVar8 = 0xfb;
    if ((*(byte *)((int)this + 0x2dd2) & 8) != 0) {
      uVar8 = 0xfc;
    }
    uVar5 = F_00aa4270(this,uVar8,0,0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 0x11: ;
  case 0x12: ;
    uVar5 = param_2;
    if ((param_2 != 0) && (param_3 != 0)) {
      if (param_3 != 1) {
        uVar5 = F_00a7d290(0x485,this,param_2,param_3,0,REFG(float, 0x10a509c));
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar5;
      }
      uVar5 = F_00a7d290(0x484,this,param_2,0,0,REFG(float, 0x10a509c));
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar5;
    }
    break;
  case 0x13: ;
    F_00aa2900(this,1);
    uVar5 = F_00aa2620(this,0xc);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 0x14: ;
    F_004816e0(((undefined1 *)(gen_frame + 0x8)));
    (*(uint *)(gen_frame + 0x2c)) = 0;
    (*(uint *)(gen_frame + 0x2c)) = param_2;
    (*(uint * PTR32 *)(gen_frame + 0x30)) = &(*(uint *)(gen_frame + 0x2c));
    (*(undefined1 *)(gen_frame + 0x34)) = 0;
    F_00493bc0(((undefined1 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x2c)));
    F_004917c0(&(*(uint *)(gen_frame + 0x2c)));
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar4 == (int *)0x0) goto LAB_00aaa188;
    uVar8 = 0x49a;
LAB_00aaa178: ;
    puVar10 = ((undefined1 *)(gen_frame + 0x8));
    uVar9 = 0;
    uVar7 = REFG(undefined4, 0x1379694);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
    F_0046abb0(pvVar2,uVar8,uVar7,uVar9,puVar10);
LAB_00aaa188: ;
    uVar5 = F_00493180(((undefined1 *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 0x15: ;
    *(undefined1 *)((int)this + 0x2dd5) = 0x1a;
    if ((*(byte *)((int)this + 0x2dd2) & 8) != 0) {
      if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
        uVar5 = F_00549500(*(int *)((int)this + 0x2e00) + 0x680,0,0xf8,0xf4,0,REFG(float, 0x10e79e4),0);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar5;
      }
LAB_00aaa22d: ;
      uVar5 = F_00549500((int)this + 0x680,0,0xf8,0xf4,0,REFG(float, 0x10e79e4),0);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar5;
    }
    goto LAB_00aaa2c2;
  case 0x16: ;
    *(undefined1 *)((int)this + 0x2dd5) = 0x1b;
    if ((*(byte *)((int)this + 0x2dd2) & 8) != 0) {
      if ((*(char *)((int)this + 0x2e08) != '\0') && (*(undefined * PTR32 *)((int)this + 0x2e00) != (undefined *)0x0)
         ) {
        this = *(undefined * PTR32 *)((int)this + 0x2e00);
      }
      goto LAB_00aaa22d;
    }
    goto LAB_00aaa2c2;
  case 0x17: ;
    *(undefined1 *)((int)this + 0x2dd5) = 0x1c;
    if ((*(byte *)((int)this + 0x2dd2) & 8) != 0) {
      if ((*(char *)((int)this + 0x2e08) != '\0') && (*(undefined * PTR32 *)((int)this + 0x2e00) != (undefined *)0x0)
         ) {
        this = *(undefined * PTR32 *)((int)this + 0x2e00);
      }
      uVar5 = F_00549500((int)this + 0x680,0,0xf8,0xf4,0,REFG(float, 0x10e79e4),0);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar5;
    }
LAB_00aaa2c2: ;
    if ((*(char *)((int)this + 0x2e08) != '\0') && (*(undefined * PTR32 *)((int)this + 0x2e00) != (undefined *)0x0))
    {
      this = *(undefined * PTR32 *)((int)this + 0x2e00);
    }
    uVar5 = F_00549500((int)this + 0x680,0,0xf1,0xed,0,REFG(float, 0x10e79e4),0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 0x18: ;
    uVar5 = F_00aa2620(this,param_2);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 0x19: ;
    break;
  case 0x1a: ;
    uVar8 = 0x150001;
    pvVar2 = (undefined *)F_006b8c00();
    uVar3 = F_006e3240(pvVar2,uVar8);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = F_006c2730(this,param_2,param_3);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar5;
    }
    break;
  case 0x1b: ;
    uVar5 = 0;
    if ((param_2 == *(uint *)((int)this + 0x16b0)) && (param_3 == *(uint *)((int)this + 0x16b4)))
    break;
    if (param_2 == 0 && param_3 == 0) {
      F_00aa2900(this,0);
    }
    uVar8 = 0;
    goto LAB_00aaa3ef;
  case 0x1c: ;
    if ((param_2 != *(uint *)((int)this + 0x1e50)) || (param_3 != *(uint *)((int)this + 0x1e54))) {
      if (param_2 == 0 && param_3 == 0) {
        F_00aa2900(this,0);
      }
      F_00aa80c0(this,1,param_2,param_3);
    }
    iVar6 = 0;
    do {
      uVar5 = F_00aa7cb0(this,iVar6);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar5;
  case 0x1d: ;
    uVar5 = 0;
    if ((param_2 == *(uint *)((int)this + 0x25f0)) && (param_3 == *(uint *)((int)this + 0x25f4)))
    break;
    if (param_2 == 0 && param_3 == 0) {
      F_00aa2900(this,0);
    }
    goto LAB_00aaa3ed;
  default: ;
    goto switchD_00aa9991_default;
  }
switchD_00aa9991_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar5;
}

/* ref: FUN_00aaa4e0 */
byte F_00aaa4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaaa4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  byte bVar1;
  int * piVar2;
  
  if (((*(undefined * PTR32 *)((int)this + 0x2dfc) == (undefined *)0x0) || (*(char *)((int)this + 0x2e08) != '\0'))
     || (*(char *)((int)this + 0x2e09) != '\0')) {
    return 0;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x2e04);
  if (this_00 != (undefined *)0x0) {
    if (*(uint *)((int)this_00 + 0x80) == (uint)(ushort)param_1) {
      return 0;
    }
    if (this_00 != (undefined *)0x0) {
      F_00bc7d60(this_00,(uint)(ushort)param_1);
      return 1;
    }
  }
  if ((ushort)param_1 != 0) {
    piVar2 = (int *)F_00aada60(*(undefined * PTR32 *)((int)this + 0x2dfc));
    *(int * PTR32 *)((int)this + 0x2e04) = piVar2;
    ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2,*(ushort *)((int)this + 0x88) + 1);
    bVar1 = F_00bc79e0(*(undefined4 *)((int)this + 0x2e04),(uint)this,(uint)(ushort)param_1);
    if (bVar1 == 0) {
      F_00aa14e0(this,0);
      return 0;
    }
    if ((char)param_2 != '\0') {
      F_00bc6da0(*(undefined4 *)((int)this + 0x2e04));
    }
  }
  F_00a35790(&REFG(undefined, 0x14a31e0),this);
  return 1;
}

/* ref: FUN_00aaa5b0 */
uint F_00aaa5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaaa5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  byte bVar2;
  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  cVar1 = *(char *)((int)this + 0x188);
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  *(char *)((int)this + 0x188) = (char)param_1;
  if (REFG(void * PTR32, 0x1379694) == this) {
    bVar2 = F_00a4a870(&REFG(undefined, 0x14a7360),param_1);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  if (param_1 == 2) {
    if (cVar1 != *(char *)((int)this + 0x188)) {
      *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) | 0x24;
    }
  }
  else if ((param_1 == 6) && (*(char *)((int)this + 0x1688) != '\x12')) {
    if ((*(byte *)((int)this + 0x2dd2) & 8) == 0) {
      uVar3 = F_00aa9970(this,0,0,0,0);
    }
    else {
      uVar3 = F_00aa9970(this,1,0,0,0);
    }
  }
  if (REFG(void * PTR32, 0x1379694) == this) {
    uVar3 = F_00a6fbc0(&REFG(undefined, 0x14ab740),0,0);
  }
  return uVar3;
}

/* ref: FUN_00aaa640 */
byte F_00aaa640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaaa640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  code * pcVar1;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x80);
  *(undefined1 *)((int)this + 0x8a) = 1;
  *(undefined4 *)((int)this + 0x80) = 0;
  (*pcVar1)(this);
  F_00aa34a0(this,0,param_1,param_2,(float)(float10)1);
  F_00a5f450(this,0xe0000000);
  F_00a5f430(this,0);
  *(undefined1 *)((int)this + 0x188) = 1;
  if (REFG(void * PTR32, 0x1379694) == this) {
    F_00a4a870(&REFG(undefined, 0x14a7360),1);
    if (REFG(void * PTR32, 0x1379694) == this) {
      F_00a6fbc0(&REFG(undefined, 0x14ab740),0,0);
    }
  }
  return 1;
}

/* ref: FUN_00aaa6d0 */
byte F_00aaa6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaaa6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  code * pcVar1;
  float * pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  ((uint *)(gen_frame + 0x10))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x80);
  uVar4 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  *(undefined1 *)((int)this + 0x8a) = 2;
  *(undefined4 *)((int)this + 0x80) = param_1;
  (*pcVar1)(this);
  pfVar2 = (float *)F_00ab22f0(param_1);
  if (pfVar2 != (float *)0x0) {
    if (*(ushort *)(pfVar2 + 3) != 0) {
      (*(uint *)(gen_frame + 0xc)) = F_00ab2350((uint)*(ushort *)(pfVar2 + 3));
    }
    if (*(short *)((int)pfVar2 + 0xe) == 0) {
      ((uint *)(gen_frame + 0x10))[0] = 0;
      ((uint *)(gen_frame + 0x10))[1] = 0;
      ((uint *)(gen_frame + 0x10))[2] = 0;
      ((uint *)(gen_frame + 0x10))[3] = 0;
      ((uint *)(gen_frame + 0x10))[4] = 0;
      ((uint *)(gen_frame + 0x10))[5] = 0;
      ((uint *)(gen_frame + 0x10))[6] = 0;
      ((uint *)(gen_frame + 0x10))[7] = 0;
      ((uint *)(gen_frame + 0x10))[8] = 0;
      ((uint *)(gen_frame + 0x10))[9] = 0;
    }
    else {
      do {
        uVar3 = F_00ab2380((uint)*(ushort *)((int)pfVar2 + 0xe));
        uVar5 = uVar4 + 1;
        ((uint *)(gen_frame + 0x10))[(int)(uVar4)] = *(uint *)(uVar3 + uVar4 * 4 + 0x10);
        uVar4 = uVar5;
      } while (uVar5 < 10);
    }
    uVar4 = F_00ab2960((uint)*(ushort *)((int)pfVar2 + 10));
    if ((uVar4 != 0) && (*(char *)(uVar4 + 4) == '\x02')) {
      ((uint *)(gen_frame + 0x10))[1] = 1;
    }
    F_00aa34a0(this,(uint)*(ushort *)((int)pfVar2 + 10),(*(uint *)(gen_frame + 0xc)),((uint *)(gen_frame + 0x10)),*pfVar2);
    F_00a5f450(this,0xe0000000);
    F_00a5f430(this,0);
    *(undefined1 *)((int)this + 0x188) = 1;
    if ((REFG(void * PTR32, 0x1379694) == this) && (F_00a4a870(&REFG(undefined, 0x14a7360),1), REFG(void * PTR32, 0x1379694) == this)) {
      F_00a6fbc0(&REFG(undefined, 0x14ab740),0,0);
    }
    F_00a607e0(this,0,param_2,2);
    F_00b76d60((int)this + 0x1340,(uint)*(ushort *)(pfVar2 + 2));
    *(undefined2 *)((int)this + 0x2ecd) = 0;
    *(float *)((int)this + 0x2ed0) = *pfVar2;
    *(undefined1 *)((int)this + 0x2ecf) = 0;
    F_00c47745(((uint *)(gen_frame + 0x10))[10] ^ (uint)(uint)(gen_frame + 0x3c));
    return 1;
  }
  F_00c47745(((uint *)(gen_frame + 0x10))[10] ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: FUN_00aaa870 */
byte F_00aaa870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaaa870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  code * pcVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  uint uVar8;
  undefined * pvVar9;
  undefined1 uVar10;
  int * piVar11;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x80);
  *(undefined1 *)((int)this + 0x8a) = 3;
  *(undefined4 *)((int)this + 0x80) = param_1;
  (*pcVar1)(this);
  uVar4 = F_00ab2410(param_1);
  if (uVar4 != 0) {
    uVar5 = F_00ab2440(param_1);
    if (uVar5 != 0) {
      *(undefined1 *)((int)this + 0x2f02) = *(undefined1 *)(uVar5 + 0x14);
      piVar6 = (int *)F_00ab2380((uint)*(ushort *)(uVar4 + 0xc0));
      uVar5 = 0;
      piVar11 = (int *)(uVar4 + 0x98);
      piVar3 = piVar6;
      do {
        (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3 + 5;
        (*(int *)(gen_frame + 0x1c)) = piVar11[-1];
        if (((*(int *)(gen_frame + 0x1c)) == 0) && (piVar6 != (int *)0x0)) {
          (*(int *)(gen_frame + 0x1c)) = piVar3[4];
          uVar10 = *(undefined1 *)(uVar5 + 0x3a + (int)piVar6);
LAB_00aaa932: ;
          (*(int *)(gen_frame + 0x1c)) = CONCAT13(uVar10,(undefined3)(*(int *)(gen_frame + 0x1c)));
        }
        else {
          if ((*(int *)(gen_frame + 0x1c)) != -1) {
            uVar10 = *(undefined1 *)(uVar5 + 0xe3 + uVar4);
            goto LAB_00aaa932;
          }
          (*(int *)(gen_frame + 0x1c)) = 0;
        }
        ((undefined4 *)(gen_frame + 0x20))[(int)(uVar5)] = (*(int *)(gen_frame + 0x1c));
        (*(int *)(gen_frame + 0x1c)) = *piVar11;
        if (((*(int *)(gen_frame + 0x1c)) == 0) && (piVar6 != (int *)0x0)) {
          (*(int *)(gen_frame + 0x1c)) = *(*(int * PTR32 *)(gen_frame + 0x18));
          uVar10 = *(undefined1 *)(uVar5 + 0x3b + (int)piVar6);
LAB_00aaa96c: ;
          (*(int *)(gen_frame + 0x1c)) = CONCAT13(uVar10,(undefined3)(*(int *)(gen_frame + 0x1c)));
        }
        else {
          if ((*(int *)(gen_frame + 0x1c)) != -1) {
            uVar10 = *(undefined1 *)(uVar5 + 0xe4 + uVar4);
            goto LAB_00aaa96c;
          }
          (*(int *)(gen_frame + 0x1c)) = 0;
        }
        ((undefined4 *)(gen_frame + 0x20))[(int)(uVar5 + 1)] = (*(int *)(gen_frame + 0x1c));
        (*(int *)(gen_frame + 0x1c)) = piVar11[1];
        if (((*(int *)(gen_frame + 0x1c)) == 0) && (piVar6 != (int *)0x0)) {
          (*(int *)(gen_frame + 0x1c)) = piVar3[6];
          uVar10 = *(undefined1 *)(uVar5 + 0x3c + (int)piVar6);
LAB_00aaa9a8: ;
          (*(int *)(gen_frame + 0x1c)) = CONCAT13(uVar10,(undefined3)(*(int *)(gen_frame + 0x1c)));
        }
        else {
          if ((*(int *)(gen_frame + 0x1c)) != -1) {
            uVar10 = *(undefined1 *)(uVar5 + 0xe5 + uVar4);
            goto LAB_00aaa9a8;
          }
          (*(int *)(gen_frame + 0x1c)) = 0;
        }
        ((undefined4 *)(gen_frame + 0x20))[(int)(uVar5 + 2)] = (*(int *)(gen_frame + 0x1c));
        (*(int *)(gen_frame + 0x1c)) = piVar11[2];
        if (((*(int *)(gen_frame + 0x1c)) == 0) && (piVar6 != (int *)0x0)) {
          (*(int *)(gen_frame + 0x1c)) = piVar3[7];
          uVar10 = *(undefined1 *)(uVar5 + 0x3d + (int)piVar6);
LAB_00aaa9e4: ;
          (*(int *)(gen_frame + 0x1c)) = CONCAT13(uVar10,(undefined3)(*(int *)(gen_frame + 0x1c)));
        }
        else {
          if ((*(int *)(gen_frame + 0x1c)) != -1) {
            uVar10 = *(undefined1 *)(uVar5 + 0xe6 + uVar4);
            goto LAB_00aaa9e4;
          }
          (*(int *)(gen_frame + 0x1c)) = 0;
        }
        ((undefined4 *)(gen_frame + 0x20))[(int)(uVar5 + 3)] = (*(int *)(gen_frame + 0x1c));
        (*(int *)(gen_frame + 0x1c)) = piVar11[3];
        if (((*(int *)(gen_frame + 0x1c)) == 0) && (piVar6 != (int *)0x0)) {
          (*(int *)(gen_frame + 0x1c)) = piVar3[8];
          uVar10 = *(undefined1 *)(uVar5 + 0x3e + (int)piVar6);
LAB_00aaaa20: ;
          (*(int *)(gen_frame + 0x1c)) = CONCAT13(uVar10,(undefined3)(*(int *)(gen_frame + 0x1c)));
        }
        else {
          if ((*(int *)(gen_frame + 0x1c)) != -1) {
            uVar10 = *(undefined1 *)(uVar5 + 0xe7 + uVar4);
            goto LAB_00aaaa20;
          }
          (*(int *)(gen_frame + 0x1c)) = 0;
        }
        ((undefined4 *)(gen_frame + 0x20))[(int)(uVar5 + 4)] = (*(int *)(gen_frame + 0x1c));
        uVar5 = uVar5 + 5;
        piVar11 = piVar11 + 5;
        piVar3 = (*(int * PTR32 *)(gen_frame + 0x18));
        if (9 < uVar5) {
          F_00aa34a0(this,(uint)*(ushort *)(uVar4 + 0xbe),uVar4 + 0xc6,((undefined4 *)(gen_frame + 0x20)),
                       *(float *)(uVar4 + 0x90));
          iVar7 = *(int *)(uVar4 + 0x80);
          iVar2 = *(int *)(uVar4 + 0x84);
          if ((iVar7 == 0 && iVar2 == 0) && (piVar6 != (int *)0x0)) {
            iVar7 = *piVar6;
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = (undefined2)piVar6[1];
            (*(uint *)(gen_frame + 0xc)) = (uint)CONCAT12((char)piVar6[0xe],(undefined2)(*(uint *)(gen_frame + 0xc)));
          }
          else if ((iVar7 == -1) && (iVar2 == 0)) {
            iVar7 = 0;
            (*(uint *)(gen_frame + 0xc)) = 0;
          }
          else {
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = (undefined2)iVar2;
            (*(uint *)(gen_frame + 0xc)) = (uint)CONCAT12(*(undefined1 *)(uVar4 + 0xe1),(undefined2)(*(uint *)(gen_frame + 0xc)));
          }
          F_00aa80c0(this,0,iVar7,(*(uint *)(gen_frame + 0xc)));
          iVar7 = *(int *)(uVar4 + 0x88);
          iVar2 = *(int *)(uVar4 + 0x8c);
          if ((iVar7 == 0 && iVar2 == 0) && (piVar6 != (int *)0x0)) {
            iVar7 = piVar6[2];
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = (undefined2)piVar6[3];
            (*(uint *)(gen_frame + 0xc)) = (uint)CONCAT12(*(undefined1 *)((int)piVar6 + 0x39),(undefined2)(*(uint *)(gen_frame + 0xc)));
          }
          else if ((iVar7 == -1) && (iVar2 == 0)) {
            iVar7 = 0;
            (*(uint *)(gen_frame + 0xc)) = 0;
          }
          else {
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = (undefined2)iVar2;
            (*(uint *)(gen_frame + 0xc)) = (uint)CONCAT12(*(undefined1 *)(uVar4 + 0xe2),(undefined2)(*(uint *)(gen_frame + 0xc)));
          }
          F_00aa80c0(this,1,iVar7,(*(uint *)(gen_frame + 0xc)));
          *(undefined1 *)((int)this + 0x188) = 1;
          if (REFG(void * PTR32, 0x1379694) == this) {
            F_00a4a870(&REFG(undefined, 0x14a7360),1);
            if (REFG(void * PTR32, 0x1379694) == this) {
              F_00a6fbc0(&REFG(undefined, 0x14ab740),0,0);
            }
          }
          F_00a5f570(this,(uint)*(byte *)(uVar4 + 0xed));
          if (*(char *)(uVar4 + 0xee) != '\0') {
            *(undefined1 *)((int)this + 0x5d2) = 1;
          }
          *(undefined1 *)((int)this + 0x1689) = 1;
          *(undefined4 *)((int)this + 0x1690) = 1;
          *(undefined4 *)((int)this + 0x1694) = 1;
          F_00a607e0(this,0,param_1,3);
          pvVar9 = *(undefined * PTR32 *)((int)this + 0xec);
          *(undefined2 *)((int)this + 0x2f00) = *(undefined2 *)(uVar4 + 0xbc);
          *(uint *)((int)this + 0x514) = (uint)*(ushort *)(uVar4 + 0xbc);
          if (pvVar9 != (undefined *)0x0) {
            uVar5 = F_00694320((undefined *)((int)this + 0x1e60));
            uVar8 = F_00694320((undefined *)((int)this + 0x16c0));
            F_006abe30(pvVar9,uVar8,uVar5);
            if (REFG(void * PTR32, 0x1379694) == this) {
              F_00b5a0c0(REFG(void * PTR32, 0x14c4e78),1);
            }
          }
          F_00bc8120((int)this + 0x1570,(uint)*(ushort *)(uVar4 + 0xc4));
          F_00b76d60((int)this + 0x1340,(uint)*(ushort *)(uVar4 + 0xc2));
          if (*(char *)((int)this + 0x2f02) == '\x05') {
            *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) | 0x80;
            *(byte *)((int)this + 0x8e) = *(byte *)((int)this + 0x8e) & 0xfc;
          }
          *(byte *)((int)this + 0x2dd3) =
               *(byte *)((int)this + 0x2dd3) ^
               (*(byte *)(uVar4 + 0xf0) ^ *(byte *)((int)this + 0x2dd3)) & 1;
          pvVar9 = (undefined *)F_006b8c00();
          F_00718ff0(pvVar9,this,uVar4);
          F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
          return 1;
        }
      } while( true );
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: FUN_00aaac50 */
byte F_00aaac50(unsigned int gen_a0)
{
  GEN_ENTER(0xaaac50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  if ((char)uVar3 != '\0') {
    return 1;
  }
  if (*(char *)((int)this + 0x8a) == '\x03') {
    uVar3 = F_00ab2410(*(undefined4 *)((int)this + 0x80));
    if (uVar3 == 0) {
      return 0;
    }
    bVar1 = F_00aaa870(this,*(undefined4 *)((int)this + 0x80));
    if (bVar1 != 0) {
      bVar2 = F_00ae2460(this);
      if ((bVar2 == 0) && (bVar2 = F_005d4e70(), bVar2 == 0)) {
        return bVar1;
      }
      ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
    }
    return bVar1;
  }
  bVar1 = F_00a5f960();
  return bVar1;
}

/* ref: FUN_00aaacd0 */
uint F_00aaacd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaaacd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint in_ecx;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined1 * puVar4;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x95: ;
    F_00aa4270(this,0x96,0,0);
    break;
  case 0x96: ;
  case 0x97: ;
  case 0x99: ;
  case 0x9a: ;
  case 0x9b: ;
  case 0x9c: ;
  case 0x9d: ;
  case 0x9e: ;
  case 0x9f: ;
  case 0xa0: ;
  case 0xa1: ;
  case 0xa3: ;
  case 0xa4: ;
  case 0xa5: ;
  case 0xa6: ;
  case 0xa7: ;
  case 0xa8: ;
  case 0xa9: ;
  case 0xaa: ;
  case 0xab: ;
  case 0xac: ;
  case 0xad: ;
  case 0xae: ;
  case 0xaf: ;
  case 0xb0: ;
  case 0xb1: ;
  case 0xb2: ;
  case 0xb3: ;
  case 0xb4: ;
  case 0xb5: ;
  case 0xb6: ;
  case 0xb7: ;
  case 0xb8: ;
  case 0xb9: ;
  case 0xba: ;
  case 0xbb: ;
  case 0xbc: ;
  case 0xbd: ;
  case 0xbe: ;
  case 0xbf: ;
  case 0xc0: ;
  case 0xc1: ;
  case 0xc2: ;
  case 0xc3: ;
  case 0xc4: ;
  case 0xc5: ;
  case 0xc6: ;
  case 199: ;
  case 200: ;
  case 0xc9: ;
  case 0xca: ;
  case 0xcb: ;
  case 0xcc: ;
  case 0xcd: ;
  case 0xce: ;
  case 0xcf: ;
  case 0xd0: ;
  case 0xd1: ;
  case 0xd2: ;
  case 0xd3: ;
  case 0xd4: ;
  case 0xd5: ;
  case 0xd6: ;
  case 0xd7: ;
  case 0xd8: ;
  case 0xd9: ;
  case 0xda: ;
  case 0xdb: ;
  case 0xdc: ;
  case 0xdd: ;
  case 0xde: ;
  case 0xdf: ;
  case 0xe0: ;
  case 0xe1: ;
  case 0xe2: ;
  case 0xe3: ;
  case 0xe4: ;
  case 0xe5: ;
  case 0xe6: ;
  case 0xe7: ;
  case 0xe8: ;
  case 0xe9: ;
  case 0xea: ;
  case 0xeb: ;
  case 0xec: ;
  case 0xed: ;
  case 0xee: ;
  case 0xf0: ;
  case 0xf1: ;
  case 0xf2: ;
  case 0xf3: ;
  case 0xf4: ;
  case 0xf5: ;
  case 0xf6: ;
  case 0xf7: ;
  case 0xf8: ;
  case 0xf9: ;
  case 0xfa: ;
  case 0xfb: ;
  case 0xfc: ;
    break;
  case 0x98: ;
    F_00aa4270(this,0x99,0,0);
    break;
  case 0xa2: ;
    if (this == REFG(void * PTR32, 0x1379694)) {
      F_004816e0(((undefined1 *)(gen_frame + 0x4)));
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = REFG(undefined4, 0x14a66c0);
      (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
      (*(undefined1 *)(gen_frame + 0x34)) = 0;
      F_00493b50(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x2c)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x2c)));
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = REFG(undefined4, 0x14a66c4);
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = &(*(undefined4 *)(gen_frame + 0x20));
      (*(undefined1 *)(gen_frame + 0x28)) = 0;
      F_00493b50(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x20)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x20)));
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      puVar4 = ((undefined1 *)(gen_frame + 0x4));
      uVar3 = 0x4b0;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      F_0046ab30(pvVar2,uVar3,this,puVar4);
      F_00a3a050();
      F_00493180(((undefined1 *)(gen_frame + 0x4)));
    }
    break;
  case 0xef: ;
    if ((this == REFG(void * PTR32, 0x1379694)) && (REFG(char, 0x14a7367) != '\0')) {
      F_00a3b400(&REFG(undefined, 0x14a4230));
    }
    break;
  case 0xfd: ;
  case 0xfe: ;
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar2 = this;
    }
    F_00549500((int)pvVar2 + 0x680,param_1,0xee,3,0,REFG(float, 0x10e79e4),0);
    if (((*(char *)((int)this + 0x188) == '\a') &&
        (*(undefined1 *)((int)this + 0x188) = 1, REFG(void * PTR32, 0x1379694) == this)) &&
       (F_00a4a870(&REFG(undefined, 0x14a7360),1), REFG(void * PTR32, 0x1379694) == this)) {
      F_00a6fbc0(&REFG(undefined, 0x14ab740),0,0);
    }
    (*(undefined1 *)(gen_frame + 0x14)) = 1;
    if (*(int *)((int)this + 0x25f0) != 0 || *(int *)((int)this + 0x25f4) != 0) {
      piVar1 = (int *)((int)this + 0x2600);
      F_00b5c0c0(REFG(void * PTR32, 0x14c4e84),piVar1);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2d50) + 4))))((int)this + 0x2d50);
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      *(byte *)((int)this + 0x2d84) = *(byte *)((int)this + 0x2d84) & 0xf8;
      *(undefined4 *)((int)this + 0x25f0) = 0;
      *(undefined4 *)((int)this + 0x25f4) = 0;
      *(undefined1 *)((int)this + 0x2d85) = 0;
    }
    (*(undefined1 *)(gen_frame + 0x14)) = 1;
    if (*(int *)((int)this + 0x1e50) != 0 || *(int *)((int)this + 0x1e54) != 0) {
      piVar1 = (int *)((int)this + 0x1e60);
      F_00b5c0c0(REFG(void * PTR32, 0x14c4e84),piVar1);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x25b0) + 4))))((int)this + 0x25b0);
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      *(byte *)((int)this + 0x25e4) = *(byte *)((int)this + 0x25e4) & 0xf8;
      *(undefined4 *)((int)this + 0x1e50) = 0;
      *(undefined4 *)((int)this + 0x1e54) = 0;
      *(undefined1 *)((int)this + 0x25e5) = 0;
    }
    if (this == REFG(void * PTR32, 0x1379694)) {
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar3 = 0x23;
      in_ecx = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
      pvVar2 = (undefined *)F_00763050(in_ecx,uVar3);
      *(undefined1 *)((int)pvVar2 + 0x90) = 1;
      F_008edf60(pvVar2);
    }
    break;
  default: ;
    goto switchD_00aaad03_default;
  }
switchD_00aaad03_default: ;
  F_00534140(param_1,param_2,(*(undefined4 *)(gen_frame + 0x1c)));
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return param_1;
}

/* ref: FUN_00aab000 */
uint F_00aab000(unsigned int gen_a0)
{
  GEN_ENTER(0xaab000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  undefined * this_00;
  int * piVar2;
  byte bVar3;
  undefined4 in_EAX = 0;
  undefined4 * puVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  bool bVar7;
  
  bVar7 = *(char *)((int)this + 0x2e08) != '\0';
  uVar5 = CONCAT31((int3)((uint)in_EAX >> 8),bVar7);
  (*(bool *)(gen_frame + 0x2f)) = bVar7;
  if (bVar7) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x2e00);
    if (((this_00 != (undefined *)0x0) && (*(int *)((int)this_00 + 0xec) != 0)) &&
       (*((char *)GEN_TOP((*(int *)((int)this_00 + 0xec) + 0x65))) == '\x03')) {
      puVar4 = (undefined4 *)F_00a5fd10(this_00,((undefined1 *)(gen_frame + 0x0)),0x41);
      (*(undefined4 *)(gen_frame + 0x10)) = *puVar4;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar4[1];
      (*(undefined4 *)(gen_frame + 0x18)) = puVar4[2];
      F_0054e460(this,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar4 = (undefined4 *)F_00a5fd10(*(undefined * PTR32 *)((int)this + 0x2e00),((undefined1 *)(gen_frame + 0x0)),0x45);
      (*(undefined4 *)(gen_frame + 0x10)) = *puVar4;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar4[1];
      (*(undefined4 *)(gen_frame + 0x18)) = puVar4[2];
      F_0054e4a0(this,&(*(undefined4 *)(gen_frame + 0x10)));
    }
    uVar5 = *(uint *)((int)this + 0x2e00);
    if ((uVar5 != 0) && ((undefined *)(uVar5 + 0x1b0) != (undefined *)0x0)) {
      uVar5 = F_00ae95a0((undefined *)(uVar5 + 0x1b0),(int)this + 0x520);
    }
  }
  uVar6 = REFG(undefined4, 0x137104c);
  if ((*(char *)((int)this + 0x2e09) != '\0') &&
     (piVar2 = *(int * PTR32 *)((int)this + 0x2e00), piVar2 != (int *)0x0)) {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x2e10) -
                   (float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198))));
    (*(float *)(gen_frame + 0x28)) = fVar1;
    *(float *)((int)this + 0x2e10) = fVar1;
    uVar5 = uVar6;
    if ((float10)fVar1 <= (float10)0) {
      *(undefined4 *)((int)this + 0x2e10) = 0;
      ((code *)*(gen_code32 *)(*piVar2 + 0xb0))(piVar2);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e00) + 0xb4))))(*(int * PTR32 *)((int)this + 0x2e00),0);
      *(undefined4 *)((int)this + 0x2e00) = 0;
      if (*(char *)((int)this + 0x2e09) != '\0') {
        *(undefined1 *)((int)this + 0x2e09) = 0;
        F_00a35790(&REFG(undefined, 0x14a31e0),this);
      }
      uVar5 = (uint)*(ushort *)((int)this + 0x2e0c);
      if (*(ushort *)((int)this + 0x2e0c) != 0) {
        bVar3 = F_00aaa4e0(this,uVar5,0);
        uVar5 = CONCAT31(extraout_var,bVar3);
        *(undefined2 *)((int)this + 0x2e0c) = 0;
      }
    }
  }
  if (REFG(void * PTR32, 0x1379694) == this) {
    if ((*(bool *)(gen_frame + 0x2f)) == false) {
      uVar5 = F_00ab6a50(0);
      REFG(float, 0x14b4ebc) = 0;
    }
    else {
      uVar6 = F_00ab2840((uint)*(byte *)((int)this + 0x2e08));
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = F_00ab69c0((uint)*(ushort *)(uVar6 + 0x98));
        return uVar5;
      }
    }
  }
  return uVar5;
}

/* ref: Client::Game::Character::BattleChara::vf33 */
uint F_00aab1e0(unsigned int gen_a0)
{
  GEN_ENTER(0xaab1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  float fVar2;
  int * piVar3;
  byte bVar4;
  undefined1 BVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  uint uVar8;
  undefined3 extraout_var = 0;
  undefined * pBVar9;
  undefined4 uVar10;
  
  if ((this[0x2f03] == (undefined1)0x1) &&
     (pvVar6 = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)(this + 0x2ed8)),
     pvVar6 != (undefined *)0x0)) {
    puVar7 = (undefined4 *)F_00a60a40(pvVar6,((undefined1 *)(gen_frame + 0x0)),(byte)this[0x2ef0] + 0x48);
    (*(undefined4 *)(gen_frame + 0x10)) = *puVar7;
    (*(undefined4 *)(gen_frame + 0x14)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0x18)) = puVar7[2];
    ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,&(*(undefined4 *)(gen_frame + 0x10)));
  }
  pBVar9 = this + 0x1e10;
  (*(float *)(gen_frame + 0x2c)) = 4.2039e-45;
  do {
    if (*(int *)(pBVar9 + -0x760) != 0 || *(int *)(pBVar9 + -0x75c) != 0) {
      ((code *)*(gen_code32 *)(*(int *)pBVar9 + 8))(pBVar9);
    }
    pBVar9 = pBVar9 + 0x7a0;
    iVar1 = (int)gen_fl2bits((*(float *)(gen_frame + 0x2c))) + -1;
    (*(float *)(gen_frame + 0x2c)) = gen_bits2f(iVar1);
  } while (iVar1 != 0);
  if ((((byte)this[0x8f] & 1) == 0) &&
     (uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this), uVar8 != 0)) {
    if (this[0x8a] == (undefined1)0x2) {
      if (*(int *)(this + 0x80) != 0x372) {
        uVar10 = 2;
        goto LAB_00aab2d0;
      }
    }
    else if (this[0x8a] == (undefined1)0x3) {
      uVar10 = 3;
LAB_00aab2d0: ;
      uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this);
      F_00a607e0(this,0,uVar8,uVar10);
    }
  }
  if ((REFG(int, 0x1379c70) == 2) && (this[0x2ea6] != (undefined1)0x0)) {
    if ((this[0x188] == (undefined1)0x2) ||
       ((uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this), (char)uVar8 == '\0' ||
        (this[0x2ea7] == (undefined1)0x0)))) {
      piVar3 = *(int * PTR32 *)(this + 0x2ea0);
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3,500);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2ea0) + 0x78))))(*(int * PTR32 *)(this + 0x2ea0),500);
        *(undefined4 *)(this + 0x2ea0) = 0;
      }
    }
    else if (*(int *)(this + 0x2ea0) == 0) {
      uVar8 = F_00aa2e00(this,0xe,0,0,0,0);
      *(uint *)(this + 0x2ea0) = uVar8;
    }
    else {
      F_00a5feb0(this);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2ea0) + 0x44))))(*(int * PTR32 *)(this + 0x2ea0));
    }
  }
  if ((*(int *)(this + 0x2df0) != -0x20000000) && (*(int *)(this + 0x2df4) == 0)) {
    F_00aa43b0(this);
  }
  uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if (uVar8 - 1 < 2) {
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    if (uVar8 != 0) {
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this)));
      F_00b7aff0(pvVar6);
    }
    F_00aa74e0(this);
  }
  uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if (uVar8 == 1) {
    F_00aa30d0(this);
  }
  fVar2 = *(float *)(this + 400);
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  if (0.0 < fVar2) {
    fVar2 = ((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
    (*(float *)(gen_frame + 0x2c)) = fVar2;
    *(float *)(this + 400) = fVar2;
    if ((float10)fVar2 < (float10)0) {
      *(undefined4 *)(this + 400) = 0;
    }
  }
  uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
  if (uVar8 == 0) goto LAB_00aab62b;
  uVar10 = 1;
  uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
  bVar4 = F_00b7aaa0(uVar8,uVar10);
  if (bVar4 == 0) {
    uVar10 = 2;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    bVar4 = F_00b7aaa0(uVar8,uVar10);
    if (bVar4 != 0) {
      (*(float *)(gen_frame + 0x2c)) = 1.06499e-43;
      goto LAB_00aab5ce;
    }
    uVar10 = 4;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    bVar4 = F_00b7aaa0(uVar8,uVar10);
    if (bVar4 != 0) {
      (*(float *)(gen_frame + 0x2c)) = 1.079e-43;
      goto LAB_00aab5ce;
    }
    uVar10 = 8;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    bVar4 = F_00b7aaa0(uVar8,uVar10);
    if (bVar4 != 0) {
LAB_00aab5c7: ;
      (*(float *)(gen_frame + 0x2c)) = 1.09301e-43;
      goto LAB_00aab5ce;
    }
    uVar10 = 0x10;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    bVar4 = F_00b7aaa0(uVar8,uVar10);
    if (bVar4 != 0) goto LAB_00aab5c7;
    uVar10 = 0x20;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    bVar4 = F_00b7aaa0(uVar8,uVar10);
    if (bVar4 != 0) {
      (*(float *)(gen_frame + 0x2c)) = 2.70451e-43;
      goto LAB_00aab5ce;
    }
    uVar10 = 0x40;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    bVar4 = F_00b7aaa0(uVar8,uVar10);
    if (bVar4 != 0) {
      (*(float *)(gen_frame + 0x2c)) = 2.71852e-43;
      goto LAB_00aab5ce;
    }
    uVar10 = 0x80;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    bVar4 = F_00b7aaa0(uVar8,uVar10);
    if (bVar4 != 0) {
      (*(float *)(gen_frame + 0x2c)) = 2.67648e-43;
      goto LAB_00aab5ce;
    }
    uVar10 = 0x100;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    bVar4 = F_00b7aaa0(uVar8,uVar10);
    if (bVar4 != 0) {
      (*(float *)(gen_frame + 0x2c)) = 2.69049e-43;
      goto LAB_00aab5ce;
    }
    if (*(undefined * PTR32 *)(this + 0x164c) == (undefined *)0x0) goto LAB_00aab62b;
    F_009bc530(*(undefined * PTR32 *)(this + 0x164c),1);
    F_00983120(*(undefined4 *)(this + 0x164c),0);
    BVar5 = (undefined1)0x0;
    *(undefined4 *)(this + 0x164c) = 0;
  }
  else {
    (*(float *)(gen_frame + 0x2c)) = 1.05097e-43;
LAB_00aab5ce: ;
    if (gen_bits2f((uint)(byte)this[0x2eb4]) == (*(float *)(gen_frame + 0x2c))) goto LAB_00aab62b;
    if (*(undefined * PTR32 *)(this + 0x164c) != (undefined *)0x0) {
      F_009bc530(*(undefined * PTR32 *)(this + 0x164c),1);
      F_00983120(*(undefined4 *)(this + 0x164c),0);
    }
    uVar8 = F_00ab4370((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c))),this,this,0,0);
    *(uint *)(this + 0x164c) = uVar8;
    if (uVar8 != 0) {
      F_00983120(uVar8,this + 0x180);
    }
    BVar5 = SUB41((uint)gen_fl2bits((*(float *)(gen_frame + 0x2c))),0);
  }
  this[0x2eb4] = BVar5;
LAB_00aab62b: ;
  uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = (char)uVar8;
  (*(undefined4 *)(gen_frame + 0x28)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x28)), 1, 3),(char)uVar8);
  pBVar9 = this + 0x1644;
  (*(float *)(gen_frame + 0x2c)) = 1.12104e-44;
  do {
    if (*(undefined * PTR32 *)pBVar9 != (undefined *)0x0) {
      F_009bc5d0(*(undefined * PTR32 *)pBVar9,(*(undefined4 *)(gen_frame + 0x28)));
    }
    pBVar9 = pBVar9 + 4;
    iVar1 = (int)gen_fl2bits((*(float *)(gen_frame + 0x2c))) + -1;
    (*(float *)(gen_frame + 0x2c)) = gen_bits2f(iVar1);
  } while (iVar1 != 0);
  F_00a61430((undefined *)this);
  piVar3 = *(int * PTR32 *)(this + 0x2e00);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x84))(piVar3);
  }
  F_00aa8290(this);
  F_00aa7800(this);
  F_00aab000(this);
  piVar3 = *(int * PTR32 *)(this + 0x2e04);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x84))(piVar3);
    bVar4 = F_00bc6a70(*(undefined4 *)(this + 0x2e04));
    if (bVar4 != 0) {
      piVar3 = *(int * PTR32 *)(this + 0x2e04);
      *(undefined2 *)(this + 0x2e0c) = 0;
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0xb0))(piVar3);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2e04) + 0xb4))))(*(int * PTR32 *)(this + 0x2e04),0);
        *(undefined4 *)(this + 0x2e04) = 0;
        F_00a35790(&REFG(undefined, 0x14a31e0),this);
      }
    }
  }
  F_00aa0cc0(this);
  if (REFG(char, 0x1379c96) == '\0') {
    F_00b79a70(this + 0x1340,(uint)this);
  }
  F_00bc82c0(this + 0x1570,this);
  F_00bc5c20(this + 0x15dc);
  F_00aa3240(this);
  uVar8 = F_00aa4510(this);
  if (this[0x2efc] == (undefined1)0x1) {
    bVar4 = F_00ae87c0(this + 0x1b0);
    if (bVar4 != 0) {
      bVar4 = F_00ae87f0(this + 0x1b0);
      if (bVar4 != 1) {
        return CONCAT31(extraout_var,bVar4);
      }
    }
    uVar8 = F_00aa5c80(this,(uint)*(ushort *)(this + 0x2efe));
    this[0x2efc] = (undefined1)0x0;
    *(undefined2 *)(this + 0x2efe) = 0;
  }
  return uVar8;
}

/* ref: FUN_00aab790 */
uint F_00aab790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xaab790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  char * pcVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int * piVar8;
  char * pcVar9;
  float * pfVar10;
  undefined * this_00;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint * puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  uVar7 = CONCAT31((int3)((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160)) >> 8),(byte)param_1);
  (*(undefined4 *)(gen_frame + 0x18)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x18)), 1, 3),(byte)param_1);
  if (((*(int *)((int)this + 0x2dfc) != 0) && (*(byte *)((int)this + 0x2e08) != (byte)param_1)) &&
     (*(char *)((int)this + 0x2e09) != '\x01')) {
    uVar7 = param_2;
    if ((((byte)param_1 == 1) && (param_2 == 0)) && ((param_3 == 0 && (param_4 == 0)))) {
      bVar6 = F_00a6b340(&REFG(undefined, 0x14ab584),0);
      uVar7 = F_00a6b3a0(0,(uint)bVar6);
      bVar6 = F_00a6b340(&REFG(undefined, 0x14ab584),1);
      param_3 = F_00a6b3a0(1,(uint)bVar6);
      bVar6 = F_00a6b340(&REFG(undefined, 0x14ab584),2);
      param_4 = F_00a6b3a0(2,(uint)bVar6);
    }
    if (*(int *)((int)this + 0x2e04) != 0) {
      F_00aa14e0(this,1);
    }
    if (*(int *)((int)this + 0x2e00) == 0) {
      if (*(undefined * PTR32 *)((int)this + 0x2dfc) == (undefined *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)F_00a665b0(*(undefined * PTR32 *)((int)this + 0x2dfc));
      }
      *(int * PTR32 *)((int)this + 0x2e00) = piVar8;
      ((code *)*(gen_code32 *)(*piVar8 + 0xac))(piVar8,*(ushort *)((int)this + 0x88) + 1);
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x8a))) = 8;
      F_00aa2160(this);
    }
    if (REFG(void * PTR32, 0x1379694) == this) {
      F_00a4a760(&REFG(undefined, 0x14a7360),0x29,0);
    }
    if ((byte)param_1 == 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,0xc,0);
      uVar7 = F_00ab2840((uint)*(byte *)((int)this + 0x2e08));
      uVar11 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
      if (((char)uVar11 != '\0') && (uVar7 != 0)) {
        pcVar1 = ((char *)GEN_TOP(((*(uint *)(uVar7 + 0x10) & 0xffffff) + 0x10 + uVar7)));
        pcVar9 = pcVar1;
        do {
          cVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
        if (pcVar9 != pcVar1 + 1) {
          F_00c472af(((undefined1 *)(gen_frame + 0x58)),0xff,"sound/battle/etc/%s.scd",pcVar1);
          uVar18 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
          pfVar10 = (float *)F_00a5feb0(this);
          uVar22 = 1;
          uVar21 = 0;
          uVar19 = 0;
          fVar17 = (float)(float10)1;
          uVar11 = F_00a5feb0(this);
          fVar16 = *(float *)(uVar11 + 8);
          uVar11 = F_00a5feb0(this);
          F_004e95a0(uVar18,((undefined1 *)(gen_frame + 0x58)),(float)(float10)1,0,*pfVar10,*(float *)(uVar11 + 4),fVar16,
                       fVar17,uVar19,uVar21,uVar22);
        }
      }
      *(undefined1 *)((int)this + 0x2e08) = 0;
      *(undefined1 *)((int)this + 0x188) = 1;
      if (REFG(void * PTR32, 0x1379694) == this) {
        F_00a4a870(&REFG(undefined, 0x14a7360),1);
        if (REFG(void * PTR32, 0x1379694) == this) {
          F_00a6fbc0(&REFG(undefined, 0x14ab740),0,0);
        }
      }
      iVar5 = *(int *)((int)this + 0xec);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 200) != 0)) {
        F_006b2f70((undefined *)(iVar5 + 0x90));
      }
      F_00a61000(this);
      if (*(char *)((int)this + 0x2e09) != '\x01') {
        *(undefined1 *)((int)this + 0x2e09) = 1;
        F_00a35790(&REFG(undefined, 0x14a31e0),this);
      }
      F_00afe980((undefined *)((int)this + 0x1b0));
      uVar11 = (*(uint *)(gen_frame + 0x50));
      (*(float *)(gen_frame + 0x28)) = gen_bits2f(REFG(float, 0x10e79e4));
      (*(uint *)(gen_frame + 0x2c)) = REFG(float, 0x10e79e4);
      (*(uint *)(gen_frame + 0x30)) = REFG(float, 0x10e79e4);
      (*(uint *)(gen_frame + 0x34)) = REFG(float, 0x10e79e4);
      (*(uint *)(gen_frame + 0x38)) = REFG(float, 0x10e79e4);
      (*(uint *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x44)) = 0;
      (*(undefined4 *)(gen_frame + 0x48)) = 0;
      (*(undefined4 *)(gen_frame + 0x4c)) = 0;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x50)) = uVar11 & 0xffffff00;
      (*(undefined4 *)(gen_frame + 0x54)) = 0;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
      (*(float *)(gen_frame + 0x28)) = (float)*(byte *)(uVar7 + 0x9d);
      fVar17 = *((float *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0xb0)));
      fVar13 = ((float10)GEN_TOD(fsin((float10)fVar17)));
      fVar12 = ((float10)GEN_TOD(fcos((float10)fVar17)));
      if ((char)param_5 == '\0') {
        fVar13 = (float10)*(byte *)(uVar7 + 0x9c) * (float10)(float)fVar13;
        fVar14 = (float10)*(double *)&REFG(undefined, 0x108bec8);
        fVar15 = (float10)*(byte *)(uVar7 + 0x9c);
      }
      else {
        fVar14 = (float10)0;
        fVar13 = (float10)(float)fVar13 * fVar14;
        fVar15 = fVar14;
      }
      (*(float *)(gen_frame + 0x0)) = (float)fVar13;
      pfVar10 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x2e00));
      fVar16 = *pfVar10;
      fVar2 = pfVar10[1];
      fVar3 = pfVar10[2];
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e00) + 0x54))))(*(int * PTR32 *)((int)this + 0x2e00),1);
      F_00a9f7c0(*(undefined4 *)((int)this + 0x2e00),(float)((float10)fVar16 + (float10)(*(float *)(gen_frame + 0x0)))
                   ,((float)GEN_TOF(((float10)fVar2 + (float10)(float)(fVar14 * fVar15)))),
                   ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar15 * (float10)(float)fVar12)))),
                   fVar17,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)));
      (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)*(byte *)(uVar7 + 0x9c) / (float10)*(byte *)(uVar7 + 0x9d))));
      if ((float10)(*(float *)(gen_frame + 0x1c)) < (float10)1) {
        (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
      }
      *((float *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x2ec8))) =
           (float)((float10)REFG(double, 0x1094890) / (float10)(*(float *)(gen_frame + 0x1c)));
      *(float *)((int)this + 0x2e10) = (*(float *)(gen_frame + 0x1c));
      if (REFG(void * PTR32, 0x1379694) == this) {
        REFG(float, 0x14b4ebc) = 0;
      }
      uVar7 = F_00542ff0((undefined *)((int)this + 0x680),0xa8);
      if ((char)uVar7 != '\0') {
        F_00aa01d0(this,0xa8,1);
      }
      if (*(undefined * PTR32 *)((int)this + 0xec) != (undefined *)0x0) {
        F_006ab920(*(undefined * PTR32 *)((int)this + 0xec));
      }
    }
    else {
      *(byte *)((int)this + 0x2e08) = (byte)param_1;
      if (REFG(void * PTR32, 0x1379694) == this) {
        F_00a7ef20(&REFG(undefined1, 0x14ab058),0,1,0);
      }
      else if ((*(byte *)((int)this + 0x2dd2) & 4) != 0) {
        *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) & 0xfb;
      }
      *(undefined1 *)((int)this + 0x188) = 4;
      if (REFG(void * PTR32, 0x1379694) == this) {
        F_00a4a870(&REFG(undefined, 0x14a7360),4);
        if (REFG(void * PTR32, 0x1379694) == this) {
          F_00a6fbc0(&REFG(undefined, 0x14ab740),0,0);
        }
      }
      if (*(char *)((int)this + 0x2e09) != '\0') {
        *(undefined1 *)((int)this + 0x2e09) = 0;
        F_00a35790(&REFG(undefined, 0x14a31e0),this);
      }
      if (((byte)param_1 == 1) && (REFG(void * PTR32, 0x1379694) == this)) {
        F_00a6e080(&REFG(undefined, 0x14a9e40),0x56,0,0);
      }
      iVar5 = *(int *)((int)this + 0xec);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 200) != 0)) {
        F_006b2f70((undefined *)(iVar5 + 0x90));
      }
      (*(uint *)(gen_frame + 0x30)) = 0;
      (*(uint *)(gen_frame + 0x34)) = 0;
      (*(uint *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      (*(uint *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x44)) = 0;
      (*(undefined4 *)(gen_frame + 0x48)) = 0;
      (*(undefined4 *)(gen_frame + 0x4c)) = 0;
      (*(uint *)(gen_frame + 0x50)) = 0;
      (*(undefined4 *)(gen_frame + 0x54)) = 0;
      if ((byte)param_1 == 1) {
        (*(uint *)(gen_frame + 0x30)) = uVar7;
        (*(uint *)(gen_frame + 0x34)) = param_3;
        uVar7 = F_00ab2840(1);
        (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)(uVar7 + 0x90);
        (*(uint *)(gen_frame + 0x40)) = param_4;
      }
      else {
        uVar11 = (uint)(byte)param_1;
        uVar7 = F_00ab2840(uVar11);
        (*(uint *)(gen_frame + 0x30)) = *(uint *)(uVar7 + 0x88);
        uVar7 = F_00ab2840(uVar11);
        (*(uint *)(gen_frame + 0x34)) = *(uint *)(uVar7 + 0x8c);
        uVar7 = F_00ab2840(uVar11);
        (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)(uVar7 + 0x90);
        uVar7 = F_00ab2840(uVar11);
        (*(uint *)(gen_frame + 0x40)) = *(uint *)(uVar7 + 0x94);
      }
      F_00a5f0d0(*(undefined * PTR32 *)((int)this + 0x2e00));
      iVar5 = **(int * PTR32 *)((int)this + 0x2e00);
      uVar7 = F_00a5feb0(this);
      ((code *)*(gen_code32 *)(iVar5 + 0x3c))(*(undefined4 *)((int)this + 0x2e00),uVar7);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e00) + 0x48))))
                (*(int * PTR32 *)((int)this + 0x2e00),*(undefined4 *)((int)this + 0xb0));
      puVar20 = &(*(uint *)(gen_frame + 0x30));
      fVar17 = (float)(float10)1;
      uVar18 = 0;
      uVar7 = F_00ab2840((uint)(byte)param_1);
      F_00aa34a0(*(undefined4 *)((int)this + 0x2e00),*(uint *)(uVar7 + 0x84),uVar18,puVar20,fVar17
                  );
      ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0xc,0);
      F_00afbbd0((undefined *)((int)this + 0x1b0),1);
      F_00afbbd0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x1b0))),1);
      *(undefined1 *)((int)this + 0x2e0a) = 0;
    }
    F_00afdce0((undefined *)((int)this + 0x1b0),(uint)*(byte *)((int)this + 0x2e08));
    F_0053c0e0(&REFG(undefined, 0x1305d00),this,(uint)*(byte *)((int)this + 0x2e08));
    uVar7 = F_00a35790(&REFG(undefined, 0x14a31e0),this);
    if (REFG(void * PTR32, 0x1379694) == this) {
      this_00 = (undefined *)F_006b8c00();
      F_006deff0(this_00,(*(undefined4 *)(gen_frame + 0x18)));
      uVar7 = F_00a6fbc0(&REFG(undefined, 0x14ab740),0,0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x15c)) ^ (uint)(uint)(gen_frame + 0x160));
  return uVar7;
}

/* ref: FUN_00aabf60 */
uint F_00aabf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaabf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  code * pcVar2;
  byte bVar3;
  undefined * pvVar4;
  int * piVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  undefined4 * puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (REFG(void * PTR32, 0x1379694) == this) {
    F_00ac2ba0(&REFG(undefined, 0x14bcf40));
    F_00a6e080(&REFG(undefined, 0x14a9e40),0x10,0,0);
    pvVar4 = (undefined *)F_006b8c00();
    piVar5 = (int *)F_006d7020(pvVar4);
    if (piVar5 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar5 + 0x274))(piVar5);
    }
  }
  *(undefined4 *)((int)this + 0x16a0) = 0;
  pcVar2 = *(gen_code32 *)(*(int *)this + 0xd8);
  *(undefined2 *)((int)this + 0x16a6) = 0;
  *(undefined4 *)((int)this + 0x1698) = 0;
  *(undefined4 *)((int)this + 0x1690) = 0;
  *(undefined1 *)((int)this + 0x18b) = 1;
  *(undefined4 *)((int)this + 0x18c) = 0;
  uVar6 = (*pcVar2)(this);
  if (uVar6 != 0) {
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
    F_00ac3da0(uVar6);
    uVar11 = 0;
    uVar10 = 0;
    uVar8 = 0;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this)));
    F_00ac3e30(pvVar4,uVar8,uVar10,uVar11);
  }
  if (*(int *)((int)this + 0x2df4) != 0) {
    F_009944e0(REFG(void * PTR32, 0x14a0d28),(undefined4 *)((int)this + 0x2df4));
    *(undefined4 *)((int)this + 0x2df4) = 0;
  }
  *(undefined1 *)((int)this + 0x2dec) = 0;
  *(undefined4 *)((int)this + 0x2df0) = 0xe0000000;
  F_00aa44a0(this);
  F_00aa0150(this,0,0);
  F_0053c1a0((undefined *)((int)this + 0x680),2,0);
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    F_0053c1a0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x680))),2,0);
  }
  if (*(int *)((int)this + 0x80) == 0x372) {
    iVar9 = 0x670;
  }
  else {
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x2e04);
    if ((((pvVar4 != (undefined *)0x0) && (*(int *)((int)this + 0x2dfc) != 0)) &&
        (*(char *)((int)this + 0x2e08) == '\0')) &&
       ((*(char *)((int)this + 0x2e09) == '\0' && (*(int *)((int)pvVar4 + 0x80) != 0)))) {
      F_00bc7d60(pvVar4,0);
    }
    if (*(short *)((int)this + 0x2e0c) != 0) {
      *(undefined2 *)((int)this + 0x2e0c) = 0;
    }
    iVar9 = param_1;
    if (param_1 == 0) {
      if (*(char *)((int)this + 0x2e08) != '\0') {
        F_00aab790(this,0,0,0,0,0);
        cVar1 = *(char *)((int)this + 0x188);
        *(undefined1 *)((int)this + 0x188) = 2;
        if (REFG(void * PTR32, 0x1379694) == this) {
          F_00a4a870(&REFG(undefined, 0x14a7360),2);
        }
        if (cVar1 != *(char *)((int)this + 0x188)) {
          *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) | 0x24;
        }
        if (REFG(void * PTR32, 0x1379694) == this) {
          F_00a6fbc0(&REFG(undefined, 0x14ab740),0,0);
        }
      }
      if ((!GEN_ISNAN(*(float *)((int)this + 0xc4)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
          !(*(float *)((int)this + 0xc4) <= *(float *)&REFG(undefined, 0x1088114))) {
        if ((*(char *)((int)this + 0x2e08) == '\0') ||
           (pvVar4 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0))
        {
          pvVar4 = this;
        }
        uVar6 = F_00549500((int)pvVar4 + 0x680,0,0x4a,0x4b,0,REFG(float, 0x10e79e4),0);
        goto LAB_00aac19e;
      }
      if ((*(byte *)((int)this + 0x2dd2) & 4) == 0) {
        iVar9 = 0x42;
      }
      else {
        iVar9 = 0x48;
      }
    }
  }
  uVar6 = F_00aa4270(this,iVar9,0,0);
LAB_00aac19e: ;
  puVar7 = (undefined4 *)((int)this + 0x1644);
  iVar9 = 8;
  do {
    if ((undefined *)*puVar7 != (undefined *)0x0) {
      F_009bc530((undefined *)*puVar7,1);
      uVar6 = F_00983120(*puVar7,0);
      *puVar7 = 0;
    }
    puVar7 = puVar7 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  *(undefined1 *)((int)this + 0x2eb4) = 0;
  if (REFG(void * PTR32, 0x1379694) == this) {
    bVar3 = F_00a7ede0(&REFG(undefined1, 0x14ab068),0,0,0);
    uVar6 = CONCAT31(extraout_var,bVar3);
  }
  return uVar6;
}

/* ref: Global::ReadSpawn */
uint F_00aac200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaac200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  code * pcVar4;
  byte bVar5;
  undefined * pvVar6;
  uint uVar7;
  undefined4 * puVar8;
  float fVar9;
  float * pfVar10;
  int iVar11;
  int * piVar12;
  undefined * pvVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float * pfVar20;
  
  (*(int *)(gen_frame + 0x88)) = param_1[0x12];
  (*(int *)(gen_frame + 0x84)) = param_1[0x15];
  (*(int *)(gen_frame + 0x8c)) = param_1[0x13];
  (*(int *)(gen_frame + 0x80)) = param_1[0x14];
  (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1087f04);
  (*(int *)(gen_frame + 0x78)) = param_1[0x16];
  (*(int *)(gen_frame + 0x7c)) = param_1[0x17];
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_1 + 0xb))) {
  case 3: ;
    F_005390f0((undefined *)((int)this + 0x620),(uint)*(byte *)((int)param_1 + 0x2d));
    break;
  case 5: ;
  case 7: ;
    uVar7 = (uint)*(byte *)((int)param_1 + 0x2d) % 100;
    if ((char)((ulonglong)(uint)*(byte *)((int)param_1 + 0x2d) / 100) != '\0') {
      *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) | 8;
    }
    switch((unsigned int)(uintptr_t)(uVar7 / 10)) {
    case 1: ;
      *(undefined1 *)((int)this + 0x2dd6) = 2;
      break;
    case 2: ;
      *(undefined1 *)((int)this + 0x2dd6) = 3;
      break;
    case 3: ;
      *(undefined1 *)((int)this + 0x2dd6) = 4;
      break;
    case 4: ;
      *(undefined1 *)((int)this + 0x2dd6) = 5;
    }
    switch((unsigned int)(uintptr_t)(uVar7 % 10)) {
    case 1: ;
      *(undefined1 *)((int)this + 0x2dd7) = 6;
      break;
    case 2: ;
      *(undefined1 *)((int)this + 0x2dd7) = 7;
      break;
    case 3: ;
      *(undefined1 *)((int)this + 0x2dd7) = 8;
      break;
    case 4: ;
      *(undefined1 *)((int)this + 0x2dd7) = 9;
      break;
    case 5: ;
      *(undefined1 *)((int)this + 0x2dd7) = 10;
      break;
    case 6: ;
      *(undefined1 *)((int)this + 0x2dd7) = 0xb;
    }
    break;
  case 6: ;
    if (*(char *)((int)param_1 + 0x6b) == '\x12') {
      uVar17 = 0x150001;
      pvVar6 = (undefined *)F_006b8c00();
      uVar7 = F_006e3240(pvVar6,uVar17);
      if (uVar7 != 0) {
        F_006c2660(this,(uint)*(byte *)((int)param_1 + 0x2d));
      }
    }
    else if ((*(byte *)((int)param_1 + 0x2d) & 1) != 0) {
      *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) | 8;
    }
  }
  fVar14 = (float10)*(float *)&REFG(undefined, 0x1336000);
  uVar3 = *(ushort *)(param_1 + 0x18);
  fVar16 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar9 = gen_bits2f(param_1[0x9b]);
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  (*(float * PTR32 *)(gen_frame + 0xac)) = (float *)(uint)uVar3;
  fVar15 = (float10)REFG(double, 0x109cab0);
  (*(float *)(gen_frame + 0x90)) = fVar9;
  (*(float *)(gen_frame + 0x94)) = gen_bits2f(param_1[0x9c]);
  fVar9 = gen_bits2f(param_1[0x9d]);
  *(undefined1 *)((int)this + 0x8a) = uVar1;
  *(undefined1 *)((int)this + 0x2f03) = *(undefined1 *)((int)param_1 + 0x31);
  *(uint *)((int)this + 0x2e98) = (uint)*(ushort *)((int)param_1 + 0x62);
  iVar11 = param_1[2];
  (*(float *)(gen_frame + 0x98)) = fVar9;
  (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)(int)(uint)uVar3 * ((fVar14 * fVar16) / fVar15)) *
                              (float10)*(double *)&REFG(undefined, 0x10928e8) - (float10)*(double *)&REFG(undefined, 0x1080228)))))))
  ;
  if (iVar11 != 0) {
    *(int *)((int)this + 0x7c) = iVar11;
  }
  *(undefined1 *)((int)this + 0x194) = *(undefined1 *)((int)param_1 + 0x66);
  F_00a5f530(this,param_1[3]);
  F_00a5f550(this,(uint)*(ushort *)((int)param_1 + 0x36));
  F_00a5f570(this,(uint)*(byte *)((int)param_1 + 0x81));
  *(undefined4 *)((int)this + 0x84) = param_1[4];
  *(undefined1 *)((int)this + 0x18a) = *(undefined1 *)(param_1 + 0x20);
  uVar7 = (uint)*(ushort *)((int)param_1 + 0x7a);
  if ((*(char *)(param_1 + 0xc) == '\x02') && (param_1[1] == 0x3b8)) {
    uVar7 = 0x75e2;
  }
  F_00b76d60((int)this + 0x1340,uVar7);
  *(undefined1 *)((int)this + 0x168a) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined1 *)((int)this + 0x168b) = *(undefined1 *)((int)param_1 + 0x69);
  (*(float * PTR32 *)(gen_frame + 0xa8)) = (float *)((int)param_1 + 0x282);
  (*(ushort * PTR32 *)(gen_frame + 0xa0)) = (ushort *)0x5;
  do {
    if (*(byte *)(*(float * PTR32 *)(gen_frame + 0xa8)) != 0) {
      uVar7 = F_00ab23e0((uint)*(byte *)(*(float * PTR32 *)(gen_frame + 0xa8)));
      *((byte *)GEN_TOP((*(byte *)(uVar7 + 0xe) + 0x2ef1 + (int)this))) = *(byte *)(*(float * PTR32 *)(gen_frame + 0xa8));
    }
    (*(float * PTR32 *)(gen_frame + 0xa8)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xa8)) + 1);
    iVar11 = (int)(*(ushort * PTR32 *)(gen_frame + 0xa0)) + -1;
    (*(ushort * PTR32 *)(gen_frame + 0xa0)) = (ushort *)iVar11;
  } while (iVar11 != 0);
  ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,(*(float * PTR32 *)(gen_frame + 0xac)));
  (*(undefined1 *)(gen_frame + 0x74)) = 1;
  (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0x90));
  (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x94)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (*(undefined * PTR32 (*)[1])REFP(0x109c974));
  (*(undefined4 *)(gen_frame + 0x70)) = 1;
  (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x98));
  F_00afdab0((int)this + 0x1b0,&(*(float *)(gen_frame + 0x50)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xac))))),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)));
  *(undefined1 *)((int)this + 0x189) = *(undefined1 *)((int)param_1 + 0x2a);
  if ((*(byte *)((int)param_1 + 0x96) & 0x20) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,10,0);
  }
  uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  switch((unsigned int)(uintptr_t)(uVar7)) {
  case 1: ;
  case 10: ;
switchD_00aac542_caseD_1: ;
    puVar8 = param_1 + 0x82;
    *(undefined4 *)((int)this + 0x184) = 0;
    break;
  case 2: ;
  case 3: ;
    if (param_1[1] == 0x372) {
      *(undefined4 *)((int)this + 0x184) = param_1[0xe];
      puVar8 = param_1 + 0x82;
    }
    else {
      if (*(char *)((int)param_1 + 0x31) == '\x03') goto switchD_00aac542_caseD_1;
      iVar11 = *(int *)this;
      *(undefined4 *)((int)this + 0x184) = param_1[0xe];
      uVar7 = ((code *)*(gen_code32 *)(iVar11 + 4))(this);
      puVar8 = (undefined4 *)F_00463610(0,param_1[0xe],uVar7);
    }
    break;
  default: ;
    goto switchD_00aac542_caseD_4;
  }
  F_00a5f8c0(this,puVar8);
switchD_00aac542_caseD_4: ;
  *(undefined4 *)((int)this + 0x1a0) = param_1[8];
  *(undefined4 *)((int)this + 0x1a4) = param_1[9];
  *(undefined2 *)((int)this + 0x168e) = *(undefined2 *)(param_1 + 0x19);
  *(undefined4 *)((int)this + 0x166c) = param_1[0x9e];
  *(undefined2 *)((int)this + 0x1670) = *(undefined2 *)(param_1 + 0x9f);
  *(undefined4 *)((int)this + 0x1678) = param_1[0x10];
  *(undefined4 *)((int)this + 0x167c) = param_1[0x11];
  *(undefined1 *)((int)this + 0x1680) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)((int)this + 0x1688) = *(undefined1 *)((int)param_1 + 0x6b);
  *(undefined4 *)((int)this + 0x80) = param_1[1];
  F_00a5f430(this,*param_1);
  F_00aaa5b0(this,(uint)*(byte *)(param_1 + 0xb));
  if ((*(char *)((int)param_1 + 0x2e) == '\x02') || (*(char *)((int)param_1 + 0x2e) == '\x03')) {
    *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) | 1;
  }
  *(undefined1 *)((int)this + 0x2ecd) = *(undefined1 *)((int)param_1 + 0x2f);
  *(byte *)((int)this + 0x2deb) =
       *(byte *)((int)this + 0x2deb) ^
       ((*(char *)(param_1 + 0x24) != '\0') * '\x02' ^ *(byte *)((int)this + 0x2deb)) & 2;
  *(undefined1 *)((int)this + 0x2de8) = *(undefined1 *)((int)param_1 + 0x91);
  *(undefined4 *)((int)this + 0x2ed8) = param_1[0x1f];
  if (*(char *)((int)param_1 + 0x31) == '\x01') {
    *(undefined1 *)((int)this + 0x2ef0) = *(undefined1 *)((int)param_1 + 0x27e);
  }
  else {
    *(undefined1 *)((int)this + 0x2eec) = *(undefined1 *)((int)param_1 + 0x27e);
    *(undefined1 *)((int)this + 0x2eed) = *(undefined1 *)((int)param_1 + 0x27f);
    *(undefined1 *)((int)this + 0x2eee) = *(undefined1 *)(param_1 + 0xa0);
    *(undefined1 *)((int)this + 0x2eef) = *(undefined1 *)((int)param_1 + 0x281);
  }
  *(undefined1 *)((int)this + 0x2de9) = *(undefined1 *)((int)param_1 + 0x92);
  *(float *)((int)this + 0x2de4) = (float)*(byte *)((int)param_1 + 0x93);
  *(undefined1 *)((int)this + 0x2dea) = *(undefined1 *)(param_1 + 0x25);
  *(byte *)((int)this + 0x2deb) =
       *(byte *)((int)this + 0x2deb) ^
       (*(char *)((int)param_1 + 0x95) != '\0' ^ *(byte *)((int)this + 0x2deb)) & 1;
  *(undefined1 *)((int)this + 0x1689) = *(undefined1 *)((int)param_1 + 0x6a);
  *(undefined4 *)((int)this + 0x1690) = param_1[0x1b];
  *(undefined4 *)((int)this + 0x1694) = param_1[0x1d];
  *(undefined2 *)((int)this + 0x16a0) = *(undefined2 *)((int)param_1 + 0x72);
  *(undefined4 *)((int)this + 0x1698) = 0;
  *(undefined4 *)((int)this + 0x169c) = 0;
  *(undefined4 *)((int)this + 0x16a2) = 0;
  *(undefined4 *)((int)this + 0x16a6) = 0;
  uVar7 = F_00ab21a0((uint)*(byte *)((int)param_1 + 0x6b));
  if (*(int *)(uVar7 + 0x10) == 0x20) {
    *(undefined2 *)((int)this + 0x16a2) = *(undefined2 *)(param_1 + 0x1c);
    *(undefined2 *)((int)this + 0x16a4) = *(undefined2 *)(param_1 + 0x1e);
  }
  else {
    uVar7 = F_00ab21a0((uint)*(byte *)((int)param_1 + 0x6b));
    if (*(int *)(uVar7 + 0x10) == 0x21) {
      *(undefined2 *)((int)this + 0x16a6) = *(undefined2 *)(param_1 + 0x1c);
      *(undefined2 *)((int)this + 0x16a8) = *(undefined2 *)(param_1 + 0x1e);
    }
    else {
      *(uint *)((int)this + 0x1698) = (uint)*(ushort *)(param_1 + 0x1c);
      *(uint *)((int)this + 0x169c) = (uint)*(ushort *)(param_1 + 0x1e);
    }
  }
  if (*(char *)(param_1 + 0x80) == '\0') {
    if (*(byte *)((int)param_1 + 0x67) != 0) {
      F_00aaa4e0(this,(uint)*(byte *)((int)param_1 + 0x67),0);
    }
  }
  else {
    fVar9 = gen_bits2f(F_00a6b3a0(0,(uint)*(byte *)((int)param_1 + 0x201)));
    (*(float *)(gen_frame + 0x98)) = fVar9;
    pfVar10 = (float *)F_00a6b3a0(1,(uint)*(byte *)((int)param_1 + 0x202));
    bVar5 = *(byte *)((int)param_1 + 0x203);
    (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar10;
    uVar7 = F_00a6b3a0(2,(uint)bVar5);
    F_00aab790(this,(uint)*(byte *)(param_1 + 0x80),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x98))),(*(float * PTR32 *)(gen_frame + 0xac)),
                 uVar7,0);
    if (REFG(void * PTR32, 0x1379694) == this) {
      REFG(float, 0x14b4ebc) = param_1[0x81];
    }
    if (*(byte *)((int)param_1 + 0x67) != 0) {
      *(ushort *)((int)this + 0x2e0c) = (ushort)*(byte *)((int)param_1 + 0x67);
    }
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,(uint)*(byte *)((int)param_1 + 0x229));
  if ((*(int *)(gen_frame + 0x88)) != 0 || (*(int *)(gen_frame + 0x8c)) != 0) {
    F_00aa80c0(this,0,(*(int *)(gen_frame + 0x88)),(*(int *)(gen_frame + 0x8c)));
  }
  if ((*(int *)(gen_frame + 0x80)) != 0 || (*(int *)(gen_frame + 0x84)) != 0) {
    F_00aa80c0(this,1,(*(int *)(gen_frame + 0x80)),(*(int *)(gen_frame + 0x84)));
  }
  if ((*(int *)(gen_frame + 0x78)) != 0 || (*(int *)(gen_frame + 0x7c)) != 0) {
    F_00aa80c0(this,2,(*(int *)(gen_frame + 0x78)),(*(int *)(gen_frame + 0x7c)));
  }
  (*(float * PTR32 *)(gen_frame + 0xa8)) = (float *)0x0;
  (*(ushort * PTR32 *)(gen_frame + 0xa0)) = (ushort *)(param_1 + 0x91);
  do {
    F_00aa2260(this,(*(float * PTR32 *)(gen_frame + 0xa8)),*(undefined4 *)(*(ushort * PTR32 *)(gen_frame + 0xa0)));
    (*(ushort * PTR32 *)(gen_frame + 0xa0)) = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0xa0)) + 4);
    iVar11 = (int)(*(float * PTR32 *)(gen_frame + 0xa8)) + 1;
    (*(float * PTR32 *)(gen_frame + 0xa8)) = (float *)iVar11;
  } while (iVar11 < 10);
  F_00aaa5b0(this,(uint)*(byte *)(param_1 + 0xb));
  if (((*(byte *)((int)param_1 + 0x96) & 1) != 0) && ((*(byte *)((int)this + 0x2dd2) & 4) == 0)) {
    *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) | 4;
  }
  if ((*(byte *)((int)param_1 + 0x96) & 2) != 0) {
    *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) | 2;
  }
  if ((*(byte *)((int)param_1 + 0x96) & 0x40) != 0) {
    (*(float * PTR32 *)(gen_frame + 0xac)) = (float *)0x0;
    uVar7 = F_00a5f500(this);
    if (uVar7 != 0) {
      piVar12 = (int *)F_00a5f500(this);
      ((code *)*(gen_code32 *)(*piVar12 + 0xfc))(piVar12,0,&(*(float * PTR32 *)(gen_frame + 0xac)));
    }
    *(byte *)((int)this + 0x2dd3) = *(byte *)((int)this + 0x2dd3) | 0x20;
  }
  if ((*(byte *)((int)param_1 + 0x96) & 0x80) != 0) {
    F_00aa9000(this,1);
  }
  if ((*(ushort *)((int)param_1 + 0x96) & 0x100) != 0) {
    *(byte *)((int)this + 0x2dd4) = *(byte *)((int)this + 0x2dd4) | 8;
  }
  if ((*(ushort *)((int)param_1 + 0x96) & 0x200) != 0) {
    *(byte *)((int)this + 0x2dd4) = *(byte *)((int)this + 0x2dd4) | 0x10;
  }
  if ((*(ushort *)((int)param_1 + 0x96) & 0x400) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0x11,0);
  }
  if (*(char *)(param_1 + 0xb) == '\x02') {
    if ((*(byte *)((int)this + 0x2dd2) & 4) == 0) {
      pfVar10 = (float *)F_00ab2a20(0x43);
      (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar10;
      if (pfVar10 != (float *)0x0) {
        if ((*(char *)((int)pfVar10 + 7) == '\x01') &&
           (bVar5 = F_00533ec0((int)this + 0x620), bVar5 != 0)) {
          F_00aa2c50(this,0,0,0);
        }
        if (*(char *)((*(float * PTR32 *)(gen_frame + 0xac)) + 1) == '\x03') {
          F_005492d0((undefined *)((int)this + 0x680),0x43,0,1);
        }
        else if (*(char *)((*(float * PTR32 *)(gen_frame + 0xac)) + 1) == '\x04') {
          ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0xd,0);
        }
      }
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar6 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar6 = this;
      }
      uVar17 = 0x43;
    }
    else {
      pfVar10 = (float *)F_00ab2a20(0x49);
      (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar10;
      if (pfVar10 != (float *)0x0) {
        if ((*(char *)((int)pfVar10 + 7) == '\x01') &&
           (bVar5 = F_00533ec0((int)this + 0x620), bVar5 != 0)) {
          F_00aa2c50(this,0,0,0);
        }
        if (*(char *)((*(float * PTR32 *)(gen_frame + 0xac)) + 1) == '\x03') {
          F_005492d0((undefined *)((int)this + 0x680),0x49,0,1);
        }
        else if (*(char *)((*(float * PTR32 *)(gen_frame + 0xac)) + 1) == '\x04') {
          ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0xd,0);
        }
      }
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar6 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar6 = this;
      }
      uVar17 = 0x49;
    }
    F_005492d0((undefined *)((int)pvVar6 + 0x680),uVar17,0,1);
  }
  (*(float * PTR32 *)(gen_frame + 0xa8)) = (float *)0x0;
  (*(ushort * PTR32 *)(gen_frame + 0xa0)) = (ushort *)((int)param_1 + 0x9a);
  do {
    fVar9 = *(float *)((*(ushort * PTR32 *)(gen_frame + 0xa0)) + 1);
    uVar3 = (*(ushort * PTR32 *)(gen_frame + 0xa0))[-1];
    (*(float *)(gen_frame + 0x98)) = gen_bits2f((uint)*(*(ushort * PTR32 *)(gen_frame + 0xa0)));
    iVar11 = *(int *)this;
    (*(float * PTR32 *)(gen_frame + 0xac)) = *(float * PTR32 *)((*(ushort * PTR32 *)(gen_frame + 0xa0)) + 3);
    (*(float *)(gen_frame + 0x90)) = gen_bits2f((uint)uVar3);
    (*(float *)(gen_frame + 0x94)) = fVar9;
    uVar7 = ((code *)*(gen_code32 *)(iVar11 + 0xd4))(this);
    if (uVar7 != 0) {
      pfVar10 = (*(float * PTR32 *)(gen_frame + 0xa8));
      fVar9 = (*(float *)(gen_frame + 0x90));
      fVar18 = (*(float *)(gen_frame + 0x94));
      fVar19 = (*(float *)(gen_frame + 0x98));
      pfVar20 = (*(float * PTR32 *)(gen_frame + 0xac));
      uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
      F_00b7b840(uVar7,pfVar10,(undefined4)gen_fl2bits(fVar9),fVar18,
                   (undefined4)gen_fl2bits(fVar19),pfVar20);
    }
    (*(ushort * PTR32 *)(gen_frame + 0xa0)) = (*(ushort * PTR32 *)(gen_frame + 0xa0)) + 6;
    pfVar10 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xa8)) + 1);
    (*(float * PTR32 *)(gen_frame + 0xa8)) = pfVar10;
  } while ((int)pfVar10 < 0x1e);
  cVar2 = *(char *)((int)param_1 + 0x35);
  pfVar10 = (float *)param_1[6];
  (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar10;
  (*(char *)(gen_frame + 0x9c)) = cVar2;
  if (((*(char *)((int)this + 0x2dec) != cVar2) || (*(float * PTR32 *)((int)this + 0x2df0) != pfVar10)) &&
     (*(int *)((int)this + 0x2df4) != 0)) {
    F_009944e0(REFG(void * PTR32, 0x14a0d28),(int)this + 0x2df4);
    *(undefined4 *)((int)this + 0x2df4) = 0;
    *(undefined1 *)((int)this + 0x2dec) = 0;
    *(undefined4 *)((int)this + 0x2df0) = 0xe0000000;
  }
  *(char *)((int)this + 0x2dec) = (*(char *)(gen_frame + 0x9c));
  *(float * PTR32 *)((int)this + 0x2df0) = (*(float * PTR32 *)(gen_frame + 0xac));
  *(undefined1 *)((int)this + 0x196) = *(undefined1 *)((int)param_1 + 0x82);
  iVar11 = *(int *)this;
  *(undefined4 *)((int)this + 0x198) = param_1[0x22];
  pcVar4 = *(gen_code32 *)(iVar11 + 0x80);
  *(undefined4 *)((int)this + 0x19c) = param_1[0x23];
  (*pcVar4)(this);
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_1 + 0xc))) {
  case 1: ;
  case 10: ;
    *(undefined1 *)((int)this + 0x2f02) = 1;
    F_00aa34a0(this,(uint)*(ushort *)((int)param_1 + 0x62),param_1 + 0x8a,param_1 + 0x91,
                 (float)(float10)1);
    if (*(byte *)((int)param_1 + 0x32) != 0) {
      *(ushort *)((int)this + 0x2ea4) = (ushort)*(byte *)((int)param_1 + 0x32);
    }
    break;
  case 2: ;
    pfVar10 = (float *)F_00ab22f0(param_1[1]);
    (*(float * PTR32 *)(gen_frame + 0xa8)) = pfVar10;
    if (pfVar10 != (float *)0x0) {
      fVar9 = *pfVar10;
      *(undefined1 *)((int)this + 0x2ecf) = *(undefined1 *)((int)pfVar10 + 0x12);
      *(undefined1 *)((int)this + 0x2ece) = *(undefined1 *)((int)pfVar10 + 0x15);
      *(float *)((int)this + 0x2ed0) = *pfVar10;
      (*(float *)(gen_frame + 0xa4)) = fVar9;
      *(byte *)((int)this + 0x2dd4) =
           *(byte *)((int)this + 0x2dd4) ^
           (*(byte *)((int)pfVar10 + 0x17) ^ *(byte *)((int)this + 0x2dd4)) & 1;
    }
    *(undefined4 *)((int)this + 0x2ef8) = param_1[5];
    *(undefined1 *)((int)this + 0x2f02) = 1;
    F_00aa34a0(this,(uint)*(ushort *)((int)param_1 + 0x62),param_1 + 0x8a,param_1 + 0x91,(*(float *)(gen_frame + 0xa4)))
    ;
    pfVar10 = (*(float * PTR32 *)(gen_frame + 0xa8));
    if (((*(float * PTR32 *)(gen_frame + 0xa8)) != (float *)0x0) && (*(short *)((*(float * PTR32 *)(gen_frame + 0xa8)) + 4) != 0)) {
      *(short *)((int)this + 0x2ea4) = *(short *)((*(float * PTR32 *)(gen_frame + 0xa8)) + 4);
    }
    goto LAB_00aaccf8;
  case 3: ;
    F_00aaa870(this,param_1[1]);
    goto LAB_00aacd05;
  default: ;
    *(undefined1 *)((int)this + 0x2f02) = 1;
    F_00aa34a0(this,(uint)*(ushort *)((int)param_1 + 0x62),param_1 + 0x8a,param_1 + 0x91,
                 (float)(float10)1);
  }
  pfVar10 = (float *)0x0;
LAB_00aaccf8: ;
  pvVar6 = this;
  pvVar13 = (undefined *)F_006b8c00();
  F_00718ff0(pvVar13,pvVar6,pfVar10);
LAB_00aacd05: ;
  if ((*(byte *)((int)param_1 + 0x96) & 8) == 0) {
    *(byte *)((int)this + 0x8e) = *(byte *)((int)this + 0x8e) | 3;
  }
  else {
    *(byte *)((int)this + 0x8e) = *(byte *)((int)this + 0x8e) & 0xfc;
  }
  if (*(char *)((int)param_1 + 0x31) == '\x03') {
    (*(float *)(gen_frame + 0xa4)) = gen_bits2f((uint)*(byte *)((int)param_1 + 0x33));
    fVar9 = ((float)GEN_TOF(((float10)*(byte *)((int)param_1 + 0x33) / (float10)*(double *)&REFG(undefined, 0x1088118))));
    (*(float *)(gen_frame + 0xa4)) = fVar9;
    ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,(undefined4)gen_fl2bits(fVar9));
  }
  if ((*(byte *)((int)param_1 + 0x96) & 0x10) != 0) {
    fVar9 = gen_bits2f(F_00ab2a20(0x8e));
    (*(float *)(gen_frame + 0xa4)) = fVar9;
    if (fVar9 != 0.0) {
      if ((*(char *)((int)gen_fl2bits(fVar9) + 7) == '\x01') &&
         (bVar5 = F_00533ec0((int)this + 0x620), bVar5 != 0)) {
        F_00aa2c50(this,0,0,0);
      }
      if (*(char *)((int)gen_fl2bits((*(float *)(gen_frame + 0xa4))) + 4) == '\x03') {
        F_00549140((undefined *)((int)this + 0x680),0x8e,0,1);
      }
      (*(float *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1375ac0);
      (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1375ac4);
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1335e70);
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1375ac8);
      (*(undefined4 *)(gen_frame + 0x40)) = 0x1000000;
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar6 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar6 = this;
      }
      F_00549140((undefined *)((int)pvVar6 + 0x680),0x8e,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),1);
    }
    if ((*(char *)((int)param_1 + 0x31) == '\x03') && (REFG(void * PTR32, 0x1379694) != (undefined *)0x0)) {
      fVar9 = gen_bits2f(F_00a64450(&REFG(undefined, 0x14a9a18),param_1[0x1f]));
      (*(float *)(gen_frame + 0xa4)) = fVar9;
      pfVar10 = (float *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
      (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar10;
      pfVar10 = (float *)F_00a5feb0(this);
      fVar9 = *pfVar10;
      fVar18 = *(*(float * PTR32 *)(gen_frame + 0xac));
      (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar9 - (float10)fVar18);
      (*(float *)(gen_frame + 0x58)) = (float)((float10)pfVar10[2] - (float10)(*(float * PTR32 *)(gen_frame + 0xac))[2]);
      if ((*(float *)(gen_frame + 0xa4)) != 0.0) {
        fVar15 = (float10)(float)((float10)pfVar10[2] - (float10)(*(float * PTR32 *)(gen_frame + 0xac))[2]);
        fVar16 = (float10)(float)((float10)fVar9 - (float10)fVar18);
        pfVar10 = ((float *)(uintptr_t)gen_fl2bits((float)((float)(fVar16 * fVar16 + fVar15 * fVar15))));
        (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar10;
        pfVar10 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10)))))))));
        (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar10;
        if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10))) <= (float10)REFG(float, 0x10a0d00)) {
          F_00a7d4b0(0x52f,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xa4))),this,0,0,0,0,0,0,REFG(float, 0x10916ec));
        }
      }
    }
  }
  if ((*(byte *)((int)param_1 + 0x96) & 4) != 0) {
    uVar17 = 1;
    *(undefined4 *)((int)this + 0x2ed4) = 1;
    pvVar6 = this;
    pvVar13 = (undefined *)F_006b8c00();
    F_006e3480(pvVar13,pvVar6,uVar17);
  }
  uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
  if ((*(ushort *)((int)param_1 + 0x96) & 0x800) != 0) {
    *(undefined1 *)((int)this + 0x2f1c) = 1;
  }
  if ((REFG(void * PTR32, 0x1379694) == this) &&
     (bVar5 = *(byte *)((int)this + 0x2dd2) >> 2 & 1, uVar7 = (uint)bVar5, bVar5 != REFG(undefined1, 0x14ab058))) {
    F_00a7ef20(&REFG(undefined1, 0x14ab058),uVar7,0,0);
    uVar7 = F_00a6b900(&REFG(undefined1, 0x14ab058));
  }
  return uVar7;
}

/* ref: FUN_00aacff0 */
byte F_00aacff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaacff0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x40) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad000 */
byte F_00aad000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad000u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x42) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad010 */
byte F_00aad010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x43) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad020 */
uint F_00aad020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00aad080 */
uint F_00aad080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00aad090 */
uint F_00aad090(unsigned int gen_a0)
{
  GEN_ENTER(0xaad090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_005393f0(in_ecx);
  *(undefined1 *)(in_ecx + 200) = 0;
  return uVar1;
}

/* ref: FUN_00aad100 */
uint F_00aad100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad100u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00aad110 */
uint F_00aad110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad110u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00aad120 */
uint F_00aad120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaad120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return param_1;
}

/* ref: FUN_00aad140 */
uint F_00aad140(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaad140u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x18 + param_2 * 4) = param_3;
  return param_2;
}

/* ref: FUN_00aad160 */
uint F_00aad160(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaad160u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x18 + param_2 * 4) = param_3;
  return param_2;
}

/* ref: FUN_00aad1c0 */
uint F_00aad1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad1c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x7a0 + 0x1e10 + in_ecx;
}

/* ref: FUN_00aad1e0 */
byte F_00aad1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad1e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x189) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad1f0 */
uint F_00aad1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad1f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x184) = param_2;
  return param_2;
}

/* ref: FUN_00aad210 */
uint F_00aad210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2ed8) = param_2;
  return param_2;
}

/* ref: FUN_00aad220 */
byte F_00aad220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad220u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x2dd2) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x2dd2) = *(byte *)(in_ecx + 0x2dd2) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00aad240 */
byte F_00aad240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0x2dd2) & 0x7f | (char)param_1 << 7;
  *(byte *)((int)this + 0x2dd2) = bVar1;
  return bVar1;
}

/* ref: FUN_00aad270 */
byte F_00aad270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad270u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x2dd3) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x2dd3) = *(byte *)(in_ecx + 0x2dd3) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00aad290 */
byte F_00aad290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaad290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0x2eec + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad2b0 */
byte F_00aad2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad2b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2ef0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad2e0 */
byte F_00aad2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad2e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x2deb)) & 2;
  *(byte *)(in_ecx + 0x2deb) = *(byte *)(in_ecx + 0x2deb) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00aad310 */
byte F_00aad310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2e95) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad320 */
uint F_00aad320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad320u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2e98) = param_2;
  return param_2;
}

/* ref: FUN_00aad340 */
unsigned int F_00aad340(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaad340u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2de0) = param_2;
  return 0;
}

/* ref: FUN_00aad360 */
byte F_00aad360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2de8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad370 */
byte F_00aad370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2de9) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad380 */
unsigned int F_00aad380(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaad380u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2de4) = param_2;
  return 0;
}

