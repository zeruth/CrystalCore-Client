#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00ad8dc0 */
uint F_00ad8dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad8dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00ad8680(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x65) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x65) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x65);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x65);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x65);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x65);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00ad86d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00ad8e80 */
uint F_00ad8e80(unsigned int gen_a0)
{
  GEN_ENTER(0xad8e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00ad8dc0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ad8ea0 */
uint F_00ad8ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad8ea0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00ad8970(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00ad8f00 */
uint F_00ad8f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad8f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x68,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x19) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3,param_2);
    puVar1[0x18] = *(undefined4 *)(param_2 + 0x54);
  }
  F_00ad8a50(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00ad8f70 */
uint F_00ad8f70(unsigned int gen_a0)
{
  GEN_ENTER(0xad8f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00ad8500(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00ad8fb0 */
uint F_00ad8fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad8fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,400);
  *puVar1 = *(undefined4 *)((int)this + 8);
  puVar1[1] = *(undefined4 *)((int)this + 8);
  puVar1[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = param_1;
    puVar1[4] = param_2;
  }
  uVar2 = F_00ad8970((undefined *)((int)this + 4),((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  return uVar2;
}

/* ref: FUN_00ad9010 */
uint F_00ad9010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad9010u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00ad8ca0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    return *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  }
  return 0;
}

/* ref: FUN_00ad9050 */
uint F_00ad9050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad9050u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  short * psVar2;
  uint uVar3;
  
  psVar2 = (*(short * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(short * PTR32 *)&gen_args[1]) = (short *)(int)*(*(short * PTR32 *)&gen_args[1]);
  F_00ad8ca0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(short * PTR32 *)&gen_args[1]));
  if (((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) &&
     (piVar1 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10), piVar1 != (int *)0x0)) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,psVar2,(*(undefined4 *)&gen_args[2]));
    return uVar3;
  }
  return 0xffffffff;
}

/* ref: FUN_00ad90a0 */
uint F_00ad90a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad90a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 * puVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x10)),param_1);
  (*(undefined4 *)(gen_frame + 0x64)) = param_2;
  puVar1 = (undefined4 *)F_004296a0(0x68,0,400);
  *puVar1 = *(undefined4 *)((int)this + 0x18);
  puVar1[1] = *(undefined4 *)((int)this + 0x18);
  puVar1[2] = *(undefined4 *)((int)this + 0x18);
  *(undefined2 *)(puVar1 + 0x19) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3,((undefined1 *)(gen_frame + 0x10)));
    puVar1[0x18] = (*(undefined4 *)(gen_frame + 0x64));
  }
  F_00ad8a50((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x8)),puVar1,0);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar2;
}

/* ref: FUN_00ad9140 */
uint F_00ad9140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad9140u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00ad8d40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) {
    return *(uint *)((*(int *)&gen_args[1]) + 0x60);
  }
  return 0;
}

/* ref: FUN_00ad9170 */
uint F_00ad9170(unsigned int gen_a0)
{
  GEN_ENTER(0xad9170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  int * piVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10eab98));
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    puVar4 = (undefined4 *)puVar3[4];
    if (puVar4 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x15);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar8 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar8, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar8 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((int)this + 4);
  F_00ad7a40((undefined *)((int)this + 4));
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    puVar4 = (undefined4 *)puVar3[0x18];
    if (puVar4 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    }
    if (*(char *)((int)puVar3 + 0x65) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x65) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x65);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x65);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x65);
        puVar8 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar8, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x65);
          puVar8 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  piVar5 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 4)));
  cVar1 = *(char *)((int)piVar5 + 0x65);
  while (cVar1 == '\0') {
    F_00ad8680((undefined *)((int)this + 0x14),piVar5[2]);
    piVar6 = (int *)*piVar5;
    F_0042c880(piVar5 + 3);
    F_00429760(piVar5,0x68,400);
    piVar5 = piVar6;
    cVar1 = *(char *)((int)piVar6 + 0x65);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 4))) = *(int *)((int)this + 0x18);
  *(undefined4 *)*(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x18);
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8))) = *(int *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x1c) = 0;
  F_00ad8dc0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x4)),**(undefined4 * PTR32 *)((int)this + 0x18),
               *(undefined4 * PTR32 *)((int)this + 0x18));
  F_00429760(*(undefined4 *)((int)this + 0x18),0x68,400);
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  F_00ad8500((*(undefined * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x4)),**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4),
               *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4));
  uVar9 = F_00429760(*(undefined4 *)((int)pvVar7 + 4),0x18,400);
  return (uint)uVar9;
}

/* ref: FUN_00ad9300 */
uint F_00ad9300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad9300u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)&gen_args[1]);
  F_00ad8ca0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(uint *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
  uVar2 = (*(uint *)(gen_frame + 0x4));
  if (((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) &&
     (puVar1 = *(undefined4 * PTR32 *)((*(uint *)(gen_frame + 0x4)) + 0x10), puVar1 != (undefined4 *)0x0)) {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    F_00ad7dc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[1]));
    uVar2 = F_00ad8500(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x4)));
  }
  return uVar2;
}

/* ref: FUN_00ad9370 */
uint F_00ad9370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad9370u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (*(uint *)&gen_args[1]);
  F_00ad8d40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]));
  uVar3 = (*(uint *)&gen_args[1]);
  if (((*(uint *)&gen_args[1]) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) &&
     (puVar1 = *(undefined4 * PTR32 *)((*(uint *)&gen_args[1]) + 0x60), puVar1 != (undefined4 *)0x0)) {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    F_00ad7e50(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined4 *)(gen_frame + 0x4)),uVar2);
    uVar3 = F_00ad8dc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  }
  return uVar3;
}

/* ref: FUN_00ad93e0 */
uint F_00ad93e0(unsigned int gen_a0)
{
  GEN_ENTER(0xad93e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10eab98));
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x18,0,400);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar1 = F_004296a0(0x68,0,400);
  *(uint *)((int)this + 0x18) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 4))) = *(int *)((int)this + 0x18);
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8))) = *(int *)((int)this + 0x18);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x65))) = 1;
  return (uint)this;
}

/* ref: FUN_00ad9460 */
uint F_00ad9460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad9460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  int iVar2;
  undefined * pvVar3;
  byte bVar4;
  uint uVar5;
  code * pcVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  bVar4 = F_0042a980(param_1,0);
  if (bVar4 != 0x2f) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0xfffffffe;
  }
  if ((*(uint *)&REFG(undefined, 0x14c07b4) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14c07b4) = *(uint *)&REFG(undefined, 0x14c07b4) | 1;
    F_0042cc20(&REFG(undefined, 0x14c0760),&REFG(undefined, 0x10eab90),REFG(undefined4, 0x108cc50));
    F_00c47de6(((code *)REFP(0x107c730)));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00ada2c0(param_1,&REFG(undefined, 0x14c0760),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  iVar2 = (*(int *)(gen_frame + 0x4)) - (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f;
  if (((*(int *)(gen_frame + 0x4)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0))) / 0x54 + iVar2 != iVar2) {
    F_00ad8d40((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x14),&(*(undefined * PTR32 *)(gen_frame + 0x10)),(*(undefined * PTR32 *)(gen_frame + 0x0)));
    if (((*(undefined * PTR32 *)(gen_frame + 0x10)) != *(undefined * PTR32 *)((int)pvVar3 + 0x18)) &&
       (piVar1 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x60), piVar1 != (int *)0x0)) {
      if (((*(int *)(gen_frame + 0x4)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0))) / 0x54 == 1) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10eab93),REFG(undefined4, 0x108cc50));
        pcVar6 = *(gen_code32 *)(*piVar1 + 4);
      }
      else {
        iVar2 = *piVar1;
        uVar7 = REFG(undefined4, 0x108cc50);
        uVar5 = F_0042b790((*(undefined * PTR32 *)(gen_frame + 0x0)));
        F_0042d2f0(param_1,((undefined1 *)(gen_frame + 0x14)),uVar5 + 1,uVar7);
        pcVar6 = *(gen_code32 *)(iVar2 + 4);
      }
      (*pcVar6)(piVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x0)));
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 0;
    }
  }
  F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0xffffffff;
}

/* ref: FUN_00ad9630 */
uint F_00ad9630(unsigned int gen_a0)
{
  GEN_ENTER(0xad9630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00ad8dc0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x68,400);
  return (uint)uVar1;
}

/* ref: FUN_00ad9670 */
uint F_00ad9670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad9670u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00ad7e50((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_00ad83e0((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00ad8dc0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00ad96d0 */
uint F_00ad96d0(unsigned int gen_a0)
{
  GEN_ENTER(0xad96d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00ad8dc0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x68,400);
  return (uint)uVar1;
}

/* ref: Component::Shell::ShellCommands::vf0 */
uint F_00ad9750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad9750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ad9170(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ad9780 */
uint F_00ad9780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad9780u, gen_a0, gen_a1, gen_a2, 0u);
  byte * in_eax = (byte *)(uintptr_t)gen_a0;
  uint * in_ecx = (uint *)(uintptr_t)gen_a1;
  int in_edx = (int)gen_a2;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 * puVar4;
  uint * puVar5;
  
  bVar1 = *in_eax;
  if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
    *in_ecx = *((byte *)GEN_TOP(((bVar1 - 0x40) + in_edx))) + 0x40;
    in_ecx[1] = 0;
    return 1;
  }
  if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
    *in_ecx = *((byte *)GEN_TOP(((bVar1 - 0x60) + in_edx))) + 0x40;
    in_ecx[1] = 0;
    return 1;
  }
  if (bVar1 == 0xc3) {
    bVar2 = in_eax[1];
    if ((byte)(bVar2 + 0x80) < 0x20) {
      *in_ecx = *((byte *)GEN_TOP(((bVar2 - 0x60) + in_edx))) + 0x40;
      in_ecx[1] = 0;
      return 2;
    }
    if ((byte)(bVar2 + 0x60) < 0x20) {
      *in_ecx = *((byte *)GEN_TOP(((bVar2 - 0x80) + in_edx))) + 0x40;
      in_ecx[1] = 0;
      return 2;
    }
  }
  if (bVar1 < 0x80) {
    puVar5 = (uint *)0x1;
    goto LAB_00ad9870;
  }
  if (0xbf < bVar1) {
    if (bVar1 < 0xe0) {
      puVar5 = (uint *)0x2;
      goto LAB_00ad9870;
    }
    if (bVar1 < 0xf0) {
      puVar5 = (uint *)0x3;
      goto LAB_00ad9870;
    }
    if (bVar1 < 0xf8) {
      puVar5 = (uint *)&REFG(undefined, 0x4);
      goto LAB_00ad9870;
    }
    if (bVar1 < 0xfc) {
      puVar5 = (uint *)&REFG(undefined, 0x5);
      goto LAB_00ad9870;
    }
    puVar5 = (uint *)&REFG(undefined, 0x6);
    if (bVar1 < 0xfe) goto LAB_00ad9870;
  }
  puVar5 = in_ecx;
LAB_00ad9870: ;
  *in_ecx = (uint)bVar1;
  in_ecx[1] = 0;
  if (1 < (int)puVar5) {
    puVar4 = (undefined1 *)((int)puVar5 + -1);
    do {
      in_eax = in_eax + 1;
      uVar3 = *in_ecx;
      *in_ecx = uVar3 << 8;
      in_ecx[1] = in_ecx[1] << 8 | uVar3 >> 0x18;
      bVar1 = *in_eax;
      uVar3 = *in_ecx;
      *in_ecx = *in_ecx + (uint)bVar1;
      in_ecx[1] = in_ecx[1] + (uint)CARRY4(uVar3,(uint)bVar1);
      puVar4 = puVar4 + -1;
    } while (puVar4 != (undefined1 *)0x0);
  }
  return (uint)puVar5;
}

/* ref: FUN_00ad98b0 */
uint F_00ad98b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad98b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte * pbVar6;
  undefined * in_edx;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if ((char)param_4 == '\0') {
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x10eaba0);
    in_edx = &REFG(undefined, 0x10eaba0);
    (*(char * PTR32 *)(gen_frame + 0x14)) = param_2;
  }
  else {
    in_edx = &REFG(undefined, 0x10eabe8);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x10eabe8);
    (*(char * PTR32 *)(gen_frame + 0x14)) = param_2;
  }
  do {
    bVar1 = *param_1;
    if (((bVar1 == 0) && (*param_2 == '\0')) || (param_3 <= (uint)((int)param_2 - (int)(*(char * PTR32 *)(gen_frame + 0x14))))) {
      return 0;
    }
    if ((bVar1 < 0x41) || (0x5a < bVar1)) {
      if ((bVar1 < 0x61) || (0x7a < bVar1)) {
        if (bVar1 == 0xc3) {
          bVar2 = param_1[1];
          if ((byte)(bVar2 + 0x80) < 0x20) {
            uVar3 = (byte)in_edx[bVar2 - 0x60] + 0x40;
            iVar9 = 0;
            iVar4 = 2;
          }
          else {
            if (0x1f < (byte)(bVar2 + 0x60)) goto LAB_00ad9993;
            uVar3 = (byte)in_edx[bVar2 - 0x80] + 0x40;
            iVar9 = 0;
            iVar4 = 2;
          }
        }
        else {
LAB_00ad9993: ;
          if (bVar1 < 0x80) {
            param_4 = 1;
          }
          else if (0xbf < bVar1) {
            if (bVar1 < 0xe0) {
              param_4 = 2;
            }
            else if (bVar1 < 0xf0) {
              param_4 = 3;
            }
            else if (bVar1 < 0xf8) {
              param_4 = 4;
            }
            else if (bVar1 < 0xfc) {
              param_4 = 5;
            }
            else if (bVar1 < 0xfe) {
              param_4 = 6;
            }
          }
          uVar3 = (uint)bVar1;
          iVar9 = 0;
          iVar4 = param_4;
          if (1 < param_4) {
            iVar7 = param_4 + -1;
            pbVar6 = param_1;
            do {
              pbVar6 = pbVar6 + 1;
              uVar5 = uVar3 >> 0x18;
              uVar8 = uVar3 * 0x100;
              uVar3 = uVar8 + *pbVar6;
              iVar9 = (iVar9 << 8 | uVar5) + (uint)CARRY4(uVar8,(uint)*pbVar6);
              iVar7 = iVar7 + -1;
              in_edx = (*(undefined * PTR32 *)(gen_frame + 0x18));
            } while (iVar7 != 0);
          }
        }
      }
      else {
        uVar3 = (byte)in_edx[bVar1 - 0x60] + 0x40;
        iVar9 = 0;
        iVar4 = 1;
      }
    }
    else {
      uVar3 = (byte)in_edx[bVar1 - 0x40] + 0x40;
      iVar9 = 0;
      iVar4 = 1;
    }
    param_1 = param_1 + iVar4;
    uVar5 = F_00ad9780(param_2,&(*(uint *)(gen_frame + 0xc)),in_edx);
    param_2 = param_2 + uVar5;
    if ((uVar3 != (*(uint *)(gen_frame + 0xc))) || (iVar9 != (*(int *)(gen_frame + 0x10)))) {
      if ((iVar9 <= (*(int *)(gen_frame + 0x10))) && ((iVar9 < (*(int *)(gen_frame + 0x10)) || (uVar3 < (*(uint *)(gen_frame + 0xc)))))) {
        return 0xffffffff;
      }
      return 1;
    }
  } while( true );
}

/* ref: FUN_00ad9a70 */
uint F_00ad9a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad9a70u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte * pbVar6;
  undefined * in_edx;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if ((char)param_3 == '\0') {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x10eaba0);
    in_edx = &REFG(undefined, 0x10eaba0);
  }
  else {
    in_edx = &REFG(undefined, 0x10eabe8);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x10eabe8);
  }
  do {
    bVar1 = *param_1;
    if ((bVar1 == 0) && (*param_2 == '\0')) {
      return 0;
    }
    if ((bVar1 < 0x41) || (0x5a < bVar1)) {
      if ((bVar1 < 0x61) || (0x7a < bVar1)) {
        if (bVar1 == 0xc3) {
          bVar2 = param_1[1];
          if ((byte)(bVar2 + 0x80) < 0x20) {
            uVar3 = (byte)in_edx[bVar2 - 0x60] + 0x40;
            iVar9 = 0;
            iVar4 = 2;
          }
          else {
            if (0x1f < (byte)(bVar2 + 0x60)) goto LAB_00ad9b39;
            uVar3 = (byte)in_edx[bVar2 - 0x80] + 0x40;
            iVar9 = 0;
            iVar4 = 2;
          }
        }
        else {
LAB_00ad9b39: ;
          if (bVar1 < 0x80) {
            param_3 = 1;
          }
          else if (0xbf < bVar1) {
            if (bVar1 < 0xe0) {
              param_3 = 2;
            }
            else if (bVar1 < 0xf0) {
              param_3 = 3;
            }
            else if (bVar1 < 0xf8) {
              param_3 = 4;
            }
            else if (bVar1 < 0xfc) {
              param_3 = 5;
            }
            else if (bVar1 < 0xfe) {
              param_3 = 6;
            }
          }
          uVar3 = (uint)bVar1;
          iVar9 = 0;
          iVar4 = param_3;
          if (1 < param_3) {
            iVar7 = param_3 + -1;
            pbVar6 = param_1;
            do {
              pbVar6 = pbVar6 + 1;
              uVar5 = uVar3 >> 0x18;
              uVar8 = uVar3 * 0x100;
              uVar3 = uVar8 + *pbVar6;
              iVar9 = (iVar9 << 8 | uVar5) + (uint)CARRY4(uVar8,(uint)*pbVar6);
              iVar7 = iVar7 + -1;
              in_edx = (*(undefined * PTR32 *)(gen_frame + 0x8));
            } while (iVar7 != 0);
          }
        }
      }
      else {
        uVar3 = (byte)in_edx[bVar1 - 0x60] + 0x40;
        iVar9 = 0;
        iVar4 = 1;
      }
    }
    else {
      uVar3 = (byte)in_edx[bVar1 - 0x40] + 0x40;
      iVar9 = 0;
      iVar4 = 1;
    }
    param_1 = param_1 + iVar4;
    uVar5 = F_00ad9780(param_2,&(*(uint *)(gen_frame + 0x0)),in_edx);
    param_2 = param_2 + uVar5;
    if ((uVar3 != (*(uint *)(gen_frame + 0x0))) || (iVar9 != (*(int *)(gen_frame + 0x4)))) {
      if ((iVar9 <= (*(int *)(gen_frame + 0x4))) && ((iVar9 < (*(int *)(gen_frame + 0x4)) || (uVar3 < (*(uint *)(gen_frame + 0x0)))))) {
        return 0xffffffff;
      }
      return 1;
    }
  } while( true );
}

