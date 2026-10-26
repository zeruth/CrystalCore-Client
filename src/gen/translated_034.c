#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_005c8380 */
unsigned int F_005c8380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c8380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_005c83b0 */
uint F_005c83b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5c83b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_005c4280(this,param_3);
  if (uVar1 == 0) {
    return 0;
  }
  F_004d41c0((undefined *)(param_1 + 8),param_4);
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(uint *)(param_1 + 0x1c) = uVar1;
  *(uint *)(param_1 + 0x20) =
       *(uint *)(param_1 + 0x20) ^ (*(uint *)((int)this + 0x74) ^ *(uint *)(param_1 + 0x20)) & 0xf;
  uVar2 = (uint)*(byte *)((int)this + 0x78) << 4 | *(uint *)(param_1 + 0x20) & 0xfff0000f;
  *(uint *)(param_1 + 0x20) = uVar2;
  *(uint *)(param_1 + 0x20) = ((uint)*(byte *)((int)this + 0xa4) << 0x14 ^ uVar2) & 0x100000 ^ uVar2
  ;
  F_005bfeb0(this,param_1);
  return uVar1;
}

/* ref: FUN_005c8430 */
uint F_005c8430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c8430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  
  bVar1 = F_00570d10(this,param_1,param_2,0);
  return -(uint)(bVar1 != 0) & (uint)this;
}

/* ref: FUN_005c8480 */
uint F_005c8480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(ushort *)((int)this + 0x22) = *(ushort *)((int)this + 0x22) & 0x7fff;
  *(undefined4 *)((int)this + 0x18) = param_1;
  uVar1 = F_00573430(this,param_1);
  return uVar1;
}

/* ref: FUN_005c84c0 */
uint F_005c84c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c84c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (3 < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 * 4 + 4,0x3c);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_005c8500 */
uint F_005c8500(unsigned int gen_a0)
{
  GEN_ENTER(0x5c8500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005c8540 */
uint F_005c8540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c8540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c8580 */
uint F_005c8580(unsigned int gen_a0)
{
  GEN_ENTER(0x5c8580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005c85c0 */
uint F_005c85c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c85c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c8630 */
uint F_005c8630(unsigned int gen_a0)
{
  GEN_ENTER(0x5c8630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_005c8680 */
uint F_005c8680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c8690 */
uint F_005c8690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c86e0 */
uint F_005c86e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c86e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_005c4fe0(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_005c8760 */
uint F_005c8760(unsigned int gen_a0)
{
  GEN_ENTER(0x5c8760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_005c5100(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_005c87d0 */
uint F_005c87d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c87d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_005c8820 */
uint F_005c8820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c8830 */
uint F_005c8830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c8840 */
uint F_005c8840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8840u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_005c8860 */
uint F_005c8860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8860u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_005c8870 */
uint F_005c8870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c8870u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_005bc040(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_005c898a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_005bb2d0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_005bb2b0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_005c898a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_005c52f0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_005c12d0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_005c52f0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_005c8a48: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_005c12d0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_005c8a48;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_005c52f0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_005c12d0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,400);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_005c8ad0 */
uint F_005c8ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c8ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_005c52b0(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,400);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_005c8b30 */
uint F_005c8b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c8b30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_005c8ba0 */
uint F_005c8ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8ba0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_005c8bc0 */
uint F_005c8bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8bc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_005c8bd0 */
uint F_005c8bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c8bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_005c5390(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,400);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_005c8c60 */
uint F_005c8c60(unsigned int gen_a0)
{
  GEN_ENTER(0x5c8c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0x10,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0x10,400);
  return (uint)uVar3;
}

/* ref: FUN_005c8cb0 */
uint F_005c8cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c8cc0 */
uint F_005c8cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c8d00 */
uint F_005c8d00(unsigned int gen_a0)
{
  GEN_ENTER(0x5c8d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_005c8d50 */
uint F_005c8d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c8d60 */
uint F_005c8d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c8db0 */
uint F_005c8db0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c8db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_004296a0(0xc,0,400);
  *(uint *)this = uVar1;
  *(uint *)uVar1 = uVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  return (uint)this;
}

/* ref: FUN_005c8de0 */
uint F_005c8de0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c8de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_005c8e30 */
uint F_005c8e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8e30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c8e40 */
uint F_005c8e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c8e40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c8e90 */
uint F_005c8e90(unsigned int gen_a0)
{
  GEN_ENTER(0x5c8e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005c8ed0 */
uint F_005c8ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c8ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c8f10 */
uint F_005c8f10(unsigned int gen_a0)
{
  GEN_ENTER(0x5c8f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005c8f50 */
uint F_005c8f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c8f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c8fc0 */
uint F_005c8fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c8fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_005c9010 */
uint F_005c9010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c9010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c9020 */
uint F_005c9020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c9020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c9050 */
uint F_005c9050(unsigned int gen_a0)
{
  GEN_ENTER(0x5c9050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005c9090 */
uint F_005c9090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c9090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c90d0 */
uint F_005c90d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c90d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005c9110 */
uint F_005c9110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c9110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c9150 */
uint F_005c9150(unsigned int gen_a0)
{
  GEN_ENTER(0x5c9150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005c9190 */
uint F_005c9190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c9190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_005c91a0 */
uint F_005c91a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c91a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x19);
  while (cVar1 == '\0') {
    F_005c58e0(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x1c,400);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x19);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_005c9230 */
uint F_005c9230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c9230u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c9240 */
uint F_005c9240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c9240u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c9280 */
uint F_005c9280(unsigned int gen_a0)
{
  GEN_ENTER(0x5c9280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_005c92d0 */
uint F_005c92d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c92d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c92e0 */
uint F_005c92e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c92e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c92f0 */
uint F_005c92f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c92f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005c2030(this);
  return (uint)this;
}

/* ref: FUN_005c9330 */
uint F_005c9330(unsigned int gen_a0)
{
  GEN_ENTER(0x5c9330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_005c9380 */
uint F_005c9380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c9380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c9390 */
uint F_005c9390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c9390u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c93a0 */
uint F_005c93a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c93a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_005c9400 */
uint F_005c9400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c9400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c9410 */
uint F_005c9410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c9410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_005c9480 */
uint F_005c9480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c9480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_005c94a0 */
uint F_005c94a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c94a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_005c94c0 */
uint F_005c94c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c94c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_005c94e0 */
uint F_005c94e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c94e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_005c9500 */
uint F_005c9500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c9500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c9510 */
uint F_005c9510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c9510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_005c95c0 */
uint F_005c95c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c95c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_005c9640 */
uint F_005c9640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c9640u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_005c8bd0(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_005c5e50(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_005c96e0 */
uint F_005c96e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c96e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *param_2) {
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

/* ref: FUN_005c9720 */
uint F_005c9720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c9720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_005c60b0(this,param_1,param_2);
  return param_1;
}

/* ref: FUN_005c9740 */
uint F_005c9740(unsigned int gen_a0)
{
  GEN_ENTER(0x5c9740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_005c9640(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_005c9760 */
uint F_005c9760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c9760u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c9770 */
uint F_005c9770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c9770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0x10,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_005c97e0 */
uint F_005c97e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c97e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c97f0 */
uint F_005c97f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c97f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_005c9860 */
uint F_005c9860(unsigned int gen_a0)
{
  GEN_ENTER(0x5c9860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0x2c0);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x2c0);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_005c98e0 */
uint F_005c98e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c98e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c98f0 */
uint F_005c98f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c98f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_005c9960 */
uint F_005c9960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c9960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_005c9980 */
uint F_005c9980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c9980u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_005c99e0 */
uint F_005c99e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c99e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_005c9a40 */
uint F_005c9a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c9a40u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_005c9aa0 */
uint F_005c9aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c9aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005c9ae0 */
uint F_005c9ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c9ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c9af0 */
uint F_005c9af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c9af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_005c9b60 */
uint F_005c9b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c9b60u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_005c9bc0 */
uint F_005c9bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c9bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005c9c00 */
uint F_005c9c00(unsigned int gen_a0)
{
  GEN_ENTER(0x5c9c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005c9c40 */
uint F_005c9c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c9c40u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_005c9ca0 */
uint F_005c9ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c9ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005c9ce0 */
uint F_005c9ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c9ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_005c9d40 */
uint F_005c9d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c9d40u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_005c9de0 */
uint F_005c9de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c9de0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_005c91a0(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x19) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x19) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x19);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x19);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x19);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x19);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_005c63d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_005c9e80 */
uint F_005c9e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c9e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x19) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x19) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_005c9ec0 */
uint F_005c9ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c9ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_005c6630(this,param_1,param_2);
  return param_1;
}

/* ref: FUN_005c9ee0 */
uint F_005c9ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x5c9ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_005c9de0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_005c9f00 */
uint F_005c9f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5c9f00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c9f10 */
uint F_005c9f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5c9f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_005c9fc0 */
uint F_005c9fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c9fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_005ca020 */
uint F_005ca020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ca020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_005ca090 */
uint F_005ca090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ca090u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_005ca0f0 */
uint F_005ca0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ca0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005ca130 */
uint F_005ca130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ca130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005ca140 */
uint F_005ca140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ca140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_005ca1b0 */
uint F_005ca1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ca1b0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3 * -0xc;
  return (uint)param_2;
}

/* ref: FUN_005ca1d0 */
uint F_005ca1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ca1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 - param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_005ca210 */
uint F_005ca210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ca210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 - param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_005ca250 */
uint F_005ca250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ca250u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3 * -0x14;
  return (uint)param_2;
}

/* ref: FUN_005ca270 */
uint F_005ca270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5ca270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  param_1[1] = 0;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_005ca2a0 */
uint F_005ca2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5ca2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  param_1[1] = 0;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_005ca2d0 */
uint F_005ca2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ca2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_005c8ad0(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_005c8870(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_005ca370 */
uint F_005ca370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ca370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  uint * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint uVar5;
  int * piVar6;
  int * PTR32 * ppiVar7;
  int iVar8;
  uint uVar9;
  undefined1 * puVar10;
  uint uVar11;
  int * piVar12;
  bool bVar13;
  
  (*(uint *)(gen_frame + 0x24)) = *(uint *)((int)this + 0x2a4);
  (*(int *)(gen_frame + 0x20)) = *(int *)((int)this + 0x2a0);
  puVar4 = (undefined4 *)F_004d6a30(*(undefined * PTR32 *)((int)this + 0xa0),0,0,2);
  uVar5 = *(uint *)((int)this + 0x28c) >> 2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = puVar4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = puVar4;
  (*(uint *)(gen_frame + 0x4c)) = uVar5;
  (*(int * PTR32 *)(gen_frame + 0x64)) = (int *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    ((byte *)(gen_frame + 0xc))[0] = (byte)REFG(undefined4, 0x1301dd0);
    ((byte *)(gen_frame + 0xc))[1] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1301dd0) + 1));
    ((byte *)(gen_frame + 0xc))[2] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1301dd0) + 2));
    ((byte *)(gen_frame + 0xc))[3] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1301dd0) + 3));
    ((byte *)(gen_frame + 0xc))[8] = (byte)REFG(undefined4, 0x1301dd8);
    ((byte *)(gen_frame + 0xc))[9] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1301dd8) + 1));
    ((byte *)(gen_frame + 0xc))[10] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1301dd8) + 2));
    ((byte *)(gen_frame + 0xc))[0xb] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1301dd8) + 3));
    (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)0x0;
    ((byte *)(gen_frame + 0xc))[4] = (byte)REFG(undefined4, 0x1301dd4);
    ((byte *)(gen_frame + 0xc))[5] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1301dd4) + 1));
    ((byte *)(gen_frame + 0xc))[6] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1301dd4) + 2));
    ((byte *)(gen_frame + 0xc))[7] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1301dd4) + 3));
    ((byte *)(gen_frame + 0xc))[0xc] = (byte)REFG(undefined4, 0x1301ddc);
    ((byte *)(gen_frame + 0xc))[0xd] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1301ddc) + 1));
    ((byte *)(gen_frame + 0xc))[0xe] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1301ddc) + 2));
    ((byte *)(gen_frame + 0xc))[0xf] = (*(undefined1 *)((char *)&REFG(undefined4, 0x1301ddc) + 3));
    (*(uint *)(gen_frame + 0x38)) = 0;
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint *)(gen_frame + 0x34)) = 0;
    (*(byte *)(gen_frame + 0x6b)) = 0;
    *(undefined1 *)((int)this + 0x4381) = 0;
    F_00572240(this,0);
    iVar8 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
    *((uint *)GEN_TOP((*(int *)(iVar8 + 0x1a8) + 8))) =
         *((uint *)GEN_TOP((*(int *)(iVar8 + 0x1a8) + 8))) & 0x7ffff | 0xff400000;
    iVar1 = *(int *)(iVar8 + 0x1a8);
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)((int)this + 0x50);
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)((int)this + 0x70);
    *(undefined4 *)(iVar1 + 0x60) = 0;
    (*(int *)(gen_frame + 0x30)) = iVar8;
    *((undefined4 *)GEN_TOP((*(int *)(iVar8 + 0x1a8) + 0x4c))) = *(undefined4 *)((int)this + 0x90);
    F_005786b0(this,((byte *)(gen_frame + 0xc)));
    (*(uint *)(gen_frame + 0x2c)) = 0;
    (*(int *)(gen_frame + 0x54)) = *(int *)((int)this + 0x250) + *(int *)((int)this + 0x294);
    (*(uint *)(gen_frame + 0x50)) = *(uint *)((int)this + 0x24c);
    if ((*(uint *)(gen_frame + 0x24)) != 0) {
      do {
        puVar2 = *(uint * PTR32 *)((*(int *)(gen_frame + 0x20)) + 4 + (*(uint *)(gen_frame + 0x2c)) * 8);
        if (puVar2 != (uint *)0x0) {
          (*(int * PTR32 *)(gen_frame + 0x3c)) = (int *)(*puVar2 & 0xf0);
          if (((char)param_1 != '\0') && (*puVar2 == 0x22)) {
            (*(int * PTR32 *)(gen_frame + 0x3c)) = (int *)0x10;
          }
          (*(uint * PTR32 *)(gen_frame + 0x58)) = (uint *)0x0;
          if ((*(int * PTR32 *)(gen_frame + 0x3c)) != (int *)0x0) {
            (*(uint * PTR32 *)(gen_frame + 0x58)) = puVar2;
            if ((((((*(int * PTR32 *)(gen_frame + 0x44)) != (*(int * PTR32 *)(gen_frame + 0x3c))) || (bVar3 = F_004d48c0(puVar2 + 2,((byte *)(gen_frame + 0xc))), bVar3 != 0))
                 || (uVar5 = puVar2[8], (uVar5 & 0xf) != (*(uint *)(gen_frame + 0x38)))) ||
                (((uVar5 >> 4 & 0xff) != (*(uint *)(gen_frame + 0x5c)) || ((uVar5 >> 0xc & 0xff) != (*(uint *)(gen_frame + 0x34)))))) ||
               (((byte)(uVar5 >> 0x14) & 1) != (*(byte *)(gen_frame + 0x6b)))) {
              F_00578260((*(int * PTR32 *)(gen_frame + 0x44)),(int)puVar4 - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x48))) >> 2,(*(int * PTR32 *)(gen_frame + 0x64)),
                           (int)(*(undefined4 * PTR32 *)(gen_frame + 0x48)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x60))) >> 2);
              (*(int * PTR32 *)(gen_frame + 0x44)) = (*(int * PTR32 *)(gen_frame + 0x3c));
              uVar5 = puVar2[8] >> 4 & 0xff;
              (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = puVar4;
              if (uVar5 != (*(uint *)(gen_frame + 0x5c))) {
                (*(uint *)(gen_frame + 0x5c)) = uVar5;
                F_00572240(this,uVar5);
                F_00572470((*(uint *)(gen_frame + 0x5c)));
              }
              uVar5 = puVar2[8] & 0xf;
              if (uVar5 != (*(uint *)(gen_frame + 0x38))) {
                iVar8 = *(int *)((*(int *)(gen_frame + 0x30)) + 0x1a8);
                *(undefined4 *)(iVar8 + 0x40) = *(undefined4 *)((int)this + uVar5 * 4 + 0x50);
                *(undefined4 *)(iVar8 + 0x60) = 0;
                *(undefined4 *)(iVar8 + 0x44) = *(undefined4 *)((int)this + uVar5 * 4 + 0x70);
                *(undefined4 *)(iVar8 + 0x60) = 0;
                *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x30)) + 0x1a8) + 0x4c))) =
                     *((undefined4 *)GEN_TOP(((int)this + (int)(&REFG(undefined * PTR32, 0x10a0c2c))[uVar5] * 4 + 0x90)));
                (*(uint *)(gen_frame + 0x38)) = uVar5;
                (*(int *)(gen_frame + 0x54)) = *((int *)GEN_TOP(((int)this + (int)((&REFG(undefined * PTR32, 0x10a0c2c))[uVar5] + 0x25) * 0x10))) +
                           *(int *)((int)this + 0x294);
                (*(uint *)(gen_frame + 0x50)) = *((uint *)GEN_TOP(((int)this + (int)(&REFG(undefined * PTR32, 0x10a0c2c))[uVar5] * 0x10 + 0x24c)));
              }
              if (((((puVar2[2] ^ (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))) & 0x7ffffff) != 0) || (puVar2[3] != (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))
                 || ((((puVar2[4] ^ (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8))) & 0xfffffff) != 0 ||
                     ((((puVar2[5] ^ (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12))) & 0x1ff) != 0 ||
                      (((byte)(puVar2[8] >> 0x14) & 1) != (*(byte *)(gen_frame + 0x6b)))))))) {
                bVar3 = (byte)(puVar2[8] >> 0x14) & 1;
                (*(byte *)(gen_frame + 0x6b)) = bVar3;
                *(byte *)((int)this + 0x4381) = bVar3;
                F_004d41c0(((byte *)(gen_frame + 0xc)),puVar2 + 2);
                F_005786b0(this,((byte *)(gen_frame + 0xc)));
              }
              uVar5 = puVar2[8] >> 0xc & 0xff;
              if (uVar5 != (*(uint *)(gen_frame + 0x34))) {
                (*(uint *)(gen_frame + 0x34)) = uVar5;
              }
            }
            piVar6 = (int *)((ushort)puVar2[1] - 1);
            if (piVar6 == (int *)0x0) {
              (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
              if (puVar2[0xf] != 0) {
                (*(int * PTR32 *)(gen_frame + 0x3c)) = (int *)((int)this + 0x230);
                (*(uint * PTR32 *)(gen_frame + 0x40)) = puVar2 + 0xc;
                iVar8 = (ushort)puVar2[1] + 3;
                piVar6 = (int *)0x0;
                do {
                  if (piVar6 < &REFG(undefined, 0x4)) {
                    iVar8 = *(int *)((*(int *)(gen_frame + 0x30)) + 0x1a8);
                    *(uint *)(iVar8 + 0x2a8 + *(*(int * PTR32 *)(gen_frame + 0x3c)) * 8) = (*(uint * PTR32 *)(gen_frame + 0x40))[-3];
                    *(uint *)(iVar8 + 0x2ac + *(*(int * PTR32 *)(gen_frame + 0x3c)) * 8) = *(*(uint * PTR32 *)(gen_frame + 0x40)) & 0xfffffff;
                    iVar8 = 4;
                  }
                  (*(uint * PTR32 *)(gen_frame + 0x40)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x40)) + iVar8);
                  (*(int * PTR32 *)(gen_frame + 0x3c)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x3c)) + iVar8);
                  piVar6 = (int *)((int)piVar6 + 1);
                  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
                } while (piVar6 < (int *)puVar2[0xf]);
              }
              F_00572550(this,puVar2 + 0x10);
            }
          }
          switch((unsigned int)(uintptr_t)(*puVar2)) {
          case 1: ;
            if ((short)puVar2[1] == 2) {
              F_00578260((*(int * PTR32 *)(gen_frame + 0x44)),(int)puVar4 - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x48))) >> 2,(*(int * PTR32 *)(gen_frame + 0x64)),
                           (int)(*(undefined4 * PTR32 *)(gen_frame + 0x48)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x60))) >> 2);
              bVar13 = puVar2[2] != 0;
              (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = puVar4;
              ((byte *)(gen_frame + 0xc))[0x10] = bVar13;
              if (bVar13) {
                uVar5 = (*(uint *)(gen_frame + 0x5c)) & 0xffffff0f;
                (*(uint *)(gen_frame + 0x5c)) = uVar5;
                F_00572470(uVar5);
              }
              F_00578480(this,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)),puVar2[3],puVar2 + 4);
            }
            break;
          case 2: ;
            F_00578260((*(int * PTR32 *)(gen_frame + 0x44)),(int)puVar4 - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x48))) >> 2,(*(int * PTR32 *)(gen_frame + 0x64)),
                         (int)(*(undefined4 * PTR32 *)(gen_frame + 0x48)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x60))) >> 2);
            (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = puVar4;
            if (puVar2[2] == 0) {
              F_00578410(this);
            }
            else {
              uVar5 = (*(uint *)(gen_frame + 0x5c)) & 0xffffff0f;
              (*(uint *)(gen_frame + 0x5c)) = uVar5;
              F_00572470(uVar5);
              F_00578350(this,puVar2 + 3);
            }
            break;
          case 0x10: ;
            piVar6 = ((int *)GEN_TOP((((*(uint * PTR32 *)(gen_frame + 0x58))[7] - (*(int *)(gen_frame + 0x54))) / (*(uint *)(gen_frame + 0x50)))));
            uVar11 = (*(uint * PTR32 *)(gen_frame + 0x58))[6];
            (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
            if (((int)puVar4 - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x60))) >> 2) + uVar11 <= (*(uint *)(gen_frame + 0x4c))) {
              uVar5 = 0;
              if (uVar11 != 0) {
                do {
                  puVar4[uVar5] = piVar6;
                  uVar5 = uVar5 + 1;
                  piVar6 = (int *)((int)piVar6 + 1);
                } while (uVar5 < uVar11);
                (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
              }
LAB_005ca7ec: ;
              puVar4 = puVar4 + uVar11;
LAB_005caa16: ;
              ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x64));
              if ((*(int * PTR32 *)(gen_frame + 0x64)) <= (*(int * PTR32 *)(gen_frame + 0x28))) {
                ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x28));
              }
              (*(int * PTR32 *)(gen_frame + 0x64)) = *ppiVar7;
            }
            break;
          case 0x11: ;
            uVar5 = (*(uint * PTR32 *)(gen_frame + 0x58))[6];
            (*(int * PTR32 *)(gen_frame + 0x28)) = ((int *)GEN_TOP((((*(uint * PTR32 *)(gen_frame + 0x58))[7] - (*(int *)(gen_frame + 0x54))) / (*(uint *)(gen_frame + 0x50)) + 1)));
            if (((int)puVar4 - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x60))) >> 2) + uVar5 * 2 <= (*(uint *)(gen_frame + 0x4c))) {
              if (1 < uVar5) {
                iVar8 = uVar5 - 1;
                do {
                  puVar4[1] = (*(int * PTR32 *)(gen_frame + 0x28));
                  *puVar4 = (undefined1 *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + -1);
                  (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 1);
                  puVar4 = puVar4 + 2;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x64));
              if ((*(int * PTR32 *)(gen_frame + 0x64)) <= (*(int * PTR32 *)(gen_frame + 0x28))) {
                ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x28));
              }