/* ref: FUN_00ad9c10 */
uint F_00ad9c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad9c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042a990(param_2);
  uVar2 = F_0042a990(param_1);
  uVar1 = F_00ad9a70(uVar2,uVar1,param_3);
  return uVar1;
}

/* ref: FUN_00ad9c40 */
uint F_00ad9c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad9c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042a990(param_2);
  uVar2 = F_0042a990(param_1);
  uVar1 = F_00ad98b0(uVar2,uVar1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ad9c70 */
uint F_00ad9c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad9c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  uVar1 = F_0042b790(param_2);
  uVar2 = F_0042b790(param_3);
  local_8 = 0;
  uVar3 = F_0042c8a0(param_1,param_2,0);
  if (uVar3 != REFG(undefined4, 0x108cc50)) {
    do {
      F_0042d6c0(param_1,uVar3,uVar1,param_3);
      local_8 = local_8 + 1;
      uVar3 = F_0042c8a0(param_1,param_2,uVar3 + uVar2);
    } while (uVar3 != REFG(undefined4, 0x108cc50));
  }
  return local_8;
}

/* ref: FUN_00ad9cf0 */
byte F_00ad9cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad9cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042b790(param_2);
  uVar2 = F_0042c8a0(param_1,param_2,0);
  if (uVar2 != REFG(undefined4, 0x108cc50)) {
    F_0042d6c0(param_1,uVar2,uVar1,param_3);
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad9d30 */
uint F_00ad9d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad9d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0042b790(param_1);
  uVar3 = F_0042b790(param_2);
  if (uVar2 < uVar3) {
    return uVar3 & 0xffffff00;
  }
  if (uVar2 == uVar3) {
    bVar1 = F_0042b660(param_1,param_2);
    return CONCAT31(extraout_var,bVar1);
  }
  uVar2 = F_0042da40(param_1,0,uVar3,param_2);
  return (uint)(uVar2 == 0);
}

/* ref: FUN_00ad9d80 */
uint F_00ad9d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad9d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0042b790(param_1);
  uVar3 = F_0042b790(param_2);
  if (uVar2 < uVar3) {
    return uVar3 & 0xffffff00;
  }
  if (uVar2 == uVar3) {
    bVar1 = F_0042b660(param_1,param_2);
    return CONCAT31(extraout_var,bVar1);
  }
  uVar2 = F_0042da40(param_1,uVar2 - uVar3,uVar3,param_2);
  return (uint)(uVar2 == 0);
}

/* ref: FUN_00ad9dd0 */
uint F_00ad9dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad9dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_0042c8d0(param_1,param_2,0);
  uVar2 = F_0042c910(param_1,param_2,REFG(undefined4, 0x108cc50));
  if (uVar1 == REFG(undefined4, 0x108cc50)) {
    if (uVar2 == REFG(undefined4, 0x108cc50)) goto LAB_00ad9e22;
    uVar1 = 0;
  }
  if (uVar2 == REFG(undefined4, 0x108cc50)) {
    uVar2 = F_0042b790(param_1);
  }
  if (uVar1 <= uVar2) {
    uVar1 = F_0042d2f0(param_1,((undefined1 *)(gen_frame + 0x4)),uVar1,(uVar2 - uVar1) + 1);
    F_0042ccf0(param_1,uVar1);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return (uint)uVar3;
  }
LAB_00ad9e22: ;
  uVar1 = F_0042aca0(param_1);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00ad9e70 */
unsigned int F_00ad9e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad9e70u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  uVar1 = param_1;
  while (uVar1 = uVar1 / 10, uVar1 != 0) {
    iVar2 = iVar2 + 1;
  }
  iVar2 = iVar2 + 1 + iVar2 / 3;
  iVar3 = 0;
  *(undefined1 *)(iVar2 + param_2) = 0;
  uVar1 = param_1;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    if (iVar3 == 3) {
      *(undefined1 *)(iVar2 + param_2) = 0x2c;
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + 1;
      *(char *)(iVar2 + param_2) = (char)uVar1 + (char)(uVar1 / 10) * -10 + '0';
      uVar1 = uVar1 / 10;
    }
  }
  return 0;
}

/* ref: FUN_00ad9f00 */
uint F_00ad9f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad9f00u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint in_ebx = (uint)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  char * pcVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  pcVar2 = param_3;
  while( true ) {
    pcVar1 = pcVar2;
    uVar3 = in_eax / 10;
    *pcVar1 = "0123456789"[in_eax % 10];
    uVar4 = uVar4 + 1;
    pcVar2 = pcVar1 + 1;
    if ((in_ebx <= uVar4) || (uVar3 == 0)) break;
    in_eax = uVar3;
    if (uVar4 == (uVar4 / 3) * 3) {
      *pcVar2 = ',';
      pcVar2 = pcVar1 + 2;
    }
  }
  *pcVar2 = '\0';
  return (uint)param_3;
}

/* ref: FUN_00ad9f60 */
uint F_00ad9f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad9f60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00ad9f00(param_1,0x20,((byte *)(gen_frame + 0x8)));
  F_0042aca0(param_2);
  pbVar2 = ((byte *)(gen_frame + 0x8));
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar1 != 0);
  iVar3 = (int)pbVar2 - (int)(((byte *)(gen_frame + 0x8)) + 1);
  if (iVar3 != 0) {
    pbVar2 = ((byte *)(gen_frame + 0x8)) + iVar3 + -1;
    do {
      F_0042e3c0(param_2,(uint)*pbVar2);
      pbVar2 = pbVar2 + -1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar4 = F_0042a990(param_2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_00ad9fd0 */
uint F_00ad9fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad9fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  LPCSTR param_3 = (LPCSTR)gen_a2;
  int cchWideChar;
  LPWSTR lpWideCharStr;
  
  cchWideChar = gen_imp_MultiByteToWideChar(0xfde9,0,param_3,-1,(LPWSTR)0x0,0);
  lpWideCharStr = (LPWSTR)F_00406bb0(cchWideChar * 2 + 2,0,0);
  gen_imp_MultiByteToWideChar(0xfde9,0,param_3,-1,lpWideCharStr,cchWideChar);
  gen_imp_WideCharToMultiByte(0,0,lpWideCharStr,0xffffffff,0,0,0,0);
  F_00c48350(param_1,0,param_2);
  gen_imp_WideCharToMultiByte(0,0,lpWideCharStr,0xffffffff,param_1,param_2,0,0);
  F_00406b30(lpWideCharStr);
  return (uint)param_1;
}

/* ref: FUN_00ada060 */
uint F_00ada060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xada060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042a990(param_3);
  uVar1 = F_00ad9fd0(param_1,param_2,uVar1);
  return uVar1;
}

/* ref: FUN_00ada080 */
uint F_00ada080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xada080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  char cVar2;
  uint uVar3;
  char * pcVar4;
  uint uVar5;
  uint * puVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00ad9f00(param_1,0x20,((char *)(gen_frame + 0x8)));
  param_2[4] = 0;
  puVar6 = param_2;
  if (0xf < param_2[5]) {
    puVar6 = (uint *)*param_2;
  }
  *(undefined1 *)puVar6 = 0;
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  uVar5 = (int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1);
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (uVar5 != 0) {
    (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)(gen_frame + 0x8)) + (uVar5 - 1);
    do {
      uVar3 = param_2[4];
      cVar2 = *(*(char * PTR32 *)(gen_frame + 0x4));
      if ((-uVar3 - 1 < 2) || (uVar1 = uVar3 + 1, uVar1 == 0xffffffff)) {
                    
        F_00c4579a("string too long");
      }
      if (param_2[5] < uVar1) {
        F_004e3ed0(param_2,uVar1,uVar3);
        if (uVar1 != 0) {
LAB_00ada118: ;
          puVar6 = param_2;
          if (0xf < param_2[5]) {
            puVar6 = (uint *)*param_2;
          }
          *(char *)((int)puVar6 + param_2[4]) = cVar2;
          param_2[4] = uVar1;
          puVar6 = param_2;
          if (0xf < param_2[5]) {
            puVar6 = (uint *)*param_2;
          }
          *(undefined1 *)((int)puVar6 + uVar1) = 0;
        }
      }
      else {
        if (uVar1 != 0) goto LAB_00ada118;
        param_2[4] = 0;
        if (param_2[5] < 0x10) {
          *(undefined1 *)param_2 = 0;
        }
        else {
          *(undefined1 *)*param_2 = 0;
        }
      }
      (*(char * PTR32 *)(gen_frame + 0x4)) = (*(char * PTR32 *)(gen_frame + 0x4)) + -1;
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    } while ((*(uint *)(gen_frame + 0x0)) < uVar5);
  }
  if (param_2[5] < 0x10) {
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return (uint)param_2;
  }
  uVar5 = *param_2;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: FUN_00ada1b0 */
uint F_00ada1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xada1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * this;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = F_0042b790(param_1);
  uVar3 = F_0042c8d0(param_1,param_2,0);
  if (uVar3 != REFG(undefined4, 0x108cc50)) {
    do {
      uVar4 = F_0042c8b0(param_1,param_2,uVar3);
      if (uVar4 == REFG(undefined4, 0x108cc50)) {
        uVar4 = uVar2;
      }
      uVar5 = F_0042d2f0(param_1,((undefined1 *)(gen_frame + 0x4)),uVar3,uVar4 - uVar3);
      uVar3 = param_3[1];
      if ((uVar5 < uVar3) && (uVar1 = *param_3, uVar1 <= uVar5)) {
        if (uVar3 == param_3[2]) {
          F_00488ca0(param_3,1);
        }
        this = (undefined *)param_3[1];
        if (this != (undefined *)0x0) {
          uVar5 = ((int)(uVar5 - uVar1) / 0x54) * 0x54 + *param_3;
LAB_00ada272: ;
          F_0042cbc0(this,uVar5);
        }
      }
      else {
        if (uVar3 == param_3[2]) {
          F_00488ca0(param_3,1);
        }
        this = (undefined *)param_3[1];
        if (this != (undefined *)0x0) goto LAB_00ada272;
      }
      param_3[1] = param_3[1] + 0x54;
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar3 = F_0042c8d0(param_1,param_2,uVar4 + 1);
    } while (uVar3 != REFG(undefined4, 0x108cc50));
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_00ada2c0 */
uint F_00ada2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xada2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined * this;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = F_0042b790(param_1);
  uVar3 = F_0042c8d0(param_1,param_2,0);
  if (uVar3 != REFG(undefined4, 0x108cc50)) {
    do {
      if (uVar2 <= uVar3) break;
      if (uVar3 == 0) {
        (*(uint *)(gen_frame + 0x0)) = F_0042c8b0(param_1,param_2,0);
      }
      else {
        F_0042d2f0(param_1,((undefined1 *)(gen_frame + 0x4)),uVar3 - 1,1);
        (*(uint *)(gen_frame + 0x0)) = F_0042c8b0(param_1,((undefined1 *)(gen_frame + 0x4)),uVar3);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      }
      if ((*(uint *)(gen_frame + 0x0)) == REFG(undefined4, 0x108cc50)) {
        (*(uint *)(gen_frame + 0x0)) = uVar2;
      }
      uVar4 = F_0042d2f0(param_1,((undefined1 *)(gen_frame + 0x4)),uVar3,(*(uint *)(gen_frame + 0x0)) - uVar3);
      uVar3 = param_3[1];
      if ((uVar4 < uVar3) && (uVar1 = *param_3, uVar1 <= uVar4)) {
        if (uVar3 == param_3[2]) {
          F_00488ca0(param_3,1);
        }
        this = (undefined *)param_3[1];
        if (this != (undefined *)0x0) {
          uVar4 = ((int)(uVar4 - uVar1) / 0x54) * 0x54 + *param_3;
LAB_00ada3bd: ;
          F_0042cbc0(this,uVar4);
        }
      }
      else {
        if (uVar3 == param_3[2]) {
          F_00488ca0(param_3,1);
        }
        this = (undefined *)param_3[1];
        if (this != (undefined *)0x0) goto LAB_00ada3bd;
      }
      param_3[1] = param_3[1] + 0x54;
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar3 = F_0042c8d0(param_1,param_2,(*(uint *)(gen_frame + 0x0)) + 1);
    } while (uVar3 != REFG(undefined4, 0x108cc50));
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_00ada400 */
uint F_00ada400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xada400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10eac2c),REFG(undefined4, 0x108cc50));
  F_00ad9dd0(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = (uint)uVar2;
  if (*(char *)*param_1 != '\0') {
    F_0048a040(param_2,param_1);
    uVar1 = F_0042aca0(param_1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00ada470 */
uint F_00ada470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xada470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char * PTR32 * ppcVar1;
  uint uVar2;
  char * pcVar3;
  byte * pbVar4;
  undefined * this;
  uint uVar5;
  char * PTR32 * ppcVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar2 = F_0042a970(param_1);
  F_0042b630(((char * PTR32 *)(gen_frame + 0xb4)));
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      pcVar3 = (char *)F_0042a7e0(param_1,uVar5);
      if (*pcVar3 == (char)param_2) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x60)),&REFG(undefined, 0x10eac2c),REFG(undefined4, 0x108cc50));
        F_00ad9dd0(((char * PTR32 *)(gen_frame + 0xb4)),((undefined1 *)(gen_frame + 0x60)));
        F_0042c880(((undefined1 *)(gen_frame + 0x60)));
        if (*((char * PTR32 *)(gen_frame + 0xb4))[0] != '\0') {
          F_0048a040(param_3,((char * PTR32 *)(gen_frame + 0xb4)));
          F_0042aca0(((char * PTR32 *)(gen_frame + 0xb4)));
        }
      }
      else {
        pbVar4 = (byte *)F_0042a7e0(param_1,uVar5);
        F_0042dc00(((char * PTR32 *)(gen_frame + 0xb4)),(uint)*pbVar4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x60)),&REFG(undefined, 0x10eac2c),REFG(undefined4, 0x108cc50));
  uVar2 = F_0042c8d0(((char * PTR32 *)(gen_frame + 0xb4)),((undefined1 *)(gen_frame + 0x60)),0);
  uVar5 = F_0042c910(((char * PTR32 *)(gen_frame + 0xb4)),((undefined1 *)(gen_frame + 0x60)),REFG(undefined4, 0x108cc50));
  if (uVar2 == REFG(undefined4, 0x108cc50)) {
    if (uVar5 != REFG(undefined4, 0x108cc50)) {
      uVar2 = 0;
      goto LAB_00ada588;
    }
    F_0042aca0(((char * PTR32 *)(gen_frame + 0xb4)));
  }
  else {
LAB_00ada588: ;
    if (uVar5 == REFG(undefined4, 0x108cc50)) {
      uVar5 = F_0042b790(((char * PTR32 *)(gen_frame + 0xb4)));
    }
    if (uVar5 < uVar2) {
      F_0042aca0(((char * PTR32 *)(gen_frame + 0xb4)));
    }
    else {
      uVar2 = F_0042d2f0(((char * PTR32 *)(gen_frame + 0xb4)),((undefined1 *)(gen_frame + 0xc)),uVar2,(uVar5 - uVar2) + 1);
      F_0042ccf0(((char * PTR32 *)(gen_frame + 0xb4)),uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  if (*((char * PTR32 *)(gen_frame + 0xb4))[0] == '\0') goto LAB_00ada646;
  ppcVar6 = (char * PTR32 *)param_3[1];
  if ((((char * PTR32 *)(gen_frame + 0xb4)) < ppcVar6) && (ppcVar1 = (char * PTR32 *)*param_3, ppcVar1 <= ((char * PTR32 *)(gen_frame + 0xb4)))) {
    if (ppcVar6 == (char * PTR32 *)param_3[2]) {
      F_00488ca0(param_3,1);
    }
    this = (undefined *)param_3[1];
    if (this != (undefined *)0x0) {
      ppcVar6 = ((char * PTR32 *)GEN_TOP(((((int)((char * PTR32 *)(gen_frame + 0xb4)) - (int)ppcVar1) / 0x54) * 0x54 + *param_3)));
LAB_00ada635: ;
      F_0042cbc0(this,ppcVar6);
    }
  }
  else {
    if (ppcVar6 == (char * PTR32 *)param_3[2]) {
      F_00488ca0(param_3,1);
    }
    this = (undefined *)param_3[1];
    if (this != (undefined *)0x0) {
      ppcVar6 = ((char * PTR32 *)(gen_frame + 0xb4));
      goto LAB_00ada635;
    }
  }
  param_3[1] = param_3[1] + 0x54;
  F_0042aca0(((char * PTR32 *)(gen_frame + 0xb4)));
LAB_00ada646: ;
  uVar7 = F_0042c880(((char * PTR32 *)(gen_frame + 0xb4)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)uVar7;
}

/* ref: FUN_00ada660 */
uint F_00ada660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xada660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  
  if (param_2 == 1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      this = *(undefined * PTR32 *)this;
    }
    *(byte *)((int)this + param_1) = (byte)param_3;
    return (uint)(byte)param_3;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  pvVar1 = F_00c48350((undefined *)((int)this + param_1),(int)(char)(byte)param_3,param_2);
  return (uint)pvVar1;
}

/* ref: FUN_00ada6c0 */
uint F_00ada6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xada6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x10);
  if (-iVar2 - 1U <= param_1) {
                    
    F_00c4579a("string too long");
  }
  if (param_1 != 0) {
    uVar1 = iVar2 + param_1;
    if (uVar1 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar1) {
      F_004e3ed0(this,uVar1,iVar2);
      if (uVar1 == 0) {
        return (uint)this;
      }
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (0xf < *(uint *)((int)this + 0x14)) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    F_00ada660(this,*(undefined4 *)((int)this + 0x10),param_1,param_2);
    *(uint *)((int)this + 0x10) = uVar1;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar1) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar1) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00ada770 */
uint F_00ada770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xada770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ada6c0(this,1,param_1);
  return uVar1;
}

/* ref: FUN_00ada790 */
uint F_00ada790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xada790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  *(uint *)this = param_1 & 0x7f | param_2 << 7;
  return (uint)this;
}

/* ref: Component::Completion::CompletionModuleInterface::vf0 */
uint F_00ada7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xada7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10eac74));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Text::TextModuleInterface::FixedSheetInterface::vf0 */
uint F_00ada800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xada800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10eaca0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ada830 */
byte F_00ada830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xada830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar3 = 1;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)),param_2,REFG(undefined4, 0x108cc50));
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x54)),param_1,REFG(undefined4, 0x108cc50));
  uVar1 = F_00ad9c10(uVar2,uVar1,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (int)uVar1 < 0;
}

/* ref: FUN_00ada8b0 */
uint F_00ada8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xada8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ada8c0 */
byte F_00ada8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xada8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined4 uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),*param_1,REFG(undefined4, 0x108cc50));
  uVar2 = 1;
  uVar1 = F_0042a970(*(undefined4 *)this);
  uVar1 = F_00ad9c40(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)this,uVar1,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1 == 0;
}

/* ref: FUN_00ada930 */
uint F_00ada930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xada930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ada940 */
byte F_00ada940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xada940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *param_1 == *(int *)this;
}

/* ref: FUN_00ada960 */
uint F_00ada960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xada960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined1 *)((int)this + 0x54) = (undefined1)param_2;
  return (uint)this;
}

/* ref: Component::Completion::CompletionModule::vf7 */
byte F_00ada9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xada9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042aca0(param_2);
  piVar1 = *(int * PTR32 *)(this + 0x10);
  iVar5 = *piVar1;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(iVar5 + 0xc))(*(undefined4 *)(this + 0x10),param_1,uVar2);
  if (uVar2 == 1) {
    uVar2 = F_0042b790(this + 0x144);
    uVar3 = F_0042b790(param_2);
    uVar4 = F_0042b790(this + 0x198);
    iVar5 = (uVar3 - uVar2) - uVar4;
    uVar2 = F_0042b790(this + 0x144);
    uVar2 = F_0042d2f0(param_2,((undefined1 *)(gen_frame + 0x4)),uVar2,iVar5);
    F_0042ccf0(param_2,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Component::Completion::CompletionModule::vf9 */
uint F_00adaa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadaa70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  pcVar3 = (char *)F_0042a990(param_1);
  cVar1 = *pcVar3;
  uVar4 = CONCAT31((int3)((uint)((int)(uintptr_t)pcVar3) >> 8),cVar1);
  while (cVar1 != '\0') {
    if ((char)uVar4 == '\x02') {
      if (pcVar3[1] == '.') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = (uint)(byte)pcVar3[2];
      uVar2 = uVar5 + 3;
    }
    else {
      uVar5 = F_0042acc0(uVar4);
      uVar2 = uVar5;
    }
    pcVar3 = pcVar3 + uVar2;
    cVar1 = *pcVar3;
    uVar4 = CONCAT31((int3)(uVar5 >> 8),cVar1);
  }
  return uVar6;
}

/* ref: FUN_00adaac0 */
uint F_00adaac0(unsigned int gen_a0)
{
  GEN_ENTER(0xadaac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x140;
}

/* ref: FUN_00adaad0 */
uint F_00adaad0(unsigned int gen_a0)
{
  GEN_ENTER(0xadaad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x194;
}

/* ref: Component::Completion::CompletionModule::vf6 */
uint F_00adaae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadaae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = (int)(*param_1 << 0x19) >> 0x19;
  if (iVar1 == -2) {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x18) +
                      *((char *)GEN_TOP(((*param_1 >> 7) + *(int *)(this + 0x48)))) * 4)));
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
    return piVar2[1] - *piVar2 >> 2;
  }
  return (iVar1 != -1) - 2;
}

/* ref: FUN_00adab30 */
uint F_00adab30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadab30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int * piVar4;
  
  if ((((-1 < param_1) && (param_1 < *(int *)((int)this + 0x48) - *(int *)((int)this + 0x44))) &&
      (iVar3 = (int)*((char *)GEN_TOP((*(int *)((int)this + 0x44) + param_1))), -1 < iVar3)) &&
     ((iVar3 < *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2 &&
      (iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x14) + iVar3 * 4))), iVar3 != 0)))) {
    bVar1 = F_00bc8ab0(iVar3);
    iVar3 = (int)(char)bVar1;
    if ((-1 < (char)bVar1) &&
       (iVar3 < (*(int *)((int)this + 0x134) - *(int *)((int)this + 0x130)) / 0x58)) {
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xc))))(*(int * PTR32 *)((int)this + 8))));
      if ((*piVar4 == 2) && (*((char *)GEN_TOP((iVar3 * 0x58 + 0x54 + *(int *)((int)this + 0x130)))) != '\0'))
      {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *param_2 = uVar2;
      return iVar3 * 0x58 + *(int *)((int)this + 0x130);
    }
  }
  return 0;
}

/* ref: Component::Completion::CompletionModule::vf1 */
unsigned int F_00adabf0(unsigned int gen_a0)
{
  GEN_ENTER(0xadabf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  code * pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  
  if (this[0x14] != (undefined1)0x0) {
    iVar3 = *(int *)(this + 0x18);
    (*(uint *)(gen_frame + 0x20)) = 0;
    if (*(int *)(this + 0x1c) - iVar3 >> 2 != 0) {
      do {
        piVar5 = *(int * PTR32 *)(iVar3 + (*(uint *)(gen_frame + 0x20)) * 4);
        (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar5;
        bVar2 = F_00bc8ab0(piVar5);
        (*(byte *)(gen_frame + 0x28)) = bVar2;
        uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 4))(piVar5);
        if ((uVar4 != 0) && ('\0' < (char)bVar2)) {
          if ((uint)(int)(char)(*(byte *)(gen_frame + 0x28)) <
              (uint)((*(int *)(this + 0x138) - *(int *)(this + 0x134)) / 0x58)) {
            iVar6 = (char)(*(byte *)(gen_frame + 0x28)) * 0x58;
            iVar3 = **(int * PTR32 *)(this + 0xc);
            uVar4 = F_0042a990(*(int *)(this + 0x134) + iVar6);
            piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar3 + 8))(*(undefined4 *)(this + 0xc),uVar4)));
            if (piVar5 != (int *)0x0) {
              (*(undefined1 *)(gen_frame + 0x24)) = *((undefined1 *)GEN_TOP((*(int *)(this + 0x134) + 0x54 + iVar6)));
              uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x2c))(piVar5);
              (*(byte *)(gen_frame + 0x28)) = (byte)uVar4;
              bVar2 = F_00bc8aa0((*(int * PTR32 *)(gen_frame + 0x1c)));
              (*(byte *)(gen_frame + 0x18)) = bVar2;
              (*(undefined1 *)(gen_frame + 0x1a)) = (*(undefined1 *)(gen_frame + 0x24));
              iVar3 = *(int *)(this + 0x134);
              (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x10);
              (*(byte *)(gen_frame + 0x19)) = (*(byte *)(gen_frame + 0x28));
              pcVar1 = *(gen_code32 *)(*piVar5 + 0x5c);
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[2])REFP(0x10eacb4));
              (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
              (*pcVar1)(piVar5,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),iVar3 + iVar6);
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[2])REFP(0x10e90bc));
            }
          }
        }
        iVar3 = *(int *)(this + 0x18);
        uVar4 = (*(uint *)(gen_frame + 0x20)) + 1;
        (*(uint *)(gen_frame + 0x20)) = uVar4;
      } while (uVar4 < (uint)(*(int *)(this + 0x1c) - iVar3 >> 2));
    }
  }
  return 0;
}

/* ref: Component::Completion::CompletionModule::vf3 */
uint F_00adad20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadad20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (this[0x14] == (undefined1)0x0) {
    return 0;
  }
  if (param_1 < 0) {
    if ((int)(*(int *)(this + 0x3c) - *(uint *)(this + 0x38)) >> 2 == 0) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *param_2 = *(uint *)(this + 0x38);
    return (uint)(this + 0x28);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x18) + *((char *)GEN_TOP((*(int *)(this + 0x48) + param_1))) * 4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,0);
  *param_2 = uVar2;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  *(uint *)(this + 0x130) = uVar2;
  return uVar2;
}

/* ref: Component::Completion::CompletionModule::vf5 */
uint F_00adada0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xadada0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(uint *)(gen_frame + 0xd8)) = uVar3;
  piVar1 = *(int * PTR32 *)(this + 0x130);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2 == 0) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    if (param_1 != *(int *)(this + 0x38)) {
      iVar5 = piVar1[1] - *piVar1;
      goto LAB_00adae05;
    }
  }
  iVar5 = *(int *)(this + 0x2c) - *(int *)(this + 0x28);
LAB_00adae05: ;
  if (iVar5 >> 2 <= param_2) {
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0xdc));
    return 0xfffffffd;
  }
  iVar5 = param_2 * 4;
  uVar2 = *(uint *)(iVar5 + param_1);
  iVar4 = (int)(uVar2 << 0x19) >> 0x19;
  if (iVar4 == -2) {
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar2 >> 7;
  }
  if (iVar4 == -1) {
    F_0042e430(param_3,*(undefined4 *)(*piVar1 + iVar5));
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return 0xfffffffe;
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x80,"<fixed(%d,%d)>",iVar4,uVar2 >> 7);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x20))))(*(int * PTR32 *)(this + 0x10),((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x58)));
  F_0042ccf0(param_3,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(param_4,*((undefined4 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + iVar5))));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return 0xffffffff;
}

/* ref: FUN_00adaf00 */
uint F_00adaf00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadaf00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[4])REFP(0x10eaca0));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10eace0));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[4])REFP(0x10eaccc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x10eacc0));
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  uVar1 = F_004296a0(0x1c,0,0x2be);
  *(uint *)((int)this + 0x5c) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x5c) + 4))) = *(int *)((int)this + 0x5c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x5c) + 8))) = *(int *)((int)this + 0x5c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x18))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x19))) = 1;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  F_0042b630((int)this + 0x88);
  F_0042b630((int)this + 0xdc);
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  F_0042b630((int)this + 0x144);
  F_0042b630((int)this + 0x198);
  return (uint)this;
}

/* ref: FUN_00adb000 */
uint F_00adb000(unsigned int gen_a0)
{
  GEN_ENTER(0xadb000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined * this_00;
  uint uVar6;
  
  uVar6 = *(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18) >> 2;
  if (uVar6 != 0) {
    uVar5 = 0;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + uVar5 * 4)));
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  iVar2 = *(int *)((int)this + 0x18);
  if (iVar2 != *(int *)((int)this + 0x1c)) {
    F_00c46e20(iVar2,*(int *)((int)this + 0x1c),0);
    *(int *)((int)this + 0x1c) = iVar2;
  }
  iVar2 = *(int *)((int)this + 0x28);
  if (iVar2 != *(int *)((int)this + 0x2c)) {
    F_00c46e20(iVar2,*(int *)((int)this + 0x2c),0);
    *(int *)((int)this + 0x2c) = iVar2;
  }
  if (*(int *)((int)this + 0x38) != *(int *)((int)this + 0x3c)) {
    *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x38);
  }
  iVar2 = *(int *)((int)this + 0x48);
  if (iVar2 != *(int *)((int)this + 0x4c)) {
    F_00c46e20(iVar2,*(int *)((int)this + 0x4c),0);
    *(int *)((int)this + 0x4c) = iVar2;
  }
  *(undefined1 *)((int)this + 0x15) = 0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x30))))(*(int * PTR32 *)((int)this + 0x10),0);
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x134);
  if (pvVar3 != *(undefined * PTR32 *)((int)this + 0x138)) {
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x138);
    for (this_00 = pvVar3; this_00 != pvVar4; this_00 = (undefined *)((int)this_00 + 0x58)) {
      F_0042c880(this_00);
    }
    *(undefined * PTR32 *)((int)this + 0x138) = pvVar3;
  }
  F_00adec30((undefined *)((int)this + 0x58));
  uVar6 = F_0042aca0((int)this + 0xdc);
  *(undefined1 *)((int)this + 0x14) = 0;
  return uVar6;
}

/* ref: FUN_00adb160 */
uint F_00adb160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadb160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00adb000((undefined *)((int)this + -8));
  return uVar1;
}

/* ref: FUN_00adb170 */
byte F_00adb170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xadb170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a4;
  uint * param_6 = (uint *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined * pvVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined * this;
  undefined * pvVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if ((*(uint *)&REFG(undefined, 0x14c0864) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14c0864) = *(uint *)&REFG(undefined, 0x14c0864) | 1;
    F_0042cc20(&REFG(undefined, 0x14c0810),":[,]#",REFG(undefined4, 0x108cc50));
    F_00c47de6(((code *)REFP(0x107c750)));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  F_00ada1b0(param_1,&REFG(undefined, 0x14c0810),&(*(undefined * PTR32 *)(gen_frame + 0x14)));
  *param_6 = 0xffffffff;
  *param_2 = 0;
  iVar1 = *param_4;
  if (iVar1 != param_4[1]) {
    F_00c46e20(iVar1,param_4[1],0);
    param_4[1] = iVar1;
  }
  F_0042aca0(param_5);
  iVar1 = (int)(*(undefined * PTR32 *)(gen_frame + 0x18)) - (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x14))) >> 0x1f;
  if (((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x14))) / 0x54 + iVar1 == iVar1) {
    F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 0;
  }
  if ((*(uint *)&REFG(undefined, 0x14c0864) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x14c0864) = *(uint *)&REFG(undefined, 0x14c0864) | 2;
    F_0042cc20(&REFG(undefined, 0x14c07b8),&REFG(undefined, 0x10eac48),REFG(undefined4, 0x108cc50));
    F_00c47de6(((code *)REFP(0x107c740)));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x2c)) = 0;
  F_00adfab0(param_4,(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x14))) / 0x54) * 2 + -2);
  (*(uint *)(gen_frame + 0x8)) = 1;
  if (1 < (uint)(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x14))) / 0x54)) {
    (*(int *)(gen_frame + 0xc)) = 0x54;
    do {
      pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x24));
      this = (*(undefined * PTR32 *)(gen_frame + 0x24));
      if ((*(undefined * PTR32 *)(gen_frame + 0x24)) != (*(undefined * PTR32 *)(gen_frame + 0x28))) {
        do {
          F_0042c880(this);
          this = (undefined *)((int)this + 0x54);
        } while (this != pvVar2);
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar6;
      }
      F_00ada1b0((*(int *)(gen_frame + 0xc)) + (int)(*(undefined * PTR32 *)(gen_frame + 0x14)),&REFG(undefined, 0x14c07b8),&(*(undefined * PTR32 *)(gen_frame + 0x24)));
      iVar1 = ((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x24))) / 0x54;
      if (iVar1 == 2) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x34)),(*(undefined * PTR32 (*)[1])REFP(0x10eac4c)),REFG(undefined4, 0x108cc50));
        bVar3 = F_0042ac50((*(undefined * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x34)));
        F_0042c880(((undefined1 *)(gen_frame + 0x34)));
        if (bVar3 == 0) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x34)),&REFG(undefined, 0x10eac50),REFG(undefined4, 0x108cc50));
          bVar3 = F_0042ac50((*(undefined * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x34)));
          F_0042c880(((undefined1 *)(gen_frame + 0x34)));
          if (bVar3 == 0) {
            uVar4 = F_00a4cf70((*(undefined * PTR32 *)(gen_frame + 0x24)),10);
            uVar5 = F_00a4cf70((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x54,10);
            if ((-1 < (int)uVar4) && (-1 < (int)uVar5)) {
              (*(uint *)(gen_frame + 0x10)) = uVar4;
              F_00ae0280(param_4,&(*(uint *)(gen_frame + 0x10)));
              (*(uint *)(gen_frame + 0x10)) = uVar5;
              F_00ae0280(param_4,&(*(uint *)(gen_frame + 0x10)));
            }
          }
          else {
            F_0042ccf0(param_5,(int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x54);
          }
        }
        else {
          uVar4 = F_00a4cf70((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x54,10);
          *param_6 = uVar4;
        }
      }
      else if (iVar1 == 1) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x34)),&REFG(undefined, 0x10eac58),REFG(undefined4, 0x108cc50));
        bVar3 = F_0042ac50((*(undefined * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x34)));
        F_0042c880(((undefined1 *)(gen_frame + 0x34)));
        if (bVar3 != 0) {
          *param_2 = 1;
        }
      }
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 0x54;
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
    } while ((*(uint *)(gen_frame + 0x8)) < (uint)(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x14))) / 0x54));
  }
  F_0042ccf0(param_3,(*(undefined * PTR32 *)(gen_frame + 0x14)));
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x24));
  if ((*(undefined * PTR32 *)(gen_frame + 0x24)) != (undefined *)0x0) {
    for (; pvVar6 != pvVar2; pvVar6 = (undefined *)((int)pvVar6 + 0x54)) {
      F_0042c880(pvVar6);
    }
    F_00429760((*(undefined * PTR32 *)(gen_frame + 0x24)),(((*(int *)(gen_frame + 0x2c)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x24))) / 0x54) * 0x54,0x35);
  }
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x2c)) = 0;
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  if ((*(undefined * PTR32 *)(gen_frame + 0x14)) != (undefined *)0x0) {
    for (; pvVar6 != pvVar2; pvVar6 = (undefined *)((int)pvVar6 + 0x54)) {
      F_0042c880(pvVar6);
    }
    F_00429760((*(undefined * PTR32 *)(gen_frame + 0x14)),(((*(int *)(gen_frame + 0x1c)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x14))) / 0x54) * 0x54,0x35);
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 1;
}