LAB_005ca840: ;
              (*(int * PTR32 *)(gen_frame + 0x64)) = *ppiVar7;
            }
            break;
          case 0x20: ;
            piVar6 = ((int *)GEN_TOP((((*(uint * PTR32 *)(gen_frame + 0x58))[7] - (*(int *)(gen_frame + 0x54))) / (*(uint *)(gen_frame + 0x50)))));
            uVar5 = (*(uint * PTR32 *)(gen_frame + 0x58))[6];
            (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
            if (((int)puVar4 - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x60))) >> 2) + uVar5 <= (*(uint *)(gen_frame + 0x4c))) {
              uVar9 = 0;
              uVar11 = 0;
              if (uVar5 == 0) goto LAB_005ca7ec;
              do {
                puVar4[uVar9] = piVar6;
                uVar9 = uVar9 + 1;
                piVar6 = (int *)((int)piVar6 + 1);
              } while (uVar9 < uVar5);
              (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
              puVar4 = puVar4 + uVar5;
              goto LAB_005caa16;
            }
            break;
          case 0x21: ;
            piVar6 = (int *)(*(uint * PTR32 *)(gen_frame + 0x58))[6];
            (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar6;
            (*(int * PTR32 *)(gen_frame + 0x28)) = ((int *)GEN_TOP((((*(uint * PTR32 *)(gen_frame + 0x58))[7] - (*(int *)(gen_frame + 0x54))) / (*(uint *)(gen_frame + 0x50)) + 2)));
            if ((uint)(((int)puVar4 - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x60))) >> 2) + (int)((int)(uintptr_t)piVar6) * 3) <= (*(uint *)(gen_frame + 0x4c))) {
              piVar12 = (int *)0x2;
              if ((int *)0x2 < piVar6) {
                do {
                  *puVar4 = ((undefined1 *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + (((uint)piVar12 & 1) - 2))));
                  puVar4[2] = (*(int * PTR32 *)(gen_frame + 0x28));
                  puVar4[1] = ((undefined1 *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + (-1 - ((uint)piVar12 & 1)))));
                  piVar12 = (int *)((int)piVar12 + 1);
                  (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 1);
                  puVar4 = puVar4 + 3;
                } while (piVar12 < piVar6);
              }
              ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x64));
              if ((*(int * PTR32 *)(gen_frame + 0x28)) < (*(int * PTR32 *)(gen_frame + 0x64))) goto LAB_005ca840;
              (*(int * PTR32 *)(gen_frame + 0x64)) = (*(int * PTR32 *)(gen_frame + 0x28));
            }
            break;
          case 0x22: ;
            piVar6 = ((int *)GEN_TOP((((*(uint * PTR32 *)(gen_frame + 0x58))[7] - (*(int *)(gen_frame + 0x54))) / (*(uint *)(gen_frame + 0x50)))));
            uVar5 = (*(uint * PTR32 *)(gen_frame + 0x58))[6] >> 2;
            iVar8 = (int)puVar4 - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x60))) >> 2;
            (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar6;
            if ((char)param_1 == '\0') {
              if (iVar8 + uVar5 * 6 <= (*(uint *)(gen_frame + 0x4c))) {
                if (uVar5 != 0) {
                  puVar10 = (undefined1 *)((int)piVar6 + 2);
                  do {
                    puVar4[1] = puVar10 + -1;
                    *puVar4 = piVar6;
                    puVar4[2] = puVar10;
                    puVar4[3] = piVar6;
                    puVar4[4] = puVar10;
                    puVar4[5] = puVar10 + 1;
                    piVar6 = piVar6 + 1;
                    puVar10 = puVar10 + 4;
                    puVar4 = puVar4 + 6;
                    uVar5 = uVar5 - 1;
                  } while (uVar5 != 0);
LAB_005ca9a9: ;
                  (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar6;
                }
LAB_005ca9ac: ;
                ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x64));
                if ((*(int * PTR32 *)(gen_frame + 0x64)) <= (*(int * PTR32 *)(gen_frame + 0x3c))) {
                  ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x3c));
                }
                (*(int * PTR32 *)(gen_frame + 0x64)) = *ppiVar7;
              }
            }
            else if (iVar8 + uVar5 * 8 <= (*(uint *)(gen_frame + 0x4c))) {
              if (uVar5 != 0) {
                puVar10 = (undefined1 *)((int)piVar6 + 2);
                do {
                  puVar4[1] = puVar10 + -1;
                  puVar4[2] = puVar10 + -1;
                  *puVar4 = piVar6;
                  puVar4[3] = puVar10;
                  puVar4[4] = puVar10;
                  puVar4[7] = piVar6;
                  puVar4[5] = puVar10 + 1;
                  puVar4[6] = puVar10 + 1;
                  piVar6 = piVar6 + 1;
                  puVar10 = puVar10 + 4;
                  puVar4 = puVar4 + 8;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
                goto LAB_005ca9a9;
              }
              goto LAB_005ca9ac;
            }
            break;
          case 0x23: ;
            piVar6 = ((int *)GEN_TOP((((*(uint * PTR32 *)(gen_frame + 0x58))[7] - (*(int *)(gen_frame + 0x54))) / (*(uint *)(gen_frame + 0x50)))));
            uVar5 = (*(uint * PTR32 *)(gen_frame + 0x58))[6] >> 1;
            (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
            if (((int)puVar4 - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x60))) >> 2) + uVar5 * 6 <= (*(uint *)(gen_frame + 0x4c))) {
              if (1 < uVar5) {
                puVar10 = (undefined1 *)((int)piVar6 + 3);
                iVar8 = uVar5 - 1;
                do {
                  puVar4[1] = puVar10 + -2;
                  *puVar4 = piVar6;
                  puVar4[2] = puVar10;
                  puVar4[3] = piVar6;
                  puVar4[4] = puVar10;
                  puVar4[5] = puVar10 + -1;
                  piVar6 = (int *)((int)piVar6 + 2);
                  puVar10 = puVar10 + 2;
                  puVar4 = puVar4 + 6;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
                (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
              }
              goto LAB_005caa16;
            }
          }
        }
        uVar5 = (*(uint *)(gen_frame + 0x2c)) + 1;
        (*(uint *)(gen_frame + 0x2c)) = uVar5;
      } while (uVar5 < (*(uint *)(gen_frame + 0x24)));
    }
    F_00578260((*(int * PTR32 *)(gen_frame + 0x44)),(int)puVar4 - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x48))) >> 2,(*(int * PTR32 *)(gen_frame + 0x64)),
                 (int)(*(undefined4 * PTR32 *)(gen_frame + 0x48)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x60))) >> 2);
    uVar5 = F_004d6ae0(*(undefined * PTR32 *)((int)this + 0xa0));
  }
  return uVar5;
}

/* ref: FUN_005caac0 */
uint F_005caac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5caac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  short sVar2;
  ushort uVar3;
  byte bVar4;
  short * psVar5;
  uint uVar6;
  uint uVar7;
  uint * puVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  (*(uint *)(gen_frame + 0x24)) = *(uint *)((int)this + 0x2a4);
  (*(int *)(gen_frame + 0x20)) = *(int *)((int)this + 0x2a0);
  psVar5 = (short *)F_004d6a30(*(undefined * PTR32 *)((int)this + 0xa0),0,0,2);
  uVar6 = *(uint *)((int)this + 0x28c) >> 1;
  (*(short * PTR32 *)(gen_frame + 0x48)) = psVar5;
  (*(short * PTR32 *)(gen_frame + 0x60)) = psVar5;
  (*(uint *)(gen_frame + 0x4c)) = uVar6;
  (*(uint *)(gen_frame + 0x64)) = 0;
  if (psVar5 != (short *)0x0) {
    (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x1301dd0);
    (*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x1301dd8);
    (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)0x0;
    (*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x1301dd4);
    (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x1301ddc);
    (*(uint *)(gen_frame + 0x38)) = 0;
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(uint *)(gen_frame + 0x34)) = 0;
    (*(byte *)(gen_frame + 0x6b)) = 0;
    *(undefined1 *)((int)this + 0x4381) = 0;
    F_00572240(this,0);
    iVar9 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
    *((uint *)GEN_TOP((*(int *)(iVar9 + 0x1a8) + 8))) =
         *((uint *)GEN_TOP((*(int *)(iVar9 + 0x1a8) + 8))) & 0x7ffff | 0xff400000;
    iVar1 = *(int *)(iVar9 + 0x1a8);
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)((int)this + 0x50);
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)((int)this + 0x70);
    *(undefined4 *)(iVar1 + 0x60) = 0;
    (*(int *)(gen_frame + 0x30)) = iVar9;
    *((undefined4 *)GEN_TOP((*(int *)(iVar9 + 0x1a8) + 0x4c))) = *(undefined4 *)((int)this + 0x90);
    F_005786b0(this,&(*(uint *)(gen_frame + 0xc)));
    (*(uint *)(gen_frame + 0x2c)) = 0;
    (*(int *)(gen_frame + 0x54)) = *(int *)((int)this + 0x250) + *(int *)((int)this + 0x294);
    (*(uint *)(gen_frame + 0x50)) = *(uint *)((int)this + 0x24c);
    if ((*(uint *)(gen_frame + 0x24)) != 0) {
      do {
        puVar8 = *(uint * PTR32 *)((*(int *)(gen_frame + 0x20)) + 4 + (*(uint *)(gen_frame + 0x2c)) * 8);
        if (puVar8 != (uint *)0x0) {
          (*(int * PTR32 *)(gen_frame + 0x3c)) = (int *)(*puVar8 & 0xf0);
          if (((char)param_1 != '\0') && (*puVar8 == 0x22)) {
            (*(int * PTR32 *)(gen_frame + 0x3c)) = (int *)0x10;
          }
          (*(uint * PTR32 *)(gen_frame + 0x58)) = (uint *)0x0;
          if ((*(int * PTR32 *)(gen_frame + 0x3c)) != (int *)0x0) {
            (*(uint * PTR32 *)(gen_frame + 0x58)) = puVar8;
            if ((((((*(int * PTR32 *)(gen_frame + 0x44)) != (*(int * PTR32 *)(gen_frame + 0x3c))) ||
                  (bVar4 = F_004d48c0(puVar8 + 2,&(*(uint *)(gen_frame + 0xc))), bVar4 != 0)) ||
                 (uVar6 = puVar8[8], (uVar6 & 0xf) != (*(uint *)(gen_frame + 0x38)))) ||
                (((uVar6 >> 4 & 0xff) != (*(uint *)(gen_frame + 0x5c)) || ((uVar6 >> 0xc & 0xff) != (*(uint *)(gen_frame + 0x34)))))) ||
               (((byte)(uVar6 >> 0x14) & 1) != (*(byte *)(gen_frame + 0x6b)))) {
              F_00578260((*(int * PTR32 *)(gen_frame + 0x44)),(int)psVar5 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x48))) >> 1,(*(uint *)(gen_frame + 0x64)),
                           (int)(*(short * PTR32 *)(gen_frame + 0x48)) - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x60))) >> 1);
              (*(int * PTR32 *)(gen_frame + 0x44)) = (*(int * PTR32 *)(gen_frame + 0x3c));
              uVar6 = puVar8[8] >> 4 & 0xff;
              (*(short * PTR32 *)(gen_frame + 0x48)) = psVar5;
              if (uVar6 != (*(uint *)(gen_frame + 0x5c))) {
                (*(uint *)(gen_frame + 0x5c)) = uVar6;
                F_00572240(this,uVar6);
                F_00572470((*(uint *)(gen_frame + 0x5c)));
              }
              uVar6 = puVar8[8] & 0xf;
              if (uVar6 != (*(uint *)(gen_frame + 0x38))) {
                iVar9 = *(int *)((*(int *)(gen_frame + 0x30)) + 0x1a8);
                *(undefined4 *)(iVar9 + 0x40) = *(undefined4 *)((int)this + uVar6 * 4 + 0x50);
                *(undefined4 *)(iVar9 + 0x60) = 0;
                *(undefined4 *)(iVar9 + 0x44) = *(undefined4 *)((int)this + uVar6 * 4 + 0x70);
                *(undefined4 *)(iVar9 + 0x60) = 0;
                *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x30)) + 0x1a8) + 0x4c))) =
                     *((undefined4 *)GEN_TOP(((int)this + (int)(&REFG(undefined * PTR32, 0x10a0c2c))[uVar6] * 4 + 0x90)));
                (*(uint *)(gen_frame + 0x38)) = uVar6;
                (*(int *)(gen_frame + 0x54)) = *((int *)GEN_TOP(((int)this + (int)((&REFG(undefined * PTR32, 0x10a0c2c))[uVar6] + 0x25) * 0x10))) +
                           *(int *)((int)this + 0x294);
                (*(uint *)(gen_frame + 0x50)) = *((uint *)GEN_TOP(((int)this + (int)(&REFG(undefined * PTR32, 0x10a0c2c))[uVar6] * 0x10 + 0x24c)));
              }
              if (((((puVar8[2] ^ (*(uint *)(gen_frame + 0xc))) & 0x7ffffff) != 0) || (puVar8[3] != (*(uint *)(gen_frame + 0x10)))) ||
                 ((((puVar8[4] ^ (*(uint *)(gen_frame + 0x14))) & 0xfffffff) != 0 ||
                  ((((puVar8[5] ^ (*(uint *)(gen_frame + 0x18))) & 0x1ff) != 0 ||
                   (((byte)(puVar8[8] >> 0x14) & 1) != (*(byte *)(gen_frame + 0x6b)))))))) {
                bVar4 = (byte)(puVar8[8] >> 0x14) & 1;
                (*(byte *)(gen_frame + 0x6b)) = bVar4;
                *(byte *)((int)this + 0x4381) = bVar4;
                F_004d41c0(&(*(uint *)(gen_frame + 0xc)),puVar8 + 2);
                F_005786b0(this,&(*(uint *)(gen_frame + 0xc)));
              }
              uVar6 = puVar8[8] >> 0xc & 0xff;
              if (uVar6 != (*(uint *)(gen_frame + 0x34))) {
                (*(uint *)(gen_frame + 0x34)) = uVar6;
              }
            }
            uVar6 = (ushort)puVar8[1] - 1;
            if (uVar6 == 0) {
              (*(uint *)(gen_frame + 0x28)) = uVar6;
              if (puVar8[0xf] != 0) {
                (*(int * PTR32 *)(gen_frame + 0x3c)) = (int *)((int)this + 0x230);
                (*(uint * PTR32 *)(gen_frame + 0x40)) = puVar8 + 0xc;
                iVar9 = (ushort)puVar8[1] + 3;
                uVar6 = 0;
                do {
                  if (uVar6 < 4) {
                    iVar9 = *(int *)((*(int *)(gen_frame + 0x30)) + 0x1a8);
                    *(uint *)(iVar9 + 0x2a8 + *(*(int * PTR32 *)(gen_frame + 0x3c)) * 8) = (*(uint * PTR32 *)(gen_frame + 0x40))[-3];
                    *(uint *)(iVar9 + 0x2ac + *(*(int * PTR32 *)(gen_frame + 0x3c)) * 8) = *(*(uint * PTR32 *)(gen_frame + 0x40)) & 0xfffffff;
                    iVar9 = 4;
                  }
                  (*(uint * PTR32 *)(gen_frame + 0x40)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x40)) + iVar9);
                  (*(int * PTR32 *)(gen_frame + 0x3c)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x3c)) + iVar9);
                  uVar6 = uVar6 + 1;
                  (*(uint *)(gen_frame + 0x28)) = uVar6;
                } while (uVar6 < puVar8[0xf]);
              }
              F_00572550(this,puVar8 + 0x10);
            }
          }
          switch((unsigned int)(uintptr_t)(*puVar8)) {
          case 1: ;
            if ((short)puVar8[1] == 2) {
              F_00578260((*(int * PTR32 *)(gen_frame + 0x44)),(int)psVar5 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x48))) >> 1,(*(uint *)(gen_frame + 0x64)),
                           (int)(*(short * PTR32 *)(gen_frame + 0x48)) - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x60))) >> 1);
              bVar11 = puVar8[2] != 0;
              (*(short * PTR32 *)(gen_frame + 0x48)) = psVar5;
              (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1c)) + 0)) = bVar11;
              (*(undefined4 *)(gen_frame + 0x1c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1c)), 1, 3),bVar11);
              if (bVar11) {
                uVar6 = (*(uint *)(gen_frame + 0x5c)) & 0xffffff0f;
                (*(uint *)(gen_frame + 0x5c)) = uVar6;
                F_00572470(uVar6);
              }
              F_00578480(this,(*(undefined4 *)(gen_frame + 0x1c)),puVar8[3],puVar8 + 4);
            }
            break;
          case 2: ;
            F_00578260((*(int * PTR32 *)(gen_frame + 0x44)),(int)psVar5 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x48))) >> 1,(*(uint *)(gen_frame + 0x64)),
                         (int)(*(short * PTR32 *)(gen_frame + 0x48)) - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x60))) >> 1);
            (*(short * PTR32 *)(gen_frame + 0x48)) = psVar5;
            if (puVar8[2] == 0) {
              F_00578410(this);
            }
            else {
              uVar6 = (*(uint *)(gen_frame + 0x5c)) & 0xffffff0f;
              (*(uint *)(gen_frame + 0x5c)) = uVar6;
              F_00572470(uVar6);
              F_00578350(this,puVar8 + 3);
            }
            break;
          case 0x10: ;
            uVar6 = ((*(uint * PTR32 *)(gen_frame + 0x58))[7] - (*(int *)(gen_frame + 0x54))) / (*(uint *)(gen_frame + 0x50)) & 0xffff;
            uVar10 = (*(uint * PTR32 *)(gen_frame + 0x58))[6];
            if (((int)psVar5 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x60))) >> 1) + uVar10 <= (*(uint *)(gen_frame + 0x4c))) {
              uVar7 = 0;
              if (uVar10 != 0) {
                do {
                  psVar5[uVar7] = (short)uVar6;
                  uVar7 = uVar7 + 1;
                  uVar6 = uVar6 + 1;
                } while (uVar7 < uVar10);
              }
LAB_005caf2f: ;
              psVar5 = psVar5 + uVar10;
              uVar6 = uVar6 & 0xffff;
LAB_005caf35: ;
              (*(uint *)(gen_frame + 0x28)) = uVar6;
              puVar8 = &(*(uint *)(gen_frame + 0x64));
              if ((*(uint *)(gen_frame + 0x64)) <= uVar6) {
                puVar8 = &(*(uint *)(gen_frame + 0x28));
              }
              (*(uint *)(gen_frame + 0x64)) = *puVar8;
            }
            break;
          case 0x11: ;
            uVar6 = (*(uint * PTR32 *)(gen_frame + 0x58))[6];
            uVar10 = ((*(uint * PTR32 *)(gen_frame + 0x58))[7] - (*(int *)(gen_frame + 0x54))) / (*(uint *)(gen_frame + 0x50)) + 1 & 0xffff;
            if (((int)psVar5 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x60))) >> 1) + uVar6 * 2 <= (*(uint *)(gen_frame + 0x4c))) {
              if (1 < uVar6) {
                iVar9 = uVar6 - 1;
                do {
                  psVar5[1] = (short)uVar10;
                  *psVar5 = (short)uVar10 + -1;
                  uVar10 = uVar10 + 1;
                  psVar5 = psVar5 + 2;
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
LAB_005caf91: ;
              (*(uint *)(gen_frame + 0x28)) = uVar10 & 0xffff;
              puVar8 = &(*(uint *)(gen_frame + 0x64));
              if ((*(uint *)(gen_frame + 0x64)) <= (uVar10 & 0xffff)) {
                puVar8 = &(*(uint *)(gen_frame + 0x28));
              }
              (*(uint *)(gen_frame + 0x64)) = *puVar8;
            }
            break;
          case 0x20: ;
            uVar6 = ((*(uint * PTR32 *)(gen_frame + 0x58))[7] - (*(int *)(gen_frame + 0x54))) / (*(uint *)(gen_frame + 0x50)) & 0xffff;
            uVar10 = (*(uint * PTR32 *)(gen_frame + 0x58))[6];
            if (((int)psVar5 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x60))) >> 1) + uVar10 <= (*(uint *)(gen_frame + 0x4c))) {
              uVar7 = 0;
              if (uVar10 != 0) {
                do {
                  psVar5[uVar7] = (short)uVar6;
                  uVar7 = uVar7 + 1;
                  uVar6 = uVar6 + 1;
                } while (uVar7 < uVar10);
              }
              goto LAB_005caf2f;
            }
            break;
          case 0x21: ;
            uVar6 = (*(uint * PTR32 *)(gen_frame + 0x58))[6];
            (*(uint *)(gen_frame + 0x28)) = uVar6;
            uVar10 = ((*(uint * PTR32 *)(gen_frame + 0x58))[7] - (*(int *)(gen_frame + 0x54))) / (*(uint *)(gen_frame + 0x50)) + 2 & 0xffff;
            if (((int)psVar5 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x60))) >> 1) + uVar6 * 3 <= (*(uint *)(gen_frame + 0x4c))) {
              uVar7 = 2;
              if (2 < uVar6) {
                do {
                  uVar3 = (ushort)uVar7 & 1;
                  sVar2 = (short)uVar10;
                  *psVar5 = (uVar3 - 2) + sVar2;
                  psVar5[2] = sVar2;
                  psVar5[1] = (sVar2 - uVar3) + -1;
                  uVar7 = uVar7 + 1;
                  uVar10 = uVar10 + 1;
                  psVar5 = psVar5 + 3;
                } while (uVar7 < uVar6);
              }
              goto LAB_005caf91;
            }
            break;
          case 0x22: ;
            uVar10 = (*(uint * PTR32 *)(gen_frame + 0x58))[6] >> 2;
            iVar9 = (int)psVar5 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x60))) >> 1;
            uVar6 = ((*(uint * PTR32 *)(gen_frame + 0x58))[7] - (*(int *)(gen_frame + 0x54))) / (*(uint *)(gen_frame + 0x50)) & 0xffff;
            if ((char)param_1 == '\0') {
              if (iVar9 + uVar10 * 6 <= (*(uint *)(gen_frame + 0x4c))) {
                if (uVar10 == 0) goto LAB_005cb121;
                uVar7 = uVar6 + 2 & 0xffff;
                do {
                  sVar2 = (short)uVar7;
                  psVar5[1] = sVar2 + -1;
                  *psVar5 = (short)uVar6;
                  psVar5[2] = sVar2;
                  psVar5[3] = (short)uVar6;
                  psVar5[4] = sVar2;
                  psVar5[5] = sVar2 + 1;
                  uVar6 = uVar6 + 4;
                  uVar7 = uVar7 + 4;
                  psVar5 = psVar5 + 6;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
                uVar6 = uVar6 & 0xffff;
                goto LAB_005caf35;
              }
            }
            else if (iVar9 + uVar10 * 8 <= (*(uint *)(gen_frame + 0x4c))) {
              if (uVar10 != 0) {
                uVar7 = uVar6 + 2 & 0xffff;
                do {
                  sVar2 = (short)uVar7;
                  psVar5[1] = sVar2 + -1;
                  psVar5[2] = sVar2 + -1;
                  *psVar5 = (short)uVar6;
                  psVar5[3] = sVar2;
                  psVar5[4] = sVar2;
                  psVar5[7] = (short)uVar6;
                  psVar5[5] = sVar2 + 1;
                  psVar5[6] = sVar2 + 1;
                  uVar6 = uVar6 + 4;
                  uVar7 = uVar7 + 4;
                  psVar5 = psVar5 + 8;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
LAB_005cb121: ;
              uVar6 = uVar6 & 0xffff;
              goto LAB_005caf35;
            }
            break;
          case 0x23: ;
            uVar10 = (*(uint * PTR32 *)(gen_frame + 0x58))[6] >> 1;
            uVar6 = ((*(uint * PTR32 *)(gen_frame + 0x58))[7] - (*(int *)(gen_frame + 0x54))) / (*(uint *)(gen_frame + 0x50)) & 0xffff;
            if (((int)psVar5 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x60))) >> 1) + uVar10 * 6 <= (*(uint *)(gen_frame + 0x4c))) {
              if (1 < uVar10) {
                uVar7 = uVar6 + 3 & 0xffff;
                iVar9 = uVar10 - 1;
                do {
                  sVar2 = (short)uVar7;
                  psVar5[1] = sVar2 + -2;
                  *psVar5 = (short)uVar6;
                  psVar5[2] = sVar2;
                  psVar5[3] = (short)uVar6;
                  psVar5[4] = sVar2;
                  psVar5[5] = sVar2 + -1;
                  uVar6 = uVar6 + 2;
                  uVar7 = uVar7 + 2;
                  psVar5 = psVar5 + 6;
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
              (*(uint *)(gen_frame + 0x28)) = uVar6 & 0xffff;
              puVar8 = &(*(uint *)(gen_frame + 0x64));
              if ((*(uint *)(gen_frame + 0x64)) <= (uVar6 & 0xffff)) {
                puVar8 = &(*(uint *)(gen_frame + 0x28));
              }
              (*(uint *)(gen_frame + 0x64)) = *puVar8;
            }
          }
        }
        uVar6 = (*(uint *)(gen_frame + 0x2c)) + 1;
        (*(uint *)(gen_frame + 0x2c)) = uVar6;
      } while (uVar6 < (*(uint *)(gen_frame + 0x24)));
    }
    F_00578260((*(int * PTR32 *)(gen_frame + 0x44)),(int)psVar5 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x48))) >> 1,(*(uint *)(gen_frame + 0x64)),
                 (int)(*(short * PTR32 *)(gen_frame + 0x48)) - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x60))) >> 1);
    uVar6 = F_004d6ae0(*(undefined * PTR32 *)((int)this + 0xa0));
  }
  return uVar6;
}