/* ref: FUN_00adb580 */
uint F_00adb580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xadb580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  char * param_4 = (char *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int * in_ecx;
  byte bVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  int * piVar4;
  
  cVar1 = *param_3;
  piVar4 = ((int *)GEN_TOP(CONCAT31((int3)((uint)in_EAX >> 8),cVar1)));
  if ((cVar1 != '\0') && (cVar1 != '.')) {
    in_ecx = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) +
                      *((char *)GEN_TOP((*(int *)((int)this + 0x48) + param_1))) * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*in_ecx + 0x10))(in_ecx,param_3,param_2);
    piVar4 = (int *)0x0;
    if (uVar3 != 0) {
      bVar2 = F_00bc8aa0(in_ecx);
      (*(char * PTR32 *)(gen_frame + 0x8)) = param_4;
      (*(uint *)(gen_frame + 0x10)) = bVar2 & 0x7f | param_2 << 7;
      (*(char * PTR32 *)(gen_frame + 0xc)) = param_3;
      F_00ae04f0((undefined *)((int)this + 0x58),((undefined1 *)(gen_frame + 0x14)),&(*(char * PTR32 *)(gen_frame + 0x8)));
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0xc))))(*(int * PTR32 *)((int)this + 0xc))));
      if ((*piVar4 == 0) && (param_3 != param_4)) {
        bVar2 = F_00bc8aa0(in_ecx);
        (*(char * PTR32 *)(gen_frame + 0x8)) = param_3;
        (*(char * PTR32 *)(gen_frame + 0xc)) = param_3;
        (*(uint *)(gen_frame + 0x10)) = bVar2 & 0x7f | param_2 << 7;
        piVar4 = (int *)F_00ae04f0((undefined *)((int)this + 0x58),((undefined1 *)(gen_frame + 0x14)),&(*(char * PTR32 *)(gen_frame + 0x8)));
      }
    }
  }
  return (uint)piVar4;
}

/* ref: Component::Completion::CompletionModule::vf2 */
unsigned int F_00adb640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadb640u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  char * pcVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  pcVar2 = (char *)(*(int * PTR32 *)&gen_args[2]);
  if ((((*(undefined * PTR32 *)&gen_args[0])[0x14] != (undefined1)0x0) && (*(char *)(*(int * PTR32 *)&gen_args[2]) != '\0')) &&
     (*(char *)(*(int * PTR32 *)&gen_args[2]) != '.')) {
    (*(int * PTR32 *)&gen_args[2]) = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + *((char *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x48))) + (*(int *)&gen_args[1])))) * 4)));
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x10))))((*(int * PTR32 *)&gen_args[2]),pcVar2,(*(int *)&gen_args[3]));
    if (uVar4 != 0) {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
      puVar5 = (undefined4 *)F_00ade6a0(&(*(int *)&gen_args[1]),*puVar1,puVar1,uVar4);
      if ((undefined4 *)*puVar5 != puVar1) {
        F_00ade9d0((*(undefined * PTR32 *)&gen_args[0]) + 0x58,&(*(int *)&gen_args[1]),(undefined4 *)*puVar5);
        F_0042aca0((*(undefined * PTR32 *)&gen_args[0]) + 0xdc);
      }
      bVar3 = F_00bc8aa0((*(int * PTR32 *)&gen_args[2]));
      (*(uint *)(gen_frame + 0x10)) = (*(int *)&gen_args[3]) << 7 | bVar3 & 0x7f;
      (*(uint *)(gen_frame + 0x8)) = uVar4;
      (*(uint *)(gen_frame + 0xc)) = uVar4;
      F_00ae04f0((*(undefined * PTR32 *)&gen_args[0]) + 0x58,((undefined1 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x8)));
    }
  }
  return 0;
}

/* ref: FUN_00adb700 */
byte F_00adb700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadb700u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  undefined * pvVar7;
  char * pcVar8;
  
  iVar1 = **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar4 = F_0042a990((*(int *)&gen_args[2]));
  piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 8))(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),uVar4)));
  (*(int * PTR32 *)(gen_frame + 0x24)) = piVar5;
  if ((piVar5 != (int *)0x0) && (uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 4))(piVar5), (char)uVar4 == '\0')) {
    if (-1 < (*(int *)&gen_args[3])) {
      ((code *)*(gen_code32 *)(*piVar5 + 0x30))(piVar5,(*(int *)&gen_args[3]));
    }
    uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x2c))(piVar5);
    (*(uint *)(gen_frame + 0x20)) = uVar4;
    (*(int *)&gen_args[3]) = 0;
    do {
      pcVar2 = *(gen_code32 *)(*piVar5 + 0x54);
      (*(int *)&gen_args[2]) = 0;
      piVar6 = ((int *)GEN_TOP((*pcVar2)(piVar5,(*(int *)&gen_args[3]),&(*(int *)&gen_args[2]))));
      if (piVar6 == (int *)0x0) {
        if ((*(int *)&gen_args[2]) == -1) {
          return 1;
        }
      }
      else {
        pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6)));
        pcVar8 = (char *)F_00cb0950(pvVar7,(*(uint *)(gen_frame + 0x20)));
        iVar1 = (*(int *)&gen_args[2]);
        if ((*pcVar8 != '\0') && (*pcVar8 != '.')) {
          piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x18) +
                            *((char *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x48) + (*(int *)&gen_args[1])))) * 4)));
          uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0x10))(piVar6,pcVar8,(*(int *)&gen_args[2]));
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x24));
          if (uVar4 != 0) {
            bVar3 = F_00bc8aa0(piVar6);
            pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x28));
            (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar8;
            (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar8;
            (*(uint *)(gen_frame + 0x14)) = bVar3 & 0x7f | iVar1 << 7;
            F_00ae04f0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x58),((undefined1 *)(gen_frame + 0x18)),&(*(char * PTR32 *)(gen_frame + 0xc)));
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar7 + 0xc) + 0xc))))(*(int * PTR32 *)((int)pvVar7 + 0xc));
            piVar5 = (*(int * PTR32 *)(gen_frame + 0x24));
          }
        }
      }
      (*(int *)&gen_args[3]) = (*(int *)&gen_args[3]) + 1;
    } while( true );
  }
  return 0;
}

/* ref: FUN_00adb830 */
uint F_00adb830(unsigned int gen_a0)
{
  GEN_ENTER(0xadb830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10eace0));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[4])REFP(0x10eaccc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x10eacc0));
  F_00adb000(this);
  F_0042c880((undefined *)((int)this + 0x198));
  F_0042c880((undefined *)((int)this + 0x144));
  F_00adfeb0((undefined *)((int)this + 0x134));
  F_0042c880((undefined *)((int)this + 0xdc));
  F_0042c880((undefined *)((int)this + 0x88));
  iVar1 = *(int *)((int)this + 0x78);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x80) - iVar1 >> 2) * 4,0x2be);
  }
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  iVar1 = *(int *)((int)this + 0x68);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x70) - iVar1 >> 2) * 4,0x2be);
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  F_00adeec0((undefined *)((int)this + 0x58),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x5c),
               *(undefined4 * PTR32 *)((int)this + 0x5c));
  F_00429760(*(undefined4 *)((int)this + 0x5c),0x1c,0x2be);
  iVar1 = *(int *)((int)this + 0x48);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x50) - iVar1,0x2be);
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  iVar1 = *(int *)((int)this + 0x38);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x40) - iVar1 >> 2) * 4,0x2be);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  iVar1 = *(int *)((int)this + 0x28);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x30) - iVar1 >> 2) * 4,0x2be);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  iVar1 = *(int *)((int)this + 0x18);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0x20) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[4])REFP(0x10eaca0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10eac74));
  return uVar2;
}

/* ref: FUN_00adb9d0 */
uint F_00adb9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xadb9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (*(uint *)&gen_args[1]) + 1;
  if ((uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)))) < uVar5) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
    iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
    ((undefined1 *)(gen_frame + 0x8))[0] = 0xff;
    if ((uint)(iVar1 - iVar4) < uVar5) {
      F_00adfc80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))),iVar1,(iVar4 - iVar1) + uVar5,((undefined1 *)(gen_frame + 0x8)));
    }
    else if (uVar5 < (uint)(iVar1 - iVar4)) {
      iVar4 = iVar4 + uVar5;
      (*(int *)(gen_frame + 0x4)) = iVar4;
      if (iVar4 != iVar1) {
        F_00c46e20(iVar4,iVar1,0);
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = (*(int *)(gen_frame + 0x4));
      }
    }
    *((undefined1 *)GEN_TOP(((*(uint *)&gen_args[1]) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)))))) = *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x15)));
  }
  iVar1 = (*(uint *)&gen_args[1]);
  *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x15))) = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x15))) + '\x01';
  F_00ae05e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),&(*(uint *)&gen_args[4]));
  F_00ae0570(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))),&(*(undefined4 *)&gen_args[2]));
  uVar5 = iVar1 << 7 | 0x7e;
  (*(uint *)&gen_args[1]) = uVar5;
  F_00ae01a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))),&(*(uint *)&gen_args[1]));
  puVar2 = (undefined4 *)F_004296a0(0x1c,0,0x2be);
  *puVar2 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = (*(undefined4 *)&gen_args[3]);
    puVar2[4] = (*(undefined4 *)&gen_args[2]);
    puVar2[5] = uVar5;
  }
  F_00adefd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))),((undefined1 *)(gen_frame + 0x0)),puVar2,0);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))));
  if (*piVar3 == 0) {
    puVar2 = (undefined4 *)F_004296a0(0x1c,0,0x2be);
    *puVar2 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
    puVar2[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
    puVar2[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
    *(undefined2 *)(puVar2 + 6) = 0;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[3] = (*(undefined4 *)&gen_args[2]);
      puVar2[4] = (*(undefined4 *)&gen_args[2]);
      puVar2[5] = uVar5;
    }
    F_00adefd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))),((undefined1 *)(gen_frame + 0x0)),puVar2,0);
  }
  return (*(uint *)&gen_args[4]);
}

/* ref: FUN_00adbb20 */
unsigned int F_00adbb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadbb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  undefined4 * puVar6;
  byte * pbVar7;
  int iVar8;
  uint uVar9;
  byte * pbVar10;
  uint uVar11;
  undefined4 * puVar12;
  bool bVar13;
  
  puVar12 = *(undefined4 * PTR32 *)((int)this + 0x5c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar12;
  puVar6 = (undefined4 *)F_00ade710(((undefined1 *)(gen_frame + 0xc)),*puVar12,puVar12,param_1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)*puVar6;
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != puVar12) {
    do {
      pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x14));
      puVar12 = *(undefined4 * PTR32 *)((int)this + 0x68);
      if (puVar12 != *(undefined4 * PTR32 *)((int)this + 0x6c)) {
        do {
          pbVar7 = (byte *)*puVar12;
          pbVar10 = (byte *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[4];
          do {
            bVar1 = *pbVar7;
            bVar13 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_00adbb94: ;
              iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_00adbb99;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar13 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_00adbb94;
            pbVar7 = pbVar7 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_00adbb99: ;
          if (iVar8 == 0) goto LAB_00adbd2c;
          puVar12 = puVar12 + 1;
        } while (puVar12 != *(undefined4 * PTR32 *)((int)this + 0x6c));
      }
      puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 4;
      puVar6 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x6c);
      if ((puVar12 < puVar6) && (puVar3 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x68), puVar3 <= puVar12))
      {
        if (puVar6 == *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x70)) {
          iVar8 = (int)puVar6 - (int)((int)(uintptr_t)puVar3) >> 2;
          if (iVar8 == -1) goto LAB_00adbda5;
          uVar9 = iVar8 + 1;
          uVar11 = (int)*(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x70) - (int)((int)(uintptr_t)puVar3) >> 2;
          if (uVar11 < uVar9) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_0049f580((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x68),uVar11);
          }
        }
        if (*(undefined4 * PTR32 *)((int)pvVar4 + 0x6c) != (undefined4 *)0x0) {
          **(undefined4 * PTR32 *)((int)pvVar4 + 0x6c) =
               *((undefined4 *)GEN_TOP((*(int *)((int)pvVar4 + 0x68) + ((int)puVar12 - (int)((int)(uintptr_t)puVar3) >> 2) * 4)))
          ;
        }
      }
      else {
        if (puVar6 == *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x70)) {
          iVar8 = (int)puVar6 - *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x68) >> 2;
          if (iVar8 == -1) goto LAB_00adbda5;
          uVar9 = iVar8 + 1;
          uVar11 = (int)*(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x70) - *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x68) >> 2;
          if (uVar11 < uVar9) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_0049f580((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x68),uVar11);
          }
        }
        if (*(undefined4 * PTR32 *)((int)pvVar4 + 0x6c) != (undefined4 *)0x0) {
          **(undefined4 * PTR32 *)((int)pvVar4 + 0x6c) = *puVar12;
        }
      }
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x14));
      *(int *)((int)pvVar4 + 0x6c) = *(int *)((int)pvVar4 + 0x6c) + 4;
      puVar12 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x7c);
      puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 5;
      if ((puVar6 < puVar12) && (puVar3 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x78), puVar3 <= puVar6))
      {
        if (puVar12 == *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x80)) {
          iVar8 = (int)puVar12 - (int)((int)(uintptr_t)puVar3) >> 2;
          if (iVar8 == -1) {
LAB_00adbda5: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar9 = iVar8 + 1;
          uVar11 = (int)*(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x80) - (int)((int)(uintptr_t)puVar3) >> 2;
          if (uVar11 < uVar9) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_00adf7d0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x78),uVar11);
          }
        }
        if (*(undefined4 * PTR32 *)((int)pvVar5 + 0x7c) != (undefined4 *)0x0) {
          **(undefined4 * PTR32 *)((int)pvVar5 + 0x7c) =
               *((undefined4 *)GEN_TOP((*(int *)((int)pvVar5 + 0x78) + ((int)puVar6 - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
        }
      }
      else {
        if (puVar12 == *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x80)) {
          iVar8 = (int)puVar12 - *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x78) >> 2;
          if (iVar8 == -1) goto LAB_00adbda5;
          uVar9 = iVar8 + 1;
          uVar11 = (int)*(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x80) - *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x78) >> 2;
          if (uVar11 < uVar9) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_00adf7d0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x78),uVar11);
          }
        }
        if (*(undefined4 * PTR32 *)((int)pvVar5 + 0x7c) != (undefined4 *)0x0) {
          **(undefined4 * PTR32 *)((int)pvVar5 + 0x7c) = *puVar6;
        }
      }
      *(int *)((int)pvVar5 + 0x7c) = *(int *)((int)pvVar5 + 0x7c) + 4;
LAB_00adbd2c: ;
      puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
      if (*(char *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 0x19) == '\0') {
        puVar6 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[2];
        if (*(char *)((int)puVar6 + 0x19) == '\0') {
          cVar2 = *(char *)((int)*puVar6 + 0x19);
          puVar3 = (undefined4 *)*puVar6;
          while (cVar2 == '\0') {
            cVar2 = *(char *)((int)*puVar3 + 0x19);
            puVar6 = puVar3;
            puVar3 = (undefined4 *)*puVar3;
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar6;
        }
        else {
          puVar6 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[1];
          cVar2 = *(char *)((int)puVar6 + 0x19);
          puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
          while ((cVar2 == '\0' && (puVar3 == (undefined4 *)puVar6[2]))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar6;
            puVar6 = (undefined4 *)puVar6[1];
            cVar2 = *(char *)((int)puVar6 + 0x19);
            puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar6;
        }
      }
      puVar6 = (undefined4 *)F_00ade710(((undefined1 *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),param_1);
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)*puVar6;
      this = (*(undefined * PTR32 *)(gen_frame + 0x14));
    } while ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != puVar12);
  }
  return 0;
}

/* ref: Component::Completion::CompletionModule::vf4 */
uint F_00adbdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadbdb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined * this_00;
  undefined * this_01;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (this[0x14] == (undefined1)0x0) {
    return 0;
  }
  uVar2 = F_0042a970(param_1);
  if (uVar2 != 0) {
    this_00 = this + 0x88;
    F_0042ccf0(this_00,param_1);
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0xc))))(*(int * PTR32 *)(this + 0xc))));
    if (*piVar3 == 0) {
      F_0042ab30(this_00);
      F_0042b8f0(this_00);
    }
    this_01 = this + 0xdc;
    bVar1 = F_0042b6f0(this_00,this_01);
    if (bVar1 != 0) {
      F_0042ccf0(this_01,this_00);
      F_0049f4d0(this + 0x68);
      if (*(int *)(this + 0x78) != *(int *)(this + 0x7c)) {
        *(int *)(this + 0x7c) = *(int *)(this + 0x78);
      }
      F_00adbb20(this,param_1);
      F_00adbb20(this,this_01);
    }
    if (*(int *)(this + 0x68) != *(int *)(this + 0x6c)) {
      iVar4 = *(int *)(this + 0x78);
      if (*(int *)(this + 0x7c) - iVar4 >> 2 == 0) {
        iVar4 = 0;
      }
      *param_2 = iVar4;
      *(undefined * PTR32 *)(this + 0x130) = this + 0x68;
      return (uint)(this + 0x68);
    }
    return 0;
  }
  if (*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2 != 0) {
    *param_2 = *(int *)(this + 0x38);
    return (uint)(this + 0x28);
  }
                    
  F_00c457e7("invalid vector<T> subscript");
}