/* ref: FUN_005cb230 */
byte F_005cb230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cb230u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *param_1 != *param_2;
}

/* ref: FUN_005cb250 */
uint F_005cb250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5cb250u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 == param_3) {
    *param_1 = (int)param_2;
    return (uint)param_1;
  }
  do {
    if ((param_4 == *(int *)(piVar1[2] + 0x10)) && (param_5 == *(int *)(piVar1[2] + 0x14))) break;
    piVar1 = (int *)*piVar1;
  } while (piVar1 != param_3);
  *param_1 = (int)piVar1;
  return (uint)param_1;
}

/* ref: FUN_005cb290 */
uint F_005cb290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5cb290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 * puVar1;
  
  for (puVar1 = param_2; (puVar1 != param_3 && (param_4 != puVar1[2]));
      puVar1 = (undefined4 *)*puVar1) {
  }
  *param_1 = puVar1;
  return (uint)param_1;
}

/* ref: FUN_005cb2c0 */
uint F_005cb2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5cb2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (piVar1[2] == *param_4) break;
      piVar1 = (int *)*piVar1;
    } while (piVar1 != param_3);
  }
  *param_1 = (int)piVar1;
  return (uint)param_1;
}

/* ref: FUN_005cb2f0 */
unsigned int F_005cb2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cb2f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_005c7460(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_005cb310 */
unsigned int F_005cb310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cb310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 local_8;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = local_8;
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_005cb340 */
uint F_005cb340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x5cb340u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_005c7500(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_005cb3c0 */
uint F_005cb3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x5cb3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_005c75b0(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_005cb440 */
uint F_005cb440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x5cb440u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_005c7660(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_005cb4c0 */
uint F_005cb4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x5cb4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_005c7710(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_005cb560 */
uint F_005cb560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5cb560u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_005c6ba0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_005be590(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_005c6ba0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x18,400);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_005cb640 */
uint F_005cb640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5cb640u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(int *)((*(int *)&gen_args[2]) + 0xc) < (int)puVar2[3];
      }
      else {
        bVar3 = *(int *)((*(int *)&gen_args[2]) + 0xc) <= (int)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_005c6dd0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_005be530(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((int)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(int *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_005c6dd0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x18,400);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_005cb720 */
uint F_005cb720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5cb720u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x19) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x19) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_005c7000((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_005be4d0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_005c7000((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x1c,400);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_005cb800 */
uint F_005cb800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cb800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_005cb820 */
uint F_005cb820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5cb820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_2;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_3;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_2 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  *param_1 = *(undefined4 *)(param_2 + 4);
  return (uint)param_1;
}

/* ref: FUN_005cb8a0 */
uint F_005cb8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5cb8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  F_005c78d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_1);
  return param_1;
}

/* ref: FUN_005cb8e0 */
uint F_005cb8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5cb8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  F_005c7950(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_1);
  return param_1;
}

/* ref: FUN_005cb920 */
unsigned int F_005cb920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5cb920u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc + (int)puVar1);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10 + (int)puVar1);
      }
      puVar1 = puVar1 + 5;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cb970 */
unsigned int F_005cb970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5cb970u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
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
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return 0;
}

/* ref: FUN_005cb9e0 */
unsigned int F_005cb9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cb9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_005cba10 */
unsigned int F_005cba10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cba10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cba40 */
unsigned int F_005cba40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cba40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_005cba70 */
unsigned int F_005cba70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cba70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbaa0 */
unsigned int F_005cbaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cbaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_005cbad0 */
unsigned int F_005cbad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbad0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbb00 */
unsigned int F_005cbb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cbb00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_005cbb30 */
unsigned int F_005cbb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbb30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbb70 */
unsigned int F_005cbb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cbb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0xb0)) {
    F_0042c880((undefined *)((int)this + 0x54));
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_005cbba0 */
uint F_005cbba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbba0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (4 < (int)(param_2 - param_1 & 0xfffffffc)) {
    uVar1 = F_005c7c90(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_005cbbd0 */
uint F_005cbbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbbd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005c7d60(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_005cbbf0 */
unsigned int F_005cbbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbbf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_005cbc10 */
uint F_005cbc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbc10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
  }
  return (uint)param_2;
}

/* ref: FUN_005cbc30 */
unsigned int F_005cbc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbc30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbc60 */
unsigned int F_005cbc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbc60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbc90 */
unsigned int F_005cbc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbc90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbcc0 */
unsigned int F_005cbcc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbcc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbcf0 */
unsigned int F_005cbcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbcf0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbd20 */
unsigned int F_005cbd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbd20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbd50 */
unsigned int F_005cbd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbd50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbd80 */
unsigned int F_005cbd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbd80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbdb0 */
unsigned int F_005cbdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbdb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbde0 */
unsigned int F_005cbde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbde0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbe10 */
unsigned int F_005cbe10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbe10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbe40 */
uint F_005cbe40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5cbe40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * this;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 0x2a;
    this = param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,puVar2 + -0x2a);
        F_0042cbc0((undefined *)((int)this + 0x54),puVar2 + -0x15);
        *(undefined4 *)((int)this + 0xa8) = *puVar2;
        *(undefined4 *)((int)this + 0xac) = puVar2[1];
      }
      puVar1 = puVar2 + 2;
      this = (undefined *)((int)this + 0xb0);
      puVar2 = puVar2 + 0x2c;
    } while (puVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_005cbec0 */
unsigned int F_005cbec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbec0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cbef0 */
uint F_005cbef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cbef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_005cbf10 */
uint F_005cbf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cbf10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 - param_1 >> 2;
}

/* ref: FUN_005cbf20 */
unsigned int F_005cbf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cbf20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_005c8080(param_1,param_2,param_3,0,0);
  return 0;
}

/* ref: FUN_005cbf40 */
unsigned int F_005cbf40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5cbf40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    F_005c8120(param_1,iVar1,iVar2 * 8 + param_1,param_4);
    F_005c8120(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -4;
    F_005c8120(param_3 + iVar2 * -8,iVar3,param_3,param_4);
    F_005c8120(iVar1,param_2,iVar3,param_4);
    return 0;
  }
  F_005c8120(param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_005cbff0 */
unsigned int F_005cbff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5cbff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_4;
  if (param_2 != param_4) {
    do {
      uVar4 = uVar4 - 1;
      if (param_2 == uVar4) {
        return 0;
      }
      uVar6 = uVar4 >> 2;
      if (*(uint *)(param_3 + 8) <= uVar6) {
        uVar6 = uVar6 - *(uint *)(param_3 + 8);
      }
      uVar5 = param_2 >> 2;
      if (*(uint *)(param_1 + 8) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(param_1 + 8);
      }
      puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_3 + 4) + uVar6 * 4))) + (uVar4 & 3) * 4)));
      puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + uVar5 * 4))) + (param_2 & 3) * 4)));
      uVar3 = *puVar2;
      *puVar2 = *puVar1;
      *puVar1 = uVar3;
      param_2 = param_2 + 1;
    } while (param_2 != uVar4);
  }
  return 0;
}

/* ref: FUN_005cc060 */
uint F_005cc060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5cc060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  return param_6 - param_3;
}

/* ref: FUN_005cc070 */
unsigned int F_005cc070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5cc070u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined1 uVar1;
  int iVar2;
  undefined1 * puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_4;
  if (param_2 != param_4) {
    do {
      uVar4 = uVar4 - 1;
      if (param_2 == uVar4) {
        return 0;
      }
      uVar6 = uVar4 >> 4;
      if (*(uint *)(param_3 + 8) <= uVar6) {
        uVar6 = uVar6 - *(uint *)(param_3 + 8);
      }
      uVar5 = param_2 >> 4;
      if (*(uint *)(param_1 + 8) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(param_1 + 8);
      }
      puVar3 = ((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_3 + 4) + uVar6 * 4))) + (uVar4 & 0xf))));
      iVar2 = *((int *)GEN_TOP((*(int *)(param_1 + 4) + uVar5 * 4)));
      uVar1 = *((undefined1 *)GEN_TOP((iVar2 + (param_2 & 0xf))));
      *((undefined1 *)GEN_TOP((iVar2 + (param_2 & 0xf)))) = *puVar3;
      *puVar3 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != uVar4);
  }
  return 0;
}

/* ref: FUN_005cc0e0 */
uint F_005cc0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5cc0e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  return param_6 - param_3;
}

/* ref: FUN_005cc0f0 */
unsigned int F_005cc0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5cc0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined4 * puVar9;
  int iVar10;
  
  iVar4 = (int)param_3 - (int)((int)(uintptr_t)param_1) >> 2;
  iVar10 = param_2 - (int)((int)(uintptr_t)param_1) >> 2;
  iVar8 = iVar10;
  iVar3 = iVar4;
  while (iVar2 = iVar8, iVar2 != 0) {
    iVar8 = iVar3 % iVar2;
    iVar3 = iVar2;
  }
  if ((iVar3 < iVar4) && (0 < iVar3)) {
    puVar7 = param_1 + iVar3;
    do {
      puVar6 = puVar7 + iVar10;
      puVar9 = puVar7;
      if (puVar7 + iVar10 == param_3) {
        puVar6 = param_1;
      }
      do {
        puVar5 = puVar6;
        uVar1 = *puVar9;
        *puVar9 = *puVar5;
        *puVar5 = uVar1;
        iVar8 = (int)param_3 - (int)((int)(uintptr_t)puVar5) >> 2;
        if (iVar10 < iVar8) {
          puVar6 = puVar5 + iVar10;
        }
        else {
          puVar6 = param_1 + (iVar10 - iVar8);
        }
        puVar9 = puVar5;
      } while (puVar6 != puVar7);
      iVar3 = iVar3 + -1;
      puVar7 = puVar7 + -1;
    } while (0 < iVar3);
  }
  return 0;
}

/* ref: FUN_005cc190 */
uint F_005cc190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cc190u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((*(int *)&gen_args[1]) + -4);
  *(undefined4 *)((*(int *)&gen_args[1]) + -4) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_005c3eb0((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 + -4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_005cc1d0 */
unsigned int F_005cc1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5cc1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  iVar3 = (*(int *)&gen_args[3]) - (*(uint *)&gen_args[1]);
  iVar10 = (*(uint *)&gen_args[5]) - (*(uint *)&gen_args[1]);
  (*(int *)(gen_frame + 0x38)) = iVar3;
  (*(int *)(gen_frame + 0x34)) = iVar10;
  if ((*(uint *)&gen_args[5]) < (*(uint *)&gen_args[1])) {
  }
  iVar4 = iVar10;
  iVar6 = iVar10;
  iVar8 = iVar3;
  if (iVar3 != 0) {
    do {
      iVar6 = iVar8;
      iVar8 = iVar4 % iVar6;
      iVar4 = iVar6;
    } while (iVar8 != 0);
    (*(int *)(gen_frame + 0x34)) = iVar6;
  }
  if (iVar6 < iVar10) {
    while (0 < iVar6) {
      uVar12 = (*(uint *)&gen_args[1]) + iVar6;
      (*(int *)(gen_frame + 0x24)) = (*(int *)&gen_args[0]);
      if (iVar3 + uVar12 == (*(uint *)&gen_args[5])) {
        piVar5 = &(*(int *)&gen_args[0]);
      }
      else {
        (*(uint *)(gen_frame + 0x20)) = iVar3 + uVar12;
        (*(uint *)(gen_frame + 0x30)) = uVar12;
        (*(int *)(gen_frame + 0x1c)) = (*(int *)&gen_args[0]);
        piVar5 = &(*(int *)(gen_frame + 0x1c));
      }
      iVar10 = *piVar5;
      uVar13 = piVar5[1];
      uVar11 = uVar12;
      do {
        uVar7 = uVar13;
        uVar13 = uVar7 >> 2;
        if (*(uint *)(iVar10 + 8) <= uVar13) {
          uVar13 = uVar13 - *(uint *)(iVar10 + 8);
        }
        (*(uint *)(gen_frame + 0x30)) = uVar11 & 3;
        uVar9 = uVar11 >> 2;
        if (*(uint *)((*(int *)(gen_frame + 0x24)) + 8) <= uVar9) {
          uVar9 = uVar9 - *(uint *)((*(int *)(gen_frame + 0x24)) + 8);
        }
        iVar4 = *((int *)GEN_TOP((*(int *)(iVar10 + 4) + uVar13 * 4)));
        puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x24)) + 4) + uVar9 * 4))) + (uVar11 & 3) * 4)));
        uVar2 = *puVar1;
        *puVar1 = *((undefined4 *)GEN_TOP((iVar4 + (uVar7 & 3) * 4)));
        *((undefined4 *)GEN_TOP((iVar4 + (uVar7 & 3) * 4))) = uVar2;
        (*(int *)(gen_frame + 0x24)) = iVar10;
        if (iVar3 < (int)((*(uint *)&gen_args[5]) - uVar7)) {
          (*(uint *)(gen_frame + 0x30)) = uVar7;
          (*(int *)(gen_frame + 0x14)) = iVar10;
          (*(int *)(gen_frame + 0x18)) = uVar7 + iVar3;
          piVar5 = &(*(int *)(gen_frame + 0x14));
        }
        else {
          (*(int *)(gen_frame + 0xc)) = (*(int *)&gen_args[0]);
          (*(uint *)(gen_frame + 0x30)) = (*(uint *)&gen_args[1]);
          (*(int *)(gen_frame + 0x10)) = ((*(uint *)&gen_args[1]) - ((*(uint *)&gen_args[5]) - uVar7)) + iVar3;
          piVar5 = &(*(int *)(gen_frame + 0xc));
        }
        iVar10 = *piVar5;
        uVar13 = piVar5[1];
        uVar11 = uVar7;
      } while (piVar5[1] != uVar12);
      iVar6 = iVar6 + -1;
      (*(int *)(gen_frame + 0x34)) = iVar6;
    }
  }
  return 0;
}

/* ref: FUN_005cc300 */
unsigned int F_005cc300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5cc300u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 * puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  iVar2 = param_4 - param_2;
  iVar12 = param_6 - param_2;
  (*(int *)(gen_frame + 0x38)) = iVar2;
  (*(int *)(gen_frame + 0x34)) = iVar12;
  if (param_6 < param_2) {
  }
  iVar3 = iVar12;
  iVar6 = iVar12;
  iVar7 = iVar2;
  if (iVar2 != 0) {
    do {
      iVar6 = iVar7;
      iVar7 = iVar3 % iVar6;
      iVar3 = iVar6;
    } while (iVar7 != 0);
    (*(int *)(gen_frame + 0x34)) = iVar6;
  }
  if (iVar6 < iVar12) {
    while (0 < iVar6) {
      uVar10 = param_2 + iVar6;
      uVar4 = iVar2 + uVar10;
      (*(int *)(gen_frame + 0x24)) = param_1;
      uVar11 = uVar10;
      uVar13 = param_2;
      iVar12 = param_1;
      if (uVar4 != param_6) {
        (*(uint *)(gen_frame + 0x20)) = uVar4;
        (*(int *)(gen_frame + 0x1c)) = param_1;
        (*(uint *)(gen_frame + 0x30)) = uVar10;
        uVar13 = uVar4;
      }
      do {
        uVar4 = uVar13 >> 4;
        if (*(uint *)(iVar12 + 8) <= uVar4) {
          uVar4 = uVar4 - *(uint *)(iVar12 + 8);
        }
        (*(uint *)(gen_frame + 0x30)) = uVar11 & 0xf;
        uVar8 = uVar11 >> 4;
        if (*(uint *)((*(int *)(gen_frame + 0x24)) + 8) <= uVar8) {
          uVar8 = uVar8 - *(uint *)((*(int *)(gen_frame + 0x24)) + 8);
        }
        iVar3 = *((int *)GEN_TOP((*(int *)(iVar12 + 4) + uVar4 * 4)));
        puVar9 = ((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x24)) + 4) + uVar8 * 4))) + (uVar11 & 0xf))));
        (*(int *)(gen_frame + 0x24)) = iVar12;
        uVar1 = *puVar9;
        *puVar9 = *((undefined1 *)GEN_TOP((iVar3 + (uVar13 & 0xf))));
        *((undefined1 *)GEN_TOP((iVar3 + (uVar13 & 0xf)))) = uVar1;
        (*(uint *)(gen_frame + 0x28)) = uVar13;
        if (iVar2 < (int)(param_6 - uVar13)) {
          (*(uint *)(gen_frame + 0x30)) = uVar13;
          (*(int *)(gen_frame + 0x14)) = iVar12;
          (*(int *)(gen_frame + 0x18)) = uVar13 + iVar2;
          piVar5 = &(*(int *)(gen_frame + 0x14));
        }
        else {
          (*(int *)(gen_frame + 0xc)) = param_1;
          (*(uint *)(gen_frame + 0x30)) = param_2;
          (*(int *)(gen_frame + 0x10)) = (param_2 - (param_6 - uVar13)) + iVar2;
          piVar5 = &(*(int *)(gen_frame + 0xc));
        }
        iVar12 = *piVar5;
        uVar11 = uVar13;
        uVar13 = piVar5[1];
      } while (piVar5[1] != uVar10);
      iVar6 = iVar6 + -1;
      (*(int *)(gen_frame + 0x34)) = iVar6;
    }
  }
  return 0;
}

/* ref: FUN_005cc430 */
unsigned int F_005cc430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cc430u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cc460 */
uint F_005cc460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cc460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if ((*(uint *)((int)this + 0x10) != param_1) ||
     (uVar1 = param_1, *(int *)((int)this + 0x24) != param_2)) {
    *(uint *)((int)this + 0x10) = param_1;
    *(int *)((int)this + 0x24) = param_2;
    uVar1 = F_00577690((int)this + 0x14,param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_005cc490 */
uint F_005cc490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5cc490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_005bfe10(this,param_1,0x24,0);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_005c83b0(this,uVar1,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_005cc4d0 */
uint F_005cc4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5cc4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  
  if (2 < param_1) {
    return 0;
  }
  uVar1 = F_005bfe10(this,param_2,0x50,1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = F_005c83b0(this,uVar1,param_2,param_3,param_4);
  *(uint *)(uVar1 + 0x3c) = param_1;
  if (param_1 != 0) {
    puVar4 = (uint *)(uVar1 + 0x30);
    puVar3 = (uint *)((int)this + 0x88);
    uVar5 = param_1;
    do {
      puVar4[-3] = puVar3[-3];
      *puVar4 = *puVar3 & 0xfffffff;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *(undefined4 *)(uVar1 + 0x40) = *(undefined4 *)((int)this + 0x94);
  *(undefined4 *)(uVar1 + 0x44) = *(undefined4 *)((int)this + 0x98);
  *(undefined4 *)(uVar1 + 0x48) = *(undefined4 *)((int)this + 0x9c);
  *(undefined4 *)(uVar1 + 0x4c) = *(undefined4 *)((int)this + 0xa0);
  return uVar2;
}

/* ref: FUN_005cc580 */
uint F_005cc580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cc580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  *(undefined1 *)(in_ecx + 5) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_005cc5b0 */
uint F_005cc5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cc5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005cc5f0 */
uint F_005cc5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cc5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005c4fe0((undefined *)((int)this + 0xf4));
  uVar1 = F_005c4fe0((undefined *)((int)this + 0x10c));
  return uVar1;
}

/* ref: FUN_005cc620 */
uint F_005cc620(unsigned int gen_a0)
{
  GEN_ENTER(0x5cc620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0db4));
  puVar1 = (undefined4 *)((int)this + 0x5c);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,400);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x74);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,400);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  puVar1 = (undefined4 *)((int)this + 0x8c);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,400);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  return (uint)this;
}

/* ref: Component::GUI2::AtkFontAnalyzerBase::vf0 */
byte F_005cc6e0(void)
{
  GEN_ENTER(0x5cc6e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005cc6f0 */
uint F_005cc6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cc6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0db4));
  F_005c5100((undefined *)((int)this + 0x8c));
  F_00429760(*(undefined4 *)((int)this + 0x8c),8,400);
  *(undefined4 *)((int)this + 0x8c) = 0;
  F_005c4fe0((undefined *)((int)this + 0x74));
  F_00429760(*(undefined4 *)((int)this + 0x74),8,400);
  *(undefined4 *)((int)this + 0x74) = 0;
  F_005c4fe0((undefined *)((int)this + 0x5c));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x5c),8,400);
  *(undefined4 *)((int)this + 0x5c) = 0;
  return (uint)uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerBase::vf7 */
uint F_005cc770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cc770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005cc6f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005cc7a0 */
uint F_005cc7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cc7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005cc620(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  return (uint)this;
}