/* ref: Component::Completion::CompletionModule::vf8 */
uint F_00adbec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadbec0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint * this_00;
  byte * pbVar4;
  byte * pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  
  this_00 = (*(uint * PTR32 *)&gen_args[2]);
  uVar8 = *(*(uint * PTR32 *)&gen_args[2]);
  if (uVar8 != (*(uint * PTR32 *)&gen_args[2])[1]) {
    F_00c46e20(uVar8,(*(uint * PTR32 *)&gen_args[2])[1],0);
    this_00[1] = uVar8;
  }
  pbVar5 = (byte *)F_0042a990((*(uint *)&gen_args[1]));
  bVar1 = *pbVar5;
  (*(uint * PTR32 *)&gen_args[2]) = (uint *)pbVar5;
  do {
    if (bVar1 == 0) {
      (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[2]) - (int)pbVar5 & 0xffff)));
      F_00ae06e0(this_00,&(*(uint * PTR32 *)&gen_args[2]));
      return (int)(this_00[1] - *this_00) >> 1;
    }
    (*(uint *)&gen_args[1]) = (int)(*(uint * PTR32 *)&gen_args[2]) - (int)pbVar5 & 0xffff;
    puVar2 = (undefined4 *)this_00[1];
    uVar9 = (undefined2)((int)(*(uint * PTR32 *)&gen_args[2]) - (int)pbVar5);
    if (*(byte *)(*(uint * PTR32 *)&gen_args[2]) == 2) {
      if ((&(*(uint *)&gen_args[1]) < puVar2) && (puVar3 = (undefined4 *)*this_00, puVar3 <= &(*(uint *)&gen_args[1]))) {
        if (puVar2 == (undefined4 *)this_00[2]) {
          iVar6 = (int)puVar2 - (int)((int)(uintptr_t)puVar3) >> 1;
          if (iVar6 == -1) goto LAB_00adc0e0;
          uVar7 = iVar6 + 1;
          uVar8 = (int)this_00[2] - (int)((int)(uintptr_t)puVar3) >> 1;
          if (uVar8 < uVar7) {
            if (-(uVar8 >> 1) - 1 < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar7) {
              uVar8 = uVar7;
            }
            F_00ae00b0(this_00,uVar8);
          }
        }
        if ((undefined2 *)this_00[1] != (undefined2 *)0x0) {
          *(undefined2 *)this_00[1] =
               *((undefined2 *)GEN_TOP((*this_00 + ((int)&(*(uint *)&gen_args[1]) - (int)((int)(uintptr_t)puVar3) >> 1) * 2)));
          this_00[1] = this_00[1] + 2;
          (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[2]) + *((byte *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[2]) + 2))) + 3)));
          goto LAB_00adc0ae;
        }
      }
      else {
        if (puVar2 == (undefined4 *)this_00[2]) {
          iVar6 = (int)((int)puVar2 - *this_00) >> 1;
          if (iVar6 == -1) goto LAB_00adc0e0;
          uVar7 = iVar6 + 1;
          uVar8 = (int)((int)this_00[2] - *this_00) >> 1;
          if (uVar8 < uVar7) {
            if (-(uVar8 >> 1) - 1 < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar7) {
              uVar8 = uVar7;
            }
            F_00ae00b0(this_00,uVar8);
          }
        }
        if ((undefined2 *)this_00[1] != (undefined2 *)0x0) {
          *(undefined2 *)this_00[1] = uVar9;
        }
      }
      this_00[1] = this_00[1] + 2;
      (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[2]) + *((byte *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[2]) + 2))) + 3)));
    }
    else {
      if (&(*(uint *)&gen_args[1]) < puVar2) {
        puVar3 = (undefined4 *)*this_00;
        if (&(*(uint *)&gen_args[1]) < puVar3) goto LAB_00adc054;
        if (puVar2 == (undefined4 *)this_00[2]) {
          iVar6 = (int)puVar2 - (int)((int)(uintptr_t)puVar3) >> 1;
          if (iVar6 == -1) goto LAB_00adc0e0;
          uVar7 = iVar6 + 1;
          uVar8 = (int)this_00[2] - (int)((int)(uintptr_t)puVar3) >> 1;
          if (uVar8 < uVar7) {
            if (-(uVar8 >> 1) - 1 < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar7) {
              uVar8 = uVar7;
            }
            F_00ae00b0(this_00,uVar8);
          }
        }
        if ((undefined2 *)this_00[1] != (undefined2 *)0x0) {
          *(undefined2 *)this_00[1] =
               *((undefined2 *)GEN_TOP((*this_00 + ((int)&(*(uint *)&gen_args[1]) - (int)((int)(uintptr_t)puVar3) >> 1) * 2)));
        }
      }
      else {
LAB_00adc054: ;
        if (puVar2 == (undefined4 *)this_00[2]) {
          iVar6 = (int)((int)puVar2 - *this_00) >> 1;
          if (iVar6 == -1) {
LAB_00adc0e0: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar7 = iVar6 + 1;
          uVar8 = (int)((int)this_00[2] - *this_00) >> 1;
          if (uVar8 < uVar7) {
            if (-(uVar8 >> 1) - 1 < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar7) {
              uVar8 = uVar7;
            }
            F_00ae00b0(this_00,uVar8);
          }
        }
        if ((undefined2 *)this_00[1] != (undefined2 *)0x0) {
          *(undefined2 *)this_00[1] = uVar9;
        }
      }
      pbVar4 = (byte *)(*(uint * PTR32 *)&gen_args[2]);
      this_00[1] = this_00[1] + 2;
      uVar8 = F_0042acc0((uint)*(byte *)(*(uint * PTR32 *)&gen_args[2]));
      (*(uint * PTR32 *)&gen_args[2]) = (uint *)(pbVar4 + uVar8);
    }
LAB_00adc0ae: ;
    bVar1 = *(byte *)(*(uint * PTR32 *)&gen_args[2]);
  } while( true );
}

/* ref: FUN_00adc0f0 */
byte F_00adc0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xadc0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  int iVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  undefined * pvVar7;
  char * _Str;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x198)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  if (*(char *)((int)this + 0x14) != '\0') {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c) ^ (uint)(uint)(gen_frame + 0x19c));
    return 1;
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x10))))(*(int * PTR32 *)((int)this + 0xc));
  if ((char)uVar4 != '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
    return 0;
  }
  iVar1 = **(int * PTR32 *)((int)this + 0xc);
  uVar4 = F_0042a990(param_1);
  piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 8))(*(undefined4 *)((int)this + 0xc),uVar4)));
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar5;
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0x30))(piVar5,2);
    F_00adfe30((undefined *)((int)this + 0x134),&(*(uint *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x134),
                 *(undefined4 *)((int)this + 0x138));
    F_0042cbc0(((undefined1 *)(gen_frame + 0x140)),param_1);
    (*(undefined1 *)(gen_frame + 0x194)) = 0;
    F_00ae0650((undefined *)((int)this + 0x134),((undefined1 *)(gen_frame + 0x140)));
    F_0042c880(((undefined1 *)(gen_frame + 0x140)));
    F_0042b630(((undefined1 *)(gen_frame + 0xec)));
    F_0042b630(((undefined1 *)(gen_frame + 0x98)));
    pcVar2 = *(gen_code32 *)(*piVar5 + 0x14);
    ((int *)(gen_frame + 0x1c))[0] = 0;
    ((int *)(gen_frame + 0x1c))[1] = 0;
    ((int *)(gen_frame + 0x1c))[2] = 0;
    uVar4 = (*pcVar2)(piVar5);
    (*(uint *)(gen_frame + 0x14)) = uVar4;
    (*(uint *)(gen_frame + 0x30)) = 0;
    if (uVar4 != 0) {
      do {
        piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x54))(piVar5,(*(uint *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x10)))));
        if (piVar6 != (int *)0x0) {
          pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6)));
          _Str = (char *)F_00cb0950(pvVar7,1);
          piVar5 = (int *)F_00cb0910(pvVar7,0);
          iVar1 = *piVar5;
          pcVar8 = (char *)F_00cb0950(pvVar7,2);
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
          pcVar8 = (char *)F_00cb0950(pvVar7,3);
          F_0042cc20(((undefined1 *)(gen_frame + 0x144)),_Str,REFG(undefined4, 0x108cc50));
          if ((*pcVar8 == '\0') || (*pcVar8 == '-')) {
            pcVar8 = (*(char * PTR32 *)(gen_frame + 0x34));
          }
          uVar4 = iVar1 - 1;
          if (uVar4 < 0x100) {
            if (*_Str == '\0') {
              F_00adb580((*(undefined * PTR32 *)(gen_frame + 0x3c)),uVar4,(*(undefined4 *)(gen_frame + 0x10)),(*(char * PTR32 *)(gen_frame + 0x34)),pcVar8);
            }
            else {
              pcVar9 = F_00c51220(_Str,0x23);
              if (pcVar9 == (char *)0x0) {
                (*(uint *)(gen_frame + 0x2c)) = 0;
              }
              else {
                uVar10 = F_0046f610(pcVar9 + 1,10);
                (*(uint *)(gen_frame + 0x2c)) = uVar10;
              }
              if (*_Str == '@') {
                uVar10 = F_00406b90(0x8c,0,0);
                if (uVar10 == 0) {
                  F_00adb9d0((*(undefined * PTR32 *)(gen_frame + 0x3c)),uVar4,(*(char * PTR32 *)(gen_frame + 0x34)),pcVar8,0);
                }
                else {
                  uVar10 = F_00bc8bc0(uVar10,uVar4,0);
                  F_00adb9d0((*(undefined * PTR32 *)(gen_frame + 0x3c)),uVar4,(*(char * PTR32 *)(gen_frame + 0x34)),pcVar8,uVar10);
                }
              }
              else if (*_Str == '#') {
                pvVar7 = (undefined *)F_00406b90(200,0,0);
                if (pvVar7 == (undefined *)0x0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = F_00bc8cb0(pvVar7,0xffffffff,0xffffffff,(*(uint *)(gen_frame + 0x2c)));
                }
                F_00adb9d0((*(undefined * PTR32 *)(gen_frame + 0x3c)),uVar4,(*(char * PTR32 *)(gen_frame + 0x34)),pcVar8,uVar10);
                if (param_4 != (undefined1 *)0x0) {
                  *param_4 = (char)uVar4;
                }
              }
              else {
                bVar3 = F_00adb170(((undefined1 *)(gen_frame + 0x144)),&(*(undefined1 *)(gen_frame + 0x3b)),((undefined1 *)(gen_frame + 0xec)),((int *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x98)),&(*(undefined4 *)(gen_frame + 0x4)));
                uVar10 = (*(uint *)(gen_frame + 0x2c));
                if (bVar3 != 0) {
                  if ((*(uint *)(gen_frame + 0x2c)) == 0) {
                    uVar10 = F_00406b90(0x8c,0,0);
                    if (uVar10 == 0) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = F_00bc8bc0(uVar10,uVar4,
                                            (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x138) -
                                            *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x134)) / 0x58);
                    }
                    this = (*(undefined * PTR32 *)(gen_frame + 0x3c));
                    pvVar7 = (undefined *)F_00adb9d0((*(undefined * PTR32 *)(gen_frame + 0x3c)),uVar4,(*(char * PTR32 *)(gen_frame + 0x34)),pcVar8,uVar10);
                    F_00bc8eb0(pvVar7,((int *)(gen_frame + 0x1c)));
                    F_00bc8ae0(pvVar7,((undefined1 *)(gen_frame + 0x98)));
                    bVar3 = F_00adb700(this,uVar4,((undefined1 *)(gen_frame + 0xec)),(*(undefined4 *)(gen_frame + 0x4)));
                    if (bVar3 == 0) {
                      F_00adb000(this);
                      F_0042c880(((undefined1 *)(gen_frame + 0x144)));
                      break;
                    }
                  }
                  else {
                    pvVar7 = (undefined *)F_00406b90(200,0,0);
                    if (pvVar7 == (undefined *)0x0) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = F_00bc8cb0(pvVar7,uVar4,
                                            (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x138) -
                                            *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x134)) / 0x58,uVar10);
                    }
                    pvVar7 = (undefined *)F_00adb9d0((*(undefined * PTR32 *)(gen_frame + 0x3c)),uVar4,(*(char * PTR32 *)(gen_frame + 0x34)),pcVar8,uVar10);
                    F_00bc8eb0(pvVar7,((int *)(gen_frame + 0x1c)));
                    F_00bc8ae0(pvVar7,((undefined1 *)(gen_frame + 0x98)));
                    this = (*(undefined * PTR32 *)(gen_frame + 0x3c));
                  }
                  F_0042cbc0(((undefined1 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0xec)));
                  (*(undefined1 *)(gen_frame + 0x94)) = (*(undefined1 *)(gen_frame + 0x3b));
                  F_00ae0650((undefined *)((int)this + 0x134),((undefined1 *)(gen_frame + 0x40)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x40)));
                }
              }
            }
          }
          F_0042c880(((undefined1 *)(gen_frame + 0x144)));
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x18));
          this = (*(undefined * PTR32 *)(gen_frame + 0x3c));
        }
        uVar4 = (*(uint *)(gen_frame + 0x30)) + 1;
        (*(uint *)(gen_frame + 0x30)) = uVar4;
      } while (uVar4 < (*(uint *)(gen_frame + 0x14)));
    }
    if ((*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18) & 0xfffffffcU) != 0) {
      F_0042ccf0((undefined *)((int)this + 0x144),(*(undefined4 *)(gen_frame + 0xc)));
      F_0042ccf0((undefined *)((int)this + 0x198),(*(undefined4 *)(gen_frame + 0x8)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x30))))(*(int * PTR32 *)((int)this + 0x10),(int)this + 4);
      *(undefined1 *)((int)this + 0x14) = 1;
      if (((int *)(gen_frame + 0x1c))[0] != 0) {
        F_00429760(((int *)(gen_frame + 0x1c))[0],(((int *)(gen_frame + 0x1c))[2] - ((int *)(gen_frame + 0x1c))[0] >> 2) * 4,0x2be);
      }
      ((int *)(gen_frame + 0x1c))[0] = 0;
      ((int *)(gen_frame + 0x1c))[1] = 0;
      ((int *)(gen_frame + 0x1c))[2] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x98)));
      F_0042c880(((undefined1 *)(gen_frame + 0xec)));
      F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
      return 1;
    }
    if (((int *)(gen_frame + 0x1c))[0] != 0) {
      F_00429760(((int *)(gen_frame + 0x1c))[0],(((int *)(gen_frame + 0x1c))[2] - ((int *)(gen_frame + 0x1c))[0] >> 2) * 4,0x2be);
    }
    ((int *)(gen_frame + 0x1c))[0] = 0;
    ((int *)(gen_frame + 0x1c))[1] = 0;
    ((int *)(gen_frame + 0x1c))[2] = 0;
    F_0042c880(((undefined1 *)(gen_frame + 0x98)));
    F_0042c880(((undefined1 *)(gen_frame + 0xec)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return 0;
}

/* ref: FUN_00adc6b0 */
uint F_00adc6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadc6b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00adc6e0 */
uint F_00adc6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadc6e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00adc6f0 */
uint F_00adc6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadc6f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00adc710 */
uint F_00adc710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadc710u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00adc720 */
uint F_00adc720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadc720u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00adc750 */
uint F_00adc750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadc750u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x58 + *in_ecx;
}

/* ref: FUN_00adc760 */
uint F_00adc760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadc760u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x58 + *in_ecx;
}