/* ref: Component::GUI2::AtkFontAnalyzerCount::vf2 */
unsigned int F_005cc7c0(void)
{
  GEN_ENTER(0x5cc7c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerCount::vf7 */
uint F_005cc7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cc7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  F_005cc6f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005cc810 */
uint F_005cc810(unsigned int gen_a0)
{
  GEN_ENTER(0x5cc810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005cc620(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0e14));
  return (uint)this;
}

/* ref: Component::GUI2::AtkFontAnalyzerDrawSize::vf7 */
uint F_005cc840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cc840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  F_005cc6f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005cc870 */
uint F_005cc870(unsigned int gen_a0)
{
  GEN_ENTER(0x5cc870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005cc620(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0e44));
  F_005cc620((undefined *)((int)this + 0x140));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  return (uint)this;
}

/* ref: FUN_005cc8a0 */
uint F_005cc8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cc8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0e44));
  *(undefined4 *)((int)this + 0x140) = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  F_005cc6f0((undefined4 *)((int)this + 0x140));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  uVar1 = F_005cc6f0(this);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf7 */
uint F_005cc8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cc8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0e44));
  *(undefined * PTR32 * PTR32 *)(this + 0x140) = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  F_005cc6f0(this + 0x140);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  F_005cc6f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005cc910 */
uint F_005cc910(unsigned int gen_a0)
{
  GEN_ENTER(0x5cc910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005cc620(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0e74));
  return (uint)this;
}

/* ref: Component::GUI2::AtkFontAnalyzerSearchPosition::vf7 */
uint F_005cc940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cc940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  F_005cc6f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005cc970 */
uint F_005cc970(unsigned int gen_a0)
{
  GEN_ENTER(0x5cc970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005cc620(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0ea4));
  return (uint)this;
}

/* ref: Component::GUI2::AtkFontAnalyzerBuildLink::vf0 */
byte F_005cc990(void)
{
  GEN_ENTER(0x5cc990u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerBuildLink::vf2 */
unsigned int F_005cc9a0(void)
{
  GEN_ENTER(0x5cc9a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerBuildLink::vf7 */
uint F_005cc9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cc9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  F_005cc6f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005cc9f0 */
uint F_005cc9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cc9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0ed4));
  F_005cc620((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  F_005cc620((undefined *)((int)this + 0x144));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x144) = (*(undefined * PTR32 (*)[11])REFP(0x10a0e14));
  F_005cc620((undefined *)((int)this + 0x2ac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2ac) = (*(undefined * PTR32 (*)[11])REFP(0x10a0e44));
  F_005cc620((undefined *)((int)this + 0x3ec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3ec) = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  F_005cc620((undefined *)((int)this + 0x654));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x654) = (*(undefined * PTR32 (*)[11])REFP(0x10a0e74));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7d4) = (*(undefined * PTR32 (*)[6])REFP(0x10a098c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7e4) = (*(undefined * PTR32 (*)[6])REFP(0x10a09a8));
  F_005cc620((undefined *)((int)this + 0x7f8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7f8) = (*(undefined * PTR32 (*)[11])REFP(0x10a0ea4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x970) = (*(undefined * PTR32 (*)[2])REFP(0x10a09c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x974) = (*(undefined * PTR32 (*)[2])REFP(0x10a09d0));
  return (uint)this;
}

/* ref: FUN_005ccaa0 */
uint F_005ccaa0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ccaa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0ed4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x974) = (*(undefined * PTR32 (*)[2])REFP(0x10a09c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x970) = (*(undefined * PTR32 (*)[2])REFP(0x10a09c4));
  *(undefined4 *)((int)this + 0x7f8) = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  F_005cc6f0((undefined4 *)((int)this + 0x7f8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7e4) = (*(undefined * PTR32 (*)[6])REFP(0x10a0970));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7d4) = (*(undefined * PTR32 (*)[6])REFP(0x10a0970));
  *(undefined4 *)((int)this + 0x654) = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  F_005cc6f0((undefined4 *)((int)this + 0x654));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2ac) = (*(undefined * PTR32 (*)[11])REFP(0x10a0e44));
  *(undefined4 *)((int)this + 0x3ec) = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  F_005cc6f0((undefined4 *)((int)this + 0x3ec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2ac) = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  F_005cc6f0((undefined *)((int)this + 0x2ac));
  *(undefined4 *)((int)this + 0x144) = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  F_005cc6f0((undefined4 *)((int)this + 0x144));
  *(undefined4 *)((int)this + 4) = (*(undefined * PTR32 (*)[11])REFP(0x10a0de4));
  uVar1 = F_005cc6f0((undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzer::vf0 */
uint F_005ccb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ccb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005ccaa0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005ccb70 */
uint F_005ccb70(unsigned int gen_a0)
{
  GEN_ENTER(0x5ccb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0edc));
  F_005c8d00((undefined *)((int)this + 0x1c));
  uVar1 = F_005c8c60((undefined *)((int)this + 0x10));
  return uVar1;
}

/* ref: Component::GUI2::AtkCrestManager::vf0 */
uint F_005ccb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ccb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0edc));
  F_005c8d00(this + 0x1c);
  F_005c8c60(this + 0x10);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005ccbd0 */
uint F_005ccbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ccbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_005ccc40 */
unsigned int F_005ccc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ccc40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(ushort *)(param_1 + 0x1a) + *((int *)GEN_TOP((*(int *)(param_1 + 0xc) + 4)));
    }
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        uVar1 = F_00578ee0((undefined *)(param_1 + 4),uVar3);
        if ((uVar1 == 0) ||
           (*(uint *)(uVar1 + 0x84) = *(uint *)(uVar1 + 0x84) & 0xfdffffff,
           *(ushort *)(uVar1 + 0x18) < 1000)) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(uVar1 + 0x8c);
        }
        F_005ccc40(this,uVar2);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
  }
  return 0;
}

/* ref: FUN_005cccc0 */
uint F_005cccc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cccc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005c8de0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005cccf0 */
uint F_005cccf0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cccf0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[7] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10a0ee4));
  return (uint)in_ecx;
}

/* ref: FUN_005ccd20 */
uint F_005ccd20(unsigned int gen_a0)
{
  GEN_ENTER(0x5ccd20u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[7] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10a0ef4));
  F_0042b630(in_ecx + 0x27);
  return (uint)in_ecx;
}

/* ref: FUN_005ccd60 */
uint F_005ccd60(unsigned int gen_a0)
{
  GEN_ENTER(0x5ccd60u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[7] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10a0f04));
  return (uint)in_ecx;
}

/* ref: FUN_005ccd90 */
uint F_005ccd90(unsigned int gen_a0)
{
  GEN_ENTER(0x5ccd90u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[7] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10a0f14));
  F_0042b630(in_ecx + 0x28);
  return (uint)in_ecx;
}

/* ref: FUN_005ccdd0 */
uint F_005ccdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ccdd0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[7] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10a0f24));
  return (uint)in_ecx;
}

/* ref: FUN_005cce00 */
uint F_005cce00(unsigned int gen_a0)
{
  GEN_ENTER(0x5cce00u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[7] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10a0f34));
  in_ecx[0x23] = 0;
  in_ecx[0x24] = 0;
  *(undefined1 *)(in_ecx + 0x25) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_005cce70 */
unsigned int F_005cce70(unsigned int gen_a0)
{
  GEN_ENTER(0x5cce70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return 0;
}

/* ref: FUN_005cce90 */
unsigned int F_005cce90(unsigned int gen_a0)
{
  GEN_ENTER(0x5cce90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return 0;
}

/* ref: FUN_005cceb0 */
unsigned int F_005cceb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cceb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042c880((undefined *)((int)this + 0xa0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return 0;
}

/* ref: FUN_005ccee0 */
unsigned int F_005ccee0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ccee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return 0;
}

/* ref: FUN_005ccf00 */
unsigned int F_005ccf00(unsigned int gen_a0)
{
  GEN_ENTER(0x5ccf00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return 0;
}

/* ref: FUN_005ccf20 */
unsigned int F_005ccf20(unsigned int gen_a0)
{
  GEN_ENTER(0x5ccf20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return 0;
}

/* ref: Component::GUI2::AtkComponentNode::vf0 */
uint F_005ccf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ccf40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined * pAVar4;
  undefined * pAVar5;
  int local_8;
  
  if ((param_1 & 2) != 0) {
    local_8 = *(int *)(this + -4) + -1;
    if (-1 < local_8) {
      pAVar4 = this + *(int *)(this + -4) * 0x90 + 0x80;
      do {
        piVar1 = *(int * PTR32 *)(pAVar4 + -0x90);
        pAVar5 = pAVar4 + -0x90;
        *(undefined * PTR32 * PTR32 *)(pAVar4 + -0x110) = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
        if (piVar1 != (int *)0x0) {
          iVar3 = *piVar1;
          while (iVar3 != 0) {
            iVar2 = *(int *)(iVar3 + 0x10);
            F_00406ad0(iVar3);
            iVar3 = iVar2;
          }
          *piVar1 = 0;
          piVar1 = *(int * PTR32 *)pAVar5;
          if (piVar1 != (int *)0x0) {
            iVar3 = *piVar1;
            while (iVar3 != 0) {
              iVar2 = *(int *)(iVar3 + 0x10);
              F_00406ad0(iVar3);
              iVar3 = iVar2;
            }
            *piVar1 = 0;
            F_00406ad0(piVar1);
            *(undefined4 *)pAVar5 = 0;
          }
        }
        local_8 = local_8 + -1;
        *(undefined * PTR32 * PTR32 *)(pAVar4 + -0x110) = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
        pAVar4 = pAVar5;
      } while (-1 < local_8);
    }
    if ((param_1 & 1) != 0) {
      F_00406b30(this + -4);
    }
    return (uint)(this + -4);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005cd030 */
uint F_005cd030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkUnitManager::vf17 */
uint F_005cd090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkUnitManager::vf29 */
byte F_005cd0a0(void)
{
  GEN_ENTER(0x5cd0a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkUnitManager::vf30 */
uint F_005cd0b0(void)
{
  GEN_ENTER(0x5cd0b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005cd0c0 */
uint F_005cd0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005d3270((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentBase::vf9 */
unsigned int F_005cd0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkComponentBase::vf14 */
uint F_005cd0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd0e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x68);
}

/* ref: Component::GUI2::AtkComponentBase::vf18 */
uint F_005cd0f0(void)
{
  GEN_ENTER(0x5cd0f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkComponentBase::vf11 */
uint F_005cd100(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((in_ecx != 0) && (*(int *)(in_ecx + 0x70) != 0)) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x70) + 0x84))) >> 0x1a & 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentBase::vf17 */
uint F_005cd120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cd120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  byte bVar2;
  
  uVar1 = *(uint *)(this + 0x70);
  bVar2 = F_00570d10(uVar1,param_1,param_2,0);
  return -(uint)(bVar2 != 0) & uVar1;
}

/* ref: Component::GUI2::AtkComponentButton::vf18 */
uint F_005cd150(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10c);
}

/* ref: Component::GUI2::AtkComponentButton::vf19 */
byte F_005cd160(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x84);
}

/* ref: Component::GUI2::AtkComponentButton::vf20 */
byte F_005cd170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x84) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Component::GUI2::AtkComponentButton::vf21 */
byte F_005cd180(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x86);
}

/* ref: Component::GUI2::AtkComponentCheckBox::vf23 */
uint F_005cd190(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x108);
}

/* ref: Component::GUI2::AtkComponentCheckBox::vf24 */
uint F_005cd1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd1a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x130);
}

/* ref: Component::GUI2::AtkComponentCheckBox::vf19 */
byte F_005cd1b0(void)
{
  GEN_ENTER(0x5cd1b0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Component::GUI2::AtkComponentCheckBox::vf20 */
unsigned int F_005cd1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkComponentRadioButton::vf19 */
byte F_005cd1d0(void)
{
  GEN_ENTER(0x5cd1d0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Component::GUI2::AtkComponentRadioButton::vf20 */
unsigned int F_005cd1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkComponentList::vf31 */
uint F_005cd1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd1f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xac);
}

/* ref: Component::GUI2::AtkComponentList::vf14 */
uint F_005cd200(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd200u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x90);
}

/* ref: Component::GUI2::AtkComponentList::vf30 */
uint F_005cd210(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_005623b0(this,0xffffffff);
  return uVar1;
}

/* ref: FUN_005cd220 */
uint F_005cd220(void)
{
  GEN_ENTER(0x5cd220u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005cd230 */
uint F_005cd230(void)
{
  GEN_ENTER(0x5cd230u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005cd240 */
unsigned int F_005cd240(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd240u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_005cd250 */
unsigned int F_005cd250(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd250u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_005cd260 */
byte F_005cd260(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd260u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x26) >> 3 & 1;
}

/* ref: Component::GUI2::AtkComponentDragDrop::vf14 */
uint F_005cd270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5cd270u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x84) + 0x14))))
                    (this + 0x84,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_005cd290 */
unsigned int F_005cd290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cd290u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (*(int *)(in_ecx + 4) != 0) {
    *(byte *)(in_ecx + 0x26) = *(byte *)(in_ecx + 0x26) | 0x40;
  }
  return 0;
}

/* ref: FUN_005cd2a0 */
uint F_005cd2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005d0e70((undefined *)((int)this + -0x84),param_1);
  return uVar1;
}

/* ref: FUN_005cd2b0 */
unsigned int F_005cd2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_005cd2c0 */
uint F_005cd2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005cfa20((undefined *)((int)this + -0x16c),param_1);
  return uVar1;
}