/* ref: FUN_00adc780 */
uint F_00adc780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadc780u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00adc800 */
uint F_00adc800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadc800u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00adc860 */
uint F_00adc860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadc860u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00adc890 */
uint F_00adc890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadc890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adc8c0 */
uint F_00adc8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadc8c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00adc930 */
uint F_00adc930(unsigned int gen_a0)
{
  GEN_ENTER(0xadc930u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x18;
}

/* ref: FUN_00adc940 */
uint F_00adc940(unsigned int gen_a0)
{
  GEN_ENTER(0xadc940u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x19;
}

/* ref: FUN_00adc950 */
uint F_00adc950(unsigned int gen_a0)
{
  GEN_ENTER(0xadc950u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00adc960 */
uint F_00adc960(unsigned int gen_a0)
{
  GEN_ENTER(0xadc960u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00adc970 */
uint F_00adc970(unsigned int gen_a0)
{
  GEN_ENTER(0xadc970u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00adc980 */
uint F_00adc980(unsigned int gen_a0)
{
  GEN_ENTER(0xadc980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00adc990 */
uint F_00adc990(unsigned int gen_a0)
{
  GEN_ENTER(0xadc990u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x19)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x19);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00adc9b0 */
uint F_00adc9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xadc9b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x19);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x19);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00adc9f0 */
uint F_00adc9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadc9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adca20 */
uint F_00adca20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadca20u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00adca70 */
byte F_00adca70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadca70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00adcac0 */
uint F_00adcac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadcac0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00adcb20 */
uint F_00adcb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadcb20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adcba0 */
uint F_00adcba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadcba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adcc10 */
uint F_00adcc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadcc10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00adcc30 */
uint F_00adcc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadcc30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adccb0 */
uint F_00adccb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadccb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x58,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adcce0 */
unsigned int F_00adcce0(unsigned int gen_a0)
{
  GEN_ENTER(0xadcce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x19) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x19) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x19);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x19);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x19);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x19);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00adcd50 */
uint F_00adcd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadcd50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00adcd90 */
uint F_00adcd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadcd90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00adcde0 */
uint F_00adcde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadcde0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00adce10 */
uint F_00adce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadce10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x58,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00adce40 */
uint F_00adce40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadce40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adce50 */
uint F_00adce50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadce50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 2,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00adce70 */
uint F_00adce70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadce70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 2,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adcea0 */
uint F_00adcea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadcea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adceb0 */
uint F_00adceb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadceb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adcec0 */
uint F_00adcec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadcec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adced0 */
uint F_00adced0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadced0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adcee0 */
uint F_00adcee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadcee0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adcef0 */
uint F_00adcef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadcef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adcf00 */
uint F_00adcf00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadcf00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adcf80 */
uint F_00adcf80(unsigned int gen_a0)
{
  GEN_ENTER(0xadcf80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00adcf90 */
uint F_00adcf90(unsigned int gen_a0)
{
  GEN_ENTER(0xadcf90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00adcfa0 */
uint F_00adcfa0(unsigned int gen_a0)
{
  GEN_ENTER(0xadcfa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00adcfb0 */
uint F_00adcfb0(unsigned int gen_a0)
{
  GEN_ENTER(0xadcfb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00adcfc0 */
uint F_00adcfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xadcfc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00adcfd0 */
uint F_00adcfd0(unsigned int gen_a0)
{
  GEN_ENTER(0xadcfd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00adcfe0 */
uint F_00adcfe0(unsigned int gen_a0)
{
  GEN_ENTER(0xadcfe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00adcff0 */
uint F_00adcff0(unsigned int gen_a0)
{
  GEN_ENTER(0xadcff0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add000 */
uint F_00add000(unsigned int gen_a0)
{
  GEN_ENTER(0xadd000u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add010 */
uint F_00add010(unsigned int gen_a0)
{
  GEN_ENTER(0xadd010u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add030 */
uint F_00add030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00add050 */
uint F_00add050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00add070 */
uint F_00add070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00add0a0 */
uint F_00add0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00add0c0 */
uint F_00add0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined1 *)((int)this + 0x54) = *(undefined1 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00add0f0 */
uint F_00add0f0(unsigned int gen_a0)
{
  GEN_ENTER(0xadd0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x19) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x19) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x19) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x19) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x19);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x19);
    }
    if (*(char *)(*(int *)this + 0x19) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00add150 */
uint F_00add150(unsigned int gen_a0)
{
  GEN_ENTER(0xadd150u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add160 */
uint F_00add160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadd160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00add180 */
uint F_00add180(unsigned int gen_a0)
{
  GEN_ENTER(0xadd180u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add190 */
uint F_00add190(unsigned int gen_a0)
{
  GEN_ENTER(0xadd190u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add1a0 */
uint F_00add1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xadd1a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add1b0 */
uint F_00add1b0(unsigned int gen_a0)
{
  GEN_ENTER(0xadd1b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add1c0 */
uint F_00add1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xadd1c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add1d0 */
uint F_00add1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xadd1d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add1e0 */
uint F_00add1e0(unsigned int gen_a0)
{
  GEN_ENTER(0xadd1e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add220 */
uint F_00add220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadd220u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00add270 */
uint F_00add270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadd270u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 1) * 2;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00add2d0 */
uint F_00add2d0(unsigned int gen_a0)
{
  GEN_ENTER(0xadd2d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add2e0 */
uint F_00add2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xadd2e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add2f0 */
uint F_00add2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined1 *)((int)this + 0x54) = *(undefined1 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00add340 */
uint F_00add340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00add350 */
uint F_00add350(unsigned int gen_a0)
{
  GEN_ENTER(0xadd350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00adcce0(this);
  return (uint)this;
}

/* ref: FUN_00add370 */
byte F_00add370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00add390 */
uint F_00add390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadd390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00add3a0 */
uint F_00add3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xadd3a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add3b0 */
uint F_00add3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xadd3b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add400 */
uint F_00add400(unsigned int gen_a0)
{
  GEN_ENTER(0xadd400u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add410 */
uint F_00add410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadd410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00add440 */
uint F_00add440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00add470 */
uint F_00add470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00add490 */
uint F_00add490(unsigned int gen_a0)
{
  GEN_ENTER(0xadd490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add4a0 */
uint F_00add4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00add500 */
uint F_00add500(unsigned int gen_a0)
{
  GEN_ENTER(0xadd500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00add520 */
uint F_00add520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_00add550 */
uint F_00add550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xadd550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10eacb4));
  *(undefined1 *)((int)this + 0xd) = (undefined1)param_4;
  *(undefined1 *)((int)this + 0xe) = (undefined1)param_5;
  return (uint)this;
}

/* ref: CompletionCacheFunc_VExcelEntryKey_Excel_Component_Common_PAVExcelEntry::vf1 */
byte F_00add580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadd580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if ((undefined *)*param_2 == (undefined *)0x0) goto LAB_00add656;
  uVar3 = F_00cb0950((undefined *)*param_2,(uint)*(byte *)((int)this + 0xd));
  if (*(char *)((int)this + 0xe) == '\0') {
    F_0042b630(((undefined1 *)(gen_frame + 0x54)));
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)),uVar3,REFG(undefined4, 0x108cc50));
    piVar1 = *(int * PTR32 *)((int)this + 8);
    iVar2 = *piVar1;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0x54)));
    uVar3 = ((code *)*(gen_code32 *)(iVar2 + 0xc))(*(undefined4 *)((int)this + 8),((undefined1 *)(gen_frame + 0x0)),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)));
    if (0 < (int)uVar3) goto LAB_00add630;
  }
  else {
    F_0042b630(((undefined1 *)(gen_frame + 0x54)));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x24))))
              (*(int * PTR32 *)((int)this + 8),param_3,*param_1,((undefined1 *)(gen_frame + 0x54)));
LAB_00add630: ;
    uVar4 = *param_1;
    iVar2 = **(int * PTR32 *)((int)this + 4);
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
    ((code *)*(gen_code32 *)(iVar2 + 8))
              (*(undefined4 *)((int)this + 4),(int)*(char *)((int)this + 0xc),uVar3,uVar4);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
LAB_00add656: ;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return 1;
}

/* ref: FUN_00add670 */
byte F_00add670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: CompletionCacheFunc_VExcelEntryKey_Excel_Component_Common_PAVExcelEntry::vf0 */
uint F_00add6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10e90bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00add7a0 */
uint F_00add7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x19))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00add830 */
uint F_00add830(unsigned int gen_a0)
{
  GEN_ENTER(0xadd830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00adcce0(this);
  return (uint)this;
}

/* ref: FUN_00add860 */
uint F_00add860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00add890 */
uint F_00add890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00add8d0 */
uint F_00add8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00add910 */
uint F_00add910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd910u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00add950 */
uint F_00add950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
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

/* ref: FUN_00add990 */
uint F_00add990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadd990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00add9b0 */
uint F_00add9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadd9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 1;
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

/* ref: FUN_00add9e0 */
uint F_00add9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadd9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00add9f0 */
uint F_00add9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadd9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adda00 */
uint F_00adda00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadda00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adda10 */
uint F_00adda10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadda10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adda20 */
uint F_00adda20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadda20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adda30 */
uint F_00adda30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadda30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adda40 */
uint F_00adda40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadda40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adda60 */
uint F_00adda60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadda60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00adcce0(this);
  return (uint)param_1;
}

/* ref: FUN_00adda80 */
byte F_00adda80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadda80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00addaa0 */
byte F_00addaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaddaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00addac0 */
byte F_00addac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaddac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00addae0 */
byte F_00addae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaddae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00addb00 */
byte F_00addb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaddb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00addb20 */
byte F_00addb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaddb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00addb40 */
uint F_00addb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00addb60 */
uint F_00addb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addb80 */
uint F_00addb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddb80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addba0 */
uint F_00addba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addbc0 */
uint F_00addbc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddbc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addbe0 */
uint F_00addbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddbe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addc00 */
uint F_00addc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddc00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addc20 */
uint F_00addc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddc20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addc40 */
uint F_00addc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addc70 */
uint F_00addc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddc70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addca0 */
uint F_00addca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddca0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00addcd0 */
uint F_00addcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddcd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 1) * 2;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00addd30 */
unsigned int F_00addd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaddd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    *(undefined1 *)((int)param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  }
  return 0;
}

/* ref: FUN_00addd60 */
uint F_00addd60(unsigned int gen_a0)
{
  GEN_ENTER(0xaddd60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00addd80 */
uint F_00addd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00addda0 */
uint F_00addda0(unsigned int gen_a0)
{
  GEN_ENTER(0xaddda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00add0f0(this);
  return (uint)this;
}

/* ref: FUN_00adddb0 */
uint F_00adddb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadddb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00adddc0 */
unsigned int F_00adddc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadddc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00adddf0 */
uint F_00adddf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadddf0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this,iVar1);
    *(undefined1 *)((int)this + 0x54) = *(undefined1 *)(iVar1 + 0x54);
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00adde30 */
uint F_00adde30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadde30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00adde50 */
uint F_00adde50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadde50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00adde60 */
byte F_00adde60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadde60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00addea0 */
uint F_00addea0(unsigned int gen_a0)
{
  GEN_ENTER(0xaddea0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00addeb0 */
uint F_00addeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00added0 */
uint F_00added0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadded0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00addef0 */
uint F_00addef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addf30 */
uint F_00addf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddf30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addf50 */
uint F_00addf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaddf50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addff0 */
uint F_00addff0(unsigned int gen_a0)
{
  GEN_ENTER(0xaddff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00adcce0(this);
  return (uint)this;
}

/* ref: FUN_00ade000 */
uint F_00ade000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade000u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ade010 */
uint F_00ade010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ade020 */
uint F_00ade020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ade030 */
uint F_00ade030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ade050 */
uint F_00ade050(unsigned int gen_a0)
{
  GEN_ENTER(0xade050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00ade090 */
uint F_00ade090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ade0a0 */
uint F_00ade0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade0a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ade0b0 */
uint F_00ade0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ade0c0 */
uint F_00ade0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade0c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ade0d0 */
unsigned int F_00ade0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x19);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00ade0d0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x1c,0x2be);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x19);
  }
  return 0;
}

/* ref: FUN_00ade110 */
uint F_00ade110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x19) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00ade190 */
uint F_00ade190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade190u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ade1a0 */
uint F_00ade1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade1a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ade1b0 */
uint F_00ade1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xade1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ade1c0 */
uint F_00ade1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ade1d0 */
uint F_00ade1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade1d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ade1e0 */
uint F_00ade1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xade1e0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_00ade200 */
uint F_00ade200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade200u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ade210 */
uint F_00ade210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ade220 */
uint F_00ade220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ade240 */
uint F_00ade240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade240u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ade2a0 */
uint F_00ade2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ade2b0 */
uint F_00ade2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ade2d0 */
byte F_00ade2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ade2f0 */
byte F_00ade2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ade310 */
byte F_00ade310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ade330 */
byte F_00ade330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ade350 */
byte F_00ade350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ade370 */
byte F_00ade370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ade390 */
unsigned int F_00ade390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xade390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined1 *)((int)param_2 + 0x54) = *(undefined1 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ade3c0 */
unsigned int F_00ade3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xade3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00ade3f0 */
uint F_00ade3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xade3f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this,iVar1);
      *(undefined1 *)((int)this + 0x54) =
           *((undefined1 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ade430 */
uint F_00ade430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xade430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x1c,0x2be);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x18);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x18) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x18) == '\0') {
        *(undefined1 *)(piVar5 + 6) = 1;
        *(undefined1 *)(iVar2 + 0x18) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x18))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x19) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
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
        *(undefined1 *)(piVar4[1] + 0x18) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x18))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x19) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
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
LAB_00ade62d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x18) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x19))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
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
        *(undefined1 *)(piVar4[1] + 0x18) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x18))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x19) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
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
        goto LAB_00ade62d;
      }
      *(undefined1 *)(piVar5 + 6) = 1;
      *(undefined1 *)(iVar2 + 0x18) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x18))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x18);
  } while( true );
}

/* ref: FUN_00ade660 */
uint F_00ade660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xade660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ade680 */
uint F_00ade680(unsigned int gen_a0)
{
  GEN_ENTER(0xade680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00add0f0(this);
  return (uint)this;
}

/* ref: FUN_00ade690 */
uint F_00ade690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ade6a0 */
uint F_00ade6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xade6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = param_2;
  if (param_2 == param_3) {
    *param_1 = param_2;
    return (uint)param_1;
  }
  do {
    if (piVar4[3] == param_4) break;
    if (*(char *)((int)piVar4 + 0x19) == '\0') {
      piVar2 = (int *)piVar4[2];
      if (*(char *)((int)piVar2 + 0x19) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x19);
        piVar4 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x19);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar4[1] + 0x19);
        piVar3 = (int *)piVar4[1];
        piVar2 = piVar4;
        while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
          cVar1 = *(char *)(piVar4[1] + 0x19);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
        }
      }
    }
  } while (piVar4 != param_3);
  *param_1 = piVar4;
  return (uint)param_1;
}

/* ref: FUN_00ade710 */
uint F_00ade710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xade710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar3;
  if (param_2 == param_3) {
    *param_1 = param_2;
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x5c));
    return (uint)param_1;
  }
  do {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_2[3],REFG(undefined4, 0x108cc50));
    uVar5 = 1;
    uVar3 = F_0042a970(param_4);
    uVar3 = F_00ad9c40(((undefined1 *)(gen_frame + 0x4)),param_4,uVar3,uVar5);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    piVar4 = param_2;
    if (uVar3 == 0) break;
    if (*(char *)((int)param_2 + 0x19) == '\0') {
      piVar4 = (int *)param_2[2];
      if (*(char *)((int)piVar4 + 0x19) == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x19);
        param_2 = piVar4;
        piVar4 = (int *)*piVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x19);
          param_2 = piVar4;
          piVar4 = (int *)*piVar4;
        }
      }
      else {
        cVar1 = *(char *)(param_2[1] + 0x19);
        piVar2 = (int *)param_2[1];
        piVar4 = param_2;
        while ((param_2 = piVar2, cVar1 == '\0' && (piVar4 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x19);
          piVar2 = (int *)param_2[1];
          piVar4 = param_2;
        }
      }
    }
    piVar4 = param_2;
  } while (param_2 != param_3);
  *param_1 = piVar4;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)param_1;
}

/* ref: FUN_00ade800 */
uint F_00ade800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00ade820 */
unsigned int F_00ade820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xade820u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ade850 */
unsigned int F_00ade850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xade850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00ade870 */
uint F_00ade870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00ade880 */
uint F_00ade880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00ade8a0 */
unsigned int F_00ade8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xade8a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ade8d0 */
unsigned int F_00ade8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xade8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  undefined1 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00ade900 */
unsigned int F_00ade900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xade900u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ade930 */
unsigned int F_00ade930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xade930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  undefined2 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00ade960 */
uint F_00ade960(unsigned int gen_a0)
{
  GEN_ENTER(0xade960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00ade9a0 */
uint F_00ade9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade9a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ade9c0 */
uint F_00ade9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xade9c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ade9d0 */
uint F_00ade9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xade9d0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x19))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00adcce0(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x19) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x19) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x19) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[6];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 6))) = (char)piVar3[6];
      *(char *)(piVar3 + 6) = (char)iVar1;
      goto LAB_00adeaea;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x19) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x19) == '\0') {
      piVar4 = (int *)F_00adc9b0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x19) == '\0') {
      uVar5 = F_00adc990(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00adeaea: ;
  if ((char)piVar3[6] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[6] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[6] == '\0') {
            *(undefined1 *)(piVar6 + 6) = 1;
            *(undefined1 *)(piVar4 + 6) = 0;
            F_00ade110((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x19) == '\0') {
            if ((*(char *)(*piVar6 + 0x18) != '\x01') || (*(char *)(piVar6[2] + 0x18) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x18) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x18) = 1;
                *(undefined1 *)(piVar6 + 6) = 0;
                F_00add7a0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 6) = (char)piVar4[6];
              *(undefined1 *)(piVar4 + 6) = 1;
              *(undefined1 *)(piVar6[2] + 0x18) = 1;
              F_00ade110((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00adeba8: ;
            *(undefined1 *)(piVar6 + 6) = 0;
          }
        }
        else {
          if ((char)piVar6[6] == '\0') {
            *(undefined1 *)(piVar6 + 6) = 1;
            *(undefined1 *)(piVar4 + 6) = 0;
            F_00add7a0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x19) == '\0') {
            if ((*(char *)(piVar6[2] + 0x18) == '\x01') && (*(char *)(*piVar6 + 0x18) == '\x01'))
            goto LAB_00adeba8;
            if (*(char *)(*piVar6 + 0x18) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x18) = 1;
              *(undefined1 *)(piVar6 + 6) = 0;
              F_00ade110((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 6) = (char)piVar4[6];
            *(undefined1 *)(piVar4 + 6) = 1;
            *(undefined1 *)(*piVar6 + 0x18) = 1;
            F_00add7a0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 6) = 1;
  }
  F_00429760(piVar3,0x1c,0x2be);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00adec30 */
uint F_00adec30(unsigned int gen_a0)
{
  GEN_ENTER(0xadec30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x19);
  while (cVar1 == '\0') {
    F_00ade0d0(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x1c,0x2be);
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

/* ref: FUN_00adec90 */
uint F_00adec90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadec90u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00adecf0 */
uint F_00adecf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadecf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00aded50 */
uint F_00aded50(unsigned int gen_a0)
{
  GEN_ENTER(0xaded50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00aded90 */
uint F_00aded90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaded90u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00adede0 */
uint F_00adede0(unsigned int gen_a0)
{
  GEN_ENTER(0xadede0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00adee60 */
uint F_00adee60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadee60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 1) * 2;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00adeec0 */
uint F_00adeec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadeec0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00adec30(this);
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
    F_00ade9d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00adef60 */
uint F_00adef60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadef60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00ade6a0(((undefined1 *)(gen_frame + 0x8)),param_2,param_3,param_4);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00adef90 */
uint F_00adef90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadef90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00ade710(((undefined1 *)(gen_frame + 0x8)),param_2,param_3,param_4);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00adefd0 */
uint F_00adefd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadefd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  char cVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  puVar6 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar2 = (undefined4 *)puVar6[1];
  cVar1 = *(char *)((int)puVar2 + 0x19);
  cVar9 = '\x01';
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),1);
  puVar7 = param_1;
  uVar3 = (*(undefined4 *)(gen_frame + 0xc));
  while (cVar1 == '\0') {
    uVar10 = 1;
    if ((char)param_3 == '\0') {
      uVar11 = puVar2[3];
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + 0xc);
      uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x74)),uVar11,REFG(undefined4, 0x108cc50));
      uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x18)),REFG(undefined4, 0x108cc50));
      uVar4 = F_00ad9c10(uVar5,uVar4,uVar10);
      (*(bool *)(gen_frame + 0x1f)) = (int)uVar4 < 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x20)));
      F_0042c880(((undefined1 *)(gen_frame + 0x74)));
      cVar9 = (*(bool *)(gen_frame + 0x1f));
    }
    else {
      uVar11 = puVar2[3];
      uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x20)),*(undefined4 *)(param_2 + 0xc),REFG(undefined4, 0x108cc50));
      uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x74)),uVar11,REFG(undefined4, 0x108cc50));
      uVar4 = F_00ad9c10(uVar5,uVar4,uVar10);
      cVar9 = -1 < (int)uVar4;
      F_0042c880(((undefined1 *)(gen_frame + 0x74)));
      F_0042c880(((undefined1 *)(gen_frame + 0x20)));
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
    }
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3, (unsigned long long)((undefined3)((uint)uVar3 >> 8)));
    (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),cVar9);
    if (cVar9 == '\0') {
      puVar8 = (undefined4 *)puVar2[2];
    }
    else {
      puVar8 = (undefined4 *)*puVar2;
    }
    puVar6 = puVar2;
    puVar2 = puVar8;
    uVar3 = (*(undefined4 *)(gen_frame + 0xc));
    cVar1 = *(char *)((int)puVar8 + 0x19);
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar6;
  if (cVar9 != '\0') {
    if (puVar6 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      puVar6 = (undefined4 *)F_00ade430(this,&(*(undefined4 *)(gen_frame + 0x18)),1,puVar6,param_2);
      *puVar7 = *puVar6;
      *(undefined1 *)(puVar7 + 1) = 1;
      goto LAB_00adf1f4;
    }
    F_00add0f0(&(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
  }
  puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
  uVar10 = *(undefined4 *)(param_2 + 0xc);
  uVar11 = 1;
  (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x14))[3];
  uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x74)),uVar10,REFG(undefined4, 0x108cc50));
  uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x18)),REFG(undefined4, 0x108cc50));
  uVar4 = F_00ad9c10(uVar5,uVar4,uVar11);
  (*(bool *)(gen_frame + 0x1f)) = (int)uVar4 < 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x20)));
  F_0042c880(((undefined1 *)(gen_frame + 0x74)));
  if ((*(bool *)(gen_frame + 0x1f)) == false) {
    F_00429760(param_2,0x1c,0x2be);
    *puVar7 = puVar2;
    *(undefined1 *)(puVar7 + 1) = 0;
  }
  else {
    puVar6 = (undefined4 *)F_00ade430(this,&(*(undefined4 *)(gen_frame + 0x18)),uVar3,puVar6,param_2);
    *puVar7 = *puVar6;
    *(undefined1 *)(puVar7 + 1) = 1;
  }
LAB_00adf1f4: ;
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return (uint)puVar7;
}

/* ref: FUN_00adf210 */
uint F_00adf210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00adf230 */
unsigned int F_00adf230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf230u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf260 */
unsigned int F_00adf260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00adf280 */
unsigned int F_00adf280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00adf2b0 */
unsigned int F_00adf2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf2b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf2e0 */
unsigned int F_00adf2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf2e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00adf310 */
unsigned int F_00adf310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf310u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf340 */
uint F_00adf340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf340u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,iVar1);
      *(undefined1 *)((int)this + 0x54) = *(undefined1 *)(iVar1 + 0x54);
    }
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00adf380 */
unsigned int F_00adf380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf380u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = *((undefined2 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00adf3b0 */
uint F_00adf3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadf3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00adf3d0 */
unsigned int F_00adf3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xadf3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00adf400 */
uint F_00adf400(unsigned int gen_a0)
{
  GEN_ENTER(0xadf400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00adf440 */
unsigned int F_00adf440(unsigned int gen_a0)
{
  GEN_ENTER(0xadf440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00adf470 */
uint F_00adf470(unsigned int gen_a0)
{
  GEN_ENTER(0xadf470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00adf4b0 */
uint F_00adf4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xadf4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  uVar1 = *(uint *)this;
  if (uVar1 != uVar2) {
    uVar2 = F_00c46e20(uVar1,uVar2,0);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00adf4e0 */
unsigned int F_00adf4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xadf4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00adf510 */
uint F_00adf510(unsigned int gen_a0)
{
  GEN_ENTER(0xadf510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00adeec0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00adf540 */
uint F_00adf540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00adf560 */
unsigned int F_00adf560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf560u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf590 */
unsigned int F_00adf590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00adf5b0 */
unsigned int F_00adf5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00adf5e0 */
unsigned int F_00adf5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf5e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf610 */
unsigned int F_00adf610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00adf640 */
unsigned int F_00adf640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf640u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf670 */
uint F_00adf670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf670u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar1 + (int)this);
        *(undefined1 *)((int)this + 0x54) = *(undefined1 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00adf6b0 */
unsigned int F_00adf6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf6b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = *((undefined2 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00adf6e0 */
uint F_00adf6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadf6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_00adf710 */
uint F_00adf710(unsigned int gen_a0)
{
  GEN_ENTER(0xadf710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00adeec0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x1c,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adf750 */
uint F_00adf750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadf750u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00adf790 */
uint F_00adf790(unsigned int gen_a0)
{
  GEN_ENTER(0xadf790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00adf7d0 */
uint F_00adf7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadf7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x2be);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2be);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00adf880 */
uint F_00adf880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  return (uint)(param_1 + param_2);
}

/* ref: FUN_00adf8b0 */
unsigned int F_00adf8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadf8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x58)) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00adf8e0 */
unsigned int F_00adf8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf8e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf910 */
uint F_00adf910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  puVar1 = param_3;
  if (param_1 != param_2) {
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return (uint)puVar1;
}

/* ref: FUN_00adf940 */
unsigned int F_00adf940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf940u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf970 */
uint F_00adf970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf970u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar1 + (int)this);
        *(undefined1 *)((int)this + 0x54) = *(undefined1 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00adf9b0 */
unsigned int F_00adf9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf9b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = *((undefined2 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00adf9e0 */
uint F_00adf9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadf9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_00adfa00 */
uint F_00adfa00(unsigned int gen_a0)
{
  GEN_ENTER(0xadfa00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00adeec0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x1c,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adfa40 */
uint F_00adfa40(unsigned int gen_a0)
{
  GEN_ENTER(0xadfa40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00adfab0 */
uint F_00adfab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadfab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x2be);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2be);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00adfba0 */
uint F_00adfba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadfba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00adf7d0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00adf7d0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00adfc10 */
uint F_00adfc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadfc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00adfab0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00adfab0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00adfc80 */
uint F_00adfc80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadfc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined1 uVar1;
  int iVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 * puVar10;
  
  uVar7 = (*(uint *)&gen_args[2]);
  if ((*(uint *)&gen_args[2]) != 0) {
    iVar8 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
    iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    if ((iVar8 - iVar2) - 1U < (*(uint *)&gen_args[2])) {
                    
      F_00c4579a("vector<T> too long");
    }
    uVar9 = (iVar2 - iVar8) + (*(uint *)&gen_args[2]);
    uVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - iVar8;
    if (uVar3 < uVar9) {
      if (-(uVar3 >> 1) - 1 < uVar3) {
        (*(uint *)&gen_args[2]) = 0;
      }
      else {
        (*(uint *)&gen_args[2]) = uVar3 + (uVar3 >> 1);
      }
      if ((*(uint *)&gen_args[2]) < uVar9) {
        (*(uint *)&gen_args[2]) = uVar9;
      }
      puVar4 = (undefined1 *)F_004296a0((*(uint *)&gen_args[2]),0,0x2be);
      iVar8 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
      F_00adf880(puVar4 + ((int)(*(undefined1 * PTR32 *)&gen_args[1]) - iVar8),uVar7,(*(undefined1 * PTR32 *)&gen_args[3]));
      puVar10 = puVar4;
      for (puVar5 = *(undefined1 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]); puVar5 != (*(undefined1 * PTR32 *)&gen_args[1]); puVar5 = puVar5 + 1) {
        if (puVar10 != (undefined1 *)0x0) {
          *puVar10 = *puVar5;
        }
        puVar10 = puVar10 + 1;
      }
      puVar5 = *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      puVar10 = puVar4 + ((int)(*(undefined1 * PTR32 *)&gen_args[1]) - iVar8) + uVar7;
      for (puVar6 = (*(undefined1 * PTR32 *)&gen_args[1]); puVar6 != puVar5; puVar6 = puVar6 + 1) {
        if (puVar10 != (undefined1 *)0x0) {
          *puVar10 = *puVar6;
        }
        puVar10 = puVar10 + 1;
      }
      iVar8 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
      iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      if (iVar8 != 0) {
        F_00429760(iVar8,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - iVar8,0x2be);
      }
      *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = puVar4 + (*(uint *)&gen_args[2]);
      *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar4 + uVar7 + (iVar2 - iVar8);
      *(undefined1 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = puVar4;
      return (uint)puVar4;
    }
    uVar1 = *(*(undefined1 * PTR32 *)&gen_args[3]);
    (*(undefined1 * PTR32 *)&gen_args[3]) = ((undefined1 *)GEN_TOP(CONCAT13(uVar1,GEN_PIECE(&(*(undefined1 * PTR32 *)&gen_args[3]), 0, 3))));
    if ((uint)(iVar2 - (int)(*(undefined1 * PTR32 *)&gen_args[1])) < (*(uint *)&gen_args[2])) {
      F_00adf910((*(undefined1 * PTR32 *)&gen_args[1]),iVar2,(*(undefined1 * PTR32 *)&gen_args[1]) + (*(uint *)&gen_args[2]));
      F_00adf880(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),(*(undefined1 * PTR32 *)&gen_args[1]) + ((*(uint *)&gen_args[2]) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))),
                   (int)&(*(undefined1 * PTR32 *)&gen_args[3]) + 3);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + (*(uint *)&gen_args[2]);
      uVar7 = F_0049f130((*(undefined1 * PTR32 *)&gen_args[1]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - (*(uint *)&gen_args[2]),(int)&(*(undefined1 * PTR32 *)&gen_args[3]) + 3);
      return uVar7;
    }
    uVar7 = F_00adf910(iVar2 - (*(uint *)&gen_args[2]),iVar2,iVar2);
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar7;
    iVar8 = (iVar2 - (int)(*(undefined1 * PTR32 *)&gen_args[1])) - (*(uint *)&gen_args[2]);
    F_00c46e20(iVar2 - iVar8,(*(undefined1 * PTR32 *)&gen_args[1]),iVar8);
    in_EAX = F_0049f130((*(undefined1 * PTR32 *)&gen_args[1]),(*(undefined1 * PTR32 *)&gen_args[1]) + (*(uint *)&gen_args[2]),(int)&(*(undefined1 * PTR32 *)&gen_args[3]) + 3);
  }
  return in_EAX;
}

/* ref: FUN_00adfe30 */
uint F_00adfe30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadfe30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x58)) {
      F_0042ccf0(this_00,pvVar2);
      *(undefined1 *)((int)this_00 + 0x54) = *(undefined1 *)((int)pvVar2 + 0x54);
      this_00 = (undefined *)((int)this_00 + 0x58);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x58)) {
      F_0042c880(pvVar2);
    }
    *(undefined * PTR32 *)((int)this + 4) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00adfeb0 */
uint F_00adfeb0(unsigned int gen_a0)
{
  GEN_ENTER(0xadfeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x58)) {
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x58) * 0x58,0x2be);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00adff10 */
uint F_00adff10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadff10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x2be);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2be);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00adffc0 */
uint F_00adffc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xadffc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x58,0,0x2be);
    F_00adf970(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x58)) {
        F_0042c880(this_00);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x58) * 0x58,0x2be);
    }
    *(uint *)((int)this + 4) = (((int)pvVar1 - iVar2) / 0x58) * 0x58 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x58 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ae00b0 */
uint F_00ae00b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae00b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined2 * puVar3;
  undefined2 * puVar4;
  undefined2 * puVar5;
  undefined2 * puVar6;
  
  puVar5 = param_1;
  if (((undefined2 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 1))) < param_1) {
    puVar3 = (undefined2 *)F_004296a0((int)((int)(uintptr_t)param_1) * 2,0,0x2be);
    puVar5 = *(undefined2 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined2 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 1) * 2,0x2be);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined2 * PTR32 *)this = puVar3;
    *(undefined2 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined2 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 1);
  }
  return (uint)puVar5;
}

/* ref: FUN_00ae0150 */
uint F_00ae0150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x1c,0,0x2be);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 6) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
    puVar1[5] = param_1[2];
  }
  return (uint)puVar1;
}

/* ref: FUN_00ae01a0 */
uint F_00ae01a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae01a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00adfba0(this,1);
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
      F_00adfba0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00ae0210 */
uint F_00ae0210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00adfba0(this,1);
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
      F_00adfba0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00ae0280 */