/* ref: FUN_005cd2d0 */
unsigned int F_005cd2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_005cd300 */
uint F_005cd300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_005cd360 */
uint F_005cd360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cd360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_005cd3b0 */
uint F_005cd3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar2;
  }
  uVar1 = (*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - 1;
  if (((piVar4 == (int *)0x0) || ((int *)*piVar4 == (int *)0x0)) ||
     (piVar4 = *(int * PTR32 *)*piVar4, piVar4 == (int *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar4;
  }
  uVar3 = uVar1 >> 2;
  if (*(uint *)(iVar5 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar5 + 8);
  }
  return *((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar3 * 4))) + (uVar1 & 3) * 4;
}

/* ref: FUN_005cd400 */
uint F_005cd400(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar2;
  }
  uVar1 = (*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - 1;
  if (((piVar4 == (int *)0x0) || ((int *)*piVar4 == (int *)0x0)) ||
     (piVar4 = *(int * PTR32 *)*piVar4, piVar4 == (int *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar4;
  }
  uVar3 = uVar1 >> 4;
  if (*(uint *)(iVar5 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar5 + 8);
  }
  return *((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar3 * 4))) + (uVar1 & 0xf);
}

/* ref: FUN_005cd450 */
uint F_005cd450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_005cd4b0 */
uint F_005cd4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cd4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_005cd500 */
uint F_005cd500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cd500u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_005cd580 */
uint F_005cd580(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_005c9640(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_005cd5c0 */
uint F_005cd5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cd5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((int)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_005cd630 */
uint F_005cd630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0x10,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
    piVar3[3] = param_1[1];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_005cd6a0 */
uint F_005cd6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cd6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0x10,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_005cd6f0 */
uint F_005cd6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_005cd750 */
uint F_005cd750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cd750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_005cd7a0 */
uint F_005cd7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_005c9860(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x2c0);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_005cd7d0 */
uint F_005cd7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_005cd830 */
uint F_005cd830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cd830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_005cd8b0 */
unsigned int F_005cd8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_005cd910 */
uint F_005cd910(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005cd950 */
unsigned int F_005cd950(unsigned int gen_a0)
{
  GEN_ENTER(0x5cd950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_005cd980 */
uint F_005cd980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = **(int * PTR32 *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_005cd9e0 */
uint F_005cd9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cd9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_005cda40 */
uint F_005cda40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cda40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_005cda90 */
unsigned int F_005cda90(unsigned int gen_a0)
{
  GEN_ENTER(0x5cda90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_005cdad0 */
uint F_005cdad0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cdad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005cdb10 */
uint F_005cdb10(unsigned int gen_a0)
{
  GEN_ENTER(0x5cdb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005cdb50 */
uint F_005cdb50(unsigned int gen_a0)
{
  GEN_ENTER(0x5cdb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005cdb90 */
unsigned int F_005cdb90(unsigned int gen_a0)
{
  GEN_ENTER(0x5cdb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_005cdbf0 */
uint F_005cdbf0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cdbf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_005c9de0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x1c,400);
  return (uint)uVar1;
}

/* ref: FUN_005cdc30 */
uint F_005cdc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cdc30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_005c6630((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_005c7460((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_005c9de0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_005cdc90 */
uint F_005cdc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cdc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x19) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x19) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_005cdd00 */
uint F_005cdd00(unsigned int gen_a0)
{
  GEN_ENTER(0x5cdd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_005cdd50 */
uint F_005cdd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cdd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_005cddb0 */
uint F_005cddb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cddb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_005cde00 */
unsigned int F_005cde00(unsigned int gen_a0)
{
  GEN_ENTER(0x5cde00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_005cde30 */
uint F_005cde30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cde30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_005cde90 */
uint F_005cde90(unsigned int gen_a0)
{
  GEN_ENTER(0x5cde90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005cded0 */
unsigned int F_005cded0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cded0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_005cdf00 */
uint F_005cdf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cdf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_005cdf60 */
uint F_005cdf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cdf60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_005cdfb0 */
uint F_005cdfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5cdfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar5 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  if (this != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x20)) = param_4;
  if (this != (undefined *)0x0) {
    piVar5 = *(int * PTR32 *)this;
  }
  uVar4 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar7 = 0;
  if (uVar4 < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*piVar5;
    }
    uVar6 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_005cb340(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar6,0,param_4,
                 uVar7,0,param_7);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if (iVar2 != 0) {
          *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
          if ((uint)(*(int *)((int)this + 8) * 4) <= *(uint *)((int)this + 0xc)) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar6 = 0;
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar5;
    }
    F_005cb3c0(((undefined1 *)(gen_frame + 0xc)),uVar6,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar7,0,param_4);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if ((iVar2 != 0) && (iVar2 = iVar2 + -1, iVar2 == 0)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  iVar2 = *(int *)((int)this + 0xc);
  piVar5 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar5 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar2;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar5;
  }
  return (uint)param_1;
}

/* ref: FUN_005ce140 */
uint F_005ce140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5ce140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar5 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  if (this != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x20)) = param_4;
  if (this != (undefined *)0x0) {
    piVar5 = *(int * PTR32 *)this;
  }
  uVar4 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar7 = 0;
  if (uVar4 < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*piVar5;
    }
    uVar6 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_005cb440(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar6,0,param_4,
                 uVar7,0,param_7);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if (iVar2 != 0) {
          *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
          if ((uint)(*(int *)((int)this + 8) << 4) <= *(uint *)((int)this + 0xc)) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar6 = 0;
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar5;
    }
    F_005cb4c0(((undefined1 *)(gen_frame + 0xc)),uVar6,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar7,0,param_4);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if ((iVar2 != 0) && (iVar2 = iVar2 + -1, iVar2 == 0)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  iVar2 = *(int *)((int)this + 0xc);
  piVar5 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar5 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar2;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar5;
  }
  return (uint)param_1;
}

/* ref: FUN_005ce2d0 */
uint F_005ce2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ce2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_005ca2d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_005ce300 */
unsigned int F_005ce300(unsigned int gen_a0)
{
  GEN_ENTER(0x5ce300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_005ce350 */
uint F_005ce350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ce350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar3 = param_1[4] - param_2;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  if (this == param_1) {
    F_005c21e0(this,uVar3 + param_2,0xffffffff);
    F_005c21e0(this,0,param_2);
    return (uint)this;
  }
  if (uVar3 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < uVar3) {
    F_0042f810(this,uVar3,*(undefined4 *)((int)this + 0x10));
    if (uVar3 == 0) {
      return (uint)this;
    }
  }
  else if (uVar3 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (3 < *(uint *)((int)this + 0x14)) {
      **(undefined4 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  puVar2 = param_1;
  if (3 < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  pvVar1 = this;
  if (3 < *(uint *)((int)this + 0x14)) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  F_0042f020(pvVar1,puVar2 + param_2,uVar3);
  *(uint *)((int)this + 0x10) = uVar3;
  if (*(uint *)((int)this + 0x14) < 4) {
    *(undefined4 *)((int)this + uVar3 * 4) = 0;
    return (uint)this;
  }
  *(undefined4 *)(*(int *)this + uVar3 * 4) = 0;
  return (uint)this;
}

/* ref: FUN_005ce450 */
uint F_005ce450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ce450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_005ce470 */
uint F_005ce470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ce470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_2;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_3;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(param_2 + 4) = (uint)piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  *param_1 = *(uint *)(param_2 + 4);
  return (uint)param_1;
}

/* ref: FUN_005ce4e0 */
uint F_005ce4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x5ce4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  if (((param_8 == (int *)0x0) || ((int *)*param_8 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_8, puVar1 == (undefined4 *)0x0)) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = *puVar1;
  }
  if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  if (((param_2 != (int *)0x0) && ((int *)*param_2 != (int *)0x0)) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  F_005c78d0(((undefined1 *)(gen_frame + 0x4)),uVar2,param_4,uVar3,param_7,(*(undefined4 *)(gen_frame + 0x8)),param_10,param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_8;
  }
  return (uint)param_1;
}

/* ref: FUN_005ce590 */
uint F_005ce590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x5ce590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  if (((param_8 == (int *)0x0) || ((int *)*param_8 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_8, puVar1 == (undefined4 *)0x0)) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = *puVar1;
  }
  if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  if (((param_2 != (int *)0x0) && ((int *)*param_2 != (int *)0x0)) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  F_005c7950(((undefined1 *)(gen_frame + 0x4)),uVar2,param_4,uVar3,param_7,(*(undefined4 *)(gen_frame + 0x8)),param_10,param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_8;
  }
  return (uint)param_1;
}

/* ref: FUN_005ce640 */
unsigned int F_005ce640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ce640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_005cb920(param_1,param_2,param_3,(int)this + 0xc);
  return 0;
}

/* ref: FUN_005ce660 */
unsigned int F_005ce660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ce660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_005cb970(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_005ce680 */
unsigned int F_005ce680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ce680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_005ce6b0 */
unsigned int F_005ce6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ce6b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005ce6e0 */
unsigned int F_005ce6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ce6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_005ce710 */
unsigned int F_005ce710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ce710u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005ce740 */
unsigned int F_005ce740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ce740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_005ce770 */
unsigned int F_005ce770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ce770u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005ce7a0 */
unsigned int F_005ce7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ce7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_005ce7d0 */
unsigned int F_005ce7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ce7d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005ce810 */
unsigned int F_005ce810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ce810u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0xb0)) {
    F_0042c880((undefined *)((int)this + 0x54));
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_005ce840 */
uint F_005ce840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ce840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_005ce890 */
uint F_005ce890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ce890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_004296a0(0x18,0,400);
  *puVar2 = *(undefined4 *)((int)this + 4);
  puVar2[1] = *(undefined4 *)((int)this + 4);
  puVar2[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar2 + 5) = 0;
  uVar1 = param_1[1];
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = *param_1;
    puVar2[4] = uVar1;
  }
  return (uint)puVar2;
}

/* ref: FUN_005ce8e0 */
unsigned int F_005ce8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ce8e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005ce910 */
unsigned int F_005ce910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ce910u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005ce940 */
unsigned int F_005ce940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ce940u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005ce970 */
unsigned int F_005ce970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ce970u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005ce9a0 */
unsigned int F_005ce9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ce9a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005ce9d0 */
unsigned int F_005ce9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ce9d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cea00 */
unsigned int F_005cea00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cea00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cea30 */
unsigned int F_005cea30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cea30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cea60 */
unsigned int F_005cea60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cea60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cea90 */
unsigned int F_005cea90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cea90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005ceac0 */
unsigned int F_005ceac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ceac0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005ceaf0 */
uint F_005ceaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ceaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_005cbe40(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_005ceb20 */
unsigned int F_005ceb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ceb20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005ceb50 */
uint F_005ceb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ceb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  
  iVar1 = param_2;
  if ((param_2 != param_3) && (param_3 != param_4)) {
    F_005c8080(param_2,param_3,param_4,0,0);
    iVar1 = param_2 + (param_4 - param_3 >> 2) * 4;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_005ceb90 */
uint F_005ceb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ceb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  ushort uVar5;
  int * piVar6;
  int * piVar7;
  int * local_c;
  int * local_8;
  
  local_c = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 2) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                      1);
  F_005cbf40(param_2,local_c,param_3 + -1,param_4);
  local_8 = local_c + 1;
  if (param_2 < local_c) {
    do {
      iVar2 = local_c[-1];
      iVar3 = *local_c;
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(ushort *)(iVar2 + 0x84);
      }
      if (iVar3 == 0) {
LAB_005cec0e: ;
        uVar5 = 0;
      }
      else {
        if ((uVar5 < (ushort)*(undefined4 *)(iVar3 + 0x84)) &&
           (*(int *)(iVar2 + 8) == *(int *)(iVar3 + 8))) break;
        if (iVar3 == 0) goto LAB_005cec0e;
        uVar5 = *(ushort *)(iVar3 + 0x84);
      }
      if ((((iVar2 != 0) && (uVar5 < (ushort)*(undefined4 *)(iVar2 + 0x84))) &&
          (*(int *)(iVar3 + 8) == *(int *)(iVar2 + 8))) ||
         (local_c = local_c + -1, local_c <= param_2)) break;
    } while( true );
  }
  piVar6 = local_8;
  piVar4 = local_8;
  piVar7 = local_c;
  if (local_8 < param_3) {
    iVar2 = *local_c;
    do {
      iVar3 = *local_8;
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(ushort *)(iVar3 + 0x84);
      }
      piVar6 = local_8;
      piVar4 = local_8;
      if (iVar2 == 0) {
LAB_005cec7d: ;
        uVar5 = 0;
      }
      else {
        if ((uVar5 < (ushort)*(undefined4 *)(iVar2 + 0x84)) &&
           (*(int *)(iVar3 + 8) == *(int *)(iVar2 + 8))) break;
        if (iVar2 == 0) goto LAB_005cec7d;
        uVar5 = *(ushort *)(iVar2 + 0x84);
      }
      if ((((iVar3 != 0) && (uVar5 < (ushort)*(undefined4 *)(iVar3 + 0x84))) &&
          (*(int *)(iVar2 + 8) == *(int *)(iVar3 + 8))) ||
         (local_8 = local_8 + 1, piVar6 = local_8, piVar4 = local_8, param_3 <= local_8)) break;
    } while( true );
  }
joined_r0x005cecb3: ;
  do {
    if (param_3 <= piVar6) {
joined_r0x005ced30: ;
      for (; param_2 < local_c; local_c = local_c + -1) {
        iVar2 = local_c[-1];
        iVar3 = *piVar7;
        if (iVar2 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(ushort *)(iVar2 + 0x84);
        }
        if (iVar3 == 0) {
LAB_005ced7c: ;
          uVar5 = 0;
LAB_005ced7e: ;
          if (((iVar2 != 0) && (uVar5 < (ushort)*(undefined4 *)(iVar2 + 0x84))) &&
             (*(int *)(iVar3 + 8) == *(int *)(iVar2 + 8))) break;
          iVar2 = piVar7[-1];
          piVar7 = piVar7 + -1;
          *piVar7 = local_c[-1];
          local_c[-1] = iVar2;
        }
        else if (((ushort)*(undefined4 *)(iVar3 + 0x84) <= uVar5) ||
                (*(int *)(iVar2 + 8) != *(int *)(iVar3 + 8))) {
          if (iVar3 == 0) goto LAB_005ced7c;
          uVar5 = *(ushort *)(iVar3 + 0x84);
          goto LAB_005ced7e;
        }
      }
      if (local_c == param_2) {
        if (piVar6 == param_3) {
          *param_1 = (uint)piVar7;
          param_1[1] = (uint)piVar4;
          return (uint)param_1;
        }
        if (piVar4 != piVar6) {
          iVar2 = *piVar7;
          *piVar7 = *piVar4;
          *piVar4 = iVar2;
        }
        piVar4 = piVar4 + 1;
        iVar2 = *piVar7;
        *piVar7 = *piVar6;
        piVar7 = piVar7 + 1;
        *piVar6 = iVar2;
        piVar6 = piVar6 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar6 == param_3) {
          piVar7 = piVar7 + -1;
          if (local_c != piVar7) {
            iVar2 = *local_c;
            *local_c = *piVar7;
            *piVar7 = iVar2;
          }
          piVar1 = piVar4 + -1;
          iVar2 = *piVar7;
          piVar4 = piVar4 + -1;
          *piVar7 = *piVar1;
          *piVar4 = iVar2;
        }
        else {
          iVar2 = *piVar6;
          *piVar6 = *local_c;
          *local_c = iVar2;
          piVar6 = piVar6 + 1;
        }
      }
      goto joined_r0x005cecb3;
    }
    iVar2 = *piVar7;
    iVar3 = *piVar6;
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(ushort *)(iVar2 + 0x84);
    }
    if (iVar3 == 0) {
LAB_005cecf2: ;
      uVar5 = 0;
LAB_005cecf4: ;
      if (((iVar2 != 0) && (uVar5 < (ushort)*(undefined4 *)(iVar2 + 0x84))) &&
         (*(int *)(iVar3 + 8) == *(int *)(iVar2 + 8))) goto joined_r0x005ced30;
      local_8 = piVar4 + 1;
      iVar2 = *piVar4;
      *piVar4 = iVar3;
      *piVar6 = iVar2;
    }
    else if (((ushort)*(undefined4 *)(iVar3 + 0x84) <= uVar5) ||
            (local_8 = piVar4, *(int *)(iVar2 + 8) != *(int *)(iVar3 + 8))) {
      if (iVar3 == 0) goto LAB_005cecf2;
      uVar5 = *(ushort *)(iVar3 + 0x84);
      goto LAB_005cecf4;
    }
    piVar6 = piVar6 + 1;
    piVar4 = local_8;
  } while( true );
}

/* ref: FUN_005cee50 */
unsigned int F_005cee50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5cee50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 uVar2;
  
  if (((param_4 == (int *)0x0) || ((int *)*param_4 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_4, puVar1 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  if (((param_1 != (int *)0x0) && ((int *)*param_1 != (int *)0x0)) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    F_005cbff0(*puVar1,param_3,uVar2,param_6,param_6);
    return 0;
  }
  F_005cbff0(0,param_3,uVar2,param_6,param_6);
  return 0;
}

/* ref: FUN_005ceeb0 */
unsigned int F_005ceeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5ceeb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 uVar2;
  
  if (((param_4 == (int *)0x0) || ((int *)*param_4 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_4, puVar1 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  if (((param_1 != (int *)0x0) && ((int *)*param_1 != (int *)0x0)) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    F_005cc070(*puVar1,param_3,uVar2,param_6,param_6);
    return 0;
  }
  F_005cc070(0,param_3,uVar2,param_6,param_6);
  return 0;
}

/* ref: FUN_005cef10 */
uint F_005cef10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cef10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_005cef40 */
unsigned int F_005cef40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cef40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_005cc0f0(param_1,param_2,param_3,0,0);
  return 0;
}

/* ref: FUN_005cef60 */
uint F_005cef60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cef60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (*(undefined4 *)&gen_args[2]);
  uVar1 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    (*(int *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4)))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
    F_005c3eb0((*(undefined4 * PTR32 *)&gen_args[0]),0,(int)(uVar1 - 4) >> 2,&(*(int *)&gen_args[1]),uVar2);
    uVar1 = uVar1 - 4;
  }
  return uVar1;
}

/* ref: FUN_005cefc0 */
unsigned int F_005cefc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5cefc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_005cc1d0(param_1,param_2,param_3,param_4,param_5,param_6,0,0);
  return 0;
}

/* ref: FUN_005ceff0 */
unsigned int F_005ceff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5ceff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_005cc300(param_1,param_2,param_3,param_4,param_5,param_6,0,0);
  return 0;
}

/* ref: FUN_005cf020 */
unsigned int F_005cf020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cf020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005cf050 */
uint F_005cf050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5cf050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(int *)((int)this + 0x74) == 1) {
    uVar1 = F_005cc4d0(this,1,param_1,param_2,param_3);
    return uVar1;
  }
  if (*(int *)((int)this + 0x74) != 2) {
    uVar1 = F_005bfe10(this,param_1,0x24,0);
    if (uVar1 == 0) {
      return 0;
    }
    uVar1 = F_005c83b0(this,uVar1,param_1,param_2,param_3);
    return uVar1;
  }
  uVar1 = F_005cc4d0(this,2,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_005cf0d0 */
uint F_005cf0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cf0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005cf050(this,0x10,param_1,param_2);
  return uVar1;
}

/* ref: FUN_005cf0f0 */
uint F_005cf0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cf0f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005cf050(this,0x11,param_1,param_2);
  return uVar1;
}

/* ref: FUN_005cf110 */
uint F_005cf110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5cf110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005cf050(this,0x22,param_1,param_2);
  return uVar1;
}

/* ref: FUN_005cf130 */
uint F_005cf130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005cf190 */
uint F_005cf190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  
  if ((param_1 & 2) == 0) {
    F_0057e680(this);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    piVar1 = (int *)((int)this + -4);
    iVar2 = *piVar1;
    this_00 = (undefined *)(iVar2 * 0x150 + (int)this);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0x150);
      F_0057e680(this_00);
    }
    this = piVar1;
    if ((param_1 & 1) != 0) {
      F_00406b30(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_005cf210 */
uint F_005cf210(unsigned int gen_a0)
{
  GEN_ENTER(0x5cf210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[32])REFP(0x10a0f54));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x100) = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0((undefined *)((int)this + 0x100));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x100) = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  iVar1 = *(int *)((int)this + 0xf0);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xf8) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  F_005c8fc0((undefined *)((int)this + 0xc0));
  F_005c8fc0((int *)((int)this + 0xb4));
  local_8 = 0xc;
  piVar5 = (int *)((int)this + 0xb4);
  do {
    piVar2 = (int *)piVar5[-3];
    piVar3 = (int *)*piVar2;
    piVar6 = piVar5 + -3;
    *piVar2 = (int)piVar2;
    *(int *)(*piVar6 + 4) = *piVar6;
    piVar5[-2] = 0;
    if (piVar3 != (int *)*piVar6) {
      do {
        piVar5 = (int *)*piVar3;
        F_00429760(piVar3,0xc,400);
        piVar3 = piVar5;
      } while (piVar5 != (int *)*piVar6);
    }
    F_00429760(*piVar6,0xc,400);
    local_8 = local_8 + -1;
    piVar5 = piVar6;
  } while (-1 < local_8);
  uVar4 = F_00a4b380((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar4;
}

/* ref: Component::GUI2::AtkUnitManager::vf0 */
uint F_005cf300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005cf210(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf4 */
unsigned int F_005cf330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((*(undefined * PTR32 *)(this + 4) != param_1) && (*(undefined * PTR32 *)(this + 4) = param_1, param_1 != (undefined *)0x0))
  {
    uVar1 = F_005bd980(param_1,0xf);
    F_005ccc40(this,uVar1);
    ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this);
  }
  return 0;
}

/* ref: FUN_005cf370 */
uint F_005cf370(unsigned int gen_a0)
{
  GEN_ENTER(0x5cf370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_005c9de0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x1c,400);
  return (uint)uVar1;
}

/* ref: Component::GUI2::AtkResNode::vf0 */
uint F_005cf3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkTextNode::vf0 */
uint F_005cf3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0xf8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0ef4));
  if (this_00 != (undefined *)0x0) {
    F_005c8de0(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)(this + 0xf8) = 0;
  }
  F_0042c880(this + 0x9c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005cf450 */
uint F_005cf450(unsigned int gen_a0)
{
  GEN_ENTER(0x5cf450u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[7] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10a0ef4));
  F_0042b630(in_ecx + 0x27);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10a17fc));
  return (uint)in_ecx;
}

/* ref: FUN_005cf490 */
uint F_005cf490(unsigned int gen_a0)
{
  GEN_ENTER(0x5cf490u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[7] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10a0ef4));
  F_0042b630(in_ecx + 0x27);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10a180c));
  return (uint)in_ecx;
}

/* ref: Component::GUI2::AtkImageNode::vf0 */
uint F_005cf4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkNineGridNode::vf0 */
uint F_005cf500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkCounterNode::vf0 */
uint F_005cf530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this + 0xa0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkCollisionNode::vf0 */
uint F_005cf570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkFocusNode::vf0 */
uint F_005cf5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005cf5d0 */
unsigned int F_005cf5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5cf5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0ef4));
  if (this_00 != (undefined *)0x0) {
    F_005c8de0(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)((int)this + 0xf8) = 0;
  }
  F_0042c880((undefined *)((int)this + 0x9c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return 0;
}

/* ref: FUN_005cf620 */
unsigned int F_005cf620(unsigned int gen_a0)
{
  GEN_ENTER(0x5cf620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0ef4));
  if (this_00 != (undefined *)0x0) {
    F_005c8de0(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)((int)this + 0xf8) = 0;
  }
  F_0042c880((undefined *)((int)this + 0x9c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return 0;
}

/* ref: FUN_005cf670 */
uint F_005cf670(unsigned int gen_a0)
{
  GEN_ENTER(0x5cf670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_005c9640(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,400);
  return (uint)uVar1;
}

/* ref: Component::GUI2::AtkTimer::vf0 */
uint F_005cf6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00580e00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentBase::vf0 */
uint F_005cf6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentIcon::vf0 */
uint F_005cf710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentGaugeBar::vf0 */
uint F_005cf740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentButton::vf0 */
uint F_005cf770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10a113c));
  F_00580e00(this + 0xd0);
  F_00580e00(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentCheckBox::vf0 */
uint F_005cf7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10a113c));
  F_00580e00(this + 0xd0);
  F_00580e00(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentList::vf0 */
uint F_005cf810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf31 */
uint F_005cf840(unsigned int gen_a0)
{
  GEN_ENTER(0x5cf840u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x158);
}

/* ref: Component::GUI2::AtkComponentTreeList::vf30 */
uint F_005cf850(unsigned int gen_a0)
{
  GEN_ENTER(0x5cf850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)(this + 0x140) = 0;
  uVar1 = F_005623b0(this,0xffffffff);
  return uVar1;
}

/* ref: FUN_005cf890 */
uint F_005cf890(unsigned int gen_a0)
{
  GEN_ENTER(0x5cf890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x18) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentScrollBar::vf0 */
uint F_005cf8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentDropDownList::vf0 */
uint F_005cf920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentWindow::vf19 */
uint F_005cf950(unsigned int gen_a0)
{
  GEN_ENTER(0x5cf950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xa8);
}

/* ref: Component::GUI2::AtkComponentWindow::vf20 */
uint F_005cf960(unsigned int gen_a0)
{
  GEN_ENTER(0x5cf960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xac);
}

/* ref: FUN_005cf970 */
uint F_005cf970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentIconText::vf0 */
uint F_005cf9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentInputBase::vf0 */
uint F_005cf9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cf9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a14ec));
  F_0042c880(this + 0xf0);
  F_0042c880(this + 0x9c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentNumericInput::vf0 */
uint F_005cfa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cfa20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00582ed0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentGuildLeveCard::vf0 */
uint F_005cfa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cfa50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentTextNineGrid::vf0 */
uint F_005cfa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cfa80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentJournalCanvas::vf0 */
uint F_005cfab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cfab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentMultipurpose::vf0 */
uint F_005cfae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cfae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentMap::vf0 */
uint F_005cfb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cfb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00583700(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005cfb40 */
uint F_005cfb40(unsigned int gen_a0)
{
  GEN_ENTER(0x5cfb40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_005ca2d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_005cfb80 */
unsigned int F_005cfb80(unsigned int gen_a0)
{
  GEN_ENTER(0x5cfb80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_005cfbd0 */
uint F_005cfbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cfbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x14,0,400);
    F_005cb920(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,400);
    }
    *(uint *)((int)this + 8) = param_1 * 0x14 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0x14) * 0x14;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_005cfce0 */
uint F_005cfce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cfce0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_005c60b0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_005cb970((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_005c9640((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_005cfd80 */
uint F_005cfd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5cfd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x14) = 3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)this = 0;
  F_005ce350(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_005cfdc0 */
uint F_005cfdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cfdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (0x3fffffff - uVar6 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= 0x3fffffff - uVar7)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc) >> 2;
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,400);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_005cff40 */
uint F_005cff40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5cff40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (0xfffffff - uVar6 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= 0xfffffff - uVar7)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc) >> 4;
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,400);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_005d00c0 */
uint F_005d00c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d00c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_005c6b30(param_3,*(undefined4 *)((int)this + 4),param_2);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005d00f0 */
uint F_005d00f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d00f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x14;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_005cfbd0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_005cfbd0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_005d0180 */
uint F_005d0180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,400);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_005d02f0 */
uint F_005d02f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d02f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 3) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3 = puVar3 + 3;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005d0340 */
unsigned int F_005d0340(unsigned int gen_a0)
{
  GEN_ENTER(0x5d0340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_005d0390 */
uint F_005d0390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,400);
    F_005ce7d0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,400);
    }
    *(uint *)((int)this + 8) = param_1 * 0xc + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0xc) * 0xc;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_005d0450 */
unsigned int F_005d0450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0450u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0xb0)) {
    F_0042c880((undefined *)((int)this + 0x54));
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_005d0480 */
uint F_005d0480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d0480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_005cb640(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_005d04e0 */
uint F_005d04e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d04e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_004296a0(0x18,0,400);
  *puVar2 = *(undefined4 *)((int)this + 4);
  puVar2[1] = *(undefined4 *)((int)this + 4);
  puVar2[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar2 + 5) = 0;
  uVar1 = param_2[1];
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = *param_2;
    puVar2[4] = uVar1;
  }
  F_005cb560(this,param_1,puVar2,0);
  return param_1;
}

/* ref: FUN_005d0540 */
unsigned int F_005d0540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d0540u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005d0570 */
unsigned int F_005d0570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d0570u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005d05a0 */
unsigned int F_005d05a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d05a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_005d05d0 */
unsigned int F_005d05d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d05d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