uint F_00ae0280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00adfc10(this,1);
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
      F_00adfc10(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00ae02f0 */
uint F_00ae02f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae02f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar2 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
  if ((*(uint *)&gen_args[1]) <= uVar3 - iVar2) {
    if (((*(uint *)&gen_args[1]) < uVar3 - iVar2) && (uVar1 = iVar2 + (*(uint *)&gen_args[1]), uVar1 != uVar3)) {
      uVar3 = F_00c46e20(uVar1,uVar3,0);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar1;
    }
    return uVar3;
  }
  uVar3 = F_00adfc80((*(undefined * PTR32 *)&gen_args[0]),uVar3,(iVar2 - uVar3) + (*(uint *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_00ae0360 */
uint F_00ae0360(unsigned int gen_a0)
{
  GEN_ENTER(0xae0360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00adfe30(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ae0380 */
uint F_00ae0380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00adff10(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00adff10(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00ae03f0 */
uint F_00ae03f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae03f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x58;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00adffc0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00adffc0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ae0480 */
uint F_00ae0480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 1;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 1;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00ae00b0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00ae00b0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00ae04f0 */
uint F_00ae04f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae04f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x1c,0,0x2be);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 6) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
    puVar1[5] = param_2[2];
  }
  F_00adefd0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00ae0550 */
uint F_00ae0550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ae0750((undefined *)((int)this + -4),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00ae0560 */
uint F_00ae0560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ae0750((undefined *)((int)this + -8),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00ae0570 */
uint F_00ae0570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0049f630(this,1);
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
      F_0049f630(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00ae05e0 */
uint F_00ae05e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae05e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00ae0380(this,1);
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
      F_00ae0380(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00ae0650 */
unsigned int F_00ae0650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ae03f0(this,1);
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    iVar4 = ((int)(param_1 - uVar2) / 0x58) * 0x58 + *(int *)this;
    if (pvVar3 != (undefined *)0x0) {
      F_0042cbc0(pvVar3,iVar4);
      *(undefined1 *)((int)pvVar3 + 0x54) = *(undefined1 *)(iVar4 + 0x54);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x58;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ae03f0(this,1);
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    if (pvVar3 != (undefined *)0x0) {
      F_0042cbc0(pvVar3,param_1);
      *(undefined1 *)((int)pvVar3 + 0x54) = *(undefined1 *)(param_1 + 0x54);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x58;
  return 0;
}

/* ref: FUN_00ae06e0 */
uint F_00ae06e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae06e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * puVar1;
  undefined2 * puVar2;
  undefined2 * puVar3;
  
  puVar3 = *(undefined2 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined2 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined2 * PTR32 *)((int)this + 8)) {
      F_00ae0480(this,1);
    }
    puVar2 = *(undefined2 * PTR32 *)((int)this + 4);
    puVar3 = (undefined2 *)0x0;
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = *((undefined2 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 1) * 2)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 2;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined2 * PTR32 *)((int)this + 8)) {
      F_00ae0480(this,1);
    }
    puVar3 = *(undefined2 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 2;
  return (uint)puVar3;
}

/* ref: Component::Completion::CompletionModule::vf0 */
uint F_00ae0750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00adb830(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ae0790 */
unsigned int F_00ae0790(float gen_a0)
{
  GEN_ENTER(0xae0790u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00ae07b0 */
uint F_00ae07b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae07b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined1 *)((int)this + 0x1c94) = 0;
  *(undefined4 *)((int)this + 0x1c90) = 0xffffffff;
  this_00 = (undefined *)((int)this + 0x214);
  iVar2 = 8;
  do {
    F_00b7af70((undefined *)((int)this_00 + -0x1a8),0);
    uVar1 = F_00b7af70(this_00,0);
    this_00 = (undefined *)((int)this_00 + 0x390);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00ae0800 */
unsigned int F_00ae0800(unsigned int gen_a0)
{
  GEN_ENTER(0xae0800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x1c94) = 0;
  return 0;
}

/* ref: FUN_00ae0810 */
uint F_00ae0810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = this;
  if (*(byte *)((int)this + 0x1c94) != 0) {
    do {
      if (*piVar2 == param_1) {
        return (uint)(iVar1 * 0x390 + (int)this);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xe4;
    } while (iVar1 < (int)(uint)*(byte *)((int)this + 0x1c94));
  }
  return 0;
}

/* ref: FUN_00ae0850 */
uint F_00ae0850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((-1 < param_1) && (param_1 < (int)(uint)*(byte *)((int)this + 0x1c94))) {
    return (uint)(param_1 * 0x390 + (int)this);
  }
  return 0;
}

/* ref: FUN_00ae0880 */
uint F_00ae0880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if (*(byte *)((int)this + 0x1c94) != 0) {
    piVar2 = (int *)((int)this + 0x208);
    do {
      if (*piVar2 == param_1) {
        return (uint)(iVar1 * 0x390 + (int)this);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xe4;
    } while (iVar1 < (int)(uint)*(byte *)((int)this + 0x1c94));
  }
  return 0;
}

/* ref: FUN_00ae08d0 */
uint F_00ae08d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae08d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if (*(byte *)((int)this + 0x1c94) != 0) {
    piVar2 = (int *)((int)this + 4);
    do {
      if (*piVar2 == param_1) {
        return (uint)(iVar1 * 0x390 + (int)this);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xe4;
    } while (iVar1 < (int)(uint)*(byte *)((int)this + 0x1c94));
  }
  return 0;
}

/* ref: FUN_00ae0910 */
byte F_00ae0910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = this;
  if (*(byte *)((int)this + 0x1c94) != 0) {
    do {
      if (*piVar2 == param_1) {
        if ((undefined *)(iVar1 * 0x390 + (int)this) == (undefined *)0x0) {
          return 0;
        }
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xe4;
    } while (iVar1 < (int)(uint)*(byte *)((int)this + 0x1c94));
  }
  return 0;
}

/* ref: FUN_00ae0950 */
byte F_00ae0950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  byte * pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  if (*(byte *)((int)this + 0x1c94) != 0) {
    pbVar4 = (byte *)((int)this + 0x10);
    pbVar2 = param_1;
    pbVar5 = pbVar4;
LAB_00ae0970: ;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar4;
      if (bVar1 == *pbVar4) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_00ae0990;
          pbVar2 = pbVar2 + 2;
          pbVar4 = pbVar4 + 2;
          if (bVar1 != 0) goto LAB_00ae0970;
        }
        iVar3 = 0;
      }
      else {
LAB_00ae0990: ;
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar3 == 0) {
        return 1;
      }
      iVar6 = iVar6 + 1;
      pbVar4 = pbVar5 + 0x390;
      pbVar2 = param_1;
      pbVar5 = pbVar4;
    } while (iVar6 < (int)(uint)*(byte *)((int)this + 0x1c94));
  }
  return 0;
}

/* ref: FUN_00ae09c0 */
byte F_00ae09c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae09c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((-1 < *(int *)(in_ecx + 0x1c90)) &&
     (*((int *)GEN_TOP((*(int *)(in_ecx + 0x1c90) * 0x390 + in_ecx))) == param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae09f0 */
uint F_00ae09f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae09f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (((99 < *(uint *)((int)this + 0x200)) ||
      (uVar1 = (&REFG(undefined4, 0x14a9a1c))[*(uint *)((int)this + 0x200)], uVar1 == 0)) ||
     (*(int *)(uVar1 + 0x74) != *(int *)this)) {
    uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)this);
    if (uVar1 != 0) {
      *(uint *)((int)this + 0x200) = (uint)*(ushort *)(uVar1 + 0x88);
    }
  }
  return uVar1;
}

/* ref: FUN_00ae0a30 */
uint F_00ae0a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  double dVar4;
  float local_8;
  
  if (REFG(undefined4, 0x1379694) == 0) {
    return 0;
  }
  if (param_1 == 0) {
    param_1 = REFG(undefined4, 0x1379694);
  }
  iVar3 = 0;
  local_8 = 0.0;
  if (*(char *)((int)this + 0x1c94) == '\0') {
    return REFG(undefined4, 0x1379694);
  }
  puVar2 = (uint *)((int)this + 0x200);
  do {
    if (((99 < *puVar2) || (uVar1 = (&REFG(undefined4, 0x14a9a1c))[*puVar2], uVar1 == 0)) ||
       (*(uint *)(uVar1 + 0x74) != puVar2[-0x80])) {
      uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),puVar2[-0x80]);
      if (uVar1 == 0) {
        return 0;
      }
      *puVar2 = (uint)*(ushort *)(uVar1 + 0x88);
    }
    dVar4 = F_00a600a0(param_1,uVar1);
    if ((float10)local_8 < (float10)(float)dVar4) {
      local_8 = (float)dVar4;
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0xe4;
  } while (iVar3 < (int)(uint)*(byte *)((int)this + 0x1c94));
  return (uint)*(byte *)((int)this + 0x1c94);
}

/* ref: FUN_00ae0b20 */
unsigned int F_00ae0b20(float gen_a0)
{
  GEN_ENTER(0xae0b20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00ae0b60 */
unsigned int F_00ae0b60(void)
{
  GEN_ENTER(0xae0b60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00ae0b90 */
unsigned int F_00ae0b90(unsigned int gen_a0)
{
  GEN_ENTER(0xae0b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x200) = 100;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x590) = 100;
  *(undefined4 *)((int)this + 0x718) = 0;
  *(undefined4 *)((int)this + 0x71c) = 0;
  *(undefined4 *)((int)this + 0x920) = 100;
  *(undefined4 *)((int)this + 0xaa8) = 0;
  *(undefined4 *)((int)this + 0xaac) = 0;
  *(undefined4 *)((int)this + 0xcb0) = 100;
  *(undefined4 *)((int)this + 0xe38) = 0;
  *(undefined4 *)((int)this + 0xe3c) = 0;
  *(undefined4 *)((int)this + 0x1040) = 100;
  *(undefined4 *)((int)this + 0x11c8) = 0;
  *(undefined4 *)((int)this + 0x11cc) = 0;
  *(undefined4 *)((int)this + 0x13d0) = 100;
  *(undefined4 *)((int)this + 0x1558) = 0;
  *(undefined4 *)((int)this + 0x155c) = 0;
  *(undefined4 *)((int)this + 0x1760) = 100;
  *(undefined4 *)((int)this + 0x18e8) = 0;
  *(undefined4 *)((int)this + 0x18ec) = 0;
  *(undefined4 *)((int)this + 0x1af0) = 100;
  *(undefined4 *)((int)this + 0x1c78) = 0;
  *(undefined4 *)((int)this + 0x1c7c) = 0;
  return 0;
}

/* ref: FUN_00ae0c30 */
uint F_00ae0c30(unsigned int gen_a0)
{
  GEN_ENTER(0xae0c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00ae0b90(this);
  return (uint)this;
}

/* ref: FUN_00ae0c70 */
unsigned int F_00ae0c70(float gen_a0)
{
  GEN_ENTER(0xae0c70u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00ae0c90 */
uint F_00ae0c90(unsigned int gen_a0)
{
  GEN_ENTER(0xae0c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 4) = 0x3e90;
  uVar1 = F_00406bb0(0xac0c0,0,0);
  *(uint *)this = uVar1;
  puVar3 = (undefined4 *)((int)this + 8);
  for (iVar2 = 0x2c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00ae0cc0 */
unsigned int F_00ae0cc0(void)
{
  GEN_ENTER(0xae0cc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00ae0cd0 */
uint F_00ae0cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 8);
  uVar2 = param_1;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 4: ;
    case 5: ;
    case 6: ;
    case 7: ;
    case 8: ;
      ((code *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1,0);
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    uVar2 = F_00a35760(&REFG(undefined, 0x14a31e0),piVar1);
  }
  return uVar2;
}

/* ref: FUN_00ae0d60 */
unsigned int F_00ae0d60(unsigned int gen_a0)
{
  GEN_ENTER(0xae0d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((((iVar1 != 0x28) && (iVar1 != 0x29)) && (iVar1 != 0x2a)) && (iVar1 != 0x2b)) {
      F_00ae0cd0(this,iVar1);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x2c);
  return 0;
}

/* ref: FUN_00ae0d90 */
uint F_00ae0d90(unsigned int gen_a0)
{
  GEN_ENTER(0xae0d90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(in_ecx + 8);
  do {
    if (*piVar2 == 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar1 < 0x28);
  return 0xffffffff;
}

/* ref: FUN_00ae0db0 */
uint F_00ae0db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0db0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0x2b < param_2) {
    return 0;
  }
  return *(uint *)(in_ecx + 8 + param_2 * 4);
}

/* ref: FUN_00ae0dd0 */
byte F_00ae0dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xae0dd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return 1 - (0x2b < param_1 - 200U);
}

/* ref: Client::Game::Object::GatheringPointObject::vf43 */
uint F_00ae0e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00a5f970((undefined *)this,param_1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,7,0);
  this[0x8e] = (undefined1)((byte)this[0x8e] & 0xfc);
  return uVar1;
}

/* ref: Client::Game::Object::GatheringPointObject::vf44 */
uint F_00ae0e40(unsigned int gen_a0)
{
  GEN_ENTER(0xae0e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 4))))(*(int * PTR32 *)(this + 0x1a8));
  uVar1 = F_00a5fb90((undefined *)this);
  return uVar1;
}

/* ref: Client::Game::Object::GatheringPointObject::vf42 */
uint F_00ae0e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xae0e60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 8))))
                    (*(int * PTR32 *)(this + 0x1a8),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Client::Game::Object::GatheringPointObject::vf33 */
uint F_00ae0e70(unsigned int gen_a0)
{
  GEN_ENTER(0xae0e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0xc))))(*(int * PTR32 *)(this + 0x1a8));
  uVar1 = F_00a61430((undefined *)this);
  return uVar1;
}

/* ref: Client::Game::Object::GatheringPointObject::vf48 */
byte F_00ae0e90(unsigned int gen_a0)
{
  GEN_ENTER(0xae0e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  if ((char)uVar1 == '\0') {
    uVar1 = F_00ab2d80(*(undefined4 *)(this + 0x80));
    if (uVar1 == 0) {
      return 0;
    }
    this_00 = (undefined *)F_006b8c00();
    F_00718ff0(this_00,this,uVar1);
  }
  return 1;
}

/* ref: Client::Game::Object::GatheringPointObject::vf24 */
uint F_00ae0ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x1a8) + 4)));
  if (iVar1 != 0) {
    *param_1 = iVar1;
  }
  uVar2 = (uint)(iVar1 != 0);
  if (*(int *)(this + 0x178) != 0) {
    param_1[uVar2] = *(int *)(this + 0x178);
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

/* ref: FUN_00ae0f10 */
uint F_00ae0f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xae0f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x80) = param_1;
  *(undefined1 *)((int)this + 0x8a) = 6;
  F_00a5f430(this,param_3);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this);
  return uVar1;
}

/* ref: FUN_00ae0f50 */
byte F_00ae0f50(unsigned int gen_a0)
{
  GEN_ENTER(0xae0f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a8) + 0x10))))(*(int * PTR32 *)((int)this + 0x1a8));
  return (byte)uVar1;
}

/* ref: FUN_00ae0f60 */
byte F_00ae0f60(unsigned int gen_a0)
{
  GEN_ENTER(0xae0f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a8) + 0x14))))(*(int * PTR32 *)((int)this + 0x1a8));
  return (byte)uVar1;
}

/* ref: FUN_00ae0f70 */
byte F_00ae0f70(unsigned int gen_a0)
{
  GEN_ENTER(0xae0f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a8) + 0x18))))(*(int * PTR32 *)((int)this + 0x1a8));
  return (byte)uVar1;
}

/* ref: FUN_00ae0f80 */
byte F_00ae0f80(unsigned int gen_a0)
{
  GEN_ENTER(0xae0f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a8) + 0x1c))))(*(int * PTR32 *)((int)this + 0x1a8));
  return (byte)uVar1;
}

/* ref: FUN_00ae0fa0 */
uint F_00ae0fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xae0fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a8) + 0x24))))
                    (*(int * PTR32 *)((int)this + 0x1a8),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ae0fc0 */
uint F_00ae0fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae0fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  return uVar1;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf1 */
uint F_00ae0fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xae0fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined4 uVar3;
  
  bVar1 = F_006ce640(*(undefined * PTR32 *)(this + 4),*(undefined4 *)(this + 8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((bVar1 != 0) && (uVar2 = *(uint *)(this + 4), *(char *)(uVar2 + 0x148) == '\0')) {
    uVar2 = (uint)*(byte *)(uVar2 + 0x145);
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
      uVar3 = 0x422;
      break;
    case 1: ;
      uVar3 = 0x423;
      break;
    case 2: ;
      uVar3 = 0x424;
      break;
    case 3: ;
      uVar3 = 0x425;
      break;
    default: ;
      goto switchD_00ae100b_default;
    }
    uVar2 = F_00a76e30(uVar3,*(undefined4 *)(this + 0x10),0,0,0,REFG(float, 0x10b8df8));
  }
switchD_00ae100b_default: ;
  return uVar2;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf2 */
uint F_00ae1060(unsigned int gen_a0)
{
  GEN_ENTER(0xae1060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_006ce820(*(undefined4 *)(in_ecx + 4));
  return uVar1;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf3 */
uint F_00ae1070(unsigned int gen_a0)
{
  GEN_ENTER(0xae1070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + 0xec)));
  bVar1 = F_006ce640(*(undefined * PTR32 *)(this + 4),*(undefined4 *)(this + 8));
  if (bVar1 == 0) {
    *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) = *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) & 0xfd;
    *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) = *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) & 0xfe;
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_0068b710(this_00);
      if ((char)uVar2 != '\0') {
        F_0068b730(this_00,(float)(float10)0);
      }
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x28))))(*(int * PTR32 *)(this + 0x10),7,0);
  }
  else {
    bVar3 = *((char *)GEN_TOP((*(int *)(this + 4) + 0x148))) != '\0';
    *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) =
         *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) & 0xfd | bVar3 * '\x02';
    *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) = *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) & 0xfe | bVar3
    ;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x24))))(*(int * PTR32 *)(this + 0x10),7,0);
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_0068b710(this_00);
      if ((char)uVar2 == '\0') {
        uVar2 = F_00699cb0(this_00,(float)(float10)0);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf4 */
byte F_00ae1140(unsigned int gen_a0)
{
  GEN_ENTER(0xae1140u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((byte *)GEN_TOP((*(int *)(in_ecx + 4) + 0x145)));
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf5 */
byte F_00ae1150(unsigned int gen_a0)
{
  GEN_ENTER(0xae1150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((byte *)GEN_TOP((*(int *)(in_ecx + 4) + 0x147)));
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf6 */
byte F_00ae1160(unsigned int gen_a0)
{
  GEN_ENTER(0xae1160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((byte *)GEN_TOP((*(int *)(in_ecx + 4) + 0x148)));
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf7 */
byte F_00ae1170(unsigned int gen_a0)
{
  GEN_ENTER(0xae1170u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((byte *)GEN_TOP((*(int *)(in_ecx + 4) + 0x149)));
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf8 */
byte F_00ae1180(unsigned int gen_a0)
{
  GEN_ENTER(0xae1180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*((int *)GEN_TOP((*(int *)(in_ecx + 4) + 0x130))) != 0) && (*((int *)GEN_TOP((*(int *)(in_ecx + 4) + 0x134))) != 0)
     ) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf9 */
uint F_00ae11a0(unsigned int gen_a0)
{
  GEN_ENTER(0xae11a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006ce740(*(undefined * PTR32 *)(this + 4),&REFG(undefined, 0x14c09e0));
  uVar1 = F_0042a990(&REFG(undefined, 0x14c09e0));
  return uVar1;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf10 */
uint F_00ae11c0(unsigned int gen_a0)
{
  GEN_ENTER(0xae11c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006d59d0(*(undefined * PTR32 *)(this + 4),&REFG(undefined, 0x14c09e0));
  uVar1 = F_0042a990(&REFG(undefined, 0x14c09e0));
  return uVar1;
}

/* ref: FUN_00ae11e0 */
unsigned int F_00ae11e0(unsigned int gen_a0)
{
  GEN_ENTER(0xae11e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0x1f0;
  uVar1 = F_00406bb0(0x4d80,0,0);
  *(uint *)this = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
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
  return 0;
}

/* ref: FUN_00ae12a0 */
unsigned int F_00ae12a0(void)
{
  GEN_ENTER(0xae12a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00ae12b0 */
unsigned int F_00ae12b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae12b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  if (REFG(char, 0x1379c96) == '\0') {
    piVar2 = (int *)((int)this + 8);
    iVar3 = 0x28;
    do {
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00ae1300 */
uint F_00ae1300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae1300u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 0x28) {
    return *(uint *)(in_ecx + 8 + param_2 * 4);
  }
  return 0;
}

/* ref: FUN_00ae1320 */
uint F_00ae1320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae1320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 8);
  while ((*piVar2 == 0 || (*(int *)(*piVar2 + 0x74) != param_1))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (0x27 < iVar1) {
      return 0;
    }
  }
  return *(uint *)((int)this + iVar1 * 4 + 8);
}

/* ref: FUN_00ae1360 */
uint F_00ae1360(unsigned int gen_a0)
{
  GEN_ENTER(0xae1360u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a35730(&REFG(undefined, 0x14a31e0),param_1);
  return uVar1;
}

/* ref: FUN_00ae1370 */
uint F_00ae1370(unsigned int gen_a0)
{
  GEN_ENTER(0xae1370u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a35760(&REFG(undefined, 0x14a31e0),param_1);
  return uVar1;
}

